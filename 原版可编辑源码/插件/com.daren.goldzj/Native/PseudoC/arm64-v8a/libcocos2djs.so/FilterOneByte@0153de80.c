
/* v8::internal::TextNode::FilterOneByte(int) */

TextNode * __thiscall v8::internal::TextNode::FilterOneByte(TextNode *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ZoneList *pZVar6;
  long lVar7;
  TextNode *pTVar8;
  TextNode TVar9;
  long *plVar10;
  ulong uVar11;
  ushort *puVar12;
  int *piVar13;
  ushort uVar14;
  ulong uVar15;
  long lVar16;
  
  if ((char)this[0x19] < '\0') {
    this = *(TextNode **)(this + 8);
  }
  else if (-1 < param_1) {
    plVar10 = *(long **)(this + 0x40);
    this[0x19] = (TextNode)((byte)this[0x19] | 0x40);
    uVar3 = *(uint *)((long)plVar10 + 0xc);
    if (0 < (int)uVar3) {
      uVar15 = 0;
      do {
        lVar7 = *plVar10 + uVar15 * 0x10;
        lVar16 = *(long *)(lVar7 + 8);
        if (*(int *)(lVar7 + 4) == 0) {
          if (0 < (int)*(ulong *)(lVar16 + 0x10)) {
            uVar11 = *(ulong *)(lVar16 + 0x10) & 0xffffffff;
            puVar12 = *(ushort **)(lVar16 + 8);
            do {
              uVar5 = *puVar12;
              if ((*(byte *)(lVar16 + 0x18) >> 1 & 1) == 0) {
LAB_0153df84:
                uVar14 = uVar5;
                if (0xff < uVar5) goto LAB_0153e094;
              }
              else {
                uVar14 = 0xb5;
                if ((uVar5 != 0x3bc) && (uVar5 != 0x39c)) {
                  if (uVar5 != 0x178) goto LAB_0153df84;
                  uVar14 = 0xff;
                }
              }
              uVar11 = uVar11 - 1;
              *puVar12 = uVar14;
              puVar12 = puVar12 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          pZVar6 = (ZoneList *)
                   CharacterSet::ranges((CharacterSet *)(lVar16 + 8),*(Zone **)(this + 0x30));
          CharacterRange::Canonicalize(pZVar6);
          uVar4 = *(uint *)(pZVar6 + 0xc);
          uVar11 = (ulong)uVar4;
          if ((*(byte *)(lVar16 + 0x1c) & 1) == 0) {
            if (uVar4 == 0) goto LAB_0153e094;
            if (0xff < **(int **)pZVar6) {
              if ((0 < (int)uVar4) && ((*(uint *)(lVar16 + 0x18) >> 1 & 1) != 0)) {
                piVar13 = *(int **)pZVar6;
                do {
                  iVar1 = *piVar13;
                  iVar2 = piVar13[1];
                  if (iVar1 < 0x39d) {
                    if ((0x39b < iVar2) || ((iVar1 < 0x179 && (0x177 < iVar2)))) goto LAB_0153e040;
                  }
                  else if ((iVar1 < 0x3bd) && (0x3bb < iVar2)) goto LAB_0153e040;
                  uVar11 = uVar11 - 1;
                  piVar13 = piVar13 + 2;
                  if (uVar11 == 0) break;
                } while( true );
              }
              goto LAB_0153e094;
            }
          }
          else if (((uVar4 != 0) && (piVar13 = *(int **)pZVar6, *piVar13 == 0)) &&
                  (0xfe < piVar13[1])) {
            if ((0 < (int)uVar4) && ((*(uint *)(lVar16 + 0x18) >> 1 & 1) != 0)) {
              do {
                iVar1 = *piVar13;
                iVar2 = piVar13[1];
                if (iVar1 < 0x39d) {
                  if ((0x39b < iVar2) || ((iVar1 < 0x179 && (0x177 < iVar2)))) goto LAB_0153e040;
                }
                else if ((iVar1 < 0x3bd) && (0x3bb < iVar2)) goto LAB_0153e040;
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 2;
                if (uVar11 == 0) break;
              } while( true );
            }
            goto LAB_0153e094;
          }
        }
LAB_0153e040:
        uVar15 = uVar15 + 1;
        if (uVar15 == uVar3) break;
        plVar10 = *(long **)(this + 0x40);
      } while( true );
    }
    lVar7 = (**(code **)(**(long **)(this + 0x38) + 0x50))(*(long **)(this + 0x38),param_1 + -2);
    if (lVar7 == 0) {
LAB_0153e094:
      pTVar8 = (TextNode *)0x0;
      TVar9 = this[0x19];
    }
    else {
      TVar9 = this[0x19];
      *(long *)(this + 0x38) = lVar7;
      pTVar8 = this;
    }
    this[0x19] = (TextNode)((byte)TVar9 | 0x80);
    *(TextNode **)(this + 8) = pTVar8;
    this[0x19] = (TextNode)((byte)TVar9 & 0xbf | 0x80);
    this = pTVar8;
  }
  return this;
}

