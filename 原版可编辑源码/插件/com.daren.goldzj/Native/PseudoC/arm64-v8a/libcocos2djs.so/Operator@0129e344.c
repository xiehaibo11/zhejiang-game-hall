
/* v8::internal::compiler::Operator::Operator(unsigned short,
   v8::base::Flags<v8::internal::compiler::Operator::Property, unsigned char>, char const*, unsigned
   long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) */

void __thiscall
v8::internal::compiler::Operator::Operator
          (Operator *this,undefined2 param_1,Operator param_3,undefined8 param_4,ulong param_5,
          ulong param_6,ulong param_7,ulong param_8,ulong param_9,ulong param_10)

{
  *(undefined2 *)(this + 0x10) = param_1;
  this[0x12] = param_3;
  *(undefined ***)this = &PTR__Operator_01cbe7b0;
  *(undefined8 *)(this + 8) = param_4;
  if (param_5 >> 0x1f == 0) {
    *(int *)(this + 0x14) = (int)param_5;
    if (param_6 >> 0x1f == 0) {
      *(int *)(this + 0x18) = (int)param_6;
      if (param_7 >> 0x1f == 0) {
        *(int *)(this + 0x1c) = (int)param_7;
        if (param_8 >> 0x1f == 0) {
          *(int *)(this + 0x20) = (int)param_8;
          if (param_9 < 0x100) {
            this[0x24] = SUB81(param_9,0);
            if (param_10 >> 0x1f == 0) {
              *(int *)(this + 0x28) = (int)param_10;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "val <= std::min(static_cast<size_t>(std::numeric_limits<N>::max()), static_cast<size_t>(kMaxInt))"
          );
}

