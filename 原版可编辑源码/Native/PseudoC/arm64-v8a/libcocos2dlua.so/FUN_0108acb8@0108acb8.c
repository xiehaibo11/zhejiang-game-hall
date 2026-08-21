
undefined8 FUN_0108acb8(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  FT_Request_Metrics(*param_1);
  puVar3 = *(undefined8 **)(*param_1 + 0x260);
  lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
                    /* try { // try from 0108acf4 to 0118ad07 has its CatchHandler @ 0108af90 */
  if ((((puVar3 != (undefined8 *)0x0) && (lVar1 != 0)) &&
      (pcVar2 = (code *)*puVar3, pcVar2 != (code *)0x0)) && (lVar1 = (*pcVar2)(), lVar1 != 0)) {
                    /* try { // try from 0108ad0c to 0118ad33 has its CatchHandler @ 0108afd4 */
    (**(code **)(lVar1 + 8))(param_1[10],param_1[4],param_1[5],0,0);
  }
  return 0;
}

