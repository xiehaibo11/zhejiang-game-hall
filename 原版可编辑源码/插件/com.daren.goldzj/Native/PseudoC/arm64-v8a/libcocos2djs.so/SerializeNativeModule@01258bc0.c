
/* v8::internal::wasm::WasmSerializer::SerializeNativeModule(v8::internal::Vector<unsigned char>)
   const */

undefined8
v8::internal::wasm::WasmSerializer::SerializeNativeModule
          (undefined8 *param_1,uint *param_2,undefined1 *param_3,undefined1 *param_4,long param_5,
          undefined1 *param_6,long param_7)

{
  uint *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  Instruction IVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  Instruction *pIVar15;
  uint *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  NativeModule *this;
  size_t __n;
  long *plVar24;
  uint *local_1b8;
  undefined1 *puStack_1b0;
  uint *local_1a8;
  locale alStack_1a0 [16];
  Instruction *local_190;
  char local_168;
  undefined **local_160;
  undefined **local_158;
  Instruction *local_150;
  undefined1 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  
  plVar23 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
  this = (NativeModule *)*param_1;
  lVar7 = (long)plVar3 - (long)plVar23;
  if (lVar7 == 0) {
    if ((undefined1 *)0x17 < param_3) goto LAB_01258c60;
  }
  else {
    uVar18 = (lVar7 - 8U >> 3) + 1;
    if (uVar18 < 2) {
      puVar17 = (undefined1 *)0x8;
      lVar19 = *plVar23;
      plVar24 = plVar23;
      if (lVar19 == 0) goto LAB_01258c4c;
      goto LAB_01258c14;
    }
    uVar21 = uVar18 & 0x3ffffffffffffffe;
    puVar17 = (undefined1 *)0x0;
    plVar24 = plVar23 + uVar21;
    puVar22 = (undefined1 *)0x8;
    lVar19 = *plVar23;
    lVar4 = plVar23[1];
    uVar20 = uVar21;
    plVar11 = plVar23 + 1;
    while( true ) {
      if (lVar19 != 0) {
        param_1 = *(undefined8 **)(lVar19 + 8);
      }
      if (lVar4 != 0) {
        param_5 = *(long *)(lVar4 + 8);
      }
      if (lVar19 != 0) {
        param_4 = *(undefined1 **)(lVar19 + 0x18);
      }
      if (lVar4 != 0) {
        param_7 = *(long *)(lVar4 + 0x18);
      }
      if (lVar19 != 0) {
        param_6 = *(undefined1 **)(lVar19 + 0x28);
      }
      puVar14 = param_1;
      if (lVar4 != 0) {
        puVar14 = *(undefined8 **)(lVar4 + 0x28);
      }
      puVar2 = param_4 + 0x5d;
      lVar5 = param_5 + 0x5d + param_7;
      if (lVar19 != 0) {
        param_4 = *(undefined1 **)(lVar19 + 0x80);
      }
      param_6 = (undefined1 *)((long)param_1 + (long)(param_6 + (long)puVar2));
      param_5 = lVar5;
      if (lVar4 != 0) {
        param_5 = *(long *)(lVar4 + 0x80);
      }
      param_4 = param_6 + (long)param_4 * 8;
      param_1 = (undefined8 *)((long)puVar14 + param_5 * 8 + lVar5);
      puVar2 = (undefined1 *)0x8;
      if (lVar19 != 0) {
        puVar2 = param_4;
      }
      puVar14 = (undefined8 *)&DAT_00000008;
      if (lVar4 != 0) {
        puVar14 = param_1;
      }
      puVar22 = puVar2 + (long)puVar22;
      uVar20 = uVar20 - 2;
      puVar17 = (undefined1 *)((long)puVar14 + (long)puVar17);
      if (uVar20 == 0) break;
      lVar19 = plVar11[1];
      lVar4 = plVar11[2];
      plVar11 = plVar11 + 2;
    }
    puVar17 = puVar17 + (long)puVar22;
    if (uVar18 != uVar21) {
      do {
        lVar19 = *plVar24;
        if (lVar19 == 0) {
LAB_01258c4c:
          lVar19 = 8;
        }
        else {
LAB_01258c14:
          lVar19 = *(long *)(lVar19 + 8) + *(long *)(lVar19 + 0x18) + *(long *)(lVar19 + 0x28) +
                   *(long *)(lVar19 + 0x80) * 8 + 0x5d;
        }
        plVar24 = plVar24 + 1;
        puVar17 = puVar17 + lVar19;
      } while (plVar3 != plVar24);
    }
    if (puVar17 + 0x10 <= param_3) {
LAB_01258c60:
      puStack_1b0 = (undefined1 *)((long)param_2 + (long)param_3);
      local_1b8 = param_2;
      local_1a8 = param_2;
      FUN_01259414(&local_1b8);
      local_160._0_4_ =
           *(int *)(*(long *)(this + 200) + 0x3c) + *(int *)(*(long *)(this + 200) + 0x44);
      FUN_0125a13c(&local_1b8,&local_160);
      local_160 = (undefined **)
                  CONCAT44(local_160._4_4_,*(undefined4 *)(*(long *)(this + 200) + 0x3c));
      FUN_0125a13c(&local_1b8,&local_160);
      if (lVar7 == 0) {
        return 1;
      }
      plVar24 = (long *)*plVar23;
      if (plVar24 != (long *)0x0) goto LAB_01258d2c;
      do {
        local_160 = (undefined **)0x0;
        FUN_0125a2d8(&local_1b8,&local_160);
        while( true ) {
          plVar23 = plVar23 + 1;
          if (plVar23 == plVar3) {
            return 1;
          }
          plVar24 = (long *)*plVar23;
          if (plVar24 == (long *)0x0) break;
LAB_01258d2c:
          local_160 = (undefined **)
                      (plVar24[1] + plVar24[3] + plVar24[5] + plVar24[0x10] * 8 + 0x5d);
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[8];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[10];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[0xb];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[0xc];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[0xd];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160._0_4_ = (int)plVar24[9];
          FUN_0125a13c(&local_1b8,&local_160);
          local_160 = (undefined **)CONCAT44(local_160._4_4_,*(undefined4 *)((long)plVar24 + 0x4c));
          FUN_0125a13c(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[1];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[3];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[5];
          FUN_0125a2d8(&local_1b8,&local_160);
          local_160 = (undefined **)plVar24[0x10];
          FUN_0125a2d8(&local_1b8,&local_160);
          uVar9 = *(uint *)((long)plVar24 + 0x3c);
          *local_1a8 = uVar9;
          local_1a8 = local_1a8 + 1;
          if (FLAG_trace_wasm_serialization != '\0') {
            local_160 = (undefined **)0x1ca1178;
            local_100[0] = (undefined **)0x1ca11a0;
            std::__ndk1::ios_base::init((ios_base *)local_100,(AndroidLogStream *)&local_158);
            local_70 = 0xffffffff;
            local_78 = 0;
            local_158 = &PTR__basic_streambuf_01c671a8;
            local_160 = &PTR__StdoutStream_01ca1128;
            local_100[0] = &PTR__StdoutStream_01ca1150;
            std::__ndk1::locale::locale((locale *)&local_150);
            uStack_130 = 0;
            local_138 = 0;
            uStack_120 = 0;
            uStack_128 = 0;
            uStack_140 = 0;
            local_148 = 0;
            local_158 = &PTR__AndroidLogStream_01cbc008;
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_160,"wrote: ",7);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,(ulong)uVar9
                      );
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_160," sized: ",8);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,4);
            std::__ndk1::ios_base::getloc();
            plVar11 = (long *)std::__ndk1::locale::use_facet
                                        (alStack_1a0,(id *)&std::__ndk1::ctype<char>::id);
            cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
            std::__ndk1::locale::~locale(alStack_1a0);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,cVar8);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160);
            local_160 = &PTR__StdoutStream_01ca1128;
            local_100[0] = &PTR__StdoutStream_01ca1150;
            AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_158);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
          }
          lVar7 = plVar24[0x11];
          *(char *)local_1a8 = (char)lVar7;
          local_1a8 = (uint *)((long)local_1a8 + 1);
          puVar16 = local_1a8;
          if (FLAG_trace_wasm_serialization != '\0') {
            local_160 = (undefined **)0x1ca1178;
            local_100[0] = (undefined **)0x1ca11a0;
            std::__ndk1::ios_base::init((ios_base *)local_100,(AndroidLogStream *)&local_158);
            local_70 = 0xffffffff;
            local_78 = 0;
            local_158 = &PTR__basic_streambuf_01c671a8;
            local_160 = &PTR__StdoutStream_01ca1128;
            local_100[0] = &PTR__StdoutStream_01ca1150;
            std::__ndk1::locale::locale((locale *)&local_150);
            uStack_130 = 0;
            local_138 = 0;
            uStack_120 = 0;
            uStack_128 = 0;
            uStack_140 = 0;
            local_148 = 0;
            local_158 = &PTR__AndroidLogStream_01cbc008;
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_160,"wrote: ",7);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,
                       (long)(char)lVar7);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_160," sized: ",8);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,1);
            std::__ndk1::ios_base::getloc();
            plVar11 = (long *)std::__ndk1::locale::use_facet
                                        (alStack_1a0,(id *)&std::__ndk1::ctype<char>::id);
            cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
            std::__ndk1::locale::~locale(alStack_1a0);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,cVar8);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160);
            local_160 = &PTR__StdoutStream_01ca1128;
            local_100[0] = &PTR__StdoutStream_01ca1150;
            AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_158);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
            puVar16 = local_1a8;
          }
          __n = plVar24[1];
          local_1a8 = (uint *)((long)puVar16 + __n);
          FUN_0125a474(&local_1b8,plVar24[2],plVar24[3]);
          FUN_0125a474(&local_1b8,plVar24[4],plVar24[5]);
          FUN_0125a474(&local_1b8,plVar24[0xf],
                       -((ulong)plVar24[0x10] >> 0x1c & 1) & 0xffffffff00000000 |
                       (plVar24[0x10] & 0x1fffffffU) << 3);
          memcpy(puVar16,(void *)*plVar24,__n);
          lVar7 = *plVar24;
          lVar4 = plVar24[1];
          lVar19 = plVar24[2];
          lVar5 = plVar24[3];
          uVar12 = WasmCode::constant_pool();
          RelocIterator::RelocIterator
                    ((RelocIterator *)&local_160,lVar7,lVar4,lVar19,lVar5,uVar12,0x3b0);
          RelocIterator::RelocIterator
                    ((RelocIterator *)alStack_1a0,puVar16,plVar24[1],plVar24[2],plVar24[3],
                     plVar24[8] + (long)puVar16,0x3b0);
          while (local_168 == '\0') {
            switch(local_148) {
            case 4:
              uVar18 = RelocInfo::wasm_call_address((RelocInfo *)&local_150);
              uVar9 = NativeModule::GetFunctionIndexFromJumpTableSlot(this,uVar18);
              break;
            case 5:
              uVar18 = RelocInfo::wasm_stub_call_address((RelocInfo *)&local_150);
              uVar9 = NativeModule::GetRuntimeStubId(this,uVar18);
              break;
            default:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            case 7:
              IVar6 = local_150[3];
              puVar14 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_150);
              if (IVar6 == (Instruction)0x58) {
                puVar14 = (undefined8 *)*puVar14;
              }
              if (((DAT_01d418a8 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_01d418a8), iVar10 != 0)) {
                FUN_0125a60c();
                __cxa_guard_release(&DAT_01d418a8);
              }
              uVar18 = 0x24f;
              puVar16 = &DAT_01d40f68;
              do {
                uVar20 = uVar18 >> 1;
                puVar1 = puVar16 + uVar20 + 1;
                uVar18 = uVar18 + ~uVar20;
                if (puVar14 <= (undefined8 *)(&DAT_01d3fcf0)[puVar16[uVar20]]) {
                  puVar1 = puVar16;
                  uVar18 = uVar20;
                }
                puVar16 = puVar1;
              } while (uVar18 != 0);
              uVar9 = *puVar1;
              if (local_190[3] == (Instruction)0x58) {
                puVar13 = (ulong *)Instruction::ImmPCOffsetTarget(local_190);
                *puVar13 = (ulong)uVar9;
                goto LAB_012591c0;
              }
              pIVar15 = local_190 + (uVar9 << 2);
              goto LAB_012592e4;
            case 8:
            case 9:
              *(long *)local_190 = *(long *)local_150 - *plVar24;
              goto LAB_012591c0;
            }
            if (local_190[3] == (Instruction)0x58) {
              puVar13 = (ulong *)Instruction::ImmPCOffsetTarget(local_190);
              *puVar13 = (ulong)uVar9;
            }
            else {
              pIVar15 = local_190 + (uVar9 << 2);
LAB_012592e4:
              Instruction::SetBranchImmTarget(local_190,pIVar15);
            }
LAB_012591c0:
            RelocIterator::next((RelocIterator *)alStack_1a0);
            RelocIterator::next((RelocIterator *)&local_160);
          }
        }
      } while( true );
    }
  }
  return 0;
}

