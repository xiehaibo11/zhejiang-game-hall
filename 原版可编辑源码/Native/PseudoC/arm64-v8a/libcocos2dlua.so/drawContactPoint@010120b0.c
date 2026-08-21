
/* cocos2d::Physics3DDebugDrawer::drawContactPoint(btVector3 const&, btVector3 const&, float, int,
   btVector3 const&) */

void __thiscall
cocos2d::Physics3DDebugDrawer::drawContactPoint
          (Physics3DDebugDrawer *this,btVector3 *param_1,btVector3 *param_2,float param_3,
          int param_4,btVector3 *param_5)

{
  long lVar1;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * param_3 +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)*(undefined8 *)param_2 * param_3 + (float)*(undefined8 *)param_1);
  local_30 = *(float *)(param_2 + 8) * param_3 + *(float *)(param_1 + 8);
  local_2c = 0;
  (**(code **)(*(long *)this + 0x10))(this,param_1,&local_38,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

