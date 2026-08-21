
undefined8
deflateTune(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xac) = param_5;
    *(undefined4 *)(lVar1 + 0xb0) = param_3;
    *(undefined4 *)(lVar1 + 0xbc) = param_2;
    *(undefined4 *)(lVar1 + 0xc0) = param_4;
    return 0;
  }
  return 0xfffffffe;
}

