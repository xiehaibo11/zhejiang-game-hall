
/* btCollisionShape::serializeSingleShape(btSerializer*) const */

void __thiscall btCollisionShape::serializeSingleShape(btCollisionShape *this,btSerializer *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*(long *)this + 0x68))();
  lVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)iVar1,1);
  uVar3 = (**(code **)(*(long *)this + 0x70))(this,*(undefined8 *)(lVar2 + 8),param_1);
                    /* WARNING: Could not recover jumptable at 0x01224770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar2,uVar3,0x50414853,this);
  return;
}

