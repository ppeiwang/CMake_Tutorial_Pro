#pragma once
#define DllExport  __declspec( dllexport )

class Printer
{
public:
	DllExport void Print();
};