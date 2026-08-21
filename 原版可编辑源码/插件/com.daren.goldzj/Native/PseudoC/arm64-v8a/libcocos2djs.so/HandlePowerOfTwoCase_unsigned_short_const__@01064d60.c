
/* double v8::internal::NumberParseIntHelper::HandlePowerOfTwoCase<unsigned short const*>(unsigned
   short const*) */

double __thiscall
v8::internal::NumberParseIntHelper::HandlePowerOfTwoCase<unsigned_short_const*>
          (NumberParseIntHelper *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  double dVar3;
  
  if (*(int *)(this + 0x20) - 2U < 0x1f) {
    puVar1 = param_1 + *(int *)(this + 0x24);
    puVar2 = param_1 + *(int *)(this + 0x28);
    switch(*(int *)(this + 0x20)) {
    case 2:
      dVar3 = InternalStringToIntDouble<1,unsigned_short_const*,unsigned_short_const*>
                        (puVar1,puVar2,false,true);
      return dVar3;
    case 4:
      dVar3 = InternalStringToIntDouble<2,unsigned_short_const*,unsigned_short_const*>
                        (puVar1,puVar2,false,true);
      return dVar3;
    case 8:
      dVar3 = InternalStringToIntDouble<3,unsigned_short_const*,unsigned_short_const*>
                        (puVar1,puVar2,false,true);
      return dVar3;
    case 0x10:
      dVar3 = InternalStringToIntDouble<4,unsigned_short_const*,unsigned_short_const*>
                        (puVar1,puVar2,false,true);
      return dVar3;
    case 0x20:
      dVar3 = InternalStringToIntDouble<5,unsigned_short_const*,unsigned_short_const*>
                        (puVar1,puVar2,false,true);
      return dVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

