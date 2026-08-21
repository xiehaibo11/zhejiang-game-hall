
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> >&&) */

Value * __thiscall cocos2d::Value::operator=(Value *this,vector *param_1)

{
  Value *pVVar1;
  long *plVar2;
  Value *this_00;
  long *plVar3;
  Value *pVVar4;
  long lVar5;
  
  if (*(int *)(this + 8) == 8) {
    plVar2 = *(long **)this;
    pVVar4 = (Value *)*plVar2;
    plVar3 = plVar2;
  }
  else {
    clear(this);
    plVar2 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (plVar2 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      plVar3 = plVar2;
    }
    *(long **)this = plVar2;
    *(undefined4 *)(this + 8) = 8;
    pVVar4 = (Value *)*plVar3;
  }
  if (pVVar4 != (Value *)0x0) {
    this_00 = (Value *)plVar3[1];
    pVVar1 = pVVar4;
    if (this_00 != pVVar4) {
      do {
        this_00 = this_00 + -0x10;
        clear(this_00);
      } while (pVVar4 != this_00);
      pVVar1 = (Value *)*plVar3;
    }
    plVar3[1] = (long)pVVar4;
    operator_delete(pVVar1);
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
  }
  lVar5 = *(long *)param_1;
  plVar3[1] = *(long *)(param_1 + 8);
  *plVar3 = lVar5;
  plVar3[2] = *(long *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return this;
}

