
/* v8::internal::TurboAssembler::B(v8::internal::Label*, v8::internal::BranchType,
   v8::internal::Register, int) */

void v8::internal::TurboAssembler::B
               (Assembler *param_1,Label *param_2,uint param_3,undefined8 param_4,undefined4 param_5
               ,uint param_6)

{
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = param_4;
  local_28 = param_5;
  if (0xf < param_3) {
    switch(param_3) {
    case 0x10:
      Assembler::b(param_1,param_2);
      Assembler::CheckVeneerPool(param_1,false,false,0x400);
      return;
    case 0x11:
      break;
    case 0x12:
      Cbz((TurboAssembler *)param_1,(Register *)&local_30,param_2);
      break;
    case 0x13:
      Cbnz((TurboAssembler *)param_1,(Register *)&local_30,param_2);
      break;
    case 0x14:
      Tbz((TurboAssembler *)param_1,(Register *)&local_30,param_6,param_2);
      break;
    case 0x15:
      Tbnz((TurboAssembler *)param_1,(Register *)&local_30,param_6,param_2);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    return;
  }
  B((TurboAssembler *)param_1,param_2);
  return;
}

