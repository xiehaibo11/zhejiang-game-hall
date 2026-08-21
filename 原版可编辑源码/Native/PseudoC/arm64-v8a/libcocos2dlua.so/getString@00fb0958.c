
/* cocos2d::Properties::getString(char const*, char const*) const */

byte * __thiscall cocos2d::Properties::getString(Properties *this,char *param_1,char *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  size_t __n;
  byte *pbVar7;
  byte *__s1;
  byte *pbVar8;
  char acStack_158 [256];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pbVar7 = (byte *)param_2;
  if (param_1 == (char *)0x0) {
    pbVar8 = *(byte **)(this + 0x70);
    if (pbVar8 == *(byte **)(this + 0x60)) goto LAB_00fb0a74;
    if ((pbVar8[0x18] & 1) == 0) {
      pbVar8 = pbVar8 + 0x19;
    }
    else {
LAB_00fb0a40:
      pbVar8 = *(byte **)(pbVar8 + 0x28);
      if (pbVar8 == (byte *)0x0) goto LAB_00fb0a74;
    }
LAB_00fb0a48:
    uVar6 = FUN_00fafa28(pbVar8,acStack_158);
    pbVar7 = pbVar8;
    if ((uVar6 & 1) == 0) goto LAB_00fb0a74;
  }
  else {
    uVar6 = FUN_00fafa28(param_1,acStack_158);
    if ((uVar6 & 1) == 0) {
      pbVar8 = *(byte **)(this + 0x58);
      pbVar2 = *(byte **)(this + 0x60);
      if (pbVar8 != pbVar2) {
        __n = strlen(param_1);
        do {
          bVar3 = *pbVar8;
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar8 + 8);
          }
          if (__n == sVar1) {
            if (__n != 0) {
              if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              __s1 = *(byte **)(pbVar8 + 0x10);
              if ((bVar3 & 1) == 0) {
                __s1 = pbVar8 + 1;
              }
              iVar5 = memcmp(__s1,param_1,__n);
              if (iVar5 != 0) goto LAB_00fb09bc;
            }
            if ((pbVar8[0x18] & 1) != 0) goto LAB_00fb0a40;
            pbVar8 = pbVar8 + 0x19;
            goto LAB_00fb0a48;
          }
LAB_00fb09bc:
          pbVar8 = pbVar8 + 0x30;
        } while (pbVar8 != pbVar2);
      }
      goto LAB_00fb0a74;
    }
  }
  pbVar7 = (byte *)getVariable(this,acStack_158,param_2);
LAB_00fb0a74:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar7;
}

