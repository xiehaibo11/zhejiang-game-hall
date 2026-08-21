
/* v8::internal::DisassemblingDecoder::VisitNEONScalarPairwise(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONScalarPairwise
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  NEONFormatDecoder aNStack_1c0 [112];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_50 = 0;
  local_150 = 0x16;
  uStack_148 = 0x800000005;
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_1c0,param_1,(NEONFormatMap *)NEONFormatDecoder::FPScalarFormatMap()::map,
             (NEONFormatMap *)&local_150);
  uVar1 = *(uint *)param_1 & 0xffb1f800;
  if ((int)uVar1 < 0x7e30f800) {
    if (uVar1 == 0x5eb1b800) {
      pcVar3 = "%sd, \'Vn.%s";
      pcVar4 = "addp";
      goto LAB_01287790;
    }
    if (uVar1 == 0x7e30c800) {
      pcVar3 = "%sd, \'Vn.%s";
      pcVar4 = "fmaxnmp";
      goto LAB_01287790;
    }
    if (uVar1 == 0x7e30d800) {
      pcVar3 = "%sd, \'Vn.%s";
      pcVar4 = "faddp";
      goto LAB_01287790;
    }
  }
  else {
    if (uVar1 == 0x7e30f800) {
      pcVar3 = "%sd, \'Vn.%s";
      pcVar4 = "fmaxp";
      goto LAB_01287790;
    }
    if (uVar1 == 0x7eb0c800) {
      pcVar3 = "%sd, \'Vn.%s";
      pcVar4 = "fminnmp";
      goto LAB_01287790;
    }
    if (uVar1 == 0x7eb0f800) {
      pcVar3 = "%sd, \'Vn.%s";
      pcVar4 = "fminp";
      goto LAB_01287790;
    }
  }
  pcVar3 = "(NEONScalarPairwise)";
  pcVar4 = "unimplemented";
LAB_01287790:
  pcVar3 = (char *)NEONFormatDecoder::Substitute(aNStack_1c0,pcVar3,0,1,1);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

