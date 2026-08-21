
/* btCollisionDispatcher::releaseManifold(btPersistentManifold*) */

void __thiscall
btCollisionDispatcher::releaseManifold(btCollisionDispatcher *this,btPersistentManifold *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  gNumManifold = gNumManifold + -1;
  (**(code **)(*(long *)this + 0x28))();
  iVar1 = *(int *)(this + 0x14);
  lVar4 = *(long *)(this + 0x20);
  iVar2 = *(int *)(param_1 + 0x32c);
  lVar5 = ((long)iVar1 + -1) * 8;
  lVar6 = (long)iVar2 * 8;
  uVar7 = *(undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar4 + lVar5);
  *(undefined8 *)(*(long *)(this + 0x20) + lVar5) = uVar7;
  *(int *)(*(long *)(*(long *)(this + 0x20) + lVar6) + 0x32c) = iVar2;
  *(int *)(this + 0x14) = (int)((long)iVar1 + -1);
  if (param_1 != (btPersistentManifold *)0x0) {
    piVar3 = *(int **)(this + 0x70);
    if ((*(btPersistentManifold **)(piVar3 + 6) <= param_1) &&
       (param_1 < *(btPersistentManifold **)(piVar3 + 6) + (long)*piVar3 * (long)piVar3[1])) {
      *(undefined8 *)param_1 = *(undefined8 *)(piVar3 + 4);
      *(btPersistentManifold **)(piVar3 + 4) = param_1;
      piVar3[2] = piVar3[2] + 1;
      return;
    }
  }
  btAlignedFreeInternal(param_1);
  return;
}

