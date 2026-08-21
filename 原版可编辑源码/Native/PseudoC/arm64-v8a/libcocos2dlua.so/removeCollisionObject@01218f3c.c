
/* btCollisionWorld::removeCollisionObject(btCollisionObject*) */

void __thiscall
btCollisionWorld::removeCollisionObject(btCollisionWorld *this,btCollisionObject *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0xc0);
  if (lVar7 != 0) {
    plVar3 = (long *)(**(code **)(**(long **)(this + 0x60) + 0x48))();
    (**(code **)(*plVar3 + 0x50))(plVar3,lVar7,*(undefined8 *)(this + 0x28));
    (**(code **)(**(long **)(this + 0x60) + 0x18))
              (*(long **)(this + 0x60),lVar7,*(undefined8 *)(this + 0x28));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    lVar7 = 0;
    puVar4 = *(undefined8 **)(this + 0x18);
    do {
      if ((btCollisionObject *)*puVar4 == param_1) {
        if (iVar1 <= (int)lVar7) {
          return;
        }
        uVar2 = iVar1 - 1;
        uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
        uVar6 = *puVar4;
        *puVar4 = *(undefined8 *)((long)*(undefined8 **)(this + 0x18) + uVar5);
        *(undefined8 *)(*(long *)(this + 0x18) + uVar5) = uVar6;
        *(uint *)(this + 0xc) = uVar2;
        return;
      }
      lVar7 = lVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar7 < iVar1);
  }
  return;
}

