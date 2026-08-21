
/* btCollisionObject::serializeSingleObject(btSerializer*) const */

void __thiscall
btCollisionObject::serializeSingleObject(btCollisionObject *this,btSerializer *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*(long *)this + 0x20))();
  lVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)iVar1,1);
  uVar3 = (**(code **)(*(long *)this + 0x28))(this,*(undefined8 *)(lVar2 + 8),param_1);
                    /* WARNING: Could not recover jumptable at 0x01218808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar2,uVar3,0x4a424f43,this);
  return;
}

