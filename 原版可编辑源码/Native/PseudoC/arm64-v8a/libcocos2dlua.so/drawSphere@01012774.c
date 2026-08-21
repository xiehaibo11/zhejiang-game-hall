
/* btIDebugDraw::drawSphere(float, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawSphere(btIDebugDraw *this,float param_1,btTransform *param_2,btVector3 *param_3)

{
  long lVar1;
  undefined4 in_register_00005004;
  undefined8 local_a0;
  float local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = *(undefined8 *)(param_2 + 0x38);
  local_70 = *(undefined8 *)(param_2 + 0x30);
  uStack_7c = *(undefined4 *)(param_2 + 0x14);
  local_80 = *(undefined4 *)(param_2 + 4);
  local_78 = *(undefined4 *)(param_2 + 0x24);
  uStack_74 = 0;
  fStack_8c = *(float *)(param_2 + 0x10);
  local_90 = *(float *)param_2;
  local_88 = *(float *)(param_2 + 0x20);
  uStack_84 = 0;
  (**(code **)(*(long *)this + 0x80))
            (CONCAT44(in_register_00005004,param_1),0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,
             0x41f00000,this,&local_70,&local_80,&local_90,param_3,0);
  local_94 = 0;
  local_a0 = CONCAT44(-fStack_8c,-local_90);
  local_98 = -local_88;
  (**(code **)(*(long *)this + 0x80))
            (CONCAT44(in_register_00005004,param_1),0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,
             0x41f00000,this,&local_70,&local_80,&local_a0,param_3,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

