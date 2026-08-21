
/* btAlignedObjectArray<btSolverBody>::expand(btSolverBody const&) */

long __thiscall
btAlignedObjectArray<btSolverBody>::expand
          (btAlignedObjectArray<btSolverBody> *this,btSolverBody *param_1)

{
  void *__dest;
  void *__src;
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar4 = *(int *)(this + 4);
  lVar5 = (long)iVar4;
  if (iVar4 == *(int *)(this + 8)) {
    iVar2 = iVar4 << 1;
    if (iVar4 == 0) {
      iVar2 = 1;
    }
    if (iVar4 < iVar2) {
      if (iVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal((long)iVar2 * 0xf8,0x10);
        iVar4 = *(int *)(this + 4);
      }
      if (0 < iVar4) {
        lVar6 = (long)iVar4;
        lVar7 = 0x40;
        do {
          __dest = (void *)(lVar3 + lVar7);
          __src = (void *)(*(long *)(this + 0x10) + lVar7);
          uVar8 = *(undefined8 *)((long)__src + -0x40);
          *(undefined8 *)((long)__dest + -0x38) = *(undefined8 *)((long)__src + -0x38);
          *(undefined8 *)((long)__dest + -0x40) = uVar8;
          uVar8 = *(undefined8 *)((long)__src + -0x30);
          *(undefined8 *)((long)__dest + -0x28) = *(undefined8 *)((long)__src + -0x28);
          *(undefined8 *)((long)__dest + -0x30) = uVar8;
          uVar8 = *(undefined8 *)((long)__src + -0x20);
          *(undefined8 *)((long)__dest + -0x18) = *(undefined8 *)((long)__src + -0x18);
          *(undefined8 *)((long)__dest + -0x20) = uVar8;
          uVar8 = *(undefined8 *)((long)__src + -0x10);
          *(undefined8 *)((long)__dest + -8) = *(undefined8 *)((long)__src + -8);
          *(undefined8 *)((long)__dest + -0x10) = uVar8;
          memcpy(__dest,__src,0xb8);
          lVar6 = lVar6 + -1;
          lVar7 = lVar7 + 0xf8;
        } while (lVar6 != 0);
      }
      if (*(void **)(this + 0x10) != (void *)0x0) {
        if (this[0x18] != (btAlignedObjectArray<btSolverBody>)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x10));
        }
        *(undefined8 *)(this + 0x10) = 0;
      }
      iVar4 = *(int *)(this + 4);
      this[0x18] = (btAlignedObjectArray<btSolverBody>)0x1;
      *(long *)(this + 0x10) = lVar3;
      *(int *)(this + 8) = iVar2;
    }
  }
  *(int *)(this + 4) = iVar4 + 1;
  uVar8 = *(undefined8 *)param_1;
  puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar5 * 0xf8);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = uVar8;
  memcpy(puVar1 + 8,param_1 + 0x40,0xb8);
  return *(long *)(this + 0x10) + lVar5 * 0xf8;
}

