
/* btDbvt::optimizeBottomUp() */

void __thiscall btDbvt::optimizeBottomUp(btDbvt *this)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_50 [4];
  undefined8 local_4c;
  undefined8 *local_40;
  char local_38;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    local_38 = '\x01';
    local_40 = (undefined8 *)0x0;
    local_4c = 0;
    iVar2 = *(int *)(this + 0x14);
    if (0 < iVar2) {
      puVar3 = (undefined8 *)btAlignedAllocInternal((long)iVar2 << 3,0x10);
      if (0 < (int)local_4c) {
        lVar4 = 0;
        do {
          lVar1 = lVar4 + 1;
          puVar3[lVar4] = local_40[lVar4];
          lVar4 = lVar1;
        } while ((int)local_4c != lVar1);
      }
      if ((local_40 != (undefined8 *)0x0) && (local_38 != '\0')) {
        btAlignedFreeInternal(local_40);
      }
      local_4c = CONCAT44(iVar2,(int)local_4c);
      lVar4 = *(long *)this;
      local_40 = puVar3;
    }
    local_38 = '\x01';
    FUN_012365dc(this,lVar4,auStack_50,0xffffffff);
    FUN_01236700(this,auStack_50);
    *(undefined8 *)this = *local_40;
    if ((local_40 != (undefined8 *)0x0) && (local_38 != '\0')) {
      btAlignedFreeInternal(local_40);
    }
  }
  return;
}

