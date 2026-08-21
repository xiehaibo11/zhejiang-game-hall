
void FUN_00a88784(undefined8 *param_1)

{
  WeakPtr *pWVar1;
  WeakPtr *this;
  WeakPtr *pWVar2;
  
                    /* try { // try from 00a8878c to 00b8888b has its CatchHandler @ 00a896b8 */
  pWVar2 = (WeakPtr *)*param_1;
  if (pWVar2 == (WeakPtr *)0x0) {
    return;
  }
  this = (WeakPtr *)param_1[1];
  pWVar1 = pWVar2;
  if (this != pWVar2) {
    do {
      this = this + -8;
      fairygui::WeakPtr::~WeakPtr(this);
    } while (pWVar2 != this);
    pWVar1 = (WeakPtr *)*param_1;
  }
  param_1[1] = pWVar2;
  operator_delete(pWVar1);
  return;
}

