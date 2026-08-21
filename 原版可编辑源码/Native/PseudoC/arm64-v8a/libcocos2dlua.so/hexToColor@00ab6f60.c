
/* fairygui::ToolSet::hexToColor(char const*) */

undefined4 fairygui::ToolSet::hexToColor(char *param_1)

{
  long lVar1;
  uchar uVar2;
  uchar uVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uchar uVar9;
  uchar uVar10;
  undefined4 local_50;
  char local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar4 = strlen(param_1);
  if (((long)sVar4 < 7) || (*param_1 != '#')) {
    local_50 = cocos2d::Color4B::BLACK;
  }
  else {
    local_4c[2] = 0;
    local_4c[0] = '\0';
    local_4c[1] = '\0';
                    /* try { // try from 00ab6fac to 00bb6fd3 has its CatchHandler @ 00ab7214 */
    if (sVar4 == 9) {
      strncpy(local_4c,param_1 + 3,2);
      lVar5 = strtol(local_4c,(char **)0x0,0x10);
                    /* try { // try from 00ab6fe0 to 00bb70d7 has its CatchHandler @ 00ab721c */
      strncpy(local_4c,param_1 + 5,2);
      lVar6 = strtol(local_4c,(char **)0x0,0x10);
      strncpy(local_4c,param_1 + 7,2);
      lVar7 = strtol(local_4c,(char **)0x0,0x10);
      strncpy(local_4c,param_1 + 1,2);
      lVar8 = strtol(local_4c,(char **)0x0,0x10);
      uVar10 = (uchar)lVar8;
      uVar2 = (uchar)lVar5;
      uVar3 = (uchar)lVar6;
      uVar9 = (uchar)lVar7;
    }
    else {
      strncpy(local_4c,param_1 + 1,2);
      lVar5 = strtol(local_4c,(char **)0x0,0x10);
      strncpy(local_4c,param_1 + 3,2);
      lVar6 = strtol(local_4c,(char **)0x0,0x10);
      strncpy(local_4c,param_1 + 5,2);
      lVar7 = strtol(local_4c,(char **)0x0,0x10);
      uVar9 = (uchar)lVar7;
      uVar10 = 0xff;
      uVar2 = (uchar)lVar5;
      uVar3 = (uchar)lVar6;
    }
    cocos2d::Color4B::Color4B((Color4B *)&local_50,uVar2,uVar3,uVar9,uVar10);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

