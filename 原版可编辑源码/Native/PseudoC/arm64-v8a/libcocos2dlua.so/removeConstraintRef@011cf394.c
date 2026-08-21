
/* btRigidBody::removeConstraintRef(btTypedConstraint*) */

void __thiscall btRigidBody::removeConstraintRef(btRigidBody *this,btTypedConstraint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = *(uint *)(this + 0x20c);
  uVar1 = uVar2 - 1;
  if (0 < (int)uVar2) {
    lVar5 = 0;
    puVar4 = *(undefined8 **)(this + 0x218);
    do {
      if ((btTypedConstraint *)*puVar4 == param_1) {
        if ((int)lVar5 < (int)uVar2) {
          uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          uVar6 = *puVar4;
          *puVar4 = *(undefined8 *)((long)*(undefined8 **)(this + 0x218) + uVar3);
          *(undefined8 *)(*(long *)(this + 0x218) + uVar3) = uVar6;
          *(uint *)(this + 0x20c) = uVar1;
          uVar2 = uVar1;
        }
        break;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 < (int)uVar2);
  }
  *(uint *)(this + 0x11c) = (uint)(0 < (int)uVar2);
  return;
}

