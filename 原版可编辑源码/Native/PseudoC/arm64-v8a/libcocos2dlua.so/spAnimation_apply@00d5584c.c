
void spAnimation_apply(float param_1,float param_2,undefined8 param_3,long param_4,
                      undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                      undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float __y;
  
  uVar1 = *(uint *)(param_4 + 0xc);
  if (((param_6 != 0) && (__y = *(float *)(param_4 + 8), __y != 0.0)) &&
     (param_2 = fmodf(param_2,__y), 0.0 < param_1)) {
    param_1 = fmodf(param_1,__y);
  }
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_4 + 0x10) + uVar3 * 8);
      (*(code *)**(undefined8 **)(lVar2 + 8))
                (param_1,param_2,param_3,lVar2,param_5,param_7,param_8,param_9,param_10);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}

