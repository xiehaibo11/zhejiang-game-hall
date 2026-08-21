
/* v8::internal::DateParser::DateStringTokenizer<unsigned char const>::Scan() */

undefined1  [16] __thiscall
v8::internal::DateParser::DateStringTokenizer<unsigned_char_const>::Scan
          (DateStringTokenizer<unsigned_char_const> *this)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  uint local_30 [4];
  
  piVar3 = *(int **)this;
  uVar9 = piVar3[6];
  uVar7 = (ulong)uVar9;
  if (uVar9 == 0) {
    uVar7 = 0xffffffff;
LAB_014c3e94:
    iVar6 = -1;
  }
  else {
    iVar2 = *piVar3;
    lVar4 = (long)iVar2;
    if (uVar9 - 0x30 < 10) {
      lVar8 = 0;
      iVar5 = 0;
      do {
        uVar9 = (uint)lVar8;
        iVar6 = (int)uVar7 + iVar5 * 10 + -0x30;
        if (8 < uVar9) {
          iVar6 = iVar5;
        }
        if ((long)piVar3[4] <= lVar4 + lVar8) {
          piVar3[6] = 0;
          *piVar3 = iVar2 + uVar9 + 1;
          break;
        }
        bVar1 = *(byte *)(*(long *)(piVar3 + 2) + lVar4 + lVar8);
        uVar7 = (ulong)bVar1;
        *piVar3 = iVar2 + 1 + uVar9;
        lVar8 = lVar8 + 1;
        piVar3[6] = (uint)bVar1;
        iVar5 = iVar6;
      } while (bVar1 - 0x30 < 10);
      uVar7 = (ulong)(uint)(**(int **)this - iVar2) << 0x20 | 0xfffffffd;
      goto LAB_014c40a8;
    }
    switch(uVar9) {
    case 0x29:
      if (iVar2 < piVar3[4]) {
        uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
      }
      else {
        uVar9 = 0;
      }
      piVar3[6] = uVar9;
      iVar6 = 0x29;
      break;
    default:
      if (0x40 < uVar9) {
        local_30[2] = 0;
        local_30[0] = 0;
        local_30[1] = 0;
        lVar4 = 0;
        do {
          lVar8 = lVar4;
          if (lVar8 < 3) {
            local_30[lVar8] = (uint)uVar7 | 0x20;
          }
          iVar2 = *piVar3;
          if (piVar3[4] <= iVar2) {
            piVar3[6] = 0;
            *piVar3 = iVar2 + 1;
            break;
          }
          bVar1 = *(byte *)(*(long *)(piVar3 + 2) + (long)iVar2);
          uVar7 = (ulong)bVar1;
          *piVar3 = iVar2 + 1;
          piVar3[6] = (uint)bVar1;
          lVar4 = lVar8 + 1;
        } while (0x40 < bVar1);
        uVar7 = lVar8 + 1;
        if ((int)uVar7 < 3) {
          memset(local_30 + (uVar7 & 0xffffffff),0,(uVar7 * -4 + 8 & 0x3fffffffc) + 4);
        }
        iVar2 = KeywordTable::Lookup(local_30,(int)uVar7);
        lVar4 = (long)iVar2 + (long)iVar2 * 4;
        iVar6 = (int)(char)(&DAT_01a47fc2)[lVar4];
        uVar7 = (long)(char)(&DAT_01a47fc1)[lVar4] & 0xffffffffU | uVar7 << 0x20;
        goto LAB_014c40a8;
      }
      if (((byte)(&DAT_01a40508)[uVar7] >> 3 & 1) == 0) {
        uVar7 = 0x1fffffffb;
        if (uVar9 == 0x28) {
          iVar2 = 0;
          uVar9 = 0x28;
          do {
            if (uVar9 == 0x28) {
              iVar2 = iVar2 + 1;
            }
            else if (uVar9 == 0x29) {
              iVar2 = iVar2 + -1;
            }
            if (piVar3[4] <= (int)lVar4) {
              piVar3[6] = 0;
              *piVar3 = (int)lVar4 + 1;
              goto LAB_014c3e94;
            }
            uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
            lVar4 = lVar4 + 1;
            iVar6 = -1;
            *piVar3 = (int)lVar4;
            piVar3[6] = uVar9;
          } while ((0 < iVar2) && (uVar9 != 0));
          goto LAB_014c40a8;
        }
        if (iVar2 < piVar3[4]) {
          uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
        }
        else {
          uVar9 = 0;
        }
        piVar3[6] = uVar9;
        *piVar3 = iVar2 + 1;
      }
      else {
        if (iVar2 < piVar3[4]) {
          uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
        }
        else {
          uVar9 = 0;
        }
        piVar3[6] = uVar9;
        *piVar3 = iVar2 + 1;
        uVar7 = (ulong)(uint)(**(int **)this - iVar2) << 0x20 | 0xfffffffc;
      }
      goto LAB_014c3e94;
    case 0x2b:
      if (iVar2 < piVar3[4]) {
        uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
      }
      else {
        uVar9 = 0;
      }
      piVar3[6] = uVar9;
      iVar6 = 0x2b;
      break;
    case 0x2d:
      if (iVar2 < piVar3[4]) {
        uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
      }
      else {
        uVar9 = 0;
      }
      piVar3[6] = uVar9;
      iVar6 = 0x2d;
      break;
    case 0x2e:
      if (iVar2 < piVar3[4]) {
        uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
      }
      else {
        uVar9 = 0;
      }
      piVar3[6] = uVar9;
      iVar6 = 0x2e;
      break;
    case 0x3a:
      if (iVar2 < piVar3[4]) {
        uVar9 = (uint)*(byte *)(*(long *)(piVar3 + 2) + lVar4);
      }
      else {
        uVar9 = 0;
      }
      piVar3[6] = uVar9;
      iVar6 = 0x3a;
    }
    *piVar3 = iVar2 + 1;
    uVar7 = 0x1fffffffe;
  }
LAB_014c40a8:
  auVar10._8_4_ = iVar6;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}

