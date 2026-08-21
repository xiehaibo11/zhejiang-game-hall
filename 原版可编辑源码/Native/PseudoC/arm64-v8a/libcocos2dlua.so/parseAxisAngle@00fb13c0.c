
/* cocos2d::Properties::parseAxisAngle(char const*, cocos2d::Quaternion*) */

void cocos2d::Properties::parseAxisAngle(char *param_1,Quaternion *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  Vec3 aVStack_48 [16];
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (char *)0x0) ||
     (iVar2 = sscanf(param_1,"%f,%f,%f,%f",&local_2c,&fStack_30,&local_34,&local_38), iVar2 != 4)) {
    if (param_2 != (Quaternion *)0x0) {
      Quaternion::set(param_2,0.0,0.0,0.0,1.0);
    }
    uVar3 = 0;
  }
  else {
    if (param_2 != (Quaternion *)0x0) {
      Vec3::Vec3(aVStack_48,local_2c,fStack_30,local_34);
      Quaternion::set(param_2,aVStack_48,local_38 * 0.017453292);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

