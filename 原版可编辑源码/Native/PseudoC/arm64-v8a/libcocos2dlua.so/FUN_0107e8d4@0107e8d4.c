
undefined8 FUN_0107e8d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x428) + 0x1278);
  if ((lVar3 != 0) &&
     (lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 8),"pshinter"
                           ), lVar1 != 0)) {
    uVar2 = (**(code **)(lVar3 + 0x10))();
    *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x40) = uVar2;
  }
                    /* catch() { ... } // from try @ 0107e838 with catch @ 0107e91c */
  return 0;
}

