
/* v8::internal::Accessors::IsJSObjectFieldAccessor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::FieldIndex*) */

undefined8
v8::internal::Accessors::IsJSObjectFieldAccessor
          (long param_1,long *param_2,ulong *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(ushort *)(*param_2 + 7) == 0x423) {
    puVar1 = (ulong *)(param_1 + 0x7b8);
    if (((puVar1 != param_3) && ((uVar3 = *param_3, param_3 == (ulong *)0x0 || (uVar3 != *puVar1))))
       && (((uVar4 = uVar3 & 0xffffffff00000000 | 7,
            *(ushort *)(uVar4 + *(uint *)(uVar3 - 1)) < 0x20 &&
            (*(ushort *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) < 0x20)
            ) || (((*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x40 ||
                   (*(short *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1))
                    == 0x40)) ||
                  (uVar3 = String::SlowEquals(param_1,param_3,puVar1), (uVar3 & 1) == 0)))))) {
      return 0;
    }
    uVar2 = 0x200c;
  }
  else {
    if (0x3f < *(ushort *)(*param_2 + 7)) {
      return 0;
    }
    puVar1 = (ulong *)(param_1 + 0x7b8);
    if ((puVar1 != param_3) && ((uVar3 = *param_3, param_3 == (ulong *)0x0 || (uVar3 != *puVar1))))
    {
      uVar4 = uVar3 & 0xffffffff00000000 | 7;
      if ((*(ushort *)(uVar4 + *(uint *)(uVar3 - 1)) < 0x20) &&
         (*(ushort *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) < 0x20)) {
        return 0;
      }
      if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x40) {
        return 0;
      }
      if (*(short *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) == 0x40) {
        return 0;
      }
      uVar3 = String::SlowEquals(param_1,param_3,puVar1);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    uVar2 = 0xa008;
  }
  *param_4 = uVar2;
  return 1;
}

