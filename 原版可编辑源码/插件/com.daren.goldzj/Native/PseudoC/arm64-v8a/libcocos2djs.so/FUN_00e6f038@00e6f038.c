
undefined8 FUN_00e6f038(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  *(undefined8 *)(lVar1 + 0x158) = 0xffffffffffffffeb;
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x180) = 0;
  *(undefined8 *)(lVar1 + 0x178) = 0x15;
  (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x70) + 0x10))
            (*(undefined8 *)(param_1 + 0x68),0,0);
  return 0;
}

