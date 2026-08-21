
void FUN_017c3ef8(Decoder *param_1)

{
  Register *this;
  Decoder *pDVar1;
  Decoder *pDVar2;
  vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
  *this_00;
  Decoder *pDVar3;
  Decoder *pDVar4;
  Decoder *pDVar5;
  Decoder *pDVar6;
  SourcePositionTableBuilder *pSVar7;
  WasmFeatures *pWVar8;
  Decoder *pDVar9;
  CacheState *this_01;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *pSVar10;
  Decoder *pDVar11;
  uchar *puVar12;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *pSVar13;
  byte bVar14;
  Decoder DVar15;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar16;
  undefined1 uVar17;
  byte bVar18;
  long lVar19;
  undefined4 uVar20;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar21;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar22;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar23;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar24;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar25;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar26;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar27;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar28;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar29;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar30;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar31;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar32;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar33;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar34;
  bool bVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  long lVar39;
  undefined1 *puVar40;
  Label *pLVar41;
  undefined1 *puVar42;
  undefined2 *puVar43;
  char *pcVar44;
  char *pcVar45;
  undefined8 *puVar46;
  void *pvVar47;
  CallDescriptor *pCVar48;
  uint *puVar49;
  uint uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  char *pcVar53;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> SVar54;
  undefined1 uVar55;
  Zone *this_02;
  long lVar56;
  Decoder *pDVar57;
  byte *pbVar58;
  undefined8 *puVar59;
  uint *puVar60;
  ulong uVar61;
  ulong uVar62;
  undefined8 *puVar63;
  int iVar64;
  long *plVar65;
  long lVar66;
  uint *puVar67;
  ulong *puVar68;
  byte *pbVar69;
  uint uVar70;
  uint uVar71;
  long *plVar72;
  byte bVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  ulong uVar76;
  undefined8 uVar77;
  ulong uVar78;
  byte *pbVar79;
  byte *pbVar80;
  undefined8 *puVar81;
  byte *pbVar82;
  char cVar83;
  int iVar84;
  undefined8 *puVar85;
  Decoder *pDVar86;
  uint *puVar87;
  Decoder *pDVar88;
  ushort uVar89;
  Decoder *pDVar90;
  size_t __n;
  Decoder *pDVar91;
  uint uVar92;
  uint uVar93;
  ulong uVar94;
  ulong uVar95;
  byte *pbVar96;
  byte *pbVar97;
  CacheState *pCVar98;
  Signature *pSVar99;
  uint uVar100;
  Decoder *pDVar101;
  Decoder *pDVar102;
  char *pcVar103;
  undefined1 auVar104 [16];
  byte *pbStack_318;
  Decoder *local_230;
  ulong uStack_1f8;
  undefined4 uStack_1f0;
  Decoder *pDStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  Signature *pSStack_1d0;
  uint auStack_1c8 [2];
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  Decoder *pDStack_1a8;
  undefined4 uStack_1a0;
  undefined8 local_190;
  undefined8 local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  ulong uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  Decoder *pDStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> local_148 [16];
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  Decoder *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_b0;
  Decoder *pDStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long local_90;
  
  lVar19 = tpidr_el0;
  local_90 = *(long *)(lVar19 + 0x28);
  lVar39 = FUN_017d0a08(param_1,2);
  *(undefined4 *)(lVar39 + 0x18) = 0;
  uVar61 = **(ulong **)(param_1 + 0x60);
  iVar37 = (int)uVar61;
  *(int *)(lVar39 + 0x38) = iVar37;
  if (iVar37 != 0) {
    if (iVar37 == 1) {
      uVar55 = **(undefined1 **)(*(long *)(param_1 + 0x60) + 0x10);
      *(undefined8 *)(lVar39 + 0x40) = *(undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(lVar39 + 0x48) = uVar55;
    }
    else {
      this_02 = *(Zone **)(param_1 + 0x70);
      uVar61 = uVar61 & 0xffffffff;
      uVar76 = uVar61 * 0x10;
      puVar59 = *(undefined8 **)(this_02 + 0x10);
      if (uVar76 < (ulong)(*(long *)(this_02 + 0x18) - (long)puVar59) ||
          uVar76 - (*(long *)(this_02 + 0x18) - (long)puVar59) == 0) {
        *(undefined8 **)(this_02 + 0x10) = puVar59 + uVar61 * 2;
      }
      else {
        puVar59 = (undefined8 *)v8::internal::Zone::NewExpand(this_02,uVar76);
      }
      *(undefined8 **)(lVar39 + 0x40) = puVar59;
      uVar55 = **(undefined1 **)(*(long *)(param_1 + 0x60) + 0x10);
      *puVar59 = *(undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(puVar59 + 1) = uVar55;
      if (uVar61 != 1) {
        lVar56 = 0;
        uVar76 = 1;
        do {
          lVar66 = *(long *)(lVar39 + 0x40) + lVar56;
          lVar56 = lVar56 + 0x10;
          uVar55 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x10) + uVar76);
          uVar76 = uVar76 + 1;
          *(undefined8 *)(lVar66 + 0x10) = *(undefined8 *)(param_1 + 0x10);
          *(undefined1 *)(lVar66 + 0x18) = uVar55;
        } while (uVar61 != uVar76);
      }
    }
  }
  uVar61 = (ulong)*(uint *)(param_1 + 0x230);
  this = (Register *)(param_1 + 0x78);
  uVar36 = (uint)param_1;
  if (*(uint *)(param_1 + 0x230) != 0) {
    uVar76 = 0;
    do {
      pDVar57 = param_1 + 0x238;
      if (8 < (uint)uVar61) {
        pDVar57 = *(Decoder **)(param_1 + 0x238);
      }
      uVar61 = FUN_017d5c40(this,param_1,pDVar57[uVar76],"param");
      if ((uVar61 & 1) == 0) goto LAB_017c4674;
      uVar61 = (ulong)*(uint *)(param_1 + 0x230);
      uVar76 = uVar76 + 1;
    } while (uVar76 < uVar61);
  }
  uVar61 = *(ulong *)(*(long *)(param_1 + 0x60) + 8);
  uVar77 = *(undefined8 *)
            ((*(long **)(*(long *)(param_1 + 0x3d0) + 0x10))[2] +
            **(long **)(*(long *)(param_1 + 0x3d0) + 0x10) * 8);
  v8::internal::TurboAssembler::EnterFrame((TurboAssembler *)this,5);
  iVar37 = *(int *)(param_1 + 0x98);
  iVar84 = *(int *)(param_1 + 0x88);
  param_1[0x208] = (Decoder)0x1;
  local_190 = (Decoder *)this;
  v8::internal::ConstantPool::BlockScope::BlockScope((BlockScope *)&local_188,(Assembler *)this,4);
  v8::internal::Assembler::CheckVeneerPool((Assembler *)local_190,false,true,4);
  v8::internal::Assembler::StartBlockVeneerPool((Assembler *)local_190);
  local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
  local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
  local_128 = 0;
  local_120 = CONCAT71(local_120._1_7_,0x13);
  local_118 = (Decoder *)&DAT_ffffffff;
  local_110 = CONCAT44(local_110._4_4_,2);
  v8::internal::Assembler::sub(this,(Register *)&DAT_01a63d04,(Operand *)&DAT_01a63d04);
  v8::internal::Assembler::EndBlockVeneerPool((Assembler *)local_190);
  v8::internal::ConstantPool::BlockScope::~BlockScope((BlockScope *)&local_188);
  *(int *)(param_1 + 0x490) = iVar37 - iVar84;
  if (((byte)param_1[0x30] & 1) == 0) {
    if ((byte)param_1[0x30] >> 1 != 0) goto LAB_017c41b8;
LAB_017c4148:
    if (param_1[0x3bc] == (Decoder)0x0) goto LAB_017c41b8;
    if (param_1[1000] == (Decoder)0x0) {
      param_1[1000] = param_1[0x3bc];
      uVar77 = *(undefined8 *)(param_1 + 0x3c0);
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n",uVar77);
      }
      v8::internal::wasm::Decoder::errorf
                (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                             (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))),
                 "unsupported liftoff operation: %s",uVar77);
    }
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_017c4148;
LAB_017c41b8:
    local_190 = (Decoder *)((ulong)(uint)((int)uVar77 >> 1) | 0x4000000000);
    uVar76 = uVar61 & 0xffffffff;
    local_188._0_4_ = 0;
    uStack_138._4_4_ = 2;
    local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1d;
    local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x40;
    local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xc] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xff;
    local_148[0xd] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xff;
    local_148[0xe] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xff;
    local_148[0xf] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xff;
    uStack_138._0_4_ = 0;
    local_130 = -0x10;
    local_128 = 0xffffffff00000000;
    local_120 = 0xffffffff;
    v8::internal::TurboAssembler::LoadStoreMacro
              ((TurboAssembler *)this,&local_190,local_148,0xc0000000);
    uVar50 = (uint)uVar61;
    if (uVar50 != 0) {
      uVar61 = 0;
      local_230 = (Decoder *)0x400000003f;
      do {
        pDVar57 = param_1 + 0x238;
        if (8 < *(uint *)(param_1 + 0x230)) {
          pDVar57 = *(Decoder **)(param_1 + 0x238);
        }
        DVar15 = pDVar57[uVar61];
        if ((byte)DVar15 - 1 < 2) {
          iVar37 = 0;
LAB_017c42a4:
          puVar68 = &DAT_01a634d0;
        }
        else {
          if (1 < (byte)DVar15 - 3) {
            iVar37 = 2;
            goto LAB_017c42a4;
          }
          iVar37 = 1;
          puVar68 = &DAT_01a634d8;
        }
        uVar95 = 0x13f8ffff;
        if (iVar37 != 0) {
          uVar95 = 0x3fff7fff;
        }
        if ((int)uVar61 == -2) {
          uVar93 = *(uint *)(*(long *)(param_1 + 0x3d0) + 8);
          if ((uVar93 & 1) != 0) goto LAB_017c42c8;
LAB_017c4318:
          uVar93 = (int)uVar93 >> 1;
          uVar78 = (ulong)uVar93;
          if ((uVar95 >> (uVar78 & 0x3f) & 1) == 0) {
            uVar95 = *puVar68 & (*(ulong *)(param_1 + 0x2b8) ^ 0xffffffffffffffff);
            if (uVar95 == 0) {
              uVar94 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                                 ((LiftoffAssembler *)this,*puVar68,0);
              uVar95 = uVar94 & 0xff;
            }
            else {
              uVar95 = (uVar95 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar95 & 0x5555555555555555) << 1;
              uVar95 = (uVar95 & 0xcccccccccccccccc) >> 2 | (uVar95 & 0x3333333333333333) << 2;
              uVar95 = (uVar95 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar95 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar95 = (uVar95 & 0xff00ff00ff00ff00) >> 8 | (uVar95 & 0xff00ff00ff00ff) << 8;
              uVar95 = (uVar95 & 0xffff0000ffff0000) >> 0x10 | (uVar95 & 0xffff0000ffff) << 0x10;
              uVar95 = LZCOUNT(uVar95 >> 0x20 | uVar95 << 0x20);
              uVar94 = uVar95;
            }
            if (iVar37 == 0) {
              local_120._1_7_ = (undefined7)((ulong)local_120 >> 8);
              if (DVar15 == (Decoder)0x1) {
                pDVar101 = (Decoder *)(uVar95 | 0x2000000000);
                pDVar57 = (Decoder *)(uVar78 | 0x2000000000);
                local_118 = (Decoder *)0x200000003f;
              }
              else {
                pDVar101 = (Decoder *)(uVar95 | 0x4000000000);
                pDVar57 = (Decoder *)(uVar78 | 0x4000000000);
                local_118 = local_230;
              }
              local_120 = CONCAT71(local_120._1_7_,0x13);
              local_188._0_4_ = 0;
              local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_128 = 0;
              local_190 = local_118;
              if ((int)uVar95 != 0x3f) {
                local_190 = pDVar101;
              }
              if (uVar93 != 0x3f) {
                local_118 = pDVar57;
              }
              uStack_108 = 0xffffffff;
              local_110 = 0;
              v8::internal::TurboAssembler::Mov((TurboAssembler *)this,&local_190,local_148,0);
            }
            else {
              uVar62 = uVar95 + 0xffffffe3 & 0xffffffff;
              local_148[0] = SUB81(uVar62,0);
              local_148[1] = SUB81(uVar62 >> 8,0);
              local_148[2] = SUB81(uVar62 >> 0x10,0);
              local_148[3] = SUB81(uVar62 >> 0x18,0);
              if (DVar15 == (Decoder)0x3) {
                local_190 = (Decoder *)(uVar78 | 0x2000000000);
                local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x20;
              }
              else {
                local_190 = (Decoder *)(uVar78 | 0x4000000000);
                local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x40;
                local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x1;
                local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                local_148[10] =
                     (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
                local_148[0xb] =
                     (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
                local_148[0xc] =
                     (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
                local_148[0xd] =
                     (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
                local_148[0xe] =
                     (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
                local_148[0xf] =
                     (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
                local_188._0_4_ = 1;
                local_188._4_4_ = 1;
                if (uVar93 == (uint)(uVar95 + 0xffffffe3)) goto LAB_017c4498;
              }
              local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[0xf] =
                   (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[0xe] =
                   (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[0xd] =
                   (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[0xc] =
                   (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
              local_148[0xb] =
                   (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0
              ;
              local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
              local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
              local_188._4_4_ = 1;
              local_188._0_4_ = 1;
              v8::internal::Assembler::fmov((Assembler *)this,local_148,(VRegister *)&local_190);
            }
          }
          else if (iVar37 == 1) {
            uVar94 = uVar78 + 0x1d;
          }
          else {
            uVar94 = uVar78;
            if (iVar37 != 0) goto LAB_017d09f4;
          }
        }
        else {
          plVar65 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x10);
          uVar93 = *(uint *)(plVar65[2] + (*plVar65 + (uVar61 + 2 & 0xffffffff)) * 8 + -8);
          if ((uVar93 & 1) == 0) goto LAB_017c4318;
LAB_017c42c8:
          if ((~uVar93 & 0x80000001) == 0) {
            uVar95 = *puVar68 & (*(ulong *)(param_1 + 0x2b8) ^ 0xffffffffffffffff);
            if (uVar95 == 0) {
              uVar94 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                                 ((LiftoffAssembler *)this,*puVar68,0);
            }
            else {
              uVar95 = (uVar95 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar95 & 0x5555555555555555) << 1;
              uVar95 = (uVar95 & 0xcccccccccccccccc) >> 2 | (uVar95 & 0x3333333333333333) << 2;
              uVar95 = (uVar95 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar95 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar95 = (uVar95 & 0xff00ff00ff00ff00) >> 8 | (uVar95 & 0xff00ff00ff00ff) << 8;
              uVar95 = (uVar95 & 0xffff0000ffff0000) >> 0x10 | (uVar95 & 0xffff0000ffff) << 0x10;
              uVar94 = LZCOUNT(uVar95 >> 0x20 | uVar95 << 0x20);
            }
            v8::internal::wasm::LiftoffAssembler::LoadCallerFrameSlot
                      ((LiftoffAssembler *)this,uVar94 & 0xff,-((int)uVar93 >> 1),DVar15);
          }
          else {
            uVar94 = 0;
          }
        }
LAB_017c4498:
        *(ulong *)(param_1 + 0x2b8) = 1L << (uVar94 & 0x3f) | *(ulong *)(param_1 + 0x2b8);
        *(int *)(param_1 + (uVar94 & 0xff) * 4 + 0x2c0) =
             *(int *)(param_1 + (uVar94 & 0xff) * 4 + 0x2c0) + 1;
        puVar40 = *(undefined1 **)(param_1 + 0x248);
        if (puVar40 == *(undefined1 **)(param_1 + 0x240)) {
          iVar37 = 8;
        }
        else {
          iVar37 = *(int *)(puVar40 + -4) + 8;
        }
        if (puVar40 == *(undefined1 **)(param_1 + 0x250)) {
          puVar40 = (undefined1 *)
                    v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                              ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                               (param_1 + 0x240));
        }
        uVar61 = uVar61 + 1;
        *puVar40 = 1;
        *(Decoder *)(puVar40 + 1) = DVar15;
        puVar40[4] = (char)uVar94;
        *(int *)(puVar40 + 8) = iVar37;
        *(undefined1 **)(param_1 + 0x248) = puVar40 + 0xc;
      } while (uVar76 != uVar61);
    }
    uVar93 = *(uint *)(param_1 + 0x230) - uVar50;
    if ((int)uVar93 < 0xd) {
      if (uVar50 < *(uint *)(param_1 + 0x230)) {
        lVar39 = *(long *)(param_1 + 0x498);
        uVar61 = uVar76;
        uVar100 = uVar93;
        do {
          if (1 < *(byte *)(lVar39 + uVar61) - 1) goto LAB_017c45d8;
          uVar100 = uVar100 - 1;
          uVar61 = uVar61 + 1;
        } while (uVar100 != 0);
        puVar40 = *(undefined1 **)(param_1 + 0x248);
        while( true ) {
          uVar55 = *(undefined1 *)(lVar39 + uVar76);
          if (puVar40 == *(undefined1 **)(param_1 + 0x240)) {
            iVar37 = 8;
          }
          else {
            iVar37 = *(int *)(puVar40 + -4) + 8;
          }
          if (puVar40 == *(undefined1 **)(param_1 + 0x250)) {
            puVar40 = (undefined1 *)
                      v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::
                      Grow((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x240));
          }
          *puVar40 = 2;
          puVar40[1] = uVar55;
          *(undefined4 *)(puVar40 + 4) = 0;
          *(int *)(puVar40 + 8) = iVar37;
          uVar76 = uVar76 + 1;
          puVar40 = puVar40 + 0xc;
          *(undefined1 **)(param_1 + 0x248) = puVar40;
          if (*(uint *)(param_1 + 0x230) <= uVar76) break;
          lVar39 = *(long *)(param_1 + 0x498);
        }
      }
    }
    else {
LAB_017c45d8:
      v8::internal::wasm::LiftoffAssembler::FillStackSlotsWithZero
                ((LiftoffAssembler *)this,uVar50,uVar93);
      if (uVar50 < *(uint *)(param_1 + 0x230)) {
        puVar40 = *(undefined1 **)(param_1 + 0x248);
        do {
          uVar55 = *(undefined1 *)(*(long *)(param_1 + 0x498) + uVar76);
          if (puVar40 == *(undefined1 **)(param_1 + 0x240)) {
            iVar37 = 8;
          }
          else {
            iVar37 = *(int *)(puVar40 + -4) + 8;
          }
          if (puVar40 == *(undefined1 **)(param_1 + 0x250)) {
            puVar40 = (undefined1 *)
                      v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::
                      Grow((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           (param_1 + 0x240));
          }
          *puVar40 = 0;
          puVar40[1] = uVar55;
          *(int *)(puVar40 + 8) = iVar37;
          uVar76 = uVar76 + 1;
          puVar40 = puVar40 + 0xc;
          *(undefined1 **)(param_1 + 0x248) = puVar40;
        } while (uVar76 < *(uint *)(param_1 + 0x230));
      }
    }
    FUN_017d6158(this,0);
  }
LAB_017c4674:
  pbVar80 = (byte *)CONCAT44(uStack_138._4_4_,(uint)uStack_138);
  pDVar101 = param_1 + 0x10;
  pbVar96 = *(byte **)pDVar101;
  pDVar57 = param_1 + 0x18;
  pbVar58 = *(byte **)pDVar57;
  if (pbVar58 <= pbVar96) {
LAB_017d095c:
    uStack_138 = pbVar80;
    if (pbVar96 != pbVar58) {
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 != 0) goto LAB_017d0994;
      }
      else if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d0994;
      v8::internal::wasm::Decoder::error(param_1,"Beyond end of code");
    }
LAB_017d0994:
    if (*(long *)(lVar19 + 0x28) == local_90) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pDVar1 = param_1 + 0x38;
  pDVar2 = param_1 + 0x4e0;
  this_00 = (vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
             *)(param_1 + 0x4b8);
  pDVar3 = param_1 + 1000;
  pDVar4 = param_1 + 0x4c0;
  pDVar5 = param_1 + 0x210;
  pDVar6 = param_1 + 0x220;
  pSVar7 = (SourcePositionTableBuilder *)(param_1 + 0x408);
  pWVar8 = (WasmFeatures *)(param_1 + 0x50);
  pDVar9 = param_1 + 0x460;
  puVar67 = (uint *)((ulong)local_148 | 4);
  this_01 = (CacheState *)(param_1 + 0x240);
  pSVar10 = local_148 + 8;
  puVar59 = (undefined8 *)((ulong)local_148 | 5);
  pDVar11 = param_1 + 0x30;
LAB_017c47c4:
  SVar33 = local_148[7];
  SVar31 = local_148[6];
  SVar29 = local_148[5];
  SVar27 = local_148[4];
  SVar25 = local_148[3];
  SVar23 = local_148[2];
  SVar16 = local_148[1];
  SVar54 = local_148[0];
  uStack_138._4_4_ = (undefined4)((ulong)pbVar80 >> 0x20);
  bVar14 = *pbVar96;
  uVar89 = (ushort)bVar14;
  uStack_138 = pbVar80;
  if (bVar14 == 0xff) {
LAB_017c578c:
    if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(*(long *)(param_1 + 0x48) + 0x178) != '\0'))
    {
      local_148[0] = SVar54;
      local_148[1] = SVar16;
      local_148[2] = SVar23;
      local_148[3] = SVar25;
      local_148[4] = SVar27;
      local_148[5] = SVar29;
      local_148[6] = SVar31;
      local_148[7] = SVar33;
      lVar39 = v8::internal::wasm::WasmOpcodes::AsmjsSignature(bVar14);
      if (lVar39 != 0) {
        FUN_017d5424(param_1,bVar14,lVar39);
        goto LAB_017c4a30;
      }
      uVar50 = 1;
      pbVar80 = uStack_138;
      goto LAB_017c47ac;
    }
    local_148[0] = SVar54;
    local_148[1] = SVar16;
    local_148[2] = SVar23;
    local_148[3] = SVar25;
    local_148[4] = SVar27;
    local_148[5] = SVar29;
    local_148[6] = SVar31;
    local_148[7] = SVar33;
    v8::internal::wasm::Decoder::error(param_1,"Invalid opcode");
    goto LAB_017d0994;
  }
  DVar15 = *pDVar11;
  uVar61 = (ulong)(byte)DVar15;
  uVar50 = 1;
  local_148[0] = SUB81(&local_130,0);
  SVar21 = local_148[0];
  local_148[1] = SUB81((ulong)&local_130 >> 8,0);
  SVar22 = local_148[1];
  local_148[2] = SUB81((ulong)&local_130 >> 0x10,0);
  SVar24 = local_148[2];
  local_148[3] = SUB81((ulong)&local_130 >> 0x18,0);
  SVar26 = local_148[3];
  local_148[4] = SUB81((ulong)&local_130 >> 0x20,0);
  SVar28 = local_148[4];
  local_148[5] = SUB81((ulong)&local_130 >> 0x28,0);
  SVar30 = local_148[5];
  local_148[6] = SUB81((ulong)&local_130 >> 0x30,0);
  SVar32 = local_148[6];
  local_148[7] = SUB81((ulong)&local_130 >> 0x38,0);
  SVar34 = local_148[7];
  local_148[0] = SVar54;
  local_148[1] = SVar16;
  local_148[2] = SVar23;
  local_148[3] = SVar25;
  local_148[4] = SVar27;
  local_148[5] = SVar29;
  local_148[6] = SVar31;
  local_148[7] = SVar33;
  switch(uVar89) {
  case 0:
    if (((byte)DVar15 & 1) == 0) {
      if ((byte)DVar15 >> 1 == 0) {
code_r0x017c5a08:
        if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
          pLVar41 = (Label *)FUN_017da05c(this,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8),0,0)
          ;
          v8::internal::Assembler::b((Assembler *)this,pLVar41);
          v8::internal::Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
          v8::internal::TurboAssembler::AssertUnreachable(this,0x2d);
        }
      }
    }
    else if (*(ulong *)pDVar1 == 0) goto code_r0x017c5a08;
    goto code_r0x017cc230;
  case 1:
    break;
  case 2:
    v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                       &local_190,pWVar8,param_1,pbVar96);
    if (local_190._4_1_ == '\n') {
      lVar39 = *(long *)(param_1 + 0x48);
      uVar61 = local_188 & 0xffffffff;
      if (lVar39 == 0) {
code_r0x017c64d8:
        uVar76 = 0;
        goto code_r0x017c7604;
      }
      uVar76 = *(long *)(lVar39 + 0x60) - *(long *)(lVar39 + 0x58) >> 3;
      if (uVar76 <= uVar61) goto code_r0x017c7604;
      plVar65 = *(long **)(*(long *)(lVar39 + 0x58) + uVar61 * 8);
      uStack_180 = (uint)plVar65;
      uStack_17c = (undefined4)((ulong)plVar65 >> 0x20);
    }
    else {
      plVar65 = (long *)CONCAT44(uStack_17c,uStack_180);
    }
    local_148[0] = SVar21;
    local_148[1] = SVar22;
    local_148[2] = SVar24;
    local_148[3] = SVar26;
    local_148[4] = SVar28;
    local_148[5] = SVar30;
    local_148[6] = SVar32;
    local_148[7] = SVar34;
    local_148[8] = SVar21;
    local_148[9] = SVar22;
    local_148[10] = SVar24;
    local_148[0xb] = SVar26;
    local_148[0xc] = SVar28;
    local_148[0xd] = SVar30;
    local_148[0xe] = SVar32;
    local_148[0xf] = SVar34;
    uStack_138 = (byte *)&uStack_b0;
    if (plVar65 != (long *)0x0) {
      uVar61 = plVar65[1];
      uVar50 = (uint)uVar61;
      uVar76 = (ulong)(int)uVar50;
      puVar49 = (uint *)&local_130;
      if (8 < uVar50) {
        v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
        puVar49 = (uint *)CONCAT17(local_148[7],
                                   CONCAT16(local_148[6],
                                            CONCAT15(local_148[5],
                                                     CONCAT14(local_148[4],
                                                              CONCAT13(local_148[3],
                                                                       CONCAT12(local_148[2],
                                                                                CONCAT11(local_148[1
                                                  ],local_148[0])))))));
      }
      puVar49 = puVar49 + uVar76 * 4;
      local_148[8] = SUB81(puVar49,0);
      local_148[9] = SUB81((ulong)puVar49 >> 8,0);
      local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
      if (0 < (int)uVar50) {
        uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
        do {
          uVar50 = uVar50 - 1;
          lVar39 = *(long *)pDVar4;
          bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
          if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4))
          {
            pbVar96 = *(byte **)(lVar39 + -0x10);
            uVar95 = (ulong)*(byte *)(lVar39 + -8);
            *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          }
          else {
            if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
              pbVar96 = *(byte **)pDVar101;
              if (pbVar96 < *(byte **)pDVar57) {
                bVar18 = *pbVar96;
                uVar89 = (ushort)bVar18;
                uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar95 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar96 + 1) {
                    pcVar44 = "<end>";
                    goto code_r0x017c5fa4;
                  }
                  uVar89 = CONCAT11(bVar18,pbVar96[1]);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017c5fa4:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            }
            pbVar96 = *(byte **)pDVar101;
            uVar95 = 10;
          }
          uVar93 = (uint)uVar95;
          uVar76 = uVar76 - 1;
          if (uVar93 != bVar14) {
            if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
              if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar18 = *pbVar80;
                  uVar89 = (ushort)bVar18;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017c6098;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017c6098:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) == 0) {
code_r0x017c6110:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017c6110;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar93) goto code_r0x017c6134;
code_r0x017c5e88:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar93 < 0xb) goto code_r0x017c5e88;
code_r0x017c6134:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar50,
                           pcVar103,pcVar45,pcVar53);
              }
            }
          }
          lVar39 = CONCAT17(local_148[7],
                            CONCAT16(local_148[6],
                                     CONCAT15(local_148[5],
                                              CONCAT14(local_148[4],
                                                       CONCAT13(local_148[3],
                                                                CONCAT12(local_148[2],
                                                                         CONCAT11(local_148[1],
                                                                                  local_148[0]))))))
                           ) + uVar61;
          uVar61 = uVar61 - 0x10;
          *(byte **)(lVar39 + -0x10) = pbVar96;
          *(char *)(lVar39 + -8) = (char)uVar95;
        } while (0 < (long)uVar76);
      }
    }
    lVar39 = FUN_017d0a08(param_1,2);
    FUN_017d0e8c(param_1,lVar39,&local_190,
                 CONCAT17(local_148[7],
                          CONCAT16(local_148[6],
                                   CONCAT15(local_148[5],
                                            CONCAT14(local_148[4],
                                                     CONCAT13(local_148[3],
                                                              CONCAT12(local_148[2],
                                                                       CONCAT11(local_148[1],
                                                                                local_148[0]))))))))
    ;
    FUN_017d1060(param_1,lVar39,lVar39 + 0x18);
    puVar49 = (uint *)CONCAT17(local_148[7],
                               CONCAT16(local_148[6],
                                        CONCAT15(local_148[5],
                                                 CONCAT14(local_148[4],
                                                          CONCAT13(local_148[3],
                                                                   CONCAT12(local_148[2],
                                                                            CONCAT11(local_148[1],
                                                                                     local_148[0])))
                                                         ))));
    uVar50 = (int)local_190 + 1;
    pbVar80 = uStack_138;
    if (puVar49 != (uint *)&local_130) {
      free(puVar49);
      pbVar80 = uStack_138;
    }
    break;
  case 3:
    v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                       &local_190,pWVar8,param_1,pbVar96);
    if (local_190._4_1_ == '\n') {
      lVar39 = *(long *)(param_1 + 0x48);
      uVar61 = local_188 & 0xffffffff;
      if (lVar39 == 0) goto code_r0x017c64d8;
      uVar76 = *(long *)(lVar39 + 0x60) - *(long *)(lVar39 + 0x58) >> 3;
      if (uVar76 <= uVar61) goto code_r0x017c7604;
      plVar65 = *(long **)(*(long *)(lVar39 + 0x58) + uVar61 * 8);
      uStack_180 = (uint)plVar65;
      uStack_17c = (undefined4)((ulong)plVar65 >> 0x20);
    }
    else {
      plVar65 = (long *)CONCAT44(uStack_17c,uStack_180);
    }
    local_148[0] = SVar21;
    local_148[1] = SVar22;
    local_148[2] = SVar24;
    local_148[3] = SVar26;
    local_148[4] = SVar28;
    local_148[5] = SVar30;
    local_148[6] = SVar32;
    local_148[7] = SVar34;
    local_148[8] = SVar21;
    local_148[9] = SVar22;
    local_148[10] = SVar24;
    local_148[0xb] = SVar26;
    local_148[0xc] = SVar28;
    local_148[0xd] = SVar30;
    local_148[0xe] = SVar32;
    local_148[0xf] = SVar34;
    uStack_138 = (byte *)&uStack_b0;
    if (plVar65 != (long *)0x0) {
      uVar61 = plVar65[1];
      uVar50 = (uint)uVar61;
      uVar76 = (ulong)(int)uVar50;
      puVar49 = (uint *)&local_130;
      if (8 < uVar50) {
        v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
        puVar49 = (uint *)CONCAT17(local_148[7],
                                   CONCAT16(local_148[6],
                                            CONCAT15(local_148[5],
                                                     CONCAT14(local_148[4],
                                                              CONCAT13(local_148[3],
                                                                       CONCAT12(local_148[2],
                                                                                CONCAT11(local_148[1
                                                  ],local_148[0])))))));
      }
      puVar49 = puVar49 + uVar76 * 4;
      local_148[8] = SUB81(puVar49,0);
      local_148[9] = SUB81((ulong)puVar49 >> 8,0);
      local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
      if (0 < (int)uVar50) {
        uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
        do {
          uVar50 = uVar50 - 1;
          lVar39 = *(long *)pDVar4;
          bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
          if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4))
          {
            pbVar96 = *(byte **)(lVar39 + -0x10);
            uVar95 = (ulong)*(byte *)(lVar39 + -8);
            *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          }
          else {
            if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
              pbVar96 = *(byte **)pDVar101;
              if (pbVar96 < *(byte **)pDVar57) {
                bVar18 = *pbVar96;
                uVar89 = (ushort)bVar18;
                uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar95 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar96 + 1) {
                    pcVar44 = "<end>";
                    goto code_r0x017c5c60;
                  }
                  uVar89 = CONCAT11(bVar18,pbVar96[1]);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017c5c60:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            }
            pbVar96 = *(byte **)pDVar101;
            uVar95 = 10;
          }
          uVar93 = (uint)uVar95;
          uVar76 = uVar76 - 1;
          if (uVar93 != bVar14) {
            if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
              if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar18 = *pbVar80;
                  uVar89 = (ushort)bVar18;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017c5d54;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017c5d54:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) == 0) {
code_r0x017c5dcc:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017c5dcc;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar93) goto code_r0x017c5df0;
code_r0x017c5b44:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar93 < 0xb) goto code_r0x017c5b44;
code_r0x017c5df0:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar50,
                           pcVar103,pcVar45,pcVar53);
              }
            }
          }
          lVar39 = CONCAT17(local_148[7],
                            CONCAT16(local_148[6],
                                     CONCAT15(local_148[5],
                                              CONCAT14(local_148[4],
                                                       CONCAT13(local_148[3],
                                                                CONCAT12(local_148[2],
                                                                         CONCAT11(local_148[1],
                                                                                  local_148[0]))))))
                           ) + uVar61;
          uVar61 = uVar61 - 0x10;
          *(byte **)(lVar39 + -0x10) = pbVar96;
          *(char *)(lVar39 + -8) = (char)uVar95;
        } while (0 < (long)uVar76);
      }
    }
    lVar39 = FUN_017d0a08(param_1,3);
    FUN_017d0e8c(param_1,*(long *)(param_1 + 0x4e0) + -0x1e0,&local_190,
                 CONCAT17(local_148[7],
                          CONCAT16(local_148[6],
                                   CONCAT15(local_148[5],
                                            CONCAT14(local_148[4],
                                                     CONCAT13(local_148[3],
                                                              CONCAT12(local_148[2],
                                                                       CONCAT11(local_148[1],
                                                                                local_148[0]))))))))
    ;
    iVar37 = (int)local_190;
    if (((byte)param_1[0x30] & 1) == 0) {
      uVar61 = (ulong)((byte)param_1[0x30] >> 1);
    }
    else {
      uVar61 = *(ulong *)pDVar1;
    }
    if ((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) {
      if ((*(int *)(lVar39 + 0x18) == 0) && (*(uint *)(lVar39 + 0x38) < 2)) {
        v8::internal::wasm::LiftoffAssembler::SpillLocals((LiftoffAssembler *)this);
        v8::internal::Assembler::bind((Label *)this);
        v8::internal::wasm::LiftoffAssembler::CacheState::Split
                  ((CacheState *)(lVar39 + 0x60),this_01);
        FUN_017d6158(this,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
      }
      else if (*pDVar3 == (Decoder)0x0) {
        *pDVar3 = (Decoder)0x8;
        if (v8::internal::FLAG_trace_liftoff != '\0') {
          v8::internal::PrintF("[liftoff] unsupported: %s\n","multi-value loop");
        }
        uVar50 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
        pcVar44 = "multi-value loop";
        goto code_r0x017c7ec8;
      }
    }
    goto code_r0x017cb328;
  case 4:
    v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                       &uStack_b0,pWVar8,param_1,pbVar96);
    if (uStack_b0._4_1_ == '\n') {
      uVar61 = (ulong)pDStack_a8 & 0xffffffff;
      lVar39 = *(long *)(param_1 + 0x48);
      if (lVar39 == 0) {
        uVar76 = 0;
      }
      else {
        uVar76 = *(long *)(lVar39 + 0x60) - *(long *)(lVar39 + 0x58) >> 3;
        if (uVar61 < uVar76) {
          plStack_a0 = *(long **)(*(long *)(lVar39 + 0x58) + uVar61 * 8);
          goto code_r0x017c4d3c;
        }
      }
code_r0x017c7604:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,*(char **)(param_1 + 0x10),
                 "block type index %u out of bounds (%zu signatures)",uVar61,uVar76);
      goto LAB_017c4a30;
    }
code_r0x017c4d3c:
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar96 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
        pbVar80 = *(byte **)pDVar101;
        if (pbVar80 < *(byte **)pDVar57) {
          bVar14 = *pbVar80;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar80 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017ca534;
            }
            uVar89 = CONCAT11(bVar14,pbVar80[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017ca534:
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) == 0) {
code_r0x017ca598:
            pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            if (pbVar96 + 1 < *(byte **)pDVar57) {
              uVar89 = CONCAT11(bVar14,pbVar96[1]);
              goto code_r0x017ca598;
            }
            pcVar103 = "<end>";
          }
          if (10 < (uint)uVar61) goto code_r0x017ca5e4;
code_r0x017ca580:
          pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                              (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
        }
        else {
          pcVar103 = "<end>";
          if ((uint)uVar61 < 0xb) goto code_r0x017ca580;
code_r0x017ca5e4:
          pcVar45 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s[%d] expected type %s, found %s of type %s",
                   pcVar44,0,"i32",pcVar103,pcVar45);
      }
    }
    else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
      pbVar96 = *(byte **)pDVar101;
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017ca5b4;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017ca5b4:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
    }
    plVar65 = plStack_a0;
    local_148[0] = SVar21;
    local_148[1] = SVar22;
    local_148[2] = SVar24;
    local_148[3] = SVar26;
    local_148[4] = SVar28;
    local_148[5] = SVar30;
    local_148[6] = SVar32;
    local_148[7] = SVar34;
    local_148[8] = SVar21;
    local_148[9] = SVar22;
    local_148[10] = SVar24;
    local_148[0xb] = SVar26;
    local_148[0xc] = SVar28;
    local_148[0xd] = SVar30;
    local_148[0xe] = SVar32;
    local_148[0xf] = SVar34;
    uStack_138 = (byte *)&uStack_b0;
    if (plStack_a0 != (long *)0x0) {
      uVar61 = plStack_a0[1];
      uVar50 = (uint)uVar61;
      uVar76 = (ulong)(int)uVar50;
      puVar49 = (uint *)&local_130;
      if (8 < uVar50) {
        v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
        puVar49 = (uint *)CONCAT17(local_148[7],
                                   CONCAT16(local_148[6],
                                            CONCAT15(local_148[5],
                                                     CONCAT14(local_148[4],
                                                              CONCAT13(local_148[3],
                                                                       CONCAT12(local_148[2],
                                                                                CONCAT11(local_148[1
                                                  ],local_148[0])))))));
      }
      puVar49 = puVar49 + uVar76 * 4;
      local_148[8] = SUB81(puVar49,0);
      local_148[9] = SUB81((ulong)puVar49 >> 8,0);
      local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
      if (0 < (int)uVar50) {
        uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
        do {
          uVar50 = uVar50 - 1;
          lVar39 = *(long *)pDVar4;
          bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
          if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4))
          {
            pbVar96 = *(byte **)(lVar39 + -0x10);
            uVar95 = (ulong)*(byte *)(lVar39 + -8);
            *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          }
          else {
            if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
              pbVar96 = *(byte **)pDVar101;
              if (pbVar96 < *(byte **)pDVar57) {
                bVar18 = *pbVar96;
                uVar89 = (ushort)bVar18;
                uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar95 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar96 + 1) {
                    pcVar44 = "<end>";
                    goto code_r0x017ca798;
                  }
                  uVar89 = CONCAT11(bVar18,pbVar96[1]);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017ca798:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            }
            pbVar96 = *(byte **)pDVar101;
            uVar95 = 10;
          }
          uVar93 = (uint)uVar95;
          uVar76 = uVar76 - 1;
          if (uVar93 != bVar14) {
            if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
              if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar18 = *pbVar80;
                  uVar89 = (ushort)bVar18;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017ca890;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017ca890:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) == 0) {
code_r0x017ca908:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017ca908;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar93) goto code_r0x017ca92c;
code_r0x017ca678:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar93 < 0xb) goto code_r0x017ca678;
code_r0x017ca92c:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar50,
                           pcVar103,pcVar45,pcVar53);
              }
            }
          }
          lVar39 = CONCAT17(local_148[7],
                            CONCAT16(local_148[6],
                                     CONCAT15(local_148[5],
                                              CONCAT14(local_148[4],
                                                       CONCAT13(local_148[3],
                                                                CONCAT12(local_148[2],
                                                                         CONCAT11(local_148[1],
                                                                                  local_148[0]))))))
                           ) + uVar61;
          uVar61 = uVar61 - 0x10;
          *(byte **)(lVar39 + -0x10) = pbVar96;
          *(char *)(lVar39 + -8) = (char)uVar95;
        } while (0 < (long)uVar76);
      }
    }
    if (((byte)*pDVar11 & 1) == 0) {
      uVar61 = (ulong)((byte)*pDVar11 >> 1);
    }
    else {
      uVar61 = *(ulong *)pDVar1;
    }
    if (uVar61 == 0) {
      lVar39 = FUN_017d0a08(param_1,0);
      FUN_017d0e8c(param_1,lVar39,&uStack_b0,
                   CONCAT17(local_148[7],
                            CONCAT16(local_148[6],
                                     CONCAT15(local_148[5],
                                              CONCAT14(local_148[4],
                                                       CONCAT13(local_148[3],
                                                                CONCAT12(local_148[2],
                                                                         CONCAT11(local_148[1],
                                                                                  local_148[0]))))))
                           ));
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 == 0) {
code_r0x017ca9cc:
          if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
            if ((*(int *)(lVar39 + 0x18) == 0) && (*(uint *)(lVar39 + 0x38) < 2)) {
              puVar63 = operator_new(0x180);
              puVar63[7] = 0;
              puVar63[6] = 0;
              puVar63[9] = 0;
              puVar63[8] = 0;
              puVar63[0xb] = 0;
              puVar63[10] = 0;
              puVar63[0xd] = 0;
              puVar63[0xc] = 0;
              puVar63[0xf] = 0;
              puVar63[0xe] = 0;
              puVar63[0x13] = 0;
              puVar63[0x12] = 0;
              puVar63[0x15] = 0;
              puVar63[0x14] = 0;
              puVar63[0x17] = 0;
              puVar63[0x16] = 0;
              puVar63[0x19] = 0;
              puVar63[0x18] = 0;
              puVar63[0x1b] = 0;
              puVar63[0x1a] = 0;
              puVar63[0x1d] = 0;
              puVar63[0x1c] = 0;
              puVar63[0x1f] = 0;
              puVar63[0x1e] = 0;
              puVar63[0x21] = 0;
              puVar63[0x20] = 0;
              puVar63[0x23] = 0;
              puVar63[0x22] = 0;
              puVar63[0x25] = 0;
              puVar63[0x24] = 0;
              puVar63[0x27] = 0;
              puVar63[0x26] = 0;
              puVar63[0x29] = 0;
              puVar63[0x28] = 0;
              puVar63[0x2b] = 0;
              puVar63[0x2a] = 0;
              puVar63[0x2d] = 0;
              puVar63[0x2c] = 0;
              puVar63[0x2f] = 0;
              puVar63[0x2e] = 0;
              puVar81 = puVar63 + 0x10;
              puVar63[0x11] = 0;
              *puVar81 = 0;
              puVar85 = puVar63 + 4;
              puVar63[5] = 0;
              *puVar85 = 0;
              puVar46 = operator_new(8);
              *puVar46 = 0;
              *puVar63 = puVar46;
              puVar63[1] = puVar85;
              puVar63[2] = puVar85;
              puVar63[3] = puVar81;
              puVar63[0x2f] = 0;
              puVar63[0x11] = 0;
              *puVar81 = 0;
              puVar63[0x13] = 0;
              puVar63[0x12] = 0;
              puVar63[0x15] = 0;
              puVar63[0x14] = 0;
              puVar63[0x17] = 0;
              puVar63[0x16] = 0;
              puVar63[0x19] = 0;
              puVar63[0x18] = 0;
              puVar63[0x1b] = 0;
              puVar63[0x1a] = 0;
              puVar63[0x1d] = 0;
              puVar63[0x1c] = 0;
              puVar63[0x1f] = 0;
              puVar63[0x1e] = 0;
              puVar63[0x21] = 0;
              puVar63[0x20] = 0;
              puVar63[0x23] = 0;
              puVar63[0x22] = 0;
              puVar63[0x25] = 0;
              puVar63[0x24] = 0;
              puVar63[0x27] = 0;
              puVar63[0x26] = 0;
              puVar63[0x29] = 0;
              puVar63[0x28] = 0;
              puVar63[0x2b] = 0;
              puVar63[0x2a] = 0;
              puVar63[0x2d] = 0;
              puVar63[0x2c] = 0;
              *(undefined4 *)(puVar63 + 0x2e) = 0;
              puVar46 = *(undefined8 **)(lVar39 + 0x58);
              *(undefined8 **)(lVar39 + 0x58) = puVar63;
              if (puVar46 != (undefined8 *)0x0) {
                if ((undefined8 *)puVar46[1] != puVar46 + 4) {
                  free((undefined8 *)puVar46[1]);
                }
                pvVar47 = (void *)*puVar46;
                *puVar46 = 0;
                if (pvVar47 != (void *)0x0) {
                  operator_delete(pvVar47);
                }
                operator_delete(puVar46);
              }
              uVar61 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                                 ((LiftoffAssembler *)this,0);
              uVar77 = **(undefined8 **)(lVar39 + 0x58);
              uStack_1d8 = uVar61 & 0xff | 0x2000000000;
              pDStack_160 = (Decoder *)0x200000001f;
              pSStack_1d0 = (Signature *)((ulong)pSStack_1d0 & 0xffffffff00000000);
              local_190 = (Decoder *)((ulong)local_190 & 0xffffffffffffff00);
              local_188._0_4_ = (uint)local_188 & 0xffffff00;
              uStack_170 = 0;
              uStack_16c = 0;
              uStack_168 = CONCAT31(uStack_168._1_3_,0x13);
              uStack_150 = 0xffffffff;
              uStack_158 = 0;
              v8::internal::TurboAssembler::AddSubMacro
                        ((TurboAssembler *)this,&DAT_01a63d34,&uStack_1d8,&local_190,1,0x40000000);
              v8::internal::TurboAssembler::B((TurboAssembler *)this,uVar77,0);
              v8::internal::wasm::LiftoffAssembler::CacheState::Split
                        ((CacheState *)(*(long *)(lVar39 + 0x58) + 8),this_01);
            }
            else if (*pDVar3 == (Decoder)0x0) {
              *pDVar3 = (Decoder)0x8;
              if (v8::internal::FLAG_trace_liftoff != '\0') {
                v8::internal::PrintF("[liftoff] unsupported: %s\n","multi-value if");
              }
              v8::internal::wasm::Decoder::errorf
                        (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                     (*(int *)(param_1 + 0x10) -
                                                     *(int *)(param_1 + 8))),
                         "unsupported liftoff operation: %s","multi-value if");
            }
          }
        }
      }
      else if (*(ulong *)pDVar1 == 0) goto code_r0x017ca9cc;
      uVar50 = (int)uStack_b0 + 1;
      FUN_017d1060(param_1,lVar39,lVar39 + 0x18);
    }
    else {
      uVar50 = 1;
    }
    goto code_r0x017d0048;
  case 5:
    lVar39 = *(long *)(param_1 + 0x4e0);
    if (*(long *)(param_1 + 0x4d8) != lVar39) {
      pbVar58 = (byte *)(lVar39 + -0x1e0);
      if (*pbVar58 < 2) {
        if (*pbVar58 != 1) {
          uVar61 = FUN_017d12b4(param_1);
          uVar50 = 1;
          pbVar80 = uStack_138;
          if ((uVar61 & 1) == 0) break;
          *pbVar58 = 1;
          if (((byte)*pDVar11 & 1) == 0) {
            if ((byte)*pDVar11 >> 1 == 0) {
code_r0x017c92e0:
              if ((*(long *)(param_1 + 0x4e0) - *(long *)(param_1 + 0x4d8) == 0x1e0) ||
                 (*(char *)(*(long *)(param_1 + 0x4e0) + -0x3b0) == '\0')) {
                if (*(char *)(lVar39 + -0x1d0) == '\0') {
                  if (*(char *)(lVar39 + -400) == '\0') {
                    v8::internal::wasm::LiftoffAssembler::CacheState::InitMerge
                              ((CacheState *)(lVar39 + -0x180),(uint)this_01,
                               *(uint *)(param_1 + 0x230),*(uint *)(lVar39 + -0x1a8));
                  }
                  v8::internal::wasm::LiftoffAssembler::MergeFullStackWith
                            ((LiftoffAssembler *)this,(CacheState *)(lVar39 + -0x180),this_01);
                  v8::internal::Assembler::b((Assembler *)this,*(Label **)(lVar39 + -8));
                  v8::internal::Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
                }
                v8::internal::Assembler::bind((Label *)this);
                v8::internal::wasm::LiftoffAssembler::CacheState::Steal
                          (this_01,(CacheState *)(*(long *)(lVar39 + -0x188) + 8));
              }
            }
          }
          else if (*(ulong *)pDVar1 == 0) goto code_r0x017c92e0;
          if (*(char *)(lVar39 + -0x1d0) == '\0') {
            *(undefined1 *)(lVar39 + -400) = 1;
          }
          FUN_017d1060(param_1,pbVar58,lVar39 + -0x1c8);
          *(char *)(lVar39 + -0x1d0) = *(char *)(*(long *)(param_1 + 0x4e0) + -0x3b0) != '\0';
          goto code_r0x017c49a4;
        }
        pcVar44 = "else already present for if";
      }
      else {
        pcVar44 = "else does not match an if";
      }
code_r0x017c65fc:
      uStack_138 = pbVar80;
      v8::internal::wasm::Decoder::error(param_1,pbVar96,pcVar44);
      goto LAB_017c4a30;
    }
    pcVar44 = "else does not match any if";
code_r0x017c548c:
    uStack_138 = pbVar80;
    v8::internal::wasm::Decoder::error(param_1,pcVar44);
    goto LAB_017c4a30;
  case 6:
    if (((byte)*pWVar8 & 1) == 0) {
code_r0x017c5340:
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-eh)";
      goto code_r0x017c548c;
    }
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
    v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    BlockTypeImmediate((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                       &local_190,pWVar8,param_1,*(uchar **)(param_1 + 0x10));
    if (local_190._4_1_ == '\n') {
      lVar39 = *(long *)(param_1 + 0x48);
      uVar61 = local_188 & 0xffffffff;
      if (lVar39 == 0) goto code_r0x017c64d8;
      uVar76 = *(long *)(lVar39 + 0x60) - *(long *)(lVar39 + 0x58) >> 3;
      if (uVar76 <= uVar61) goto code_r0x017c7604;
      plVar65 = *(long **)(*(long *)(lVar39 + 0x58) + uVar61 * 8);
      uStack_180 = (uint)plVar65;
      uStack_17c = (undefined4)((ulong)plVar65 >> 0x20);
    }
    else {
      plVar65 = (long *)CONCAT44(uStack_17c,uStack_180);
    }
    local_148[0] = SVar21;
    local_148[1] = SVar22;
    local_148[2] = SVar24;
    local_148[3] = SVar26;
    local_148[4] = SVar28;
    local_148[5] = SVar30;
    local_148[6] = SVar32;
    local_148[7] = SVar34;
    local_148[8] = SVar21;
    local_148[9] = SVar22;
    local_148[10] = SVar24;
    local_148[0xb] = SVar26;
    local_148[0xc] = SVar28;
    local_148[0xd] = SVar30;
    local_148[0xe] = SVar32;
    local_148[0xf] = SVar34;
    uStack_138 = (byte *)&uStack_b0;
    if (plVar65 != (long *)0x0) {
      uVar61 = plVar65[1];
      uVar50 = (uint)uVar61;
      uVar76 = (ulong)(int)uVar50;
      puVar49 = (uint *)&local_130;
      if (8 < uVar50) {
        v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
        puVar49 = (uint *)CONCAT17(local_148[7],
                                   CONCAT16(local_148[6],
                                            CONCAT15(local_148[5],
                                                     CONCAT14(local_148[4],
                                                              CONCAT13(local_148[3],
                                                                       CONCAT12(local_148[2],
                                                                                CONCAT11(local_148[1
                                                  ],local_148[0])))))));
      }
      puVar49 = puVar49 + uVar76 * 4;
      local_148[8] = SUB81(puVar49,0);
      local_148[9] = SUB81((ulong)puVar49 >> 8,0);
      local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
      if (0 < (int)uVar50) {
        uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
        do {
          uVar50 = uVar50 - 1;
          lVar39 = *(long *)pDVar4;
          bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
          if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4))
          {
            pbVar96 = *(byte **)(lVar39 + -0x10);
            uVar95 = (ulong)*(byte *)(lVar39 + -8);
            *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          }
          else {
            if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
              pbVar96 = *(byte **)pDVar101;
              if (pbVar96 < *(byte **)pDVar57) {
                bVar18 = *pbVar96;
                uVar89 = (ushort)bVar18;
                uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar95 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar96 + 1) {
                    pcVar44 = "<end>";
                    goto code_r0x017c6928;
                  }
                  uVar89 = CONCAT11(bVar18,pbVar96[1]);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017c6928:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            }
            pbVar96 = *(byte **)pDVar101;
            uVar95 = 10;
          }
          uVar93 = (uint)uVar95;
          uVar76 = uVar76 - 1;
          if (uVar93 != bVar14) {
            if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
              if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar18 = *pbVar80;
                  uVar89 = (ushort)bVar18;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017c6a1c;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017c6a1c:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) == 0) {
code_r0x017c6a94:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017c6a94;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar93) goto code_r0x017c6ab8;
code_r0x017c680c:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar93 < 0xb) goto code_r0x017c680c;
code_r0x017c6ab8:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar50,
                           pcVar103,pcVar45,pcVar53);
              }
            }
          }
          lVar39 = CONCAT17(local_148[7],
                            CONCAT16(local_148[6],
                                     CONCAT15(local_148[5],
                                              CONCAT14(local_148[4],
                                                       CONCAT13(local_148[3],
                                                                CONCAT12(local_148[2],
                                                                         CONCAT11(local_148[1],
                                                                                  local_148[0]))))))
                           ) + uVar61;
          uVar61 = uVar61 - 0x10;
          *(byte **)(lVar39 + -0x10) = pbVar96;
          *(char *)(lVar39 + -8) = (char)uVar95;
        } while (0 < (long)uVar76);
      }
    }
    lVar39 = FUN_017d0a08(param_1,4);
    FUN_017d0e8c(param_1,lVar39,&local_190,
                 CONCAT17(local_148[7],
                          CONCAT16(local_148[6],
                                   CONCAT15(local_148[5],
                                            CONCAT14(local_148[4],
                                                     CONCAT13(local_148[3],
                                                              CONCAT12(local_148[2],
                                                                       CONCAT11(local_148[1],
                                                                                local_148[0]))))))))
    ;
    iVar37 = (int)local_190;
    if (((byte)param_1[0x30] & 1) == 0) {
      uVar61 = (ulong)((byte)param_1[0x30] >> 1);
    }
    else {
      uVar61 = *(ulong *)pDVar1;
    }
    if (((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) &&
       (*pDVar3 == (Decoder)0x0)) {
      *pDVar3 = (Decoder)0x7;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","try");
      }
      uVar50 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
      pcVar44 = "try";
code_r0x017c7ec8:
      v8::internal::wasm::Decoder::errorf
                (uVar36,(char *)(ulong)uVar50,"unsupported liftoff operation: %s",pcVar44);
    }
code_r0x017cb328:
    uVar50 = iVar37 + 1;
    FUN_017d1060(param_1,lVar39,lVar39 + 0x18);
    puVar49 = (uint *)CONCAT17(local_148[7],
                               CONCAT16(local_148[6],
                                        CONCAT15(local_148[5],
                                                 CONCAT14(local_148[4],
                                                          CONCAT13(local_148[3],
                                                                   CONCAT12(local_148[2],
                                                                            CONCAT11(local_148[1],
                                                                                     local_148[0])))
                                                         ))));
    pbVar80 = uStack_138;
    if (puVar49 != (uint *)&local_130) {
      free(puVar49);
      pbVar80 = uStack_138;
    }
    break;
  case 7:
    if (((byte)param_1[0x50] & 1) == 0) goto code_r0x017c5340;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
    lVar39 = *(long *)(param_1 + 0x4e0);
    if (*(long *)(param_1 + 0x4d8) == lVar39) {
code_r0x017c6510:
      pcVar44 = "catch does not match any try";
    }
    else {
      pbVar96 = (byte *)(lVar39 + -0x1e0);
      if ((*pbVar96 | 1) != 5) goto code_r0x017c6510;
      if (*pbVar96 == 4) {
        *pbVar96 = 5;
        uVar61 = FUN_017d12b4(param_1);
        if (((uVar61 & 1) != 0) && (*(char *)(lVar39 + -0x1d0) == '\0')) {
          if (*pbVar96 != 3) {
            if (*(char *)(lVar39 + -400) == '\0') {
              v8::internal::wasm::LiftoffAssembler::CacheState::Split
                        ((CacheState *)(lVar39 + -0x180),this_01);
            }
            else {
              v8::internal::wasm::LiftoffAssembler::MergeFullStackWith
                        ((LiftoffAssembler *)(param_1 + 0x78),(CacheState *)(lVar39 + -0x180),
                         this_01);
            }
          }
          *(undefined1 *)(lVar39 + -400) = 1;
        }
        lVar56 = *(long *)this_00 + (ulong)*(uint *)(lVar39 + -0x1dc) * 0x10;
        if (lVar56 != *(long *)pDVar4) {
          *(long *)pDVar4 = lVar56;
        }
        *(bool *)(lVar39 + -0x1d0) = *(char *)(*(long *)(param_1 + 0x4e0) + -0x3b0) != '\0';
        local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x9;
        puVar63 = *(undefined8 **)(param_1 + 0x4c0);
        if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
          uVar77 = *(undefined8 *)pDVar101;
          *(undefined1 *)(puVar63 + 1) = 9;
          *puVar63 = uVar77;
          *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_00,(uchar **)pDVar101,local_148);
        }
        if (((byte)*pDVar11 & 1) != 0) {
          if (*(ulong *)pDVar1 == 0) goto code_r0x017cdcc8;
          goto LAB_017c4a30;
        }
        if ((byte)*pDVar11 >> 1 != 0) goto LAB_017c4a30;
code_r0x017cdcc8:
        if (((*(long *)(param_1 + 0x4e0) - *(long *)(param_1 + 0x4d8) != 0x1e0) &&
            (*(char *)(*(long *)(param_1 + 0x4e0) + -0x3b0) != '\0')) || (*pDVar3 != (Decoder)0x0))
        goto LAB_017c4a30;
        *pDVar3 = (Decoder)0x7;
        if (v8::internal::FLAG_trace_liftoff != '\0') {
          v8::internal::PrintF("[liftoff] unsupported: %s\n","catch");
        }
        uVar50 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
        pcVar44 = "catch";
        goto code_r0x017cdd48;
      }
      pcVar44 = "catch already present for try";
    }
    v8::internal::wasm::Decoder::error(param_1,pcVar44);
    goto code_r0x017c49a4;
  case 8:
    if (((byte)param_1[0x50] & 1) == 0) goto code_r0x017c5340;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
    local_188._0_4_ = 0;
    local_188._4_4_ = 0;
    pbVar96 = (byte *)(*(long *)(param_1 + 0x10) + 1);
    if (pbVar96 < *(byte **)(param_1 + 0x18)) {
      uVar50 = *pbVar96 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar96 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),&uStack_180,
                            "exception index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        uStack_180 = 1;
      }
    }
    else {
      uStack_180 = 0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"expected %s","exception index");
      uVar61 = 0;
    }
    local_190 = (Decoder *)CONCAT44(local_190._4_4_,(int)uVar61);
    lVar39 = *(long *)(param_1 + 0x48);
    pbVar96 = *(byte **)(param_1 + 0x10);
    uVar50 = uStack_180 + 1;
    if ((lVar39 == 0) ||
       (lVar56 = *(long *)(lVar39 + 0x100),
       (ulong)(*(long *)(lVar39 + 0x108) - lVar56 >> 3) <= uVar61)) {
      pcVar44 = "Invalid exception index: %u";
      goto code_r0x017c8420;
    }
    local_188 = lVar56 + uVar61 * 8;
    plVar65 = *(long **)(lVar56 + uVar61 * 8);
    local_148[0] = SVar21;
    local_148[1] = SVar22;
    local_148[2] = SVar24;
    local_148[3] = SVar26;
    local_148[4] = SVar28;
    local_148[5] = SVar30;
    local_148[6] = SVar32;
    local_148[7] = SVar34;
    local_148[8] = SVar21;
    local_148[9] = SVar22;
    local_148[10] = SVar24;
    local_148[0xb] = SVar26;
    local_148[0xc] = SVar28;
    local_148[0xd] = SVar30;
    local_148[0xe] = SVar32;
    local_148[0xf] = SVar34;
    uStack_138 = (byte *)&uStack_b0;
    if (plVar65 != (long *)0x0) {
      uVar61 = plVar65[1];
      uVar93 = (uint)uVar61;
      uVar76 = (ulong)(int)uVar93;
      puVar49 = (uint *)&local_130;
      if (8 < uVar93) {
        v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
        puVar49 = (uint *)CONCAT17(local_148[7],
                                   CONCAT16(local_148[6],
                                            CONCAT15(local_148[5],
                                                     CONCAT14(local_148[4],
                                                              CONCAT13(local_148[3],
                                                                       CONCAT12(local_148[2],
                                                                                CONCAT11(local_148[1
                                                  ],local_148[0])))))));
      }
      puVar49 = puVar49 + uVar76 * 4;
      local_148[8] = SUB81(puVar49,0);
      local_148[9] = SUB81((ulong)puVar49 >> 8,0);
      local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
      if (0 < (int)uVar93) {
        uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
        do {
          uVar93 = uVar93 - 1;
          lVar39 = *(long *)pDVar4;
          bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
          if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4))
          {
            pbVar96 = *(byte **)(lVar39 + -0x10);
            uVar95 = (ulong)*(byte *)(lVar39 + -8);
            *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          }
          else {
            if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
              pbVar96 = *(byte **)pDVar101;
              if (pbVar96 < *(byte **)pDVar57) {
                bVar18 = *pbVar96;
                uVar89 = (ushort)bVar18;
                uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar95 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar96 + 1) {
                    pcVar44 = "<end>";
                    goto code_r0x017c8550;
                  }
                  uVar89 = CONCAT11(bVar18,pbVar96[1]);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017c8550:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            }
            pbVar96 = *(byte **)pDVar101;
            uVar95 = 10;
          }
          uVar100 = (uint)uVar95;
          uVar76 = uVar76 - 1;
          if (uVar100 != bVar14) {
            if ((bVar14 != 7 || uVar100 != 8) && (bVar14 != 6 || 2 < uVar100 - 7)) {
              if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar100 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar18 = *pbVar80;
                  uVar89 = (ushort)bVar18;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017c864c;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017c864c:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) == 0) {
code_r0x017c86c4:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017c86c4;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar100) goto code_r0x017c86e8;
code_r0x017c8430:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar100 < 0xb) goto code_r0x017c8430;
code_r0x017c86e8:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar93,
                           pcVar103,pcVar45,pcVar53);
              }
            }
          }
          lVar39 = CONCAT17(local_148[7],
                            CONCAT16(local_148[6],
                                     CONCAT15(local_148[5],
                                              CONCAT14(local_148[4],
                                                       CONCAT13(local_148[3],
                                                                CONCAT12(local_148[2],
                                                                         CONCAT11(local_148[1],
                                                                                  local_148[0]))))))
                           ) + uVar61;
          *(char *)(lVar39 + -8) = (char)uVar95;
          uVar61 = uVar61 - 0x10;
          *(byte **)(lVar39 + -0x10) = pbVar96;
        } while (0 < (long)uVar76);
      }
    }
    if (((byte)*pDVar11 & 1) == 0) {
      uVar61 = (ulong)((byte)*pDVar11 >> 1);
    }
    else {
      uVar61 = *(ulong *)pDVar1;
    }
    if (((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) &&
       (*pDVar3 == (Decoder)0x0)) {
      *pDVar3 = (Decoder)0x7;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","throw");
      }
      v8::internal::wasm::Decoder::errorf
                (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                             (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))),
                 "unsupported liftoff operation: %s","throw");
    }
code_r0x017d0018:
    lVar39 = *(long *)(param_1 + 0x4b8) +
             (ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) * 0x10;
    if (lVar39 != *(long *)(param_1 + 0x4c0)) {
      *(long *)pDVar4 = lVar39;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x4e0) + -0x1d0) = 2;
code_r0x017d0048:
    puVar49 = (uint *)CONCAT17(local_148[7],
                               CONCAT16(local_148[6],
                                        CONCAT15(local_148[5],
                                                 CONCAT14(local_148[4],
                                                          CONCAT13(local_148[3],
                                                                   CONCAT12(local_148[2],
                                                                            CONCAT11(local_148[1],
                                                                                     local_148[0])))
                                                         ))));
    pbVar80 = uStack_138;
    if (puVar49 != (uint *)&local_130) {
code_r0x017d0058:
      free(puVar49);
      pbVar80 = uStack_138;
    }
    break;
  case 9:
    if (((byte)param_1[0x50] & 1) == 0) goto code_r0x017c5340;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
    lVar39 = *(long *)(param_1 + 0x4c0);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar39 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar96 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if (((uint)uVar61 & 0xff) != 9) {
        uVar61 = uVar61 & 0xff;
        uVar50 = (uint)uVar61;
        if ((uVar50 != 8) && (uVar61 != 10)) {
          pbVar80 = *(byte **)pDVar101;
          if (pbVar80 < *(byte **)pDVar57) {
            bVar14 = *pbVar80;
            uVar89 = (ushort)bVar14;
            uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
            if ((uVar76 & 1) != 0) {
              if (*(byte **)pDVar57 <= pbVar80 + 1) {
                pcVar44 = "<end>";
                goto code_r0x017cc0dc;
              }
              uVar89 = CONCAT11(bVar14,pbVar80[1]);
            }
            pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            pcVar44 = "<end>";
          }
code_r0x017cc0dc:
          if (pbVar96 < *(byte **)pDVar57) {
            bVar14 = *pbVar96;
            uVar89 = (ushort)bVar14;
            uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
            if ((uVar76 & 1) == 0) {
code_r0x017cc140:
              pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              if (pbVar96 + 1 < *(byte **)pDVar57) {
                uVar89 = CONCAT11(bVar14,pbVar96[1]);
                goto code_r0x017cc140;
              }
              pcVar103 = "<end>";
            }
            if (10 < uVar50) goto code_r0x017cc160;
code_r0x017cc128:
            pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdafe0 +
                                (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
          }
          else {
            pcVar103 = "<end>";
            if (uVar50 < 0xb) goto code_r0x017cc128;
code_r0x017cc160:
            pcVar45 = "<unknown>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar96,"%s[%d] expected type %s, found %s of type %s"
                     ,pcVar44,0,"exn",pcVar103,pcVar45);
          pbVar80 = uStack_138;
        }
      }
code_r0x017cc1a0:
      DVar15 = *pDVar11;
      uStack_138 = pbVar80;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017cc1a8;
code_r0x017cb494:
      if (*(ulong *)pDVar1 != 0) goto code_r0x017cc230;
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\x02') goto code_r0x017cc1a0;
      pbVar96 = *(byte **)pDVar101;
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017cb470;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017cb470:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017cb494;
code_r0x017cc1a8:
      if ((byte)DVar15 >> 1 != 0) goto code_r0x017cc230;
    }
    if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
      *pDVar3 = (Decoder)0x7;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","rethrow");
      }
      v8::internal::wasm::Decoder::errorf
                (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                             (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))),
                 "unsupported liftoff operation: %s","rethrow");
    }
code_r0x017cc230:
    lVar56 = *(long *)(param_1 + 0x4e0);
    lVar39 = *(long *)(param_1 + 0x4b8) + (ulong)*(uint *)(lVar56 + -0x1dc) * 0x10;
    if (lVar39 != *(long *)(param_1 + 0x4c0)) {
      *(long *)pDVar4 = lVar39;
    }
code_r0x017cc254:
    *(undefined1 *)(lVar56 + -0x1d0) = 2;
    goto LAB_017c4a30;
  case 10:
    if (((byte)param_1[0x50] & 1) == 0) goto code_r0x017c5340;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 1;
    lVar39 = *(long *)(param_1 + 0x10);
    pbVar96 = (byte *)(lVar39 + 1);
    if (pbVar96 < *(byte **)(param_1 + 0x18)) {
      uVar50 = *pbVar96 & 0x7f;
      if ((char)*pbVar96 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(lVar39 + 2),puVar67,"branch depth",uVar50);
      }
      else {
        local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"expected %s","branch depth");
      uVar50 = 0;
    }
    local_148[0] = SUB41(uVar50,0);
    local_148[1] = SUB41(uVar50 >> 8,0);
    local_148[2] = SUB41(uVar50 >> 0x10,0);
    local_148[3] = SUB41(uVar50 >> 0x18,0);
    uStack_138._0_4_ = 0;
    uStack_138._4_4_ = 0;
    lVar39 = lVar39 + (ulong)CONCAT13(local_148[7],
                                      CONCAT12(local_148[6],CONCAT11(local_148[5],local_148[4])));
    pbVar96 = (byte *)(lVar39 + 1);
    if (pbVar96 < *(byte **)pDVar57) {
      uVar50 = *pbVar96 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar96 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(lVar39 + 2),(uint *)&local_130,"exception index",
                            uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_130 = CONCAT44(local_130._4_4_,1);
      }
    }
    else {
      local_130 = (ulong)local_130._4_4_ << 0x20;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"expected %s","exception index");
      uVar61 = 0;
    }
    uVar76 = (ulong)CONCAT13(local_148[3],CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0]))
                            );
    uVar50 = CONCAT13(local_148[7],CONCAT12(local_148[6],CONCAT11(local_148[5],local_148[4])));
    local_148[8] = SUB81(uVar61,0);
    local_148[9] = SUB81(uVar61 >> 8,0);
    local_148[10] = SUB81(uVar61 >> 0x10,0);
    local_148[0xb] = SUB81(uVar61 >> 0x18,0);
    local_128 = CONCAT44(local_128._4_4_,(uint)local_130 + uVar50);
    lVar39 = *(long *)(param_1 + 0x4e0);
    pbVar96 = *(byte **)(param_1 + 0x10);
    uVar95 = (lVar39 - *(long *)(param_1 + 0x4d8) >> 5) * -0x1111111111111111;
    if (uVar95 < uVar76 || uVar95 - uVar76 == 0) {
      pbVar80 = pbVar96 + 1;
      pcVar44 = "invalid branch depth: %u";
    }
    else {
      lVar56 = *(long *)(param_1 + 0x48);
      pbVar80 = pbVar96 + 1;
      if ((lVar56 != 0) &&
         (uVar61 < (ulong)(*(long *)(lVar56 + 0x108) - *(long *)(lVar56 + 0x100) >> 3))) {
        uStack_138 = (byte *)(*(long *)(lVar56 + 0x100) + uVar61 * 8);
        lVar66 = *(long *)pDVar4;
        lVar56 = lVar39 + uVar76 * -0x1e0;
        if ((ulong)*(uint *)(lVar39 + -0x1dc) < (ulong)(lVar66 - *(long *)this_00 >> 4)) {
          pbStack_318 = *(byte **)(lVar66 + -0x10);
          uVar61 = *(ulong *)(lVar66 + -8);
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar66 + -0x10);
          if (((uint)uVar61 & 0xff) == 9) {
            uVar61 = 9;
          }
          else {
            uVar61 = uVar61 & 0xff;
            uVar50 = (uint)uVar61;
            if ((uVar50 != 8) && (uVar61 != 10)) {
              if (pbVar96 < *(byte **)pDVar57) {
                bVar14 = *pbVar96;
                uVar89 = (ushort)bVar14;
                uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar76 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar80) {
                    pcVar44 = "<end>";
                    goto code_r0x017ce758;
                  }
                  uVar89 = CONCAT11(bVar14,*pbVar80);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017ce758:
              if (pbStack_318 < *(byte **)pDVar57) {
                bVar14 = *pbStack_318;
                uVar89 = (ushort)bVar14;
                uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar76 & 1) == 0) {
code_r0x017ce7c0:
                  pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  if (pbStack_318 + 1 < *(byte **)pDVar57) {
                    uVar89 = CONCAT11(bVar14,pbStack_318[1]);
                    goto code_r0x017ce7c0;
                  }
                  pcVar103 = "<end>";
                }
                if (10 < uVar50) goto code_r0x017ce7e0;
code_r0x017ce7a4:
                pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdafe0 +
                                    (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
              }
              else {
                pcVar103 = "<end>";
                if (uVar50 < 0xb) goto code_r0x017ce7a4;
code_r0x017ce7e0:
                pcVar45 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbStack_318,
                         "%s[%d] expected type %s, found %s of type %s",pcVar44,0,"exn",pcVar103,
                         pcVar45);
            }
          }
        }
        else if (*(char *)(lVar39 + -0x1d0) == '\x02') {
          uVar61 = 10;
          pbStack_318 = pbVar96;
        }
        else {
          if (pbVar96 < *(byte **)pDVar57) {
            bVar14 = *pbVar96;
            uVar89 = (ushort)bVar14;
            uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
            if ((uVar61 & 1) != 0) {
              if (*(byte **)pDVar57 <= pbVar80) {
                pcVar44 = "<end>";
                goto code_r0x017cde10;
              }
              uVar89 = CONCAT11(bVar14,*pbVar80);
            }
            pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            pcVar44 = "<end>";
          }
code_r0x017cde10:
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
          uVar61 = 10;
          pbStack_318 = *(byte **)(param_1 + 0x10);
        }
        plVar65 = *(long **)uStack_138;
        lVar39 = plVar65[1];
        if (lVar39 != 0) {
          lVar66 = 0;
          do {
            uVar55 = *(undefined1 *)(plVar65[2] + *plVar65 + lVar66);
            local_190 = (Decoder *)CONCAT71(local_190._1_7_,uVar55);
            puVar63 = *(undefined8 **)(param_1 + 0x4c0);
            if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
              uVar77 = *(undefined8 *)pDVar101;
              *(undefined1 *)(puVar63 + 1) = uVar55;
              *puVar63 = uVar77;
              *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
            }
            else {
              std::__ndk1::
              vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
              ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                        (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
            }
            lVar66 = lVar66 + 1;
          } while (lVar39 != lVar66);
        }
        puVar49 = (uint *)(lVar56 + -0x1c8);
        if (*(char *)(lVar56 + -0x1e0) != '\x03') {
          puVar49 = (uint *)(lVar56 + -0x1a8);
        }
        if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\0') {
          uVar50 = 1;
          uVar76 = FUN_017e07f4(param_1,puVar49,1);
          pbVar80 = uStack_138;
          if ((uVar76 & 1) != 0) goto code_r0x017ce9b8;
          break;
        }
        uVar50 = *puVar49;
        if (uVar50 == 0) {
code_r0x017ce938:
          if (*pDVar3 == (Decoder)0x0) {
            *pDVar3 = (Decoder)0x7;
            if (v8::internal::FLAG_trace_liftoff != '\0') {
              v8::internal::PrintF("[liftoff] unsupported: %s\n","br_on_exn");
            }
            v8::internal::wasm::Decoder::errorf
                      (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                   (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)
                                                   )),"unsupported liftoff operation: %s",
                       "br_on_exn");
          }
          puVar49 = (uint *)(lVar56 + -0x1c8);
          if (*(char *)(lVar56 + -0x1e0) != '\x03') {
            puVar49 = (uint *)(lVar56 + -0x1a8);
          }
          *(undefined1 *)(puVar49 + 6) = 1;
code_r0x017ce9b8:
          iVar37 = (int)local_128;
joined_r0x017ce9c4:
          if (lVar39 != 0) {
            do {
              if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) <
                  (ulong)(*(long *)pDVar4 - *(long *)this_00 >> 4)) {
                *(long *)pDVar4 = *(long *)pDVar4 + -0x10;
              }
              else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') goto code_r0x017cea10;
              lVar39 = lVar39 + -1;
              if (lVar39 == 0) break;
            } while( true );
          }
          local_190._1_7_ = (undefined7)((ulong)local_190 >> 8);
          local_190 = (Decoder *)CONCAT71(local_190._1_7_,9);
          puVar63 = *(undefined8 **)(param_1 + 0x4c0);
          uVar50 = iVar37 + 1;
          if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
            uVar77 = *(undefined8 *)pDVar101;
            *(undefined1 *)(puVar63 + 1) = 9;
            *puVar63 = uVar77;
            lVar39 = *(long *)pDVar4 + 0x10;
            *(long *)pDVar4 = lVar39;
          }
          else {
            std::__ndk1::
            vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
            ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                      (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
            lVar39 = *(long *)pDVar4;
          }
          *(char *)(lVar39 + -8) = (char)uVar61;
          *(byte **)(lVar39 + -0x10) = pbStack_318;
          pbVar80 = uStack_138;
          break;
        }
        if ((uint)((int)((ulong)(*(long *)pDVar4 - *(long *)this_00) >> 4) -
                  *(int *)(*(long *)pDVar2 + -0x1dc)) < uVar50) {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,*(char **)(param_1 + 0x10),
                     "expected %u elements on the stack for br to @%d, found %u",(ulong)uVar50,
                     (ulong)(uint)(*(int *)(lVar56 + -0x1d8) - *(int *)(param_1 + 8)));
        }
        else {
          uVar76 = FUN_017e06d0(param_1);
          if ((uVar76 & 1) != 0) goto code_r0x017ce938;
        }
        uVar50 = 1;
        pbVar80 = uStack_138;
        break;
      }
      pbVar80 = pbVar80 + uVar50;
      pcVar44 = "Invalid exception index: %u";
      uVar76 = uVar61;
    }
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)pbVar80,pcVar44,uVar76);
    goto code_r0x017c49a4;
  case 0xb:
    lVar39 = *(long *)(param_1 + 0x4e0);
    if (*(long *)(param_1 + 0x4d8) == lVar39) {
      v8::internal::wasm::Decoder::error(param_1,"end does not match any if, try, or block");
      goto LAB_017c4a30;
    }
    pcVar44 = (char *)(lVar39 + -0x1e0);
    if (*pcVar44 == '\0') {
      uVar50 = *(uint *)(lVar39 + -0x1a8);
      if (uVar50 != *(uint *)(lVar39 + -0x1c8)) {
        pbVar96 = *(byte **)(lVar39 + -0x1d8);
        pcVar44 = "start-arity and end-arity of one-armed if must match";
        goto code_r0x017c8088;
      }
      if (uVar50 != 0) {
        lVar56 = 0;
        uVar76 = 0;
joined_r0x017c6eb8:
        plVar65 = (long *)(lVar39 + -0x1c0);
        plVar72 = (long *)(lVar39 + -0x1a0);
        if (uVar50 != 1) {
          plVar65 = (long *)(*(long *)(lVar39 + -0x1c0) + lVar56);
          plVar72 = (long *)(*(long *)(lVar39 + -0x1a0) + lVar56);
        }
        bVar14 = *(byte *)(plVar65 + 1);
        bVar18 = *(byte *)(plVar72 + 1);
        if (bVar18 == bVar14) goto code_r0x017c6ec0;
        iVar37 = (int)(char)bVar14;
        if (((iVar37 == 8 && bVar18 == 9) || (bVar18 == 6 && (iVar37 - 7U & 0xff) < 3)) ||
           (iVar37 == 8 && bVar18 == 7)) goto code_r0x017c6ec0;
        if (bVar18 < 0xb) {
          pcVar44 = (&PTR_s_<stmt>_01cdb088)[(char)bVar18];
        }
        else {
          pcVar44 = "<unknown>";
        }
        if (bVar14 < 0xb) {
          pcVar45 = (&PTR_s_<stmt>_01cdb088)[(char)bVar14];
        }
        else {
          pcVar45 = "<unknown>";
        }
        pcVar103 = "type error in merge[%u] (expected %s, got %s)";
code_r0x017cba60:
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,pcVar103,uVar76,pcVar44,pcVar45);
        goto code_r0x017c49a4;
      }
    }
    else if (*pcVar44 == '\x04') {
      pcVar44 = "missing catch or catch-all in try";
code_r0x017c8088:
      v8::internal::wasm::Decoder::error(param_1,pbVar96,pcVar44);
      goto LAB_017c4a30;
    }
code_r0x017c6f70:
    uVar61 = FUN_017d12b4(param_1);
    if ((uVar61 & 1) == 0) goto code_r0x017c49a4;
    if (*(long *)(param_1 + 0x4e0) - *(long *)(param_1 + 0x4d8) == 0x1e0) {
      pbVar96 = (byte *)(*(long *)pDVar101 + 1);
      if (pbVar96 != *(byte **)pDVar57) {
        pcVar44 = "trailing code after function end";
        pbVar80 = uStack_138;
        goto code_r0x017c65fc;
      }
      FUN_017d134c();
      lVar56 = *(long *)(param_1 + 0x4d8);
      lVar39 = *(long *)(param_1 + 0x4e0);
      while (lVar39 != lVar56) {
        lVar39 = lVar39 + -0x1e0;
        FUN_017c3e78(lVar39);
      }
      uVar50 = 1;
      *(long *)pDVar2 = lVar56;
      pbVar80 = uStack_138;
      break;
    }
    if (((byte)*pDVar11 & 1) == 0) {
      if ((byte)*pDVar11 >> 1 != 0) goto code_r0x017c9488;
code_r0x017c947c:
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x3b0) != '\0') goto code_r0x017c9488;
      if (*pcVar44 != '\x03') {
        if (*pcVar44 == '\0') {
          if (*(char *)(lVar39 + -400) == '\0') {
            plVar65 = (long *)(lVar39 + -0x188);
            if (*(char *)(lVar39 + -0x1d0) != '\0') {
              v8::internal::Assembler::bind((Label *)this);
              pCVar98 = (CacheState *)(*plVar65 + 8);
              goto code_r0x017ce720;
            }
            v8::internal::wasm::LiftoffAssembler::CacheState::InitMerge
                      ((CacheState *)(lVar39 + -0x180),(int)*plVar65 + 8,*(uint *)(param_1 + 0x230),
                       0);
            v8::internal::wasm::LiftoffAssembler::MergeFullStackWith
                      ((LiftoffAssembler *)this,(CacheState *)(lVar39 + -0x180),this_01);
            v8::internal::Assembler::b((Assembler *)this,*(Label **)(lVar39 + -8));
            v8::internal::Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
            v8::internal::Assembler::bind((Label *)this);
            lVar56 = *plVar65;
          }
          else {
            if (*(char *)(lVar39 + -0x1d0) == '\0') {
              v8::internal::wasm::LiftoffAssembler::MergeFullStackWith
                        ((LiftoffAssembler *)this,(CacheState *)(lVar39 + -0x180),this_01);
              v8::internal::Assembler::b((Assembler *)this,*(Label **)(lVar39 + -8));
              v8::internal::Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
            }
            v8::internal::Assembler::bind((Label *)this);
            lVar56 = *(long *)(lVar39 + -0x188);
          }
          pCVar98 = (CacheState *)(lVar39 + -0x180);
          v8::internal::wasm::LiftoffAssembler::MergeFullStackWith
                    ((LiftoffAssembler *)this,pCVar98,(CacheState *)(lVar56 + 8));
code_r0x017ce720:
          v8::internal::wasm::LiftoffAssembler::CacheState::Steal(this_01,pCVar98);
        }
        else if (*(char *)(lVar39 + -400) != '\0') {
          if (*(char *)(lVar39 + -0x1d0) == '\0') {
            v8::internal::wasm::LiftoffAssembler::MergeFullStackWith
                      ((LiftoffAssembler *)this,(CacheState *)(lVar39 + -0x180),this_01);
          }
          pCVar98 = (CacheState *)(lVar39 + -0x180);
          goto code_r0x017ce720;
        }
        if (-1 < **(int **)(lVar39 + -8)) {
          v8::internal::Assembler::bind((Label *)this);
        }
        goto code_r0x017c9488;
      }
    }
    else {
      if (*(ulong *)pDVar1 == 0) goto code_r0x017c947c;
code_r0x017c9488:
      if (*pcVar44 != '\x03') {
        FUN_017d1060(param_1,pcVar44,lVar39 + -0x1a8);
      }
    }
    if ((*(char *)(lVar39 + -0x1d0) == '\0') || (*(char *)(lVar39 + -400) != '\0')) {
      bVar35 = true;
    }
    else {
      bVar35 = *pcVar44 == '\0';
    }
    lVar39 = *(long *)pDVar2;
    lVar56 = lVar39 + -0x1e0;
    FUN_017c3e78(lVar56);
    *(long *)pDVar2 = lVar56;
    pbVar80 = uStack_138;
    if (bVar35) {
      uVar50 = 1;
    }
    else {
      pcVar44 = (char *)(lVar39 + -0x3b0);
      uVar50 = 1;
      if (*pcVar44 == '\0') {
        *pcVar44 = '\x01';
        goto LAB_017c4a30;
      }
    }
    break;
  case 0xc:
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,puVar67,"branch depth",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","branch depth");
      uVar61 = 0;
    }
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    lVar39 = *(long *)(param_1 + 0x4e0);
    uVar76 = (lVar39 - *(long *)(param_1 + 0x4d8) >> 5) * -0x1111111111111111;
    if (uVar76 < uVar61 || uVar76 - uVar61 == 0) {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)(*(long *)(param_1 + 0x10) + 1),"invalid branch depth: %u"
                );
      goto LAB_017c4a30;
    }
    lVar56 = lVar39 + uVar61 * -0x1e0;
    pcVar44 = (char *)(lVar56 + -0x1e0);
    puVar87 = (uint *)(lVar56 + -0x1c8);
    puVar49 = (uint *)(lVar56 + -0x1a8);
    puVar60 = puVar87;
    if (*pcVar44 != '\x03') {
      puVar60 = puVar49;
    }
    if (*(char *)(lVar39 + -0x1d0) == '\0') {
      uVar50 = *puVar60;
      if (uVar50 != 0) {
        if ((uint)((int)((ulong)(*(long *)pDVar4 - *(long *)this_00) >> 4) -
                  *(int *)(lVar39 + -0x1dc)) < uVar50) {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,*(char **)(param_1 + 0x10),
                     "expected %u elements on the stack for br to @%d, found %u",(ulong)uVar50,
                     (ulong)(uint)(*(int *)(lVar56 + -0x1d8) - *(int *)(param_1 + 8)));
        }
        else {
          uVar61 = FUN_017e06d0(param_1);
          if ((uVar61 & 1) != 0) {
            uVar61 = (ulong)CONCAT13(local_148[3],
                                     CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])));
            uVar76 = (*(long *)(param_1 + 0x4e0) - *(long *)(param_1 + 0x4d8) >> 5) *
                     -0x1111111111111111;
            goto code_r0x017c7c44;
          }
        }
code_r0x017d0080:
        uVar50 = 1;
        pbVar80 = uStack_138;
        break;
      }
code_r0x017c7c44:
      if (uVar76 - 1 == uVar61) {
        FUN_017d134c(param_1);
      }
      else {
        cVar83 = *pcVar44;
        puVar60 = puVar87;
        if (cVar83 != '\x03') {
          puVar60 = puVar49;
        }
        if ((char)puVar60[6] == '\0') {
          v8::internal::wasm::LiftoffAssembler::CacheState::InitMerge
                    ((CacheState *)(lVar56 + -0x180),(uint)this_01,*(uint *)(param_1 + 0x230),
                     *puVar60);
          cVar83 = *pcVar44;
        }
        puVar60 = puVar87;
        if (cVar83 != '\x03') {
          puVar60 = puVar49;
        }
        v8::internal::wasm::LiftoffAssembler::MergeStackWith
                  ((LiftoffAssembler *)this,(CacheState *)(lVar56 + -0x180),*puVar60);
        v8::internal::Assembler::b((Assembler *)this,*(Label **)(lVar56 + -8));
        v8::internal::Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
        if (*pcVar44 != '\x03') {
          puVar87 = puVar49;
        }
        *(undefined1 *)(puVar87 + 6) = 1;
      }
    }
    else {
      uVar61 = FUN_017e07f4(param_1,puVar60,0);
      if ((uVar61 & 1) == 0) goto code_r0x017d0080;
    }
    uVar50 = CONCAT13(local_148[7],CONCAT12(local_148[6],CONCAT11(local_148[5],local_148[4]))) + 1;
    lVar39 = *(long *)(param_1 + 0x4b8) +
             (ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) * 0x10;
    if (lVar39 != *(long *)(param_1 + 0x4c0)) {
      *(long *)pDVar4 = lVar39;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x4e0) + -0x1d0) = 2;
    pbVar80 = uStack_138;
    break;
  case 0xd:
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,(uint *)((ulong)&uStack_1d8 | 4),"branch depth",
                            uVar50);
      }
      else {
        uStack_1d8 = 0x100000000;
      }
    }
    else {
      uStack_1d8 = uStack_1d8 & 0xffffffff;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","branch depth");
      uVar50 = 0;
    }
    uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar50);
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar96 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
        pbVar80 = *(byte **)pDVar101;
        if (pbVar80 < *(byte **)pDVar57) {
          bVar14 = *pbVar80;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar80 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017c973c;
            }
            uVar89 = CONCAT11(bVar14,pbVar80[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017c973c:
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) == 0) {
code_r0x017c97a8:
            pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            if (pbVar96 + 1 < *(byte **)pDVar57) {
              uVar89 = CONCAT11(bVar14,pbVar96[1]);
              goto code_r0x017c97a8;
            }
            pcVar103 = "<end>";
          }
          if (10 < (uint)uVar61) goto code_r0x017c9f64;
code_r0x017c9790:
          pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                              (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
        }
        else {
          pcVar103 = "<end>";
          if ((uint)uVar61 < 0xb) goto code_r0x017c9790;
code_r0x017c9f64:
          pcVar45 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s[%d] expected type %s, found %s of type %s",
                   pcVar44,0,"i32",pcVar103,pcVar45);
      }
    }
    else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
      pbVar96 = *(byte **)pDVar101;
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017c97c4;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017c97c4:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
    }
    if (((byte)*pDVar11 & 1) != 0) {
      if (*(ulong *)pDVar1 == 0) goto code_r0x017c9fbc;
      goto LAB_017c4a30;
    }
    if ((byte)*pDVar11 >> 1 != 0) goto LAB_017c4a30;
code_r0x017c9fbc:
    lVar39 = *(long *)(param_1 + 0x4e0);
    uVar76 = uStack_1d8 & 0xffffffff;
    uVar61 = (lVar39 - *(long *)(param_1 + 0x4d8) >> 5) * -0x1111111111111111;
    if (uVar61 < uVar76 || uVar61 - uVar76 == 0) {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)(*(long *)(param_1 + 0x10) + 1),"invalid branch depth: %u"
                 ,uVar76);
      goto LAB_017c4a30;
    }
    lVar56 = lVar39 + uVar76 * -0x1e0;
    puVar49 = (uint *)(lVar56 + -0x1c8);
    if (*(char *)(lVar56 + -0x1e0) != '\x03') {
      puVar49 = (uint *)(lVar56 + -0x1a8);
    }
    if (*(char *)(lVar39 + -0x1d0) == '\0') {
      uVar50 = *puVar49;
      if (uVar50 != 0) {
        if ((uint)((int)((ulong)(*(long *)pDVar4 - *(long *)this_00) >> 4) -
                  *(int *)(lVar39 + -0x1dc)) < uVar50) {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,*(char **)(param_1 + 0x10),
                     "expected %u elements on the stack for br to @%d, found %u",(ulong)uVar50,
                     (ulong)(uint)(*(int *)(lVar56 + -0x1d8) - *(int *)(param_1 + 8)));
        }
        else {
          uVar61 = FUN_017e06d0(param_1);
          if ((uVar61 & 1) != 0) {
            uVar76 = uStack_1d8 & 0xffffffff;
            goto code_r0x017ca0a0;
          }
        }
        goto LAB_017c4a30;
      }
code_r0x017ca0a0:
      uStack_b0 = (Decoder *)0x0;
      uVar61 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)this,0);
      if (0x4f < *(uint *)(param_1 + 0x3c8)) goto LAB_017d09f4;
      uVar74 = 1;
      switch(*(uint *)(param_1 + 0x3c8)) {
      case 0:
        local_190 = (Decoder *)(uVar61 & 0xff | 0x2000000000);
        local_118 = (Decoder *)0x200000001f;
        local_188._0_4_ = 0;
        local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_128 = 0;
        local_120 = CONCAT71(local_120._1_7_,0x13);
        uStack_108 = 0xffffffff;
        local_110 = 0;
        v8::internal::TurboAssembler::AddSubMacro
                  ((TurboAssembler *)this,&DAT_01a63d34,&local_190,local_148,1,0x40000000);
        v8::internal::TurboAssembler::B((TurboAssembler *)this,&uStack_b0,0);
        goto code_r0x017cbf24;
      default:
        goto LAB_017d09f4;
      case 0x45:
        local_190 = (Decoder *)(uVar61 & 0xff | 0x2000000000);
        local_118 = (Decoder *)0x200000001f;
        local_188._0_4_ = 0;
        local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_128 = 0;
        local_120 = CONCAT71(local_120._1_7_,0x13);
        uStack_108 = 0xffffffff;
        local_110 = 0;
        v8::internal::TurboAssembler::AddSubMacro
                  ((TurboAssembler *)this,&DAT_01a63d34,&local_190,local_148,1,0x40000000);
        v8::internal::TurboAssembler::B((TurboAssembler *)this,&uStack_b0,1);
        goto code_r0x017cbf1c;
      case 0x46:
        break;
      case 0x47:
        uVar74 = 0;
        break;
      case 0x48:
        uVar74 = 10;
        break;
      case 0x49:
        uVar74 = 2;
        break;
      case 0x4a:
        uVar74 = 0xd;
        break;
      case 0x4b:
        uVar74 = 9;
        break;
      case 0x4c:
        uVar74 = 0xc;
        break;
      case 0x4d:
        uVar74 = 8;
        break;
      case 0x4e:
        uVar74 = 0xb;
        break;
      case 0x4f:
        uVar74 = 3;
      }
      uVar95 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                         ((LiftoffAssembler *)this,1L << (uVar61 & 0x3f));
      v8::internal::wasm::LiftoffAssembler::emit_cond_jump
                (this,uVar74,&uStack_b0,1,uVar95 & 0xff | 0x4000000000,0,
                 uVar61 & 0xff | 0x4000000000,0);
code_r0x017cbf1c:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
code_r0x017cbf24:
      FUN_017e0b78(this,param_1,uVar76);
      v8::internal::Assembler::bind((Label *)this);
      puVar49 = (uint *)(lVar56 + -0x1c8);
      if (*(char *)(lVar56 + -0x1e0) != '\x03') {
        puVar49 = (uint *)(lVar56 + -0x1a8);
      }
      *(undefined1 *)(puVar49 + 6) = 1;
    }
    else {
      uVar50 = 1;
      uVar61 = FUN_017e07f4(param_1,puVar49,1);
      pbVar80 = uStack_138;
      if ((uVar61 & 1) == 0) break;
    }
    uVar50 = uStack_1d8._4_4_ + 1;
    pbVar80 = uStack_138;
    break;
  case 0xe:
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,(uint *)local_148,"table count",uVar50);
        uVar61 = (ulong)CONCAT13(local_148[3],
                                 CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])));
      }
      else {
        uVar61 = 1;
        local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","table count");
      uVar61 = 0;
      uVar50 = 0;
    }
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar96 = *(byte **)(lVar39 + -0x10);
      uVar76 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar76 & 0xff) == 1) || (uVar76 = uVar76 & 0xff, uVar76 == 10))
      goto code_r0x017c9718;
      pbVar58 = *(byte **)pDVar101;
      if (pbVar58 < *(byte **)pDVar57) {
        bVar14 = *pbVar58;
        uVar89 = (ushort)bVar14;
        uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar95 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar58 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017c9680;
          }
          uVar89 = CONCAT11(bVar14,pbVar58[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017c9680:
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar95 & 1) == 0) {
code_r0x017c96ec:
          pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          if (pbVar96 + 1 < *(byte **)pDVar57) {
            uVar89 = CONCAT11(bVar14,pbVar96[1]);
            goto code_r0x017c96ec;
          }
          pcVar103 = "<end>";
        }
        if (10 < (uint)uVar76) goto code_r0x017c98e8;
code_r0x017c96d4:
        pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                            (-(uVar76 >> 7) & 0xfffffffffffff800 | uVar76 << 3));
      }
      else {
        pcVar103 = "<end>";
        if ((uint)uVar76 < 0xb) goto code_r0x017c96d4;
code_r0x017c98e8:
        pcVar45 = "<unknown>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s[%d] expected type %s, found %s of type %s",
                 pcVar44,0,"i32",pcVar103,pcVar45);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017c9720;
code_r0x017c9920:
      if (*(ulong *)pDVar1 != 0) goto LAB_017c4a30;
    }
    else {
      if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
        pbVar96 = *(byte **)pDVar101;
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar96 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017c9708;
            }
            uVar89 = CONCAT11(bVar14,pbVar96[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017c9708:
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
      }
code_r0x017c9718:
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017c9920;
code_r0x017c9720:
      if ((byte)DVar15 >> 1 != 0) goto LAB_017c4a30;
    }
    if (uVar50 < 0xfff1) {
      pcVar44 = *(char **)pDVar101;
      if (uVar50 <= (uint)(*(int *)pDVar57 - (int)pcVar44)) {
        lVar39 = *(long *)(param_1 + 0x4e0) - *(long *)(param_1 + 0x4d8);
        if (lVar39 + 0x1dfU < 0x3bf) {
          pbStack_318 = (void *)0x0;
        }
        else {
          if (lVar39 < -0x1df) {
code_r0x017d0a00:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar95 = lVar39 / 0x1e0;
          uVar78 = uVar95 - 1 >> 6;
          pbStack_318 = operator_new(uVar78 * 8 + 8);
          __n = (uVar95 >> 6) * 8;
          uVar76 = 0;
          if (0x40 < uVar95) {
            uVar76 = uVar78;
          }
          *(undefined8 *)((long)pbStack_318 + uVar76 * 8) = 0;
          memset(pbStack_318,0,__n);
          if ((uVar95 & 0x3f) != 0) {
            *(ulong *)((long)pbStack_318 + __n) =
                 *(ulong *)((long)pbStack_318 + __n) &
                 (0xffffffffffffffffU >> (-(uVar95 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
          }
        }
        pbVar79 = (byte *)0x0;
        uVar93 = 0;
        pbVar96 = pbVar80 + uVar61;
        pbVar82 = (byte *)0x0;
        pbVar58 = pbVar96;
        do {
          pbVar97 = pbVar82;
          uVar61 = (long)pbVar79 - (long)pbVar97;
          while( true ) {
            do {
              uVar100 = uVar93;
              pbVar79 = pbVar58;
              if (((byte)*pDVar11 & 1) == 0) {
                uVar76 = (ulong)((byte)*pDVar11 >> 1);
              }
              else {
                uVar76 = *(ulong *)pDVar1;
              }
              uVar92 = (uint)uVar61;
              if ((uVar50 < uVar100) || (uVar76 != 0)) goto code_r0x017c9e1c;
              uVar93 = uVar100 + 1;
              if (pbVar79 < *(byte **)pDVar57) {
                uVar38 = *pbVar79 & 0x7f;
                if ((char)*pbVar79 < '\0') {
                  uVar38 = v8::internal::wasm::Decoder::
                           read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                                     (param_1,pbVar79 + 1,(uint *)local_148,"branch table entry",
                                      uVar38);
                  uVar76 = (ulong)CONCAT13(local_148[3],
                                           CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])
                                                   ));
                }
                else {
                  uVar76 = 1;
                  local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                                 0x1;
                  local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                                 0x0;
                  local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                                 0x0;
                  local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                                 0x0;
                }
              }
              else {
                local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                               0x0;
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar79,"expected %s","branch table entry");
                uVar76 = 0;
                uVar38 = 0;
              }
              lVar39 = *(long *)(param_1 + 0x4e0);
              uVar95 = (ulong)uVar38;
              uVar78 = (lVar39 - *(long *)(param_1 + 0x4d8) >> 5) * -0x1111111111111111;
              pbVar58 = pbVar79 + uVar76;
              if (uVar78 < uVar95 || uVar78 - uVar95 == 0) {
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar79,
                           "improper branch in br_table target %u (depth %u)",(ulong)uVar100);
                pbVar79 = pbVar58;
                uVar100 = uVar93;
                goto code_r0x017c9e1c;
              }
              uVar76 = *(ulong *)((long)pbStack_318 + (ulong)(uVar38 >> 6) * 8);
              uVar78 = 1L << (uVar95 & 0x3f);
            } while ((uVar76 & uVar78) != 0);
            *(ulong *)((long)pbStack_318 + (ulong)(uVar38 >> 6) * 8) = uVar76 | uVar78;
            lVar39 = lVar39 + uVar95 * -0x1e0;
            puVar49 = (uint *)(lVar39 + -0x1c8);
            if (*(char *)(lVar39 + -0x1e0) != '\x03') {
              puVar49 = (uint *)(lVar39 + -0x1a8);
            }
            uVar38 = *puVar49;
            uVar76 = (ulong)uVar38;
            if (uVar100 == 0) break;
            if (uVar38 != uVar92) {
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar79,
                         "inconsistent arity in br_table target %u (previous was %zu, this one is %u)"
                         ,(ulong)uVar100,uVar61,uVar76);
              pbVar79 = pbVar58;
              uVar100 = uVar93;
code_r0x017c9e1c:
              lVar39 = *(long *)pDVar2;
              if (*(char *)(lVar39 + -0x1d0) != '\0') {
                if ((int)uVar92 < 1) goto code_r0x017d03b8;
                lVar56 = 0;
                goto code_r0x017d011c;
              }
              if ((int)((ulong)(*(long *)pDVar4 - *(long *)this_00) >> 4) -
                  *(int *)(lVar39 + -0x1dc) < (int)uVar92) {
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,*(char **)(param_1 + 0x10),
                           "expected %u elements on the stack for branch to @%d, found %u",
                           uVar61 & 0xffffffff,
                           (ulong)(uint)(*(int *)(lVar39 + -0x1d8) - *(int *)(param_1 + 8)));
                uVar50 = 1;
                goto joined_r0x017c9e94;
              }
              if ((int)uVar92 < 1) goto code_r0x017d03b8;
              uVar76 = 0;
              pbVar58 = (byte *)(*(long *)pDVar4 + (long)(int)uVar92 * -0x10 + 8);
              goto code_r0x017c9ecc;
            }
            if (0 < (int)uVar38) {
              lVar56 = uVar76 * 0x10;
              lVar39 = 0;
              puVar60 = puVar49 + 2;
              pbVar82 = pbVar97;
              while( true ) {
                bVar14 = *pbVar82;
                puVar87 = puVar60;
                if ((int)uVar76 != 1) {
                  puVar87 = (uint *)(*(long *)puVar60 + lVar39);
                }
                bVar18 = (byte)puVar87[2];
                uVar38 = (uint)bVar14;
                uVar70 = (uint)bVar18;
                if ((*(uint *)(param_1 + 0x50) >> 5 & 1) == 0) {
                  if (uVar38 != uVar70) {
                    if (uVar38 < 0xb) {
                      pcVar44 = (&PTR_s_<stmt>_01cdb088)[(char)bVar14];
                    }
                    else {
                      pcVar44 = "<unknown>";
                    }
                    if ((int)uVar76 != 1) {
                      puVar60 = (uint *)(*(long *)puVar60 + lVar39);
                    }
                    if ((ulong)(long)(char)puVar60[2] < 0xb) {
                      pcVar103 = (&PTR_s_<stmt>_01cdb088)[(char)puVar60[2]];
                    }
                    else {
                      pcVar103 = "<unknown>";
                    }
                    v8::internal::wasm::Decoder::errorf
                              ((uchar *)param_1,(char *)pbVar79,
                               "inconsistent type in br_table target %u (previous was %s, this one is %s)"
                               ,(ulong)uVar100,pcVar44,pcVar103);
                    pbVar79 = pbVar58;
                    uVar100 = uVar93;
                    goto code_r0x017c9e1c;
                  }
                }
                else {
                  uVar71 = (uint)bVar18;
                  bVar73 = bVar14;
                  if ((((uVar38 != uVar71) && (bVar73 = 10, uVar38 < 10)) &&
                      ((1 << (ulong)(uVar38 & 0x1f) & 0x2c0U) != 0)) &&
                     ((bVar73 = 10, uVar71 < 10 && ((1 << (ulong)(uVar71 & 0x1f) & 0x2c0U) != 0))))
                  {
                    bVar73 = bVar14;
                    if (((2 < uVar38 - 7 || uVar70 != 6) && (uVar38 != 8 || uVar70 != 7)) &&
                       (((uVar38 != 8 || (bVar73 = 8, uVar70 != 9)) &&
                        (bVar73 = bVar18,
                        (uVar38 != 9 || uVar70 != 8) &&
                        ((uVar38 != 7 || uVar70 != 8) && (uVar38 != 6 || 2 < uVar70 - 7)))))) {
                      bVar73 = 8;
                    }
                  }
                  *pbVar82 = bVar73;
                }
                if (lVar56 + -0x10 == lVar39) break;
                uVar76 = (ulong)*puVar49;
                lVar39 = lVar39 + 0x10;
                pbVar82 = pbVar82 + 1;
              }
            }
          }
          if (uVar38 == 0) {
            pbVar79 = (byte *)0x0;
            pbVar82 = (byte *)0x0;
          }
          else {
            if ((int)uVar38 < 0) goto code_r0x017d0a00;
            uVar61 = (ulong)(int)uVar38;
            pbVar82 = operator_new(uVar61);
            pbVar79 = pbVar82 + uVar61;
            memset(pbVar82,0,uVar61);
            lVar39 = 0;
            pbVar69 = pbVar82;
            do {
              puVar60 = puVar49 + 2;
              if (*puVar49 != 1) {
                puVar60 = (uint *)(*(long *)(puVar49 + 2) + lVar39);
              }
              lVar39 = lVar39 + 0x10;
              *pbVar69 = (byte)puVar60[2];
              pbVar69 = pbVar69 + 1;
            } while (uVar76 * 0x10 - lVar39 != 0);
          }
          if (pbVar97 != (byte *)0x0) {
            operator_delete(pbVar97);
          }
        } while( true );
      }
      pcVar103 = "expected %u bytes, fell off end";
    }
    else {
      pcVar103 = "invalid table count (> max br_table size): %u";
      pcVar44 = (char *)(*(long *)(param_1 + 0x10) + 1);
    }
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,pcVar44,pcVar103,(ulong)uVar50);
    goto LAB_017c4a30;
  case 0xf:
    lVar39 = *(long *)(param_1 + 0x4e0);
    puVar68 = *(ulong **)(param_1 + 0x60);
    uVar61 = *puVar68;
    iVar37 = (int)uVar61;
    if (*(char *)(lVar39 + -0x1d0) == '\0') {
      if (iVar37 != 0) {
        if ((int)((ulong)(*(long *)pDVar4 - *(long *)this_00) >> 4) - *(int *)(lVar39 + -0x1dc) <
            iVar37) {
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar96,
                     "expected %u elements on the stack for return, found %u",uVar61 & 0xffffffff);
          goto LAB_017c4a30;
        }
        if (0 < iVar37) {
          uVar76 = 0;
          pbVar80 = (byte *)(*(long *)pDVar4 + (long)iVar37 * -0x10 + 8);
          do {
            bVar18 = *(byte *)(puVar68[2] + uVar76);
            bVar14 = *pbVar80;
            if (bVar18 != bVar14) {
              iVar37 = (int)(char)bVar14;
              if (((bVar18 != 9 || iVar37 != 8) && (bVar18 != 7 || iVar37 != 8)) &&
                 (bVar18 != 6 || 2 < (iVar37 - 7U & 0xff))) {
                if (bVar18 < 0xb) {
                  pcVar44 = (&PTR_s_<stmt>_01cdb088)[(char)bVar18];
                }
                else {
                  pcVar44 = "<unknown>";
                }
                if (bVar14 < 0xb) {
                  pcVar45 = (&PTR_s_<stmt>_01cdb088)[(char)bVar14];
                  pcVar103 = "type error in return[%u] (expected %s, got %s)";
                }
                else {
                  pcVar45 = "<unknown>";
                  pcVar103 = "type error in return[%u] (expected %s, got %s)";
                }
                goto code_r0x017cba60;
              }
            }
            uVar76 = uVar76 + 1;
            pbVar80 = pbVar80 + 0x10;
          } while ((uVar61 & 0xffffffff) != uVar76);
        }
      }
      FUN_017d134c(param_1);
      pbVar80 = uStack_138;
    }
    else if (0 < iVar37) {
      uVar76 = 0;
      do {
        lVar56 = *(long *)pDVar4;
        bVar14 = *(byte *)(puVar68[2] + uVar76);
        uStack_138 = pbVar80;
        if ((ulong)*(uint *)(lVar39 + -0x1dc) < (ulong)(lVar56 - *(long *)this_00 >> 4)) {
          pbVar96 = *(byte **)(lVar56 + -0x10);
          bVar18 = *(byte *)(lVar56 + -8);
          uVar95 = (ulong)bVar18;
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar56 + -0x10);
          if (bVar18 != bVar14) {
code_r0x017cecc4:
            uVar50 = (uint)uVar95;
            pbVar80 = uStack_138;
            if ((bVar14 != 7 || uVar50 != 8) && (bVar14 != 6 || 2 < uVar50 - 7)) {
              if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar50 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar18 = *pbVar80;
                  uVar89 = (ushort)bVar18;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) goto code_r0x017ced64;
                    uVar89 = CONCAT11(bVar18,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
code_r0x017ced64:
                  pcVar44 = "<end>";
                }
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) goto code_r0x017cede0;
                    uVar89 = CONCAT11(bVar14,pbVar96[1]);
                  }
                  pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  if (10 < uVar50) goto code_r0x017cee18;
code_r0x017cedf0:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                }
                else {
code_r0x017cede0:
                  pcVar45 = "<end>";
                  if (uVar50 < 0xb) goto code_r0x017cedf0;
code_r0x017cee18:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,
                           uVar76 & 0xffffffff,pcVar103,pcVar45,pcVar53);
                pbVar80 = uStack_138;
              }
            }
          }
        }
        else {
          if (*(char *)(lVar39 + -0x1d0) != '\x02') {
            pcVar44 = *(char **)pDVar101;
            if (pcVar44 < *(char **)pDVar57) {
              cVar83 = *pcVar44;
              uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar83);
              if ((uVar95 & 1) == 0) {
                pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar83);
              }
              else if (pcVar44 + 1 < *(char **)pDVar57) {
                pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                             (CONCAT11(cVar83,pcVar44[1]));
              }
              else {
                pcVar103 = "<end>";
              }
            }
            else {
              pcVar103 = "<end>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,pcVar44,"%s found empty stack",pcVar103);
          }
          pbVar96 = *(byte **)pDVar101;
          uVar95 = 10;
          pbVar80 = uStack_138;
          if (bVar14 != 10) goto code_r0x017cecc4;
        }
        if ((uVar61 & 0xffffffff) - 1 == uVar76) break;
        puVar68 = *(ulong **)(param_1 + 0x60);
        lVar39 = *(long *)(param_1 + 0x4e0);
        uVar76 = uVar76 + 1;
      } while( true );
    }
    lVar56 = *(long *)(param_1 + 0x4e0);
    lVar39 = *(long *)(param_1 + 0x4b8) + (ulong)*(uint *)(lVar56 + -0x1dc) * 0x10;
    uStack_138 = pbVar80;
    if (lVar39 != *(long *)(param_1 + 0x4c0)) {
      *(long *)pDVar4 = lVar39;
    }
    goto code_r0x017cc254;
  case 0x10:
    pSStack_1d0 = (Signature *)0x0;
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,auStack_1c8,"function index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        auStack_1c8[0] = 1;
      }
    }
    else {
      auStack_1c8[0] = 0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","function index");
      uVar61 = 0;
    }
    uStack_1d8 = CONCAT44(uStack_1d8._4_4_,(int)uVar61);
    lVar39 = *(long *)(param_1 + 0x48);
    pbVar96 = *(byte **)(param_1 + 0x10);
    uVar50 = auStack_1c8[0] + 1;
    if ((lVar39 != 0) &&
       (uVar61 < (ulong)(*(long *)(lVar39 + 0x90) - *(long *)(lVar39 + 0x88) >> 5))) {
      pSVar99 = *(Signature **)(*(long *)(lVar39 + 0x88) + uVar61 * 0x20);
      pSStack_1d0 = pSVar99;
      local_148[0] = SVar21;
      local_148[1] = SVar22;
      local_148[2] = SVar24;
      local_148[3] = SVar26;
      local_148[4] = SVar28;
      local_148[5] = SVar30;
      local_148[6] = SVar32;
      local_148[7] = SVar34;
      local_148[8] = SVar21;
      local_148[9] = SVar22;
      local_148[10] = SVar24;
      local_148[0xb] = SVar26;
      local_148[0xc] = SVar28;
      local_148[0xd] = SVar30;
      local_148[0xe] = SVar32;
      local_148[0xf] = SVar34;
      uStack_138 = (byte *)&uStack_b0;
      if (pSVar99 != (Signature *)0x0) {
        uVar61 = *(ulong *)(pSVar99 + 8);
        uVar93 = (uint)uVar61;
        uVar76 = (ulong)(int)uVar93;
        puVar49 = (uint *)&local_130;
        if (8 < uVar93) {
          v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                    ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
          puVar49 = (uint *)CONCAT17(local_148[7],
                                     CONCAT16(local_148[6],
                                              CONCAT15(local_148[5],
                                                       CONCAT14(local_148[4],
                                                                CONCAT13(local_148[3],
                                                                         CONCAT12(local_148[2],
                                                                                  CONCAT11(local_148
                                                  [1],local_148[0])))))));
        }
        puVar49 = puVar49 + uVar76 * 4;
        local_148[8] = SUB81(puVar49,0);
        local_148[9] = SUB81((ulong)puVar49 >> 8,0);
        local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
        local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
        local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
        local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
        local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
        local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
        if (0 < (int)uVar93) {
          uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
          do {
            uVar93 = uVar93 - 1;
            lVar39 = *(long *)pDVar4;
            bVar14 = *(byte *)(*(ulong *)(pSVar99 + 0x10) + *(ulong *)pSVar99 + uVar76 + -1);
            if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)
               ) {
              pbVar96 = *(byte **)(lVar39 + -0x10);
              uVar95 = (ulong)*(byte *)(lVar39 + -8);
              *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
            }
            else {
              if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
                pbVar96 = *(byte **)pDVar101;
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar18 = *pbVar96;
                  uVar89 = (ushort)bVar18;
                  uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar95 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017c745c;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar96[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017c745c:
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
              }
              pbVar96 = *(byte **)pDVar101;
              uVar95 = 10;
            }
            uVar100 = (uint)uVar95;
            uVar76 = uVar76 - 1;
            if (uVar100 != bVar14) {
              if ((bVar14 != 7 || uVar100 != 8) && (bVar14 != 6 || 2 < uVar100 - 7)) {
                if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar100 != 8)))) {
                  pbVar80 = *(byte **)pDVar101;
                  if (pbVar80 < *(byte **)pDVar57) {
                    bVar18 = *pbVar80;
                    uVar89 = (ushort)bVar18;
                    uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                    if ((uVar78 & 1) != 0) {
                      if (*(byte **)pDVar57 <= pbVar80 + 1) {
                        pcVar44 = "<end>";
                        goto code_r0x017c7558;
                      }
                      uVar89 = CONCAT11(bVar18,pbVar80[1]);
                    }
                    pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    pcVar44 = "<end>";
                  }
code_r0x017c7558:
                  if (bVar14 < 10) {
                    pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                  }
                  else {
                    pcVar103 = "<unknown>";
                  }
                  if (pbVar96 < *(byte **)pDVar57) {
                    bVar14 = *pbVar96;
                    uVar89 = (ushort)bVar14;
                    uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                    if ((uVar78 & 1) == 0) {
code_r0x017c75d0:
                      pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                    }
                    else {
                      if (pbVar96 + 1 < *(byte **)pDVar57) {
                        uVar89 = CONCAT11(bVar14,pbVar96[1]);
                        goto code_r0x017c75d0;
                      }
                      pcVar45 = "<end>";
                    }
                    if (10 < uVar100) goto code_r0x017c75f4;
code_r0x017c733c:
                    pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                        (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                  }
                  else {
                    pcVar45 = "<end>";
                    if (uVar100 < 0xb) goto code_r0x017c733c;
code_r0x017c75f4:
                    pcVar53 = "<unknown>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)param_1,(char *)pbVar96,
                             "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar93,
                             pcVar103,pcVar45,pcVar53);
                }
              }
            }
            lVar39 = CONCAT17(local_148[7],
                              CONCAT16(local_148[6],
                                       CONCAT15(local_148[5],
                                                CONCAT14(local_148[4],
                                                         CONCAT13(local_148[3],
                                                                  CONCAT12(local_148[2],
                                                                           CONCAT11(local_148[1],
                                                                                    local_148[0]))))
                                               ))) + uVar61;
            *(char *)(lVar39 + -8) = (char)uVar95;
            uVar61 = uVar61 - 0x10;
            *(byte **)(lVar39 + -0x10) = pbVar96;
          } while (0 < (long)uVar76);
        }
      }
      pSVar99 = pSStack_1d0;
      uVar61 = *(ulong *)pSStack_1d0;
      if (uVar61 != 0) {
        uVar76 = 0;
        do {
          local_190 = (Decoder *)
                      CONCAT71(local_190._1_7_,*(undefined1 *)(*(ulong *)(pSVar99 + 0x10) + uVar76))
          ;
          puVar63 = *(undefined8 **)(param_1 + 0x4c0);
          if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
            uVar77 = *(undefined8 *)pDVar101;
            *(undefined1 *)(puVar63 + 1) = *(undefined1 *)(*(ulong *)(pSVar99 + 0x10) + uVar76);
            *puVar63 = uVar77;
            *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
          }
          else {
            std::__ndk1::
            vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
            ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                      (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
          }
          uVar76 = uVar76 + 1;
        } while (uVar61 != uVar76);
      }
      if (((byte)*pDVar11 & 1) == 0) {
        uVar61 = (ulong)((byte)*pDVar11 >> 1);
      }
      else {
        uVar61 = *(ulong *)pDVar1;
      }
      if ((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) {
        if (*(ulong *)pSStack_1d0 < 2) {
          if (*(ulong *)pSStack_1d0 == 1) {
            uVar61 = FUN_017d5c40(this,param_1,**(undefined1 **)(pSStack_1d0 + 0x10),"return");
            if ((uVar61 & 1) == 0) goto code_r0x017ce308;
          }
          pCVar48 = (CallDescriptor *)
                    v8::internal::compiler::GetWasmCallDescriptor
                              (*(undefined8 *)(param_1 + 0x458),pSStack_1d0,0,0);
          if ((uint)uStack_1d8 < *(uint *)(**(long **)(param_1 + 0x3d8) + 0x3c)) {
            uVar61 = *(ulong *)(param_1 + 0x2b8);
            if ((uVar61 & 0x13f8ffff) == 0x13f8ffff) {
              uVar76 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                                 ((LiftoffAssembler *)this,0x13f8ffff,0);
              uVar61 = *(ulong *)(param_1 + 0x2b8);
            }
            else {
              uVar76 = uVar61 & 0x13f8ffff ^ 0x13f8ffff;
              uVar76 = (uVar76 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar76 & 0x5555555555555555) << 1;
              uVar76 = (uVar76 & 0xcccccccccccccccc) >> 2 | (uVar76 & 0x3333333333333333) << 2;
              uVar76 = (uVar76 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar76 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar76 = (uVar76 & 0xff00ff00ff00ff00) >> 8 | (uVar76 & 0xff00ff00ff00ff) << 8;
              uVar76 = LZCOUNT((uVar76 >> 0x10 | (uVar76 & 0xffff0000ffff) << 0x10) << 0x20);
            }
            uVar61 = (ulong)~(uint)(1L << (uVar76 & 0x3f)) & 0x13f8ffff &
                     (uVar61 ^ 0xffffffffffffffff);
            pDVar90 = (Decoder *)(uVar76 & 0xff | 0x4000000000);
            if (uVar61 == 0) {
              uVar61 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                                 ((LiftoffAssembler *)this,0x13f8ffff);
            }
            else {
              uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
              uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
              uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
              uVar61 = LZCOUNT((uVar61 >> 0x10 | (uVar61 & 0xffff0000ffff) << 0x10) << 0x20);
            }
            pDVar88 = (Decoder *)(uVar61 & 0xff | 0x4000000000);
            uStack_1b8 = 0;
            uStack_1c0 = pDVar88;
            v8::internal::wasm::LiftoffAssembler::LoadFromInstance(this,pDVar90,0,0x2f,8);
            plStack_a0 = *(long **)(param_1 + 0x210);
            uStack_98 = *(undefined8 *)(param_1 + 0x220);
            uStack_178 = (ulong)((uint)uStack_1d8 << 3);
            local_188._0_4_ = 0;
            uStack_17c = 2;
            uStack_168 = 0xffffffff;
            uStack_164 = 0;
            uStack_170 = 0;
            uStack_16c = 0xffffffff;
            uStack_1a0 = 0;
            pDStack_1a8 = pDVar88;
            local_190 = pDVar90;
            uStack_b0 = pDVar5;
            pDStack_a8 = pDVar6;
            v8::internal::TurboAssembler::LoadStoreMacro
                      ((TurboAssembler *)this,&pDStack_1a8,&local_190,0xc0400000);
            v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
                      ((UseScratchRegisterScope *)&uStack_b0);
            pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
            local_188._0_4_ = 0;
            local_190 = (Decoder *)0x400000001d;
            uStack_17c = 2;
            uStack_178 = 0xfffffffffffffff0;
            uStack_168 = 0xffffffff;
            uStack_164 = 0;
            uStack_170 = 0;
            uStack_16c = 0xffffffff;
            uStack_b0 = pDVar90;
            v8::internal::TurboAssembler::LoadStoreMacro
                      ((TurboAssembler *)this,&uStack_b0,&local_190,0xc0400000);
            local_190 = uStack_b0;
            local_188._0_4_ = (uint)pDStack_a8;
            uStack_17c = 2;
            uStack_178 = 0x2b;
            uStack_168 = 0xffffffff;
            uStack_164 = 0;
            uStack_170 = 0;
            uStack_16c = 0xffffffff;
            v8::internal::TurboAssembler::LoadTaggedPointerField
                      ((TurboAssembler *)this,(Register *)&uStack_b0,(MemOperand *)&local_190);
            uStack_1e0 = 0;
            uStack_1a0 = 0;
            plStack_a0 = *(long **)(param_1 + 0x210);
            uStack_98 = *(undefined8 *)(param_1 + 0x220);
            uStack_178 = (ulong)((uint)uStack_1d8 * 4 + 7);
            local_188._0_4_ = 0;
            uStack_17c = 2;
            uStack_168 = 0xffffffff;
            uStack_164 = 0;
            uStack_170 = 0;
            uStack_16c = 0xffffffff;
            pDStack_1e8 = pDVar90;
            pDStack_1a8 = pDVar90;
            local_190 = pDVar90;
            uStack_b0 = pDVar5;
            pDStack_a8 = pDVar6;
            v8::internal::TurboAssembler::LoadTaggedPointerField
                      ((TurboAssembler *)this,(Register *)&pDStack_1a8,(MemOperand *)&local_190);
            v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
                      ((UseScratchRegisterScope *)&uStack_b0);
            v8::internal::wasm::LiftoffAssembler::PrepareCall
                      ((LiftoffAssembler *)this,pSStack_1d0,pCVar48,(Register *)&uStack_1c0,
                       (Register *)&pDStack_1e8);
            v8::internal::SourcePositionTableBuilder::AddPosition
                      (pSVar7,(long)(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x88)),
                       (long)(((ulong)(uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) <<
                              0x20) + 0x100000000) >> 0x1f & 0xffff80007fffffff,0);
            v8::internal::TurboAssembler::Call(this,uStack_1c0,uStack_1b8);
          }
          else {
            v8::internal::wasm::LiftoffAssembler::PrepareCall
                      ((LiftoffAssembler *)this,pSStack_1d0,pCVar48,(Register *)0x0,(Register *)0x0)
            ;
            v8::internal::SourcePositionTableBuilder::AddPosition
                      (pSVar7,(long)(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x88)),
                       (long)(((ulong)(uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) <<
                              0x20) + 0x100000000) >> 0x1f & 0xffff80007fffffff,0);
            v8::internal::TurboAssembler::Call((TurboAssembler *)this,uStack_1d8 & 0xffffffff,4);
          }
          FUN_017e2778(this);
          v8::internal::SafepointTableBuilder::DefineSafepoint(pDVar9,this,0);
          v8::internal::wasm::LiftoffAssembler::FinishCall
                    ((LiftoffAssembler *)this,pSStack_1d0,pCVar48);
        }
        else {
code_r0x017c7fb8:
          if (*pDVar3 == (Decoder)0x0) {
            *pDVar3 = (Decoder)0x8;
            if (v8::internal::FLAG_trace_liftoff != '\0') {
              v8::internal::PrintF("[liftoff] unsupported: %s\n","multi-return");
            }
            iVar37 = *(int *)(param_1 + 0x10);
            iVar84 = *(int *)(param_1 + 8);
            iVar64 = *(int *)(param_1 + 0x20);
            pcVar44 = "multi-return";
code_r0x017c8014:
            v8::internal::wasm::Decoder::errorf
                      (uVar36,(char *)(ulong)(uint)(iVar64 + (iVar37 - iVar84)),
                       "unsupported liftoff operation: %s",pcVar44);
          }
        }
      }
      goto code_r0x017ce308;
    }
code_r0x017c81a8:
    pcVar44 = "invalid function index: %u";
code_r0x017c8420:
    pbVar96 = pbVar96 + 1;
code_r0x017c8424:
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)pbVar96,pcVar44,uVar61);
    pbVar80 = uStack_138;
    break;
  case 0x11:
    v8::internal::wasm::CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    CallIndirectImmediate
              ((CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&uStack_1d8,
               *(undefined4 *)(param_1 + 0x50),param_1,pbVar96);
    lVar39 = *(long *)(param_1 + 0x48);
    uVar50 = auStack_1c8[0] + 1;
    if (lVar39 == 0) {
code_r0x017c57f4:
      v8::internal::wasm::Decoder::error
                (param_1,"function table has to exist to execute call_indirect");
      pbVar80 = uStack_138;
      break;
    }
    if ((ulong)(*(long *)(lVar39 + 0xc0) - *(long *)(lVar39 + 0xb8) >> 4) <=
        (uStack_1d8 & 0xffffffff)) goto code_r0x017c57f4;
    if (*(char *)(*(long *)(lVar39 + 0xb8) + (uStack_1d8 & 0xffffffff) * 0x10) != '\a') {
      v8::internal::wasm::Decoder::error(param_1,"table of call_indirect must be of type funcref");
      pbVar80 = uStack_138;
      break;
    }
    pbVar96 = *(byte **)(param_1 + 0x10);
    if ((ulong)(*(long *)(lVar39 + 0x60) - *(long *)(lVar39 + 0x58) >> 3) <= uStack_1d8 >> 0x20) {
code_r0x017c92cc:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)(pbVar96 + 1),"invalid signature index: #%u");
      pbVar80 = uStack_138;
      break;
    }
    pSStack_1d0 = *(Signature **)(*(long *)(lVar39 + 0x58) + (uStack_1d8 >> 0x20) * 8);
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar80 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar96 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017cdd60;
            }
            uVar89 = CONCAT11(bVar14,pbVar96[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017cdd60:
        if (pbVar80 < *(byte **)pDVar57) {
          bVar14 = *pbVar80;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) == 0) {
code_r0x017cddc4:
            pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            if (pbVar80 + 1 < *(byte **)pDVar57) {
              uVar89 = CONCAT11(bVar14,pbVar80[1]);
              goto code_r0x017cddc4;
            }
            pcVar103 = "<end>";
          }
          if (10 < (uint)uVar61) goto code_r0x017cdef4;
code_r0x017cddac:
          pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                              (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
        }
        else {
          pcVar103 = "<end>";
          if ((uint)uVar61 < 0xb) goto code_r0x017cddac;
code_r0x017cdef4:
          pcVar45 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar80,"%s[%d] expected type %s, found %s of type %s",
                   pcVar44,0,"i32",pcVar103,pcVar45);
      }
    }
    else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017cdddc;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017cdddc:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
    }
    pSVar99 = pSStack_1d0;
    local_148[0] = SVar21;
    local_148[1] = SVar22;
    local_148[2] = SVar24;
    local_148[3] = SVar26;
    local_148[4] = SVar28;
    local_148[5] = SVar30;
    local_148[6] = SVar32;
    local_148[7] = SVar34;
    local_148[8] = SVar21;
    local_148[9] = SVar22;
    local_148[10] = SVar24;
    local_148[0xb] = SVar26;
    local_148[0xc] = SVar28;
    local_148[0xd] = SVar30;
    local_148[0xe] = SVar32;
    local_148[0xf] = SVar34;
    uStack_138 = (byte *)&uStack_b0;
    if (pSStack_1d0 != (Signature *)0x0) {
      uVar61 = *(ulong *)(pSStack_1d0 + 8);
      uVar93 = (uint)uVar61;
      uVar76 = (ulong)(int)uVar93;
      puVar49 = (uint *)&local_130;
      if (8 < uVar93) {
        v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
        puVar49 = (uint *)CONCAT17(local_148[7],
                                   CONCAT16(local_148[6],
                                            CONCAT15(local_148[5],
                                                     CONCAT14(local_148[4],
                                                              CONCAT13(local_148[3],
                                                                       CONCAT12(local_148[2],
                                                                                CONCAT11(local_148[1
                                                  ],local_148[0])))))));
      }
      puVar49 = puVar49 + uVar76 * 4;
      local_148[8] = SUB81(puVar49,0);
      local_148[9] = SUB81((ulong)puVar49 >> 8,0);
      local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
      if (0 < (int)uVar93) {
        uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
        do {
          uVar93 = uVar93 - 1;
          lVar39 = *(long *)pDVar4;
          bVar14 = *(byte *)(*(ulong *)(pSVar99 + 0x10) + *(ulong *)pSVar99 + uVar76 + -1);
          if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4))
          {
            pbVar96 = *(byte **)(lVar39 + -0x10);
            uVar95 = (ulong)*(byte *)(lVar39 + -8);
            *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          }
          else {
            if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
              pbVar96 = *(byte **)pDVar101;
              if (pbVar96 < *(byte **)pDVar57) {
                bVar18 = *pbVar96;
                uVar89 = (ushort)bVar18;
                uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar95 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar96 + 1) {
                    pcVar44 = "<end>";
                    goto code_r0x017ce0a8;
                  }
                  uVar89 = CONCAT11(bVar18,pbVar96[1]);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017ce0a8:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            }
            pbVar96 = *(byte **)pDVar101;
            uVar95 = 10;
          }
          uVar100 = (uint)uVar95;
          uVar76 = uVar76 - 1;
          if (uVar100 != bVar14) {
            if ((bVar14 != 7 || uVar100 != 8) && (bVar14 != 6 || 2 < uVar100 - 7)) {
              if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar100 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar18 = *pbVar80;
                  uVar89 = (ushort)bVar18;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017ce1a0;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017ce1a0:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar78 & 1) == 0) {
code_r0x017ce218:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017ce218;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar100) goto code_r0x017ce23c;
code_r0x017cdf8c:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar100 < 0xb) goto code_r0x017cdf8c;
code_r0x017ce23c:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar93,
                           pcVar103,pcVar45,pcVar53);
              }
            }
          }
          lVar39 = CONCAT17(local_148[7],
                            CONCAT16(local_148[6],
                                     CONCAT15(local_148[5],
                                              CONCAT14(local_148[4],
                                                       CONCAT13(local_148[3],
                                                                CONCAT12(local_148[2],
                                                                         CONCAT11(local_148[1],
                                                                                  local_148[0]))))))
                           ) + uVar61;
          *(char *)(lVar39 + -8) = (char)uVar95;
          uVar61 = uVar61 - 0x10;
          *(byte **)(lVar39 + -0x10) = pbVar96;
        } while (0 < (long)uVar76);
      }
    }
    pSVar99 = pSStack_1d0;
    uVar61 = *(ulong *)pSStack_1d0;
    if (uVar61 != 0) {
      uVar76 = 0;
      do {
        local_190 = (Decoder *)
                    CONCAT71(local_190._1_7_,*(undefined1 *)(*(ulong *)(pSVar99 + 0x10) + uVar76));
        puVar63 = *(undefined8 **)(param_1 + 0x4c0);
        if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
          uVar77 = *(undefined8 *)pDVar101;
          *(undefined1 *)(puVar63 + 1) = *(undefined1 *)(*(ulong *)(pSVar99 + 0x10) + uVar76);
          *puVar63 = uVar77;
          *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
        }
        uVar76 = uVar76 + 1;
      } while (uVar61 != uVar76);
    }
    if (((byte)*pDVar11 & 1) == 0) {
      uVar61 = (ulong)((byte)*pDVar11 >> 1);
    }
    else {
      uVar61 = *(ulong *)pDVar1;
    }
    if ((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) {
      if (1 < *(ulong *)pSStack_1d0) goto code_r0x017c7fb8;
      if ((uint)uStack_1d8 == 0) {
        if (*(ulong *)pSStack_1d0 == 1) {
          uVar61 = FUN_017d5c40(this,param_1,**(undefined1 **)(pSStack_1d0 + 0x10),"return");
          if ((uVar61 & 1) == 0) goto code_r0x017ce308;
        }
        uVar76 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)this,0);
        uVar95 = 1L << (uVar76 & 0x3f);
        uVar76 = uVar76 & 0xff;
        uVar61 = *(ulong *)(param_1 + 0x2b8);
        if ((uVar95 & uVar61) != 0) {
          uVar61 = (ulong)~(uint)uVar95 & 0x13f8ffff & (uVar61 ^ 0xffffffffffffffff);
          if (uVar61 == 0) {
            uVar95 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                               ((LiftoffAssembler *)this,0x13f8ffff,uVar95);
            uVar61 = local_188;
          }
          else {
            uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
            uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
            uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
            uVar95 = LZCOUNT((uVar61 >> 0x10 | (uVar61 & 0xffff0000ffff) << 0x10) << 0x20);
            uVar61 = local_188;
          }
          local_188._4_4_ = (undefined4)(uVar61 >> 0x20);
          local_188._0_4_ = (uint)uVar61;
          uStack_b0 = (Decoder *)(uVar95 & 0xff | 0x2000000000);
          pDStack_160 = (Decoder *)(uVar76 | 0x2000000000);
          uStack_168 = CONCAT31(uStack_168._1_3_,0x13);
          uVar76 = uVar95 & 0xff;
          pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
          local_190 = (Decoder *)((ulong)local_190 & 0xffffffffffffff00);
          local_188._0_4_ = (uint)local_188 & 0xffffff00;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_150 = 0xffffffff;
          uStack_158 = 0;
          v8::internal::TurboAssembler::Mov((TurboAssembler *)this,&uStack_b0,&local_190,0);
          uVar95 = 1L << (uVar95 & 0x3f);
          uVar61 = *(ulong *)(param_1 + 0x2b8);
        }
        uVar78 = (ulong)~(uint)uVar95 & 0x13f8ffff & (uVar61 ^ 0xffffffffffffffff);
        if (uVar78 == 0) {
          uVar78 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)this,0x13f8ffff,uVar95);
          uVar61 = *(ulong *)(param_1 + 0x2b8);
        }
        else {
          uVar78 = (uVar78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar78 & 0x5555555555555555) << 1;
          uVar78 = (uVar78 & 0xcccccccccccccccc) >> 2 | (uVar78 & 0x3333333333333333) << 2;
          uVar78 = (uVar78 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar78 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar78 = (uVar78 & 0xff00ff00ff00ff00) >> 8 | (uVar78 & 0xff00ff00ff00ff) << 8;
          uVar78 = LZCOUNT((uVar78 >> 0x10 | (uVar78 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar61 = ~uVar61;
        uVar95 = 1L << (uVar78 & 0x3f) | uVar95;
        uVar94 = (ulong)~(uint)uVar95 & 0x13f8ffff & uVar61;
        if (uVar94 == 0) {
          uVar94 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)this,0x13f8ffff,uVar95);
          uVar61 = ~*(ulong *)(param_1 + 0x2b8);
        }
        else {
          uVar94 = (uVar94 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar94 & 0x5555555555555555) << 1;
          uVar94 = (uVar94 & 0xcccccccccccccccc) >> 2 | (uVar94 & 0x3333333333333333) << 2;
          uVar94 = (uVar94 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar94 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
          uVar94 = LZCOUNT((uVar94 >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar95 = 1L << (uVar94 & 0x3f) | uVar95;
        uVar62 = uVar78 & 0xff | 0x4000000000;
        uStack_1f8 = uVar94 & 0xff | 0x4000000000;
        uVar61 = (ulong)~(uint)uVar95 & 0x13f8ffff & uVar61;
        uStack_1f0 = 0;
        if (uVar61 == 0) {
          uVar61 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)this,0x13f8ffff,uVar95);
        }
        else {
          uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
          uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
          uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
          uVar61 = LZCOUNT((uVar61 >> 0x10 | (uVar61 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar75 = uStack_1f0;
        uVar94 = uStack_1f8;
        pDVar90 = (Decoder *)(uVar61 & 0xff | 0x4000000000);
        uVar77 = FUN_017da05c(this,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8),7,0);
        uVar74 = *(undefined4 *)
                  (*(long *)(**(long **)(param_1 + 0x3d8) + 0x70) + (uStack_1d8 >> 0x20) * 4);
        v8::internal::wasm::LiftoffAssembler::LoadFromInstance(this,uVar94,uVar75,0x4b,4);
        v8::internal::wasm::LiftoffAssembler::emit_cond_jump
                  (this,2,uVar77,1,uVar76 | 0x4000000000,0,uVar94,uVar75);
        if (v8::internal::FLAG_untrusted_code_mitigations != '\0') {
          pDVar91 = (Decoder *)(uVar76 | 0x2000000000);
          pDVar102 = (Decoder *)(uVar78 & 0xff | 0x2000000000);
          pDVar88 = (Decoder *)0x200000003f;
          if ((int)uVar94 != 0x3f) {
            pDVar88 = (Decoder *)(uVar94 & 0xffffffff | 0x2000000000);
          }
          pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
          uStack_1e0 = 0;
          local_190 = (Decoder *)((ulong)local_190 & 0xffffffffffffff00);
          local_188._0_4_ = (uint)local_188 & 0xffffff00;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168._0_1_ = 0x13;
          uStack_150 = 0xffffffff;
          uStack_158 = 0;
          pDStack_1e8 = pDVar91;
          pDStack_160 = pDVar88;
          uStack_b0 = pDVar102;
          v8::internal::TurboAssembler::AddSubMacro
                    ((TurboAssembler *)this,&uStack_b0,&pDStack_1e8,&local_190,0,0x40000000);
          *(undefined4 *)((undefined8 *)((ulong)&pDStack_1a8 | 5) + 1) = 0;
          *(undefined8 *)((ulong)&pDStack_1a8 | 5) = 0;
          pDStack_1a8 = (Decoder *)CONCAT35(pDStack_1a8._5_3_,0xffffffff01);
          v8::internal::wasm::LiftoffAssembler::LoadConstant
                    ((LiftoffAssembler *)this,uVar94 & 0xff,&pDStack_1a8,0x13);
          pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
          uStack_1e0 = 0;
          local_190 = (Decoder *)((ulong)local_190 & 0xffffffffffffff00);
          local_188._0_4_ = (uint)local_188 & 0xffffff00;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168._0_1_ = 0x13;
          uStack_150 = 0xffffffff;
          uStack_158 = 0;
          pDStack_1e8 = pDVar88;
          pDStack_160 = pDVar91;
          uStack_b0 = pDVar88;
          v8::internal::TurboAssembler::LogicalMacro
                    ((TurboAssembler *)this,&uStack_b0,&pDStack_1e8,&local_190,0x40000000);
          pDVar86 = (Decoder *)(uVar61 & 0xff | 0x2000000000);
          pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
          uStack_1e0 = 0;
          local_190 = (Decoder *)((ulong)local_190 & 0xffffffffffffff00);
          local_188._0_4_ = (uint)local_188 & 0xffffff00;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168._0_1_ = 0x13;
          uStack_150 = 0xffffffff;
          uStack_158 = 0;
          pDStack_1e8 = pDVar102;
          pDStack_160 = pDVar88;
          uStack_b0 = pDVar86;
          v8::internal::TurboAssembler::LogicalMacro
                    ((TurboAssembler *)this,&uStack_b0,&pDStack_1e8,&local_190,0);
          local_188._0_4_ = 0;
          pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
          local_190 = pDVar86;
          uStack_b0 = pDVar86;
          v8::internal::Assembler::sbfm
                    ((Assembler *)this,(Register *)&local_190,(Register *)&uStack_b0,0x1f,0x1f);
          pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
          uStack_1e0 = 0;
          local_190 = (Decoder *)((ulong)local_190 & 0xffffffffffffff00);
          local_188._0_4_ = (uint)local_188 & 0xffffff00;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168 = CONCAT31(uStack_168._1_3_,0x13);
          uStack_150 = 0xffffffff;
          uStack_158 = 0;
          pDStack_1e8 = pDVar91;
          pDStack_160 = pDVar86;
          uStack_b0 = pDVar91;
          v8::internal::TurboAssembler::LogicalMacro
                    ((TurboAssembler *)this,&uStack_b0,&pDStack_1e8,&local_190,0);
          uVar94 = uStack_1f8;
          uVar75 = uStack_1f0;
        }
        pDVar88 = (Decoder *)(uVar76 | 0x2000000000);
        v8::internal::wasm::LiftoffAssembler::LoadFromInstance(this,uVar62,0,0x43,8);
        local_188._0_4_ = 0;
        pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
        local_190 = pDVar88;
        uStack_b0 = pDVar88;
        v8::internal::Assembler::ubfm
                  ((Assembler *)this,(Register *)&local_190,(Register *)&uStack_b0,0x1e,0x1d);
        plStack_a0 = *(long **)(param_1 + 0x210);
        uStack_98 = *(undefined8 *)(param_1 + 0x220);
        local_188._0_4_ = 0;
        local_188._4_4_ = (undefined4)uVar76;
        uVar20 = local_188._4_4_;
        uStack_180 = 0x20;
        uVar93 = uStack_180;
        uStack_1e0 = 0;
        uStack_16c = 0xffffffff;
        uStack_168 = 2;
        uStack_164 = 0;
        pDStack_1e8 = (Decoder *)(uVar61 & 0xff | 0x2000000000);
        local_190 = (Decoder *)uVar62;
        uStack_b0 = pDVar5;
        pDStack_a8 = pDVar6;
        v8::internal::TurboAssembler::LoadStoreMacro
                  ((TurboAssembler *)this,&pDStack_1e8,&local_190,0x80400000);
        v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
                  ((UseScratchRegisterScope *)&uStack_b0);
        *(undefined4 *)((undefined8 *)((ulong)&uStack_1c0 | 5) + 1) = 0;
        *(undefined8 *)((ulong)&uStack_1c0 | 5) = 0;
        uStack_1c0._0_5_ = CONCAT41(uVar74,1);
        v8::internal::wasm::LiftoffAssembler::LoadConstant
                  ((LiftoffAssembler *)this,uVar94 & 0xff,&uStack_1c0,0x13);
        uVar77 = FUN_017da05c(this,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8),8,0);
        v8::internal::wasm::LiftoffAssembler::emit_cond_jump
                  (this,1,uVar77,2,pDVar90,0,uVar94,uVar75);
        pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
        local_188._0_4_ = 0;
        local_190 = (Decoder *)0x400000001d;
        uStack_17c = 2;
        uStack_178 = 0xfffffffffffffff0;
        uStack_168 = 0xffffffff;
        uStack_164 = 0;
        uStack_170 = 0;
        uStack_16c = 0xffffffff;
        uStack_b0 = (Decoder *)uVar62;
        v8::internal::TurboAssembler::LoadStoreMacro
                  ((TurboAssembler *)this,&uStack_b0,&local_190,0xc0400000);
        local_190 = uStack_b0;
        local_188._0_4_ = (uint)pDStack_a8;
        uStack_17c = 2;
        uStack_178 = 0x37;
        uStack_168 = 0xffffffff;
        uStack_164 = 0;
        uStack_170 = 0;
        uStack_16c = 0xffffffff;
        v8::internal::TurboAssembler::LoadTaggedPointerField
                  ((TurboAssembler *)this,(Register *)&uStack_b0,(MemOperand *)&local_190);
        v8::internal::wasm::LiftoffAssembler::LoadTaggedPointer
                  (this,uVar94,uVar75,uVar62,0,uVar76 | 0x4000000000,0,7,
                   1L << (uVar61 & 0x3f) | uVar95);
        pDStack_a8 = (Decoder *)((ulong)pDStack_a8 & 0xffffffff00000000);
        uStack_1e0 = 0;
        local_190 = (Decoder *)((ulong)local_190 & 0xffffffffffffff00);
        local_188._0_4_ = (uint)local_188 & 0xffffff00;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_168 = CONCAT31(uStack_168._1_3_,0x13);
        uStack_150 = 0xffffffff;
        uStack_158 = 0;
        pDStack_1e8 = pDVar88;
        pDStack_160 = pDVar88;
        uStack_b0 = pDVar88;
        v8::internal::TurboAssembler::AddSubMacro
                  ((TurboAssembler *)this,&uStack_b0,&pDStack_1e8,&local_190,0,0);
        v8::internal::wasm::LiftoffAssembler::LoadFromInstance(this,uVar62,0,0x3b,8);
        plStack_a0 = *(long **)(param_1 + 0x210);
        uStack_98 = *(undefined8 *)(param_1 + 0x220);
        local_188._0_4_ = 0;
        uStack_1e0 = 0;
        uStack_16c = 0xffffffff;
        uStack_168 = 2;
        uStack_164 = 0;
        pDStack_1e8 = pDVar90;
        local_190 = (Decoder *)uVar62;
        local_188._4_4_ = uVar20;
        uStack_180 = uVar93;
        uStack_b0 = pDVar5;
        pDStack_a8 = pDVar6;
        v8::internal::TurboAssembler::LoadStoreMacro
                  ((TurboAssembler *)this,&pDStack_1e8,&local_190,0xc0400000);
        v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
                  ((UseScratchRegisterScope *)&uStack_b0);
        v8::internal::SourcePositionTableBuilder::AddPosition
                  (pSVar7,(long)(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x88)),
                   (long)(((ulong)(uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) << 0x20)
                         + 0x100000000) >> 0x1f & 0xffff80007fffffff,0);
        pCVar48 = (CallDescriptor *)
                  v8::internal::compiler::GetWasmCallDescriptor
                            (*(undefined8 *)(param_1 + 0x458),pSStack_1d0,0,0);
        local_188._0_4_ = 0;
        local_190 = pDVar90;
        v8::internal::wasm::LiftoffAssembler::PrepareCall
                  ((LiftoffAssembler *)this,pSStack_1d0,pCVar48,(Register *)&local_190,
                   (Register *)&uStack_1f8);
        v8::internal::TurboAssembler::Call(this,local_190,(uint)local_188);
        FUN_017e2778(this);
        v8::internal::SafepointTableBuilder::DefineSafepoint(pDVar9,this,0);
        v8::internal::wasm::LiftoffAssembler::FinishCall
                  ((LiftoffAssembler *)this,pSStack_1d0,pCVar48);
      }
      else if (*pDVar3 == (Decoder)0x0) {
        *pDVar3 = (Decoder)0x6;
        if (v8::internal::FLAG_trace_liftoff != '\0') {
          v8::internal::PrintF("[liftoff] unsupported: %s\n","table index != 0");
        }
        iVar37 = *(int *)(param_1 + 0x10);
        iVar84 = *(int *)(param_1 + 8);
        iVar64 = *(int *)(param_1 + 0x20);
        pcVar44 = "table index != 0";
        goto code_r0x017c8014;
      }
    }
code_r0x017ce308:
    puVar49 = (uint *)CONCAT17(local_148[7],
                               CONCAT16(local_148[6],
                                        CONCAT15(local_148[5],
                                                 CONCAT14(local_148[4],
                                                          CONCAT13(local_148[3],
                                                                   CONCAT12(local_148[2],
                                                                            CONCAT11(local_148[1],
                                                                                     local_148[0])))
                                                         ))));
    pbVar80 = uStack_138;
    if (puVar49 == (uint *)&local_130) break;
    goto code_r0x017d0058;
  case 0x12:
    if (((byte)param_1[0x50] >> 3 & 1) == 0) {
code_r0x017c5354:
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-return_call)";
      goto code_r0x017c548c;
    }
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 8;
    local_188._0_4_ = 0;
    local_188._4_4_ = 0;
    pbVar96 = (byte *)(*(long *)(param_1 + 0x10) + 1);
    if (pbVar96 < *(byte **)(param_1 + 0x18)) {
      uVar50 = *pbVar96 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar96 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),&uStack_180,
                            "function index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        uStack_180 = 1;
      }
    }
    else {
      uStack_180 = 0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"expected %s","function index");
      uVar61 = 0;
    }
    local_190 = (Decoder *)CONCAT44(local_190._4_4_,(int)uVar61);
    lVar39 = *(long *)(param_1 + 0x48);
    pbVar96 = *(byte **)(param_1 + 0x10);
    uVar50 = uStack_180 + 1;
    if ((lVar39 == 0) ||
       ((ulong)(*(long *)(lVar39 + 0x90) - *(long *)(lVar39 + 0x88) >> 5) <= uVar61))
    goto code_r0x017c81a8;
    plVar65 = *(long **)(*(long *)(lVar39 + 0x88) + uVar61 * 0x20);
    local_188._0_4_ = (uint)plVar65;
    local_188._4_4_ = (undefined4)((ulong)plVar65 >> 0x20);
    if (plVar65 != (long *)0x0) {
      lVar39 = **(long **)(param_1 + 0x60);
      if (lVar39 == *plVar65) {
        if (lVar39 != 0) {
          pcVar103 = (char *)(*(long **)(param_1 + 0x60))[2];
          pcVar44 = (char *)plVar65[2];
          do {
            if (*pcVar103 != *pcVar44) goto code_r0x017c81b4;
            lVar39 = lVar39 + -1;
            pcVar44 = pcVar44 + 1;
            pcVar103 = pcVar103 + 1;
          } while (lVar39 != 0);
        }
        uVar61 = plVar65[1];
        uVar93 = (uint)uVar61;
        uVar76 = (ulong)(int)uVar93;
        puVar49 = (uint *)&local_130;
        local_148[0] = SVar21;
        local_148[1] = SVar22;
        local_148[2] = SVar24;
        local_148[3] = SVar26;
        local_148[4] = SVar28;
        local_148[5] = SVar30;
        local_148[6] = SVar32;
        local_148[7] = SVar34;
        uStack_138 = (byte *)&uStack_b0;
        if (8 < uVar93) {
          local_148[8] = SVar21;
          local_148[9] = SVar22;
          local_148[10] = SVar24;
          local_148[0xb] = SVar26;
          local_148[0xc] = SVar28;
          local_148[0xd] = SVar30;
          local_148[0xe] = SVar32;
          local_148[0xf] = SVar34;
          v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                    ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
          puVar49 = (uint *)CONCAT17(local_148[7],
                                     CONCAT16(local_148[6],
                                              CONCAT15(local_148[5],
                                                       CONCAT14(local_148[4],
                                                                CONCAT13(local_148[3],
                                                                         CONCAT12(local_148[2],
                                                                                  CONCAT11(local_148
                                                  [1],local_148[0])))))));
        }
        puVar49 = puVar49 + uVar76 * 4;
        local_148[8] = SUB81(puVar49,0);
        local_148[9] = SUB81((ulong)puVar49 >> 8,0);
        local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
        local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
        local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
        local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
        local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
        local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
        if (0 < (int)uVar93) {
          uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
          do {
            uVar93 = uVar93 - 1;
            lVar39 = *(long *)pDVar4;
            bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
            if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)
               ) {
              pbVar96 = *(byte **)(lVar39 + -0x10);
              uVar95 = (ulong)*(byte *)(lVar39 + -8);
              *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
            }
            else {
              if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
                pbVar96 = *(byte **)pDVar101;
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar18 = *pbVar96;
                  uVar89 = (ushort)bVar18;
                  uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar95 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017c9094;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar96[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017c9094:
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
              }
              pbVar96 = *(byte **)pDVar101;
              uVar95 = 10;
            }
            uVar100 = (uint)uVar95;
            uVar76 = uVar76 - 1;
            if (uVar100 != bVar14) {
              if ((bVar14 != 7 || uVar100 != 8) && (bVar14 != 6 || 2 < uVar100 - 7)) {
                if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar100 != 8)))) {
                  pbVar80 = *(byte **)pDVar101;
                  if (pbVar80 < *(byte **)pDVar57) {
                    bVar18 = *pbVar80;
                    uVar89 = (ushort)bVar18;
                    uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                    if ((uVar78 & 1) != 0) {
                      if (*(byte **)pDVar57 <= pbVar80 + 1) {
                        pcVar44 = "<end>";
                        goto code_r0x017c9194;
                      }
                      uVar89 = CONCAT11(bVar18,pbVar80[1]);
                    }
                    pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    pcVar44 = "<end>";
                  }
code_r0x017c9194:
                  if (bVar14 < 10) {
                    pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                  }
                  else {
                    pcVar103 = "<unknown>";
                  }
                  if (pbVar96 < *(byte **)pDVar57) {
                    bVar14 = *pbVar96;
                    uVar89 = (ushort)bVar14;
                    uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                    if ((uVar78 & 1) == 0) {
code_r0x017c920c:
                      pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                    }
                    else {
                      if (pbVar96 + 1 < *(byte **)pDVar57) {
                        uVar89 = CONCAT11(bVar14,pbVar96[1]);
                        goto code_r0x017c920c;
                      }
                      pcVar45 = "<end>";
                    }
                    if (10 < uVar100) goto code_r0x017c9230;
code_r0x017c8f70:
                    pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                        (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                  }
                  else {
                    pcVar45 = "<end>";
                    if (uVar100 < 0xb) goto code_r0x017c8f70;
code_r0x017c9230:
                    pcVar53 = "<unknown>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)param_1,(char *)pbVar96,
                             "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar93,
                             pcVar103,pcVar45,pcVar53);
                }
              }
            }
            lVar39 = CONCAT17(local_148[7],
                              CONCAT16(local_148[6],
                                       CONCAT15(local_148[5],
                                                CONCAT14(local_148[4],
                                                         CONCAT13(local_148[3],
                                                                  CONCAT12(local_148[2],
                                                                           CONCAT11(local_148[1],
                                                                                    local_148[0]))))
                                               ))) + uVar61;
            *(char *)(lVar39 + -8) = (char)uVar95;
            uVar61 = uVar61 - 0x10;
            *(byte **)(lVar39 + -0x10) = pbVar96;
          } while (0 < (long)uVar76);
        }
        if (((byte)*pDVar11 & 1) == 0) {
          uVar61 = (ulong)((byte)*pDVar11 >> 1);
        }
        else {
          uVar61 = *(ulong *)pDVar1;
        }
        local_188 = CONCAT44(local_188._4_4_,(uint)local_188);
        if (((uVar61 != 0) ||
            (local_188 = CONCAT44(local_188._4_4_,(uint)local_188),
            *(char *)(*(long *)pDVar2 + -0x1d0) != '\0')) ||
           (local_188 = CONCAT44(local_188._4_4_,(uint)local_188), *pDVar3 != (Decoder)0x0))
        goto code_r0x017d0018;
        *pDVar3 = (Decoder)0x9;
        if (v8::internal::FLAG_trace_liftoff != '\0') {
          v8::internal::PrintF("[liftoff] unsupported: %s\n","return_call");
        }
        v8::internal::wasm::Decoder::errorf
                  (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                               (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))),
                   "unsupported liftoff operation: %s","return_call");
code_r0x017d0008:
        local_188 = CONCAT44(local_188._4_4_,(uint)local_188);
        goto code_r0x017d0018;
      }
    }
code_r0x017c81b4:
    uVar77 = v8::internal::wasm::WasmOpcodes::OpcodeName(bVar14);
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar96,"%s: %s",uVar77,"tail call return types mismatch");
    pbVar80 = uStack_138;
    break;
  case 0x13:
    if (((byte)param_1[0x50] >> 3 & 1) == 0) goto code_r0x017c5354;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 8;
    v8::internal::wasm::CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    CallIndirectImmediate
              ((CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_190,
               *(undefined4 *)(param_1 + 0x50),param_1,*(undefined8 *)(param_1 + 0x10));
    lVar39 = *(long *)(param_1 + 0x48);
    uVar50 = uStack_180 + 1;
    if (lVar39 == 0) {
code_r0x017c6528:
      pcVar44 = "function table has to exist to execute call_indirect";
    }
    else {
      if ((ulong)(*(long *)(lVar39 + 0xc0) - *(long *)(lVar39 + 0xb8) >> 4) <=
          ((ulong)local_190 & 0xffffffff)) goto code_r0x017c6528;
      if (*(char *)(*(long *)(lVar39 + 0xb8) + ((ulong)local_190 & 0xffffffff) * 0x10) == '\a') {
        pbVar96 = *(byte **)(param_1 + 0x10);
        if ((ulong)(*(long *)(lVar39 + 0x60) - *(long *)(lVar39 + 0x58) >> 3) <=
            (ulong)local_190 >> 0x20) goto code_r0x017c92cc;
        plVar65 = *(long **)(*(long *)(lVar39 + 0x58) + ((ulong)local_190 >> 0x20) * 8);
        local_188._0_4_ = (uint)plVar65;
        local_188._4_4_ = (undefined4)((ulong)plVar65 >> 0x20);
        if (plVar65 != (long *)0x0) {
          lVar39 = **(long **)(param_1 + 0x60);
          if (lVar39 == *plVar65) {
            if (lVar39 != 0) {
              pcVar103 = (char *)(*(long **)(param_1 + 0x60))[2];
              pcVar44 = (char *)plVar65[2];
              do {
                if (*pcVar103 != *pcVar44) goto code_r0x017c81b4;
                lVar39 = lVar39 + -1;
                pcVar44 = pcVar44 + 1;
                pcVar103 = pcVar103 + 1;
              } while (lVar39 != 0);
            }
            lVar39 = *(long *)pDVar4;
            if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)
               ) {
              pbVar80 = *(byte **)(lVar39 + -0x10);
              uVar61 = *(ulong *)(lVar39 + -8);
              *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
              if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017cfb24;
                    }
                    uVar89 = CONCAT11(bVar14,pbVar96[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017cfb24:
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar14 = *pbVar80;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) == 0) {
code_r0x017cfb8c:
                    pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar80 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar80[1]);
                      goto code_r0x017cfb8c;
                    }
                    pcVar103 = "<end>";
                  }
                  if (10 < (uint)uVar61) goto code_r0x017cfbe0;
code_r0x017cfb74:
                  pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                                      (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
                }
                else {
                  pcVar103 = "<end>";
                  if ((uint)uVar61 < 0xb) goto code_r0x017cfb74;
code_r0x017cfbe0:
                  pcVar45 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar80,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,0,"i32",pcVar103,
                           pcVar45);
              }
            }
            else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
              if (pbVar96 < *(byte **)pDVar57) {
                bVar14 = *pbVar96;
                uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(bVar14);
                if ((uVar61 & 1) == 0) {
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(bVar14);
                }
                else if (pbVar96 + 1 < *(byte **)pDVar57) {
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                              (CONCAT11(bVar14,pbVar96[1]));
                }
                else {
                  pcVar44 = "<end>";
                }
              }
              else {
                pcVar44 = "<end>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            }
            plVar65 = (long *)CONCAT44(local_188._4_4_,(uint)local_188);
            local_148[0] = SVar21;
            local_148[1] = SVar22;
            local_148[2] = SVar24;
            local_148[3] = SVar26;
            local_148[4] = SVar28;
            local_148[5] = SVar30;
            local_148[6] = SVar32;
            local_148[7] = SVar34;
            local_148[8] = SVar21;
            local_148[9] = SVar22;
            local_148[10] = SVar24;
            local_148[0xb] = SVar26;
            local_148[0xc] = SVar28;
            local_148[0xd] = SVar30;
            local_148[0xe] = SVar32;
            local_148[0xf] = SVar34;
            uStack_138 = (byte *)&uStack_b0;
            if (plVar65 != (long *)0x0) {
              uVar61 = plVar65[1];
              uVar93 = (uint)uVar61;
              uVar76 = (ulong)(int)uVar93;
              puVar49 = (uint *)&local_130;
              if (8 < uVar93) {
                v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
                puVar49 = (uint *)CONCAT17(local_148[7],
                                           CONCAT16(local_148[6],
                                                    CONCAT15(local_148[5],
                                                             CONCAT14(local_148[4],
                                                                      CONCAT13(local_148[3],
                                                                               CONCAT12(local_148[2]
                                                                                        ,CONCAT11(
                                                  local_148[1],local_148[0])))))));
              }
              puVar49 = puVar49 + uVar76 * 4;
              local_148[8] = SUB81(puVar49,0);
              local_148[9] = SUB81((ulong)puVar49 >> 8,0);
              local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
              local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
              local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
              local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
              local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
              local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
              if (0 < (int)uVar93) {
                uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
                do {
                  uVar93 = uVar93 - 1;
                  lVar39 = *(long *)pDVar4;
                  bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
                  if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) <
                      (ulong)(lVar39 - *(long *)this_00 >> 4)) {
                    pbVar96 = *(byte **)(lVar39 + -0x10);
                    uVar95 = (ulong)*(byte *)(lVar39 + -8);
                    *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
                  }
                  else {
                    if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
                      pbVar96 = *(byte **)pDVar101;
                      if (pbVar96 < *(byte **)pDVar57) {
                        bVar18 = *pbVar96;
                        uVar89 = (ushort)bVar18;
                        uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                        if ((uVar95 & 1) != 0) {
                          if (*(byte **)pDVar57 <= pbVar96 + 1) {
                            pcVar44 = "<end>";
                            goto code_r0x017cfd9c;
                          }
                          uVar89 = CONCAT11(bVar18,pbVar96[1]);
                        }
                        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                      }
                      else {
                        pcVar44 = "<end>";
                      }
code_r0x017cfd9c:
                      v8::internal::wasm::Decoder::errorf
                                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
                    }
                    pbVar96 = *(byte **)pDVar101;
                    uVar95 = 10;
                  }
                  uVar100 = (uint)uVar95;
                  uVar76 = uVar76 - 1;
                  if (uVar100 != bVar14) {
                    if ((bVar14 != 7 || uVar100 != 8) && (bVar14 != 6 || 2 < uVar100 - 7)) {
                      if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar100 != 8)))) {
                        pbVar80 = *(byte **)pDVar101;
                        if (pbVar80 < *(byte **)pDVar57) {
                          bVar18 = *pbVar80;
                          uVar89 = (ushort)bVar18;
                          uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                          if ((uVar78 & 1) != 0) {
                            if (*(byte **)pDVar57 <= pbVar80 + 1) {
                              pcVar44 = "<end>";
                              goto code_r0x017cfe9c;
                            }
                            uVar89 = CONCAT11(bVar18,pbVar80[1]);
                          }
                          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                        }
                        else {
                          pcVar44 = "<end>";
                        }
code_r0x017cfe9c:
                        if (bVar14 < 10) {
                          pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                        }
                        else {
                          pcVar103 = "<unknown>";
                        }
                        if (pbVar96 < *(byte **)pDVar57) {
                          bVar14 = *pbVar96;
                          uVar89 = (ushort)bVar14;
                          uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                          if ((uVar78 & 1) == 0) {
code_r0x017cff14:
                            pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                          }
                          else {
                            if (pbVar96 + 1 < *(byte **)pDVar57) {
                              uVar89 = CONCAT11(bVar14,pbVar96[1]);
                              goto code_r0x017cff14;
                            }
                            pcVar45 = "<end>";
                          }
                          if (10 < uVar100) goto code_r0x017cff38;
code_r0x017cfc78:
                          pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                              (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                        }
                        else {
                          pcVar45 = "<end>";
                          if (uVar100 < 0xb) goto code_r0x017cfc78;
code_r0x017cff38:
                          pcVar53 = "<unknown>";
                        }
                        v8::internal::wasm::Decoder::errorf
                                  ((uchar *)param_1,(char *)pbVar96,
                                   "%s[%d] expected type %s, found %s of type %s",pcVar44,
                                   (ulong)uVar93,pcVar103,pcVar45,pcVar53);
                      }
                    }
                  }
                  lVar39 = CONCAT17(local_148[7],
                                    CONCAT16(local_148[6],
                                             CONCAT15(local_148[5],
                                                      CONCAT14(local_148[4],
                                                               CONCAT13(local_148[3],
                                                                        CONCAT12(local_148[2],
                                                                                 CONCAT11(local_148[
                                                  1],local_148[0]))))))) + uVar61;
                  *(char *)(lVar39 + -8) = (char)uVar95;
                  uVar61 = uVar61 - 0x10;
                  *(byte **)(lVar39 + -0x10) = pbVar96;
                } while (0 < (long)uVar76);
              }
            }
            if (((byte)*pDVar11 & 1) == 0) {
              uVar61 = (ulong)((byte)*pDVar11 >> 1);
            }
            else {
              uVar61 = *(ulong *)pDVar1;
            }
            local_188 = CONCAT44(local_188._4_4_,(uint)local_188);
            if (((uVar61 == 0) &&
                (local_188 = CONCAT44(local_188._4_4_,(uint)local_188),
                *(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) &&
               (local_188 = CONCAT44(local_188._4_4_,(uint)local_188), *pDVar3 == (Decoder)0x0)) {
              *pDVar3 = (Decoder)0x9;
              if (v8::internal::FLAG_trace_liftoff != '\0') {
                v8::internal::PrintF("[liftoff] unsupported: %s\n","return_call_indirect");
              }
              v8::internal::wasm::Decoder::errorf
                        (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                     (*(int *)(param_1 + 0x10) -
                                                     *(int *)(param_1 + 8))),
                         "unsupported liftoff operation: %s","return_call_indirect");
              goto code_r0x017d0008;
            }
            goto code_r0x017d0018;
          }
        }
        goto code_r0x017c81b4;
      }
      pcVar44 = "table of call_indirect must be of type funcref";
    }
    v8::internal::wasm::Decoder::error(param_1,pcVar44);
    pbVar80 = uStack_138;
    break;
  default:
    goto LAB_017c578c;
  case 0x1a:
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) <
        (ulong)(*(long *)pDVar4 - *(long *)this_00 >> 4)) {
      *(long *)pDVar4 = *(long *)pDVar4 + -0x10;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017c4c74;
code_r0x017c8be0:
      uVar61 = uVar61 >> 1;
    }
    else {
      if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(bVar14);
        if ((uVar61 & 1) == 0) {
code_r0x017c5994:
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          if (pbVar96 + 1 < *(byte **)pDVar57) {
            uVar89 = CONCAT11(bVar14,pbVar96[1]);
            goto code_r0x017c5994;
          }
          pcVar44 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
        uVar61 = (ulong)(byte)param_1[0x30];
      }
      if ((uVar61 & 1) == 0) goto code_r0x017c8be0;
code_r0x017c4c74:
      uVar61 = *(ulong *)pDVar1;
    }
    if ((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) {
      pcVar44 = (char *)(*(long *)(param_1 + 0x248) + -0xc);
      if (*pcVar44 == '\x01') {
        uVar61 = (ulong)*(byte *)(*(long *)(param_1 + 0x248) + -8);
        iVar37 = *(int *)(param_1 + uVar61 * 4 + 0x2c0);
        *(int *)(param_1 + uVar61 * 4 + 0x2c0) = iVar37 + -1;
        if (iVar37 + -1 == 0) {
          *(ulong *)(param_1 + 0x2b8) =
               *(ulong *)(param_1 + 0x2b8) & (1L << (uVar61 & 0x3f) ^ 0xffffffffffffffffU);
        }
      }
      *(char **)(param_1 + 0x248) = pcVar44;
    }
    goto LAB_017c4a30;
  case 0x1b:
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar96 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
        pbVar80 = *(byte **)pDVar101;
        if (pbVar80 < *(byte **)pDVar57) {
          bVar14 = *pbVar80;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar80 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017c95e8;
            }
            uVar89 = CONCAT11(bVar14,pbVar80[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017c95e8:
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) == 0) {
code_r0x017c964c:
            pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            if (pbVar96 + 1 < *(byte **)pDVar57) {
              uVar89 = CONCAT11(bVar14,pbVar96[1]);
              goto code_r0x017c964c;
            }
            pcVar103 = "<end>";
          }
          if (10 < (uint)uVar61) goto code_r0x017c97ec;
code_r0x017c9634:
          pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                              (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
        }
        else {
          pcVar103 = "<end>";
          if ((uint)uVar61 < 0xb) goto code_r0x017c9634;
code_r0x017c97ec:
          pcVar45 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s[%d] expected type %s, found %s of type %s",
                   pcVar44,2,"i32",pcVar103,pcVar45);
      }
    }
    else {
      if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\x02') goto code_r0x017c982c;
      uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(bVar14);
      if ((uVar61 & 1) == 0) {
code_r0x017c5aa8:
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        if (pbVar96 + 1 < *(byte **)pDVar57) {
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
          goto code_r0x017c5aa8;
        }
        pcVar44 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
    }
code_r0x017c982c:
    lVar56 = *(long *)pDVar4;
    lVar39 = *(long *)pDVar2;
    lVar66 = *(long *)this_00;
    if ((ulong)*(uint *)(lVar39 + -0x1dc) < (ulong)(lVar56 - lVar66 >> 4)) {
      uVar61 = *(ulong *)(lVar56 + -8);
      lVar56 = lVar56 + -0x10;
      *(long *)pDVar4 = lVar56;
    }
    else if (*(char *)(lVar39 + -0x1d0) == '\x02') {
      uVar61 = 10;
    }
    else {
      pbVar96 = *(byte **)pDVar101;
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017ca16c;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017ca16c:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
      uVar61 = 10;
      lVar39 = *(long *)(param_1 + 0x4e0);
      lVar56 = *(long *)(param_1 + 0x4c0);
      lVar66 = *(long *)(param_1 + 0x4b8);
    }
    uVar50 = (uint)uVar61;
    if ((ulong)*(uint *)(lVar39 + -0x1dc) < (ulong)(lVar56 - lVar66 >> 4)) {
      pbVar96 = *(byte **)(lVar56 + -0x10);
      bVar14 = *(byte *)(lVar56 + -8);
      uVar76 = (ulong)bVar14;
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar56 + -0x10);
      pbVar80 = uStack_138;
      if ((uint)bVar14 != (uVar50 & 0xff)) {
code_r0x017ca26c:
        uVar93 = (uint)uVar76;
        pbVar80 = uStack_138;
        if (((uVar50 & 0xff) != 7 || uVar93 != 8) && ((uVar50 & 0xff) != 6 || 2 < uVar93 - 7)) {
          if (((uVar50 & 0xff) != 10) && ((uVar76 != 10 && ((uVar50 & 0xff) != 9 || uVar93 != 8))))
          {
            pbVar80 = *(byte **)pDVar101;
            if (pbVar80 < *(byte **)pDVar57) {
              bVar14 = *pbVar80;
              uVar89 = (ushort)bVar14;
              uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar95 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar80 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cb4b4;
                }
                uVar89 = CONCAT11(bVar14,pbVar80[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cb4b4:
            if ((uVar50 & 0xff) < 10) {
              pcVar103 = *(char **)((long)&PTR_s_<stmt>_01cdb038 +
                                   (-(uVar61 >> 7 & 1) & 0xfffffffffffff800 | (uVar61 & 0xff) << 3))
              ;
            }
            else {
              pcVar103 = "<unknown>";
            }
            if (pbVar96 < *(byte **)pDVar57) {
              bVar14 = *pbVar96;
              uVar89 = (ushort)bVar14;
              uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar61 & 1) == 0) {
code_r0x017cb548:
                pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                if (pbVar96 + 1 < *(byte **)pDVar57) {
                  uVar89 = CONCAT11(bVar14,pbVar96[1]);
                  goto code_r0x017cb548;
                }
                pcVar45 = "<end>";
              }
              if (10 < uVar93) goto code_r0x017cb56c;
code_r0x017cb530:
              pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar76 >> 7) & 0xfffffffffffff800 | uVar76 << 3));
            }
            else {
              pcVar45 = "<end>";
              if (uVar93 < 0xb) goto code_r0x017cb530;
code_r0x017cb56c:
              pcVar53 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,
                       "%s[%d] expected type %s, found %s of type %s",pcVar44,0,pcVar103,pcVar45,
                       pcVar53);
            pbVar80 = uStack_138;
          }
        }
      }
    }
    else {
      if (*(char *)(lVar39 + -0x1d0) != '\x02') {
        pbVar96 = *(byte **)pDVar101;
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar96 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017ca240;
            }
            uVar89 = CONCAT11(bVar14,pbVar96[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017ca240:
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
      }
      pbVar96 = *(byte **)pDVar101;
      uVar76 = 10;
      pbVar80 = uStack_138;
      if ((uVar50 & 0xff) != 10) goto code_r0x017ca26c;
    }
    if ((uint)uVar76 != 10) {
      uVar50 = (uint)uVar76;
    }
    if ((uVar50 - 6 & 0xff) < 4) {
      pcVar44 = "select without type is only valid for value type inputs";
      goto code_r0x017c548c;
    }
    local_148[0] = SUB41(uVar50,0);
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    uStack_138 = pbVar80;
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar77 = *(undefined8 *)pDVar101;
      *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)(puVar63 + 1) =
           local_148[0];
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017cb5f4;
code_r0x017cb620:
      if ((byte)DVar15 >> 1 != 0) goto LAB_017c4a30;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,local_148);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017cb620;
code_r0x017cb5f4:
      if (*(ulong *)pDVar1 != 0) goto LAB_017c4a30;
    }
    if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
      FUN_017d14e0(this);
    }
    goto LAB_017c4a30;
  case 0x1c:
    if (((byte)param_1[0x50] >> 5 & 1) == 0) {
code_r0x017c5484:
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-anyref)";
      goto code_r0x017c548c;
    }
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
    v8::internal::wasm::SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    SelectTypeImmediate(local_148,param_1,*(uchar **)(param_1 + 0x10));
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 == 0) {
code_r0x017c6b7c:
        lVar39 = *(long *)pDVar4;
        if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
          pbVar96 = *(byte **)(lVar39 + -0x10);
          uVar61 = *(ulong *)(lVar39 + -8);
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
            pbVar80 = *(byte **)pDVar101;
            if (pbVar80 < *(byte **)pDVar57) {
              bVar14 = *pbVar80;
              uVar89 = (ushort)bVar14;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar80 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cc7d4;
                }
                uVar89 = CONCAT11(bVar14,pbVar80[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cc7d4:
            if (pbVar96 < *(byte **)pDVar57) {
              bVar14 = *pbVar96;
              uVar89 = (ushort)bVar14;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) == 0) {
code_r0x017cc838:
                pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                if (pbVar96 + 1 < *(byte **)pDVar57) {
                  uVar89 = CONCAT11(bVar14,pbVar96[1]);
                  goto code_r0x017cc838;
                }
                pcVar103 = "<end>";
              }
              if (10 < (uint)uVar61) goto code_r0x017cc888;
code_r0x017cc820:
              pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                                  (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
            }
            else {
              pcVar103 = "<end>";
              if ((uint)uVar61 < 0xb) goto code_r0x017cc820;
code_r0x017cc888:
              pcVar45 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,
                       "%s[%d] expected type %s, found %s of type %s",pcVar44,2,"i32",pcVar103,
                       pcVar45);
          }
        }
        else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
          pbVar96 = *(byte **)pDVar101;
          if (pbVar96 < *(byte **)pDVar57) {
            bVar14 = *pbVar96;
            uVar89 = (ushort)bVar14;
            uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
            if ((uVar61 & 1) != 0) {
              if (*(byte **)pDVar57 <= pbVar96 + 1) {
                pcVar44 = "<end>";
                goto code_r0x017cc854;
              }
              uVar89 = CONCAT11(bVar14,pbVar96[1]);
            }
            pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            pcVar44 = "<end>";
          }
code_r0x017cc854:
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
        }
        SVar54 = local_148[4];
        lVar56 = (long)(char)local_148[4];
        lVar39 = *(long *)pDVar4;
        if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
          pbVar96 = *(byte **)(lVar39 + -0x10);
          SVar16 = *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                    (lVar39 + -8);
          uVar61 = (ulong)(byte)SVar16;
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if (SVar16 != local_148[4]) {
code_r0x017cc9b8:
            uVar50 = (uint)uVar61;
            if ((SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x7 ||
                 uVar50 != 8) &&
               (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x6 ||
                2 < uVar50 - 7)) {
              if ((SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xa)
                 && ((uVar61 != 10 &&
                     (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                                0x9 || uVar50 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar14 = *pbVar80;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017cd7e8;
                    }
                    uVar89 = CONCAT11(bVar14,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017cd7e8:
                if ((byte)SVar54 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[lVar56];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) == 0) {
code_r0x017cd878:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017cd878;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar50) goto code_r0x017cd89c;
code_r0x017cd860:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar50 < 0xb) goto code_r0x017cd860;
code_r0x017cd89c:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,1,pcVar103,pcVar45
                           ,pcVar53);
              }
            }
          }
        }
        else {
          if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
            pbVar96 = *(byte **)pDVar101;
            if (pbVar96 < *(byte **)pDVar57) {
              bVar14 = *pbVar96;
              uVar89 = (ushort)bVar14;
              uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar61 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cc988;
                }
                uVar89 = CONCAT11(bVar14,pbVar96[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cc988:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
          }
          pbVar96 = *(byte **)pDVar101;
          uVar61 = 10;
          if (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xa)
          goto code_r0x017cc9b8;
        }
        SVar54 = local_148[4];
        lVar56 = (long)(char)local_148[4];
        lVar39 = *(long *)pDVar4;
        if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
          pbVar96 = *(byte **)(lVar39 + -0x10);
          SVar16 = *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                    (lVar39 + -8);
          uVar61 = (ulong)(byte)SVar16;
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if (SVar16 != local_148[4]) {
code_r0x017cd9b4:
            uVar50 = (uint)uVar61;
            if ((SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x7 ||
                 uVar50 != 8) &&
               (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x6 ||
                2 < uVar50 - 7)) {
              if ((SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xa)
                 && ((uVar61 != 10 &&
                     (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                                0x9 || uVar50 != 8)))) {
                pbVar80 = *(byte **)pDVar101;
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar14 = *pbVar80;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar80 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017cda7c;
                    }
                    uVar89 = CONCAT11(bVar14,pbVar80[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017cda7c:
                if ((byte)SVar54 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[lVar56];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) == 0) {
code_r0x017cdb0c:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar96 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar96[1]);
                      goto code_r0x017cdb0c;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar50) goto code_r0x017cdb30;
code_r0x017cdaf4:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar50 < 0xb) goto code_r0x017cdaf4;
code_r0x017cdb30:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,0,pcVar103,pcVar45
                           ,pcVar53);
              }
            }
          }
        }
        else {
          if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
            pbVar96 = *(byte **)pDVar101;
            if (pbVar96 < *(byte **)pDVar57) {
              bVar14 = *pbVar96;
              uVar89 = (ushort)bVar14;
              uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar61 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cd988;
                }
                uVar89 = CONCAT11(bVar14,pbVar96[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cd988:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
          }
          pbVar96 = *(byte **)pDVar101;
          uVar61 = 10;
          if (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xa)
          goto code_r0x017cd9b4;
        }
        local_190 = (Decoder *)CONCAT71(local_190._1_7_,local_148[4]);
        puVar63 = *(undefined8 **)(param_1 + 0x4c0);
        if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
          uVar77 = *(undefined8 *)pDVar101;
          *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)(puVar63 + 1) =
               local_148[4];
          *puVar63 = uVar77;
          *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
        }
        if (((byte)*pDVar11 & 1) == 0) {
          if ((byte)*pDVar11 >> 1 == 0) {
code_r0x017cdbcc:
            if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
              FUN_017d14e0(this);
            }
          }
        }
        else if (*(ulong *)pDVar1 == 0) goto code_r0x017cdbcc;
        uVar50 = CONCAT13(local_148[3],CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0]))) +
                 1;
        pbVar80 = uStack_138;
        break;
      }
    }
    else if (*(ulong *)pDVar1 == 0) goto code_r0x017c6b7c;
    goto LAB_017c4a30;
  case 0x20:
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,(uint *)pSVar10,"local index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","local index");
      uVar61 = 0;
    }
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    plVar65 = *(long **)(param_1 + 0x68);
    pbVar96 = *(byte **)(param_1 + 0x10);
    if (plVar65 != (long *)0x0) {
      uVar76 = plVar65[1] - *plVar65;
      if ((uint)uVar61 < (uint)uVar76) {
        if (uVar76 <= uVar61) goto code_r0x017d0a00;
        local_148[4] = *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                        (*plVar65 + uVar61);
        local_190 = (Decoder *)CONCAT71(local_190._1_7_,local_148[4]);
        puVar63 = *(undefined8 **)(param_1 + 0x4c0);
        if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
          *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)(puVar63 + 1) =
               local_148[4];
          *puVar63 = pbVar96;
          *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
          DVar15 = *pDVar11;
          if (((byte)DVar15 & 1) == 0) goto code_r0x017c7738;
code_r0x017c7b4c:
          if (*(ulong *)pDVar1 == 0) goto code_r0x017c7b58;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
          DVar15 = *pDVar11;
          if (((byte)DVar15 & 1) != 0) goto code_r0x017c7b4c;
code_r0x017c7738:
          if ((byte)DVar15 >> 1 == 0) {
code_r0x017c7b58:
            SVar54 = local_148[4];
            if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
              uVar61 = (ulong)CONCAT13(local_148[3],
                                       CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])));
              puVar40 = *(undefined1 **)(param_1 + 0x240);
              cVar83 = puVar40[uVar61 * 0xc];
              if (cVar83 == '\0') {
                puVar68 = &DAT_01a634d8;
                if (1 < (byte)local_148[4] - 3) {
                  puVar68 = &DAT_01a634d0;
                }
                uVar76 = *puVar68 & (*(ulong *)(param_1 + 0x2b8) ^ 0xffffffffffffffff);
                if (uVar76 == 0) {
                  uVar76 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                                     ((LiftoffAssembler *)this,*puVar68,0);
                }
                else {
                  uVar76 = (uVar76 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar76 & 0x5555555555555555) << 1;
                  uVar76 = (uVar76 & 0xcccccccccccccccc) >> 2 | (uVar76 & 0x3333333333333333) << 2;
                  uVar76 = (uVar76 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar76 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar76 = (uVar76 & 0xff00ff00ff00ff00) >> 8 | (uVar76 & 0xff00ff00ff00ff) << 8;
                  uVar76 = (uVar76 & 0xffff0000ffff0000) >> 0x10 | (uVar76 & 0xffff0000ffff) << 0x10
                  ;
                  uVar76 = LZCOUNT(uVar76 >> 0x20 | uVar76 << 0x20);
                }
                v8::internal::wasm::LiftoffAssembler::Fill
                          ((LiftoffAssembler *)this,uVar76 & 0xff,
                           *(undefined4 *)(puVar40 + uVar61 * 0xc + 8),local_148[4]);
                uVar55 = puVar40[uVar61 * 0xc + 1];
                *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | 1L << (uVar76 & 0x3f);
                *(int *)(param_1 + (uVar76 & 0xff) * 4 + 0x2c0) =
                     *(int *)(param_1 + (uVar76 & 0xff) * 4 + 0x2c0) + 1;
                puVar40 = *(undefined1 **)(param_1 + 0x248);
                if (puVar40 == *(undefined1 **)(param_1 + 0x240)) {
                  iVar37 = 8;
                }
                else {
                  iVar37 = *(int *)(puVar40 + -4) + 8;
                }
                if (puVar40 == *(undefined1 **)(param_1 + 0x250)) {
                  puVar40 = (undefined1 *)
                            v8::base::
                            SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                                      ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>
                                        *)this_01);
                }
                puVar40[1] = uVar55;
                puVar40[4] = (char)uVar76;
                *(int *)(puVar40 + 8) = iVar37;
                *puVar40 = 1;
                *(undefined1 **)(param_1 + 0x248) = puVar40 + 0xc;
              }
              else {
                if (cVar83 == '\x02') {
                  puVar42 = *(undefined1 **)(param_1 + 0x248);
                  uVar74 = *(undefined4 *)(puVar40 + uVar61 * 0xc + 4);
                  if (puVar42 == puVar40) {
                    iVar37 = 8;
                  }
                  else {
                    iVar37 = *(int *)(puVar42 + -4) + 8;
                  }
                  if (puVar42 == *(undefined1 **)(param_1 + 0x250)) {
                    puVar42 = (undefined1 *)
                              v8::base::
                              SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                                        ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>
                                          *)this_01);
                  }
                  uVar55 = 2;
                  *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                   (puVar42 + 1) = SVar54;
                  *(undefined4 *)(puVar42 + 4) = uVar74;
                }
                else {
                  if (cVar83 != '\x01') goto code_r0x017cd238;
                  bVar14 = puVar40[uVar61 * 0xc + 4];
                  uVar76 = (ulong)bVar14;
                  uVar17 = puVar40[uVar61 * 0xc + 1];
                  *(ulong *)(param_1 + 0x2b8) = 1L << (uVar76 & 0x3f) | *(ulong *)(param_1 + 0x2b8);
                  *(int *)(param_1 + uVar76 * 4 + 0x2c0) =
                       *(int *)(param_1 + uVar76 * 4 + 0x2c0) + 1;
                  puVar42 = *(undefined1 **)(param_1 + 0x248);
                  if (puVar42 == puVar40) {
                    iVar37 = 8;
                  }
                  else {
                    iVar37 = *(int *)(puVar42 + -4) + 8;
                  }
                  if (puVar42 == *(undefined1 **)(param_1 + 0x250)) {
                    puVar42 = (undefined1 *)
                              v8::base::
                              SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                                        ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>
                                          *)this_01);
                  }
                  uVar55 = 1;
                  puVar42[1] = uVar17;
                  puVar42[4] = bVar14;
                }
                *(int *)(puVar42 + 8) = iVar37;
                *puVar42 = uVar55;
                *(undefined1 **)(param_1 + 0x248) = puVar42 + 0xc;
              }
            }
          }
        }
code_r0x017cd238:
        uVar50 = CONCAT13(local_148[0xb],CONCAT12(local_148[10],CONCAT11(local_148[9],local_148[8]))
                         ) + 1;
        pbVar80 = uStack_138;
        break;
      }
    }
    goto code_r0x017c78f0;
  case 0x21:
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,(uint *)pSVar10,"local index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","local index");
      uVar61 = 0;
    }
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    plVar65 = *(long **)(param_1 + 0x68);
    pbVar96 = *(byte **)(param_1 + 0x10);
    if (plVar65 != (long *)0x0) {
      uVar76 = plVar65[1] - *plVar65;
      if ((uint)uVar61 < (uint)uVar76) {
        if (uVar76 <= uVar61) goto code_r0x017d0a00;
        local_148[4] = *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                        (*plVar65 + uVar61);
        lVar39 = *(long *)(param_1 + 0x4c0);
        bVar14 = *(byte *)(*(long *)(param_1 + 0x498) + uVar61);
        if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
            (ulong)(lVar39 - *(long *)(param_1 + 0x4b8) >> 4)) {
          pbVar80 = *(byte **)(lVar39 + -0x10);
          bVar18 = *(byte *)(lVar39 + -8);
          uVar61 = (ulong)bVar18;
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if (bVar18 != bVar14) {
code_r0x017cbc7c:
            uVar50 = (uint)uVar61;
            if ((bVar14 != 7 || uVar50 != 8) && (bVar14 != 6 || 2 < uVar50 - 7)) {
              if ((bVar14 != 10) && ((uVar61 != 10 && (bVar14 != 9 || uVar50 != 8)))) {
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar18 = *pbVar96;
                  uVar89 = (ushort)bVar18;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017ccce8;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar96[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017ccce8:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar14 = *pbVar80;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) == 0) {
code_r0x017ccd70:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar80 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar80[1]);
                      goto code_r0x017ccd70;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar50) goto code_r0x017ccfc4;
code_r0x017ccd58:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar50 < 0xb) goto code_r0x017ccd58;
code_r0x017ccfc4:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar80,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,0,pcVar103,pcVar45
                           ,pcVar53);
              }
            }
          }
        }
        else {
          pbVar80 = pbVar96;
          if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
            if (pbVar96 < *(byte **)pDVar57) {
              bVar18 = *pbVar96;
              uVar89 = (ushort)bVar18;
              uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar61 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cbc50;
                }
                uVar89 = CONCAT11(bVar18,pbVar96[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cbc50:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            pbVar80 = *(byte **)(param_1 + 0x10);
          }
          uVar61 = 10;
          pbVar96 = pbVar80;
          if (bVar14 != 10) goto code_r0x017cbc7c;
        }
        if (((byte)*pDVar11 & 1) == 0) {
          uVar61 = (ulong)((byte)*pDVar11 >> 1);
        }
        else {
          uVar61 = *(ulong *)pDVar1;
        }
        if ((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) {
          uVar74 = CONCAT13(local_148[3],CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])))
          ;
          uVar77 = 0;
code_r0x017cd038:
          FUN_017e1250(this,uVar74,uVar77);
        }
code_r0x017cd040:
        uVar50 = CONCAT13(local_148[0xb],CONCAT12(local_148[10],CONCAT11(local_148[9],local_148[8]))
                         ) + 1;
        pbVar80 = uStack_138;
        break;
      }
    }
    goto code_r0x017c78f0;
  case 0x22:
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,(uint *)pSVar10,"local index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","local index");
      uVar61 = 0;
    }
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    plVar65 = *(long **)(param_1 + 0x68);
    pbVar96 = *(byte **)(param_1 + 0x10);
    if (plVar65 != (long *)0x0) {
      uVar76 = plVar65[1] - *plVar65;
      if ((uint)uVar61 < (uint)uVar76) {
        if (uVar76 <= uVar61) goto code_r0x017d0a00;
        local_148[4] = *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                        (*plVar65 + uVar61);
        lVar39 = *(long *)(param_1 + 0x4c0);
        bVar14 = *(byte *)(*(long *)(param_1 + 0x498) + uVar61);
        if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
            (ulong)(lVar39 - *(long *)(param_1 + 0x4b8) >> 4)) {
          pbVar80 = *(byte **)(lVar39 + -0x10);
          bVar18 = *(byte *)(lVar39 + -8);
          uVar61 = (ulong)bVar18;
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if (bVar18 != bVar14) {
code_r0x017cbba0:
            uVar50 = (uint)uVar61;
            if ((bVar14 != 7 || uVar50 != 8) && (bVar14 != 6 || 2 < uVar50 - 7)) {
              if ((bVar14 != 10) && ((uVar61 != 10 && (bVar14 != 9 || uVar50 != 8)))) {
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar18 = *pbVar96;
                  uVar89 = (ushort)bVar18;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017ccc44;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar96[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017ccc44:
                if (bVar14 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar14 = *pbVar80;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) == 0) {
code_r0x017ccccc:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar80 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar80[1]);
                      goto code_r0x017ccccc;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar50) goto code_r0x017ccef0;
code_r0x017cccb4:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar50 < 0xb) goto code_r0x017cccb4;
code_r0x017ccef0:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar80,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,0,pcVar103,pcVar45
                           ,pcVar53);
              }
            }
          }
        }
        else {
          pbVar80 = pbVar96;
          if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
            if (pbVar96 < *(byte **)pDVar57) {
              bVar18 = *pbVar96;
              uVar89 = (ushort)bVar18;
              uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar61 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cbb70;
                }
                uVar89 = CONCAT11(bVar18,pbVar96[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cbb70:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            pbVar80 = *(byte **)(param_1 + 0x10);
          }
          uVar61 = 10;
          pbVar96 = pbVar80;
          if (bVar14 != 10) goto code_r0x017cbba0;
        }
        local_190 = (Decoder *)CONCAT71(local_190._1_7_,(char)uVar61);
        puVar63 = *(undefined8 **)(param_1 + 0x4c0);
        if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
          uVar77 = *(undefined8 *)pDVar101;
          *(char *)(puVar63 + 1) = (char)uVar61;
          *puVar63 = uVar77;
          *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
        }
        if (((byte)*pDVar11 & 1) == 0) {
          if ((byte)*pDVar11 >> 1 == 0) {
code_r0x017ccf88:
            if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
              uVar74 = CONCAT13(local_148[3],
                                CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])));
              uVar77 = 1;
              goto code_r0x017cd038;
            }
          }
        }
        else if (*(ulong *)pDVar1 == 0) goto code_r0x017ccf88;
        goto code_r0x017cd040;
      }
    }
code_r0x017c78f0:
    pbVar96 = pbVar96 + 1;
    pcVar44 = "invalid local index: %u";
code_r0x017c78f4:
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)pbVar96,pcVar44,uVar61);
    goto LAB_017c4a30;
  case 0x23:
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xc] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xd] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xe] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xf] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,(uint *)&uStack_138,"global index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        uStack_138 = (byte *)CONCAT44(uStack_138._4_4_,1);
      }
    }
    else {
      uStack_138._0_4_ = 0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","global index");
      uVar61 = 0;
    }
    uVar50 = (uint)uStack_138;
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    lVar56 = *(long *)(param_1 + 0x48);
    lVar39 = *(long *)(param_1 + 0x10);
    if ((lVar56 == 0) ||
       (lVar66 = *(long *)(lVar56 + 0x18), (ulong)(*(long *)(lVar56 + 0x20) - lVar66 >> 5) <= uVar61
       )) {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)(lVar39 + 1),"invalid global index: %u",uVar61);
      uVar50 = uVar50 + 1;
      pbVar80 = uStack_138;
    }
    else {
      lVar56 = lVar66 + uVar61 * 0x20;
      local_148[8] = SUB81(lVar56,0);
      local_148[9] = SUB81((ulong)lVar56 >> 8,0);
      local_148[10] = SUB81((ulong)lVar56 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)lVar56 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)lVar56 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)lVar56 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)lVar56 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)lVar56 >> 0x38,0);
      local_148[4] = *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                      (lVar66 + uVar61 * 0x20);
      local_190 = (Decoder *)CONCAT71(local_190._1_7_,local_148[4]);
      plVar65 = *(long **)(param_1 + 0x4c0);
      if (plVar65 < *(long **)(param_1 + 0x4c8)) {
        *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)(plVar65 + 1) =
             local_148[4];
        *plVar65 = lVar39;
        *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
        DVar15 = *pDVar11;
        if (((byte)DVar15 & 1) == 0) goto code_r0x017c7154;
code_r0x017c7a24:
        if (*(ulong *)pDVar1 == 0) goto code_r0x017c7a30;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
        DVar15 = *pDVar11;
        if (((byte)DVar15 & 1) != 0) goto code_r0x017c7a24;
code_r0x017c7154:
        if ((byte)DVar15 >> 1 == 0) {
code_r0x017c7a30:
          if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
            pbVar96 = (byte *)(*(long *)(**(long **)(param_1 + 0x3d8) + 0x18) +
                              (ulong)CONCAT13(local_148[3],
                                              CONCAT12(local_148[2],
                                                       CONCAT11(local_148[1],local_148[0]))) * 0x20)
            ;
            uVar61 = FUN_017d5c40(this,param_1,*pbVar96,"global");
            if ((uVar61 & 1) != 0) {
              local_190 = (Decoder *)0x0;
              uStack_b0 = (Decoder *)((ulong)uStack_b0 & 0xffffffff00000000);
              auVar104 = FUN_017e151c(this,pbVar96,&local_190,&uStack_b0);
              uVar61 = (ulong)local_190;
              bVar14 = *pbVar96;
              puVar68 = &DAT_01a634d8;
              if (1 < bVar14 - 3) {
                puVar68 = &DAT_01a634d0;
              }
              uVar76 = *puVar68 & ((ulong)local_190 ^ 0xffffffffffffffff) &
                       (*(ulong *)(param_1 + 0x2b8) ^ 0xffffffffffffffff);
              if (uVar76 == 0) {
                uVar76 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                                   ((LiftoffAssembler *)this,*puVar68,local_190);
                bVar14 = *pbVar96;
              }
              else {
                uVar76 = (uVar76 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar76 & 0x5555555555555555) << 1;
                uVar76 = (uVar76 & 0xcccccccccccccccc) >> 2 | (uVar76 & 0x3333333333333333) << 2;
                uVar76 = (uVar76 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar76 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar76 = (uVar76 & 0xff00ff00ff00ff00) >> 8 | (uVar76 & 0xff00ff00ff00ff) << 8;
                uVar76 = (uVar76 & 0xffff0000ffff0000) >> 0x10 | (uVar76 & 0xffff0000ffff) << 0x10;
                uVar76 = LZCOUNT(uVar76 >> 0x20 | uVar76 << 0x20);
              }
              uVar95 = 1L << (uVar76 & 0x3f);
              local_190 = (Decoder *)(uVar95 | uVar61);
              if (3 < bVar14 - 1) goto LAB_017d09f4;
              uVar61 = uVar76 & 0xff;
              v8::internal::wasm::LiftoffAssembler::Load
                        (this,uVar61,auVar104._0_8_,auVar104._8_8_ & 0xffffffff,0xffffffff,2,
                         (ulong)uStack_b0 & 0xffffffff,
                         *(undefined8 *)(&UNK_01a63d98 + (long)(char)(bVar14 - 1) * 8),local_190,0,1
                        );
              bVar14 = *pbVar96;
              *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | uVar95;
              *(int *)(param_1 + uVar61 * 4 + 0x2c0) = *(int *)(param_1 + uVar61 * 4 + 0x2c0) + 1;
              puVar40 = *(undefined1 **)(param_1 + 0x248);
              if (puVar40 == *(undefined1 **)(param_1 + 0x240)) {
                iVar37 = 8;
              }
              else {
                iVar37 = *(int *)(puVar40 + -4) + 8;
              }
              if (puVar40 == *(undefined1 **)(param_1 + 0x250)) {
                puVar40 = (undefined1 *)
                          v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>
                          ::Grow((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                                 this_01);
              }
              puVar40[1] = bVar14;
              *(int *)(puVar40 + 8) = iVar37;
              puVar40[4] = (char)uVar76;
              *puVar40 = 1;
              *(undefined1 **)(param_1 + 0x248) = puVar40 + 0xc;
            }
          }
        }
      }
      uVar50 = uVar50 + 1;
      pbVar80 = uStack_138;
    }
    break;
  case 0x24:
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xc] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xd] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xe] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[0xf] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar80 = pbVar96 + 1;
    if (pbVar80 < *(byte **)pDVar57) {
      uVar50 = *pbVar80 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar80 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,pbVar96 + 2,(uint *)&uStack_138,"global index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        uStack_138 = (byte *)CONCAT44(uStack_138._4_4_,1);
      }
    }
    else {
      uStack_138._0_4_ = 0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar80,"expected %s","global index");
      uVar61 = 0;
    }
    uVar50 = (uint)uStack_138;
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    lVar39 = *(long *)(param_1 + 0x48);
    pbVar96 = *(byte **)(param_1 + 0x10);
    if ((lVar39 == 0) ||
       ((ulong)(*(long *)(lVar39 + 0x20) - *(long *)(lVar39 + 0x18) >> 5) <= uVar61)) {
      pbVar96 = pbVar96 + 1;
      pcVar44 = "invalid global index: %u";
    }
    else {
      pSVar13 = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                (*(long *)(lVar39 + 0x18) + uVar61 * 0x20);
      local_148[8] = SUB81(pSVar13,0);
      local_148[9] = SUB81((ulong)pSVar13 >> 8,0);
      local_148[10] = SUB81((ulong)pSVar13 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)pSVar13 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)pSVar13 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)pSVar13 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)pSVar13 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)pSVar13 >> 0x38,0);
      SVar54 = *pSVar13;
      local_148[4] = SVar54;
      if (pSVar13[1] != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0) {
        lVar39 = *(long *)pDVar4;
        if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
          pbVar80 = *(byte **)(lVar39 + -0x10);
          SVar16 = *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                    (lVar39 + -8);
          uVar61 = (ulong)(byte)SVar16;
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if (SVar16 != SVar54) {
code_r0x017cc714:
            uVar93 = (uint)uVar61;
            if ((SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x7 ||
                 uVar93 != 8) &&
               (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x6 ||
                2 < uVar93 - 7)) {
              if ((SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xa)
                 && ((uVar61 != 10 &&
                     (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)
                                0x9 || uVar93 != 8)))) {
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar14 = *pbVar96;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017cd5e4;
                    }
                    uVar89 = CONCAT11(bVar14,pbVar96[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017cd5e4:
                if ((byte)SVar54 < 10) {
                  pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)SVar54];
                }
                else {
                  pcVar103 = "<unknown>";
                }
                if (pbVar80 < *(byte **)pDVar57) {
                  bVar14 = *pbVar80;
                  uVar89 = (ushort)bVar14;
                  uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar76 & 1) == 0) {
code_r0x017cd66c:
                    pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    if (pbVar80 + 1 < *(byte **)pDVar57) {
                      uVar89 = CONCAT11(bVar14,pbVar80[1]);
                      goto code_r0x017cd66c;
                    }
                    pcVar45 = "<end>";
                  }
                  if (10 < uVar93) goto code_r0x017cd690;
code_r0x017cd654:
                  pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
                }
                else {
                  pcVar45 = "<end>";
                  if (uVar93 < 0xb) goto code_r0x017cd654;
code_r0x017cd690:
                  pcVar53 = "<unknown>";
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar80,
                           "%s[%d] expected type %s, found %s of type %s",pcVar44,0,pcVar103,pcVar45
                           ,pcVar53);
              }
            }
          }
        }
        else {
          pbVar80 = pbVar96;
          if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
            if (pbVar96 < *(byte **)pDVar57) {
              bVar14 = *pbVar96;
              uVar89 = (ushort)bVar14;
              uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar61 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cc6e8;
                }
                uVar89 = CONCAT11(bVar14,pbVar96[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cc6e8:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
            pbVar80 = *(byte **)(param_1 + 0x10);
          }
          uVar61 = 10;
          pbVar96 = pbVar80;
          if (SVar54 != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0xa)
          goto code_r0x017cc714;
        }
        if (((byte)*pDVar11 & 1) == 0) {
          uVar61 = (ulong)((byte)*pDVar11 >> 1);
        }
        else {
          uVar61 = *(ulong *)pDVar1;
        }
        if ((uVar61 == 0) && (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0')) {
          pbVar96 = (byte *)(*(long *)(**(long **)(param_1 + 0x3d8) + 0x18) +
                            (ulong)CONCAT13(local_148[3],
                                            CONCAT12(local_148[2],
                                                     CONCAT11(local_148[1],local_148[0]))) * 0x20);
          uVar61 = FUN_017d5c40(this,param_1,*pbVar96,"global");
          if ((uVar61 & 1) != 0) {
            local_190 = (Decoder *)0x0;
            uStack_b0 = (Decoder *)((ulong)uStack_b0 & 0xffffffff00000000);
            auVar104 = FUN_017e151c(this,pbVar96,&local_190,&uStack_b0);
            uVar61 = (ulong)local_190;
            uVar76 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                               ((LiftoffAssembler *)this,local_190);
            local_190 = (Decoder *)(1L << (uVar76 & 0x3f) | uVar61);
            if (3 < *pbVar96 - 1) goto LAB_017d09f4;
            v8::internal::wasm::LiftoffAssembler::Store
                      (this,auVar104._0_8_,auVar104._8_8_ & 0xffffffff,0xffffffff,2,
                       (ulong)uStack_b0 & 0xffffffff,uVar76 & 0xff,
                       *(undefined8 *)(&UNK_01a63db8 + (long)(char)(*pbVar96 - 1) * 8),0,0,1);
          }
        }
        uVar50 = uVar50 + 1;
        pbVar80 = uStack_138;
        break;
      }
      pcVar44 = "immutable global #%u cannot be assigned";
    }
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)pbVar96,pcVar44,uVar61);
    uVar50 = uVar50 + 1;
    pbVar80 = uStack_138;
    break;
  case 0x25:
    if (((byte)param_1[0x50] >> 5 & 1) == 0) goto code_r0x017c5484;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
    local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar96 = (byte *)(*(long *)(param_1 + 0x10) + 1);
    if (pbVar96 < *(byte **)(param_1 + 0x18)) {
      uVar50 = *pbVar96 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar96 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),puVar67,"table index",
                            uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"expected %s","table index");
      uVar61 = 0;
    }
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    lVar39 = *(long *)(param_1 + 0x48);
    pbVar96 = *(byte **)(param_1 + 0x10);
    uVar50 = CONCAT13(local_148[7],CONCAT12(local_148[6],CONCAT11(local_148[5],local_148[4]))) + 1;
    if ((lVar39 == 0) ||
       ((ulong)(*(long *)(lVar39 + 0xc0) - *(long *)(lVar39 + 0xb8) >> 4) <= uVar61)) {
code_r0x017c834c:
      pcVar44 = "invalid table index: %u";
      goto code_r0x017c8424;
    }
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar80 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar96 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017cca8c;
            }
            uVar89 = CONCAT11(bVar14,pbVar96[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017cca8c:
        if (pbVar80 < *(byte **)pDVar57) {
          bVar14 = *pbVar80;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) == 0) {
code_r0x017ccaf0:
            pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            if (pbVar80 + 1 < *(byte **)pDVar57) {
              uVar89 = CONCAT11(bVar14,pbVar80[1]);
              goto code_r0x017ccaf0;
            }
            pcVar103 = "<end>";
          }
          if (10 < (uint)uVar61) goto code_r0x017ccd90;
code_r0x017ccad8:
          pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                              (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
        }
        else {
          pcVar103 = "<end>";
          if ((uint)uVar61 < 0xb) goto code_r0x017ccad8;
code_r0x017ccd90:
          pcVar45 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar80,"%s[%d] expected type %s, found %s of type %s",
                   pcVar44,0,"i32",pcVar103,pcVar45);
      }
    }
    else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017ccb08;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017ccb08:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
    }
    uVar55 = *(undefined1 *)
              (*(long *)(*(long *)(param_1 + 0x48) + 0xb8) +
              (ulong)CONCAT13(local_148[3],
                              CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0]))) * 0x10);
    local_190 = (Decoder *)CONCAT71(local_190._1_7_,uVar55);
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar77 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = uVar55;
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017cce18;
code_r0x017cce40:
      pbVar80 = uStack_138;
      if (*(ulong *)pDVar1 != 0) break;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017cce40;
code_r0x017cce18:
      pbVar80 = uStack_138;
      if ((byte)DVar15 >> 1 != 0) break;
    }
    pbVar80 = uStack_138;
    if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
      *pDVar3 = (Decoder)0x6;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","table_get");
      }
      uVar93 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
      pcVar44 = "table_get";
code_r0x017ce684:
      v8::internal::wasm::Decoder::errorf
                (uVar36,(char *)(ulong)uVar93,"unsupported liftoff operation: %s",pcVar44);
      pbVar80 = uStack_138;
    }
    break;
  case 0x26:
    if (((byte)param_1[0x50] >> 5 & 1) == 0) goto code_r0x017c5484;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
    local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar96 = (byte *)(*(long *)(param_1 + 0x10) + 1);
    if (pbVar96 < *(byte **)(param_1 + 0x18)) {
      uVar50 = *pbVar96 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar96 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),puVar67,"table index",
                            uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"expected %s","table index");
      uVar61 = 0;
    }
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    lVar39 = *(long *)(param_1 + 0x48);
    pbVar96 = *(byte **)(param_1 + 0x10);
    uVar50 = CONCAT13(local_148[7],CONCAT12(local_148[6],CONCAT11(local_148[5],local_148[4]))) + 1;
    if ((lVar39 == 0) ||
       ((ulong)(*(long *)(lVar39 + 0xc0) - *(long *)(lVar39 + 0xb8) >> 4) <= uVar61))
    goto code_r0x017c834c;
    bVar14 = *(byte *)(*(long *)(lVar39 + 0xb8) + uVar61 * 0x10);
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar80 = *(byte **)(lVar39 + -0x10);
      bVar18 = *(byte *)(lVar39 + -8);
      uVar61 = (ulong)bVar18;
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if (bVar18 != bVar14) {
code_r0x017ccb74:
        uVar93 = (uint)uVar61;
        if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
          if ((bVar14 != 10) && ((uVar61 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
            if (pbVar96 < *(byte **)pDVar57) {
              bVar18 = *pbVar96;
              uVar89 = (ushort)bVar18;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cde4c;
                }
                uVar89 = CONCAT11(bVar18,pbVar96[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cde4c:
            if (bVar14 < 10) {
              pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
            }
            else {
              pcVar103 = "<unknown>";
            }
            if (pbVar80 < *(byte **)pDVar57) {
              bVar14 = *pbVar80;
              uVar89 = (ushort)bVar14;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) == 0) {
code_r0x017cded4:
                pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                if (pbVar80 + 1 < *(byte **)pDVar57) {
                  uVar89 = CONCAT11(bVar14,pbVar80[1]);
                  goto code_r0x017cded4;
                }
                pcVar45 = "<end>";
              }
              if (10 < uVar93) goto code_r0x017ce3ac;
code_r0x017cdebc:
              pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
            }
            else {
              pcVar45 = "<end>";
              if (uVar93 < 0xb) goto code_r0x017cdebc;
code_r0x017ce3ac:
              pcVar53 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar80,
                       "%s[%d] expected type %s, found %s of type %s",pcVar44,1,pcVar103,pcVar45,
                       pcVar53);
          }
        }
      }
    }
    else {
      pbVar80 = pbVar96;
      if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
        if (pbVar96 < *(byte **)pDVar57) {
          bVar18 = *pbVar96;
          uVar89 = (ushort)bVar18;
          uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar61 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar96 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017ccb44;
            }
            uVar89 = CONCAT11(bVar18,pbVar96[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017ccb44:
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
        pbVar80 = *(byte **)(param_1 + 0x10);
      }
      uVar61 = 10;
      pbVar96 = pbVar80;
      if (bVar14 != 10) goto code_r0x017ccb74;
    }
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar96 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
        pbVar80 = *(byte **)pDVar101;
        if (pbVar80 < *(byte **)pDVar57) {
          bVar14 = *pbVar80;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar80 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017ce500;
            }
            uVar89 = CONCAT11(bVar14,pbVar80[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017ce500:
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) == 0) {
code_r0x017ce564:
            pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            if (pbVar96 + 1 < *(byte **)pDVar57) {
              uVar89 = CONCAT11(bVar14,pbVar96[1]);
              goto code_r0x017ce564;
            }
            pcVar103 = "<end>";
          }
          if (10 < (uint)uVar61) goto code_r0x017ce5b0;
code_r0x017ce54c:
          pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                              (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
        }
        else {
          pcVar103 = "<end>";
          if ((uint)uVar61 < 0xb) goto code_r0x017ce54c;
code_r0x017ce5b0:
          pcVar45 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s[%d] expected type %s, found %s of type %s",
                   pcVar44,0,"i32",pcVar103,pcVar45);
      }
    }
    else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
      pbVar96 = *(byte **)pDVar101;
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017ce580;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017ce580:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
    }
    pbVar80 = uStack_138;
    if (((byte)*pDVar11 & 1) == 0) {
      if ((byte)*pDVar11 >> 1 == 0) {
code_r0x017ce60c:
        if ((*(char *)(*(long *)pDVar2 + -0x1d0) != '\0') || (*pDVar3 != (Decoder)0x0)) break;
        *pDVar3 = (Decoder)0x6;
        if (v8::internal::FLAG_trace_liftoff != '\0') {
          v8::internal::PrintF("[liftoff] unsupported: %s\n","table_set");
        }
        uVar93 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
        pcVar44 = "table_set";
        goto code_r0x017ce684;
      }
    }
    else if (*(ulong *)pDVar1 == 0) goto code_r0x017ce60c;
    break;
  case 0x28:
    uVar77 = 0;
    goto code_r0x017c55fc;
  case 0x29:
    uVar77 = 5;
    goto code_r0x017c55fc;
  case 0x2a:
    uVar77 = 0xc;
    goto code_r0x017c55fc;
  case 0x2b:
    uVar77 = 0xd;
    goto code_r0x017c55fc;
  case 0x2c:
    uVar77 = 1;
    goto code_r0x017c55fc;
  case 0x2d:
    uVar77 = 2;
    goto code_r0x017c55fc;
  case 0x2e:
    uVar77 = 3;
    goto code_r0x017c55fc;
  case 0x2f:
    uVar77 = 4;
    goto code_r0x017c55fc;
  case 0x30:
    uVar77 = 6;
    goto code_r0x017c55fc;
  case 0x31:
    uVar77 = 7;
    goto code_r0x017c55fc;
  case 0x32:
    uVar77 = 8;
    goto code_r0x017c55fc;
  case 0x33:
    uVar77 = 9;
    goto code_r0x017c55fc;
  case 0x34:
    uVar77 = 10;
    goto code_r0x017c55fc;
  case 0x35:
    uVar77 = 0xb;
code_r0x017c55fc:
    iVar37 = FUN_017d174c(param_1,uVar77,0);
code_r0x017c47a4:
    uVar50 = iVar37 + 1;
    pbVar80 = uStack_138;
    break;
  case 0x36:
    uVar77 = 0;
    goto code_r0x017c479c;
  case 0x37:
    uVar77 = 3;
    goto code_r0x017c479c;
  case 0x38:
    uVar77 = 7;
    goto code_r0x017c479c;
  case 0x39:
    uVar77 = 8;
    goto code_r0x017c479c;
  case 0x3a:
    uVar77 = 1;
    goto code_r0x017c479c;
  case 0x3b:
    uVar77 = 2;
    goto code_r0x017c479c;
  case 0x3c:
    uVar77 = 4;
    goto code_r0x017c479c;
  case 0x3d:
    uVar77 = 5;
    goto code_r0x017c479c;
  case 0x3e:
    uVar77 = 6;
code_r0x017c479c:
    iVar37 = FUN_017d1c80(param_1,uVar77,0);
    goto code_r0x017c47a4;
  case 0x3f:
    if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
code_r0x017c57e0:
      pbVar96 = pbVar96 + -1;
      pcVar44 = "memory instruction with no memory";
      goto code_r0x017c65fc;
    }
    puVar12 = (uchar *)(*(long *)pDVar101 + 1);
    if ((*(uchar **)pDVar57 < puVar12) || ((int)*(uchar **)pDVar57 == (int)puVar12)) {
      v8::internal::wasm::Decoder::error(param_1,puVar12,"memory index");
    }
    else if (*puVar12 != '\0') {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar12,"expected memory index 0, found %u");
    }
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (*(undefined8 **)(param_1 + 0x4c8) <= puVar63) {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,local_148);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017c65ac;
code_r0x017c4b3c:
      if (*(ulong *)pDVar1 != 0) goto code_r0x017cc3e4;
code_r0x017c65b4:
      if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\0') goto code_r0x017cc3e4;
      if ((*(ulong *)(param_1 + 0x2b8) & 0x13f8ffff) == 0x13f8ffff) {
        uVar61 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)this,0x13f8ffff,0);
      }
      else {
        uVar61 = *(ulong *)(param_1 + 0x2b8) & 0x13f8ffff ^ 0x13f8ffff;
        uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
        uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
        uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
        uVar61 = LZCOUNT((uVar61 >> 0x10 | (uVar61 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      pDVar90 = (Decoder *)(uVar61 & 0xff | 0x4000000000);
      iVar37 = 8;
      v8::internal::wasm::LiftoffAssembler::LoadFromInstance(this,pDVar90,0,0x13,8);
      local_148[0] = SUB81(uVar61,0);
      SVar54 = local_148[0];
      local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x40;
      local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_188._0_4_ = 0;
      local_190 = pDVar90;
      v8::internal::Assembler::ubfm
                ((Assembler *)this,(Register *)local_148,(Register *)&local_190,0x10,0x3f);
      *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | 1L << (uVar61 & 0x3f);
      *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) =
           *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) + 1;
      puVar43 = *(undefined2 **)(param_1 + 0x248);
      if (puVar43 != *(undefined2 **)(param_1 + 0x240)) {
        iVar37 = *(int *)(puVar43 + -2) + 8;
      }
      if (puVar43 == *(undefined2 **)(param_1 + 0x250)) {
        puVar43 = (undefined2 *)
                  v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                            ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                             this_01);
      }
      *(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)(puVar43 + 2) = SVar54;
      goto code_r0x017cc518;
    }
    uVar77 = *(undefined8 *)pDVar101;
    *(undefined1 *)(puVar63 + 1) = 1;
    *puVar63 = uVar77;
    *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
    DVar15 = *pDVar11;
    if (((byte)DVar15 & 1) != 0) goto code_r0x017c4b3c;
code_r0x017c65ac:
    if ((byte)DVar15 >> 1 == 0) goto code_r0x017c65b4;
code_r0x017cc3e4:
    uVar50 = 2;
    pbVar80 = uStack_138;
    break;
  case 0x40:
    if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') goto code_r0x017c57e0;
    puVar12 = (uchar *)(*(long *)pDVar101 + 1);
    if ((*(uchar **)pDVar57 < puVar12) || ((int)*(uchar **)pDVar57 == (int)puVar12)) {
      v8::internal::wasm::Decoder::error(param_1,puVar12,"memory index");
    }
    else if (*puVar12 != '\0') {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar12,"expected memory index 0, found %u");
    }
    if (*(char *)(*(long *)(param_1 + 0x48) + 0x178) != '\0') {
      pcVar44 = "grow_memory is not supported for asmjs modules";
      goto code_r0x017c6794;
    }
    lVar39 = *(long *)pDVar4;
    if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
      pbVar96 = *(byte **)(lVar39 + -0x10);
      uVar61 = *(ulong *)(lVar39 + -8);
      *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
      if ((((uint)uVar61 & 0xff) != 1) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
        pbVar80 = *(byte **)pDVar101;
        if (pbVar80 < *(byte **)pDVar57) {
          bVar14 = *pbVar80;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) != 0) {
            if (*(byte **)pDVar57 <= pbVar80 + 1) {
              pcVar44 = "<end>";
              goto code_r0x017cc270;
            }
            uVar89 = CONCAT11(bVar14,pbVar80[1]);
          }
          pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
        }
        else {
          pcVar44 = "<end>";
        }
code_r0x017cc270:
        if (pbVar96 < *(byte **)pDVar57) {
          bVar14 = *pbVar96;
          uVar89 = (ushort)bVar14;
          uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
          if ((uVar76 & 1) == 0) {
code_r0x017cc2d4:
            pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
            if (pbVar96 + 1 < *(byte **)pDVar57) {
              uVar89 = CONCAT11(bVar14,pbVar96[1]);
              goto code_r0x017cc2d4;
            }
            pcVar103 = "<end>";
          }
          if (10 < (uint)uVar61) goto code_r0x017cc324;
code_r0x017cc2bc:
          pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                              (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
        }
        else {
          pcVar103 = "<end>";
          if ((uint)uVar61 < 0xb) goto code_r0x017cc2bc;
code_r0x017cc324:
          pcVar45 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar96,"%s[%d] expected type %s, found %s of type %s",
                   pcVar44,0,"i32",pcVar103,pcVar45);
      }
    }
    else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
      pbVar96 = *(byte **)pDVar101;
      if (pbVar96 < *(byte **)pDVar57) {
        bVar14 = *pbVar96;
        uVar89 = (ushort)bVar14;
        uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar61 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar96 + 1) {
            pcVar44 = "<end>";
            goto code_r0x017cc2f0;
          }
          uVar89 = CONCAT11(bVar14,pbVar96[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
        pcVar44 = "<end>";
      }
code_r0x017cc2f0:
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
    }
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar77 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = 1;
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017cc39c;
code_r0x017cc3c4:
      if (*(ulong *)pDVar1 != 0) goto code_r0x017cc3e4;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,local_148);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017cc3c4;
code_r0x017cc39c:
      if ((byte)DVar15 >> 1 != 0) goto code_r0x017cc3e4;
    }
    if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\0') goto code_r0x017cc3e4;
    uVar61 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)this,0);
    v8::internal::wasm::LiftoffAssembler::SpillAllRegisters((LiftoffAssembler *)this);
    uVar76 = *(ulong *)v8::internal::CallDescriptors::call_descriptor_data_._2904_8_;
    iVar37 = (int)(uVar61 & 0xff);
    if (((*(int *)(v8::internal::CallDescriptors::call_descriptor_data_._2904_8_ + 8) != 0) ||
        ((uVar76 & 0xffffffff00000000) != 0x4000000000)) || (iVar37 != (int)uVar76)) {
      local_190 = (Decoder *)0x200000003f;
      if ((int)uVar76 != 0x3f) {
        local_190 = (Decoder *)(uVar76 & 0xffffffff | 0x2000000000);
      }
      local_118 = (Decoder *)0x200000003f;
      if (iVar37 != 0x3f) {
        local_118 = (Decoder *)(uVar61 & 0xff | 0x2000000000);
      }
      local_188._0_4_ = 0;
      local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_128 = 0;
      local_120 = CONCAT71(local_120._1_7_,0x13);
      uStack_108 = 0xffffffff;
      local_110 = 0;
      v8::internal::TurboAssembler::Mov((TurboAssembler *)this,&local_190,local_148,0);
    }
    v8::internal::TurboAssembler::Call((TurboAssembler *)this,0x10,5);
    FUN_017e2778(this);
    v8::internal::SafepointTableBuilder::DefineSafepoint(pDVar9,this,0);
    puVar43 = *(undefined2 **)(param_1 + 0x248);
    *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | 1;
    *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    if (puVar43 == *(undefined2 **)(param_1 + 0x240)) {
      iVar37 = 8;
    }
    else {
      iVar37 = *(int *)(puVar43 + -2) + 8;
    }
    if (puVar43 == *(undefined2 **)(param_1 + 0x250)) {
      puVar43 = (undefined2 *)
                v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                          ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           this_01);
    }
    *(undefined1 *)(puVar43 + 2) = 0;
code_r0x017cc518:
    *(int *)(puVar43 + 4) = iVar37;
    *puVar43 = 0x101;
    *(undefined2 **)(param_1 + 0x248) = puVar43 + 6;
    uVar50 = 2;
    pbVar80 = uStack_138;
    break;
  case 0x41:
    iVar37 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                       (param_1,pbVar96 + 1,puVar67,"immi32");
    local_148[0] = SUB41(iVar37,0);
    local_148[1] = SUB41((uint)iVar37 >> 8,0);
    local_148[2] = SUB41((uint)iVar37 >> 0x10,0);
    local_148[3] = SUB41((uint)iVar37 >> 0x18,0);
    local_190 = (Decoder *)CONCAT71(local_190._1_7_,1);
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar77 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = 1;
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017c5664;
code_r0x017c63a0:
      if ((byte)DVar15 >> 1 != 0) goto code_r0x017c8db8;
code_r0x017c63a8:
      if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
        puVar43 = *(undefined2 **)(param_1 + 0x248);
        uVar74 = CONCAT13(local_148[3],CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])));
        if (puVar43 == *(undefined2 **)(param_1 + 0x240)) {
          iVar37 = 8;
        }
        else {
          iVar37 = *(int *)(puVar43 + -2) + 8;
        }
        if (puVar43 == *(undefined2 **)(param_1 + 0x250)) {
          puVar43 = (undefined2 *)
                    v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                              ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                               this_01);
        }
        *(undefined4 *)(puVar43 + 2) = uVar74;
        *(int *)(puVar43 + 4) = iVar37;
        *puVar43 = 0x102;
        *(undefined2 **)(param_1 + 0x248) = puVar43 + 6;
      }
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017c63a0;
code_r0x017c5664:
      if (*(ulong *)pDVar1 == 0) goto code_r0x017c63a8;
    }
code_r0x017c8db8:
    uVar50 = CONCAT13(local_148[7],CONCAT12(local_148[6],CONCAT11(local_148[5],local_148[4]))) + 1;
    pbVar80 = uStack_138;
    break;
  case 0x42:
    local_190 = (Decoder *)
                v8::internal::wasm::Decoder::read_i64v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                          (param_1,pbVar96 + 1,(uint *)&local_188,"immi64");
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x2;
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar77 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = 2;
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017c4ba8;
code_r0x017c58c8:
      if ((byte)DVar15 >> 1 == 0) goto code_r0x017c58d0;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,local_148);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017c58c8;
code_r0x017c4ba8:
      if (*(ulong *)pDVar1 == 0) {
code_r0x017c58d0:
        pDVar90 = local_190;
        if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
          iVar37 = (int)local_190;
          if (local_190 == (Decoder *)(long)iVar37) {
            puVar43 = *(undefined2 **)(param_1 + 0x248);
            if (puVar43 == *(undefined2 **)(param_1 + 0x240)) {
              iVar84 = 8;
            }
            else {
              iVar84 = *(int *)(puVar43 + -2) + 8;
            }
            if (puVar43 == *(undefined2 **)(param_1 + 0x250)) {
              puVar43 = (undefined2 *)
                        v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::
                        Grow((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                             this_01);
            }
            *(int *)(puVar43 + 2) = iVar37;
            *puVar43 = 0x202;
          }
          else {
            if ((*(ulong *)(param_1 + 0x2b8) & 0x13f8ffff) == 0x13f8ffff) {
              uVar61 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                                 ((LiftoffAssembler *)this,0x13f8ffff,0);
              pbVar96 = uStack_138;
            }
            else {
              uVar61 = *(ulong *)(param_1 + 0x2b8) & 0x13f8ffff ^ 0x13f8ffff;
              uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
              uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
              uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
              uVar61 = LZCOUNT((uVar61 >> 0x10 | (uVar61 & 0xffff0000ffff) << 0x10) << 0x20);
              pbVar96 = uStack_138;
            }
            uStack_138._4_4_ = (undefined4)((ulong)pbVar96 >> 0x20);
            uStack_138._0_4_ = (uint)pbVar96;
            local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x2;
            local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
            local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
            local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
            local_148[0xc] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
            local_148[0xd] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
            local_148[0xe] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
            local_148[0xf] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
            uStack_138._0_4_ = (uint)uStack_138 & 0xffffff00;
            local_148[1] = SUB81(pDVar90,0);
            local_148[2] = SUB81((ulong)pDVar90 >> 8,0);
            local_148[3] = SUB81((ulong)pDVar90 >> 0x10,0);
            local_148[4] = SUB81((ulong)pDVar90 >> 0x18,0);
            local_148[5] = SUB81((ulong)pDVar90 >> 0x20,0);
            local_148[6] = SUB81((ulong)pDVar90 >> 0x28,0);
            local_148[7] = SUB81((ulong)pDVar90 >> 0x30,0);
            local_148[8] = SUB81((ulong)pDVar90 >> 0x38,0);
            v8::internal::wasm::LiftoffAssembler::LoadConstant
                      ((LiftoffAssembler *)this,uVar61 & 0xff,local_148,0x13);
            *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | 1L << (uVar61 & 0x3f);
            *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) =
                 *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) + 1;
            puVar43 = *(undefined2 **)(param_1 + 0x248);
            if (puVar43 == *(undefined2 **)(param_1 + 0x240)) {
              iVar84 = 8;
            }
            else {
              iVar84 = *(int *)(puVar43 + -2) + 8;
            }
            if (puVar43 == *(undefined2 **)(param_1 + 0x250)) {
              puVar43 = (undefined2 *)
                        v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::
                        Grow((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                             this_01);
            }
            *puVar43 = 0x201;
            *(char *)(puVar43 + 2) = (char)uVar61;
          }
          *(int *)(puVar43 + 4) = iVar84;
          *(undefined2 **)(param_1 + 0x248) = puVar43 + 6;
        }
      }
    }
    uVar50 = (uint)local_188 + 1;
    pbVar80 = uStack_138;
    break;
  case 0x43:
    pbVar96 = pbVar96 + 1;
    if ((*(byte **)pDVar57 < pbVar96) || ((uint)((int)*(byte **)pDVar57 - (int)pbVar96) < 4)) {
      v8::internal::wasm::Decoder::error(param_1,pbVar96,"immf32");
      uVar74 = 0;
    }
    else {
      uVar74 = *(undefined4 *)pbVar96;
    }
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x3;
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar77 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = 3;
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017c573c;
code_r0x017c6440:
      if ((byte)DVar15 >> 1 == 0) goto code_r0x017c6448;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,local_148);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017c6440;
code_r0x017c573c:
      if (*(ulong *)pDVar1 == 0) {
code_r0x017c6448:
        if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
          if ((*(ulong *)(param_1 + 0x2b8) & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
            uVar61 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                               ((LiftoffAssembler *)this,0x7ffefffe0000000,0);
          }
          else {
            uVar61 = *(ulong *)(param_1 + 0x2b8) & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
            uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
            uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
            uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
            uVar76 = (uVar61 & 0xffff0000ffff0000) >> 0x10;
            uVar61 = LZCOUNT((uVar76 | (uVar61 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar76 << 0x20);
          }
          local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x3;
          *(undefined4 *)(puVar59 + 1) = 0;
          *puVar59 = 0;
          local_148[1] = SUB41(uVar74,0);
          local_148[2] = SUB41((uint)uVar74 >> 8,0);
          local_148[3] = SUB41((uint)uVar74 >> 0x10,0);
          local_148[4] = SUB41((uint)uVar74 >> 0x18,0);
          v8::internal::wasm::LiftoffAssembler::LoadConstant
                    ((LiftoffAssembler *)this,uVar61 & 0xff,local_148,0x13);
          *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | 1L << (uVar61 & 0x3f);
          *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) =
               *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) + 1;
          puVar43 = *(undefined2 **)(param_1 + 0x248);
          if (puVar43 == *(undefined2 **)(param_1 + 0x240)) {
            iVar37 = 8;
          }
          else {
            iVar37 = *(int *)(puVar43 + -2) + 8;
          }
          if (puVar43 == *(undefined2 **)(param_1 + 0x250)) {
            puVar43 = (undefined2 *)
                      v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::
                      Grow((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           this_01);
          }
          *(int *)(puVar43 + 4) = iVar37;
          *(char *)(puVar43 + 2) = (char)uVar61;
          *puVar43 = 0x301;
          *(undefined2 **)(param_1 + 0x248) = puVar43 + 6;
        }
      }
    }
    uVar50 = 5;
    pbVar80 = uStack_138;
    break;
  case 0x44:
    pbVar96 = pbVar96 + 1;
    if ((*(byte **)pDVar57 < pbVar96) || ((uint)((int)*(byte **)pDVar57 - (int)pbVar96) < 8)) {
      v8::internal::wasm::Decoder::error(param_1,pbVar96,"immf64");
      uVar77 = 0;
    }
    else {
      uVar77 = *(undefined8 *)pbVar96;
    }
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x4;
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar51 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = 4;
      *puVar63 = uVar51;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017c56d0;
code_r0x017c63f8:
      if ((byte)DVar15 >> 1 == 0) goto code_r0x017c6400;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,local_148);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017c63f8;
code_r0x017c56d0:
      if (*(ulong *)pDVar1 == 0) {
code_r0x017c6400:
        if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
          if ((*(ulong *)(param_1 + 0x2b8) & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
            uVar61 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                               ((LiftoffAssembler *)this,0x7ffefffe0000000,0);
            pbVar96 = uStack_138;
          }
          else {
            uVar61 = *(ulong *)(param_1 + 0x2b8) & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
            uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
            uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
            uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
            uVar76 = (uVar61 & 0xffff0000ffff0000) >> 0x10;
            uVar61 = LZCOUNT((uVar76 | (uVar61 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar76 << 0x20);
            pbVar96 = uStack_138;
          }
          uStack_138._4_4_ = (undefined4)((ulong)pbVar96 >> 0x20);
          uStack_138._0_4_ = (uint)pbVar96;
          local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x4;
          local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[0xc] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[0xd] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[0xe] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[0xf] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          uStack_138._0_4_ = (uint)uStack_138 & 0xffffff00;
          local_148[1] = SUB81(uVar77,0);
          local_148[2] = SUB81((ulong)uVar77 >> 8,0);
          local_148[3] = SUB81((ulong)uVar77 >> 0x10,0);
          local_148[4] = SUB81((ulong)uVar77 >> 0x18,0);
          local_148[5] = SUB81((ulong)uVar77 >> 0x20,0);
          local_148[6] = SUB81((ulong)uVar77 >> 0x28,0);
          local_148[7] = SUB81((ulong)uVar77 >> 0x30,0);
          local_148[8] = SUB81((ulong)uVar77 >> 0x38,0);
          v8::internal::wasm::LiftoffAssembler::LoadConstant
                    ((LiftoffAssembler *)this,uVar61 & 0xff,local_148,0x13);
          *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | 1L << (uVar61 & 0x3f);
          *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) =
               *(int *)(param_1 + (uVar61 & 0xff) * 4 + 0x2c0) + 1;
          puVar43 = *(undefined2 **)(param_1 + 0x248);
          if (puVar43 == *(undefined2 **)(param_1 + 0x240)) {
            iVar37 = 8;
          }
          else {
            iVar37 = *(int *)(puVar43 + -2) + 8;
          }
          if (puVar43 == *(undefined2 **)(param_1 + 0x250)) {
            puVar43 = (undefined2 *)
                      v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::
                      Grow((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                           this_01);
          }
          *(int *)(puVar43 + 4) = iVar37;
          *(char *)(puVar43 + 2) = (char)uVar61;
          *puVar43 = 0x401;
          *(undefined2 **)(param_1 + 0x248) = puVar43 + 6;
        }
      }
    }
    uVar50 = 9;
    pbVar80 = uStack_138;
    break;
  case 0x45:
    uVar77 = 1;
    goto code_r0x017c576c;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    uVar77 = 1;
    uVar51 = 1;
    goto code_r0x017c4918;
  case 0x50:
    uVar77 = 2;
code_r0x017c576c:
    uVar50 = 1;
    FUN_017d694c(param_1,bVar14,1,uVar77);
    pbVar80 = uStack_138;
    break;
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    uVar77 = 2;
    uVar51 = 2;
    goto code_r0x017c4918;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
    uVar77 = 3;
    uVar51 = 3;
    goto code_r0x017c4918;
  case 0x61:
  case 0x62:
    uVar77 = 4;
    uVar51 = 4;
code_r0x017c4918:
    uVar50 = 1;
    FUN_017da588(param_1,bVar14,1,uVar77,uVar51);
    pbVar80 = uStack_138;
    break;
  case 99:
  case 100:
  case 0x65:
  case 0x66:
    uVar77 = 1;
    goto code_r0x017c4890;
  case 0x67:
  case 0x68:
  case 0x69:
    uVar77 = 1;
    goto code_r0x017c4934;
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
    uVar77 = 1;
    uVar51 = 1;
    uVar52 = 1;
    goto code_r0x017c4898;
  case 0x79:
  case 0x7a:
  case 0x7b:
    uVar77 = 2;
    uVar51 = 2;
    goto code_r0x017c4a20;
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
    uVar77 = 2;
    uVar51 = 2;
    uVar52 = 2;
    goto code_r0x017c4898;
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
    uVar77 = 3;
    goto code_r0x017c4a1c;
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
    uVar77 = 3;
    uVar51 = 3;
    uVar52 = 3;
    goto code_r0x017c4898;
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
    uVar77 = 4;
    uVar51 = 4;
    goto code_r0x017c4a20;
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
    uVar77 = 4;
code_r0x017c4890:
    uVar51 = 4;
    uVar52 = 4;
code_r0x017c4898:
    FUN_017da588(param_1,bVar14,uVar77,uVar51,uVar52);
    goto LAB_017c4a30;
  case 0xa7:
    uVar77 = 1;
    uVar51 = 2;
    goto code_r0x017c4a20;
  case 0xa8:
  case 0xa9:
  case 0xbc:
    uVar77 = 1;
    goto code_r0x017c4a1c;
  case 0xaa:
  case 0xab:
    uVar77 = 1;
    uVar51 = 4;
    goto code_r0x017c4a20;
  case 0xac:
  case 0xad:
    uVar77 = 2;
    goto code_r0x017c4934;
  case 0xae:
  case 0xaf:
    uVar77 = 2;
    goto code_r0x017c4a1c;
  case 0xb0:
  case 0xb1:
  case 0xbd:
    uVar77 = 2;
    uVar51 = 4;
    goto code_r0x017c4a20;
  case 0xb2:
  case 0xb3:
  case 0xbe:
    uVar77 = 3;
    goto code_r0x017c4934;
  case 0xb4:
  case 0xb5:
    uVar77 = 3;
    uVar51 = 2;
    goto code_r0x017c4a20;
  case 0xb6:
    uVar77 = 3;
    uVar51 = 4;
    goto code_r0x017c4a20;
  case 0xb7:
  case 0xb8:
    uVar77 = 4;
code_r0x017c4934:
    uVar51 = 1;
    goto code_r0x017c4a20;
  case 0xb9:
  case 0xba:
  case 0xbf:
    uVar77 = 4;
    uVar51 = 2;
    goto code_r0x017c4a20;
  case 0xbb:
    uVar77 = 4;
code_r0x017c4a1c:
    uVar51 = 3;
code_r0x017c4a20:
    FUN_017d694c(param_1,bVar14,uVar77,uVar51);
LAB_017c4a30:
    uVar50 = 1;
    pbVar80 = uStack_138;
    break;
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xd1:
    uVar61 = v8::internal::wasm::WasmOpcodes::IsSignExtensionOpcode(bVar14);
    if ((uVar61 & 1) != 0) {
      if (((byte)param_1[0x51] >> 3 & 1) == 0) {
        v8::internal::wasm::Decoder::error
                  (param_1,"Invalid opcode (enable with --experimental-wasm-se)");
      }
      else {
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x800;
      }
    }
    uVar61 = v8::internal::wasm::WasmOpcodes::IsAnyRefOpcode(bVar14);
    if ((uVar61 & 1) != 0) {
      if (((byte)param_1[0x50] >> 5 & 1) == 0) {
        v8::internal::wasm::Decoder::error
                  (param_1,"Invalid opcode (enable with --experimental-wasm-anyref)");
      }
      else {
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
      }
    }
    uVar77 = v8::internal::wasm::WasmOpcodes::Signature(bVar14);
    FUN_017d5424(param_1,bVar14,uVar77);
code_r0x017c49a4:
    uVar50 = 1;
    pbVar80 = uStack_138;
    break;
  case 0xd0:
    if (((byte)param_1[0x50] >> 5 & 1) == 0) goto code_r0x017c5484;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x8;
    puVar63 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
      uVar77 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = 8;
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017c4a08;
code_r0x017c6700:
      if ((byte)DVar15 >> 1 != 0) goto LAB_017c4a30;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                (this_00,(uchar **)pDVar101,local_148);
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017c6700;
code_r0x017c4a08:
      if (*(ulong *)pDVar1 != 0) goto LAB_017c4a30;
    }
    if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
      *pDVar3 = (Decoder)0x6;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","ref_null");
      }
      uVar50 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
      pcVar44 = "ref_null";
code_r0x017cdd48:
      v8::internal::wasm::Decoder::errorf
                (uVar36,(char *)(ulong)uVar50,"unsupported liftoff operation: %s",pcVar44);
    }
    goto LAB_017c4a30;
  case 0xd2:
    if (((byte)param_1[0x50] >> 5 & 1) == 0) goto code_r0x017c5484;
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 0x20;
    local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
    local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
    pbVar96 = (byte *)(*(long *)(param_1 + 0x10) + 1);
    if (pbVar96 < *(byte **)(param_1 + 0x18)) {
      uVar50 = *pbVar96 & 0x7f;
      uVar61 = (ulong)uVar50;
      if ((char)*pbVar96 < '\0') {
        uVar50 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),puVar67,
                            "function index",uVar50);
        uVar61 = (ulong)uVar50;
      }
      else {
        local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
        local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      }
    }
    else {
      local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar96,"expected %s","function index");
      uVar61 = 0;
    }
    local_148[0] = SUB81(uVar61,0);
    local_148[1] = SUB81(uVar61 >> 8,0);
    local_148[2] = SUB81(uVar61 >> 0x10,0);
    local_148[3] = SUB81(uVar61 >> 0x18,0);
    lVar39 = *(long *)(param_1 + 0x48);
    pbVar96 = *(byte **)(param_1 + 0x10);
    if ((lVar39 != 0) &&
       (uVar61 < (ulong)(*(long *)(lVar39 + 0x90) - *(long *)(lVar39 + 0x88) >> 5))) {
      local_190 = (Decoder *)CONCAT71(local_190._1_7_,7);
      puVar63 = *(undefined8 **)(param_1 + 0x4c0);
      if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
        *puVar63 = pbVar96;
        *(undefined1 *)(puVar63 + 1) = 7;
        *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
      }
      if (((byte)*pDVar11 & 1) == 0) {
        if ((byte)*pDVar11 >> 1 == 0) {
code_r0x017c8ab8:
          if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
            *pDVar3 = (Decoder)0x6;
            if (v8::internal::FLAG_trace_liftoff != '\0') {
              v8::internal::PrintF("[liftoff] unsupported: %s\n","func");
            }
            v8::internal::wasm::Decoder::errorf
                      (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                   (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)
                                                   )),"unsupported liftoff operation: %s","func");
          }
        }
      }
      else if (*(ulong *)pDVar1 == 0) goto code_r0x017c8ab8;
      goto code_r0x017c8db8;
    }
    pcVar44 = "invalid function index: %u";
    goto code_r0x017c78f4;
  case 0xfc:
    pbVar96 = pbVar96 + 1;
    if ((*(byte **)pDVar57 < pbVar96) || ((int)*(byte **)pDVar57 == (int)pbVar96)) {
      v8::internal::wasm::Decoder::error(param_1,pbVar96,"numeric index");
      uVar50 = 0;
    }
    else {
      uVar50 = (uint)*pbVar96;
    }
    uVar50 = uVar50 | (uint)bVar14 << 8;
    if (uVar50 < 0xfc08) {
      if (((byte)param_1[0x51] >> 2 & 1) != 0) {
        uVar50 = 0x400;
        goto code_r0x017c7d98;
      }
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-sat_f2i_conversions)";
    }
    else if (uVar50 - 0xfc0f < 3) {
      if ((*(uint *)(param_1 + 0x50) >> 5 & 1) != 0) {
        uVar50 = 0x20;
code_r0x017c7d98:
        **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | uVar50;
        iVar37 = FUN_017d2270(param_1);
        goto code_r0x017cb164;
      }
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-anyref)";
    }
    else {
      if ((*(uint *)(param_1 + 0x50) >> 9 & 1) != 0) {
        uVar50 = 0x200;
        goto code_r0x017c7d98;
      }
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-bulk_memory)";
    }
code_r0x017c6794:
    v8::internal::wasm::Decoder::error(param_1,pcVar44);
    uVar50 = 2;
    pbVar80 = uStack_138;
    break;
  case 0xfd:
    if (((byte)param_1[0x50] >> 2 & 1) == 0) {
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-simd)";
      goto code_r0x017c548c;
    }
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 4;
    pbVar96 = (byte *)(*(long *)(param_1 + 0x10) + 1);
    if ((*(byte **)(param_1 + 0x18) < pbVar96) || ((int)*(byte **)(param_1 + 0x18) == (int)pbVar96))
    {
      v8::internal::wasm::Decoder::error(param_1,pbVar96,"simd index");
      uVar50 = 0;
    }
    else {
      uVar50 = (uint)*pbVar96;
    }
    uVar50 = uVar50 | (uint)bVar14 << 8;
    switch(uVar50) {
    case 0xfd00:
      iVar37 = FUN_017d174c(param_1,0xe,1);
      goto code_r0x017cb164;
    case 0xfd01:
      iVar37 = FUN_017d1c80(param_1,9,1);
      goto code_r0x017cb164;
    default:
      plVar65 = (long *)v8::internal::wasm::WasmOpcodes::Signature(uVar50);
      if (plVar65 == (long *)0x0) {
        v8::internal::wasm::Decoder::error(param_1,"invalid simd opcode");
      }
      else {
        uVar61 = plVar65[1];
        uVar50 = (uint)uVar61;
        uVar76 = (ulong)(int)uVar50;
        puVar49 = (uint *)&local_130;
        local_148[0] = SVar21;
        local_148[1] = SVar22;
        local_148[2] = SVar24;
        local_148[3] = SVar26;
        local_148[4] = SVar28;
        local_148[5] = SVar30;
        local_148[6] = SVar32;
        local_148[7] = SVar34;
        uStack_138 = (byte *)&uStack_b0;
        if (8 < uVar50) {
          local_148[8] = SVar21;
          local_148[9] = SVar22;
          local_148[10] = SVar24;
          local_148[0xb] = SVar26;
          local_148[0xc] = SVar28;
          local_148[0xd] = SVar30;
          local_148[0xe] = SVar32;
          local_148[0xf] = SVar34;
          v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                    ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
          puVar49 = (uint *)CONCAT17(local_148[7],
                                     CONCAT16(local_148[6],
                                              CONCAT15(local_148[5],
                                                       CONCAT14(local_148[4],
                                                                CONCAT13(local_148[3],
                                                                         CONCAT12(local_148[2],
                                                                                  CONCAT11(local_148
                                                  [1],local_148[0])))))));
        }
        puVar49 = puVar49 + uVar76 * 4;
        local_148[8] = SUB81(puVar49,0);
        local_148[9] = SUB81((ulong)puVar49 >> 8,0);
        local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
        local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
        local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
        local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
        local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
        local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
        if (0 < (int)uVar50) {
          uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
          do {
            uVar50 = uVar50 - 1;
            lVar39 = *(long *)pDVar4;
            bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
            if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)
               ) {
              pbVar96 = *(byte **)(lVar39 + -0x10);
              uVar95 = (ulong)*(byte *)(lVar39 + -8);
              *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
            }
            else {
              if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
                pbVar96 = *(byte **)pDVar101;
                if (pbVar96 < *(byte **)pDVar57) {
                  bVar18 = *pbVar96;
                  uVar89 = (ushort)bVar18;
                  uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                  if ((uVar95 & 1) != 0) {
                    if (*(byte **)pDVar57 <= pbVar96 + 1) {
                      pcVar44 = "<end>";
                      goto code_r0x017cb788;
                    }
                    uVar89 = CONCAT11(bVar18,pbVar96[1]);
                  }
                  pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  pcVar44 = "<end>";
                }
code_r0x017cb788:
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
              }
              pbVar96 = *(byte **)pDVar101;
              uVar95 = 10;
            }
            uVar93 = (uint)uVar95;
            uVar76 = uVar76 - 1;
            if (uVar93 != bVar14) {
              if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
                if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
                  pbVar80 = *(byte **)pDVar101;
                  if (pbVar80 < *(byte **)pDVar57) {
                    bVar18 = *pbVar80;
                    uVar89 = (ushort)bVar18;
                    uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                    if ((uVar78 & 1) != 0) {
                      if (*(byte **)pDVar57 <= pbVar80 + 1) {
                        pcVar44 = "<end>";
                        goto code_r0x017cb884;
                      }
                      uVar89 = CONCAT11(bVar18,pbVar80[1]);
                    }
                    pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                  }
                  else {
                    pcVar44 = "<end>";
                  }
code_r0x017cb884:
                  if (bVar14 < 10) {
                    pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
                  }
                  else {
                    pcVar103 = "<unknown>";
                  }
                  if (pbVar96 < *(byte **)pDVar57) {
                    bVar14 = *pbVar96;
                    uVar89 = (ushort)bVar14;
                    uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                    if ((uVar78 & 1) == 0) {
code_r0x017cb8fc:
                      pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                    }
                    else {
                      if (pbVar96 + 1 < *(byte **)pDVar57) {
                        uVar89 = CONCAT11(bVar14,pbVar96[1]);
                        goto code_r0x017cb8fc;
                      }
                      pcVar45 = "<end>";
                    }
                    if (10 < uVar93) goto code_r0x017cb920;
code_r0x017cb668:
                    pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                        (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
                  }
                  else {
                    pcVar45 = "<end>";
                    if (uVar93 < 0xb) goto code_r0x017cb668;
code_r0x017cb920:
                    pcVar53 = "<unknown>";
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)param_1,(char *)pbVar96,
                             "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar50,
                             pcVar103,pcVar45,pcVar53);
                }
              }
            }
            lVar39 = CONCAT17(local_148[7],
                              CONCAT16(local_148[6],
                                       CONCAT15(local_148[5],
                                                CONCAT14(local_148[4],
                                                         CONCAT13(local_148[3],
                                                                  CONCAT12(local_148[2],
                                                                           CONCAT11(local_148[1],
                                                                                    local_148[0]))))
                                               ))) + uVar61;
            *(char *)(lVar39 + -8) = (char)uVar95;
            uVar61 = uVar61 - 0x10;
            *(byte **)(lVar39 + -0x10) = pbVar96;
          } while (0 < (long)uVar76);
        }
        if (*plVar65 == 0) {
code_r0x017cd260:
          DVar15 = *pDVar11;
          if (((byte)DVar15 & 1) != 0) goto code_r0x017cb9ac;
code_r0x017cd268:
          if ((byte)DVar15 >> 1 == 0) goto code_r0x017cd270;
        }
        else {
          local_190 = (Decoder *)CONCAT71(local_190._1_7_,*(undefined1 *)plVar65[2]);
          puVar63 = *(undefined8 **)(param_1 + 0x4c0);
          if (*(undefined8 **)(param_1 + 0x4c8) <= puVar63) {
            std::__ndk1::
            vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
            ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                      (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
            goto code_r0x017cd260;
          }
          uVar77 = *(undefined8 *)pDVar101;
          *(undefined1 *)(puVar63 + 1) = *(undefined1 *)plVar65[2];
          *puVar63 = uVar77;
          *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
          DVar15 = *pDVar11;
          if (((byte)DVar15 & 1) == 0) goto code_r0x017cd268;
code_r0x017cb9ac:
          if (*(ulong *)pDVar1 == 0) {
code_r0x017cd270:
            if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
              *pDVar3 = (Decoder)0x5;
              if (v8::internal::FLAG_trace_liftoff != '\0') {
                v8::internal::PrintF("[liftoff] unsupported: %s\n","simd");
              }
              v8::internal::wasm::Decoder::errorf
                        (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                     (*(int *)(param_1 + 0x10) -
                                                     *(int *)(param_1 + 8))),
                         "unsupported liftoff operation: %s","simd");
            }
          }
        }
        puVar49 = (uint *)CONCAT17(local_148[7],
                                   CONCAT16(local_148[6],
                                            CONCAT15(local_148[5],
                                                     CONCAT14(local_148[4],
                                                              CONCAT13(local_148[3],
                                                                       CONCAT12(local_148[2],
                                                                                CONCAT11(local_148[1
                                                  ],local_148[0])))))));
        if (puVar49 != (uint *)&local_130) {
          free(puVar49);
        }
      }
      uVar50 = 2;
      pbVar80 = uStack_138;
      goto LAB_017c47ac;
    case 0xfd03:
      lVar56 = *(long *)pDVar101;
      lVar39 = 0;
      local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[4] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[5] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[6] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[7] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[8] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[9] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[10] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xb] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xc] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xd] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xe] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      local_148[0xf] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
      do {
        pSVar13 = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)
                  (lVar56 + 2 + lVar39);
        if ((*(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> **)pDVar57 <
             pSVar13) ||
           ((int)*(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> **)pDVar57 ==
            (int)pSVar13)) {
          v8::internal::wasm::Decoder::error(param_1,(uchar *)pSVar13,"shuffle");
          SVar54 = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        }
        else {
          SVar54 = *pSVar13;
        }
        local_148[lVar39] = SVar54;
        lVar39 = lVar39 + 1;
      } while (lVar39 != 0x10);
      SVar54 = local_148[1];
      if ((byte)local_148[1] <= (byte)local_148[0]) {
        SVar54 = local_148[0];
      }
      SVar16 = local_148[2];
      if ((byte)local_148[2] <= (byte)SVar54) {
        SVar16 = SVar54;
      }
      SVar54 = local_148[3];
      if ((byte)local_148[3] <= (byte)SVar16) {
        SVar54 = SVar16;
      }
      SVar16 = local_148[4];
      if ((byte)local_148[4] <= (byte)SVar54) {
        SVar16 = SVar54;
      }
      SVar54 = local_148[5];
      if ((byte)local_148[5] <= (byte)SVar16) {
        SVar54 = SVar16;
      }
      SVar16 = local_148[6];
      if ((byte)local_148[6] <= (byte)SVar54) {
        SVar16 = SVar54;
      }
      SVar54 = local_148[7];
      if ((byte)local_148[7] <= (byte)SVar16) {
        SVar54 = SVar16;
      }
      SVar16 = local_148[8];
      if ((byte)local_148[8] <= (byte)SVar54) {
        SVar16 = SVar54;
      }
      SVar54 = local_148[9];
      if ((byte)local_148[9] <= (byte)SVar16) {
        SVar54 = SVar16;
      }
      SVar16 = local_148[10];
      if ((byte)local_148[10] <= (byte)SVar54) {
        SVar16 = SVar54;
      }
      SVar54 = local_148[0xb];
      if ((byte)local_148[0xb] <= (byte)SVar16) {
        SVar54 = SVar16;
      }
      SVar16 = local_148[0xc];
      if ((byte)local_148[0xc] <= (byte)SVar54) {
        SVar16 = SVar54;
      }
      SVar54 = local_148[0xd];
      if ((byte)local_148[0xd] <= (byte)SVar16) {
        SVar54 = SVar16;
      }
      SVar16 = local_148[0xe];
      if ((byte)local_148[0xe] <= (byte)SVar54) {
        SVar16 = SVar54;
      }
      SVar54 = local_148[0xf];
      if ((byte)local_148[0xf] <= (byte)SVar16) {
        SVar54 = SVar16;
      }
      if ((byte)SVar54 < 0x21) {
        lVar39 = *(long *)pDVar4;
        if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
          pbVar96 = *(byte **)(lVar39 + -0x10);
          uVar61 = *(ulong *)(lVar39 + -8);
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if ((((uint)uVar61 & 0xff) != 5) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
            pbVar80 = *(byte **)pDVar101;
            if (pbVar80 < *(byte **)pDVar57) {
              bVar14 = *pbVar80;
              uVar89 = (ushort)bVar14;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar80 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cf6c8;
                }
                uVar89 = CONCAT11(bVar14,pbVar80[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cf6c8:
            if (pbVar96 < *(byte **)pDVar57) {
              bVar14 = *pbVar96;
              uVar89 = (ushort)bVar14;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar103 = "<end>";
                  goto code_r0x017cf774;
                }
                uVar89 = CONCAT11(bVar14,pbVar96[1]);
              }
              pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar103 = "<end>";
            }
code_r0x017cf774:
            if ((uint)uVar61 < 0xb) {
              pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb0e0 +
                                  (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
            }
            else {
              pcVar45 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,
                       "%s[%d] expected type %s, found %s of type %s",pcVar44,1,&DAT_018ce057,
                       pcVar103,pcVar45);
          }
        }
        else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
          pcVar44 = *(char **)pDVar101;
          if (pcVar44 < *(char **)pDVar57) {
            cVar83 = *pcVar44;
            uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar83);
            if ((uVar61 & 1) == 0) {
              pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar83);
            }
            else if (pcVar44 + 1 < *(char **)pDVar57) {
              pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                           (CONCAT11(cVar83,pcVar44[1]));
            }
            else {
              pcVar103 = "<end>";
            }
          }
          else {
            pcVar103 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,pcVar44,"%s found empty stack",pcVar103);
        }
        lVar39 = *(long *)pDVar4;
        if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
          pbVar96 = *(byte **)(lVar39 + -0x10);
          uVar61 = *(ulong *)(lVar39 + -8);
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
          if ((((uint)uVar61 & 0xff) != 5) && (uVar61 = uVar61 & 0xff, uVar61 != 10)) {
            pbVar80 = *(byte **)pDVar101;
            if (pbVar80 < *(byte **)pDVar57) {
              bVar14 = *pbVar80;
              uVar89 = (ushort)bVar14;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar80 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cf900;
                }
                uVar89 = CONCAT11(bVar14,pbVar80[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cf900:
            if (pbVar96 < *(byte **)pDVar57) {
              bVar14 = *pbVar96;
              uVar89 = (ushort)bVar14;
              uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar76 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar103 = "<end>";
                  goto code_r0x017cf9b4;
                }
                uVar89 = CONCAT11(bVar14,pbVar96[1]);
              }
              pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar103 = "<end>";
            }
code_r0x017cf9b4:
            if ((uint)uVar61 < 0xb) {
              pcVar45 = *(char **)((long)&PTR_s_<stmt>_01cdb0e0 +
                                  (-(uVar61 >> 7) & 0xfffffffffffff800 | uVar61 << 3));
            }
            else {
              pcVar45 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,
                       "%s[%d] expected type %s, found %s of type %s",pcVar44,0,&DAT_018ce057,
                       pcVar103,pcVar45);
          }
        }
        else if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
          pcVar44 = *(char **)pDVar101;
          if (pcVar44 < *(char **)pDVar57) {
            cVar83 = *pcVar44;
            uVar61 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar83);
            if ((uVar61 & 1) == 0) {
              pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar83);
            }
            else if (pcVar44 + 1 < *(char **)pDVar57) {
              pcVar103 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                           (CONCAT11(cVar83,pcVar44[1]));
            }
            else {
              pcVar103 = "<end>";
            }
          }
          else {
            pcVar103 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,pcVar44,"%s found empty stack",pcVar103);
        }
        local_190 = (Decoder *)CONCAT71(local_190._1_7_,5);
        puVar63 = *(undefined8 **)(param_1 + 0x4c0);
        if (puVar63 < *(undefined8 **)(param_1 + 0x4c8)) {
          uVar77 = *(undefined8 *)pDVar101;
          *(undefined1 *)(puVar63 + 1) = 5;
          *puVar63 = uVar77;
          *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
          DVar15 = *pDVar11;
          if (((byte)DVar15 & 1) == 0) goto code_r0x017cfa4c;
code_r0x017cfa74:
          if (*(ulong *)pDVar1 != 0) goto code_r0x017cfa9c;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    (this_00,(uchar **)pDVar101,(ValueType *)&local_190);
          DVar15 = *pDVar11;
          if (((byte)DVar15 & 1) != 0) goto code_r0x017cfa74;
code_r0x017cfa4c:
          if ((byte)DVar15 >> 1 != 0) goto code_r0x017cfa9c;
        }
        if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
          *pDVar3 = (Decoder)0x5;
          if (v8::internal::FLAG_trace_liftoff != '\0') {
            v8::internal::PrintF("[liftoff] unsupported: %s\n","simd");
          }
          v8::internal::wasm::Decoder::errorf
                    (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                 (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)))
                     ,"unsupported liftoff operation: %s","simd");
        }
      }
      else {
        v8::internal::wasm::Decoder::error
                  (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),"invalid shuffle mask");
      }
code_r0x017cfa9c:
      uVar50 = 0x12;
      pbVar80 = uStack_138;
      goto LAB_017c47ac;
    case 0xfd05:
    case 0xfd06:
    case 0xfd09:
    case 0xfd0a:
    case 0xfd0d:
      uVar77 = 1;
      goto code_r0x017c64cc;
    case 0xfd07:
    case 0xfd0b:
    case 0xfd0e:
      uVar77 = 1;
      goto code_r0x017cb120;
    case 0xfd10:
      uVar50 = 0xfd10;
      uVar77 = 2;
      goto code_r0x017c64cc;
    case 0xfd11:
      uVar50 = 0xfd11;
      uVar77 = 2;
      goto code_r0x017cb120;
    case 0xfd13:
      uVar50 = 0xfd13;
      uVar77 = 3;
      goto code_r0x017c64cc;
    case 0xfd14:
      uVar50 = 0xfd14;
      uVar77 = 3;
      goto code_r0x017cb120;
    case 0xfd16:
      uVar50 = 0xfd16;
      uVar77 = 4;
code_r0x017c64cc:
      iVar37 = FUN_017e2d30(param_1,uVar50,uVar77);
      goto code_r0x017cb164;
    case 0xfd17:
      uVar50 = 0xfd17;
      uVar77 = 4;
code_r0x017cb120:
      iVar37 = FUN_017e3084(param_1,uVar50,uVar77);
      goto code_r0x017cb164;
    case 0xfdc2:
    case 0xfdd2:
      uVar77 = 1;
      break;
    case 0xfdc3:
    case 0xfdd4:
      uVar77 = 3;
      break;
    case 0xfdc4:
      uVar77 = 0;
      break;
    case 0xfdc5:
      uVar77 = 5;
      break;
    case 0xfdd3:
      uVar77 = 2;
      break;
    case 0xfdd5:
      uVar77 = 4;
      break;
    case 0xfdd6:
      uVar77 = 10;
      break;
    case 0xfdd7:
      uVar77 = 0xb;
    }
    iVar37 = FUN_017e3610(param_1,uVar77);
code_r0x017cb164:
    uVar50 = iVar37 + 2;
    pbVar80 = uStack_138;
    break;
  case 0xfe:
    if (((byte)param_1[0x50] >> 1 & 1) == 0) {
      pcVar44 = "Invalid opcode (enable with --experimental-wasm-threads)";
      goto code_r0x017c548c;
    }
    **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) | 2;
    pbVar96 = (byte *)(*(long *)(param_1 + 0x10) + 1);
    if ((*(byte **)(param_1 + 0x18) < pbVar96) || ((int)*(byte **)(param_1 + 0x18) == (int)pbVar96))
    {
      v8::internal::wasm::Decoder::error(param_1,pbVar96,"atomic index");
      uVar50 = 0;
    }
    else {
      uVar50 = (uint)*pbVar96;
    }
    uVar50 = uVar50 | (uint)bVar14 << 8;
    plVar65 = (long *)v8::internal::wasm::WasmOpcodes::Signature(uVar50);
    if (plVar65 == (long *)0x0) {
code_r0x017c6fc4:
      v8::internal::wasm::Decoder::error(param_1,"invalid atomic opcode");
      iVar37 = 0;
code_r0x017c6fe0:
      uVar50 = iVar37 + 2;
      pbVar80 = uStack_138;
      break;
    }
    uVar93 = 0;
    cVar83 = '\0';
    switch(uVar50) {
    case 0xfe00:
    case 0xfe01:
    case 0xfe10:
    case 0xfe16:
    case 0xfe1e:
    case 0xfe24:
    case 0xfe25:
    case 0xfe2b:
    case 0xfe2c:
    case 0xfe32:
    case 0xfe33:
    case 0xfe39:
    case 0xfe3a:
    case 0xfe40:
    case 0xfe41:
    case 0xfe47:
    case 0xfe48:
    case 0xfe4e:
      if (*plVar65 == 0) {
        uVar93 = 0;
        cVar83 = '\0';
      }
      else {
        uVar93 = 0;
        cVar83 = *(char *)plVar65[2];
      }
      break;
    case 0xfe02:
    case 0xfe11:
    case 0xfe1f:
    case 0xfe26:
    case 0xfe2d:
    case 0xfe34:
    case 0xfe3b:
    case 0xfe42:
    case 0xfe49:
      if (*plVar65 == 0) goto code_r0x017caa5c;
      uVar93 = 1;
      cVar83 = *(char *)plVar65[2];
      break;
    case 0xfe03:
      puVar12 = (uchar *)(*(long *)pDVar101 + 2);
      if ((*(uchar **)pDVar57 < puVar12) || ((int)*(uchar **)pDVar57 == (int)puVar12)) {
        v8::internal::wasm::Decoder::error(param_1,puVar12,"zero");
code_r0x017d089c:
        if (((byte)*pDVar11 & 1) == 0) {
          if ((byte)*pDVar11 >> 1 != 0) {
code_r0x017d08e4:
            uVar50 = 3;
            pbVar80 = uStack_138;
            goto LAB_017c47ac;
          }
        }
        else if (*(ulong *)pDVar1 != 0) goto code_r0x017d08e4;
        if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
          *pDVar3 = (Decoder)0xa;
          if (v8::internal::FLAG_trace_liftoff != '\0') {
            v8::internal::PrintF("[liftoff] unsupported: %s\n","atomic.fence");
          }
          v8::internal::wasm::Decoder::errorf
                    (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                 (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)))
                     ,"unsupported liftoff operation: %s","atomic.fence");
          iVar37 = 1;
        }
        else {
          iVar37 = 1;
        }
        goto code_r0x017c6fe0;
      }
      if (*puVar12 == '\0') goto code_r0x017d089c;
      v8::internal::wasm::Decoder::error(param_1,puVar12,"invalid atomic operand");
      goto code_r0x017caf74;
    default:
      goto code_r0x017c6fc4;
    case 0xfe12:
    case 0xfe14:
    case 0xfe20:
    case 0xfe22:
    case 0xfe27:
    case 0xfe29:
    case 0xfe2e:
    case 0xfe30:
    case 0xfe35:
    case 0xfe37:
    case 0xfe3c:
    case 0xfe3e:
    case 0xfe43:
    case 0xfe45:
    case 0xfe4a:
    case 0xfe4c:
      if (*plVar65 == 0) goto code_r0x017c9458;
      uVar93 = 6;
      cVar83 = *(char *)plVar65[2];
      break;
    case 0xfe13:
    case 0xfe15:
    case 0xfe21:
    case 0xfe23:
    case 0xfe28:
    case 0xfe2a:
    case 0xfe2f:
    case 0xfe31:
    case 0xfe36:
    case 0xfe38:
    case 0xfe3d:
    case 0xfe3f:
    case 0xfe44:
    case 0xfe46:
    case 0xfe4b:
    case 0xfe4d:
      if (*plVar65 == 0) goto code_r0x017c9464;
      cVar83 = *(char *)plVar65[2];
      goto code_r0x017c9468;
    case 0xfe17:
    case 0xfe1d:
      break;
    case 0xfe18:
code_r0x017caa5c:
      cVar83 = '\0';
      uVar93 = 1;
      break;
    case 0xfe19:
    case 0xfe1b:
code_r0x017c9458:
      cVar83 = '\0';
      uVar93 = 6;
      break;
    case 0xfe1a:
    case 0xfe1c:
code_r0x017c9464:
      cVar83 = '\0';
code_r0x017c9468:
      uVar93 = 7;
    }
    if (v8::internal::FLAG_wasm_atomics_on_non_shared_memory == '\0') {
code_r0x017caab0:
      if (*(char *)(*(long *)(param_1 + 0x48) + 0x10) == '\0') {
        v8::internal::wasm::Decoder::error
                  (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),
                   "Atomic opcodes used without shared memory");
code_r0x017caf74:
        uVar50 = 2;
        pbVar80 = uStack_138;
        break;
      }
    }
    else if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
      v8::internal::wasm::Decoder::error
                (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),
                 "memory instruction with no memory");
      goto code_r0x017caab0;
    }
    if ((0xc3U >> (ulong)uVar93 & 1) == 0) {
LAB_017d09f4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    MemoryAccessImmediate
              ((MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_190,
               param_1,(uchar *)(*(long *)(param_1 + 0x10) + 1),
               *(uint *)(&UNK_01a63dd8 + (ulong)uVar93 * 4));
    iVar37 = (uint)local_188;
    uVar61 = plVar65[1];
    uVar50 = (uint)uVar61;
    uVar76 = (ulong)(int)uVar50;
    puVar49 = (uint *)&local_130;
    local_148[0] = SVar21;
    local_148[1] = SVar22;
    local_148[2] = SVar24;
    local_148[3] = SVar26;
    local_148[4] = SVar28;
    local_148[5] = SVar30;
    local_148[6] = SVar32;
    local_148[7] = SVar34;
    uStack_138 = (byte *)&uStack_b0;
    if (8 < uVar50) {
      local_148[8] = SVar21;
      local_148[9] = SVar22;
      local_148[10] = SVar24;
      local_148[0xb] = SVar26;
      local_148[0xc] = SVar28;
      local_148[0xd] = SVar30;
      local_148[0xe] = SVar32;
      local_148[0xf] = SVar34;
      v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)local_148,uVar76);
      puVar49 = (uint *)CONCAT17(local_148[7],
                                 CONCAT16(local_148[6],
                                          CONCAT15(local_148[5],
                                                   CONCAT14(local_148[4],
                                                            CONCAT13(local_148[3],
                                                                     CONCAT12(local_148[2],
                                                                              CONCAT11(local_148[1],
                                                                                       local_148[0])
                                                                             ))))));
    }
    puVar49 = puVar49 + uVar76 * 4;
    local_148[8] = SUB81(puVar49,0);
    local_148[9] = SUB81((ulong)puVar49 >> 8,0);
    local_148[10] = SUB81((ulong)puVar49 >> 0x10,0);
    local_148[0xb] = SUB81((ulong)puVar49 >> 0x18,0);
    local_148[0xc] = SUB81((ulong)puVar49 >> 0x20,0);
    local_148[0xd] = SUB81((ulong)puVar49 >> 0x28,0);
    local_148[0xe] = SUB81((ulong)puVar49 >> 0x30,0);
    local_148[0xf] = SUB81((ulong)puVar49 >> 0x38,0);
    if (0 < (int)uVar50) {
      uVar61 = -(uVar61 >> 0x1f & 1) & 0xfffffff000000000 | (uVar61 & 0xffffffff) << 4;
      do {
        uVar50 = uVar50 - 1;
        lVar39 = *(long *)pDVar4;
        bVar14 = *(byte *)(plVar65[2] + *plVar65 + uVar76 + -1);
        if ((ulong)*(uint *)(*(long *)pDVar2 + -0x1dc) < (ulong)(lVar39 - *(long *)this_00 >> 4)) {
          pbVar96 = *(byte **)(lVar39 + -0x10);
          uVar95 = (ulong)*(byte *)(lVar39 + -8);
          *(undefined8 **)pDVar4 = (undefined8 *)(lVar39 + -0x10);
        }
        else {
          if (*(char *)(*(long *)pDVar2 + -0x1d0) != '\x02') {
            pbVar96 = *(byte **)pDVar101;
            if (pbVar96 < *(byte **)pDVar57) {
              bVar18 = *pbVar96;
              uVar89 = (ushort)bVar18;
              uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
              if ((uVar95 & 1) != 0) {
                if (*(byte **)pDVar57 <= pbVar96 + 1) {
                  pcVar44 = "<end>";
                  goto code_r0x017cac80;
                }
                uVar89 = CONCAT11(bVar18,pbVar96[1]);
              }
              pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            }
            else {
              pcVar44 = "<end>";
            }
code_r0x017cac80:
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
          }
          pbVar96 = *(byte **)pDVar101;
          uVar95 = 10;
        }
        uVar93 = (uint)uVar95;
        uVar76 = uVar76 - 1;
        if (uVar93 != bVar14) {
          if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
            if ((bVar14 != 10) && ((uVar95 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
              pbVar80 = *(byte **)pDVar101;
              if (pbVar80 < *(byte **)pDVar57) {
                bVar18 = *pbVar80;
                uVar89 = (ushort)bVar18;
                uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar78 & 1) != 0) {
                  if (*(byte **)pDVar57 <= pbVar80 + 1) {
                    pcVar44 = "<end>";
                    goto code_r0x017cad7c;
                  }
                  uVar89 = CONCAT11(bVar18,pbVar80[1]);
                }
                pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
              }
              else {
                pcVar44 = "<end>";
              }
code_r0x017cad7c:
              if (bVar14 < 10) {
                pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
              }
              else {
                pcVar103 = "<unknown>";
              }
              if (pbVar96 < *(byte **)pDVar57) {
                bVar14 = *pbVar96;
                uVar89 = (ushort)bVar14;
                uVar78 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
                if ((uVar78 & 1) == 0) {
code_r0x017cadf8:
                  pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
                }
                else {
                  if (pbVar96 + 1 < *(byte **)pDVar57) {
                    uVar89 = CONCAT11(bVar14,pbVar96[1]);
                    goto code_r0x017cadf8;
                  }
                  pcVar45 = "<end>";
                }
                if (10 < uVar93) goto code_r0x017cae18;
code_r0x017cab54:
                pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar95 >> 7) & 0xfffffffffffff800 | uVar95 << 3));
              }
              else {
                pcVar45 = "<end>";
                if (uVar93 < 0xb) goto code_r0x017cab54;
code_r0x017cae18:
                pcVar53 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar96,
                         "%s[%d] expected type %s, found %s of type %s",pcVar44,(ulong)uVar50,
                         pcVar103,pcVar45,pcVar53);
            }
          }
        }
        lVar39 = CONCAT17(local_148[7],
                          CONCAT16(local_148[6],
                                   CONCAT15(local_148[5],
                                            CONCAT14(local_148[4],
                                                     CONCAT13(local_148[3],
                                                              CONCAT12(local_148[2],
                                                                       CONCAT11(local_148[1],
                                                                                local_148[0])))))))
                 + uVar61;
        uVar61 = uVar61 - 0x10;
        *(byte **)(lVar39 + -0x10) = pbVar96;
        *(char *)(lVar39 + -8) = (char)uVar95;
      } while (0 < (long)uVar76);
    }
    if (cVar83 == '\0') {
code_r0x017caea4:
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) != 0) goto code_r0x017cae80;
code_r0x017caeac:
      if ((byte)DVar15 >> 1 == 0) goto code_r0x017caeb4;
    }
    else {
      uVar55 = 0;
      if (*plVar65 != 0) {
        uVar55 = *(undefined1 *)plVar65[2];
      }
      uStack_b0 = (Decoder *)CONCAT71(uStack_b0._1_7_,uVar55);
      puVar63 = *(undefined8 **)(param_1 + 0x4c0);
      if (*(undefined8 **)(param_1 + 0x4c8) <= puVar63) {
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  (this_00,(uchar **)pDVar101,(ValueType *)&uStack_b0);
        goto code_r0x017caea4;
      }
      uVar77 = *(undefined8 *)pDVar101;
      *(undefined1 *)(puVar63 + 1) = uVar55;
      *puVar63 = uVar77;
      *(long *)pDVar4 = *(long *)pDVar4 + 0x10;
      DVar15 = *pDVar11;
      if (((byte)DVar15 & 1) == 0) goto code_r0x017caeac;
code_r0x017cae80:
      if (*(ulong *)pDVar1 == 0) {
code_r0x017caeb4:
        if ((*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') && (*pDVar3 == (Decoder)0x0)) {
          *pDVar3 = (Decoder)0xa;
          if (v8::internal::FLAG_trace_liftoff != '\0') {
            v8::internal::PrintF("[liftoff] unsupported: %s\n","atomicop");
          }
          v8::internal::wasm::Decoder::errorf
                    (uVar36,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                 (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)))
                     ,"unsupported liftoff operation: %s","atomicop");
        }
      }
    }
    puVar49 = (uint *)CONCAT17(local_148[7],
                               CONCAT16(local_148[6],
                                        CONCAT15(local_148[5],
                                                 CONCAT14(local_148[4],
                                                          CONCAT13(local_148[3],
                                                                   CONCAT12(local_148[2],
                                                                            CONCAT11(local_148[1],
                                                                                     local_148[0])))
                                                         ))));
    if (puVar49 != (uint *)&local_130) {
      free(puVar49);
    }
    uVar50 = iVar37 + 2;
    pbVar80 = uStack_138;
  }
  goto LAB_017c47ac;
code_r0x017d011c:
  lVar66 = *(long *)pDVar4;
  bVar14 = pbVar97[lVar56];
  if ((ulong)*(uint *)(lVar39 + -0x1dc) < (ulong)(lVar66 - *(long *)this_00 >> 4)) {
    pbVar58 = *(byte **)(lVar66 + -0x10);
    bVar18 = *(byte *)(lVar66 + -8);
    uVar76 = (ulong)bVar18;
    *(undefined8 **)pDVar4 = (undefined8 *)(lVar66 + -0x10);
    if (bVar18 != bVar14) {
code_r0x017d0204:
      uVar93 = (uint)uVar76;
      if ((bVar14 != 7 || uVar93 != 8) && (bVar14 != 6 || 2 < uVar93 - 7)) {
        if ((bVar14 != 10) && ((uVar76 != 10 && (bVar14 != 9 || uVar93 != 8)))) {
          pbVar82 = *(byte **)pDVar101;
          if (pbVar82 < *(byte **)pDVar57) {
            bVar18 = *pbVar82;
            uVar89 = (ushort)bVar18;
            uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
            if ((uVar95 & 1) != 0) {
              if (*(byte **)pDVar57 <= pbVar82 + 1) goto code_r0x017d02a8;
              uVar89 = CONCAT11(bVar18,pbVar82[1]);
            }
            pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
          }
          else {
code_r0x017d02a8:
            pcVar44 = "<end>";
          }
          if (bVar14 < 10) {
            pcVar103 = (&PTR_s_<stmt>_01cdb038)[(char)bVar14];
          }
          else {
            pcVar103 = "<unknown>";
          }
          if (pbVar58 < *(byte **)pDVar57) {
            bVar14 = *pbVar58;
            uVar89 = (ushort)bVar14;
            uVar95 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
            if ((uVar95 & 1) != 0) {
              if (*(byte **)pDVar57 <= pbVar58 + 1) goto code_r0x017d0324;
              uVar89 = CONCAT11(bVar14,pbVar58[1]);
            }
            pcVar45 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
            if (10 < uVar93) goto code_r0x017d035c;
code_r0x017d0334:
            pcVar53 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                (-(uVar76 >> 7) & 0xfffffffffffff800 | uVar76 << 3));
          }
          else {
code_r0x017d0324:
            pcVar45 = "<end>";
            if (uVar93 < 0xb) goto code_r0x017d0334;
code_r0x017d035c:
            pcVar53 = "<unknown>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar58,"%s[%d] expected type %s, found %s of type %s"
                     ,pcVar44,(ulong)((int)lVar56 + 1),pcVar103,pcVar45,pcVar53);
        }
      }
    }
  }
  else {
    if (*(char *)(lVar39 + -0x1d0) != '\x02') {
      pbVar58 = *(byte **)pDVar101;
      if (pbVar58 < *(byte **)pDVar57) {
        bVar18 = *pbVar58;
        uVar89 = (ushort)bVar18;
        uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
        if ((uVar76 & 1) != 0) {
          if (*(byte **)pDVar57 <= pbVar58 + 1) goto code_r0x017d01b4;
          uVar89 = CONCAT11(bVar18,pbVar58[1]);
        }
        pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
      }
      else {
code_r0x017d01b4:
        pcVar44 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar58,"%s found empty stack",pcVar44);
    }
    uVar76 = 10;
    pbVar58 = *(byte **)pDVar101;
    if (bVar14 != 10) goto code_r0x017d0204;
  }
  if ((uVar61 & 0xffffffff) - 1 == lVar56) goto code_r0x017d03b8;
  lVar56 = lVar56 + 1;
  lVar39 = *(long *)pDVar2;
  goto code_r0x017d011c;
code_r0x017c9ecc:
  do {
    bVar14 = *pbVar58;
    bVar18 = pbVar97[uVar76];
    if (bVar18 != bVar14) {
      iVar37 = (int)(char)bVar14;
      if (((iVar37 != 8 || bVar18 != 9) && (2 < (iVar37 - 7U & 0xff) || bVar18 != 6)) &&
         (iVar37 != 8 || bVar18 != 7)) {
        if (bVar18 < 0xb) {
          pcVar44 = (&PTR_s_<stmt>_01cdb088)[(char)bVar18];
        }
        else {
          pcVar44 = "<unknown>";
        }
        if (bVar14 < 0xb) {
          pcVar103 = (&PTR_s_<stmt>_01cdb088)[(char)bVar14];
        }
        else {
          pcVar103 = "<unknown>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,*(char **)pDVar101,
                   "type error in merge[%u] (expected %s, got %s)",uVar76,pcVar44,pcVar103);
        uVar50 = 1;
        goto code_r0x017d0468;
      }
    }
    uVar76 = uVar76 + 1;
    pbVar58 = pbVar58 + 0x10;
  } while ((uVar61 & 0xffffffff) != uVar76);
code_r0x017d03b8:
  if (((byte)*pDVar11 & 1) == 0) {
    if ((byte)*pDVar11 >> 1 == 0) goto code_r0x017d03cc;
code_r0x017d0458:
    uVar50 = 1;
  }
  else {
    if (*(ulong *)pDVar1 != 0) goto code_r0x017d0458;
code_r0x017d03cc:
    if (*(char *)(*(long *)pDVar2 + -0x1d0) == '\0') {
      uVar61 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)this,0);
      iVar37 = 1;
      local_148[0] = SUB81(param_1,0);
      local_148[1] = SUB81((ulong)param_1 >> 8,0);
      local_148[2] = SUB81((ulong)param_1 >> 0x10,0);
      local_148[3] = SUB81((ulong)param_1 >> 0x18,0);
      local_148[4] = SUB81((ulong)param_1 >> 0x20,0);
      local_148[5] = SUB81((ulong)param_1 >> 0x28,0);
      local_148[6] = SUB81((ulong)param_1 >> 0x30,0);
      local_148[7] = SUB81((ulong)param_1 >> 0x38,0);
      local_148[8] = SUB81(pbVar80,0);
      local_148[9] = SUB81((ulong)pbVar80 >> 8,0);
      local_148[10] = SUB81((ulong)pbVar80 >> 0x10,0);
      local_148[0xb] = SUB81((ulong)pbVar80 >> 0x18,0);
      local_148[0xc] = SUB81((ulong)pbVar80 >> 0x20,0);
      local_148[0xd] = SUB81((ulong)pbVar80 >> 0x28,0);
      local_148[0xe] = SUB81((ulong)pbVar80 >> 0x30,0);
      local_148[0xf] = SUB81((ulong)pbVar80 >> 0x38,0);
      local_130 = (ulong)uVar50 << 0x20;
      pDVar90 = param_1;
      local_190 = (Decoder *)&local_188;
      if (uVar50 == 0) {
code_r0x017d0558:
        local_130 = CONCAT44(local_130._4_4_,iVar37);
        uStack_138 = pbVar96;
        if (pbVar96 < *(byte **)(pDVar90 + 0x18)) {
          uVar93 = *pbVar96 & 0x7f;
          if ((char)*pbVar96 < '\0') {
            uVar93 = v8::internal::wasm::Decoder::
                     read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                               (pDVar90,pbVar96 + 1,(uint *)&uStack_1d8,"branch table entry",uVar93)
            ;
            uVar61 = uStack_1d8 & 0xffffffff;
          }
          else {
            uVar61 = 1;
            uStack_1d8 = CONCAT44(uStack_1d8._4_4_,1);
          }
        }
        else {
          uStack_1d8 = (ulong)uStack_1d8._4_4_ << 0x20;
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)pDVar90,(char *)pbVar96,"expected %s","branch table entry");
          uVar61 = 0;
          uVar93 = 0;
        }
        uStack_138 = uStack_138 + uVar61;
        FUN_017e0f84(this,param_1,uVar93,&local_190);
      }
      else {
        uVar93 = ~(uint)(1L << (uVar61 & 0x3f)) & (*(uint *)(param_1 + 0x2b8) ^ 0xffffffff);
        uStack_138 = pbVar96;
        if ((uVar93 & 0x13f8ffff) == 0) {
          uVar76 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             ((LiftoffAssembler *)this,0x13f8ffff);
        }
        else {
          uVar76 = ((ulong)uVar93 & 0x2a8aaaa) >> 1 | ((ulong)uVar93 & 0x11505555) << 1;
          uVar76 = (uVar76 & 0xcccccccccccccccc) >> 2 | (uVar76 & 0x3333333333333333) << 2;
          uVar76 = (uVar76 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar76 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar76 = (uVar76 & 0xff00ff00ff00ff00) >> 8 | (uVar76 & 0xff00ff00ff00ff) << 8;
          uVar76 = LZCOUNT((uVar76 >> 0x10 | (uVar76 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        *(undefined4 *)((undefined8 *)((ulong)&uStack_b0 | 5) + 1) = 0;
        *(undefined8 *)((ulong)&uStack_b0 | 5) = 0;
        uStack_b0._0_5_ = CONCAT41(uVar50,1);
        v8::internal::wasm::LiftoffAssembler::LoadConstant
                  ((LiftoffAssembler *)this,uVar76 & 0xff,&uStack_b0,0x13);
        uStack_1d8 = 0;
        v8::internal::wasm::LiftoffAssembler::emit_cond_jump
                  (this,2,&uStack_1d8,1,uVar61 & 0xff | 0x4000000000,0,uVar76 & 0xff | 0x4000000000,
                   0);
        FUN_017e0d84(this,param_1,uVar76 & 0xff,uVar61 & 0xff,0,uVar50,local_148,&local_190);
        v8::internal::Assembler::bind((Label *)this);
        if (param_1[1000] == (Decoder)0x0) {
          iVar37 = (uint)local_130 + 1;
          pDVar90 = (Decoder *)
                    CONCAT17(local_148[7],
                             CONCAT16(local_148[6],
                                      CONCAT15(local_148[5],
                                               CONCAT14(local_148[4],
                                                        CONCAT13(local_148[3],
                                                                 CONCAT12(local_148[2],
                                                                          CONCAT11(local_148[1],
                                                                                   local_148[0])))))
                                     ));
          pbVar96 = uStack_138;
          goto code_r0x017d0558;
        }
      }
      FUN_017e10d4(&local_190,local_188);
      uVar61 = (*(long *)(param_1 + 0x4e0) - *(long *)(param_1 + 0x4d8) >> 5) * -0x1111111111111111;
      if (0 < (int)uVar61) {
        uVar76 = 0;
        do {
          if ((*(ulong *)((long)pbStack_318 + (uVar76 >> 3 & 0x1ffffffffffffff8)) >> (uVar76 & 0x3f)
              & 1) != 0) {
            lVar39 = *(long *)pDVar2 + uVar76 * -0x1e0;
            lVar56 = lVar39 + -0x1c8;
            if (*(char *)(lVar39 + -0x1e0) != '\x03') {
              lVar56 = lVar39 + -0x1a8;
            }
            *(undefined1 *)(lVar56 + 0x18) = 1;
          }
          uVar76 = uVar76 + 1;
        } while (uVar76 != (uVar61 & 0xffffffff));
      }
    }
code_r0x017d06c8:
    DVar15 = *pDVar11;
    if (((byte)DVar15 & 1) != 0) goto code_r0x017d06e0;
    while (uVar61 = (ulong)((byte)DVar15 >> 1), uVar100 <= uVar50) {
      while( true ) {
        if (uVar61 != 0) goto code_r0x017d0758;
        uVar100 = uVar100 + 1;
        if (*(byte **)pDVar57 <= pbVar79) {
          local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar79,"expected %s","branch table entry");
          goto code_r0x017d06c8;
        }
        if ((char)*pbVar79 < '\0') {
          v8::internal::wasm::Decoder::
          read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                    (param_1,pbVar79 + 1,(uint *)local_148,"branch table entry",*pbVar79 & 0x7f);
          uVar61 = (ulong)CONCAT13(local_148[3],
                                   CONCAT12(local_148[2],CONCAT11(local_148[1],local_148[0])));
        }
        else {
          uVar61 = 1;
          local_148[0] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x1;
          local_148[1] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[2] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
          local_148[3] = (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
        }
        pbVar79 = pbVar79 + uVar61;
        DVar15 = *pDVar11;
        if (((byte)DVar15 & 1) == 0) break;
code_r0x017d06e0:
        uVar61 = *(ulong *)pDVar1;
        if (uVar50 < uVar100) goto code_r0x017d0758;
      }
    }
code_r0x017d0758:
    uVar50 = ((int)pbVar79 - (int)pbVar80) + 1;
    lVar39 = *(long *)(param_1 + 0x4b8) +
             (ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) * 0x10;
    if (lVar39 != *(long *)(param_1 + 0x4c0)) {
      *(long *)pDVar4 = lVar39;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x4e0) + -0x1d0) = 2;
  }
joined_r0x017c9e94:
  if (pbVar97 != (byte *)0x0) {
code_r0x017d0468:
    operator_delete(pbVar97);
  }
  pbVar80 = uStack_138;
  if (pbStack_318 != (void *)0x0) {
    operator_delete(pbStack_318);
    pbVar80 = uStack_138;
  }
LAB_017c47ac:
  pbVar96 = (byte *)(*(long *)pDVar101 + (ulong)uVar50);
  *(byte **)pDVar101 = pbVar96;
  pbVar58 = *(byte **)pDVar57;
  if (pbVar58 <= pbVar96) goto LAB_017d095c;
  goto LAB_017c47c4;
code_r0x017c6ec0:
  uVar76 = uVar76 + 1;
  lVar56 = lVar56 + 0x10;
  if (uVar50 == uVar76) goto code_r0x017c6f70;
  goto joined_r0x017c6eb8;
code_r0x017cea10:
  pbVar96 = *(byte **)pDVar101;
  if (pbVar96 < *(byte **)pDVar57) {
    bVar14 = *pbVar96;
    uVar89 = (ushort)bVar14;
    uVar76 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar89);
    if ((uVar76 & 1) != 0) {
      if (*(byte **)pDVar57 <= pbVar96 + 1) {
        pcVar44 = "<end>";
        goto code_r0x017cea7c;
      }
      uVar89 = CONCAT11(bVar14,pbVar96[1]);
    }
    pcVar44 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar89);
  }
  else {
    pcVar44 = "<end>";
  }
code_r0x017cea7c:
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar96,"%s found empty stack",pcVar44);
  lVar39 = lVar39 + -1;
  goto joined_r0x017ce9c4;
}

