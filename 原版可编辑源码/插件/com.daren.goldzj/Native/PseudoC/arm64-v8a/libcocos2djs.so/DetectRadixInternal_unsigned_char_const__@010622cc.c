
/* void v8::internal::StringToIntHelper::DetectRadixInternal<unsigned char const*>(unsigned char
   const*, int) */

void __thiscall
v8::internal::StringToIntHelper::DetectRadixInternal<unsigned_char_const*>
          (StringToIntHelper *this,uchar *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  *(int *)(this + 0x28) = param_2;
  if (param_2 != 0) {
    pbVar1 = param_1 + param_2;
    pbVar8 = param_1;
    do {
      bVar2 = *pbVar8;
      if ((char)bVar2 < '\0') {
        uVar3 = unibrow::WhiteSpace::Is((uint)bVar2);
        if ((uVar3 & 1) == 0) goto LAB_0106232c;
      }
      else if (((byte)(&DAT_019d520f)[(uint)bVar2] >> 3 & 1) == 0) {
LAB_0106232c:
        if (*pbVar8 == 0x2d) {
          if (pbVar8 + 1 == pbVar1) goto LAB_0106249c;
          uVar5 = 0;
LAB_01062380:
          pbVar8 = pbVar8 + 1;
          *(undefined4 *)(this + 0x2c) = uVar5;
        }
        else if (*pbVar8 == 0x2b) {
          if (pbVar8 + 1 != pbVar1) {
            uVar5 = 1;
            goto LAB_01062380;
          }
          goto LAB_0106249c;
        }
        iVar4 = *(int *)(this + 0x20);
        if (iVar4 == 0x10) {
          if (*pbVar8 == 0x30) {
            if (pbVar8 + 1 == pbVar1) goto LAB_01062434;
            if ((pbVar8[1] | 0x20) != 0x78) {
              this[0x30] = (StringToIntHelper)0x1;
              iVar4 = 0x10;
              goto LAB_010624e0;
            }
            pbVar8 = pbVar8 + 2;
            if (pbVar8 == pbVar1) goto LAB_0106249c;
          }
          iVar4 = 0x10;
          goto LAB_01062418;
        }
        if (iVar4 != 0) goto LAB_01062418;
        iVar4 = 10;
        *(undefined4 *)(this + 0x20) = 10;
        if (*pbVar8 != 0x30) goto LAB_01062418;
        if (pbVar8 + 1 == pbVar1) goto LAB_01062434;
        bVar2 = pbVar8[1];
        if ((bVar2 | 0x20) != 0x78) {
          if (this[0x31] != (StringToIntHelper)0x0) {
            if (bVar2 < 0x62) {
              if (bVar2 == 0x42) {
LAB_01062500:
                pbVar8 = pbVar8 + 2;
                iVar4 = 2;
                uVar5 = 2;
                *(undefined4 *)(this + 0x20) = 2;
                if (pbVar8 != pbVar1) goto LAB_01062418;
                goto LAB_01062358;
              }
              if (bVar2 == 0x4f) {
LAB_010624f8:
                iVar4 = 8;
                goto LAB_010623c8;
              }
            }
            else {
              if (bVar2 == 0x62) goto LAB_01062500;
              if (bVar2 == 0x6f) goto LAB_010624f8;
            }
          }
          this[0x30] = (StringToIntHelper)0x1;
          iVar4 = 10;
LAB_010624e0:
          pbVar8 = pbVar8 + 1;
          goto LAB_01062418;
        }
        iVar4 = 0x10;
LAB_010623c8:
        pbVar8 = pbVar8 + 2;
        *(int *)(this + 0x20) = iVar4;
        if (pbVar8 == pbVar1) goto LAB_0106249c;
        goto LAB_01062418;
      }
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 != pbVar1);
  }
  uVar5 = 3;
  goto LAB_01062358;
  while( true ) {
    pbVar8 = pbVar8 + 1;
    this[0x30] = (StringToIntHelper)0x1;
    if (pbVar8 == pbVar1) break;
LAB_01062418:
    bVar2 = *pbVar8;
    uVar6 = (uint)bVar2;
    if (uVar6 != 0x30) {
      if ((((this[0x30] != (StringToIntHelper)0x0) ||
           ((uVar7 = (uint)bVar2, uVar6 - 0x30 < 10 &&
            (iVar4 + 0x30U != uVar7 && (int)uVar6 <= (int)(iVar4 + 0x30U))))) ||
          ((uVar6 = (uint)bVar2, 0x60 < uVar7 && ((10 < iVar4 && ((int)uVar6 < iVar4 + 0x57)))))) ||
         ((0x40 < uVar6 &&
          ((10 < iVar4 && (iVar4 + 0x37U != uVar7 && (int)uVar6 <= (int)(iVar4 + 0x37U))))))) {
        *(int *)(this + 0x24) = (int)pbVar8 - (int)param_1;
        return;
      }
LAB_0106249c:
      uVar5 = 2;
      goto LAB_01062358;
    }
  }
LAB_01062434:
  uVar5 = 4;
LAB_01062358:
  *(undefined4 *)(this + 0x34) = uVar5;
  return;
}

