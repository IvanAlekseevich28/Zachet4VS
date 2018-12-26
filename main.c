#include <stdio.h>

struct coord{           //Структура
  int x;
  int y;
};

struct coord shiftcoords(struct coord* coord1, int Xshift, int Yshift);
//Функция по сдвигу координат в экземпляре структуры, которая возвращает тот же самый адрес
////Потому что зачем возвращать указатель на структуру без массива и без динамической памяти
int main()
{
    struct coord A;     //ОбЪявляем экземпляр мтуктуры типа coord
    A.x = 3;            //Заполняем его
    A.y = -9;
    struct coord B = shiftcoords(&A, -7, 10);    //Сдвигаем х на -7 и у на 10
    // Присваиваем разыменованное значение к экземпляру В структуры coord значение экземпляра А
    printf("%d",B.x);       //Выводим
    printf("\t");
    printf("%d",B.y);
    printf("\n");
    return 0;
} // Ответ: -4 и 1

struct coord shiftcoords(struct coord* coord1, int Xshift, int Yshift)
{

    coord1->x += Xshift;    //Добавляем к полям значения
    coord1->y += Yshift;
    return *coord1;          //Зачем-то возвращаем тот же адрес
}
