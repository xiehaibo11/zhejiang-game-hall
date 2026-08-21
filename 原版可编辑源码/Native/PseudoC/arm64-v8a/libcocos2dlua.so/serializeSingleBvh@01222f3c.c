
/* btBvhTriangleMeshShape::serializeSingleBvh(btSerializer*) const */

void __thiscall
btBvhTriangleMeshShape::serializeSingleBvh(btBvhTriangleMeshShape *this,btSerializer *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long **)(this + 0x48) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(this + 0x48) + 0x18))();
    lVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)iVar1,1);
    uVar3 = (**(code **)(**(long **)(this + 0x48) + 0x20))
                      (*(long **)(this + 0x48),*(undefined8 *)(lVar2 + 8),param_1);
                    /* WARNING: Could not recover jumptable at 0x01222fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x28))
              (param_1,lVar2,uVar3,0x48564251,*(undefined8 *)(this + 0x48));
    return;
  }
  return;
}

