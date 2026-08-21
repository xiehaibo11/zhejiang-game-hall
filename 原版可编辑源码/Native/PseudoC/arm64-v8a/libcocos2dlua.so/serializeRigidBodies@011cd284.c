
/* btDiscreteDynamicsWorld::serializeRigidBodies(btSerializer*) */

void __thiscall
btDiscreteDynamicsWorld::serializeRigidBodies(btDiscreteDynamicsWorld *this,btSerializer *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(*(long *)(this + 0x18) + lVar5 * 8);
      if ((*(byte *)(plVar4 + 0x20) >> 1 & 1) != 0) {
        iVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
        lVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)iVar1,1);
        uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined8 *)(lVar2 + 8),param_1);
        (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar2,uVar3,0x59444252,plVar4);
        iVar1 = *(int *)(this + 0xc);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  if (0 < *(int *)(this + 0x124)) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(*(long *)(this + 0x130) + lVar5 * 8);
      iVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
      lVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)iVar1,1);
      uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined8 *)(lVar2 + 8),param_1);
      (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar2,uVar3,0x534e4f43,plVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(this + 0x124));
  }
  return;
}

