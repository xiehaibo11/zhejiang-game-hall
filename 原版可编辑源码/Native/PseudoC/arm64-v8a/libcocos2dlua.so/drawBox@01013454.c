
/* btIDebugDraw::drawBox(btVector3 const&, btVector3 const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawBox(btIDebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined4 *)param_1;
  local_5c = 0;
  local_64 = *(undefined4 *)(param_1 + 4);
  local_60 = *(undefined4 *)(param_1 + 8);
  local_54 = *(undefined8 *)(param_1 + 4);
  local_4c = 0;
  local_68 = *(undefined4 *)param_2;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68);
  local_68 = *(undefined4 *)param_2;
  local_60 = *(undefined4 *)(param_1 + 8);
  local_54 = *(undefined8 *)(param_1 + 4);
  local_4c = 0;
  local_64 = *(undefined4 *)(param_2 + 4);
  local_5c = 0;
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_58 = *(undefined4 *)param_2;
  local_5c = 0;
  local_64 = *(undefined4 *)(param_2 + 4);
  local_60 = *(undefined4 *)(param_1 + 8);
  local_4c = 0;
  local_54 = CONCAT44(local_60,local_64);
  local_68 = *(undefined4 *)param_1;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_68 = *(undefined4 *)param_1;
  local_60 = *(undefined4 *)(param_1 + 8);
  local_54 = CONCAT44(local_60,*(undefined4 *)(param_2 + 4));
  local_4c = 0;
  local_64 = *(undefined4 *)(param_1 + 4);
  local_5c = 0;
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_68 = *(undefined4 *)param_1;
  local_5c = 0;
  local_54 = *(undefined8 *)(param_1 + 4);
  local_4c = 0;
  local_64 = (undefined4)local_54;
  local_60 = *(undefined4 *)(param_2 + 8);
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_68 = *(undefined4 *)param_2;
  local_5c = 0;
  local_54 = *(undefined8 *)(param_1 + 4);
  local_4c = 0;
  local_64 = (undefined4)local_54;
  local_60 = *(undefined4 *)(param_2 + 8);
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_68 = *(undefined4 *)param_2;
  local_64 = *(undefined4 *)(param_2 + 4);
  local_54 = CONCAT44(*(undefined4 *)(param_1 + 8),local_64);
  local_4c = 0;
  local_60 = *(undefined4 *)(param_2 + 8);
  local_5c = 0;
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_68 = *(undefined4 *)param_1;
  local_64 = *(undefined4 *)(param_2 + 4);
  local_54 = CONCAT44(*(undefined4 *)(param_1 + 8),local_64);
  local_4c = 0;
  local_60 = *(undefined4 *)(param_2 + 8);
  local_5c = 0;
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_58 = *(undefined4 *)param_1;
  local_5c = 0;
  local_64 = *(undefined4 *)(param_1 + 4);
  local_60 = *(undefined4 *)(param_2 + 8);
  local_4c = 0;
  local_54 = CONCAT44(local_60,local_64);
  local_68 = *(undefined4 *)param_2;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_68 = *(undefined4 *)param_2;
  local_60 = *(undefined4 *)(param_2 + 8);
  local_54 = CONCAT44(local_60,*(undefined4 *)(param_1 + 4));
  local_4c = 0;
  local_64 = *(undefined4 *)(param_2 + 4);
  local_5c = 0;
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_58 = *(undefined4 *)param_2;
  local_5c = 0;
  local_64 = *(undefined4 *)(param_2 + 4);
  local_60 = *(undefined4 *)(param_2 + 8);
  local_54 = *(undefined8 *)(param_2 + 4);
  local_4c = 0;
  local_68 = *(undefined4 *)param_1;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  local_68 = *(undefined4 *)param_1;
  local_60 = *(undefined4 *)(param_2 + 8);
  local_54 = *(undefined8 *)(param_2 + 4);
  local_4c = 0;
  local_64 = *(undefined4 *)(param_1 + 4);
  local_5c = 0;
  local_58 = local_68;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

