
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::TurboAssembler::CallRecordWriteStub(v8::internal::Register, v8::internal::Operand,
   v8::internal::RememberedSetAction, v8::internal::SaveFPRegsMode,
   v8::internal::Handle<v8::internal::Code>, unsigned long) */

void v8::internal::TurboAssembler::CallRecordWriteStub
               (Assembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
               ulong param_5,ulong param_6,long param_7,undefined4 param_8)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Assembler *local_b8;
  BlockScope local_b0 [24];
  ulong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  auVar4._0_8_ = -(ulong)((CallDescriptors::call_descriptor_data_._2136_8_ & 1) == 0);
  auVar4._8_8_ = -(ulong)((CallDescriptors::call_descriptor_data_._2136_8_ & 2) == 0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = _DAT_019f3e00 ^ _DAT_01891110;
  auVar5._9_7_ = 0;
  auVar5._0_9_ = _DAT_019f3e00;
  auVar5 = auVar5 ^ auVar1 & auVar4;
  uVar3 = CONCAT17(auVar5[7] | auVar5[0xf],
                   CONCAT16(auVar5[6] | auVar5[0xe],
                            CONCAT15(auVar5[5] | auVar5[0xd],
                                     CONCAT14(auVar5[4] | auVar5[0xc],
                                              CONCAT13(~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x40000000) == 0
                                                                       ) >> 0x18) & 0x40 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x10000000) == 0
                                                                       ) >> 0x18) & 0x10 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x4000000) == 0)
                                                              >> 0x18) & 4 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x1000000) == 0)
                                                              >> 0x18) & 1 | auVar5[3] |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x80000000) == 0
                                                                       ) >> 0x18) & 0x80 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x20000000) == 0
                                                                       ) >> 0x18) & 0x20 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x8000000) == 0)
                                                              >> 0x18) & 8 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _2136_8_ & 0x2000000) == 0)
                                                              >> 0x18) & 2 | auVar5[0xb],
                                                       CONCAT12(~(byte)(-(ulong)((CallDescriptors::
                                                                                                                                                                    
                                                  call_descriptor_data_._2136_8_ & 0x400000) == 0)
                                                  >> 0x10) & 0x40 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._2136_8_ &
                                                                   0x100000) == 0) >> 0x10) & 0x10 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._2136_8_ &
                                                                   0x40000) == 0) >> 0x10) & 4 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._2136_8_ &
                                                                   0x10000) == 0) >> 0x10) & 1 |
                                                  auVar5[2] |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._2136_8_ &
                                                                   0x800000) == 0) >> 0x10) & 0x80 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._2136_8_ &
                                                                   0x200000) == 0) >> 0x10) & 0x20 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._2136_8_ &
                                                                   0x80000) == 0) >> 0x10) & 8 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._2136_8_ &
                                                                   0x20000) == 0) >> 0x10) & 2 |
                                                  auVar5[10],
                                                  CONCAT11(~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x4000) == 0
                                                                           ) >> 8) & 0x40 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x1000) == 0
                                                                           ) >> 8) & 0x10 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x400) == 0)
                                                                  >> 8) & 4 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x100) == 0)
                                                                  >> 8) & 1 | auVar5[1] |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x8000) == 0
                                                                           ) >> 8) & 0x80 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x2000) == 0
                                                                           ) >> 8) & 0x20 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x800) == 0)
                                                                  >> 8) & 8 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _2136_8_ & 0x200) == 0)
                                                                  >> 8) & 2 | auVar5[9],
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._2136_8_ & 0x40
                                                              ) == 0) & 0x40U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._2136_8_ & 0x10
                                                              ) == 0) & 0x10U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._2136_8_ & 4)
                                                             == 0) & 4U | auVar5[0] |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._2136_8_ & 0x80
                                                              ) == 0) & 0x80U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._2136_8_ & 0x20
                                                              ) == 0) & 0x20U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._2136_8_ & 8)
                                                             == 0) & 8U | auVar5[8])))))));
  PushCPURegList(param_1,uVar3,0x40);
  local_110 = *(undefined8 *)(CallDescriptors::call_descriptor_data_._2144_8_ + 0x18);
  local_108 = *(undefined4 *)(CallDescriptors::call_descriptor_data_._2144_8_ + 0x20);
  local_120 = *(undefined8 *)(CallDescriptors::call_descriptor_data_._2144_8_ + 0x24);
  local_118 = *(undefined4 *)(CallDescriptors::call_descriptor_data_._2144_8_ + 0x2c);
  local_100 = *param_4;
  uStack_f8 = param_4[1];
  uStack_e8 = param_4[3];
  uStack_f0 = param_4[2];
  local_c0 = param_4[8];
  uStack_d8 = param_4[5];
  local_e0 = param_4[4];
  uStack_c8 = SUB168(*(undefined1 (*) [16])(param_4 + 6),8);
  uStack_d0 = SUB168(*(undefined1 (*) [16])(param_4 + 6),0);
  MoveObjectAndSlot(param_1,*(undefined8 *)CallDescriptors::call_descriptor_data_._2144_8_,
                    *(undefined4 *)(CallDescriptors::call_descriptor_data_._2144_8_ + 8),
                    *(undefined8 *)(CallDescriptors::call_descriptor_data_._2144_8_ + 0xc),
                    *(undefined4 *)(CallDescriptors::call_descriptor_data_._2144_8_ + 0x14),param_2,
                    param_3,&local_100);
  local_98 = -((param_5 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
  local_b8 = (Assembler *)((ulong)local_b8 & 0xffffffffffffff00);
  local_b0[0] = (BlockScope)0x0;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80 = 2;
  Mov((TurboAssembler *)param_1,&local_110,&local_b8,0);
  local_98 = -((param_6 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (param_6 & 0xffffffff) << 1;
  local_b8 = (Assembler *)((ulong)local_b8 & 0xffffffffffffff00);
  local_b0[0] = (BlockScope)0x0;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80 = 2;
  Mov((TurboAssembler *)param_1,&local_120,&local_b8,0);
  if (param_7 == 0) {
    local_b8 = param_1;
    ConstantPool::BlockScope::BlockScope(local_b0,param_1,0);
    Assembler::CheckVeneerPool(local_b8,false,true,0);
    Assembler::StartBlockVeneerPool(local_b8);
    Assembler::near_call(param_1,param_8,5);
    Assembler::EndBlockVeneerPool(local_b8);
    ConstantPool::BlockScope::~BlockScope(local_b0);
  }
  else {
    Call((TurboAssembler *)param_1,param_7,0);
  }
  PopCPURegList(param_1,uVar3,0x40);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

