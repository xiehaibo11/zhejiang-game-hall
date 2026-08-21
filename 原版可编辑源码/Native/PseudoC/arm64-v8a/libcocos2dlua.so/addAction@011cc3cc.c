
/* btDiscreteDynamicsWorld::addAction(btActionInterface*) */

void __thiscall
btDiscreteDynamicsWorld::addAction(btDiscreteDynamicsWorld *this,btActionInterface *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = *(int *)(this + 0x184);
  if (iVar3 == *(int *)(this + 0x188)) {
    uVar1 = iVar3 << 1;
    if (iVar3 == 0) {
      uVar1 = 1;
    }
    if (iVar3 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        iVar3 = *(int *)(this + 0x184);
      }
      if (0 < iVar3) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(*(long *)(this + 400) + lVar5);
        } while (iVar3 != lVar4);
      }
      if (*(void **)(this + 400) != (void *)0x0) {
        if (this[0x198] != (btDiscreteDynamicsWorld)0x0) {
          btAlignedFreeInternal(*(void **)(this + 400));
          iVar3 = *(int *)(this + 0x184);
        }
        *(undefined8 *)(this + 400) = 0;
      }
      *(long *)(this + 400) = lVar2;
      this[0x198] = (btDiscreteDynamicsWorld)0x1;
      *(uint *)(this + 0x188) = uVar1;
    }
  }
  *(btActionInterface **)(*(long *)(this + 400) + (long)iVar3 * 8) = param_1;
  *(int *)(this + 0x184) = iVar3 + 1;
  return;
}

