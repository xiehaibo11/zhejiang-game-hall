
/* v8::internal::wasm::ModuleDecoderImpl::FinishDecoding(bool) */

void v8::internal::wasm::ModuleDecoderImpl::FinishDecoding(bool param_1)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  ModuleDecoderImpl MVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  __shared_weak_count *this;
  ModuleDecoderImpl *this_00;
  ulong in_x1;
  WasmModule *pWVar7;
  undefined8 *in_x8;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined4 local_70;
  byte local_68;
  undefined4 local_67;
  undefined3 uStack_63;
  ulong local_60;
  void *pvStack_58;
  
  this_00 = (ModuleDecoderImpl *)(ulong)param_1;
  lVar6 = tpidr_el0;
  lVar8 = *(long *)(lVar6 + 0x28);
  if (((byte)this_00[0x30] & 1) == 0) {
    if ((byte)this_00[0x30] >> 1 == 0) {
LAB_015edb7c:
      pWVar7 = *(WasmModule **)(this_00 + 0x50);
      if ((*(int *)(pWVar7 + 0x44) == 0) ||
         (*(int *)(*(long *)(pWVar7 + 0x88) + (ulong)*(uint *)(pWVar7 + 0x3c) * 0x20 + 0x10) != 0))
      {
        if ((((byte)this_00[0x6d] >> 4 & 1) == 0) ||
           (*(int *)(pWVar7 + 0x4c) ==
            (int)((ulong)(*(long *)(pWVar7 + 0xa8) - *(long *)(pWVar7 + 0xa0)) >> 5))) {
          CalculateGlobalOffsets(this_00,pWVar7);
        }
        else {
          Decoder::errorf((uchar *)this_00,*(char **)(this_00 + 0x10),
                          "data segments count %u mismatch (%u expected)");
        }
      }
      else {
        Decoder::errorf((uchar *)this_00,*(char **)(this_00 + 0x10),
                        "function count is %u, but code section is absent");
      }
    }
  }
  else if (*(long *)(this_00 + 0x38) == 0) goto LAB_015edb7c;
  Decoder::
  toResult<std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>,std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>>
            ((shared_ptr *)this_00);
  this = (__shared_weak_count *)CONCAT17(uStack_71,uStack_78);
  if ((in_x1 & 1) != 0) {
    uVar2 = (ulong)(local_68 >> 1);
    if ((local_68 & 1) != 0) {
      uVar2 = local_60;
    }
    if (uVar2 == 0) {
      MVar3 = this_00[0x78];
      if (((byte)MVar3 & 1) == 0) {
        if ((byte)MVar3 >> 1 != 0) {
LAB_015edca8:
          uVar11 = *(undefined8 *)(this_00 + 0x79);
          uStack_88 = (undefined7)((ulong)*(undefined8 *)(this_00 + 0x80) >> 8);
          local_89 = (undefined1)((ulong)uVar11 >> 0x38);
          uVar9 = *(undefined8 *)(this_00 + 0x88);
          *(undefined8 *)(this_00 + 0x78) = 0;
          *(undefined8 *)(this_00 + 0x80) = 0;
          *(undefined8 *)(this_00 + 0x88) = 0;
          *(undefined4 *)(in_x8 + 2) = *(undefined4 *)(this_00 + 0x70);
          *in_x8 = 0;
          in_x8[1] = 0;
          *(ModuleDecoderImpl *)(in_x8 + 3) = MVar3;
          in_x8[4] = CONCAT71(uStack_88,local_89);
          in_x8[5] = uVar9;
          *(undefined8 *)((long)in_x8 + 0x19) = uVar11;
          if ((local_68 & 1) != 0) {
            operator_delete(pvStack_58);
          }
          if (this != (__shared_weak_count *)0x0) {
            p_Var1 = this + 8;
            do {
              lVar10 = *(long *)p_Var1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar5) {
                *(long *)p_Var1 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*(long *)this + 0x10))(this);
              std::__ndk1::__shared_weak_count::__release_weak(this);
            }
          }
          goto LAB_015edc60;
        }
      }
      else if (*(long *)(this_00 + 0x80) != 0) goto LAB_015edca8;
    }
  }
  *(undefined4 *)(in_x8 + 2) = local_70;
  *(byte *)(in_x8 + 3) = local_68;
  *in_x8 = CONCAT17(uStack_79,local_80);
  in_x8[1] = this;
  in_x8[4] = local_60;
  in_x8[5] = pvStack_58;
  *(uint *)((long)in_x8 + 0x1c) = CONCAT31(uStack_63,local_67._3_1_);
  *(undefined4 *)((long)in_x8 + 0x19) = local_67;
LAB_015edc60:
  if (*(long *)(lVar6 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

