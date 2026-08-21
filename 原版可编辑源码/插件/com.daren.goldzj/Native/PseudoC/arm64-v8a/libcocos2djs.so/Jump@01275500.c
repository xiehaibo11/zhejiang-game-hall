
/* v8::internal::TurboAssembler::Jump(unsigned long, v8::internal::RelocInfo::Mode,
   v8::internal::Condition) */

void v8::internal::TurboAssembler::Jump(TurboAssembler *param_1,long param_2,uint param_3)

{
  long lVar1;
  
  if ((param_3 & 0xfe) != 4) {
    param_2 = param_2 - *(long *)(param_1 + 0x20);
    lVar1 = param_2 + 3;
    if (-1 < param_2) {
      lVar1 = param_2;
    }
    param_2 = lVar1 >> 2;
  }
  JumpHelper(param_1,param_2);
  return;
}

