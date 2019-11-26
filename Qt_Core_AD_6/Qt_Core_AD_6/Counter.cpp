#include "Counter.h"

Counter::Counter(QObject *parent)
	: QObject(parent)
{
}

Counter::~Counter()
{
}


void Counter::increment()
{
	value++;
}

void Counter::decrement()
{
	value--;
}

int Counter::count()
{
	return value;
}