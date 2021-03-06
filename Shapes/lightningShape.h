#ifndef LIGHTINGSHAPE_H
#define LIGHTINGSHAPE_H

#include "../tetrisshape.h"

class LightningShape : public TetrisShape
{
public:
	LightningShape() : TetrisShape(Qt::red)
	{
		bool types[4][4][4] =
		{
			{
				{0,1,1,0},
				{1,1,0,0},
				{0,0,0,0},
				{0,0,0,0}
			},
			{
				{1,0,0,0},
				{1,1,0,0},
				{0,1,0,0},
				{0,0,0,0}
			},
			{
				{0,1,1,0},
				{1,1,0,0},
				{0,0,0,0},
				{0,0,0,0}
			},
			{
				{1,0,0,0},
				{1,1,0,0},
				{0,1,0,0},
				{0,0,0,0}
			},
		};

		memcpy(this->blockRotations, types, sizeof(types));
		rotate(0);
	}
};

#endif // LIGHTINGSHAPE_H
