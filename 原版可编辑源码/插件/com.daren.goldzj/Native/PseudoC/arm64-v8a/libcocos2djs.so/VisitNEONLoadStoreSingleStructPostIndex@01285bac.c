
/* v8::internal::DisassemblingDecoder::VisitNEONLoadStoreSingleStructPostIndex(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONLoadStoreSingleStructPostIndex
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
  uVar1 = uVar2 & 0xbfe0e000;
  pcVar5 = (char *)0x0;
  pcVar9 = "ld1";
  if (0xdc03fff < (int)uVar1) {
    if (0xde01fff < (int)uVar1) {
      if ((int)uVar1 < 0xde08000) {
        if (uVar1 == 0xde02000) goto LAB_01286018;
        if (uVar1 != 0xde04000) {
          uVar6 = 0xde06000;
          goto LAB_01285e8c;
        }
LAB_0128603c:
        pcVar9 = "st2";
        if ((uVar2 & 0x400000) != 0) {
          pcVar9 = "ld2";
        }
        pcVar5 = "{\'Vt.h, \'Vt2.h}[\'IVLSLane1], [\'Xns], \'Xmb4";
      }
      else if ((int)uVar1 < 0xde0c000) {
        if (uVar1 != 0xde08000) {
          uVar6 = 0xde0a000;
          goto LAB_01285d64;
        }
LAB_01285f98:
        pcVar7 = "ld2";
        pcVar9 = "st2";
        bVar4 = (uVar2 & 0x400000) == 0;
        pcVar8 = "{\'Vt.d, \'Vt2.d}[\'IVLSLane3], [\'Xns], \'Xmb16";
        pcVar5 = "{\'Vt.s, \'Vt2.s}[\'IVLSLane2], [\'Xns], \'Xmb8";
LAB_01285fe4:
        if (!bVar4) {
          pcVar9 = pcVar7;
        }
        if ((uVar2 & 0x400) != 0) {
          pcVar5 = pcVar8;
        }
      }
      else {
        if (uVar1 == 0xde0c000) {
          pcVar5 = "{\'Vt.%s, \'Vt2.%s}, [\'Xns], \'Xmz2";
          pcVar9 = "ld2r";
          goto joined_r0x0128622c;
        }
        pcVar9 = (char *)0x0;
        if (uVar1 == 0xde0e000) {
          pcVar5 = "{\'Vt.%1$s, \'Vt2.%1$s, \'Vt3.%1$s, \'Vt4.%1$s}, [\'Xns], \'Xmz4";
          pcVar9 = "ld4r";
          uVar1 = uVar2 >> 0xc & 1;
          goto joined_r0x012862cc;
        }
      }
      goto LAB_0128605c;
    }
    if ((int)uVar1 < 0xdc0a000) {
      if (uVar1 != 0xdc04000) {
        if (uVar1 == 0xdc06000) goto LAB_01285ff4;
        pcVar9 = (char *)0x0;
        if (uVar1 == 0xdc08000) {
          pcVar5 = "{\'Vt.s}[\'IVLSLane2], [\'Xns], \'Xmb4";
          if ((uVar2 & 0x400) != 0) {
            pcVar5 = "{\'Vt.d}[\'IVLSLane3], [\'Xns], \'Xmb8";
          }
          pcVar9 = "ld1";
          goto LAB_01286204;
        }
        goto LAB_0128605c;
      }
      pcVar5 = "{\'Vt.h}[\'IVLSLane1], [\'Xns], \'Xmb2";
      goto joined_r0x012862cc;
    }
    if ((int)uVar1 < 0xdc0e000) {
      if (uVar1 == 0xdc0a000) goto LAB_01285fc0;
      pcVar9 = (char *)0x0;
      if (uVar1 == 0xdc0c000) {
        pcVar5 = "{\'Vt.%s}, [\'Xns], \'Xmz1";
        pcVar9 = "ld1r";
        uVar2 = uVar2 >> 0xc;
        goto joined_r0x01285cec;
      }
      goto LAB_0128605c;
    }
    if (uVar1 != 0xdc0e000) {
      uVar6 = 0xde00000;
      goto LAB_01285ee8;
    }
    pcVar5 = "{\'Vt.%s, \'Vt2.%s, \'Vt3.%s}, [\'Xns], \'Xmz3";
    pcVar9 = "ld3r";
    goto joined_r0x0128622c;
  }
  if (0xda01fff < (int)uVar1) {
    if ((int)uVar1 < 0xda08000) {
      if (uVar1 == 0xda02000) {
LAB_01286018:
        pcVar9 = "st4";
        if ((uVar2 & 0x400000) != 0) {
          pcVar9 = "ld4";
        }
        pcVar5 = "{\'Vt.b, \'Vt2.b, \'Vt3.b, \'Vt4.b}[\'IVLSLane0], [\'Xns], \'Xmb4";
      }
      else {
        if (uVar1 == 0xda04000) goto LAB_0128603c;
        uVar6 = 0xda06000;
LAB_01285e8c:
        pcVar9 = (char *)0x0;
        if (uVar1 == uVar6) {
          pcVar9 = "st4";
          if ((uVar2 & 0x400000) != 0) {
            pcVar9 = "ld4";
          }
          pcVar5 = "{\'Vt.h, \'Vt2.h, \'Vt3.h, \'Vt4.h}[\'IVLSLane1], [\'Xns], \'Xmb8";
        }
      }
    }
    else if ((int)uVar1 < 0xdc00000) {
      if (uVar1 == 0xda08000) goto LAB_01285f98;
      uVar6 = 0xda0a000;
LAB_01285d64:
      pcVar9 = (char *)0x0;
      if (uVar1 == uVar6) {
        pcVar7 = "ld4";
        pcVar9 = "st4";
        bVar4 = (uVar2 & 0x400000) == 0;
        pcVar8 = "{\'Vt.d, \'Vt2.d, \'Vt3.d, \'Vt4.d}[\'IVLSLane3], [\'Xns], \'Xmb32";
        pcVar5 = "{\'Vt.s, \'Vt2.s, \'Vt3.s, \'Vt4.s}[\'IVLSLane2], [\'Xns], \'Xmb16";
        goto LAB_01285fe4;
      }
    }
    else {
      if (uVar1 == 0xdc00000) {
        pcVar5 = "{\'Vt.b}[\'IVLSLane0], [\'Xns], \'Xmb1";
        goto LAB_01286264;
      }
      pcVar9 = (char *)0x0;
      if (uVar1 != 0xdc02000) goto LAB_0128605c;
LAB_01285f38:
      pcVar9 = "st3";
      if ((uVar2 & 0x400000) != 0) {
        pcVar9 = "ld3";
      }
      pcVar5 = "{\'Vt.b, \'Vt2.b, \'Vt3.b}[\'IVLSLane0], [\'Xns], \'Xmb3";
    }
    goto LAB_0128605c;
  }
  if ((int)uVar1 < 0xd806000) {
    if (uVar1 == 0xd800000) {
      pcVar9 = "st1";
      pcVar5 = "{\'Vt.b}[\'IVLSLane0], [\'Xns], \'Xmb1";
      goto LAB_01286264;
    }
    if (uVar1 == 0xd802000) goto LAB_01285f38;
    pcVar9 = (char *)0x0;
    if (uVar1 != 0xd804000) goto LAB_0128605c;
    pcVar5 = "{\'Vt.h}[\'IVLSLane1], [\'Xns], \'Xmb2";
    pcVar9 = "st1";
    uVar2 = uVar2 >> 10;
joined_r0x01285cec:
    uVar1 = uVar2 & 1;
joined_r0x012862cc:
    if (uVar1 == 0) goto LAB_01286264;
  }
  else if ((int)uVar1 < 0xd80a000) {
    if (uVar1 == 0xd806000) {
LAB_01285ff4:
      pcVar9 = "st3";
      if ((uVar2 & 0x400000) != 0) {
        pcVar9 = "ld3";
      }
      pcVar5 = "{\'Vt.h, \'Vt2.h, \'Vt3.h}[\'IVLSLane1], [\'Xns], \'Xmb6";
      goto LAB_0128605c;
    }
    pcVar9 = (char *)0x0;
    if (uVar1 != 0xd808000) goto LAB_0128605c;
    pcVar5 = "{\'Vt.s}[\'IVLSLane2], [\'Xns], \'Xmb4";
    if ((uVar2 & 0x400) != 0) {
      pcVar5 = "{\'Vt.d}[\'IVLSLane3], [\'Xns], \'Xmb8";
    }
    pcVar9 = "st1";
LAB_01286204:
    uVar1 = uVar2 >> 10 & 3;
    if (uVar1 < 2) {
      if ((uVar2 >> 0xc & 1) == 0) goto LAB_01286264;
      goto joined_r0x012862cc;
    }
  }
  else {
    if (uVar1 == 0xd80a000) {
LAB_01285fc0:
      pcVar7 = "ld3";
      pcVar9 = "st3";
      bVar4 = (uVar2 & 0x400000) == 0;
      pcVar8 = "{\'Vt.d, \'Vt2.d, \'Vt3.d}[\'IVLSLane3], [\'Xns], \'Xmb24";
      pcVar5 = "{\'Vt.s, \'Vt2.s, \'Vt3.s}[\'IVLSLane2], [\'Xns], \'Xmb12";
      goto LAB_01285fe4;
    }
    uVar6 = 0xda00000;
LAB_01285ee8:
    pcVar9 = (char *)0x0;
    if (uVar1 == uVar6) {
      pcVar9 = "st2";
      if ((uVar2 & 0x400000) != 0) {
        pcVar9 = "ld2";
      }
      pcVar5 = "{\'Vt.b, \'Vt2.b}[\'IVLSLane0], [\'Xns], \'Xmb2";
    }
LAB_0128605c:
    if ((int)uVar1 < 0xdc08000) {
      if (0xda05fff < (int)uVar1) {
        if ((int)uVar1 < 0xda0a000) {
          if (uVar1 != 0xda06000) {
            uVar6 = 0xda08000;
            goto LAB_012861fc;
          }
        }
        else {
          if (uVar1 == 0xda0a000) goto LAB_01286204;
          if (uVar1 != 0xdc04000) {
            uVar6 = 0xdc06000;
            goto LAB_0128619c;
          }
        }
joined_r0x012862cc:
        uVar2 = uVar2 >> 10;
joined_r0x012862cc:
        uVar1 = uVar2 & 1;
        goto joined_r0x012862cc;
      }
      if ((int)uVar1 < 0xd808000) {
        if (uVar1 == 0xd804000) goto joined_r0x012862cc;
        uVar6 = 0xd806000;
      }
      else {
        if ((uVar1 == 0xd808000) || (uVar1 == 0xd80a000)) goto LAB_01286204;
        uVar6 = 0xda04000;
      }
LAB_0128619c:
      if (uVar1 == uVar6) goto joined_r0x012862cc;
    }
    else {
      if ((int)uVar1 < 0xde06000) {
        if (0xdc0bfff < (int)uVar1) {
          if ((uVar1 != 0xdc0c000) && (uVar1 != 0xdc0e000)) {
            uVar6 = 0xde04000;
            goto LAB_0128619c;
          }
joined_r0x0128622c:
          uVar2 = uVar2 >> 0xc;
          goto joined_r0x012862cc;
        }
        if (uVar1 == 0xdc08000) goto LAB_01286204;
        uVar6 = 0xdc0a000;
      }
      else {
        if (0xde09fff < (int)uVar1) {
          if (uVar1 == 0xde0a000) goto LAB_01286204;
          if ((uVar1 == 0xde0c000) || (uVar1 == 0xde0e000)) goto joined_r0x0128622c;
          goto LAB_012862d4;
        }
        if (uVar1 == 0xde06000) goto joined_r0x012862cc;
        uVar6 = 0xde08000;
      }
LAB_012861fc:
      if (uVar1 == uVar6) goto LAB_01286204;
    }
LAB_012862d4:
    if (pcVar9 != (char *)0x0) goto LAB_01286264;
  }
  pcVar9 = "unallocated";
  pcVar5 = "(NEONLoadStoreSingleStructPostIndex)";
LAB_01286264:
  pcVar5 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar5,1,1,1);
  Format(this,param_1,pcVar9,pcVar5);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

