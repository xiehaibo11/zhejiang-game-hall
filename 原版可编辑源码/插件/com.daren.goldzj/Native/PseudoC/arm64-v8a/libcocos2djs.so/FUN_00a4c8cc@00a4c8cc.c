
int FUN_00a4c8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
                    /* try { // try from 00a4c8cc to 00b4c8df has its CatchHandler @ 00a4cd30 */
                    /* try { // try from 00a4c8e0 to 00b4cd4b has its CatchHandler @ 00a4c888 */
  puStack_60 = auStack_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  lVar2 = FUN_00a0ea44(param_3,&local_70);
  if (lVar2 == 0) {
    iVar1 = 0x1b;
  }
  else {
    iVar1 = FUN_00a4c99c(param_1,0,lVar2,0,param_2);
    if (iVar1 != 0) {
      (*(code *)PTR_free_01d1b748)(lVar2);
    }
  }
  return iVar1;
}

