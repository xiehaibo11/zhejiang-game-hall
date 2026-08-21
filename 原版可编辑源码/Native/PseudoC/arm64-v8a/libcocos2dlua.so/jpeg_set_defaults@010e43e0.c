
void jpeg_set_defaults(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x15;
    *(int *)((long)puVar3 + 0x2c) = iVar1;
    (*(code *)*puVar3)(param_1);
  }
  if (param_1[0xd] == 0) {
    lVar2 = (**(code **)param_1[1])(param_1,0,0x3c0);
    param_1[0xd] = lVar2;
  }
  param_1[9] = 0x100000001;
  *(undefined4 *)(param_1 + 0xb) = 8;
  jpeg_set_linear_quality(param_1,0x32,1);
  FUN_010e5490(param_1,param_1 + 0x14,&DAT_01476980,&DAT_01476991);
  FUN_010e5490(param_1,param_1 + 0x18,&DAT_014769ba,&DAT_014769cb);
  FUN_010e5490(param_1,param_1 + 0x15,&DAT_0147699d,&DAT_014769ae);
  FUN_010e5490(param_1,param_1 + 0x19,&DAT_01476a6d,&DAT_01476a7e);
  *(undefined4 *)(param_1 + 0x20) = 0x5050505;
  *(undefined4 *)(param_1 + 0x1e) = 0x1010101;
                    /* try { // try from 010e44f4 to 011e4557 has its CatchHandler @ 010e45c4 */
  *(uint *)((long)param_1 + 0x124) = (uint)(8 < (int)param_1[0xb]);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((long)param_1 + 0xe4) = 0;
  *(undefined1 *)((long)param_1 + 0xf6) = 1;
  *(undefined1 *)((long)param_1 + 0xf7) = 1;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined1 *)((long)param_1 + 0xf9) = 1;
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)((long)param_1 + 0xfb) = 1;
  *(undefined1 *)((long)param_1 + 0xfc) = 1;
  *(undefined1 *)((long)param_1 + 0xfd) = 1;
  *(undefined1 *)((long)param_1 + 0xfe) = 1;
  *(undefined1 *)((long)param_1 + 0xff) = 1;
  *(undefined4 *)(param_1 + 0x26) = 1;
  *(undefined4 *)((long)param_1 + 0xe6) = 0;
  *(undefined2 *)((long)param_1 + 0xea) = 0;
  *(undefined2 *)((long)param_1 + 0xec) = 0;
  *(undefined2 *)((long)param_1 + 0xee) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined1 *)((long)param_1 + 0x104) = 5;
  *(undefined1 *)((long)param_1 + 0x105) = 5;
  *(undefined1 *)((long)param_1 + 0x106) = 5;
  *(undefined1 *)((long)param_1 + 0x107) = 5;
  *(undefined1 *)(param_1 + 0x21) = 5;
  *(undefined1 *)((long)param_1 + 0x109) = 5;
  *(undefined1 *)((long)param_1 + 0x10a) = 5;
  *(undefined1 *)((long)param_1 + 0x10b) = 5;
  *(undefined1 *)((long)param_1 + 0x10c) = 5;
  *(undefined1 *)((long)param_1 + 0x10d) = 5;
  *(undefined1 *)((long)param_1 + 0x10e) = 5;
  *(undefined1 *)((long)param_1 + 0x10f) = 5;
  *(undefined2 *)((long)param_1 + 0xf4) = 0x101;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0x101;
  *(undefined1 *)((long)param_1 + 0x14a) = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x10001;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  jpeg_default_colorspace(param_1);
  return;
}

