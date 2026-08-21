
/* cocos2d::Properties::getInt(char const*) const */

void __thiscall cocos2d::Properties::getInt(Properties *this,char *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __s = (char *)getString(this,param_1,(char *)0x0);
  uVar3 = 0;
  if ((__s != (char *)0x0) && (iVar2 = sscanf(__s,"%d",&local_2c), uVar3 = local_2c, iVar2 != 1)) {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

