
/* v8::internal::wasm::NativeModule::AddCodeWithCodeSpace(unsigned int, v8::internal::CodeDesc
   const&, unsigned int, unsigned int,
   v8::internal::OwnedVector<v8::internal::trap_handler::ProtectedInstructionData>,
   v8::internal::OwnedVector<unsigned char const>, v8::internal::wasm::WasmCode::Kind,
   v8::internal::wasm::ExecutionTier, v8::internal::Vector<unsigned char>,
   v8::internal::wasm::NativeModule::JumpTablesRef const&) */

void v8::internal::wasm::NativeModule::AddCodeWithCodeSpace
               (undefined8 *param_1,long param_2,undefined4 param_3,long *param_4_00,
               undefined4 param_4,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
               undefined4 param_9,WasmCode param_10,void *param_11,ulong param_12,long *param_13)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Instruction *this;
  int iVar6;
  void *__dest;
  long lVar7;
  WasmCode *this_00;
  long lVar8;
  ulong __n;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  RelocIterator aRStack_a0 [16];
  Instruction *local_90;
  char local_88;
  char local_68;
  
  __n = (ulong)*(uint *)((long)param_4_00 + 0x34);
  if ((int)*(uint *)((long)param_4_00 + 0x34) < 1) {
    __n = 0;
    __dest = (void *)0x0;
  }
  else {
    __dest = operator_new__(__n);
    memcpy(__dest,(void *)((*param_4_00 + (long)(int)param_4_00[1]) - __n),__n);
  }
  iVar2 = *(int *)((long)param_4_00 + 0xc);
  lVar3 = param_4_00[3];
  lVar4 = param_4_00[5];
  lVar5 = param_4_00[4];
  iVar1 = 0;
  if (*(int *)((long)param_4_00 + 0x14) != 0) {
    iVar1 = (int)param_4_00[2];
  }
  memcpy(param_11,(void *)*param_4_00,(long)iVar2);
  lVar8 = *param_4_00;
  RelocIterator::RelocIterator
            (aRStack_a0,param_11,param_12,__dest,__n,(long)param_11 + (long)(int)lVar5,0x171);
  if (local_68 == '\0') {
    do {
      this = local_90;
      if (local_88 == '\b') {
        *(long *)local_90 = *(long *)local_90 + ((long)param_11 - lVar8);
      }
      else if (local_88 == '\x05') {
        iVar6 = RelocInfo::wasm_call_tag((RelocInfo *)&local_90);
        RelocInfo::set_wasm_stub_call_address
                  ((RelocInfo *)&local_90,param_13[1] + (ulong)(uint)(iVar6 << 4),1);
      }
      else if (local_88 == '\x04') {
        iVar6 = RelocInfo::wasm_call_tag((RelocInfo *)&local_90);
        RelocInfo::set_wasm_call_address
                  ((RelocInfo *)&local_90,
                   *param_13 +
                   (ulong)(uint)((iVar6 - *(int *)(*(long *)(param_2 + 200) + 0x3c)) * 4),1);
      }
      else if ((*(uint *)local_90 | 0x80000000) >> 0x1a == 0x25) {
        lVar7 = Instruction::ImmPCOffsetTarget(local_90);
        Instruction::SetBranchImmTarget(this,(Instruction *)(lVar7 - ((long)param_11 - lVar8)));
      }
      RelocIterator::next(aRStack_a0);
    } while (local_68 == '\0');
  }
  FlushInstructionCache(param_11,param_12);
  this_00 = operator_new(0x90);
  uVar10 = param_7[1];
  uVar9 = *param_7;
  *param_7 = 0;
  uVar12 = param_8[1];
  uVar11 = *param_8;
  *param_8 = 0;
  *(undefined4 *)(this_00 + 0x38) = param_3;
  *(undefined4 *)(this_00 + 0x70) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x3c) = param_9;
  this_00[0x88] = param_10;
  *(undefined4 *)(this_00 + 0x48) = param_4;
  *(void **)this_00 = param_11;
  *(ulong *)(this_00 + 8) = param_12;
  *(void **)(this_00 + 0x10) = __dest;
  *(ulong *)(this_00 + 0x18) = __n;
  *(long *)(this_00 + 0x30) = param_2;
  *(undefined4 *)(this_00 + 0x4c) = param_6;
  *(long *)(this_00 + 0x40) = (long)(int)lVar5;
  *(undefined4 *)(this_00 + 0x8c) = 1;
  *(undefined8 *)(this_00 + 0x80) = uVar10;
  *(undefined8 *)(this_00 + 0x78) = uVar9;
  *(long *)(this_00 + 0x50) = (long)iVar1;
  *(undefined8 *)(this_00 + 0x28) = uVar12;
  *(undefined8 *)(this_00 + 0x20) = uVar11;
  *param_1 = this_00;
  *(long *)(this_00 + 0x58) = (long)(int)lVar3;
  *(long *)(this_00 + 0x60) = (long)(int)lVar4;
  *(long *)(this_00 + 0x68) = (long)iVar2;
  WasmCode::MaybePrint(this_00,(char *)0x0);
  return;
}

