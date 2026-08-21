
/* v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection(ModuleDecoderImpl *this)

{
  ModuleDecoderImpl *pMVar1;
  char *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  int *piVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *__dest;
  undefined8 uVar11;
  int *__dest_00;
  byte *pbVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  void *pvVar20;
  int *piVar21;
  size_t sVar22;
  long lVar23;
  long lVar24;
  ModuleDecoderImpl *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined7 uStack_84;
  undefined1 local_7d;
  undefined7 uStack_7c;
  undefined8 uStack_75;
  undefined2 local_6d;
  undefined1 local_6b;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar19 = *(char **)(this + 0x10);
  uVar8 = Decoder::consume_u32v((Decoder *)this,"exports count");
  uVar13 = (ulong)uVar8;
  if (100000 < uVar8) {
    Decoder::errorf((uchar *)this,pcVar19,"%s of %u exceeds internal limit of %zu","exports count",
                    uVar13,100000);
    uVar13 = 100000;
  }
  lVar23 = *(long *)(this + 0x50);
  pvVar20 = *(void **)(lVar23 + 0xe8);
  if ((ulong)(*(long *)(lVar23 + 0xf8) - (long)pvVar20 >> 4) < uVar13) {
    sVar22 = *(long *)(lVar23 + 0xf0) - (long)pvVar20;
    __dest = operator_new(uVar13 * 0x10);
    if (0 < (long)sVar22) {
      memcpy(__dest,pvVar20,sVar22);
      pvVar20 = *(void **)(lVar23 + 0xe8);
    }
    *(void **)(lVar23 + 0xe8) = __dest;
    *(size_t *)(lVar23 + 0xf0) = (long)__dest + sVar22;
    *(void **)(lVar23 + 0xf8) = (void *)((long)__dest + uVar13 * 0x10);
    if (pvVar20 != (void *)0x0) {
      operator_delete(pvVar20);
    }
  }
  uVar8 = 0;
  uVar15 = (ulong)(byte)this[0x30];
  if (((byte)this[0x30] & 1) == 0) goto LAB_015f1244;
LAB_015f0f30:
  uVar18 = *(ulong *)(this + 0x38);
  if (uVar8 < (uint)uVar13) {
    do {
      if (uVar18 != 0) break;
      lVar23 = *(long *)(this + 0x50);
      uStack_9c = 0;
      local_a8 = (ModuleDecoderImpl *)0x0;
      uStack_a0 = uStack_a0 & 0xffffff00;
      puVar3 = *(undefined8 **)(lVar23 + 0xf0);
      if (puVar3 < *(undefined8 **)(lVar23 + 0xf8)) {
        puVar3[1] = (ulong)uStack_a0;
        *puVar3 = 0;
        *(long *)(lVar23 + 0xf0) = *(long *)(lVar23 + 0xf0) + 0x10;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmExport,std::__ndk1::allocator<v8::internal::wasm::WasmExport>>
        ::__push_back_slow_path<v8::internal::wasm::WasmExport>
                  ((vector<v8::internal::wasm::WasmExport,std::__ndk1::allocator<v8::internal::wasm::WasmExport>>
                    *)(lVar23 + 0xe8),(WasmExport *)&local_a8);
      }
      lVar23 = *(long *)(*(long *)(this + 0x50) + 0xf0);
      uVar11 = FUN_015ede44(this,1,"field name");
      *(undefined8 *)(lVar23 + -0x10) = uVar11;
      pbVar12 = *(byte **)(this + 0x10);
      if (*(int *)(this + 0x18) == (int)pbVar12) {
        Decoder::errorf((uchar *)this,(char *)pbVar12,"expected %u bytes, fell off end",1);
        *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
        *(undefined1 *)(lVar23 + -8) = 0;
switchD_015f0fd0_caseD_0:
        lVar24 = *(long *)(this + 0x50);
        pcVar19 = *(char **)(this + 0x10);
        uVar15 = Decoder::consume_u32v((Decoder *)this,"export function index");
        lVar17 = *(long *)(lVar24 + 0x88);
        uVar18 = uVar15 & 0xffffffff;
        uVar16 = *(long *)(lVar24 + 0x90) - lVar17;
        if ((uVar15 & 0xffffffff) < (ulong)((long)uVar16 >> 5)) {
          lVar17 = lVar17 + (uVar15 & 0xffffffff) * 0x20;
        }
        else {
          pcVar14 = "y";
          if (uVar16 != 0x20) {
            pcVar14 = "ies";
          }
          Decoder::errorf((uchar *)this,pcVar19,"%s %u out of bounds (%d entr%s)",
                          "export function index",uVar18,uVar16 >> 5,pcVar14);
          lVar17 = 0;
          uVar18 = 0;
        }
        *(int *)(lVar23 + -4) = (int)uVar18;
        *(int *)(*(long *)(this + 0x50) + 0x48) = *(int *)(*(long *)(this + 0x50) + 0x48) + 1;
        if (lVar17 != 0) {
          *(undefined1 *)(lVar17 + 0x19) = 1;
        }
      }
      else {
        bVar4 = *pbVar12;
        uVar15 = (ulong)bVar4;
        *(byte **)(this + 0x10) = pbVar12 + 1;
        *(byte *)(lVar23 + -8) = bVar4;
        switch(uVar15) {
        case 0:
          goto switchD_015f0fd0_caseD_0;
        case 1:
          lVar24 = *(long *)(this + 0x50);
          pcVar14 = *(char **)(this + 0x10);
          pcVar19 = "table index";
          uVar9 = Decoder::consume_u32v((Decoder *)this,"table index");
          lVar17 = *(long *)(lVar24 + 0xb8);
          uVar15 = *(long *)(lVar24 + 0xc0) - lVar17;
          if ((ulong)uVar9 < (ulong)((long)uVar15 >> 4)) {
            *(uint *)(lVar23 + -4) = uVar9;
            if (lVar17 != 0) {
              *(undefined1 *)(lVar17 + (ulong)uVar9 * 0x10 + 0xe) = 1;
            }
          }
          else {
            uVar18 = uVar15 >> 4;
            bVar7 = uVar15 == 0x10;
LAB_015f1204:
            pcVar2 = "y";
            if (!bVar7) {
              pcVar2 = "ies";
            }
            Decoder::errorf((uchar *)this,pcVar14,"%s %u out of bounds (%d entr%s)",pcVar19,
                            (ulong)uVar9,uVar18,pcVar2);
            *(undefined4 *)(lVar23 + -4) = 0;
          }
          break;
        case 2:
          iVar10 = Decoder::consume_u32v((Decoder *)this,"memory index");
          if ((iVar10 != 0) || (lVar23 = *(long *)(this + 0x50), *(char *)(lVar23 + 0x12) == '\0'))
          {
            Decoder::error((Decoder *)this,"invalid memory index != 0");
            lVar23 = *(long *)(this + 0x50);
          }
          *(undefined1 *)(lVar23 + 0x13) = 1;
          break;
        case 3:
          lVar24 = *(long *)(this + 0x50);
          pcVar14 = *(char **)(this + 0x10);
          pcVar19 = "global index";
          uVar9 = Decoder::consume_u32v((Decoder *)this,"global index");
          lVar17 = *(long *)(lVar24 + 0x18);
          uVar15 = *(long *)(lVar24 + 0x20) - lVar17;
          if ((ulong)((long)uVar15 >> 5) <= (ulong)uVar9) {
            uVar18 = uVar15 >> 5;
            bVar7 = uVar15 == 0x20;
            goto LAB_015f1204;
          }
          *(uint *)(lVar23 + -4) = uVar9;
          if (lVar17 != 0) {
            *(undefined1 *)(lVar17 + (ulong)uVar9 * 0x20 + 0x1d) = 1;
          }
          break;
        case 4:
          if (((byte)this[0x48] & 1) == 0) {
            uVar15 = 4;
            goto switchD_015f0fd0_default;
          }
          lVar17 = *(long *)(this + 0x50);
          pcVar19 = *(char **)(this + 0x10);
          uVar15 = Decoder::consume_u32v((Decoder *)this,"exception index");
          uVar18 = uVar15 & 0xffffffff;
          uVar16 = *(long *)(lVar17 + 0x108) - *(long *)(lVar17 + 0x100);
          if ((ulong)((long)uVar16 >> 3) <= (uVar15 & 0xffffffff)) {
            pcVar14 = "y";
            if (uVar16 != 8) {
              pcVar14 = "ies";
            }
            Decoder::errorf((uchar *)this,pcVar19,"%s %u out of bounds (%d entr%s)",
                            "exception index",uVar18,uVar16 >> 3,pcVar14);
            uVar18 = 0;
          }
          *(int *)(lVar23 + -4) = (int)uVar18;
          break;
        default:
switchD_015f0fd0_default:
          Decoder::errorf((uchar *)this,(char *)pbVar12,"invalid export kind 0x%02x",uVar15);
        }
      }
      uVar8 = uVar8 + 1;
      uVar15 = (ulong)(byte)this[0x30];
      if (((byte)this[0x30] & 1) != 0) goto LAB_015f0f30;
LAB_015f1244:
      uVar18 = uVar15 >> 1;
      if ((uint)uVar13 <= uVar8) break;
    } while( true );
  }
  if ((uVar15 & 1) == 0) {
    uVar15 = uVar15 >> 1;
  }
  else {
    uVar15 = *(ulong *)(this + 0x38);
  }
  if ((uVar15 == 0) && (this[0x90] == (ModuleDecoderImpl)0x0)) {
    lVar23 = *(long *)(this + 0x50);
    uVar13 = *(long *)(lVar23 + 0xf0) - *(long *)(lVar23 + 0xe8);
    if (1 < (ulong)((long)uVar13 >> 4)) {
      if (uVar13 == 0) {
        __dest_00 = (int *)0x0;
        piVar21 = (int *)0x0;
      }
      else {
        if ((ulong)((long)uVar13 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        __dest_00 = operator_new(uVar13);
        sVar22 = *(long *)(lVar23 + 0xf0) - (long)*(void **)(lVar23 + 0xe8);
        piVar21 = __dest_00;
        if (0 < (long)sVar22) {
          memcpy(__dest_00,*(void **)(lVar23 + 0xe8),sVar22);
          piVar21 = (int *)((long)__dest_00 + sVar22);
        }
      }
      uVar13 = (long)piVar21 - (long)__dest_00 >> 4;
      local_a8 = this;
      piVar6 = __dest_00;
      if (0x800 < (long)piVar21 - (long)__dest_00) {
        uVar15 = uVar13;
        if (0x7fffffffffffffe < (long)uVar13) {
          uVar15 = 0x7ffffffffffffff;
        }
        do {
          pvVar20 = operator_new(uVar15 << 4,(nothrow_t *)&std::nothrow);
          if (pvVar20 != (void *)0x0) {
            std::__ndk1::
            __stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                      (__dest_00,piVar21,&local_a8,uVar13,pvVar20,uVar15);
            operator_delete(pvVar20);
            goto joined_r0x015f13b8;
          }
          uVar15 = uVar15 >> 1;
        } while (uVar15 != 0);
      }
      std::__ndk1::
      __stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                (__dest_00,piVar21,&local_a8,uVar13,0,0);
joined_r0x015f13b8:
      do {
        piVar6 = piVar6 + 4;
        if (piVar6 == piVar21) goto LAB_015f14d0;
        uVar9 = piVar6[-3];
        uVar8 = piVar6[1];
        if (uVar9 == uVar8) {
          lVar23 = *(long *)(this + 8);
          uVar13 = (ulong)(uint)(*piVar6 - *(int *)(this + 0x20));
          iVar10 = memcmp((void *)(lVar23 + (ulong)(uint)(piVar6[-4] - *(int *)(this + 0x20))),
                          (void *)(lVar23 + uVar13),(ulong)uVar9);
          if (-1 < iVar10) goto LAB_015f1420;
          goto joined_r0x015f13b8;
        }
      } while (uVar9 < uVar8);
      lVar23 = *(long *)(this + 8);
      uVar13 = (ulong)(uint)(*piVar6 - *(int *)(this + 0x20));
LAB_015f1420:
      pMVar1 = (ModuleDecoderImpl *)(lVar23 + uVar13);
      uStack_a0 = uVar8;
      if (0x31 < (int)uVar8) {
        uStack_a0 = 0x32;
      }
      local_a8 = pMVar1;
      if (0x32 < uVar8) {
        uStack_94 = *(undefined8 *)(pMVar1 + 8);
        uStack_8c = *(undefined8 *)(pMVar1 + 0x10);
        uStack_75 = *(undefined8 *)(pMVar1 + 0x27);
        local_a8 = (ModuleDecoderImpl *)&uStack_9c;
        local_6d = 0x2e2e;
        local_6b = 0x2e;
        uStack_7c = (undefined7)((ulong)*(undefined8 *)(pMVar1 + 0x1f) >> 8);
        uStack_84 = (undefined7)*(undefined8 *)(pMVar1 + 0x18);
        local_7d = (undefined1)((ulong)*(undefined8 *)(pMVar1 + 0x18) >> 0x38);
        uStack_9c = (undefined4)*(undefined8 *)pMVar1;
        uStack_98 = (undefined4)((ulong)*(undefined8 *)pMVar1 >> 0x20);
      }
      if ((ulong)(long)(char)piVar6[-2] < 5) {
        pcVar19 = (&PTR_s_function_019f03e1_0x15_01cc9f08)[(char)piVar6[-2]];
      }
      else {
        pcVar19 = "unknown";
      }
      if ((ulong)(long)(char)piVar6[2] < 5) {
        pcVar14 = (&PTR_s_function_019f03e1_0x15_01cc9f08)[(char)piVar6[2]];
      }
      else {
        pcVar14 = "unknown";
      }
      Decoder::errorf((uchar *)this,(char *)pMVar1,
                      "Duplicate export name \'%.*s\' for %s %d and %s %d",(ulong)uStack_a0,local_a8
                      ,pcVar19,(ulong)(uint)piVar6[-1],pcVar14,piVar6[3]);
LAB_015f14d0:
      if (__dest_00 != (int *)0x0) {
        operator_delete(__dest_00);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

