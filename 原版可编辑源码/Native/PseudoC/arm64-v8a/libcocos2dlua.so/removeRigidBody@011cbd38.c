
/* btDiscreteDynamicsWorld::removeRigidBody(btRigidBody*) */

void __thiscall
btDiscreteDynamicsWorld::removeRigidBody(btDiscreteDynamicsWorld *this,btRigidBody *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x144);
  if (0 < iVar1) {
    lVar4 = 0;
    puVar3 = *(undefined8 **)(this + 0x150);
    do {
      if ((btRigidBody *)*puVar3 == param_1) {
        if ((int)lVar4 < iVar1) {
          uVar2 = iVar1 - 1;
          uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
          uVar6 = *puVar3;
          *puVar3 = *(undefined8 *)((long)*(undefined8 **)(this + 0x150) + uVar5);
          *(undefined8 *)(*(long *)(this + 0x150) + uVar5) = uVar6;
          *(uint *)(this + 0x144) = uVar2;
        }
        break;
      }
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 < iVar1);
  }
  btCollisionWorld::removeCollisionObject((btCollisionWorld *)this,(btCollisionObject *)param_1);
  return;
}

