
/* cocos2d::Quaternion::set(cocos2d::Vec3 const&, float) */

void __thiscall cocos2d::Quaternion::set(Quaternion *this,Vec3 *param_1,float param_2)

{
  long lVar1;
  float local_50;
  float fStack_4c;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sincosf(param_2 * 0.5,&fStack_4c,&local_50);
  local_40 = *(float *)(param_1 + 8);
  local_48 = *(undefined8 *)param_1;
  Vec3::normalize((Vec3 *)&local_48);
  *(ulong *)this =
       CONCAT44((float)((ulong)local_48 >> 0x20) * fStack_4c,(float)local_48 * fStack_4c);
  *(float *)(this + 8) = fStack_4c * local_40;
  *(float *)(this + 0xc) = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

