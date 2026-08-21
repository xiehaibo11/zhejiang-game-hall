
/* cocos2d::TMXObjectGroup::~TMXObjectGroup() */

void __thiscall cocos2d::TMXObjectGroup::~TMXObjectGroup(TMXObjectGroup *this)

{
  undefined8 *puVar1;
  Value *pVVar2;
  void *pvVar3;
  Value *this_00;
  Value *pVVar4;
  
  pVVar4 = *(Value **)(this + 0x70);
  *(undefined ***)this = &PTR__TMXObjectGroup_01711770;
  if (pVVar4 != (Value *)0x0) {
    this_00 = *(Value **)(this + 0x78);
    pVVar2 = pVVar4;
    if (this_00 != pVVar4) {
      do {
        this_00 = this_00 + -0x10;
        cocos2d::Value::~Value(this_00);
      } while (pVVar4 != this_00);
      pVVar2 = *(Value **)(this + 0x70);
    }
    *(Value **)(this + 0x78) = pVVar4;
    operator_delete(pVVar2);
  }
  puVar1 = *(void **)(this + 0x58);
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  Ref::~Ref((Ref *)this);
  return;
}

