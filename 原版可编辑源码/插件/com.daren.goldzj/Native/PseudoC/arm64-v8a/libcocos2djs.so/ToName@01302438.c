
/* v8::internal::compiler::Typer::Visitor::ToName(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

long v8::internal::compiler::Typer::Visitor::ToName(long param_1)

{
  ulong uVar1;
  long local_30;
  long local_28;
  long local_8;
  
  local_30 = param_1;
  local_8 = param_1;
  if (((param_1 == 0x8007fff) ||
      (uVar1 = Type::SlowIs((Type *)&local_8,0x8007fff), (uVar1 & 1) != 0)) &&
     (uVar1 = Type::Maybe((Type *)&local_8,0x47f0001), (uVar1 & 1) == 0)) {
    local_30 = local_8;
    if (local_8 == 0x6021) {
      return 0x6021;
    }
  }
  else {
    local_30 = 0x8007fff;
  }
  uVar1 = Type::SlowIs((Type *)&local_30,0x6021);
  local_28 = local_30;
  if ((uVar1 & 1) == 0) {
    uVar1 = Type::Maybe((Type *)&local_30,0x2001);
    if ((uVar1 & 1) == 0) {
      local_28 = local_30;
      local_8 = local_30;
      if (((local_30 == 0x8007fff) ||
          (uVar1 = Type::SlowIs((Type *)&local_8,0x8007fff), (uVar1 & 1) != 0)) &&
         (uVar1 = Type::Maybe((Type *)&local_8,0x47f0001), (uVar1 & 1) == 0)) {
        local_28 = local_8;
        if (local_8 == 0x4021) {
          return 0x4021;
        }
      }
      else {
        local_28 = 0x8007fff;
      }
      uVar1 = Type::SlowIs((Type *)&local_28,0x4021);
      if ((uVar1 & 1) == 0) {
        local_28 = 0x4021;
      }
    }
    else {
      local_28 = 0x6021;
    }
  }
  return local_28;
}

