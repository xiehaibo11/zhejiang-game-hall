
/* v8::internal::ConsString::ConsStringVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::ConsString::ConsStringVerify(ConsString *this,Isolate *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  TorqueGeneratedClassVerifiers::ConsStringVerify(*(undefined8 *)this);
  uVar4 = *(ulong *)this;
  if (*(int *)(uVar4 + 7) < 0xd) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","this->length() >= ConsString::kMinLength");
  }
  uVar3 = uVar4 & 0xffffffff00000000;
  uVar2 = uVar3 | *(uint *)(uVar4 + 0xb);
  iVar1 = *(int *)((uVar3 | *(uint *)(uVar4 + 0xf)) + 7);
  if (*(int *)(uVar4 + 7) == iVar1 + *(int *)(uVar2 + 7)) {
    if ((((((*(ushort *)((uVar3 | *(uint *)(uVar4 - 1)) + 7) & 7) != 1) || (iVar1 == 0)) &&
         ((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
          ((*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) & 7) != 0)))) &&
        ((0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
         ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) & 7) != 2)))) &&
       ((0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
        ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) & 7) != 5)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "this->first().IsSeqString() || this->first().IsExternalString() || this->first().IsThinString()"
              );
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","this->length() == this->first().length() + this->second().length()")
  ;
}

