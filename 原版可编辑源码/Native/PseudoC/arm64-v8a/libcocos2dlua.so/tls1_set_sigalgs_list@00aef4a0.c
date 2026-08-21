
ulong tls1_set_sigalgs_list(long param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_268;
  undefined1 auStack_260 [560];
  
                    /* try { // try from 00aef4a8 to 00bef5c3 has its CatchHandler @ 00aef648 */
  local_268 = 0;
  uVar1 = CONF_parse_list(param_2,0x3a,1,FUN_00aef51c,&local_268);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = tls1_set_sigalgs(param_1,auStack_260,local_268,param_3);
    }
  }
  return uVar2;
}

