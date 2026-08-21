
/* v8::internal::TranslatedState::GetValueByObjectIndex(int) */

long __thiscall
v8::internal::TranslatedState::GetValueByObjectIndex(TranslatedState *this,int param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  
  if ((ulong)(long)param_1 < *(ulong *)(this + 0x58)) {
    uVar1 = *(long *)(this + 0x50) + (long)param_1;
    piVar2 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                    (uVar1 & 0x1ff) * 8);
    lVar3 = *(long *)this + (long)*piVar2 * 0x58;
    uVar1 = *(long *)(lVar3 + 0x48) + (long)piVar2[1];
    return *(long *)(*(long *)(lVar3 + 0x30) + (uVar1 >> 4 & 0xffffffffffffff8)) +
           (uVar1 & 0x7f) * 0x20;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<size_t>(object_index) < object_positions_.size()");
}

