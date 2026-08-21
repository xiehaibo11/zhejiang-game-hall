
/* btDbvt::optimizeTopDown(int) */

void __thiscall btDbvt::optimizeTopDown(btDbvt *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [4];
  undefined8 local_4c;
  void *local_40;
  char local_38;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    local_38 = '\x01';
    local_40 = (void *)0x0;
    local_4c = 0;
    iVar1 = *(int *)(this + 0x14);
    if (0 < iVar1) {
      pvVar2 = (void *)btAlignedAllocInternal((long)iVar1 << 3,0x10);
      if (0 < (int)local_4c) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          *(undefined8 *)((long)pvVar2 + lVar5) = *(undefined8 *)((long)local_40 + lVar5);
        } while ((int)local_4c != lVar4);
      }
      if ((local_40 != (void *)0x0) && (local_38 != '\0')) {
        btAlignedFreeInternal(local_40);
      }
      local_4c = CONCAT44(iVar1,(int)local_4c);
      lVar4 = *(long *)this;
      local_40 = pvVar2;
    }
    local_38 = '\x01';
    FUN_012365dc(this,lVar4,auStack_50,0xffffffff);
    uVar3 = FUN_01236aa0(this,auStack_50,param_1);
    *(undefined8 *)this = uVar3;
    if ((local_40 != (void *)0x0) && (local_38 != '\0')) {
      btAlignedFreeInternal(local_40);
    }
  }
  return;
}

