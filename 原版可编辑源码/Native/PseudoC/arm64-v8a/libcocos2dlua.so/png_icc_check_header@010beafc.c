
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
            FUN_010be73c(param_1,0,param_3,uVar6,"intent outside defined range");
          }
          uVar6 = (param_5[9] & 0xff00ff00) >> 8 | (param_5[9] & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          if (uVar6 == 0x61637370) {
            iVar2 = memcmp(param_5 + 0x11,&DAT_01473414,0xc);
            if (iVar2 != 0) {
              lVar4 = png_safecat(auStack_12c,0xc4,0,"profile \'");
              uVar3 = png_safecat(auStack_12c,lVar4 + 0x4f,lVar4,param_3);
              uVar3 = png_safecat(auStack_12c,0xc4,uVar3,&DAT_01473311);
              uVar5 = png_format_number(auStack_144,auStack_12c,3,0);
              uVar3 = png_safecat(auStack_12c,0xc4,uVar3,uVar5);
                    /* try { // try from 010becfc to 011bed37 has its CatchHandler @ 010becfc
                       catch() { ... } // from try @ 010becfc with catch @ 010becfc
                       catch() { ... } // from try @ 010bedc4 with catch @ 010becfc */
              uVar3 = png_safecat(auStack_12c,0xc4,uVar3,"h: ");
              png_safecat(auStack_12c,0xc4,uVar3,"PCS illuminant is not D50");
              png_chunk_report(param_1,auStack_12c,1);
            }
                    /* try { // try from 010bed38 to 011bed63 has its CatchHandler @ 010bedd4 */
            uVar6 = (param_5[4] & 0xff00ff00) >> 8 | (param_5[4] & 0xff00ff) << 8;
            uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
            if (uVar6 == 0x47524159) {
              if ((param_6 >> 1 & 1) == 0) {
LAB_010bed84:
                uVar6 = (param_5[3] & 0xff00ff00) >> 8 | (param_5[3] & 0xff00ff) << 8;
                uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                if ((int)uVar6 < 0x6e6d636c) {
                  if (uVar6 == 0x61627374) {
                    pcVar7 = "invalid embedded Abstract ICC profile";
                    uVar6 = 0x61627374;
                  }
                  else {
                    if (uVar6 != 0x6c696e6b) {
                      if (uVar6 != 0x6d6e7472) goto LAB_010bee48;
                      goto LAB_010bee78;
                    }
                    pcVar7 = "unexpected DeviceLink ICC profile class";
                    uVar6 = 0x6c696e6b;
                  }
                }
                else {
                  if ((int)uVar6 < 0x73636e72) {
                    /* try { // try from 010bedb4 to 011bedc3 has its CatchHandler @ 010bede4 */
                    if (uVar6 == 0x6e6d636c) {
                      pcVar7 = "unexpected NamedColor ICC profile class";
                      uVar6 = 0x6e6d636c;
LAB_010bee68:
                      FUN_010be73c(param_1,0,param_3,uVar6,pcVar7);
                    }
                    else {
                    /* try { // try from 010bedc4 to 011bee3b has its CatchHandler @ 010becfc */
                      if (uVar6 != 0x70727472) goto LAB_010bee48;
                    }
                  }
                  else {
                    /* catch() { ... } // from try @ 010beeec with catch @ 010bee3c */
                    if ((uVar6 != 0x73636e72) && (uVar6 != 0x73706163)) {
LAB_010bee48:
                      pcVar7 = "unrecognized ICC profile class";
                      goto LAB_010bee68;
                    }
                  }
LAB_010bee78:
                  uVar3 = 1;
                  uVar6 = (param_5[5] & 0xff00ff00) >> 8 | (param_5[5] & 0xff00ff) << 8;
                  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                    /* try { // try from 010bee94 to 011beeeb has its CatchHandler @ 010bef4c */
                  if ((uVar6 == 0x4c616220) || (uVar6 == 0x58595a20)) goto LAB_010bebd0;
                  pcVar7 = "unexpected ICC PCS encoding";
                }
              }
              else {
                    /* catch() { ... } // from try @ 010bedb4 with catch @ 010bede4 */
                pcVar7 = "Gray color space not permitted on RGB PNG";
                uVar6 = 0x47524159;
              }
            }
            else if (uVar6 == 0x52474220) {
              if ((param_6 >> 1 & 1) != 0) goto LAB_010bed84;
              pcVar7 = "RGB color space not permitted on grayscale PNG";
              uVar6 = 0x52474220;
            }
            else {
                    /* catch() { ... } // from try @ 010bed38 with catch @ 010bedd4 */
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
                    /* try { // try from 010beb70 to 011bebdf has its CatchHandler @ 010beb70
                       catch() { ... } // from try @ 010beb70 with catch @ 010beb70
                       catch() { ... } // from try @ 010bebf0 with catch @ 010beb70 */
    }
  }
  else {
    pcVar7 = "length does not match profile";
  }
  FUN_010be73c(param_1,param_2,param_3,uVar6,pcVar7);
  uVar3 = 0;
LAB_010bebd0:
  if (*(long *)(lVar1 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
                    /* try { // try from 010bebe0 to 011bebef has its CatchHandler @ 010bebfc */
                    /* try { // try from 010bebf0 to 011bec57 has its CatchHandler @ 010beb70 */
                    /* catch() { ... } // from try @ 010bebe0 with catch @ 010bebfc */
  return;
}

