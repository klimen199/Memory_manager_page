/************************************************************************
		Лабораторная работа №2

	Описание интерфейсных функций модели менеджера памяти

 ************************************************************************/

typedef char *VA;                // Тип описывающий адрес блока
void printVA();
#include <stdio.h>

#define SUCCESS 0;
#define WRONG_PARAMETRS -1;
#define MEMORY_LACK -2;
#define UNKNOWN_ERROR 1;
/**
 	@func	_malloc
 	@brief	Выделяет блок памяти определенного размера

	@param	[out] ptr		адресс блока
	@param	[in]  szBlock	размер блока

	@return	код ошибки
	@retval	0	успешное выполнение
	@retval	-1	неверные параметры
	@retval	-2	нехватка памяти
	@retval	1	неизвестная ошибка
 **/
int _malloc(VA *ptr, size_t szBlock);


/**
 	@func	_free
 	@brief	Удаление блока памяти

	@param	[in] ptr		адресс блока

	@return	код ошибки
	@retval	0	успешное выполнение
	@retval	-1	неверные параметры
	@retval	1	неизвестная ошибка
 **/
int _free(VA ptr);


/**
 	@func	_read
 	@brief	Чтение информации из блока памяти

	@param	[in] ptr		адресс блока
	@param	[in] pBuffer	адресс буфера куда копируется информация
	@param	[in] szBuffer	размер буфера

	@return	код ошибки
	@retval	0	успешное выполнение
	@retval	-1	неверные параметры
	@retval	-2	доступ за пределы блока
	@retval	1	неизвестная ошибка
 **/
int _read(VA ptr, void *pBuffer, size_t szBuffer);


/**
 	@func	_write
 	@brief	Запись информации в блок памяти

	@param	[in] ptr		адресс блока
	@param	[in] pBuffer	адресс буфера куда копируется инфомация
	@param	[in] szBuffer	размер буфера

	@return	код ошибки
	@retval	0	успешное выполнение
	@retval	-1	неверные параметры
	@retval	-2	доступ за пределы блока
	@retval	1	неизвестная ошибка
 **/
int _write(VA ptr, void *pBuffer, size_t szBuffer);


/**
 	@func	_init
 	@brief	Инициализация модели менеджера памяти

	@param	[in] n		количество страниц
	@param	[in] szPage	размер страницы

	В варианте 1 и 2 общий объем памяти расчитывается как n*szPage

	@return	код ошибки
	@retval	0	успешное выполнение
	@retval	-1	неверные параметры
	@retval	1	неизвестная ошибка
 **/
int _init(int n, int szPage);
