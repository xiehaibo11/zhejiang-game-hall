
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::TurboAssembler::RestoreRegisters(unsigned long) */

void __thiscall v8::internal::TurboAssembler::RestoreRegisters(TurboAssembler *this,ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._0_8_ = -(ulong)((param_1 & 1) == 0);
  auVar2._8_8_ = -(ulong)((param_1 & 2) == 0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = _DAT_019f3e00 ^ _DAT_01891110;
  auVar3._9_7_ = 0;
  auVar3._0_9_ = _DAT_019f3e00;
  auVar3 = auVar3 ^ auVar1 & auVar2;
  PopCPURegList(this,CONCAT17(auVar3[7] | auVar3[0xf],
                              CONCAT16(auVar3[6] | auVar3[0xe],
                                       CONCAT15(auVar3[5] | auVar3[0xd],
                                                CONCAT14(auVar3[4] | auVar3[0xc],
                                                         CONCAT13(auVar3[3] |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x1000000) == 0)
                                                                         >> 0x18) & 1 |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x4000000) == 0)
                                                                         >> 0x18) & 4 |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x10000000) == 0)
                                                                         >> 0x18) & 0x10 |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x40000000) == 0)
                                                                         >> 0x18) & 0x40 |
                                                                  auVar3[0xb] |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x2000000) == 0)
                                                                         >> 0x18) & 2 |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x8000000) == 0)
                                                                         >> 0x18) & 8 |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x20000000) == 0)
                                                                         >> 0x18) & 0x20 |
                                                                  ~(byte)(-(ulong)((param_1 &
                                                                                   0x80000000) == 0)
                                                                         >> 0x18) & 0x80,
                                                                  CONCAT12(auVar3[2] |
                                                                           ~(byte)(-(ulong)((param_1
                                                                                            & 
                                                  0x10000) == 0) >> 0x10) & 1 |
                                                  ~(byte)(-(ulong)((param_1 & 0x40000) == 0) >> 0x10
                                                         ) & 4 |
                                                  ~(byte)(-(ulong)((param_1 & 0x100000) == 0) >>
                                                         0x10) & 0x10 |
                                                  ~(byte)(-(ulong)((param_1 & 0x400000) == 0) >>
                                                         0x10) & 0x40 |
                                                  auVar3[10] |
                                                  ~(byte)(-(ulong)((param_1 & 0x20000) == 0) >> 0x10
                                                         ) & 2 |
                                                  ~(byte)(-(ulong)((param_1 & 0x80000) == 0) >> 0x10
                                                         ) & 8 |
                                                  ~(byte)(-(ulong)((param_1 & 0x200000) == 0) >>
                                                         0x10) & 0x20 |
                                                  ~(byte)(-(ulong)((param_1 & 0x800000) == 0) >>
                                                         0x10) & 0x80,
                                                  CONCAT11(auVar3[1] |
                                                           ~(byte)(-(ulong)((param_1 & 0x100) == 0)
                                                                  >> 8) & 1 |
                                                           ~(byte)(-(ulong)((param_1 & 0x400) == 0)
                                                                  >> 8) & 4 |
                                                           ~(byte)(-(ulong)((param_1 & 0x1000) == 0)
                                                                  >> 8) & 0x10 |
                                                           ~(byte)(-(ulong)((param_1 & 0x4000) == 0)
                                                                  >> 8) & 0x40 |
                                                           auVar3[9] |
                                                           ~(byte)(-(ulong)((param_1 & 0x200) == 0)
                                                                  >> 8) & 2 |
                                                           ~(byte)(-(ulong)((param_1 & 0x800) == 0)
                                                                  >> 8) & 8 |
                                                           ~(byte)(-(ulong)((param_1 & 0x2000) == 0)
                                                                  >> 8) & 0x20 |
                                                           ~(byte)(-(ulong)((param_1 & 0x8000) == 0)
                                                                  >> 8) & 0x80,
                                                           auVar3[0] | ~-((param_1 & 4) == 0) & 4U |
                                                           ~-((param_1 & 0x10) == 0) & 0x10U |
                                                           ~-((param_1 & 0x40) == 0) & 0x40U |
                                                           auVar3[8] | ~-((param_1 & 8) == 0) & 8U |
                                                           ~-((param_1 & 0x20) == 0) & 0x20U |
                                                           ~-((param_1 & 0x80) == 0) & 0x80U))))))),
                0x40);
  return;
}

