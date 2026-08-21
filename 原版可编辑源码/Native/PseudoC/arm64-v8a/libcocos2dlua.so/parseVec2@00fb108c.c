
/* cocos2d::Properties::parseVec2(char const*, cocos2d::Vec2*) */

void cocos2d::Properties::parseVec2(char *param_1,Vec2 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (char *)0x0) || (iVar2 = sscanf(param_1,"%f,%f",&uStack_2c,&local_30), iVar2 != 2)
     ) {
    uVar3 = 0;
    if (param_2 != (Vec2 *)0x0) {
      *(undefined8 *)param_2 = 0;
    }
  }
  else {
    if (param_2 != (Vec2 *)0x0) {
      *(undefined4 *)param_2 = uStack_2c;
      *(undefined4 *)(param_2 + 4) = local_30;
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

