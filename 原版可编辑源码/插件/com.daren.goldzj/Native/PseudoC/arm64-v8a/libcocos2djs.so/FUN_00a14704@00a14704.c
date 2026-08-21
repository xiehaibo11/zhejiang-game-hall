
void FUN_00a14704(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_38;
  int local_34;
  
  lVar2 = *(long *)(*param_1 + 0x60);
  if ((lVar2 != 0) && (param_2 != -1)) {
    local_38 = param_2;
    lVar1 = FUN_00a34664(lVar2 + 0x88,&local_38,4);
    if (lVar1 != 0) {
      if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
        (**(code **)(lVar2 + 0x30))
                  (*param_1,param_2,4,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar1 + 0x10));
      }
      local_34 = param_2;
      FUN_00a345c4(lVar2 + 0x88,&local_34,4);
    }
  }
  return;
}

