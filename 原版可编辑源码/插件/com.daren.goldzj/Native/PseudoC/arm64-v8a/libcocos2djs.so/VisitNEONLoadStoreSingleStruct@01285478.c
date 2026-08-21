
/* v8::internal::DisassemblingDecoder::VisitNEONLoadStoreSingleStruct(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONLoadStoreSingleStruct
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_a8,param_1,(NEONFormatMap *)NEONFormatDecoder::LoadStoreFormatMap()::map);
  uVar2 = *(uint *)param_1;
  uVar1 = uVar2 & 0xbfffe000;
  pcVar5 = (char *)0x0;
  pcVar9 = "ld1";
  if (0xd403fff < (int)uVar1) {
    if (0xd601fff < (int)uVar1) {
      if ((int)uVar1 < 0xd608000) {
        if (uVar1 == 0xd602000) goto LAB_012858e4;
        if (uVar1 != 0xd604000) {
          uVar6 = 0xd606000;
          goto LAB_01285758;
        }
LAB_01285908:
        pcVar9 = "st2";
        if ((uVar2 & 0x400000) != 0) {
          pcVar9 = "ld2";
        }
        pcVar5 = "{\'Vt.h, \'Vt2.h}[\'IVLSLane1], [\'Xns]";
      }
      else if ((int)uVar1 < 0xd60c000) {
        if (uVar1 != 0xd608000) {
          uVar6 = 0xd60a000;
          goto LAB_01285630;
        }
LAB_01285864:
        pcVar7 = "ld2";
        pcVar9 = "st2";
        bVar4 = (uVar2 & 0x400000) == 0;
        pcVar8 = "{\'Vt.d, \'Vt2.d}[\'IVLSLane3], [\'Xns]";
        pcVar5 = "{\'Vt.s, \'Vt2.s}[\'IVLSLane2], [\'Xns]";
LAB_012858b0:
        if (!bVar4) {
          pcVar9 = pcVar7;
        }
        if ((uVar2 & 0x400) != 0) {
          pcVar5 = pcVar8;
        }
      }
      else {
        if (uVar1 == 0xd60c000) {
          pcVar5 = "{\'Vt.%s, \'Vt2.%s}, [\'Xns]";
          pcVar9 = "ld2r";
          goto joined_r0x01285af8;
        }
        pcVar9 = (char *)0x0;
        if (uVar1 == 0xd60e000) {
          pcVar5 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns]";
          pcVar9 = "ld4r";
          uVar1 = uVar2 >> 0xc & 1;
          goto joined_r0x01285b98;
        }
      }
      goto LAB_01285928;
    }
    if ((int)uVar1 < 0xd40a000) {
      if (uVar1 != 0xd404000) {
        if (uVar1 == 0xd406000) goto LAB_012858c0;
        pcVar9 = (char *)0x0;
        if (uVar1 == 0xd408000) {
          pcVar5 = "{\'Vt.s}[\'IVLSLane2], [\'Xns]";
          if ((uVar2 & 0x400) != 0) {
            pcVar5 = "{\'Vt.d}[\'IVLSLane3], [\'Xns]";
          }
          pcVar9 = "ld1";
          goto LAB_01285ad0;
        }
        goto LAB_01285928;
      }
      pcVar5 = "{\'Vt.h}[\'IVLSLane1], [\'Xns]";
      goto joined_r0x01285b98;
    }
    if ((int)uVar1 < 0xd40e000) {
      if (uVar1 == 0xd40a000) goto LAB_0128588c;
      pcVar9 = (char *)0x0;
      if (uVar1 == 0xd40c000) {
        pcVar5 = "{\'Vt.%s}, [\'Xns]";
        pcVar9 = "ld1r";
        uVar2 = uVar2 >> 0xc;
        goto joined_r0x012855b8;
      }
      goto LAB_01285928;
    }
    if (uVar1 != 0xd40e000) {
      uVar6 = 0xd600000;
      goto LAB_012857b4;
    }
    pcVar5 = "{\'Vt.%s, \'Vt2.%s, \'Vt3.%s}, [\'Xns]";
    pcVar9 = "ld3r";
    goto joined_r0x01285af8;
  }
  if (0xd201fff < (int)uVar1) {
    if ((int)uVar1 < 0xd208000) {
      if (uVar1 == 0xd202000) {
LAB_012858e4:
        pcVar9 = "st4";
        if ((uVar2 & 0x400000) != 0) {
          pcVar9 = "ld4";
        }
        pcVar5 = "{\'Vt.b, \'Vt2.b, \'Vt3.b, \'Vt4.b}[\'IVLSLane0], [\'Xns]";
      }
      else {
        if (uVar1 == 0xd204000) goto LAB_01285908;
        uVar6 = 0xd206000;
LAB_01285758:
        pcVar9 = (char *)0x0;
        if (uVar1 == uVar6) {
          pcVar9 = "st4";
          if ((uVar2 & 0x400000) != 0) {
            pcVar9 = "ld4";
          }
          pcVar5 = "{\'Vt.h, \'Vt2.h, \'Vt3.h, \'Vt4.h}[\'IVLSLane1], [\'Xns]";
        }
      }
    }
    else if ((int)uVar1 < 0xd400000) {
      if (uVar1 == 0xd208000) goto LAB_01285864;
      uVar6 = 0xd20a000;
LAB_01285630:
      pcVar9 = (char *)0x0;
      if (uVar1 == uVar6) {
        pcVar7 = "ld4";
        pcVar9 = "st4";
        bVar4 = (uVar2 & 0x400000) == 0;
        pcVar8 = "{\'Vt.d, \'Vt2.d, \'Vt3.d, \'Vt4.d}[\'IVLSLane3], [\'Xns]";
        pcVar5 = "{\'Vt.s, \'Vt2.s, \'Vt3.s, \'Vt4.s}[\'IVLSLane2], [\'Xns]";
        goto LAB_012858b0;
      }
    }
    else {
      if (uVar1 == 0xd400000) {
        pcVar5 = "{\'Vt.b}[\'IVLSLane0], [\'Xns]";
        goto LAB_01285b30;
      }
      pcVar9 = (char *)0x0;
      if (uVar1 != 0xd402000) goto LAB_01285928;
LAB_01285804:
      pcVar9 = "st3";
      if ((uVar2 & 0x400000) != 0) {
        pcVar9 = "ld3";
      }
      pcVar5 = "{\'Vt.b, \'Vt2.b, \'Vt3.b}[\'IVLSLane0], [\'Xns]";
    }
    goto LAB_01285928;
  }
  if ((int)uVar1 < 0xd006000) {
    if (uVar1 == 0xd000000) {
      pcVar9 = "st1";
      pcVar5 = "{\'Vt.b}[\'IVLSLane0], [\'Xns]";
      goto LAB_01285b30;
    }
    if (uVar1 == 0xd002000) goto LAB_01285804;
    pcVar9 = (char *)0x0;
    if (uVar1 != 0xd004000) goto LAB_01285928;
    pcVar5 = "{\'Vt.h}[\'IVLSLane1], [\'Xns]";
    pcVar9 = "st1";
    uVar2 = uVar2 >> 10;
joined_r0x012855b8:
    uVar1 = uVar2 & 1;
joined_r0x01285b98:
    if (uVar1 == 0) goto LAB_01285b30;
  }
  else if ((int)uVar1 < 0xd00a000) {
    if (uVar1 == 0xd006000) {
LAB_012858c0:
      pcVar9 = "st3";
      if ((uVar2 & 0x400000) != 0) {
        pcVar9 = "ld3";
      }
      pcVar5 = "{\'Vt.h, \'Vt2.h, \'Vt3.h}[\'IVLSLane1], [\'Xns]";
      goto LAB_01285928;
    }
    pcVar9 = (char *)0x0;
    if (uVar1 != 0xd008000) goto LAB_01285928;
    pcVar5 = "{\'Vt.s}[\'IVLSLane2], [\'Xns]";
    if ((uVar2 & 0x400) != 0) {
      pcVar5 = "{\'Vt.d}[\'IVLSLane3], [\'Xns]";
    }
    pcVar9 = "st1";
LAB_01285ad0:
    uVar1 = uVar2 >> 10 & 3;
    if (uVar1 < 2) {
      if ((uVar2 >> 0xc & 1) == 0) goto LAB_01285b30;
      goto joined_r0x01285b98;
    }
  }
  else {
    if (uVar1 == 0xd00a000) {
LAB_0128588c:
      pcVar7 = "ld3";
      pcVar9 = "st3";
      bVar4 = (uVar2 & 0x400000) == 0;
      pcVar8 = "{\'Vt.d, \'Vt2.d, \'Vt3.d}[\'IVLSLane3], [\'Xns]";
      pcVar5 = "{\'Vt.s, \'Vt2.s, \'Vt3.s}[\'IVLSLane2], [\'Xns]";
      goto LAB_012858b0;
    }
    uVar6 = 0xd200000;
LAB_012857b4:
    pcVar9 = (char *)0x0;
    if (uVar1 == uVar6) {
      pcVar9 = "st2";
      if ((uVar2 & 0x400000) != 0) {
        pcVar9 = "ld2";
      }
      pcVar5 = "{\'Vt.b, \'Vt2.b}[\'IVLSLane0], [\'Xns]";
    }
LAB_01285928:
    if ((int)uVar1 < 0xd408000) {
      if (0xd205fff < (int)uVar1) {
        if ((int)uVar1 < 0xd20a000) {
          if (uVar1 != 0xd206000) {
            uVar6 = 0xd208000;
            goto LAB_01285ac8;
          }
        }
        else {
          if (uVar1 == 0xd20a000) goto LAB_01285ad0;
          if (uVar1 != 0xd404000) {
            uVar6 = 0xd406000;
            goto LAB_01285a68;
          }
        }
joined_r0x01285b98:
        uVar2 = uVar2 >> 10;
joined_r0x01285b98:
        uVar1 = uVar2 & 1;
        goto joined_r0x01285b98;
      }
      if ((int)uVar1 < 0xd008000) {
        if (uVar1 == 0xd004000) goto joined_r0x01285b98;
        uVar6 = 0xd006000;
      }
      else {
        if ((uVar1 == 0xd008000) || (uVar1 == 0xd00a000)) goto LAB_01285ad0;
        uVar6 = 0xd204000;
      }
LAB_01285a68:
      if (uVar1 == uVar6) goto joined_r0x01285b98;
    }
    else {
      if ((int)uVar1 < 0xd606000) {
        if (0xd40bfff < (int)uVar1) {
          if ((uVar1 != 0xd40c000) && (uVar1 != 0xd40e000)) {
            uVar6 = 0xd604000;
            goto LAB_01285a68;
          }
joined_r0x01285af8:
          uVar2 = uVar2 >> 0xc;
          goto joined_r0x01285b98;
        }
        if (uVar1 == 0xd408000) goto LAB_01285ad0;
        uVar6 = 0xd40a000;
      }
      else {
        if (0xd609fff < (int)uVar1) {
          if (uVar1 == 0xd60a000) goto LAB_01285ad0;
          if ((uVar1 == 0xd60c000) || (uVar1 == 0xd60e000)) goto joined_r0x01285af8;
          goto LAB_01285ba0;
        }
        if (uVar1 == 0xd606000) goto joined_r0x01285b98;
        uVar6 = 0xd608000;
      }
LAB_01285ac8:
      if (uVar1 == uVar6) goto LAB_01285ad0;
    }
LAB_01285ba0:
    if (pcVar9 != (char *)0x0) goto LAB_01285b30;
  }
  pcVar9 = "unallocated";
  pcVar5 = "(NEONLoadStoreSingleStruct)";
LAB_01285b30:
  pcVar5 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar5,1,1,1);
  Format(this,param_1,pcVar9,pcVar5);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

