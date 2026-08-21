
/* cocos2d::Properties::getFloat(char const*) const */

void __thiscall cocos2d::Properties::getFloat(Properties *this,char *param_1)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __s = (char *)getString(this,param_1,(char *)0x0);
  if (__s == (char *)0x0) {
    local_2c = 0;
  }
  else {
    iVar2 = sscanf(__s,"%f",&local_2c);
    if (iVar2 != 1) {
      local_2c = 0;
    }
  }
                    /* catch() { ... } // from try @ 00fb1644 with catch @ 00fb0ea4 */
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_2c);
  }
  return;
}

