
/* cocos2d::Properties::getLong(char const*) const */

void __thiscall cocos2d::Properties::getLong(Properties *this,char *param_1)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __s = (char *)getString(this,param_1,(char *)0x0);
  uVar3 = 0;
  if ((__s != (char *)0x0) && (iVar2 = sscanf(__s,"%ld",&local_30), uVar3 = local_30, iVar2 != 1)) {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
                    /* try { // try from 00fb0f10 to 010b0f17 has its CatchHandler @ 00fb1654 */
  return;
}

