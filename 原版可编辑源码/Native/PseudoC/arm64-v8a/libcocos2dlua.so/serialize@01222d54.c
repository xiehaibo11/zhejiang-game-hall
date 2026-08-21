
/* btBvhTriangleMeshShape::serialize(void*, btSerializer*) const */

char * __thiscall
btBvhTriangleMeshShape::serialize(btBvhTriangleMeshShape *this,void *param_1,btSerializer *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  btCollisionShape::serialize((btCollisionShape *)this,param_1,param_2);
  (**(code **)(**(long **)(this + 0x40) + 0x70))
            (*(long **)(this + 0x40),(long)param_1 + 0x10,param_2);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x18);
  if ((*(long *)(this + 0x48) == 0) ||
     (uVar3 = (**(code **)(*(long *)param_2 + 0x68))(param_2), (uVar3 & 1) != 0)) {
    *(undefined8 *)((long)param_1 + 0x30) = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_2 + 0x30))(param_2,*(undefined8 *)(this + 0x48));
    if (lVar4 == 0) {
      uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x48));
      *(undefined8 *)((long)param_1 + 0x30) = uVar5;
      *(undefined8 *)((long)param_1 + 0x38) = 0;
      iVar2 = (**(code **)(**(long **)(this + 0x48) + 0x18))();
      lVar4 = (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)iVar2,1);
      uVar5 = (**(code **)(**(long **)(this + 0x48) + 0x20))
                        (*(long **)(this + 0x48),*(undefined8 *)(lVar4 + 8),param_2);
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar4,uVar5,0x48564251,*(undefined8 *)(this + 0x48));
      lVar4 = *(long *)(this + 0x50);
      goto joined_r0x01222e98;
    }
    *(long *)((long)param_1 + 0x30) = lVar4;
  }
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  lVar4 = *(long *)(this + 0x50);
joined_r0x01222e98:
  if ((lVar4 == 0) ||
     (uVar1 = (**(code **)(*(long *)param_2 + 0x68))(param_2), (uVar1 >> 1 & 1) != 0)) {
    *(undefined8 *)((long)param_1 + 0x40) = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_2 + 0x30))(param_2,*(undefined8 *)(this + 0x50));
    if (lVar4 == 0) {
      uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x50));
      *(undefined8 *)((long)param_1 + 0x40) = uVar5;
      iVar2 = (**(code **)(**(long **)(this + 0x50) + 0x10))();
      lVar4 = (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)iVar2,1);
      uVar5 = (**(code **)(**(long **)(this + 0x50) + 0x18))
                        (*(long **)(this + 0x50),*(undefined8 *)(lVar4 + 8),param_2);
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar4,uVar5,0x50414d54,*(undefined8 *)(this + 0x50));
    }
    else {
      *(long *)((long)param_1 + 0x40) = lVar4;
    }
  }
  return "btTriangleMeshShapeData";
}

