
undefined8 FUN_0179cf78(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_8;
  
  if (param_1 == 0x201) {
    uVar2 = 0x201;
  }
  else {
    uVar2 = 0x201;
    local_8 = param_1;
    uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x201);
    if (((uVar1 & 1) == 0) && (uVar2 = 0x4021, local_8 != 0x4021)) {
      uVar2 = 0x4021;
      uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x4021);
      if (((uVar1 & 1) == 0) && (uVar2 = 0x1c5f, local_8 != 0x1c5f)) {
        uVar2 = 0x1c5f;
        uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x1c5f);
        if ((((uVar1 & 1) == 0) && (uVar2 = 0x8000001, local_8 != 0x8000001)) &&
           (uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x8000001),
           (uVar1 & 1) == 0)) {
          if (local_8 == 0x101) {
            uVar2 = 0x101;
          }
          else {
            uVar2 = 0x101;
            uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x101);
            if ((uVar1 & 1) == 0) {
              if (local_8 == 0x81) {
                uVar2 = 0x81;
              }
              else {
                uVar2 = 0x81;
                uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x81);
                if (((uVar1 & 1) == 0) && (uVar2 = 0x2001, local_8 != 0x2001)) {
                  uVar2 = 0x2001;
                  uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x2001);
                  if (((uVar1 & 1) == 0) &&
                     ((uVar2 = 0x47f0001, local_8 != 0x47f0001 &&
                      (uVar1 = v8::internal::compiler::Type::SlowIs((Type *)&local_8,0x47f0001),
                      (uVar1 & 1) == 0)))) {
                    uVar2 = 0xffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

