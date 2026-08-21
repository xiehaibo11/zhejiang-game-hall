
void FUN_017d5c40(long param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 6;
  uVar2 = 1;
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_017d5c9c_caseD_1;
  case 5:
    pcVar3 = "s128";
    uVar4 = 5;
    break;
  case 9:
    pcVar3 = "exn";
    uVar4 = 7;
    break;
  case 10:
    pcVar3 = "<bot>";
    uVar4 = 8;
    break;
  default:
    uVar4 = 0x14;
  case 6:
  case 7:
  case 8:
    pcVar3 = "anyref";
    switch(param_3) {
    case 0:
      pcVar3 = "<stmt>";
      break;
    default:
      pcVar3 = "<unknown>";
      break;
    case 6:
      break;
    case 7:
      pcVar3 = "funcref";
      break;
    case 8:
      pcVar3 = "nullref";
    }
  }
  v8::internal::SNPrintF(auStack_c8,0x80,"%s %s",pcVar3,param_4);
  if (*(char *)(param_1 + 0x370) == '\0') {
    *(undefined1 *)(param_1 + 0x370) = uVar4;
    if (v8::internal::FLAG_trace_liftoff != '\0') {
      v8::internal::PrintF("[liftoff] unsupported: %s\n",auStack_c8);
    }
    v8::internal::wasm::Decoder::errorf
              ((uint)param_2,
               (char *)(ulong)(uint)(*(int *)(param_2 + 0x20) +
                                    (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8))),
               "unsupported liftoff operation: %s",auStack_c8);
  }
  uVar2 = 0;
switchD_017d5c9c_caseD_1:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

