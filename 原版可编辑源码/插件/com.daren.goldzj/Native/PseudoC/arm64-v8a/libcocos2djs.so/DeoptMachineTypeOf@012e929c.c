
/* v8::internal::compiler::RepresentationSelector::DeoptMachineTypeOf(v8::internal::MachineRepresentation,
   v8::internal::compiler::Type) */

uint v8::internal::compiler::RepresentationSelector::DeoptMachineTypeOf(uint param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long local_28;
  long local_8;
  
  if (param_2 == 1) {
    param_1 = 0;
    iVar3 = 0;
    goto LAB_012e9384;
  }
  if (2 < (param_1 & 0xff) - 6) {
    local_28 = param_2;
    if ((param_1 & 0xff) != 5) {
      if ((param_2 == 1099) ||
         (local_8 = param_2, uVar2 = Type::SlowIs((Type *)&local_8,1099), (uVar2 & 1) != 0)) {
        iVar3 = 2;
      }
      else if ((local_8 == 0x407) ||
              (uVar2 = Type::SlowIs((Type *)&local_8,0x407), (uVar2 & 1) != 0)) {
        iVar3 = 3;
      }
      else {
        iVar3 = 7;
      }
      param_1 = param_1 & 0xff;
      goto LAB_012e9384;
    }
    if (param_2 != 0x8000001) {
      uVar2 = Type::SlowIs((Type *)&local_28,0x8000001);
      bVar1 = (uVar2 & 1) == 0;
      param_1 = 8;
      if (bVar1) {
        param_1 = 5;
      }
      iVar3 = 7;
      if (bVar1) {
        iVar3 = 4;
      }
      goto LAB_012e9384;
    }
  }
  iVar3 = 7;
  param_1 = 8;
LAB_012e9384:
  return param_1 | iVar3 << 8;
}

