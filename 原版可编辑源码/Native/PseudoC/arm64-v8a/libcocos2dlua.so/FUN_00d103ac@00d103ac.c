
void FUN_00d103ac(undefined8 *param_1)

{
  Mat4 *pMVar1;
  Mat4 *this;
  Mat4 *pMVar2;
  
  pMVar2 = (Mat4 *)*param_1;
  if (pMVar2 == (Mat4 *)0x0) {
    return;
  }
  this = (Mat4 *)param_1[1];
  pMVar1 = pMVar2;
  if (this != pMVar2) {
    do {
      this = this + -0x40;
      cocos2d::Mat4::~Mat4(this);
    } while (pMVar2 != this);
    pMVar1 = (Mat4 *)*param_1;
  }
  param_1[1] = pMVar2;
  operator_delete(pMVar1);
  return;
}

