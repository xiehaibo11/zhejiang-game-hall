
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CheckMapsParameters
   const&, v8::internal::compiler::CheckMapsParameters const&) */

undefined8
v8::internal::compiler::operator==(CheckMapsParameters *param_1,CheckMapsParameters *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(int *)param_1 == *(int *)param_2) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = *(ulong *)(param_2 + 8);
    if (uVar2 == uVar3) {
LAB_012eb140:
      uVar1 = operator==((FeedbackSource *)(param_1 + 0x10),(FeedbackSource *)(param_2 + 0x10));
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
        goto LAB_012eb140;
      }
    }
  }
  return 0;
}

