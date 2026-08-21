
/* v8::internal::compiler::Operator1<v8::internal::compiler::CheckMapsParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckMapsParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CheckMapsParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CheckMapsParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckMapsParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckMapsParameters>>
::Equals(Operator1<v8::internal::compiler::CheckMapsParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckMapsParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckMapsParameters>>
         *this,Operator *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
     (*(int *)(this + 0x30) == *(int *)(param_1 + 0x30))) {
    uVar2 = *(ulong *)(this + 0x38);
    uVar3 = *(ulong *)(param_1 + 0x38);
    if (uVar2 == uVar3) {
LAB_012f7ce4:
      uVar1 = compiler::operator==
                        ((FeedbackSource *)(this + 0x40),(FeedbackSource *)(param_1 + 0x40));
      return uVar1;
    }
    if (((uVar2 & 3) == 2) && ((uVar3 & 3) == 2)) {
      lVar5 = *(long *)(uVar2 + 6) - *(long *)(uVar2 - 2);
      uVar4 = lVar5 >> 3;
      if (uVar4 == *(long *)(uVar3 + 6) - *(long *)(uVar3 - 2) >> 3) {
        if (lVar5 != 0) {
          uVar6 = 0;
          do {
            if (uVar4 == uVar6) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(long *)(*(long *)(uVar2 - 2) + uVar6 * 8) !=
                *(long *)(*(long *)(uVar3 - 2) + uVar6 * 8)) {
              return 0;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
        }
        goto LAB_012f7ce4;
      }
    }
  }
  return 0;
}

