
void FUN_00e44cec(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (*(long *)param_1[10] != 0) {
    puVar3 = *(undefined8 **)(*param_1 + 0x260);
    lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
    if ((((puVar3 != (undefined8 *)0x0) && (lVar1 != 0)) &&
        (pcVar2 = (code *)*puVar3, pcVar2 != (code *)0x0)) && (lVar1 = (*pcVar2)(), lVar1 != 0)) {
      (**(code **)(lVar1 + 0x10))(*(undefined8 *)param_1[10]);
    }
    *(undefined8 *)param_1[10] = 0;
  }
  return;
}

