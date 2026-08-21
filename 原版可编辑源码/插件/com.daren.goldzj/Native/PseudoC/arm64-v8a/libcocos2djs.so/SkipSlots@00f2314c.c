
/* v8::internal::TranslatedState::SkipSlots(int, v8::internal::TranslatedFrame*, int*) */

void __thiscall
v8::internal::TranslatedState::SkipSlots
          (TranslatedState *this,int param_1,TranslatedFrame *param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < param_1) {
    lVar1 = (long)*param_3;
    do {
      param_1 = param_1 + -1;
      lVar2 = *(long *)(*(long *)(param_2 + 0x30) +
                       ((ulong)(lVar1 + *(long *)(param_2 + 0x48)) >> 4 & 0xffffffffffffff8));
      uVar3 = lVar1 + *(long *)(param_2 + 0x48) & 0x7f;
      *param_3 = (int)lVar1 + 1;
      if (*(char *)(lVar2 + uVar3 * 0x20) == '\b') {
        param_1 = *(int *)(lVar2 + uVar3 * 0x20 + 0x1c) + param_1;
      }
      lVar1 = lVar1 + 1;
    } while (0 < param_1);
  }
  return;
}

