
/* v8::internal::AsmJs::InstantiateAsmWasm(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::AsmWasmData>, v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSArrayBuffer>) */

ulong * v8::internal::AsmJs::InstantiateAsmWasm
                  (Isolate *param_1,ulong *param_2,ulong *param_3,long param_4,undefined8 param_5,
                  long *param_6)

{
  uint *puVar1;
  Isolate *pIVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  Isolate *pIVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  Factory *pFVar19;
  ulong uVar20;
  WasmEngine *pWVar21;
  uint uVar22;
  undefined2 uVar23;
  double dVar24;
  ulong *local_148;
  long local_130;
  Isolate *local_128;
  char *pcStack_120;
  int local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  char *local_f8;
  size_t sStack_f0;
  char *local_d8;
  long lStack_d0;
  undefined8 local_c8;
  int iStack_c0;
  int local_bc;
  undefined4 auStack_b8 [2];
  long local_b0;
  Isolate *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar2 = param_1 + 0x95a0;
  lVar8 = base::TimeTicks::HighResolutionNow();
  uVar18 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xf);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar2;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar9 + 1;
    *puVar9 = uVar18;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
  }
  uVar18 = *param_2 & 0xffffffff00000000;
  uVar20 = uVar18 | *(uint *)(*param_2 + 0xf);
  if (*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x5b) {
    uVar20 = uVar18 | *(uint *)(uVar20 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar2;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar10 + 1;
    *puVar10 = uVar20;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
  }
  pWVar21 = *(WasmEngine **)(param_1 + 0xc770);
  uVar11 = wasm::WasmEngine::FinalizeTranslatedAsmJs(pWVar21,param_1,param_3,puVar10);
  local_c8 = (char *)*param_2;
  uVar6 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_c8);
  uVar18 = *(ulong *)(*puVar9 + 3);
  if (uVar18 == 0) {
LAB_014812e0:
    param_6 = (long *)0x0;
    goto LAB_014812e4;
  }
  if (param_4 == 0) {
    if (FLAG_suppress_asm_messages == '\0') {
      pcVar13 = "Requires standard library";
      uVar11 = 0x1a;
      goto LAB_014822f4;
    }
    goto LAB_0148235c;
  }
  if ((uVar18 & 1) == 0) {
LAB_01480418:
    uVar22 = (uint)uVar18;
    if ((uVar22 >> 1 & 1) != 0) {
      uVar20 = *(ulong *)(param_1 + 0x828);
      pIVar14 = param_1 + 0x828;
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar20 - 1)) ==
          0x40) {
        uVar22 = (*(int *)(uVar20 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) & 0xffe0)
          == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        uVar20 = *(ulong *)(local_b0 + 0xa0);
      }
      else {
        puVar9 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
        uVar20 = *puVar9;
      }
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)) ||
         (!NAN(*(double *)(uVar20 + 3)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffffffd;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 2 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "min";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x614)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffffffb;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 3 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "max";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x612)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffffff7;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 4 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "abs";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if (((((uVar20 & 1) == 0) ||
           (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
          || (puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0)) || ((*puVar1 & 0xfffffffe) != 0x606)) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffffffef;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 5 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "fround";
      iStack_c0 = 6;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x630)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffffffdf;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 6 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "acos";
      iStack_c0 = 4;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x616)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffffffbf;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 7 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "asin";
      iStack_c0 = 4;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if (((((uVar20 & 1) == 0) ||
           (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
          || (puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0)) || ((*puVar1 & 0xfffffffe) != 0x61a)) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffffff7f;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 8 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "atan";
      iStack_c0 = 4;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x61e)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffffeff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 9 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "cos";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x628)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffffdff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 10 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "sin";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if (((((uVar20 & 1) == 0) ||
           (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
          || (puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0)) || ((*puVar1 & 0xfffffffe) != 0x63c)) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffffbff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0xb & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "tan";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x644)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffff7ff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0xc & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "exp";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x62c)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffffefff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0xd & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "log";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if (((((uVar20 & 1) == 0) ||
           (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
          || (puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0)) || ((*puVar1 & 0xfffffffe) != 0x634)) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffffdfff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0xe & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "atan2";
      iStack_c0 = 5;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x620)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffffbfff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0xf & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "pow";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x610)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffff7fff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0x10 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "imul";
      iStack_c0 = 4;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if (((((uVar20 & 1) == 0) ||
           (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
          || (puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0)) || ((*puVar1 & 0xfffffffe) != 0x632)) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffeffff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0x11 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "clz32";
      iStack_c0 = 5;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x626)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffdffff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0x12 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "ceil";
      iStack_c0 = 4;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x608)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffffbffff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0x13 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "floor";
      iStack_c0 = 5;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if (((((uVar20 & 1) == 0) ||
           (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
          || (puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0)) || ((*puVar1 & 0xfffffffe) != 0x60a)) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffff7ffff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0x14 & 1) == 0) {
      uVar22 = (uint)uVar18;
    }
    else {
      local_c8 = "sqrt";
      iStack_c0 = 4;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((((uVar20 & 1) == 0) ||
          (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x439))
         || ((puVar1 = (uint *)((uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + 0xb)) + 3),
             (*puVar1 & 1) != 0 || ((*puVar1 & 0xfffffffe) != 0x642)))) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffefffff;
      uVar22 = (uint)uVar18;
    }
    if ((uVar22 >> 0x15 & 1) != 0) {
      local_c8 = "E";
      iStack_c0 = 1;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 2.718281828459045) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffdfffff;
    }
    if (((uint)uVar18 >> 0x16 & 1) != 0) {
      local_c8 = "LN10";
      iStack_c0 = 4;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 2.302585092994046) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffffbfffff;
    }
    if (((uint)uVar18 >> 0x17 & 1) != 0) {
      local_c8 = "LN2";
      iStack_c0 = 3;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 0.6931471805599453) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffff7fffff;
    }
    if (((uint)uVar18 >> 0x18 & 1) != 0) {
      local_c8 = "LOG2E";
      iStack_c0 = 5;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 1.4426950408889634) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffeffffff;
    }
    if (((uint)uVar18 >> 0x19 & 1) != 0) {
      local_c8 = "LOG10E";
      iStack_c0 = 6;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 0.4342944819032518) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffdffffff;
    }
    if (((uint)uVar18 >> 0x1a & 1) != 0) {
      local_c8 = "PI";
      iStack_c0 = 2;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 3.141592653589793) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffffbffffff;
    }
    if (((uint)uVar18 >> 0x1b & 1) != 0) {
      local_c8 = "SQRT1_2";
      iStack_c0 = 7;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 0.7071067811865476) goto LAB_014822d8;
      uVar18 = uVar18 & 0xfffffffff7ffffff;
    }
    if (((uint)uVar18 >> 0x1c & 1) != 0) {
      local_c8 = "SQRT2";
      iStack_c0 = 5;
      local_bc = 0;
      uVar12 = Factory::InternalizeString<unsigned_char>
                         ((Factory *)param_1,(Vector *)&local_c8,false);
      puVar9 = (ulong *)FUN_01482540(param_1,param_4,uVar12);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) {
        dVar24 = (double)((int)uVar20 >> 1);
      }
      else {
        if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) != 0x42)
        goto LAB_014822d8;
        dVar24 = *(double *)(uVar20 + 3);
      }
      if (dVar24 != 1.4142135623730951) goto LAB_014822d8;
      uVar18 = uVar18 & 0xffffffffefffffff;
    }
    uVar22 = (uint)uVar18;
    if ((uVar22 >> 0x1d & 1) != 0) {
      local_c8 = "Int8Array";
      iStack_c0 = 9;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        local_148 = (ulong *)(local_b0 + 0xa0);
      }
      else {
        local_148 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      }
      uVar20 = *local_148;
      if (((uVar20 & 1) != 0) &&
         (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x439)) {
        uVar18 = uVar18 & 0xffffffffdfffffff;
        uVar20 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar20 = uVar20 | *(uint *)((uVar20 | *(uint *)((uVar20 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 0x12f);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar20;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
        }
        if ((local_148 == puVar9) ||
           (((local_148 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*local_148 == *puVar9)))) {
          bVar4 = true;
          uVar22 = (uint)uVar18;
          goto joined_r0x014817b0;
        }
      }
      goto LAB_014822d8;
    }
    bVar4 = false;
joined_r0x014817b0:
    if ((uVar22 >> 0x1e & 1) != 0) {
      local_c8 = "Uint8Array";
      iStack_c0 = 10;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        local_148 = (ulong *)(local_b0 + 0xa0);
      }
      else {
        local_148 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      }
      uVar20 = *local_148;
      if (((uVar20 & 1) != 0) &&
         (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x439)) {
        uVar18 = uVar18 & 0xffffffffbfffffff;
        uVar20 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar20 = uVar20 | *(uint *)((uVar20 | *(uint *)((uVar20 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 0x347);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar20;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
        }
        if ((local_148 == puVar9) ||
           (((local_148 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*local_148 == *puVar9)))) {
          bVar4 = true;
          iVar7 = (int)uVar18;
          goto joined_r0x01481940;
        }
      }
      goto LAB_014822d8;
    }
    iVar7 = (int)uVar18;
joined_r0x01481940:
    uVar20 = uVar18;
    if (iVar7 < 0) {
      local_c8 = "Int16Array";
      iStack_c0 = 10;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        local_148 = (ulong *)(local_b0 + 0xa0);
      }
      else {
        local_148 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      }
      uVar20 = *local_148;
      if (((uVar20 & 1) != 0) &&
         (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x439)) {
        uVar20 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar20 = uVar20 | *(uint *)((uVar20 | *(uint *)((uVar20 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 0x127);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar20;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
        }
        if ((local_148 == puVar9) ||
           (((local_148 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*local_148 == *puVar9)))) {
          bVar4 = true;
          uVar20 = uVar18 & 0xffffffff7fffffff;
          goto joined_r0x01481ad0;
        }
      }
      goto LAB_014822d8;
    }
joined_r0x01481ad0:
    uVar5 = uVar20;
    if ((uVar18 >> 0x20 & 1) != 0) {
      local_c8 = "Uint16Array";
      iStack_c0 = 0xb;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        local_148 = (ulong *)(local_b0 + 0xa0);
      }
      else {
        local_148 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      }
      uVar18 = *local_148;
      if (((uVar18 & 1) != 0) &&
         (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x439)) {
        uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 0x33f);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar18;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
        }
        if ((local_148 == puVar9) ||
           (((local_148 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*local_148 == *puVar9)))) {
          bVar4 = true;
          uVar5 = uVar20 & 0xfffffffeffffffff;
          goto joined_r0x01481c60;
        }
      }
      goto LAB_014822d8;
    }
joined_r0x01481c60:
    uVar18 = uVar5;
    if ((uVar20 >> 0x21 & 1) != 0) {
      local_c8 = "Int32Array";
      iStack_c0 = 10;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        local_148 = (ulong *)(local_b0 + 0xa0);
      }
      else {
        local_148 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      }
      uVar18 = *local_148;
      if (((uVar18 & 1) != 0) &&
         (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x439)) {
        uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 299);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar18;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
        }
        if ((local_148 == puVar9) ||
           (((local_148 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*local_148 == *puVar9)))) {
          bVar4 = true;
          uVar18 = uVar5 & 0xfffffffdffffffff;
          goto joined_r0x01481df0;
        }
      }
      goto LAB_014822d8;
    }
joined_r0x01481df0:
    uVar20 = uVar18;
    if ((uVar5 >> 0x22 & 1) != 0) {
      local_c8 = "Uint32Array";
      iStack_c0 = 0xb;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        local_148 = (ulong *)(local_b0 + 0xa0);
      }
      else {
        local_148 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      }
      uVar20 = *local_148;
      if (((uVar20 & 1) != 0) &&
         (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x439)) {
        uVar20 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar20 = uVar20 | *(uint *)((uVar20 | *(uint *)((uVar20 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 0x343);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar20;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar20);
        }
        if ((local_148 == puVar9) ||
           (((local_148 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*local_148 == *puVar9)))) {
          bVar4 = true;
          uVar20 = uVar18 & 0xfffffffbffffffff;
          goto joined_r0x01481f80;
        }
      }
      goto LAB_014822d8;
    }
joined_r0x01481f80:
    if ((uVar18 >> 0x23 & 1) != 0) {
      local_c8 = "Float32Array";
      iStack_c0 = 0xc;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        local_148 = (ulong *)(local_b0 + 0xa0);
      }
      else {
        local_148 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      }
      uVar18 = *local_148;
      if (((uVar18 & 1) != 0) &&
         (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x439)) {
        uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 199);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar18;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
        }
        if ((local_148 == puVar9) ||
           (((local_148 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*local_148 == *puVar9)))) {
          bVar4 = true;
          goto joined_r0x01482160;
        }
      }
      goto LAB_014822d8;
    }
joined_r0x01482160:
    if ((uVar20 >> 0x24 & 1) != 0) {
      local_c8 = "Float64Array";
      iStack_c0 = 0xc;
      local_bc = 0;
      pIVar14 = (Isolate *)
                Factory::InternalizeString<unsigned_char>
                          ((Factory *)param_1,(Vector *)&local_c8,false);
      local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
      uVar22 = 2;
      if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) +
                    (ulong)*(uint *)(*(long *)pIVar14 + -1)) == 0x40) {
        uVar22 = (*(int *)(*(long *)pIVar14 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
      local_bc = 0;
      auStack_b8[0] = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar14 - 1))
          & 0xffe0) == 0x20) {
        pIVar14 = (Isolate *)StringTable::LookupString();
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      uStack_80 = 0xffffffffffffffff;
      local_a8 = pIVar14;
      local_98 = param_4;
      local_88 = param_4;
      LookupIterator::Start<false>((LookupIterator *)&local_c8);
      if (local_c8._4_4_ == 4) {
        puVar9 = (ulong *)(local_b0 + 0xa0);
        uVar18 = *puVar9;
      }
      else {
        puVar9 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
        uVar18 = *puVar9;
      }
      if (((uVar18 & 1) != 0) &&
         (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x439)) {
        uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 0xcb);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar15 = *(ulong **)pIVar2;
          if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
            puVar15 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar15 + 1;
          *puVar15 = uVar18;
        }
        else {
          puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
        }
        if ((puVar9 == puVar15) ||
           (((puVar9 != (ulong *)0x0 && (puVar15 != (ulong *)0x0)) && (*puVar9 == *puVar15))))
        goto LAB_0148126c;
      }
      goto LAB_014822d8;
    }
    if (!bVar4) goto LAB_014812e0;
LAB_0148126c:
    if (param_6 == (long *)0x0) {
      if (FLAG_suppress_asm_messages != '\0') goto LAB_0148235c;
      pcVar13 = "Requires heap buffer";
      uVar11 = 0x15;
      goto LAB_014822f4;
    }
    lVar17 = *param_6;
    if ((*(uint *)(lVar17 + 0x1b) >> 4 & 1) == 0) {
      *(uint *)(lVar17 + 0x1b) = *(uint *)(lVar17 + 0x1b) | 8;
      *(uint *)(*param_6 + 0x1b) = *(uint *)(*param_6 + 0x1b) & 0xfffffffd;
      uVar18 = *(ulong *)(*param_6 + 0xb);
      if ((0xfff < uVar18) &&
         (uVar20 = wasm::max_mem_pages(), uVar18 <= (uVar20 & 0xffffffff) * 0x10000)) {
        if (uVar18 >> 0x18 == 0) {
          uVar18 = uVar18 & 0xffffffff;
          uVar22 = CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                            CONCAT12(POPCOUNT((char)(uVar18 >> 0x10)),
                                     CONCAT11(POPCOUNT((char)(uVar18 >> 8)),POPCOUNT((char)uVar18)))
                           );
          uVar23 = NEON_uaddlv((ulong)uVar22,1);
          if (CONCAT22((short)(uVar22 >> 0x10),uVar23) == 1) {
LAB_014812e4:
            local_118 = 0;
            local_110 = 0;
            uStack_108 = 0;
            pcStack_120 = "AsmJs::Instantiate";
            local_100 = 0;
            local_128 = param_1;
            lVar17 = wasm::WasmEngine::SyncInstantiate
                               (pWVar21,param_1,&local_128,uVar11,param_5,param_6);
            if (lVar17 == 0) {
              if (((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) ||
                 ((int)*(ulong *)(param_1 + 0x2bd8) != (int)*(undefined8 *)(param_1 + 0xa8))) {
                *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
              }
              if (local_118 == 0) {
                if (FLAG_suppress_asm_messages == '\0') {
                  sStack_f0 = __strlen_chk("Internal wasm failure",0x16);
                  local_f8 = "Internal wasm failure";
                  pFVar19 = (Factory *)((ulong)*(uint *)((long)puVar10 + 4) << 0x20);
                  MessageLocation::MessageLocation((MessageLocation *)&local_c8,puVar10,uVar6,uVar6)
                  ;
                  uVar11 = Factory::InternalizeUtf8String(pFVar19,(Vector *)&local_f8);
                  plVar16 = (long *)MessageHandler::MakeMessageObject
                                              (pFVar19,0x167,&local_c8,uVar11,0);
                  *(undefined4 *)(*plVar16 + 0x2b) = 0x20;
                  MessageHandler::ReportMessage(pFVar19,&local_c8,plVar16);
                }
              }
              else {
                pcVar13 = operator_new__(100,(nothrow_t *)&std::nothrow);
                if (pcVar13 == (char *)0x0) {
                  plVar16 = (long *)V8::GetCurrentPlatform();
                  (**(code **)(*plVar16 + 0x18))();
                  pcVar13 = operator_new__(100,(nothrow_t *)&std::nothrow);
                  if (pcVar13 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
                  }
                }
                lVar8 = local_100;
                if ((local_110 & 1) == 0) {
                  lVar8 = (long)&local_110 + 1;
                }
                SNPrintF(pcVar13,100,"Internal wasm failure: %s",lVar8);
                if (FLAG_suppress_asm_messages == '\0') {
                  sStack_f0 = strlen(pcVar13);
                  pFVar19 = (Factory *)((ulong)*(uint *)((long)puVar10 + 4) << 0x20);
                  local_f8 = pcVar13;
                  MessageLocation::MessageLocation((MessageLocation *)&local_c8,puVar10,uVar6,uVar6)
                  ;
                  uVar11 = Factory::InternalizeUtf8String(pFVar19,(Vector *)&local_f8);
                  plVar16 = (long *)MessageHandler::MakeMessageObject
                                              (pFVar19,0x167,&local_c8,uVar11,0);
                  *(undefined4 *)(*plVar16 + 0x2b) = 0x20;
                  MessageHandler::ReportMessage(pFVar19,&local_c8,plVar16);
                }
                operator_delete__(pcVar13);
              }
              wasm::ErrorThrower::Reset((ErrorThrower *)&local_128);
              puVar9 = (ulong *)0x0;
            }
            else {
              local_130 = base::TimeTicks::HighResolutionNow();
              local_130 = local_130 - lVar8;
              base::TimeDelta::InMillisecondsF((TimeDelta *)&local_130);
              if ((FLAG_suppress_asm_messages == '\0') && (FLAG_trace_asm_time != '\0')) {
                local_c8 = (char *)auStack_b8;
                iStack_c0 = 0x32;
                local_bc = 0;
                iVar7 = SNPrintF(local_c8,0x32,"success, %0.3f ms");
                if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.","-1 != length");
                }
                lStack_d0 = (long)iVar7;
                local_bc = iVar7 >> 0x1f;
                local_d8 = local_c8;
                pFVar19 = (Factory *)((ulong)*(uint *)((long)puVar10 + 4) << 0x20);
                iStack_c0 = iVar7;
                MessageLocation::MessageLocation((MessageLocation *)&local_f8,puVar10,uVar6,uVar6);
                uVar11 = Factory::InternalizeUtf8String(pFVar19,(Vector *)&local_d8);
                plVar16 = (long *)MessageHandler::MakeMessageObject
                                            (pFVar19,0x166,&local_f8,uVar11,0);
                *(undefined4 *)(*plVar16 + 0x2b) = 8;
                MessageHandler::ReportMessage(pFVar19,&local_f8,plVar16);
              }
              uVar11 = __strlen_chk("__single_function__",0x14);
              local_c8 = "__single_function__";
              iStack_c0 = (int)uVar11;
              local_bc = (int)((ulong)uVar11 >> 0x20);
              uVar11 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_c8);
              puVar9 = (ulong *)Object::GetProperty(param_1,lVar17,uVar11);
              if ((puVar9 == (ulong *)0x0) ||
                 (((*puVar9 & 1) != 0 && ((int)*puVar9 == *(int *)(param_1 + 0xa0))))) {
                uVar11 = __strlen_chk("exports",8);
                local_c8 = "exports";
                iStack_c0 = (int)uVar11;
                local_bc = (int)((ulong)uVar11 >> 0x20);
                uVar11 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_c8);
                puVar9 = (ulong *)Object::GetProperty(param_1,lVar17,uVar11);
              }
            }
            wasm::ErrorThrower::~ErrorThrower((ErrorThrower *)&local_128);
            goto LAB_01482360;
          }
        }
        else if ((uVar18 & 0xffffff) == 0) goto LAB_014812e4;
      }
      if (FLAG_suppress_asm_messages == '\0') {
        pcVar13 = "Invalid heap size";
        uVar11 = 0x12;
        goto LAB_014822f4;
      }
    }
    else if (FLAG_suppress_asm_messages == '\0') {
      pcVar13 = "Invalid heap type: SharedArrayBuffer";
      uVar11 = 0x25;
      goto LAB_014822f4;
    }
  }
  else {
    uVar20 = *(ulong *)(param_1 + 0x760);
    local_a8 = param_1 + 0x760;
    local_b0 = (ulong)*(uint *)(param_4 + 4) << 0x20;
    uVar22 = 2;
    if (*(short *)(((ulong)*(uint *)(param_4 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar20 - 1)) ==
        0x40) {
      uVar22 = (*(int *)(uVar20 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar22);
    local_bc = 0;
    auStack_b8[0] = 0xc0;
    if ((*(ushort *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) & 0xffe0) ==
        0x20) {
      local_a8 = (Isolate *)StringTable::LookupString();
    }
    uStack_a0 = 0;
    uStack_90 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_98 = param_4;
    local_88 = param_4;
    LookupIterator::Start<false>((LookupIterator *)&local_c8);
    if (local_c8._4_4_ == 4) {
      uVar20 = *(ulong *)(local_b0 + 0xa0);
      if ((uVar20 & 1) != 0) goto LAB_014803a8;
LAB_014803f8:
      dVar24 = (double)((int)uVar20 >> 1);
LAB_01480400:
      if (ABS(dVar24) == INFINITY) {
        uVar18 = uVar18 & 0xfffffffffffffffe;
        goto LAB_01480418;
      }
    }
    else {
      puVar9 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      uVar20 = *puVar9;
      if ((uVar20 & 1) == 0) goto LAB_014803f8;
LAB_014803a8:
      if (*(short *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x42) {
        dVar24 = *(double *)(uVar20 + 3);
        goto LAB_01480400;
      }
    }
LAB_014822d8:
    if (FLAG_suppress_asm_messages == '\0') {
      pcVar13 = "Unexpected stdlib member";
      uVar11 = 0x19;
LAB_014822f4:
      pcStack_120 = (char *)__strlen_chk(pcVar13,uVar11);
      pFVar19 = (Factory *)((ulong)*(uint *)((long)puVar10 + 4) << 0x20);
      local_128 = (Isolate *)pcVar13;
      MessageLocation::MessageLocation((MessageLocation *)&local_c8,puVar10,uVar6,uVar6);
      uVar11 = Factory::InternalizeUtf8String(pFVar19,(Vector *)&local_128);
      plVar16 = (long *)MessageHandler::MakeMessageObject(pFVar19,0x167,&local_c8,uVar11,0);
      *(undefined4 *)(*plVar16 + 0x2b) = 0x20;
      MessageHandler::ReportMessage(pFVar19,&local_c8,plVar16);
    }
  }
LAB_0148235c:
  puVar9 = (ulong *)0x0;
LAB_01482360:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

