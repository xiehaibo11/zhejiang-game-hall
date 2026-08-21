
void FUN_015e4b34(AsyncStreamingProcessor *param_1,uint param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,FunctionBody *param_6)

{
  undefined8 *puVar1;
  uint *puVar2;
  TimedHistogram *pTVar3;
  Isolate *pIVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  bool bVar29;
  undefined2 uVar30;
  uint uVar31;
  void *__dest;
  AsyncStreamingProcessor *pAVar32;
  long *plVar33;
  undefined8 uVar34;
  ulong uVar35;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar36;
  undefined1 uVar37;
  uint uVar38;
  ulong uVar39;
  code *pcVar40;
  uint uVar41;
  long lVar42;
  undefined1 *puVar43;
  long lVar44;
  undefined8 uVar45;
  ulong uVar46;
  undefined1 *puVar47;
  ulong uVar48;
  AsyncStreamingProcessor *pAVar49;
  NativeModule *this;
  AsyncStreamingProcessor *this_00;
  ulong uVar50;
  WasmFeatures *pWVar51;
  ulong uVar52;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_01;
  void *pvVar53;
  uint uVar54;
  ulong uVar55;
  size_t __n;
  undefined1 *puVar56;
  undefined1 auVar57 [16];
  undefined1 auStack_1b0 [24];
  byte abStack_198 [268];
  uint local_8c;
  Mutex *local_88;
  uchar local_7c [4];
  uint local_78 [2];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  pbVar12 = abStack_198 + 0x108;
  puVar56 = &stack0xffffffffffffff90;
  local_88 = (Mutex *)(param_1 + 0x158);
  this_00 = (AsyncStreamingProcessor *)(ulong)param_3;
  uVar5 = *(uint *)(*(long *)param_1 + 0xc0);
  pAVar49 = (AsyncStreamingProcessor *)(ulong)uVar5;
  uVar50 = (ulong)param_2;
  uVar52 = *(ulong *)(*(long *)param_1 + 200);
  local_78[0] = uVar5;
  v8::base::Mutex::Lock(local_88);
  pvVar53 = *(void **)(param_1 + 0x1a0);
  uVar55 = (ulong)*(uint *)(uVar52 + 0x44);
  this_01 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(param_1 + 0x1a0);
  if ((ulong)(*(long *)(param_1 + 0x1b0) - (long)pvVar53) < uVar55) {
    __n = *(long *)(param_1 + 0x1a8) - (long)pvVar53;
    local_8c = param_3;
    __dest = operator_new(uVar55);
    if (0 < (long)__n) {
      memcpy(__dest,pvVar53,__n);
      pvVar53 = *(void **)this_01;
    }
    *(void **)(param_1 + 0x1a0) = __dest;
    *(size_t *)(param_1 + 0x1a8) = (long)__dest + __n;
    this_00 = (AsyncStreamingProcessor *)(ulong)local_8c;
    *(ulong *)(param_1 + 0x1b0) = (long)__dest + uVar55;
    if (pvVar53 != (void *)0x0) {
      operator_delete(pvVar53);
    }
  }
  uVar6 = *(uint *)(uVar52 + 0x3c);
  uVar54 = *(uint *)(uVar52 + 0x44);
  if ((int)uVar6 < (int)(uVar54 + uVar6)) {
    do {
      uVar55 = (ulong)uVar6;
      pvVar36 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)local_78;
      uVar48 = uVar55;
      auVar57 = FUN_015e17e0(uVar52,param_1[0x18]);
      auVar11 = auVar57._0_12_;
      uVar35 = auVar57._8_8_;
      pAVar32 = auVar57._0_8_;
      uVar37 = (undefined1)param_5;
      if ((param_2 & 1) == 0) {
        uVar31 = auVar57._0_4_;
        if (((uVar5 >> 4 & 1) != 0) && (lVar42 = *(long *)(uVar52 + 0x130), lVar42 != 0)) {
          uVar46 = (ulong)(uVar6 - *(int *)(uVar52 + 0x3c));
          uVar39 = (*(long *)(uVar52 + 0x138) - lVar42) * -0x5555555555555555;
          bVar29 = uVar39 - uVar46 == 0;
          if (uVar46 <= uVar39 && !bVar29) {
            puVar43 = (undefined1 *)(ulong)*(byte *)(lVar42 + uVar46 * 3);
            pcVar40 = (code *)0x0;
            uVar38 = 0;
            do {
              puVar47 = (undefined1 *)((ulong)(byte)puVar43[0x1a54370] * 4 + 0x15e4c5c);
              puVar43 = (undefined1 *)0x0;
              uVar41 = 0;
switchD_015e4cdc_switchD:
              pbVar13 = abStack_198 + 0x108;
              pbVar14 = abStack_198 + 0x108;
              pbVar15 = abStack_198 + 0x108;
              pbVar16 = abStack_198 + 0x108;
              pbVar17 = abStack_198 + 0x108;
              pbVar18 = abStack_198 + 0x108;
              pbVar19 = abStack_198 + 0x108;
              pbVar20 = abStack_198 + 0x108;
              pbVar21 = abStack_198 + 0x108;
              pbVar22 = abStack_198 + 0x108;
              pbVar23 = abStack_198 + 0x108;
              pbVar24 = abStack_198 + 0x108;
              pbVar25 = abStack_198 + 0x108;
              pbVar26 = abStack_198 + 0x108;
              pbVar27 = abStack_198 + 0x108;
              pbVar28 = abStack_198 + 0x108;
              switch(puVar47) {
              case (undefined1 *)0x15e4c5c:
                goto switchD_015e4cdc_caseD_15e4c5c;
              case (undefined1 *)0x15e4c70:
                goto switchD_015e4cdc_caseD_15e4c70;
              case (undefined1 *)0x15e4c80:
                goto switchD_015e4cdc_caseD_15e4c80;
              case (undefined1 *)0x15e4c8c:
                goto switchD_015e4cdc_caseD_15e4c8c;
              case (undefined1 *)0x15e4cdc:
                goto switchD_015e4cdc_switchD;
              case (undefined1 *)0x15e4ce0:
                puVar47 = (undefined1 *)(ulong)*(uint *)(param_1 + 0x19c);
              case (undefined1 *)0x15e4ce8:
                puVar43 = (undefined1 *)(ulong)(uVar31 >> 8 & 0xff);
                puVar47 = (undefined1 *)(ulong)((int)puVar47 + 1);
switchD_015e4cdc_caseD_15e4cf0:
                uVar38 = 0;
                uVar41 = (uint)puVar43;
                *(int *)(param_1 + 0x19c) = (int)puVar47;
                goto switchD_015e4cdc_caseD_15e4c70;
              case (undefined1 *)0x15e4cf0:
                goto switchD_015e4cdc_caseD_15e4cf0;
              case (undefined1 *)0x15e4cfc:
                goto switchD_015e4cdc_caseD_15e4cfc;
              case (undefined1 *)0x15e4d00:
                goto switchD_015e4cdc_caseD_15e4d00;
              case (undefined1 *)0x15e4d10:
                goto switchD_015e4cdc_caseD_15e4d10;
              case (undefined1 *)0x15e4d14:
                goto switchD_015e4cdc_caseD_15e4d14;
              case (undefined1 *)0x15e4d18:
                goto switchD_015e4cdc_caseD_15e4d18;
              case (undefined1 *)0x15e4d1c:
                goto switchD_015e4cdc_caseD_15e4d1c;
              case (undefined1 *)0x15e4d3c:
                goto switchD_015e4cdc_caseD_15e4d3c;
              case (undefined1 *)0x15e4d44:
                goto switchD_015e4cdc_caseD_15e4d44;
              case (undefined1 *)0x15e4d60:
                goto switchD_015e4cdc_caseD_15e4d60;
              case (undefined1 *)0x15e4d68:
                goto switchD_015e4cdc_caseD_15e4d68;
              case (undefined1 *)0x15e4d6c:
                goto switchD_015e4cdc_caseD_15e4d6c;
              case (undefined1 *)0x15e4d74:
                goto switchD_015e4cdc_caseD_15e4d74;
              case (undefined1 *)0x15e4d78:
                goto switchD_015e4cdc_caseD_15e4d78;
              case (undefined1 *)0x15e4d84:
                goto switchD_015e4cdc_caseD_15e4d84;
              case (undefined1 *)0x15e4d8c:
                goto switchD_015e4cdc_caseD_15e4d8c;
              case (undefined1 *)0x15e4d98:
                goto switchD_015e4cdc_caseD_15e4d98;
              case (undefined1 *)0x15e4da4:
                goto switchD_015e4cdc_caseD_15e4da4;
              case (undefined1 *)0x15e4da8:
                goto switchD_015e4cdc_caseD_15e4da8;
              case (undefined1 *)0x15e4dd8:
                goto switchD_015e4cdc_caseD_15e4dd8;
              case (undefined1 *)0x15e4de0:
                goto switchD_015e4cdc_caseD_15e4de0;
              case (undefined1 *)0x15e4de4:
                goto switchD_015e4cdc_caseD_15e4de4;
              case (undefined1 *)0x15e4de8:
                goto switchD_015e4cdc_caseD_15e4de8;
              case (undefined1 *)0x15e4dec:
                goto switchD_015e4cdc_caseD_15e4dec;
              case (undefined1 *)0x15e4df0:
                goto switchD_015e4cdc_caseD_15e4df0;
              case (undefined1 *)0x15e4df4:
                pbVar12 = auStack_1b0;
              case (undefined1 *)0x15e4df8:
                *(undefined1 **)(pbVar12 + 0xc0) = puVar56;
                *(undefined8 *)(pbVar12 + 200) = 0x15e4c48;
                pbVar13 = pbVar12;
switchD_015e4cdc_caseD_15e4dfc:
                *(byte **)(pbVar13 + 0xd0) = &switchD_015e4cdc::switchdataD_01a54370;
                *(undefined8 *)(pbVar13 + 0xd8) = 0xaaaaaaaaaaaaaaab;
                pbVar14 = pbVar13;
switchD_015e4cdc_caseD_15e4e00:
                *(ulong *)(pbVar14 + 0xe0) = (ulong)uVar54;
                *(ulong *)(pbVar14 + 0xe8) = uVar55;
                *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(pbVar14 + 0xf0) =
                     this_01;
                *(ulong *)(pbVar14 + 0xf8) = uVar52;
                *(ulong *)(pbVar14 + 0x100) = uVar50;
                *(AsyncStreamingProcessor **)(pbVar14 + 0x108) = this_00;
                pbVar15 = pbVar14;
switchD_015e4cdc_caseD_15e4e0c:
                *(AsyncStreamingProcessor **)(pbVar15 + 0x110) = pAVar49;
                *(AsyncStreamingProcessor **)(pbVar15 + 0x118) = param_1;
                pbVar16 = pbVar15;
switchD_015e4cdc_caseD_15e4e10:
                puVar56 = pbVar16 + 0xc0;
                pbVar17 = pbVar16;
switchD_015e4cdc_caseD_15e4e14:
                uVar55 = tpidr_el0;
                pbVar18 = pbVar17;
switchD_015e4cdc_caseD_15e4e18:
                pcVar40 = *(code **)(uVar55 + 0x28);
                pbVar19 = pbVar18;
switchD_015e4cdc_caseD_15e4e1c:
                this_00 = pAVar32 + 8;
                pbVar20 = pbVar19;
                uVar52 = uVar35;
switchD_015e4cdc_caseD_15e4e24:
                pbVar21 = pbVar20;
                param_1 = pAVar32;
switchD_015e4cdc_caseD_15e4e28:
                *(code **)(puVar56 + -0x10) = pcVar40;
                pbVar22 = pbVar21;
switchD_015e4cdc_caseD_15e4e2c:
                uVar35 = (ulong)*(uint *)(pAVar32 + 0x30);
                pbVar23 = pbVar22;
switchD_015e4cdc_caseD_15e4e30:
                auVar10._8_8_ = uVar35;
                auVar10._0_8_ = this_00;
                auVar11 = auVar10._0_12_;
                pbVar24 = pbVar23;
switchD_015e4cdc_caseD_15e4e34:
                uVar37 = 0;
                pbVar25 = pbVar24;
switchD_015e4cdc_caseD_15e4e38:
                pbVar26 = pbVar25;
                this_01 = pvVar36;
switchD_015e4cdc_caseD_15e4e3c:
                v8::internal::wasm::ModuleDecoder::DecodeFunctionBody
                          (auVar11._0_8_,auVar11._8_4_,(uint)pvVar36,(uint)uVar48,(bool)uVar37);
                pbVar27 = pbVar26;
switchD_015e4cdc_caseD_15e4e40:
                pcVar40 = *(code **)(param_1 + 0x18);
                pbVar28 = pbVar27;
switchD_015e4cdc_caseD_15e4e44:
                iVar7 = *(int *)(param_1 + 0x30);
                this = *(NativeModule **)(pcVar40 + 0x58);
                uVar6 = *(uint *)(pcVar40 + 0x10);
                pWVar51 = *(WasmFeatures **)(this + 200);
                plVar33 = (long *)v8::internal::wasm::ModuleDecoder::shared_module
                                            ((ModuleDecoder *)this_00);
                uVar54 = 0;
                uVar5 = *(int *)(*plVar33 + 0x3c) + iVar7;
                if (*(char *)(*(long *)(param_1 + 0x18) + 0x14) == '\0') {
                  if ((uVar6 >> 4 & 1) == 0) {
                    uVar54 = 1;
                  }
                  else {
                    lVar42 = *(long *)(pWVar51 + 0x130);
                    uVar54 = 1;
                    if ((lVar42 != 0) &&
                       (uVar50 = (ulong)(uVar5 - *(int *)(pWVar51 + 0x3c)),
                       uVar48 = (*(long *)(pWVar51 + 0x138) - lVar42) * -0x5555555555555555,
                       uVar50 <= uVar48 && uVar48 - uVar50 != 0)) {
                      uVar54 = 0x2010001 >> (ulong)((*(byte *)(lVar42 + uVar50 * 3) & 3) << 3);
                    }
                  }
                }
                if (v8::internal::FLAG_wasm_lazy_validation == '\0' && (uVar54 & 1) == 0) {
                  lVar44 = *(long *)(this + 0x178);
                  lVar42 = *(long *)(*(long *)(this + 0x100) + 0x20);
                  *(uint *)(puVar56 + -0x28) = uVar6;
                  puVar1 = (undefined8 *)(*(long *)(pWVar51 + 0x88) + (long)(int)uVar5 * 0x20);
                  uVar34 = *puVar1;
                  uVar8 = *(undefined4 *)(puVar1 + 2);
                  *(ulong *)(puVar56 + -0x38) = uVar52;
                  *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(puVar56 + -0x30)
                       = this_01 + uVar52;
                  *(undefined8 *)(puVar56 + -0x20) = 0;
                  *(undefined8 *)(puVar56 + -0x19) = 0;
                  *(undefined8 *)(puVar56 + -0x48) = uVar34;
                  *(undefined4 *)(puVar56 + -0x40) = uVar8;
                  pTVar3 = (TimedHistogram *)(lVar42 + 0x1120);
                  if (pWVar51[0x178] != (WasmFeatures)0x0) {
                    pTVar3 = (TimedHistogram *)(lVar42 + 0x10f0);
                  }
                  *(undefined8 *)(pbVar28 + 0x70) = 0;
                  *(undefined8 *)(pbVar28 + 0x60) = 0;
                  *(TimedHistogram **)(pbVar28 + 0x68) = pTVar3;
                  v8::internal::TimedHistogram::Start
                            (pTVar3,(ElapsedTimer *)(pbVar28 + 0x60),(Isolate *)0x0);
                  *(undefined4 *)(pbVar28 + 0x58) = 0;
                  v8::internal::wasm::VerifyWasmCode
                            ((wasm *)(lVar44 + 0x58),(AccountingAllocator *)(puVar56 + -0x28),
                             pWVar51,(WasmModule *)(pbVar28 + 0x58),
                             (WasmFeatures *)(puVar56 + -0x48),param_6);
                  uVar34 = *(undefined8 *)(pbVar28 + 0x48);
                  pvVar53 = *(void **)(pbVar28 + 0x50);
                  pTVar3 = *(TimedHistogram **)(pbVar28 + 0x68);
                  pIVar4 = *(Isolate **)(pbVar28 + 0x70);
                  uVar8 = *(undefined4 *)(pbVar28 + 0x38);
                  bVar9 = pbVar28[0x40];
                  *(undefined8 *)(puVar56 + -0x20) = *(undefined8 *)(pbVar28 + 0x41);
                  *(undefined8 *)(puVar56 + -0x19) = uVar34;
                  v8::internal::TimedHistogram::Stop(pTVar3,(ElapsedTimer *)(pbVar28 + 0x60),pIVar4)
                  ;
                  uVar34 = *(undefined8 *)(puVar56 + -0x19);
                  uVar45 = *(undefined8 *)(puVar56 + -0x20);
                  *(undefined8 *)(pbVar28 + 8) = 0;
                  *(undefined8 *)(pbVar28 + 0x20) = uVar34;
                  *(void **)(pbVar28 + 0x28) = pvVar53;
                  *(undefined8 *)(pbVar28 + 0x19) = uVar45;
                  *(undefined4 *)(pbVar28 + 0x10) = uVar8;
                  pbVar28[0x18] = bVar9;
                  uVar52 = (ulong)(bVar9 >> 1);
                  if ((bVar9 & 1) != 0) {
                    uVar52 = *(ulong *)(pbVar28 + 0x20);
                  }
                  if (uVar52 != 0) {
                    v8::internal::wasm::AsyncStreamingProcessor::FinishAsyncCompileJobWithError
                              (param_1,(WasmError *)(pbVar28 + 0x10));
                    if ((pbVar28[0x18] & 1) != 0) {
                      operator_delete(*(void **)(pbVar28 + 0x28));
                    }
                    uVar34 = 0;
                    goto LAB_015e50b0;
                  }
                  if ((bVar9 & 1) == 0) goto LAB_015e4ee4;
                  operator_delete(pvVar53);
                  if ((uVar54 & 0xff) != 0) goto LAB_015e4eec;
LAB_015e5094:
                  v8::internal::wasm::NativeModule::UseLazyStub(this,uVar5);
                }
                else {
LAB_015e4ee4:
                  if ((uVar54 & 0xff) == 0) goto LAB_015e5094;
LAB_015e4eec:
                  plVar33 = *(long **)(param_1 + 0x28);
                  if ((uVar54 & 0xff) == 2) {
                    *(uint *)(pbVar28 + 0x30) = uVar5;
                    lVar42 = *plVar33;
                    uVar30 = FUN_015e17e0(*(undefined8 *)(lVar42 + 200),
                                          *(undefined1 *)(*(long *)(lVar42 + 0x100) + 0x18),
                                          lVar42 + 0xc0,uVar5);
                    *(undefined2 *)(pbVar28 + 8) = uVar30;
                    puVar2 = (uint *)plVar33[6];
                    if (puVar2 < (uint *)plVar33[7]) {
                      *puVar2 = uVar5;
                      *(char *)(puVar2 + 1) = (char)((ushort)uVar30 >> 8);
                      plVar33[6] = plVar33[6] + 8;
                    }
                    else {
                      std::__ndk1::
                      vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                      ::__emplace_back_slow_path<int&,v8::internal::wasm::ExecutionTier&>
                                ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                                  *)(plVar33 + 5),(int *)(pbVar28 + 0x30),
                                 (ExecutionTier *)((ulong)(pbVar28 + 8) | 1));
                    }
                    goto LAB_015e5094;
                  }
                  FUN_015e50e4(plVar33,uVar5);
                }
                uVar34 = 1;
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_015e50b0:
                if (*(long *)(uVar55 + 0x28) != *(long *)(puVar56 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail(uVar34);
                }
                return;
              case (undefined1 *)0x15e4dfc:
                goto switchD_015e4cdc_caseD_15e4dfc;
              case (undefined1 *)0x15e4e00:
                goto switchD_015e4cdc_caseD_15e4e00;
              case (undefined1 *)0x15e4e0c:
                goto switchD_015e4cdc_caseD_15e4e0c;
              case (undefined1 *)0x15e4e10:
                goto switchD_015e4cdc_caseD_15e4e10;
              case (undefined1 *)0x15e4e14:
                goto switchD_015e4cdc_caseD_15e4e14;
              case (undefined1 *)0x15e4e18:
                goto switchD_015e4cdc_caseD_15e4e18;
              case (undefined1 *)0x15e4e1c:
                goto switchD_015e4cdc_caseD_15e4e1c;
              case (undefined1 *)0x15e4e24:
                goto switchD_015e4cdc_caseD_15e4e24;
              case (undefined1 *)0x15e4e28:
                goto switchD_015e4cdc_caseD_15e4e28;
              case (undefined1 *)0x15e4e2c:
                goto switchD_015e4cdc_caseD_15e4e2c;
              case (undefined1 *)0x15e4e30:
                goto switchD_015e4cdc_caseD_15e4e30;
              case (undefined1 *)0x15e4e34:
                goto switchD_015e4cdc_caseD_15e4e34;
              case (undefined1 *)0x15e4e38:
                goto switchD_015e4cdc_caseD_15e4e38;
              case (undefined1 *)0x15e4e3c:
                goto switchD_015e4cdc_caseD_15e4e3c;
              case (undefined1 *)0x15e4e40:
                goto switchD_015e4cdc_caseD_15e4e40;
              case (undefined1 *)0x15e4e44:
                goto switchD_015e4cdc_caseD_15e4e44;
              }
            } while( true );
          }
        }
switchD_015e4cdc_caseD_15e4c5c:
        uVar41 = uVar31 >> 8 & 0xff;
        *(long *)(param_1 + 0x198) =
             CONCAT44((int)((ulong)*(long *)(param_1 + 0x198) >> 0x20) + 1,
                      (int)*(long *)(param_1 + 0x198) + 1);
        uVar38 = uVar31;
      }
      else {
        uVar41 = 0;
        uVar38 = 0;
      }
switchD_015e4cdc_caseD_15e4c70:
      uVar38 = uVar38 & 0xfffffff3 | uVar41 << 2;
      local_7c[0] = (uchar)uVar38;
      puVar43 = *(undefined1 **)(param_1 + 0x1a8);
      puVar47 = *(undefined1 **)(param_1 + 0x1b0);
switchD_015e4cdc_caseD_15e4c80:
      if (puVar43 == puVar47) {
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
        __push_back_slow_path<unsigned_char_const&>(this_01,local_7c);
      }
      else {
        *puVar43 = (char)uVar38;
switchD_015e4cdc_caseD_15e4c8c:
        *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
      }
      uVar54 = uVar54 - 1;
      uVar6 = uVar6 + 1;
    } while (uVar54 != 0);
  }
  uVar38 = *(uint *)(param_1 + 0x198);
switchD_015e4cdc_caseD_15e4cfc:
  uVar38 = uVar38 + (int)this_00;
  bVar29 = uVar38 == 0;
switchD_015e4cdc_caseD_15e4d00:
  *(uint *)(param_1 + 0x198) = uVar38;
  if (bVar29) {
    pAVar49 = *(AsyncStreamingProcessor **)(param_1 + 0x180);
    this_00 = *(AsyncStreamingProcessor **)(param_1 + 0x188);
    bVar29 = pAVar49 == this_00;
switchD_015e4cdc_caseD_15e4d10:
    if (!bVar29) {
switchD_015e4cdc_caseD_15e4d14:
      do {
        local_64[0] = 0;
switchD_015e4cdc_caseD_15e4d18:
        pAVar32 = *(AsyncStreamingProcessor **)(pAVar49 + 0x20);
switchD_015e4cdc_caseD_15e4d1c:
        if (pAVar32 == (AsyncStreamingProcessor *)0x0) goto switchD_015e4cdc_caseD_15e4df0;
        (**(code **)(*(long *)pAVar32 + 0x30))(pAVar32,local_64);
        pAVar49 = pAVar49 + 0x30;
      } while (this_00 != pAVar49);
    }
switchD_015e4cdc_caseD_15e4d3c:
    if (*(int *)(param_1 + 0x19c) == 0) {
switchD_015e4cdc_caseD_15e4d44:
      pAVar49 = *(AsyncStreamingProcessor **)(param_1 + 0x180);
      this_00 = *(AsyncStreamingProcessor **)(param_1 + 0x188);
      if (pAVar49 != this_00) {
        uVar50 = 1;
        do {
          local_68[0] = (undefined1)uVar50;
          pAVar32 = *(AsyncStreamingProcessor **)(pAVar49 + 0x20);
          if (pAVar32 == (AsyncStreamingProcessor *)0x0) {
switchD_015e4cdc_caseD_15e4df0:
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
switchD_015e4cdc_caseD_15e4d60:
          pcVar40 = *(code **)pAVar32;
          auVar57._8_8_ = local_68;
          auVar57._0_8_ = pAVar32;
switchD_015e4cdc_caseD_15e4d68:
          pcVar40 = *(code **)(pcVar40 + 0x30);
switchD_015e4cdc_caseD_15e4d6c:
          (*pcVar40)(auVar57._0_8_,auVar57._8_8_);
          pAVar49 = pAVar49 + 0x30;
switchD_015e4cdc_caseD_15e4d74:
          bVar29 = this_00 == pAVar49;
switchD_015e4cdc_caseD_15e4d78:
        } while (!bVar29);
        pAVar49 = *(AsyncStreamingProcessor **)(param_1 + 0x180);
        this_00 = *(AsyncStreamingProcessor **)(param_1 + 0x188);
        bVar29 = this_00 == pAVar49;
switchD_015e4cdc_caseD_15e4d84:
        if (!bVar29) {
          do {
            pAVar32 = *(AsyncStreamingProcessor **)(this_00 + -0x10);
switchD_015e4cdc_caseD_15e4da4:
            this_00 = this_00 + -0x30;
switchD_015e4cdc_caseD_15e4da8:
            if (this_00 == pAVar32) {
switchD_015e4cdc_caseD_15e4d8c:
              pcVar40 = *(code **)(*(long *)pAVar32 + 0x20);
LAB_015e4d94:
              (*pcVar40)();
            }
            else if (pAVar32 != (AsyncStreamingProcessor *)0x0) {
              pcVar40 = *(code **)(*(long *)pAVar32 + 0x28);
              goto LAB_015e4d94;
            }
switchD_015e4cdc_caseD_15e4d98:
          } while (pAVar49 != this_00);
        }
      }
      *(AsyncStreamingProcessor **)(param_1 + 0x188) = pAVar49;
    }
  }
  v8::base::Mutex::Unlock(local_88);
switchD_015e4cdc_caseD_15e4dd8:
switchD_015e4cdc_caseD_15e4de0:
switchD_015e4cdc_caseD_15e4de4:
switchD_015e4cdc_caseD_15e4de8:
switchD_015e4cdc_caseD_15e4dec:
  return;
}

