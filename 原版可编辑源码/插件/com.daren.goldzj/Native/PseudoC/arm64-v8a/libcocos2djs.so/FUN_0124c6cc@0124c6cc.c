
void FUN_0124c6cc(Factory *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *local_30;
  undefined8 uStack_28;
  
  switch(param_2) {
  case 1:
    pcVar2 = "i32";
    break;
  case 2:
    pcVar2 = "i64";
    break;
  case 3:
    pcVar2 = "f32";
    break;
  case 4:
    pcVar2 = "f64";
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 6:
    pcVar2 = "anyref";
    uVar1 = 7;
    goto LAB_0124c738;
  case 7:
    pcVar2 = "anyfunc";
    uVar1 = 8;
    goto LAB_0124c738;
  case 9:
    pcVar2 = "exnref";
    uVar1 = 7;
    goto LAB_0124c738;
  }
  uVar1 = 4;
LAB_0124c738:
  uStack_28 = __strlen_chk(pcVar2,uVar1);
  local_30 = pcVar2;
  v8::internal::Factory::InternalizeUtf8String(param_1,(Vector *)&local_30);
  return;
}

