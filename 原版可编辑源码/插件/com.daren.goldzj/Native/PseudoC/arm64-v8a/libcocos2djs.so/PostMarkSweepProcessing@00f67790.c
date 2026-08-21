
/* v8::internal::GlobalHandles::PostMarkSweepProcessing(unsigned int) */

long __thiscall
v8::internal::GlobalHandles::PostMarkSweepProcessing(GlobalHandles *this,uint param_1)

{
  Node *this_00;
  Node NVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  Node *pNVar5;
  
  lVar3 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = 0;
  uVar4 = 0;
  do {
    this_00 = (Node *)(lVar3 + uVar4 * 0x20);
    pNVar5 = this_00 + 0xb;
    NVar1 = *pNVar5;
    if ((((byte)NVar1 & 7) != 0) && ((((byte)NVar1 & 7) != 4 || (((byte)NVar1 & 0x30) == 0)))) {
      if (((byte)NVar1 & 7) == 3) {
        Node::PostGarbageCollectionProcessing(this_00,*(Isolate **)this);
      }
      if (*(uint *)(this + 0xa4) != param_1) {
        return lVar2;
      }
      NVar1 = *pNVar5;
      if (((byte)NVar1 & 7) == 4) {
        if (((byte)NVar1 & 0x30) != 0) goto LAB_00f677cc;
      }
      else if (((byte)NVar1 & 7) == 0) {
LAB_00f677cc:
        lVar2 = lVar2 + 1;
      }
    }
    uVar4 = uVar4 + 1;
    if (uVar4 < 0x100) {
      if (lVar3 == 0) {
        return lVar2;
      }
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x2018);
      uVar4 = 0;
      if (lVar3 == 0) {
        return lVar2;
      }
    }
  } while( true );
}

