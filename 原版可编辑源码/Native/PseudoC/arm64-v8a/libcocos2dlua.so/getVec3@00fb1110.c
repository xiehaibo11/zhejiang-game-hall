
/* cocos2d::Properties::getVec3(char const*, cocos2d::Vec3*) const */

void __thiscall cocos2d::Properties::getVec3(Properties *this,char *param_1,Vec3 *param_2)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined8 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __s = (char *)getString(this,param_1,(char *)0x0);
                    /* try { // try from 00fb114c to 010b11d3 has its CatchHandler @ 00fb16a4 */
  if ((__s == (char *)0x0) ||
     (iVar2 = sscanf(__s,"%f,%f,%f",&uStack_2c,&local_30,&local_34), iVar2 != 3)) {
    uVar3 = 0;
    if (param_2 != (Vec3 *)0x0) {
      *(undefined8 *)param_2 = 0;
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  else {
    if (param_2 != (Vec3 *)0x0) {
      *(undefined4 *)param_2 = uStack_2c;
      *(undefined4 *)(param_2 + 4) = local_30;
      *(undefined4 *)(param_2 + 8) = local_34;
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

