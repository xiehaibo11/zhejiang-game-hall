
/* WARNING: Type propagation algorithm not settling */

void FUN_009d6e0c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  builtin_strncpy(s___________017698c0,"---------",9);
  uVar2 = s___________017698c0._0_8_;
  if ((uVar1 >> 8 & 1) != 0) {
    builtin_strncpy(s___________017698c0,"r-------",8);
    uVar2 = s___________017698c0._0_8_;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    s___________017698c0._2_6_ = (undefined6)((ulong)uVar2 >> 0x10);
    s___________017698c0[0] = (char)uVar2;
    s___________017698c0[1] = 'w';
    uVar2 = s___________017698c0._0_8_;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    s___________017698c0._3_5_ = (undefined5)((ulong)uVar2 >> 0x18);
    s___________017698c0._0_2_ = (undefined2)uVar2;
    s___________017698c0[2] = 'x';
    uVar2 = s___________017698c0._0_8_;
  }
  if ((uVar1 >> 5 & 1) != 0) {
                    /* try { // try from 009d6ea0 to 00ad6eb3 has its CatchHandler @ 009d7fd4 */
    s___________017698c0._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
    s___________017698c0._0_3_ = (undefined3)uVar2;
    s___________017698c0[3] = 'r';
    uVar2 = s___________017698c0._0_8_;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    s___________017698c0._5_3_ = (undefined3)((ulong)uVar2 >> 0x28);
    s___________017698c0._0_4_ = (undefined4)uVar2;
    s___________017698c0[4] = 'w';
    uVar2 = s___________017698c0._0_8_;
  }
                    /* try { // try from 009d6eb8 to 00ad6f23 has its CatchHandler @ 009d809c */
  s___________017698c0._0_8_ = uVar2;
  if ((uVar1 >> 3 & 1) != 0) {
    s___________017698c0._6_2_ = (undefined2)((ulong)uVar2 >> 0x30);
    s___________017698c0._0_5_ = (undefined5)uVar2;
    s___________017698c0[5] = 'x';
  }
  if ((uVar1 >> 2 & 1) != 0) {
    s___________017698c0[6] = 'r';
  }
  if ((uVar1 >> 1 & 1) != 0) {
    s___________017698c0[7] = 'w';
  }
  if ((uVar1 & 1) != 0) {
    s___________017698c0[8] = 'x';
  }
  lua_pushstring(param_1,s___________017698c0);
  return;
}

