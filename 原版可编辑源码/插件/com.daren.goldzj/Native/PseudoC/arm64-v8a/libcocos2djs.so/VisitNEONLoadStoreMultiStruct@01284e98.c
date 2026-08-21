
/* v8::internal::DisassemblingDecoder::VisitNEONLoadStoreMultiStruct(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONLoadStoreMultiStruct
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_a8,param_1,(NEONFormatMap *)NEONFormatDecoder::LoadStoreFormatMap()::map);
  uVar1 = *(uint *)param_1 & 0xbffff000;
  if ((int)uVar1 < 0xc400000) {
    if ((int)uVar1 < 0xc006000) {
      if (uVar1 == 0xc000000) {
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns]";
        pcVar4 = "st4";
      }
      else {
        if (uVar1 == 0xc002000) {
          pcVar4 = "st1";
LAB_01285134:
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns]";
          goto LAB_01285138;
        }
        if (uVar1 != 0xc004000) goto LAB_01285114;
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns]";
        pcVar4 = "st3";
      }
      goto LAB_01285100;
    }
    if ((int)uVar1 < 0xc008000) {
      if (uVar1 == 0xc006000) {
        pcVar4 = "st1";
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns]";
        goto LAB_01285138;
      }
      if (uVar1 == 0xc007000) {
        pcVar4 = "st1";
        pcVar3 = "{\'Vt.%1$s}, [\'Xns]";
        goto LAB_01285138;
      }
    }
    else {
      if (uVar1 == 0xc008000) {
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns]";
        pcVar4 = "st2";
        goto LAB_01285100;
      }
      if (uVar1 == 0xc00a000) {
        pcVar4 = "st1";
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns]";
        goto LAB_01285138;
      }
    }
  }
  else {
    if (0xc405fff < (int)uVar1) {
      if ((int)uVar1 < 0xc408000) {
        if (uVar1 == 0xc406000) {
          pcVar4 = "ld1";
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns]";
          goto LAB_01285138;
        }
        if (uVar1 == 0xc407000) {
          pcVar4 = "ld1";
          pcVar3 = "{\'Vt.%1$s}, [\'Xns]";
          goto LAB_01285138;
        }
      }
      else {
        if (uVar1 == 0xc408000) {
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns]";
          pcVar4 = "ld2";
          goto LAB_01285100;
        }
        if (uVar1 == 0xc40a000) {
          pcVar4 = "ld1";
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns]";
          goto LAB_01285138;
        }
      }
      goto LAB_01285114;
    }
    if (uVar1 == 0xc400000) {
      pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns]";
      pcVar4 = "ld4";
    }
    else {
      if (uVar1 == 0xc402000) {
        pcVar4 = "ld1";
        goto LAB_01285134;
      }
      if (uVar1 != 0xc404000) goto LAB_01285114;
      pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns]";
      pcVar4 = "ld3";
    }
LAB_01285100:
    if ((*(uint *)param_1 & 0x40000c00) != 0xc00) goto LAB_01285138;
  }
LAB_01285114:
  pcVar4 = "unallocated";
  pcVar3 = "(NEONLoadStoreMultiStruct)";
LAB_01285138:
  pcVar3 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar3,1,1,1);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

