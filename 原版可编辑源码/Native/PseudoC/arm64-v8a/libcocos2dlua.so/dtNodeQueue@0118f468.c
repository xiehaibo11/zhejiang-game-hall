
/* dtNodeQueue::dtNodeQueue(int) */

void __thiscall dtNodeQueue::dtNodeQueue(dtNodeQueue *this,int param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(int *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = dtAlloc(param_1 * 8 + 8,0);
  *(undefined8 *)this = uVar1;
  return;
}

