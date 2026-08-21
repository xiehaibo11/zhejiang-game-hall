
/* cocos2d::Properties::parseColor(char const*, cocos2d::Vec3*) */

void cocos2d::Properties::parseColor(char *param_1,Vec3 *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 in_s1;
  undefined4 in_s2;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((param_1 == (char *)0x0) || (sVar3 = strlen(param_1), sVar3 != 7)) || (*param_1 != '#')) ||
     (iVar2 = sscanf(param_1 + 1,"%x",&local_3c), iVar2 != 1)) {
    uVar4 = 0;
    if (param_2 != (Vec3 *)0x0) {
      *(undefined8 *)param_2 = 0;
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  else {
    if (param_2 != (Vec3 *)0x0) {
      uVar5 = Vec3::fromColor(local_3c);
      *(undefined4 *)param_2 = uVar5;
      *(undefined4 *)(param_2 + 4) = in_s1;
      *(undefined4 *)(param_2 + 8) = in_s2;
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

