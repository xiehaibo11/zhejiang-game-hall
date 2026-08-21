
/* v8::internal::JSArrayIterator::JSArrayIteratorVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSArrayIterator::JSArrayIteratorVerify(JSArrayIterator *this,Isolate *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  TorqueGeneratedClassVerifiers::JSArrayIteratorVerify(*(undefined8 *)this);
  uVar5 = *(ulong *)this;
  uVar2 = *(uint *)(uVar5 + 0xf);
  uVar4 = uVar5 & 0xffffffff00000000;
  uVar3 = uVar4 | uVar2;
  iVar1 = (int)uVar2 >> 1;
  if ((uVar2 & 1) == 0) {
    dVar6 = (double)iVar1;
  }
  else {
    dVar6 = *(double *)(uVar3 + 3);
  }
  if (dVar6 < 0.0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","next_index().Number() >= 0");
  }
  if ((uVar2 & 1) == 0) {
    dVar6 = (double)iVar1;
  }
  else {
    dVar6 = *(double *)(uVar3 + 3);
  }
  if (dVar6 <= 9007199254740991.0) {
    if ((*(uint *)(uVar5 + 0xb) & 1) != 0) {
      uVar5 = uVar4 | *(uint *)(uVar5 + 0xb);
      if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x41b) {
        if ((uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","next_index().IsSmi()");
        }
      }
      else if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x423) {
        if ((uVar2 & 1) == 0) {
          dVar6 = (double)iVar1;
        }
        else {
          dVar6 = *(double *)(uVar3 + 3);
        }
        if (4294967295.0 < dVar6) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","next_index().Number() <= kMaxUInt32");
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","next_index().Number() <= kMaxSafeInteger");
}

