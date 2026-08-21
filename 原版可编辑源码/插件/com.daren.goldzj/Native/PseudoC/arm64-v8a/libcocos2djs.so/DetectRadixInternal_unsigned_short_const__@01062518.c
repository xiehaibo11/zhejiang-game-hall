
/* void v8::internal::StringToIntHelper::DetectRadixInternal<unsigned short const*>(unsigned short
   const*, int) */

void __thiscall
v8::internal::StringToIntHelper::DetectRadixInternal<unsigned_short_const*>
          (StringToIntHelper *this,ushort *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  
  *(int *)(this + 0x28) = param_2;
  if (param_2 != 0) {
    puVar1 = param_1 + param_2;
    puVar8 = param_1;
    do {
      uVar2 = *puVar8;
      if (uVar2 < 0x80) {
        if (((byte)(&DAT_019d520f)[uVar2] >> 3 & 1) == 0) goto LAB_01062590;
      }
      else {
        uVar3 = unibrow::WhiteSpace::Is((uint)uVar2);
        if (((uVar2 & 0xfffe) != 0x2028) && ((uVar3 & 1) == 0)) {
LAB_01062590:
          if (*puVar8 == 0x2d) {
            if (puVar8 + 1 == puVar1) goto LAB_01062708;
            uVar5 = 0;
LAB_010625e8:
            puVar8 = puVar8 + 1;
            *(undefined4 *)(this + 0x2c) = uVar5;
          }
          else if (*puVar8 == 0x2b) {
            if (puVar8 + 1 != puVar1) {
              uVar5 = 1;
              goto LAB_010625e8;
            }
            goto LAB_01062708;
          }
          iVar4 = *(int *)(this + 0x20);
          if (iVar4 == 0x10) {
            if (*puVar8 == 0x30) {
              if (puVar8 + 1 == puVar1) goto LAB_0106269c;
              if ((puVar8[1] | 0x20) != 0x78) {
                this[0x30] = (StringToIntHelper)0x1;
                iVar4 = 0x10;
                goto LAB_0106274c;
              }
              puVar8 = puVar8 + 2;
              if (puVar8 == puVar1) goto LAB_01062708;
            }
            iVar4 = 0x10;
            goto LAB_01062680;
          }
          if (iVar4 != 0) goto LAB_01062680;
          iVar4 = 10;
          *(undefined4 *)(this + 0x20) = 10;
          if (*puVar8 != 0x30) goto LAB_01062680;
          if (puVar8 + 1 == puVar1) goto LAB_0106269c;
          uVar2 = puVar8[1];
          if ((uVar2 | 0x20) != 0x78) {
            if (this[0x31] != (StringToIntHelper)0x0) {
              if (uVar2 < 0x62) {
                if (uVar2 == 0x42) {
LAB_0106276c:
                  puVar8 = puVar8 + 2;
                  iVar4 = 2;
                  uVar5 = 2;
                  *(undefined4 *)(this + 0x20) = 2;
                  if (puVar8 != puVar1) goto LAB_01062680;
                  goto LAB_010625bc;
                }
                if (uVar2 == 0x4f) {
LAB_01062764:
                  iVar4 = 8;
                  goto LAB_01062630;
                }
              }
              else {
                if (uVar2 == 0x62) goto LAB_0106276c;
                if (uVar2 == 0x6f) goto LAB_01062764;
              }
            }
            this[0x30] = (StringToIntHelper)0x1;
            iVar4 = 10;
LAB_0106274c:
            puVar8 = puVar8 + 1;
            goto LAB_01062680;
          }
          iVar4 = 0x10;
LAB_01062630:
          puVar8 = puVar8 + 2;
          *(int *)(this + 0x20) = iVar4;
          if (puVar8 == puVar1) goto LAB_01062708;
          goto LAB_01062680;
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  uVar5 = 3;
  goto LAB_010625bc;
  while( true ) {
    puVar8 = puVar8 + 1;
    this[0x30] = (StringToIntHelper)0x1;
    if (puVar8 == puVar1) break;
LAB_01062680:
    uVar2 = *puVar8;
    uVar6 = (uint)uVar2;
    if (uVar6 != 0x30) {
      if ((((this[0x30] != (StringToIntHelper)0x0) ||
           ((uVar7 = (uint)uVar2, uVar6 - 0x30 < 10 &&
            (iVar4 + 0x30U != uVar7 && (int)uVar6 <= (int)(iVar4 + 0x30U))))) ||
          ((uVar6 = (uint)uVar2, 0x60 < uVar7 && ((10 < iVar4 && ((int)uVar6 < iVar4 + 0x57)))))) ||
         ((0x40 < uVar6 &&
          ((10 < iVar4 && (iVar4 + 0x37U != uVar7 && (int)uVar6 <= (int)(iVar4 + 0x37U))))))) {
        *(int *)(this + 0x24) = (int)((ulong)((long)puVar8 - (long)param_1) >> 1);
        return;
      }
LAB_01062708:
      uVar5 = 2;
      goto LAB_010625bc;
    }
  }
LAB_0106269c:
  uVar5 = 4;
LAB_010625bc:
  *(undefined4 *)(this + 0x34) = uVar5;
  return;
}

