#ifndef MATRIZ_H
	#define MATRIZ_H

	template <class T> class Matriz{
		private:
			int filas;
			int columnas;
			int objAmount;		/*	int numele	*/
			T** matrx;
		public:
			Matriz(int,int);
			~Matriz();

			void insertElement(T);

			int getFilas();
			int getColumnas();
			int getObjAmount();
			T* getElement(int,int);					/*	consultarValor		*/
			int getTotalSize();
			std::pair<int,int> getPosition(T&);		/*	consultarPosicion	*/

			bool isEmpty(int,int);
	};

	template <class T> Matriz<T>::Matriz(int f, int c){
		filas = f;
		columnas = c;
		objAmount = 0;
		matrx = new T*[filas];
		for (int i=0; i < filas; i++){
			matrx[i] = new T[columnas];
		}
	}
	template <class T> Matriz<T>::~Matriz(){
		for (int i=0; i < filas; i++){
			delete[] matrx[i];
		}
		delete[] matrx;
	}

	template <class T> void Matriz<T>::insertElement(T e){
		if (objAmount < (filas * columnas) ){
			bool objInserted = false;

			for (int i=0; i < filas; i++){
				for (int j=0; j < columnas; j++){

					if ( isEmpty(i,j)) {

						matrx[i][j] = e;
						objAmount++;
						objInserted = true;
						break;
					}
				}

				if (objInserted){
					break;
				}
			}
		}
	}

	template <class T> int Matriz<T>::getFilas(){
		return filas;
	}
	template <class T> int Matriz<T>::getColumnas(){
		return columnas;
	}
	template <class T> int Matriz<T>::getObjAmount(){
		return objAmount;
	}
	template <class T> T* Matriz<T>::getElement(int i, int j){
		return &matrx[i][j];
	}
	template <class T> int Matriz<T>::getTotalSize(){
		return filas * columnas;
	}
	template <class T> std::pair<int,int> Matriz<T>::getPosition(T &e){

		for (int i=0; i < filas; i++){
			for (int j=0; j < columnas; j++){

				if ( !isEmpty(i,j)){

					if (e == matrx[i][j]){

						std::pair<int,int> pos (i,j);
						return pos;
					}else{
						continue;
					}

				} else{

					std::pair<int,int> pos (-1,-1);
					return pos;
				}
			}
		}
		/*	return sin condicionales
			para evitar un warning al compilar
		*/
		std::pair<int,int> pos (-1,-1);
		return pos;
	}

	template <class T> bool Matriz<T>::isEmpty(int i, int j){

		int result = (columnas * i) + j + 1;

		if (result <= objAmount){
			return false;
		}
		return true;
	}

#endif