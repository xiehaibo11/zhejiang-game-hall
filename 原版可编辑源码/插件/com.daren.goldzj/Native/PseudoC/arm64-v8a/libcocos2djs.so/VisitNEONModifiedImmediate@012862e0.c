
/* v8::internal::DisassemblingDecoder::VisitNEONModifiedImmediate(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONModifiedImmediate
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  NEONFormatMap *pNVar4;
  char *pcVar5;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)param_1;
  NEONFormatDecoder::NEONFormatDecoder(aNStack_a8,param_1,(NEONFormatMap *)&DAT_019f6810);
  if ((uVar1 >> 0xf & 1) == 0) {
    pcVar3 = "bic";
    pcVar5 = "mvni";
    if ((uVar1 >> 0x1d & 1) == 0) {
      pcVar3 = "orr";
      pcVar5 = "movi";
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      pcVar5 = pcVar3;
    }
    pNVar4 = (NEONFormatMap *)&DAT_019f6a20;
  }
  else {
    if ((uVar1 >> 0xe & 1) != 0) {
      if ((uVar1 >> 0xd & 1) == 0) {
        pcVar5 = "movi";
        if ((uVar1 >> 0x1d & 1) != 0) {
          pcVar5 = "mvni";
        }
        NEONFormatDecoder::SetFormatMap(aNStack_a8,0,(NEONFormatMap *)&DAT_019f6a20);
        pcVar3 = "\'Vt.%s, \'IVMIImm8, msl \'IVMIShiftAmt2";
      }
      else if ((uVar1 >> 0xc & 1) == 0) {
        if ((uVar1 >> 0x1d & 1) == 0) {
          pcVar3 = "\'Vt.%s, \'IVMIImm8";
          pcVar5 = "movi";
        }
        else {
          pcVar3 = "\'Dd, \'IVMIImm";
          if ((uVar1 >> 0x1e & 1) != 0) {
            pcVar3 = "\'Vt.2d, \'IVMIImm";
          }
          pcVar5 = "movi";
        }
      }
      else if ((uVar1 >> 0x1d & 1) == 0) {
        NEONFormatDecoder::SetFormatMap(aNStack_a8,0,(NEONFormatMap *)&DAT_019f6a20);
        pcVar3 = "\'Vt.%s, \'IVMIImmFPSingle";
        pcVar5 = "fmov";
      }
      else {
        pcVar3 = "\'Vt.2d, \'IVMIImmFPDouble";
        pcVar5 = "fmov";
        if ((uVar1 >> 0x1e & 1) == 0) {
          pcVar3 = "(NEONModifiedImmediate)";
          pcVar5 = "unallocated";
        }
      }
      goto LAB_012863bc;
    }
    pcVar3 = "bic";
    pcVar5 = "mvni";
    if ((uVar1 >> 0x1d & 1) == 0) {
      pcVar3 = "orr";
      pcVar5 = "movi";
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      pcVar5 = pcVar3;
    }
    pNVar4 = (NEONFormatMap *)&DAT_019f6918;
  }
  NEONFormatDecoder::SetFormatMap(aNStack_a8,0,pNVar4);
  pcVar3 = "\'Vt.%s, \'IVMIImm8, lsl \'IVMIShiftAmt1";
LAB_012863bc:
  pcVar3 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar3,1,1,1);
  Format(this,param_1,pcVar5,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

