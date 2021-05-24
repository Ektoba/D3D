#ifndef MOUSE_POINTER_H
#define MOUSE_POINTER_H
typedef struct M_POINTER {
	int x, y;
	M_POINTER(int _x = 0,int _y=0):x(_x),y(_y){}
};
class CMousePointer : public M_POINTER
{
private:
	M_POINTER pointer;
public:
	CMousePointer(int _x=0,int _y=0):pointer(M_POINTER(_x,_y)) {}	
	void SetPointer(int _x, int _y) { x = _x; y = _y; }
	M_POINTER GetPointer() {}
};
extern CMousePointer pointer;
#endif // !MOUSE_POINTER_H



