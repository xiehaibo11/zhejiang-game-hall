
void cpBodyEachShape(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x88);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x70);
    (*param_2)(param_1,lVar1,param_3);
    lVar1 = lVar2;
  }
  return;
}

