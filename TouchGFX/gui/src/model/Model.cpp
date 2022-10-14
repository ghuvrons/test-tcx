#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

static int myTick = 0;


Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	myTick++;
}
