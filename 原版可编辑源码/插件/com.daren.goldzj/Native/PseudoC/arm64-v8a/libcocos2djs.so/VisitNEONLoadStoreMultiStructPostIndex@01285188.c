
/* v8::internal::DisassemblingDecoder::VisitNEONLoadStoreMultiStructPostIndex(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONLoadStoreMultiStructPostIndex
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
  uVar1 = *(uint *)param_1 & 0xbfe0f000;
  if ((int)uVar1 < 0xcc00000) {
    if ((int)uVar1 < 0xc806000) {
      if (uVar1 == 0xc800000) {
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns], \'Xmr4";
        pcVar4 = "st4";
      }
      else {
        if (uVar1 == 0xc802000) {
          pcVar4 = "st1";
LAB_01285424:
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns], \'Xmr4";
          goto LAB_01285428;
        }
        if (uVar1 != 0xc804000) goto LAB_01285404;
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns], \'Xmr3";
        pcVar4 = "st3";
      }
      goto LAB_012853f0;
    }
    if ((int)uVar1 < 0xc808000) {
      if (uVar1 == 0xc806000) {
        pcVar4 = "st1";
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns], \'Xmr3";
        goto LAB_01285428;
      }
      if (uVar1 == 0xc807000) {
        pcVar4 = "st1";
        pcVar3 = "{\'Vt.%1$s}, [\'Xns], \'Xmr1";
        goto LAB_01285428;
      }
    }
    else {
      if (uVar1 == 0xc808000) {
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns], \'Xmr2";
        pcVar4 = "st2";
        goto LAB_012853f0;
      }
      if (uVar1 == 0xc80a000) {
        pcVar4 = "st1";
        pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns], \'Xmr2";
        goto LAB_01285428;
      }
    }
  }
  else {
    if (0xcc05fff < (int)uVar1) {
      if ((int)uVar1 < 0xcc08000) {
        if (uVar1 == 0xcc06000) {
          pcVar4 = "ld1";
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns], \'Xmr3";
          goto LAB_01285428;
        }
        if (uVar1 == 0xcc07000) {
          pcVar4 = "ld1";
          pcVar3 = "{\'Vt.%1$s}, [\'Xns], \'Xmr1";
          goto LAB_01285428;
        }
      }
      else {
        if (uVar1 == 0xcc08000) {
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns], \'Xmr2";
          pcVar4 = "ld2";
          goto LAB_012853f0;
        }
        if (uVar1 == 0xcc0a000) {
          pcVar4 = "ld1";
          pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s}, [\'Xns], \'Xmr2";
          goto LAB_01285428;
        }
      }
      goto LAB_01285404;
    }
    if (uVar1 == 0xcc00000) {
      pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns], \'Xmr4";
      pcVar4 = "ld4";
    }
    else {
      if (uVar1 == 0xcc02000) {
        pcVar4 = "ld1";
        goto LAB_01285424;
      }
      if (uVar1 != 0xcc04000) goto LAB_01285404;
      pcVar3 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s}, [\'Xns], \'Xmr3";
      pcVar4 = "ld3";
    }
LAB_012853f0:
    if ((*(uint *)param_1 & 0x40000c00) != 0xc00) goto LAB_01285428;
  }
LAB_01285404:
  pcVar4 = "unallocated";
  pcVar3 = "(NEONLoadStoreMultiStructPostIndex)";
LAB_01285428:
  pcVar3 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar3,1,1,1);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

