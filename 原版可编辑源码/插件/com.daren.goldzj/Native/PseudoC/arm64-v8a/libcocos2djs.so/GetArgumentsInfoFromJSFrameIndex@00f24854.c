
/* v8::internal::TranslatedState::GetArgumentsInfoFromJSFrameIndex(int, int*) */

long __thiscall
v8::internal::TranslatedState::GetArgumentsInfoFromJSFrameIndex
          (TranslatedState *this,int param_1,int *param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)this;
  if (*(long *)(this + 8) - lVar2 != 0) {
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar3 = *(uint *)(lVar2 + lVar6);
      if (((uVar3 < 6) && ((1 << (ulong)(uVar3 & 0x1f) & 0x31U) != 0)) &&
         (bVar1 = param_1 < 1, param_1 = param_1 + -1, bVar1)) {
        if ((uVar4 != 0) && (*(int *)(lVar2 + lVar6 + -0x58) == 1)) {
          *param_2 = *(int *)(lVar2 + lVar6 + -0x40);
          return *(long *)this + lVar6 + -0x58;
        }
        lVar5 = **(long **)(lVar2 + lVar6 + 0x10);
        if ((uVar3 == 4) && (*(short *)(lVar5 + 0x15) == -1)) {
          lVar2 = lVar2 + lVar6;
          uVar4 = *(long *)(lVar2 + 0x48) + (long)*(int *)(lVar2 + 0x18);
          uVar3 = TranslatedValue::GetRawValue
                            ((TranslatedValue *)
                             (*(long *)(*(long *)(lVar2 + 0x30) + (uVar4 >> 4 & 0xffffffffffffff8))
                             + (uVar4 & 0x7f) * 0x20));
          if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","argc_object.IsSmi()");
          }
          uVar3 = (int)uVar3 >> 1;
        }
        else {
          uVar3 = *(ushort *)(lVar5 + 0x15) + 1 & 0xffff;
        }
        *param_2 = uVar3;
        return *(long *)this + lVar6;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x58;
    } while (uVar4 < (ulong)((*(long *)(this + 8) - lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  return 0;
}

