
/* v8::internal::DateParser::DateStringTokenizer<unsigned short const>::Scan() */

undefined1  [16] __thiscall
v8::internal::DateParser::DateStringTokenizer<unsigned_short_const>::Scan
          (DateStringTokenizer<unsigned_short_const> *this)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  uint local_30 [4];
  
  piVar2 = *(int **)this;
  uVar4 = piVar2[6];
  uVar8 = (ulong)uVar4;
  if (uVar4 == 0) {
    uVar8 = 0xffffffff;
LAB_014c47f8:
    iVar6 = -1;
  }
  else {
    iVar1 = *piVar2;
    lVar3 = (long)iVar1;
    if (uVar4 - 0x30 < 10) {
      uVar4 = 0;
      iVar5 = 0;
      do {
        iVar6 = (int)uVar8 + iVar5 * 10 + -0x30;
        if (8 < uVar4) {
          iVar6 = iVar5;
        }
        if (piVar2[4] <= lVar3) {
          piVar2[6] = 0;
          *piVar2 = iVar1 + uVar4 + 1;
          break;
        }
        iVar5 = iVar1 + 1 + uVar4;
        uVar4 = uVar4 + 1;
        uVar7 = *(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
        uVar8 = (ulong)uVar7;
        lVar3 = lVar3 + 1;
        *piVar2 = iVar5;
        piVar2[6] = (uint)uVar7;
        iVar5 = iVar6;
      } while (uVar7 - 0x30 < 10);
      uVar8 = (ulong)(uint)(**(int **)this - iVar1) << 0x20 | 0xfffffffd;
      goto LAB_014c4a08;
    }
    switch(uVar4) {
    case 0x29:
      if (iVar1 < piVar2[4]) {
        uVar4 = (uint)*(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
      }
      else {
        uVar4 = 0;
      }
      piVar2[6] = uVar4;
      iVar6 = 0x29;
      break;
    default:
      if (0x40 < uVar4) {
        local_30[2] = 0;
        local_30[0] = 0;
        local_30[1] = 0;
        lVar3 = 0;
        do {
          lVar9 = lVar3;
          if (lVar9 < 3) {
            local_30[lVar9] = (uint)uVar8 | 0x20;
          }
          iVar1 = *piVar2;
          if (piVar2[4] <= iVar1) {
            piVar2[6] = 0;
            *piVar2 = iVar1 + 1;
            break;
          }
          uVar7 = *(ushort *)(*(long *)(piVar2 + 2) + (long)iVar1 * 2);
          uVar8 = (ulong)uVar7;
          *piVar2 = iVar1 + 1;
          piVar2[6] = (uint)uVar7;
          lVar3 = lVar9 + 1;
        } while (0x40 < uVar7);
        uVar8 = lVar9 + 1;
        if ((int)uVar8 < 3) {
          memset(local_30 + (uVar8 & 0xffffffff),0,(uVar8 * -4 + 8 & 0x3fffffffc) + 4);
        }
        iVar1 = KeywordTable::Lookup(local_30,(int)uVar8);
        lVar3 = (long)iVar1 + (long)iVar1 * 4;
        iVar6 = (int)(char)(&DAT_01a47fc2)[lVar3];
        uVar8 = (long)(char)(&DAT_01a47fc1)[lVar3] & 0xffffffffU | uVar8 << 0x20;
        goto LAB_014c4a08;
      }
      if (((byte)(&DAT_01a40508)[uVar8] >> 3 & 1) == 0) {
        uVar8 = 0x1fffffffb;
        if (uVar4 == 0x28) {
          iVar1 = 0;
          uVar7 = 0x28;
          do {
            if (uVar7 == 0x28) {
              iVar1 = iVar1 + 1;
            }
            else if (uVar7 == 0x29) {
              iVar1 = iVar1 + -1;
            }
            if (piVar2[4] <= (int)lVar3) {
              piVar2[6] = 0;
              *piVar2 = (int)lVar3 + 1;
              goto LAB_014c47f8;
            }
            uVar7 = *(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
            lVar3 = lVar3 + 1;
            iVar6 = -1;
            *piVar2 = (int)lVar3;
            piVar2[6] = (uint)uVar7;
          } while ((0 < iVar1) && (uVar7 != 0));
          goto LAB_014c4a08;
        }
        if (iVar1 < piVar2[4]) {
          uVar4 = (uint)*(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
        }
        else {
          uVar4 = 0;
        }
        piVar2[6] = uVar4;
        *piVar2 = iVar1 + 1;
      }
      else {
        if (iVar1 < piVar2[4]) {
          uVar4 = (uint)*(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
        }
        else {
          uVar4 = 0;
        }
        piVar2[6] = uVar4;
        *piVar2 = iVar1 + 1;
        uVar8 = (ulong)(uint)(**(int **)this - iVar1) << 0x20 | 0xfffffffc;
      }
      goto LAB_014c47f8;
    case 0x2b:
      if (iVar1 < piVar2[4]) {
        uVar4 = (uint)*(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
      }
      else {
        uVar4 = 0;
      }
      piVar2[6] = uVar4;
      iVar6 = 0x2b;
      break;
    case 0x2d:
      if (iVar1 < piVar2[4]) {
        uVar4 = (uint)*(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
      }
      else {
        uVar4 = 0;
      }
      piVar2[6] = uVar4;
      iVar6 = 0x2d;
      break;
    case 0x2e:
      if (iVar1 < piVar2[4]) {
        uVar4 = (uint)*(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
      }
      else {
        uVar4 = 0;
      }
      piVar2[6] = uVar4;
      iVar6 = 0x2e;
      break;
    case 0x3a:
      if (iVar1 < piVar2[4]) {
        uVar4 = (uint)*(ushort *)(*(long *)(piVar2 + 2) + lVar3 * 2);
      }
      else {
        uVar4 = 0;
      }
      iVar6 = 0x3a;
      piVar2[6] = uVar4;
    }
    *piVar2 = iVar1 + 1;
    uVar8 = 0x1fffffffe;
  }
LAB_014c4a08:
  auVar10._8_4_ = iVar6;
  auVar10._0_8_ = uVar8;
  auVar10._12_4_ = 0;
  return auVar10;
}

