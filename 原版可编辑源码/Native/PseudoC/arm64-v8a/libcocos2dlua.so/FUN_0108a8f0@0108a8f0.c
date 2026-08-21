
void FUN_0108a8f0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 0108a8f0 to 0118a903 has its CatchHandler @ 0108afa8 */
  if (param_1[10] != 0) {
                    /* try { // try from 0108a908 to 0118a92f has its CatchHandler @ 0108afec */
    puVar3 = *(undefined8 **)(*param_1 + 0x260);
    lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
                    /* try { // try from 0108a930 to 0118a9a7 has its CatchHandler @ 0108a4c4 */
    if ((((puVar3 != (undefined8 *)0x0) && (lVar1 != 0)) &&
        (pcVar2 = (code *)*puVar3, pcVar2 != (code *)0x0)) && (lVar1 = (*pcVar2)(), lVar1 != 0)) {
      (**(code **)(lVar1 + 0x10))(param_1[10]);
    }
    param_1[10] = 0;
  }
  return;
}

