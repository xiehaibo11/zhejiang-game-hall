
/* spine::AttachUtilBase::releaseAttachedNode() */

void __thiscall spine::AttachUtilBase::releaseAttachedNode(AttachUtilBase *this)

{
  long lVar1;
  Ref *this_00;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 - (long)puVar2 != 0) {
    uVar3 = 0;
    this_00 = (Ref *)*puVar2;
    while( true ) {
      if (this_00 != (Ref *)0x0) {
        cocos2d::Ref::release(this_00);
      }
      uVar3 = uVar3 + 1;
      if ((ulong)(lVar1 - (long)puVar2 >> 3) <= uVar3) break;
      this_00 = *(Ref **)(*(long *)(this + 0x10) + uVar3 * 8);
    }
    puVar2 = *(undefined8 **)(this + 0x10);
  }
  *(undefined8 **)(this + 0x18) = puVar2;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}

