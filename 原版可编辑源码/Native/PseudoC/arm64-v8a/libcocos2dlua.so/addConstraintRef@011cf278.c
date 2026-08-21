
/* btRigidBody::addConstraintRef(btTypedConstraint*) */

void __thiscall btRigidBody::addConstraintRef(btRigidBody *this,btTypedConstraint *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(this + 0x20c);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(btTypedConstraint **)(*(long *)(this + 0x218) + lVar3 * 8) == param_1) {
        if (iVar2 != (int)lVar3) goto LAB_011cf37c;
        break;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (iVar2 == *(int *)(this + 0x210)) {
    uVar1 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    if (iVar2 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        iVar2 = *(int *)(this + 0x20c);
      }
      if (0 < iVar2) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(*(long *)(this + 0x218) + lVar5);
        } while (iVar2 != lVar4);
      }
      if (*(void **)(this + 0x218) != (void *)0x0) {
        if (this[0x220] != (btRigidBody)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x218));
          iVar2 = *(int *)(this + 0x20c);
        }
        *(undefined8 *)(this + 0x218) = 0;
      }
      *(long *)(this + 0x218) = lVar3;
      this[0x220] = (btRigidBody)0x1;
      *(uint *)(this + 0x210) = uVar1;
    }
  }
  *(btTypedConstraint **)(*(long *)(this + 0x218) + (long)iVar2 * 8) = param_1;
  *(int *)(this + 0x20c) = iVar2 + 1;
LAB_011cf37c:
  *(undefined4 *)(this + 0x11c) = 1;
  return;
}

