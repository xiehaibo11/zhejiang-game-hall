
/* v8::internal::DisassemblingDecoder::VisitNEON2RegMisc(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEON2RegMisc
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  NEONFormatMap *pNVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  NEONFormatDecoder aNStack_b8 [112];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder(aNStack_b8,param_1);
  uVar2 = *(uint *)param_1;
  if ((uVar2 & 0x1f000) < 0xb001) {
    uVar1 = uVar2 & 0xbf3ffc00;
    pcVar6 = "unimplemented";
    pcVar7 = "\'Vd.%s, \'Vn.%s";
    if ((int)uVar1 < 0xe20b800) {
      if ((int)uVar1 < 0xe205800) {
        if ((int)uVar1 < 0xe202800) {
          if (uVar1 == 0xe200800) {
            pcVar6 = "rev64";
          }
          else {
            if (uVar1 != 0xe201800) goto LAB_01283cd0;
            pcVar6 = "rev16";
          }
        }
        else if (uVar1 == 0xe202800) {
          NEONFormatDecoder::SetFormatMap(aNStack_b8,0,(NEONFormatMap *)&DAT_019f63f0);
          pcVar6 = "saddlp";
        }
        else if (uVar1 == 0xe203800) {
          pcVar6 = "suqadd";
        }
        else {
          if (uVar1 != 0xe204800) goto LAB_01283cd0;
          pcVar6 = "cls";
        }
      }
      else {
        pcVar6 = "unimplemented";
        if (0xe2087ff < (int)uVar1) {
          if (uVar1 == 0xe208800) {
            pcVar6 = "cmgt";
            pcVar7 = "\'Vd.%s, \'Vn.%s, #0";
          }
          else if (uVar1 == 0xe209800) {
            pcVar6 = "cmeq";
            pcVar7 = "\'Vd.%s, \'Vn.%s, #0";
          }
          else if (uVar1 == 0xe20a800) {
            pcVar6 = "cmlt";
            pcVar7 = "\'Vd.%s, \'Vn.%s, #0";
          }
          goto LAB_01283cd0;
        }
        if (uVar1 == 0xe205800) {
          pcVar6 = "cnt";
        }
        else if (uVar1 == 0xe206800) {
          NEONFormatDecoder::SetFormatMap(aNStack_b8,0,(NEONFormatMap *)&DAT_019f63f0);
          pcVar6 = "sadalp";
        }
        else {
          pcVar7 = "\'Vd.%s, \'Vn.%s";
          if (uVar1 != 0xe207800) goto LAB_01283cd0;
          pcVar6 = "sqabs";
        }
      }
      goto LAB_01283cc8;
    }
    if ((int)uVar1 < 0x2e205800) {
      if ((int)uVar1 < 0x2e202800) {
        if (uVar1 == 0xe20b800) {
          pcVar6 = "abs";
        }
        else {
          if (uVar1 != 0x2e200800) goto LAB_01283cd0;
          pcVar6 = "rev32";
        }
      }
      else if (uVar1 == 0x2e202800) {
        NEONFormatDecoder::SetFormatMap(aNStack_b8,0,(NEONFormatMap *)&DAT_019f63f0);
        pcVar6 = "uaddlp";
      }
      else if (uVar1 == 0x2e203800) {
        pcVar6 = "usqadd";
      }
      else {
        if (uVar1 != 0x2e204800) goto LAB_01283cd0;
        pcVar6 = "clz";
      }
      goto LAB_01283cc8;
    }
    if ((int)uVar1 < 0x2e208800) {
      if (uVar1 != 0x2e205800) {
        if (uVar1 == 0x2e206800) {
          NEONFormatDecoder::SetFormatMap(aNStack_b8,0,(NEONFormatMap *)&DAT_019f63f0);
          pcVar6 = "uadalp";
        }
        else {
          if (uVar1 != 0x2e207800) goto LAB_01283cd0;
          pcVar6 = "sqneg";
        }
        goto LAB_01283cc8;
      }
      uVar2 = uVar2 >> 0x16 & 3;
      if (uVar2 == 0) {
        pcVar6 = "mvn";
        pcVar7 = "\'Vd.%s, \'Vn.%s";
      }
      else if (uVar2 == 1) {
        pcVar6 = "rbit";
        pcVar7 = "\'Vd.%s, \'Vn.%s";
      }
      else {
        pcVar6 = "unimplemented";
        pcVar7 = "(NEON2RegMisc)";
      }
      NEONFormatDecoder::SetFormatMaps
                (aNStack_b8,(NEONFormatMap *)NEONFormatDecoder::LogicalFormatMap()::map,
                 (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
    }
    else if (uVar1 == 0x2e208800) {
      pcVar6 = "cmge";
      pcVar7 = "\'Vd.%s, \'Vn.%s, #0";
    }
    else if (uVar1 == 0x2e209800) {
      pcVar6 = "cmle";
      pcVar7 = "\'Vd.%s, \'Vn.%s, #0";
    }
    else if (uVar1 == 0x2e20b800) {
      pcVar6 = "neg";
      goto LAB_01283cc8;
    }
  }
  else {
    NEONFormatDecoder::SetFormatMaps
              (aNStack_b8,(NEONFormatMap *)NEONFormatDecoder::FPFormatMap()::map,
               (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
    uVar1 = *(uint *)param_1;
    uVar2 = uVar1 & 0xbfbffc00;
    if ((int)uVar2 < 0xea1d800) {
      if ((int)uVar2 < 0xea0c800) {
        if ((int)uVar2 < 0xe21a800) {
          if ((int)uVar2 < 0xe218800) {
            if (uVar2 == 0xe216800) {
              pcVar7 = "fcvtn2";
              pcVar6 = "fcvtn";
LAB_01283bcc:
              if ((uVar1 & 0x40000000) != 0) {
                pcVar6 = pcVar7;
              }
              NEONFormatDecoder::SetFormatMap(aNStack_b8,0,(NEONFormatMap *)&DAT_019f6600);
              pNVar4 = (NEONFormatMap *)&DAT_019f64f8;
            }
            else {
              if (uVar2 != 0xe217800) goto LAB_01283d24;
              pcVar6 = "fcvtl";
              if ((uVar1 & 0x40000000) != 0) {
                pcVar6 = "fcvtl2";
              }
              NEONFormatDecoder::SetFormatMap(aNStack_b8,0,(NEONFormatMap *)&DAT_019f64f8);
              pNVar4 = (NEONFormatMap *)&DAT_019f6600;
            }
            NEONFormatDecoder::SetFormatMap(aNStack_b8,1,pNVar4);
          }
          else if (uVar2 == 0xe218800) {
            pcVar6 = "frintn";
          }
          else {
            if (uVar2 != 0xe219800) goto LAB_01283d24;
            pcVar6 = "frintm";
          }
        }
        else if ((int)uVar2 < 0xe21c800) {
          if (uVar2 == 0xe21a800) {
            pcVar6 = "fcvtns";
          }
          else {
            if (uVar2 != 0xe21b800) goto LAB_01283d24;
            pcVar6 = "fcvtms";
          }
        }
        else if (uVar2 == 0xe21c800) {
          pcVar6 = "fcvtas";
        }
        else {
          if (uVar2 != 0xe21d800) goto LAB_01283d24;
          pcVar6 = "scvtf";
        }
      }
      else {
        if ((int)uVar2 < 0xea18800) {
          if ((int)uVar2 < 0xea0e800) {
            if (uVar2 == 0xea0c800) {
              pcVar6 = "fcmgt";
              pcVar7 = "\'Vd.%s, \'Vn.%s, #0.0";
            }
            else {
              if (uVar2 != 0xea0d800) goto LAB_01283d24;
              pcVar6 = "fcmeq";
              pcVar7 = "\'Vd.%s, \'Vn.%s, #0.0";
            }
          }
          else {
            if (uVar2 != 0xea0e800) {
              if (uVar2 != 0xea0f800) goto LAB_01283d24;
              pcVar6 = "fabs";
              goto LAB_01283cc8;
            }
            pcVar6 = "fcmlt";
            pcVar7 = "\'Vd.%s, \'Vn.%s, #0.0";
          }
          goto LAB_01283cd0;
        }
        if ((int)uVar2 < 0xea1a800) {
          if (uVar2 == 0xea18800) {
            pcVar6 = "frintp";
          }
          else {
            if (uVar2 != 0xea19800) goto LAB_01283d24;
            pcVar6 = "frintz";
          }
        }
        else if (uVar2 == 0xea1a800) {
          pcVar6 = "fcvtps";
        }
        else if (uVar2 == 0xea1b800) {
          pcVar6 = "fcvtzs";
        }
        else {
          if (uVar2 != 0xea1c800) goto LAB_01283d24;
          pcVar6 = "urecpe";
        }
      }
    }
    else if ((int)uVar2 < 0x2ea0c800) {
      if ((int)uVar2 < 0x2e21a800) {
        if ((int)uVar2 < 0x2e218800) {
          if (uVar2 != 0xea1d800) {
            if (uVar2 == 0x2e216800) {
              pcVar7 = "fcvtxn2";
              pcVar6 = "fcvtxn";
              goto LAB_01283bcc;
            }
LAB_01283d24:
            if ((uVar1 & 0x1f000) - 0x12000 < 0x2001) {
              NEONFormatDecoder::SetFormatMap
                        (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map);
              NEONFormatDecoder::SetFormatMap
                        (aNStack_b8,1,
                         (NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map);
              uVar2 = *(uint *)param_1 & 0xbf3ffc00;
              pcVar6 = "unimplemented";
              pcVar7 = "\'Vd.%s, \'Vn.%s";
              if ((int)uVar2 < 0x2e212800) {
                if (uVar2 == 0xe212800) {
                  pcVar6 = "xtn";
                  pcVar7 = "\'Vd.%s, \'Vn.%s";
                }
                else if (uVar2 == 0xe214800) {
                  pcVar6 = "sqxtn";
                  pcVar7 = "\'Vd.%s, \'Vn.%s";
                }
              }
              else if (uVar2 == 0x2e212800) {
                pcVar6 = "sqxtun";
                pcVar7 = "\'Vd.%s, \'Vn.%s";
              }
              else if (uVar2 == 0x2e213800) {
                NEONFormatDecoder::SetFormatMap
                          (aNStack_b8,0,
                           (NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map);
                NEONFormatDecoder::SetFormatMap
                          (aNStack_b8,1,(NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map)
                ;
                uVar5 = (ulong)(*(uint *)param_1 >> 0x16) & 3;
                if ((int)uVar5 == 3) {
                  pcVar6 = "unallocated";
                  pcVar7 = "(NEON2RegMisc)";
                  goto LAB_01283cf8;
                }
                pcVar7 = (&PTR_s__Vd__s___Vn__s___8_01cbe508)[uVar5];
                pcVar6 = "shll";
              }
              else {
                pcVar6 = "unimplemented";
                pcVar7 = "\'Vd.%s, \'Vn.%s";
                if (uVar2 == 0x2e214800) {
                  pcVar6 = "uqxtn";
                  pcVar7 = "\'Vd.%s, \'Vn.%s";
                }
              }
              pcVar6 = (char *)NEONFormatDecoder::Mnemonic(aNStack_b8,pcVar6);
              pcVar7 = (char *)NEONFormatDecoder::Substitute(aNStack_b8,pcVar7,1,1,1);
              goto LAB_01283cf8;
            }
            pcVar6 = "unimplemented";
            pcVar7 = "(NEON2RegMisc)";
            goto LAB_01283cd0;
          }
          pcVar6 = "frecpe";
        }
        else if (uVar2 == 0x2e218800) {
          pcVar6 = "frinta";
        }
        else {
          if (uVar2 != 0x2e219800) goto LAB_01283d24;
          pcVar6 = "frintx";
        }
      }
      else if ((int)uVar2 < 0x2e21c800) {
        if (uVar2 == 0x2e21a800) {
          pcVar6 = "fcvtnu";
        }
        else {
          if (uVar2 != 0x2e21b800) goto LAB_01283d24;
          pcVar6 = "fcvtmu";
        }
      }
      else if (uVar2 == 0x2e21c800) {
        pcVar6 = "fcvtau";
      }
      else {
        if (uVar2 != 0x2e21d800) goto LAB_01283d24;
        pcVar6 = "ucvtf";
      }
    }
    else if ((int)uVar2 < 0x2ea1a800) {
      if ((int)uVar2 < 0x2ea0f800) {
        if (uVar2 == 0x2ea0c800) {
          pcVar6 = "fcmge";
          pcVar7 = "\'Vd.%s, \'Vn.%s, #0.0";
        }
        else {
          if (uVar2 != 0x2ea0d800) goto LAB_01283d24;
          pcVar6 = "fcmle";
          pcVar7 = "\'Vd.%s, \'Vn.%s, #0.0";
        }
        goto LAB_01283cd0;
      }
      if (uVar2 == 0x2ea0f800) {
        pcVar6 = "fneg";
      }
      else {
        if (uVar2 != 0x2ea19800) goto LAB_01283d24;
        pcVar6 = "frinti";
      }
    }
    else if ((int)uVar2 < 0x2ea1c800) {
      if (uVar2 == 0x2ea1a800) {
        pcVar6 = "fcvtpu";
      }
      else {
        if (uVar2 != 0x2ea1b800) goto LAB_01283d24;
        pcVar6 = "fcvtzu";
      }
    }
    else if (uVar2 == 0x2ea1c800) {
      pcVar6 = "ursqrte";
    }
    else if (uVar2 == 0x2ea1d800) {
      pcVar6 = "frsqrte";
    }
    else {
      if (uVar2 != 0x2ea1f800) goto LAB_01283d24;
      pcVar6 = "fsqrt";
    }
LAB_01283cc8:
    pcVar7 = "\'Vd.%s, \'Vn.%s";
  }
LAB_01283cd0:
  pcVar7 = (char *)NEONFormatDecoder::Substitute(aNStack_b8,pcVar7,1,1,1);
LAB_01283cf8:
  Format(this,param_1,pcVar6,pcVar7);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

