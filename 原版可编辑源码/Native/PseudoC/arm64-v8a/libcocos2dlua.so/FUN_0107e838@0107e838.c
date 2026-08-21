
void FUN_0107e838(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
                    /* try { // try from 0107e838 to 0117e87b has its CatchHandler @ 0107e91c */
  puVar4 = (undefined8 *)param_1[10];
  if (puVar4 != (undefined8 *)0x0) {
    lVar1 = *param_1;
    lVar6 = *(long *)(lVar1 + 0x428);
    puVar3 = *(undefined8 **)(*(long *)(lVar1 + 0x428) + 0x1278);
    lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(lVar1 + 0xb0) + 8),"pshinter");
                    /* try { // try from 0107e87c to 0117e933 has its CatchHandler @ 0107e5d4 */
    if ((((puVar3 != (undefined8 *)0x0) && (lVar1 != 0)) &&
        (pcVar2 = (code *)*puVar3, pcVar2 != (code *)0x0)) && (lVar1 = (*pcVar2)(), lVar1 != 0)) {
      (**(code **)(lVar1 + 0x10))(*puVar4);
      iVar5 = *(int *)(lVar6 + 0xa50);
      if (iVar5 != 0) {
        puVar4 = puVar4 + (ulong)(iVar5 - 1) + 1;
        do {
          (**(code **)(lVar1 + 0x10))(*puVar4);
          iVar5 = iVar5 + -1;
          puVar4 = puVar4 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}

