
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::TurboAssembler::CallEphemeronKeyBarrier(v8::internal::Register,
   v8::internal::Operand, v8::internal::SaveFPRegsMode) */

void v8::internal::TurboAssembler::CallEphemeronKeyBarrier
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
               ulong param_5)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a0 [8];
  undefined1 local_98;
  ulong local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  auVar5._0_8_ = -(ulong)((CallDescriptors::call_descriptor_data_._1296_8_ & 1) == 0);
  auVar5._8_8_ = -(ulong)((CallDescriptors::call_descriptor_data_._1296_8_ & 2) == 0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = _DAT_019f3e00 ^ _DAT_01891110;
  auVar6._9_7_ = 0;
  auVar6._0_9_ = _DAT_019f3e00;
  auVar6 = auVar6 ^ auVar1 & auVar5;
  uVar4 = CONCAT17(auVar6[7] | auVar6[0xf],
                   CONCAT16(auVar6[6] | auVar6[0xe],
                            CONCAT15(auVar6[5] | auVar6[0xd],
                                     CONCAT14(auVar6[4] | auVar6[0xc],
                                              CONCAT13(~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x40000000) == 0
                                                                       ) >> 0x18) & 0x40 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x10000000) == 0
                                                                       ) >> 0x18) & 0x10 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x4000000) == 0)
                                                              >> 0x18) & 4 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x1000000) == 0)
                                                              >> 0x18) & 1 | auVar6[3] |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x80000000) == 0
                                                                       ) >> 0x18) & 0x80 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x20000000) == 0
                                                                       ) >> 0x18) & 0x20 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x8000000) == 0)
                                                              >> 0x18) & 8 |
                                                       ~(byte)(-(ulong)((CallDescriptors::
                                                                         call_descriptor_data_.
                                                                         _1296_8_ & 0x2000000) == 0)
                                                              >> 0x18) & 2 | auVar6[0xb],
                                                       CONCAT12(~(byte)(-(ulong)((CallDescriptors::
                                                                                                                                                                    
                                                  call_descriptor_data_._1296_8_ & 0x400000) == 0)
                                                  >> 0x10) & 0x40 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._1296_8_ &
                                                                   0x100000) == 0) >> 0x10) & 0x10 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._1296_8_ &
                                                                   0x40000) == 0) >> 0x10) & 4 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._1296_8_ &
                                                                   0x10000) == 0) >> 0x10) & 1 |
                                                  auVar6[2] |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._1296_8_ &
                                                                   0x800000) == 0) >> 0x10) & 0x80 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._1296_8_ &
                                                                   0x200000) == 0) >> 0x10) & 0x20 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._1296_8_ &
                                                                   0x80000) == 0) >> 0x10) & 8 |
                                                  ~(byte)(-(ulong)((CallDescriptors::
                                                                    call_descriptor_data_._1296_8_ &
                                                                   0x20000) == 0) >> 0x10) & 2 |
                                                  auVar6[10],
                                                  CONCAT11(~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x4000) == 0
                                                                           ) >> 8) & 0x40 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x1000) == 0
                                                                           ) >> 8) & 0x10 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x400) == 0)
                                                                  >> 8) & 4 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x100) == 0)
                                                                  >> 8) & 1 | auVar6[1] |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x8000) == 0
                                                                           ) >> 8) & 0x80 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x2000) == 0
                                                                           ) >> 8) & 0x20 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x800) == 0)
                                                                  >> 8) & 8 |
                                                           ~(byte)(-(ulong)((CallDescriptors::
                                                                             call_descriptor_data_.
                                                                             _1296_8_ & 0x200) == 0)
                                                                  >> 8) & 2 | auVar6[9],
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._1296_8_ & 0x40
                                                              ) == 0) & 0x40U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._1296_8_ & 0x10
                                                              ) == 0) & 0x10U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._1296_8_ & 4)
                                                             == 0) & 4U | auVar6[0] |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._1296_8_ & 0x80
                                                              ) == 0) & 0x80U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._1296_8_ & 0x20
                                                              ) == 0) & 0x20U |
                                                           ~-((CallDescriptors::
                                                               call_descriptor_data_._1296_8_ & 8)
                                                             == 0) & 8U | auVar6[8])))))));
  PushCPURegList(param_1,uVar4,0x40);
  local_100 = *(undefined8 *)(CallDescriptors::call_descriptor_data_._1304_8_ + 0x18);
  local_f8 = *(undefined4 *)(CallDescriptors::call_descriptor_data_._1304_8_ + 0x20);
  local_f0 = *param_4;
  uStack_e8 = param_4[1];
  uStack_d8 = param_4[3];
  uStack_e0 = param_4[2];
  local_b0 = param_4[8];
  uStack_c8 = param_4[5];
  local_d0 = param_4[4];
  uStack_b8 = SUB168(*(undefined1 (*) [16])(param_4 + 6),8);
  uStack_c0 = SUB168(*(undefined1 (*) [16])(param_4 + 6),0);
  MoveObjectAndSlot(param_1,*(undefined8 *)CallDescriptors::call_descriptor_data_._1304_8_,
                    *(undefined4 *)(CallDescriptors::call_descriptor_data_._1304_8_ + 8),
                    *(undefined8 *)(CallDescriptors::call_descriptor_data_._1304_8_ + 0xc),
                    *(undefined4 *)(CallDescriptors::call_descriptor_data_._1304_8_ + 0x14),param_2,
                    param_3,&local_f0);
  local_80 = -((param_5 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
  local_a0[0] = 0;
  local_98 = 0;
  local_78 = 0x13;
  local_70 = 0xffffffff;
  local_68 = 2;
  Mov(param_1,&local_100,local_a0,0);
  uVar3 = Builtins::builtin_handle((Builtins *)(*(long *)(param_1 + 0x178) + 0x9e00),1);
  Call(param_1,uVar3,0);
  PopCPURegList(param_1,uVar4,0x40);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

