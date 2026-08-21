
void FT_List_Finalize(long *param_1,code *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (param_3 != 0)) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (param_2 == (code *)0x0) {
        do {
          lVar2 = *(long *)(lVar1 + 8);
          (**(code **)(param_3 + 0x10))(param_3,lVar1);
          lVar1 = lVar2;
        } while (lVar2 != 0);
      }
      else {
        do {
          lVar2 = *(long *)(lVar1 + 8);
          (*param_2)(param_3,*(undefined8 *)(lVar1 + 0x10),param_4);
          (**(code **)(param_3 + 0x10))(param_3,lVar1);
          lVar1 = lVar2;
        } while (lVar2 != 0);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

