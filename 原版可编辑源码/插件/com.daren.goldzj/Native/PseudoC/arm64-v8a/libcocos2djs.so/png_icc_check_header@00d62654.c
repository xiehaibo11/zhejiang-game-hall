
void png_icc_check_header
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint *param_5,
               uint param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  undefined1 auStack_144 [24];
  undefined1 auStack_12c [204];
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  uVar6 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if (uVar6 == param_4) {
    if (((param_4 & 3) == 0) || ((byte)param_5[2] < 4)) {
      uVar6 = (param_5[0x20] & 0xff00ff00) >> 8 | (param_5[0x20] & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if ((uVar6 < 0x1555554b) && (uVar6 * 0xc + 0x84 <= param_4)) {
        uVar6 = (param_5[0x10] & 0xff00ff00) >> 8 | (param_5[0x10] & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        if (uVar6 < 0xffff) {
          if (3 < uVar6) {
            FUN_00d62294(param_1,0,param_3,uVar6,"intent outside defined range");
          }
          uVar6 = (param_5[9] & 0xff00ff00) >> 8 | (param_5[9] & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          if (uVar6 == 0x61637370) {
            iVar2 = memcmp(param_5 + 0x11,&DAT_0194a834,0xc);
            if (iVar2 != 0) {
              lVar4 = png_safecat(auStack_12c,0xc4,0,"profile \'");
              uVar3 = png_safecat(auStack_12c,lVar4 + 0x4f,lVar4,param_3);
              uVar3 = png_safecat(auStack_12c,0xc4,uVar3,&DAT_0194a730);
              uVar5 = png_format_number(auStack_144,auStack_12c,3,0);
              uVar3 = png_safecat(auStack_12c,0xc4,uVar3,uVar5);
              uVar3 = png_safecat(auStack_12c,0xc4,uVar3,"h: ");
              png_safecat(auStack_12c,0xc4,uVar3,"PCS illuminant is not D50");
              png_chunk_report(param_1,auStack_12c,1);
            }
            uVar6 = (param_5[4] & 0xff00ff00) >> 8 | (param_5[4] & 0xff00ff) << 8;
            uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
            if (uVar6 == 0x47524159) {
              if ((param_6 >> 1 & 1) == 0) {
LAB_00d628dc:
                uVar6 = (param_5[3] & 0xff00ff00) >> 8 | (param_5[3] & 0xff00ff) << 8;
                uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                if ((int)uVar6 < 0x6e6d636c) {
                  if (uVar6 == 0x61627374) {
                    pcVar7 = "invalid embedded Abstract ICC profile";
                    uVar6 = 0x61627374;
                  }
                  else {
                    if (uVar6 != 0x6c696e6b) {
                      if (uVar6 != 0x6d6e7472) goto LAB_00d629a0;
                      goto LAB_00d629d0;
                    }
                    pcVar7 = "unexpected DeviceLink ICC profile class";
                    uVar6 = 0x6c696e6b;
                  }
                }
                else {
                  if ((int)uVar6 < 0x73636e72) {
                    if (uVar6 == 0x6e6d636c) {
                      pcVar7 = "unexpected NamedColor ICC profile class";
                      uVar6 = 0x6e6d636c;
LAB_00d629c0:
                      FUN_00d62294(param_1,0,param_3,uVar6,pcVar7);
                    }
                    else if (uVar6 != 0x70727472) goto LAB_00d629a0;
                  }
                  else if ((uVar6 != 0x73636e72) && (uVar6 != 0x73706163)) {
LAB_00d629a0:
                    pcVar7 = "unrecognized ICC profile class";
                    goto LAB_00d629c0;
                  }
LAB_00d629d0:
                  uVar3 = 1;
                  uVar6 = (param_5[5] & 0xff00ff00) >> 8 | (param_5[5] & 0xff00ff) << 8;
                  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                  if ((uVar6 == 0x4c616220) || (uVar6 == 0x58595a20)) goto LAB_00d62728;
                  pcVar7 = "unexpected ICC PCS encoding";
                }
              }
              else {
                pcVar7 = "Gray color space not permitted on RGB PNG";
                uVar6 = 0x47524159;
              }
            }
            else if (uVar6 == 0x52474220) {
              if ((param_6 >> 1 & 1) != 0) goto LAB_00d628dc;
              pcVar7 = "RGB color space not permitted on grayscale PNG";
              uVar6 = 0x52474220;
            }
            else {
              pcVar7 = "invalid ICC profile color space";
            }
          }
          else {
            pcVar7 = "invalid signature";
          }
        }
        else {
          pcVar7 = "invalid rendering intent";
        }
      }
      else {
        pcVar7 = "tag count too large";
      }
    }
    else {
      pcVar7 = "invalid length";
      uVar6 = param_4;
    }
  }
  else {
    pcVar7 = "length does not match profile";
  }
  FUN_00d62294(param_1,param_2,param_3,uVar6,pcVar7);
  uVar3 = 0;
LAB_00d62728:
  if (*(long *)(lVar1 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

