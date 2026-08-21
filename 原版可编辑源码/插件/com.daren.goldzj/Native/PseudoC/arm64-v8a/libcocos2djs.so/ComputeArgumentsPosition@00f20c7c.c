
/* v8::internal::TranslatedState::ComputeArgumentsPosition(unsigned long,
   v8::internal::CreateArgumentsType, int*) */

long * __thiscall
v8::internal::TranslatedState::ComputeArgumentsPosition
          (TranslatedState *this,long *param_1,char param_3,uint *param_4)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1[-1] == 0x26) {
    if (param_4 == (uint *)0x0) {
      return plVar1;
    }
    uVar2 = *(int *)(plVar1 + -3) >> 1;
    param_1 = plVar1;
  }
  else {
    if (param_4 == (uint *)0x0) {
      return param_1;
    }
    uVar2 = *(uint *)(this + 0x28);
  }
  *param_4 = uVar2;
  if ((param_3 == '\x02') && (param_4 != (uint *)0x0)) {
    *param_4 = uVar2 - *(int *)(this + 0x28) &
               ((int)(uVar2 - *(int *)(this + 0x28)) >> 0x1f ^ 0xffffffffU);
  }
  return param_1;
}

