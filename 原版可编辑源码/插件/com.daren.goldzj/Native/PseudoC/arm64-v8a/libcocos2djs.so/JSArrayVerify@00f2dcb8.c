
/* v8::internal::JSArray::JSArrayVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSArray::JSArrayVerify(JSArray *this,Isolate *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  TorqueGeneratedClassVerifiers::JSArrayVerify(*(undefined8 *)this);
  uVar6 = *(ulong *)this;
  uVar5 = *(uint *)(uVar6 + 7);
  if (uVar5 + (int)param_1 == *(int *)(param_1 + 0x88)) {
    return;
  }
  if (uVar5 == *(uint *)(param_1 + 0xa0)) {
    return;
  }
  uVar7 = uVar6 & 0xffffffff00000000;
  uVar2 = uVar7 | uVar5;
  uVar3 = uVar7 | 7;
  if ((0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76) &&
     (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x87)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","elements().IsFixedArray() || elements().IsFixedDoubleArray()");
  }
  iVar1 = *(int *)(uVar2 + 3) >> 1;
  if ((iVar1 == 0) && (uVar5 != *(uint *)(param_1 + 0x168))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","elements() == ReadOnlyRoots(isolate).empty_fixed_array()");
  }
  uVar4 = *(uint *)(uVar6 + 0xb);
  if (((uVar4 & 1) == 0) &&
     ((uVar8 = uVar7 | 10, *(byte *)(uVar8 + *(uint *)(uVar6 - 1)) < 0x30 ||
      ((byte)((*(byte *)(uVar8 + *(uint *)(uVar6 - 1)) >> 3) - 6) < 6)))) {
    if (1 < *(int *)(uVar2 + 3)) {
      if (((*(byte *)(uVar8 + *(uint *)(uVar6 - 1)) & 0xf0) == 0x20) &&
         (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x87)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","HasDoubleElements() implies elements().IsFixedDoubleArray()");
      }
      if (((*(byte *)(uVar8 + *(uint *)(uVar6 - 1)) < 0x20) ||
          ((byte)((*(byte *)(uVar8 + *(uint *)(uVar6 - 1)) >> 3) - 6) < 6)) &&
         (0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "HasSmiOrObjectElements() || HasAnyNonextensibleElements() implies elements().IsFixedArray()"
                );
      }
    }
    if ((int)uVar4 >> 1 <= iVar1) {
      return;
    }
    if (uVar5 == *(uint *)(param_1 + 0x168)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "size <= elements().length() || elements() == ReadOnlyRoots(isolate).empty_fixed_array()"
            );
  }
  if ((*(byte *)((uVar7 | 10) + (ulong)*(uint *)(uVar6 - 1)) & 0xf8) != 0x60) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HasDictionaryElements()");
  }
  if ((uVar4 & 1) == 0) {
    if ((int)uVar4 < 0) goto LAB_00f2dee0;
    uVar4 = uVar4 >> 1;
    dVar10 = (double)(ulong)uVar4;
  }
  else {
    uVar7 = uVar7 | uVar4;
    if (*(short *)(uVar3 + *(uint *)(uVar7 - 1)) != 0x42) {
LAB_00f2dee0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","length().ToArrayLength(&array_length)");
    }
    dVar9 = *(double *)(uVar7 + 3);
    dVar10 = dVar9 + 4503599627370496.0;
    if (((ulong)dVar10 >> 0x20 != 0x43300000) || (dVar9 != (double)((ulong)dVar10 & 0xffffffff)))
    goto LAB_00f2dee0;
    uVar4 = SUB84(dVar10,0);
    if (uVar4 == 0xffffffff) {
      if ((*(short *)(uVar3 + *(uint *)(uVar7 - 1)) != 0x42) || (dVar9 != 4294967295.0))
      goto LAB_00f2dee0;
      uVar5 = 0xffffffff;
      goto LAB_00f2deb8;
    }
  }
  uVar5 = SUB84(dVar10,0);
  if (uVar4 == 0) {
    return;
  }
LAB_00f2deb8:
  iVar1 = *(int *)(uVar2 + 7) >> 1;
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = iVar1 - 1;
  }
  if (uVar4 <= uVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","nof_elements <= array_length");
}

