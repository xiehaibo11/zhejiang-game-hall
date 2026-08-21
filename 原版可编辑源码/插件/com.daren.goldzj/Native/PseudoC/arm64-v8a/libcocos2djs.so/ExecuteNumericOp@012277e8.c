
/* v8::internal::wasm::ThreadImpl::ExecuteNumericOp(v8::internal::wasm::WasmOpcode,
   v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*) */

uint __thiscall
v8::internal::wasm::ThreadImpl::ExecuteNumericOp
          (ThreadImpl *this,undefined4 param_2,undefined8 param_3,long param_4,long param_5,
          int *param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  Isolate *pIVar19;
  Isolate *pIVar20;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_167;
  undefined1 uStack_160;
  float local_ef;
  undefined4 uStack_eb;
  undefined1 local_c0;
  uint uStack_bf;
  undefined4 uStack_bb;
  undefined7 uStack_b7;
  undefined1 local_b0;
  double local_a0;
  double dStack_98;
  undefined1 local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  switch(param_2) {
  case 0xfc00:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    if ((local_ef < -2.1474836e+09) || (2.1474836e+09 <= local_ef)) {
      if (NAN(local_ef)) {
        iVar6 = 0;
      }
      else {
        iVar6 = -0x80000000;
        if (0.0 <= local_ef) {
          iVar6 = 0x7fffffff;
        }
      }
    }
    else {
      iVar6 = (int)local_ef;
    }
    uVar18 = (ulong)CONCAT41(iVar6,1);
    break;
  case 0xfc01:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    if ((local_ef <= -1.0) || (4.2949673e+09 <= local_ef)) {
      if (NAN(local_ef)) {
        iVar6 = 0;
      }
      else {
        iVar6 = -(uint)(0.0 <= local_ef);
      }
    }
    else {
      iVar6 = (int)local_ef;
    }
    uVar18 = (ulong)CONCAT41(iVar6,1);
    break;
  case 0xfc02:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar13 = (double)CONCAT44(uStack_eb,local_ef);
    if ((dVar13 <= -2147483649.0) || (2147483648.0 <= dVar13)) {
      if (NAN(dVar13)) {
        iVar6 = 0;
      }
      else {
        iVar6 = -0x80000000;
        if (0.0 <= dVar13) {
          iVar6 = 0x7fffffff;
        }
      }
    }
    else {
      iVar6 = (int)dVar13;
    }
    uVar18 = (ulong)CONCAT41(iVar6,1);
    break;
  case 0xfc03:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar13 = (double)CONCAT44(uStack_eb,local_ef);
    if ((dVar13 <= -1.0) || (4294967296.0 <= dVar13)) {
      if (NAN(dVar13)) {
        iVar6 = 0;
      }
      else {
        iVar6 = -(uint)(0.0 <= dVar13);
      }
    }
    else {
      iVar6 = (int)dVar13;
    }
    uVar18 = (ulong)CONCAT41(iVar6,1);
    break;
  case 0xfc04:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    local_a0 = (double)CONCAT44(local_a0._4_4_,local_ef);
    iVar6 = float32_to_int64_wrapper((ulong)&local_a0);
    dVar13 = local_a0;
    if (iVar6 == 0) {
      if (NAN(local_ef)) {
        dVar13 = 0.0;
      }
      else {
        dVar13 = -0.0;
        if (0.0 <= local_ef) {
          dVar13 = NAN;
        }
      }
    }
    local_c0 = 2;
    uStack_bf = SUB84(dVar13,0);
    uStack_bb = (undefined4)((ulong)dVar13 >> 0x20);
    goto LAB_01228518;
  case 0xfc05:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    local_a0 = (double)CONCAT44(local_a0._4_4_,local_ef);
    iVar6 = float32_to_uint64_wrapper((ulong)&local_a0);
    dVar13 = local_a0;
    if (iVar6 == 0) {
      if (NAN(local_ef)) {
        dVar13 = 0.0;
      }
      else {
        dVar13 = (double)-(ulong)(0.0 <= local_ef);
      }
    }
    uStack_167 = SUB87(dVar13,0);
    uStack_160 = (undefined1)((ulong)dVar13 >> 0x38);
    uVar10 = CONCAT71(uStack_167,2);
    uStack_190 = uStack_160;
    goto LAB_01228510;
  case 0xfc06:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar13 = (double)CONCAT44(uStack_eb,local_ef);
    local_a0 = dVar13;
    iVar6 = float64_to_int64_wrapper((ulong)&local_a0);
    dVar14 = local_a0;
    if (iVar6 == 0) {
      if (NAN(dVar13)) {
        dVar14 = 0.0;
      }
      else {
        dVar14 = -0.0;
        if (0.0 <= dVar13) {
          dVar14 = NAN;
        }
      }
    }
    uStack_17f = SUB87(dVar14,0);
    uStack_178 = (undefined1)((ulong)dVar14 >> 0x38);
    uVar10 = CONCAT71(uStack_17f,2);
    uStack_190 = uStack_178;
    goto LAB_01228510;
  case 0xfc07:
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    dVar13 = (double)CONCAT44(uStack_eb,local_ef);
    local_a0 = dVar13;
    iVar6 = float64_to_uint64_wrapper((ulong)&local_a0);
    dVar14 = local_a0;
    if (iVar6 == 0) {
      if (NAN(dVar13)) {
        dVar14 = 0.0;
      }
      else {
        dVar14 = (double)-(ulong)(0.0 <= dVar13);
      }
    }
    uStack_197 = SUB87(dVar14,0);
    uStack_190 = (undefined1)((ulong)dVar14 >> 0x38);
    uVar10 = CONCAT71(uStack_197,2);
LAB_01228510:
    local_c0 = (undefined1)uVar10;
    uStack_bf = (uint)((ulong)uVar10 >> 8);
    uStack_bb = CONCAT13(uStack_190,(int3)((ulong)uVar10 >> 0x28));
LAB_01228518:
    uStack_b7 = 0;
    local_b0 = 0;
    StackValue::StackValue
              ((StackValue *)&local_a0,&local_c0,this,
               (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
    pdVar15 = *(double **)(this + 0x28);
    goto LAB_01228548;
  case 0xfc08:
    lVar16 = *(long *)(param_4 + 0x40) + param_5;
    bVar2 = *(byte *)(lVar16 + 2);
    if ((char)bVar2 < '\0') {
      uVar7 = bVar2 & 0x7f | (*(byte *)(lVar16 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(lVar16 + 3) < '\0') {
        uVar7 = uVar7 | (*(byte *)(lVar16 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(lVar16 + 4) < '\0') {
          uVar7 = uVar7 | (*(byte *)(lVar16 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(lVar16 + 5) < '\0') {
            uVar7 = uVar7 | (uint)*(byte *)(lVar16 + 6) << 0x1c;
            iVar6 = 6;
          }
          else {
            uVar7 = (int)(uVar7 << 4) >> 4;
            iVar6 = 5;
          }
        }
        else {
          uVar7 = (int)(uVar7 << 0xb) >> 0xb;
          iVar6 = 4;
        }
      }
      else {
        uVar7 = (int)(uVar7 << 0x12) >> 0x12;
        iVar6 = 3;
      }
    }
    else {
      uVar7 = (int)((uint)bVar2 << 0x19) >> 0x19;
      iVar6 = 2;
    }
    *param_6 = *param_6 + iVar6;
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar12 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    uVar18 = (ulong)uStack_bf;
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = **(long **)(this + 0x10);
    uVar1 = *(uint *)(lVar16 + 0x13);
    uVar11 = uVar1 - uStack_bf;
    if (uVar12 <= uVar1 - uStack_bf) {
      uVar11 = uVar12;
    }
    if ((uStack_bf <= uVar1) && (uVar12 <= uVar1 - uStack_bf)) {
      uVar12 = *(uint *)(*(long *)(lVar16 + 0xb3) + (ulong)uVar7 * 4);
      if ((uVar11 <= uVar12) && (uVar18 <= (ulong)uVar12 - (ulong)uVar11)) {
        uVar9 = (*(ulong *)(lVar16 + 0x1b) & (ulong)uStack_bf) + *(long *)(lVar16 + 0xb);
        uVar18 = *(long *)(*(long *)(lVar16 + 0xab) + (ulong)uVar7 * 8) + uVar18;
        goto LAB_012290b4;
      }
    }
    goto LAB_012290c0;
  case 0xfc09:
    param_5 = *(long *)(param_4 + 0x40) + param_5;
    bVar2 = *(byte *)(param_5 + 2);
    if ((char)bVar2 < '\0') {
      uVar12 = bVar2 & 0x7f | (*(byte *)(param_5 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(param_5 + 3) < '\0') {
        uVar12 = uVar12 | (*(byte *)(param_5 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(param_5 + 4) < '\0') {
          uVar12 = uVar12 | (*(byte *)(param_5 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(param_5 + 5) < '\0') {
            uVar12 = uVar12 | (uint)*(byte *)(param_5 + 6) << 0x1c;
            iVar6 = 5;
          }
          else {
            uVar12 = (int)(uVar12 << 4) >> 4;
            iVar6 = 4;
          }
        }
        else {
          uVar12 = (int)(uVar12 << 0xb) >> 0xb;
          iVar6 = 3;
        }
      }
      else {
        uVar12 = (int)(uVar12 << 0x12) >> 0x12;
        iVar6 = 2;
      }
    }
    else {
      uVar12 = (int)((uint)bVar2 << 0x19) >> 0x19;
      iVar6 = 1;
    }
    uVar7 = 1;
    *param_6 = *param_6 + iVar6;
    *(undefined4 *)(*(long *)(**(long **)(this + 0x10) + 0xb3) + (ulong)uVar12 * 4) = 0;
    goto LAB_01228560;
  case 0xfc0a:
    *param_6 = *param_6 + 2;
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar7 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar12 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    uVar18 = (ulong)uStack_bf;
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = **(long **)(this + 0x10);
    uVar3 = *(uint *)(lVar16 + 0x13);
    uVar1 = uVar3 - uStack_bf;
    if (uVar7 <= uVar3 - uStack_bf) {
      uVar1 = uVar7;
    }
    uVar11 = 0;
    if (uStack_bf <= uVar3) {
      uVar11 = uVar1;
    }
    if ((((uVar12 <= uVar3) && (uStack_bf <= uVar3)) && (uVar7 <= uVar3 - uStack_bf)) &&
       (uVar11 <= uVar3 - uVar12)) {
      uVar9 = (*(ulong *)(lVar16 + 0x1b) & (ulong)uStack_bf) + *(long *)(lVar16 + 0xb);
      uVar18 = (*(ulong *)(lVar16 + 0x1b) & uVar18) + *(long *)(lVar16 + 0xb);
LAB_012290b4:
      memory_copy_wrapper(uVar9,uVar18,uVar11);
      uVar7 = 1;
      goto LAB_01228560;
    }
    goto LAB_012290c0;
  case 0xfc0b:
    *param_6 = *param_6 + 1;
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar7 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar12 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = **(long **)(this + 0x10);
    if ((uStack_bf <= *(uint *)(lVar16 + 0x13)) && (uVar7 <= *(uint *)(lVar16 + 0x13) - uStack_bf))
    {
      memory_fill_wrapper((*(ulong *)(lVar16 + 0x1b) & (ulong)uStack_bf) + *(long *)(lVar16 + 0xb),
                          uVar12,uVar7);
      uVar7 = 1;
      goto LAB_01228560;
    }
LAB_012290c0:
    *(undefined4 *)(this + 0x58) = 4;
    uVar7 = 0;
    *(undefined4 *)(this + 0x68) = 1;
    *(long *)(*(long *)(this + 0x40) + -0x10) = param_5;
    goto LAB_01228560;
  case 0xfc0c:
    lVar16 = *(long *)(param_4 + 0x40) + param_5;
    bVar2 = *(byte *)(lVar16 + 2);
    if ((char)bVar2 < '\0') {
      uVar7 = bVar2 & 0x7f | (*(byte *)(lVar16 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(lVar16 + 3) < '\0') {
        uVar7 = uVar7 | (*(byte *)(lVar16 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(lVar16 + 4) < '\0') {
          uVar7 = uVar7 | (*(byte *)(lVar16 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(lVar16 + 5) < '\0') {
            uVar7 = uVar7 | (uint)*(byte *)(lVar16 + 6) << 0x1c;
            lVar17 = 5;
          }
          else {
            uVar7 = (int)(uVar7 << 4) >> 4;
            lVar17 = 4;
          }
        }
        else {
          uVar7 = (int)(uVar7 << 0xb) >> 0xb;
          lVar17 = 3;
        }
      }
      else {
        uVar7 = (int)(uVar7 << 0x12) >> 0x12;
        lVar17 = 2;
      }
    }
    else {
      uVar7 = (int)((uint)bVar2 << 0x19) >> 0x19;
      lVar17 = 1;
    }
    lVar16 = lVar16 + lVar17;
    uVar12 = *(byte *)(lVar16 + 2) & 0x7f;
    if ((char)*(byte *)(lVar16 + 2) < '\0') {
      uVar12 = uVar12 | (*(byte *)(lVar16 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(lVar16 + 3) < '\0') {
        uVar12 = uVar12 | (*(byte *)(lVar16 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(lVar16 + 4) < '\0') {
          uVar12 = uVar12 | (*(byte *)(lVar16 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(lVar16 + 5) < '\0') {
            uVar12 = uVar12 | (uint)*(byte *)(lVar16 + 6) << 0x1c;
            iVar6 = 5;
          }
          else {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 3;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 1;
    }
    *param_6 = iVar6 + (int)lVar17 + *param_6;
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar1 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar3 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    pIVar20 = *(Isolate **)(this + 8);
    uVar10 = *(undefined8 *)(pIVar20 + 0x95a0);
    lVar16 = *(long *)(pIVar20 + 0x95a8);
    *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + 1;
    uVar7 = WasmInstanceObject::InitTableEntries
                      ((ulong)*(uint *)(*(long *)(this + 0x10) + 4) << 0x20,*(long *)(this + 0x10),
                       uVar12,uVar7,uStack_bf,uVar3,uVar1);
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(this + 0x58) = 4;
      *(undefined4 *)(this + 0x68) = 0xb;
      *(long *)(*(long *)(this + 0x40) + -0x10) = param_5;
    }
    if (pIVar20 == (Isolate *)0x0) goto LAB_01228560;
    *(undefined8 *)(pIVar20 + 0x95a0) = uVar10;
    *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + -1;
    if (*(long *)(pIVar20 + 0x95a8) == lVar16) goto LAB_01228560;
    *(long *)(pIVar20 + 0x95a8) = lVar16;
    goto LAB_012295a8;
  case 0xfc0d:
    param_5 = *(long *)(param_4 + 0x40) + param_5;
    bVar2 = *(byte *)(param_5 + 2);
    if ((char)bVar2 < '\0') {
      uVar12 = bVar2 & 0x7f | (*(byte *)(param_5 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(param_5 + 3) < '\0') {
        uVar12 = uVar12 | (*(byte *)(param_5 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(param_5 + 4) < '\0') {
          uVar12 = uVar12 | (*(byte *)(param_5 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(param_5 + 5) < '\0') {
            uVar12 = uVar12 | (uint)*(byte *)(param_5 + 6) << 0x1c;
            iVar6 = 5;
          }
          else {
            uVar12 = (int)(uVar12 << 4) >> 4;
            iVar6 = 4;
          }
        }
        else {
          uVar12 = (int)(uVar12 << 0xb) >> 0xb;
          iVar6 = 3;
        }
      }
      else {
        uVar12 = (int)(uVar12 << 0x12) >> 0x12;
        iVar6 = 2;
      }
    }
    else {
      uVar12 = (int)((uint)bVar2 << 0x19) >> 0x19;
      iVar6 = 1;
    }
    *param_6 = *param_6 + iVar6;
    uVar7 = 1;
    *(undefined1 *)(*(long *)(**(long **)(this + 0x10) + 0xbb) + (ulong)uVar12) = 1;
    goto LAB_01228560;
  case 0xfc0e:
    lVar16 = *(long *)(param_4 + 0x40) + param_5;
    uVar7 = *(byte *)(lVar16 + 2) & 0x7f;
    if ((char)*(byte *)(lVar16 + 2) < '\0') {
      uVar7 = uVar7 | (*(byte *)(lVar16 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(lVar16 + 3) < '\0') {
        uVar7 = uVar7 | (*(byte *)(lVar16 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(lVar16 + 4) < '\0') {
          uVar7 = uVar7 | (*(byte *)(lVar16 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(lVar16 + 5) < '\0') {
            lVar17 = 5;
            uVar7 = uVar7 | (uint)*(byte *)(lVar16 + 6) << 0x1c;
          }
          else {
            lVar17 = 4;
          }
        }
        else {
          lVar17 = 3;
        }
      }
      else {
        lVar17 = 2;
      }
    }
    else {
      lVar17 = 1;
    }
    lVar16 = lVar16 + 1 + lVar17;
    uVar12 = *(byte *)(lVar16 + 1) & 0x7f;
    if ((char)*(byte *)(lVar16 + 1) < '\0') {
      uVar12 = uVar12 | (*(byte *)(lVar16 + 2) & 0x7f) << 7;
      if ((char)*(byte *)(lVar16 + 2) < '\0') {
        uVar12 = uVar12 | (*(byte *)(lVar16 + 3) & 0x7f) << 0xe;
        if ((char)*(byte *)(lVar16 + 3) < '\0') {
          uVar12 = uVar12 | (*(byte *)(lVar16 + 4) & 0x7f) << 0x15;
          if ((char)*(byte *)(lVar16 + 4) < '\0') {
            uVar12 = uVar12 | (uint)*(byte *)(lVar16 + 5) << 0x1c;
            iVar6 = 5;
          }
          else {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 3;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 1;
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar1 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar3 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    pIVar20 = *(Isolate **)(this + 8);
    uVar10 = *(undefined8 *)(pIVar20 + 0x95a0);
    lVar16 = *(long *)(pIVar20 + 0x95a8);
    *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + 1;
    uVar7 = WasmInstanceObject::CopyTableEntries
                      (*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),uVar7,uVar12,uStack_bf
                       ,uVar3,uVar1);
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(this + 0x58) = 4;
      *(undefined4 *)(this + 0x68) = 0xb;
      *(long *)(*(long *)(this + 0x40) + -0x10) = param_5;
    }
    *param_6 = iVar6 + (int)lVar17 + *param_6;
    if (pIVar20 == (Isolate *)0x0) goto LAB_01228560;
    *(undefined8 *)(pIVar20 + 0x95a0) = uVar10;
    *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + -1;
    if (*(long *)(pIVar20 + 0x95a8) == lVar16) goto LAB_01228560;
    *(long *)(pIVar20 + 0x95a8) = lVar16;
    goto LAB_012295a8;
  case 0xfc0f:
    param_5 = param_5 + *(long *)(param_4 + 0x40);
    uVar7 = *(byte *)(param_5 + 2) & 0x7f;
    if ((char)*(byte *)(param_5 + 2) < '\0') {
      uVar7 = uVar7 | (*(byte *)(param_5 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(param_5 + 3) < '\0') {
        uVar7 = uVar7 | (*(byte *)(param_5 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(param_5 + 4) < '\0') {
          uVar7 = uVar7 | (*(byte *)(param_5 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(param_5 + 5) < '\0') {
            uVar7 = uVar7 | (uint)*(byte *)(param_5 + 6) << 0x1c;
            iVar6 = 5;
          }
          else {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 3;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 1;
    }
    pIVar19 = *(Isolate **)(this + 8);
    uVar10 = *(undefined8 *)(pIVar19 + 0x95a0);
    lVar16 = *(long *)(pIVar19 + 0x95a8);
    *(int *)(pIVar19 + 0x95b0) = *(int *)(pIVar19 + 0x95b0) + 1;
    pIVar20 = *(Isolate **)(this + 8);
    uVar18 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)(**(ulong **)(this + 0x10) + 0x8f)) +
                                (long)(int)(uVar7 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar20 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar20 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar20 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar20);
      }
      *(ulong **)(pIVar20 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar18;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar20 + 0x95b8),uVar18);
    }
    lVar17 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar17 + -0x11;
    local_90 = *(undefined1 *)(lVar17 + -1);
    dStack_98 = *(double *)(lVar17 + -9);
    local_a0 = *(double *)(lVar17 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar7 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar17 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar17 + -0x11;
    local_90 = *(undefined1 *)(lVar17 + -1);
    dStack_98 = *(double *)(lVar17 + -9);
    local_a0 = *(double *)(lVar17 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    uStack_bf = WasmTableObject::Grow
                          (*(undefined8 *)(this + 8),puVar8,uVar7,CONCAT44(uStack_bb,uStack_bf));
    uVar7 = 1;
    local_b0 = 0;
    uStack_b7 = 0;
    local_c0 = 1;
    uStack_bb = 0;
    StackValue::StackValue
              ((StackValue *)&local_a0,&local_c0,this,
               (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
    pdVar15 = *(double **)(this + 0x28);
    *(long *)(this + 0x28) = (long)pdVar15 + 0x11;
    *(undefined1 *)(pdVar15 + 2) = local_90;
    pdVar15[1] = dStack_98;
    *pdVar15 = local_a0;
    *param_6 = *param_6 + iVar6;
    if (pIVar19 == (Isolate *)0x0) goto LAB_01228560;
    *(undefined8 *)(pIVar19 + 0x95a0) = uVar10;
    *(int *)(pIVar19 + 0x95b0) = *(int *)(pIVar19 + 0x95b0) + -1;
    if (*(long *)(pIVar19 + 0x95a8) != lVar16) {
      *(long *)(pIVar19 + 0x95a8) = lVar16;
LAB_01228b98:
      HandleScope::DeleteExtensions(pIVar19);
    }
    goto LAB_01228ba0;
  case 0xfc10:
    param_5 = param_5 + *(long *)(param_4 + 0x40);
    uVar7 = *(byte *)(param_5 + 2) & 0x7f;
    if ((char)*(byte *)(param_5 + 2) < '\0') {
      uVar7 = uVar7 | (*(byte *)(param_5 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(param_5 + 3) < '\0') {
        uVar7 = uVar7 | (*(byte *)(param_5 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(param_5 + 4) < '\0') {
          uVar7 = uVar7 | (*(byte *)(param_5 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(param_5 + 5) < '\0') {
            iVar6 = 5;
            uVar7 = uVar7 | (uint)*(byte *)(param_5 + 6) << 0x1c;
          }
          else {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 3;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 1;
    }
    pIVar19 = *(Isolate **)(this + 8);
    uVar10 = *(undefined8 *)(pIVar19 + 0x95a0);
    lVar16 = *(long *)(pIVar19 + 0x95a8);
    *(int *)(pIVar19 + 0x95b0) = *(int *)(pIVar19 + 0x95b0) + 1;
    pIVar20 = *(Isolate **)(this + 8);
    uVar18 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)(**(ulong **)(this + 0x10) + 0x8f)) +
                                (long)(int)(uVar7 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar20 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar20 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar20 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar20);
      }
      *(ulong **)(pIVar20 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar18;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar20 + 0x95b8),uVar18);
      uVar18 = *puVar8;
    }
    uStack_bf = *(int *)(uVar18 + 0xf) >> 1;
    uVar7 = 1;
    local_b0 = 0;
    uStack_b7 = 0;
    local_c0 = 1;
    uStack_bb = 0;
    StackValue::StackValue
              ((StackValue *)&local_a0,&local_c0,this,
               (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
    pdVar15 = *(double **)(this + 0x28);
    *(long *)(this + 0x28) = (long)pdVar15 + 0x11;
    *(undefined1 *)(pdVar15 + 2) = local_90;
    pdVar15[1] = dStack_98;
    *pdVar15 = local_a0;
    *param_6 = *param_6 + iVar6;
    if (pIVar19 == (Isolate *)0x0) goto LAB_01228560;
    *(undefined8 *)(pIVar19 + 0x95a0) = uVar10;
    *(int *)(pIVar19 + 0x95b0) = *(int *)(pIVar19 + 0x95b0) + -1;
    if (*(long *)(pIVar19 + 0x95a8) != lVar16) {
      *(long *)(pIVar19 + 0x95a8) = lVar16;
      goto LAB_01228b98;
    }
LAB_01228ba0:
    uVar7 = 1;
    goto LAB_01228560;
  case 0xfc11:
    lVar16 = param_5 + *(long *)(param_4 + 0x40);
    uVar7 = *(byte *)(lVar16 + 2) & 0x7f;
    if ((char)*(byte *)(lVar16 + 2) < '\0') {
      uVar7 = uVar7 | (*(byte *)(lVar16 + 3) & 0x7f) << 7;
      if ((char)*(byte *)(lVar16 + 3) < '\0') {
        uVar7 = uVar7 | (*(byte *)(lVar16 + 4) & 0x7f) << 0xe;
        if ((char)*(byte *)(lVar16 + 4) < '\0') {
          uVar7 = uVar7 | (*(byte *)(lVar16 + 5) & 0x7f) << 0x15;
          if ((char)*(byte *)(lVar16 + 5) < '\0') {
            uVar7 = uVar7 | (uint)*(byte *)(lVar16 + 6) << 0x1c;
            iVar6 = 5;
          }
          else {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 3;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 1;
    }
    pIVar20 = *(Isolate **)(this + 8);
    uVar10 = *(undefined8 *)(pIVar20 + 0x95a0);
    *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + 1;
    lVar16 = *(long *)(this + 0x28);
    lVar17 = *(long *)(pIVar20 + 0x95a8);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar12 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    lVar16 = *(long *)(this + 0x28);
    uVar5 = CONCAT44(uStack_bb,uStack_bf);
    *(long *)(this + 0x28) = lVar16 + -0x11;
    local_90 = *(undefined1 *)(lVar16 + -1);
    dStack_98 = *(double *)(lVar16 + -9);
    local_a0 = *(double *)(lVar16 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_a0,(ulong)this);
    uVar1 = uStack_bf;
    if (local_a0._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    pIVar19 = *(Isolate **)(this + 8);
    uVar18 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)(**(ulong **)(this + 0x10) + 0x8f)) +
                                (long)(int)(uVar7 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar19 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar19 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar19 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar19);
      }
      *(ulong **)(pIVar19 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar18;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar19 + 0x95b8),uVar18);
    }
    uVar7 = *(int *)(*puVar8 + 0xf) >> 1;
    uVar3 = uVar7 - uVar1;
    if (uVar7 < uVar1) {
LAB_01228e28:
      *(undefined4 *)(this + 0x58) = 4;
      uVar12 = 0;
      uVar7 = 0;
      *(undefined4 *)(this + 0x68) = 0xb;
      *(long *)(*(long *)(this + 0x40) + -0x10) = param_5;
    }
    else {
      uVar7 = uVar3;
      if (uVar12 <= uVar3) {
        uVar7 = uVar12;
      }
      WasmTableObject::Fill(*(undefined8 *)(this + 8),puVar8,uVar1,uVar5,uVar7);
      if (uVar3 < uVar12) goto LAB_01228e28;
      uVar12 = 1;
      uVar7 = 1;
      *param_6 = *param_6 + iVar6;
    }
    if (pIVar20 == (Isolate *)0x0) goto LAB_01228560;
    *(undefined8 *)(pIVar20 + 0x95a0) = uVar10;
    *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + -1;
    uVar7 = uVar12;
    if (*(long *)(pIVar20 + 0x95a8) == lVar17) goto LAB_01228560;
    *(long *)(pIVar20 + 0x95a8) = lVar17;
LAB_012295a8:
    HandleScope::DeleteExtensions(pIVar20);
    goto LAB_01228560;
  default:
    uVar18 = (ulong)*(byte *)(*(long *)(param_4 + 0x40) + param_5);
    uVar10 = FUN_0123e76c(uVar18);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Unknown or unimplemented opcode #%d:%s",uVar18,uVar10);
  }
  local_b0 = 0;
  uStack_b7 = 0;
  local_c0 = (undefined1)uVar18;
  uStack_bf = (uint)(uVar18 >> 8);
  uStack_bb = 0;
  StackValue::StackValue
            ((StackValue *)&local_a0,&local_c0,this,
             (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
  pdVar15 = *(double **)(this + 0x28);
LAB_01228548:
  uVar7 = 1;
  *(long *)(this + 0x28) = (long)pdVar15 + 0x11;
  *(undefined1 *)(pdVar15 + 2) = local_90;
  pdVar15[1] = dStack_98;
  *pdVar15 = local_a0;
LAB_01228560:
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 1;
}

