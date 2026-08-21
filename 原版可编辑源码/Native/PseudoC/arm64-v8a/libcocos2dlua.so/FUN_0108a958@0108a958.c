
undefined8 FUN_0108a958(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x260);
  if ((lVar3 != 0) &&
     (lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 8),"pshinter"
                           ), lVar1 != 0)) {
    uVar2 = (**(code **)(lVar3 + 8))();
    *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x40) = uVar2;
  }
                    /* try { // try from 0108a9a8 to 0118a9bb has its CatchHandler @ 0108afa4 */
  return 0;
}

