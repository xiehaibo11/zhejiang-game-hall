
/* v8::internal::Scanner::Initialize() */

void __thiscall v8::internal::Scanner::Initialize(Scanner *this)

{
  LiteralBuffer *this_00;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  Scanner SVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  ushort *puVar12;
  byte *pbVar13;
  ushort *puVar14;
  Scanner *pSVar15;
  byte *pbVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  Scanner *pSVar20;
  Scanner *pSVar21;
  ushort *puVar22;
  int local_64;
  
  pSVar21 = this + 0x18;
  plVar17 = *(long **)pSVar21;
  puVar14 = (ushort *)plVar17[2];
  if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118a44c:
    uVar6 = (uint)*puVar14;
  }
  else {
    if ((char)plVar17[6] == '\0') {
      uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
      puVar14 = (ushort *)plVar17[2];
      if ((uVar18 & 1) != 0) goto LAB_0118a44c;
    }
    uVar6 = 0xffffffff;
  }
  pSVar15 = this + 0x78;
  plVar17[2] = (long)(puVar14 + 1);
  pSVar20 = this + 0x20;
  *(uint *)pSVar20 = uVar6;
  *(Scanner **)this = this + 0x28;
  *(Scanner **)(this + 8) = pSVar15;
  *(Scanner **)(this + 0x10) = this + 200;
  this[0x118] = (Scanner)0x0;
  *(undefined4 *)(this + 0x15c) = 0;
  this[0xc4] = (Scanner)0x1;
LAB_0118a4a8:
  do {
    lVar9 = *(long *)pSVar21;
    *(int *)pSVar15 =
         (int)((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 1) +
         *(int *)(lVar9 + 0x20) + -1;
    uVar6 = *(uint *)pSVar20;
    uVar18 = (ulong)uVar6;
    if (uVar6 < 0x80) {
      SVar5 = *(Scanner *)(&DAT_019dbfed + uVar18);
      switch(SVar5) {
      case (Scanner)0x0:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b044:
          uVar6 = (uint)*puVar14;
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118b044;
          }
          uVar6 = 0xffffffff;
        }
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)(this + 0x20) = uVar6;
        SVar5 = (Scanner)ScanTemplateSpan(this);
        goto LAB_0118b2e0;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case (Scanner)0x2:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if ((ushort *)plVar17[3] <= puVar14) {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118b00c;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x2;
          goto LAB_0118b2e0;
        }
LAB_0118b00c:
        uVar3 = *puVar14;
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)pSVar20 = (uint)uVar3;
        if (uVar3 - 0x30 < 10) {
          SVar5 = (Scanner)ScanNumber(this,true);
          goto LAB_0118b2e0;
        }
        if (uVar3 == 0x2e) {
          plVar17 = *(long **)pSVar21;
          psVar11 = (short *)plVar17[2];
          if ((short *)plVar17[3] <= psVar11) {
            if (((char)plVar17[6] != '\0') ||
               (uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17), (uVar18 & 1) == 0))
            goto LAB_0118bd34;
            psVar11 = (short *)plVar17[2];
          }
          if (*psVar11 == 0x2e) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b108:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b108;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b128:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b128;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0xa;
            goto LAB_0118b2e0;
          }
        }
LAB_0118bd34:
        SVar5 = (Scanner)0x2;
        goto LAB_0118b2e0;
      case (Scanner)0x3:
      case (Scanner)0x5:
      case (Scanner)0x6:
      case (Scanner)0x7:
      case (Scanner)0x8:
      case (Scanner)0x9:
      case (Scanner)0xc:
      case (Scanner)0xd:
      case (Scanner)0x1e:
      case (Scanner)0x2f:
      case (Scanner)0x6d:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
          uVar6 = (uint)*puVar14;
        }
        else if ((char)plVar17[6] == '\0') {
          uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
          puVar14 = (ushort *)plVar17[2];
          if ((uVar18 & 1) == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)*puVar14;
          }
        }
        else {
          uVar6 = 0xffffffff;
        }
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)pSVar20 = uVar6;
        goto LAB_0118b2e0;
      case (Scanner)0xb:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118acf4:
          uVar6 = (uint)*puVar14;
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118acf4;
          }
          uVar6 = 0xffffffff;
        }
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)(this + 0x20) = uVar6;
        if ((uVar6 == 0x2e) && (this[0x119] != (Scanner)0x0)) {
          plVar17 = *(long **)pSVar21;
          puVar14 = (ushort *)plVar17[2];
          if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b9c8:
            uVar3 = *puVar14;
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = (uint)uVar3;
            if (uVar3 - 0x30 < 10) {
              plVar17 = *(long **)pSVar21;
              uVar18 = plVar17[1];
              uVar10 = plVar17[2];
              if (uVar10 < uVar18 || uVar10 - uVar18 == 0) {
                plVar17[2] = uVar18;
                plVar17[4] = plVar17[4] + ((long)(uVar10 - uVar18) >> 1) + -1;
                if ((char)plVar17[6] == '\0') {
                  (**(code **)(*plVar17 + 0x28))();
                }
              }
              else {
                plVar17[2] = uVar10 - 2;
              }
              *(uint *)pSVar20 = 0x2e;
              SVar5 = (Scanner)0xb;
            }
            else {
              SVar5 = (Scanner)0x4;
            }
          }
          else {
            if ((char)plVar17[6] == '\0') {
              uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
              puVar14 = (ushort *)plVar17[2];
              if ((uVar18 & 1) != 0) goto LAB_0118b9c8;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = 0xffffffff;
            SVar5 = (Scanner)0x4;
          }
        }
        else {
          SVar5 = (Scanner)0xb;
          if ((uVar6 == 0x3f) && (this[0x11a] != (Scanner)0x0)) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ad38:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118ad38;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x1f;
          }
        }
        goto LAB_0118b2e0;
      case (Scanner)0x11:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118af14:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3e) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b284:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b284;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0xf;
            goto LAB_0118b2e0;
          }
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118af40:
              uVar3 = *puVar14;
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar17 = *(long **)pSVar21;
                puVar14 = (ushort *)plVar17[2];
                if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118af64:
                  uVar6 = (uint)*puVar14;
                }
                else {
                  if ((char)plVar17[6] == '\0') {
                    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                    puVar14 = (ushort *)plVar17[2];
                    if ((uVar18 & 1) != 0) goto LAB_0118af64;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar17[2] = (long)(puVar14 + 1);
                *(uint *)pSVar20 = uVar6;
                SVar5 = (Scanner)0x36;
              }
              else {
                SVar5 = (Scanner)0x35;
              }
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118af40;
              }
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = 0xffffffff;
              SVar5 = (Scanner)0x35;
            }
            goto LAB_0118b2e0;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118af14;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
        }
        SVar5 = (Scanner)0x11;
        goto LAB_0118b2e0;
      case (Scanner)0x22:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118abd4:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b198:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b198;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x12;
          }
          else if (uVar3 == 0x7c) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ac00:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118ac00;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x20;
          }
          else {
            SVar5 = (Scanner)0x22;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118abd4;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x22;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x23:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b070:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b094:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b094;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x13;
          }
          else {
            SVar5 = (Scanner)0x23;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118b070;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x23;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x24:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118aca0:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b1f8:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b1f8;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x14;
          }
          else if (uVar3 == 0x26) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118accc:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118accc;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x21;
          }
          else {
            SVar5 = (Scanner)0x24;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118aca0;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x24;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x28:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ac28:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b1c0:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b1c0;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x18;
          }
          else if (uVar3 == 0x2a) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ac54:
              uVar3 = *puVar14;
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar17 = *(long **)pSVar21;
                puVar14 = (ushort *)plVar17[2];
                if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ac78:
                  uVar6 = (uint)*puVar14;
                }
                else {
                  if ((char)plVar17[6] == '\0') {
                    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                    puVar14 = (ushort *)plVar17[2];
                    if ((uVar18 & 1) != 0) goto LAB_0118ac78;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar17[2] = (long)(puVar14 + 1);
                *(uint *)pSVar20 = uVar6;
                SVar5 = (Scanner)0x1b;
              }
              else {
                SVar5 = (Scanner)0x2b;
              }
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118ac54;
              }
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = 0xffffffff;
              SVar5 = (Scanner)0x2b;
            }
          }
          else {
            SVar5 = (Scanner)0x28;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118ac28;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x28;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x29:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if ((ushort *)plVar17[3] <= puVar14) {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118a500;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x29;
          goto LAB_0118b2e0;
        }
LAB_0118a500:
        uVar3 = *puVar14;
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)pSVar20 = (uint)uVar3;
        if (uVar3 == 0x2a) {
          SVar5 = (Scanner)SkipMultiLineComment(this);
          break;
        }
        if (uVar3 != 0x2f) {
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b438:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b438;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x19;
          }
          else {
            SVar5 = (Scanner)0x29;
          }
          goto LAB_0118b2e0;
        }
        plVar17 = *(long **)pSVar21;
        psVar11 = (short *)plVar17[2];
        if (psVar11 < (short *)plVar17[3]) {
LAB_0118a52c:
          if ((*psVar11 == 0x40) || (*psVar11 == 0x23)) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) {
                  uVar6 = (uint)*puVar14;
                  goto LAB_0118a554;
                }
              }
              uVar6 = 0xffffffff;
            }
LAB_0118a554:
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118a574:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118a574;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)(this + 0x20) = uVar6;
            SkipSourceURLComment(this);
            pSVar15 = *(Scanner **)(this + 8);
            goto LAB_0118a4a8;
          }
        }
        else if (((char)plVar17[6] == '\0') &&
                (uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17), (uVar18 & 1) != 0)) {
          psVar11 = (short *)plVar17[2];
          goto LAB_0118a52c;
        }
        plVar17 = *(long **)pSVar21;
        do {
          puVar14 = (ushort *)plVar17[2];
          puVar12 = (ushort *)plVar17[3];
          if (puVar14 == puVar12) {
LAB_0118a8f0:
            if (puVar14 != puVar12) {
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = (uint)*puVar14;
              pSVar15 = *(Scanner **)(this + 8);
              goto LAB_0118a4a8;
            }
          }
          else {
            do {
              uVar3 = *puVar14;
              if (((uVar3 - 0x2028 < 2) || (uVar3 == 10)) || (uVar3 == 0xd)) goto LAB_0118a8f0;
              puVar14 = puVar14 + 1;
            } while (puVar12 != puVar14);
          }
          plVar17[2] = (long)puVar12;
          if ((char)plVar17[6] != '\0') goto LAB_0118a928;
          uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
        } while ((uVar18 & 1) != 0);
        puVar12 = (ushort *)plVar17[2];
LAB_0118a928:
        plVar17[2] = (long)(puVar12 + 1);
        *(uint *)pSVar20 = 0xffffffff;
        pSVar15 = *(Scanner **)(this + 8);
        goto LAB_0118a4a8;
      case (Scanner)0x2a:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118adb4:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118add8:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118add8;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x1a;
          }
          else {
            SVar5 = (Scanner)0x2a;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118adb4;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x2a;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x2c:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ab80:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b168:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b168;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x1c;
          }
          else if (uVar3 == 0x2b) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118abac:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118abac;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x33;
          }
          else {
            SVar5 = (Scanner)0x2c;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118ab80;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x2c;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x2d:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if ((ushort *)plVar17[3] <= puVar14) {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118a6c8;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x2d;
          goto LAB_0118b2e0;
        }
LAB_0118a6c8:
        uVar3 = *puVar14;
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)pSVar20 = (uint)uVar3;
        if (uVar3 != 0x2d) {
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b468:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b468;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x1d;
          }
          else {
            SVar5 = (Scanner)0x2d;
          }
          goto LAB_0118b2e0;
        }
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if ((ushort *)plVar17[3] <= puVar14) {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118a6ec;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x34;
          goto LAB_0118b2e0;
        }
LAB_0118a6ec:
        uVar3 = *puVar14;
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)pSVar20 = (uint)uVar3;
        if ((uVar3 != 0x3e) || (*(char *)(*(long *)(this + 8) + 0x4c) == '\0')) {
          SVar5 = (Scanner)0x34;
          goto LAB_0118b2e0;
        }
        SVar5 = (Scanner)SkipSingleHTMLComment(this);
        break;
      case (Scanner)0x2e:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118af8c:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118afb0:
              uVar3 = *puVar14;
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar17 = *(long **)pSVar21;
                puVar14 = (ushort *)plVar17[2];
                if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118afd4:
                  uVar6 = (uint)*puVar14;
                }
                else {
                  if ((char)plVar17[6] == '\0') {
                    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                    puVar14 = (ushort *)plVar17[2];
                    if ((uVar18 & 1) != 0) goto LAB_0118afd4;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar17[2] = (long)(puVar14 + 1);
                *(uint *)pSVar20 = uVar6;
                SVar5 = (Scanner)0x38;
              }
              else {
                SVar5 = (Scanner)0x37;
              }
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118afb0;
              }
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = 0xffffffff;
              SVar5 = (Scanner)0x37;
            }
          }
          else {
            SVar5 = (Scanner)0x2e;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118af8c;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x2e;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x39:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if ((ushort *)plVar17[3] <= puVar14) {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118a5ac;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x39;
          goto LAB_0118b2e0;
        }
LAB_0118a5ac:
        uVar3 = *puVar14;
        plVar17[2] = (long)(puVar14 + 1);
        *(uint *)pSVar20 = (uint)uVar3;
        if (uVar3 != 0x21) {
          if (uVar3 == 0x3c) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b500:
              uVar3 = *puVar14;
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = (uint)uVar3;
              if (uVar3 == 0x3d) {
                plVar17 = *(long **)pSVar21;
                puVar14 = (ushort *)plVar17[2];
                if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b524:
                  uVar6 = (uint)*puVar14;
                }
                else {
                  if ((char)plVar17[6] == '\0') {
                    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                    puVar14 = (ushort *)plVar17[2];
                    if ((uVar18 & 1) != 0) goto LAB_0118b524;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar17[2] = (long)(puVar14 + 1);
                *(uint *)pSVar20 = uVar6;
                SVar5 = (Scanner)0x15;
              }
              else {
                SVar5 = (Scanner)0x25;
              }
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b500;
              }
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = 0xffffffff;
              SVar5 = (Scanner)0x25;
            }
          }
          else if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b4a0:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b4a0;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x3b;
          }
          else {
            SVar5 = (Scanner)0x39;
          }
          goto LAB_0118b2e0;
        }
        SVar5 = (Scanner)ScanHtmlComment(this);
        break;
      case (Scanner)0x3a:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ad60:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 == 0x3e) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b220:
              uVar3 = *puVar14;
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = (uint)uVar3;
              if (uVar3 == 0x3e) {
                plVar17 = *(long **)pSVar21;
                puVar14 = (ushort *)plVar17[2];
                if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b3cc:
                  uVar3 = *puVar14;
                  plVar17[2] = (long)(puVar14 + 1);
                  *(uint *)pSVar20 = (uint)uVar3;
                  if (uVar3 == 0x3d) {
                    plVar17 = *(long **)pSVar21;
                    puVar14 = (ushort *)plVar17[2];
                    if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b3f0:
                      uVar6 = (uint)*puVar14;
                    }
                    else {
                      if ((char)plVar17[6] == '\0') {
                        uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                        puVar14 = (ushort *)plVar17[2];
                        if ((uVar18 & 1) != 0) goto LAB_0118b3f0;
                      }
                      uVar6 = 0xffffffff;
                    }
                    plVar17[2] = (long)(puVar14 + 1);
                    *(uint *)pSVar20 = uVar6;
                    SVar5 = (Scanner)0x17;
                  }
                  else {
                    SVar5 = (Scanner)0x27;
                  }
                }
                else {
                  if ((char)plVar17[6] == '\0') {
                    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                    puVar14 = (ushort *)plVar17[2];
                    if ((uVar18 & 1) != 0) goto LAB_0118b3cc;
                  }
                  plVar17[2] = (long)(puVar14 + 1);
                  *(uint *)pSVar20 = 0xffffffff;
                  SVar5 = (Scanner)0x27;
                }
              }
              else if (uVar3 == 0x3d) {
                plVar17 = *(long **)pSVar21;
                puVar14 = (ushort *)plVar17[2];
                if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b24c:
                  uVar6 = (uint)*puVar14;
                }
                else {
                  if ((char)plVar17[6] == '\0') {
                    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                    puVar14 = (ushort *)plVar17[2];
                    if ((uVar18 & 1) != 0) goto LAB_0118b24c;
                  }
                  uVar6 = 0xffffffff;
                }
                plVar17[2] = (long)(puVar14 + 1);
                *(uint *)pSVar20 = uVar6;
                SVar5 = (Scanner)0x16;
              }
              else {
                SVar5 = (Scanner)0x26;
              }
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118b220;
              }
              plVar17[2] = (long)(puVar14 + 1);
              *(uint *)pSVar20 = 0xffffffff;
              SVar5 = (Scanner)0x26;
            }
          }
          else if (uVar3 == 0x3d) {
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118ad8c:
              uVar6 = (uint)*puVar14;
            }
            else {
              if ((char)plVar17[6] == '\0') {
                uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
                puVar14 = (ushort *)plVar17[2];
                if ((uVar18 & 1) != 0) goto LAB_0118ad8c;
              }
              uVar6 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = uVar6;
            SVar5 = (Scanner)0x3c;
          }
          else {
            SVar5 = (Scanner)0x3a;
          }
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118ad60;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
          SVar5 = (Scanner)0x3a;
        }
        goto LAB_0118b2e0;
      case (Scanner)0x57:
        SVar5 = (Scanner)ScanNumber(this,false);
        goto LAB_0118b2e0;
      case (Scanner)0x5a:
        SVar5 = (Scanner)ScanString(this);
        goto LAB_0118b2e0;
      case (Scanner)0x5c:
        lVar9 = *(long *)(this + 8);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(undefined1 *)(lVar9 + 0x1c) = 1;
        uVar6 = *(uint *)(this + 0x20);
        if (0x7f < uVar6) {
LAB_0118b93c:
          bVar4 = true;
          bVar7 = false;
          goto LAB_0118b2d8;
        }
        if (uVar6 != 0x5c) {
          lVar9 = *(long *)(this + 8);
          iVar8 = *(int *)(lVar9 + 0x18);
          uVar19 = (uint)((byte)(&DAT_019dc0ed)[uVar6] >> 1);
          if (*(int *)(lVar9 + 0x10) <= iVar8) {
            LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar9 + 8));
            iVar8 = *(int *)(lVar9 + 0x18);
          }
          *(char *)(*(long *)(lVar9 + 8) + (long)iVar8) = (char)uVar6;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
          plVar17 = *(long **)pSVar21;
          goto LAB_0118ae5c;
        }
LAB_0118b944:
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b958:
          uVar3 = *puVar14;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar3;
          if (uVar3 != 0x75) {
            uVar6 = 0xffffffff;
            goto LAB_0118ba94;
          }
          plVar17 = *(long **)pSVar21;
          puVar14 = (ushort *)plVar17[2];
          if (puVar14 < (ushort *)plVar17[3]) {
LAB_0118b97c:
            uVar6 = (uint)*puVar14;
          }
          else {
            if ((char)plVar17[6] == '\0') {
              uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
              puVar14 = (ushort *)plVar17[2];
              if ((uVar18 & 1) != 0) goto LAB_0118b97c;
            }
            uVar6 = 0xffffffff;
          }
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)(this + 0x20) = uVar6;
          uVar6 = ScanUnicodeEscape<false>(this);
          if (uVar6 == 0x5c) goto LAB_0118be80;
          if (0x7f < uVar6) {
            if ((int)uVar6 < 0x10000) goto LAB_0118ba94;
            goto LAB_0118be80;
          }
          if (((&DAT_019dc06d)[uVar6] & 1) == 0) goto LAB_0118be80;
          bVar7 = true;
        }
        else {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118b958;
          }
          uVar6 = 0xffffffff;
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = 0xffffffff;
LAB_0118ba94:
          uVar18 = unibrow::ID_Start::Is(uVar6);
          if ((uVar18 & 1) == 0) goto LAB_0118be80;
          bVar7 = false;
        }
        lVar9 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar9 + 8);
        if (*(char *)(lVar9 + 0x1c) == '\0') {
LAB_0118bf40:
          LiteralBuffer::AddTwoByteChar(this_00,uVar6);
          if (!bVar7) goto LAB_0118baf0;
LAB_0118bf50:
          bVar4 = ((&DAT_019dc0ed)[uVar6] & 2) == 0;
        }
        else {
          if (0xff < (int)uVar6) {
            LiteralBuffer::ConvertToTwoByte(this_00);
            goto LAB_0118bf40;
          }
          iVar8 = *(int *)(lVar9 + 0x18);
          if (*(int *)(lVar9 + 0x10) <= iVar8) {
            LiteralBuffer::ExpandBuffer(this_00);
            iVar8 = *(int *)(lVar9 + 0x18);
          }
          *(char *)(*(long *)(lVar9 + 8) + (long)iVar8) = (char)uVar6;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
          if (bVar7) goto LAB_0118bf50;
LAB_0118baf0:
          bVar4 = false;
        }
        bVar7 = true;
        goto LAB_0118b2d8;
      case (Scanner)0x6c:
        SVar5 = (Scanner)ScanPrivateName(this);
        goto LAB_0118b2e0;
      case (Scanner)0x6f:
        lVar9 = *(long *)pSVar21;
        local_64 = (int)((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 1) +
                   *(int *)(lVar9 + 0x20);
        if (uVar6 < 0x80) goto LAB_0118a614;
        while ((uVar10 = unibrow::WhiteSpace::Is((uint)uVar18), (uint)uVar18 >> 1 == 0x1014 ||
               ((uVar10 & 1) != 0))) {
          while( true ) {
            if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
               (((uVar6 = *(uint *)pSVar20, uVar6 - 0x2028 < 2 || (uVar6 == 0xd)) || (uVar6 == 10)))
               ) {
              *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
            }
            plVar17 = *(long **)pSVar21;
            puVar14 = (ushort *)plVar17[2];
            if (puVar14 < (ushort *)plVar17[3]) {
              uVar18 = (ulong)*puVar14;
            }
            else if ((char)plVar17[6] == '\0') {
              uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
              puVar14 = (ushort *)plVar17[2];
              if ((uVar18 & 1) == 0) {
                uVar18 = 0xffffffff;
              }
              else {
                uVar18 = (ulong)*puVar14;
              }
            }
            else {
              uVar18 = 0xffffffff;
            }
            plVar17[2] = (long)(puVar14 + 1);
            *(uint *)pSVar20 = (uint)uVar18;
            if (0x7f < (uint)uVar18) break;
LAB_0118a614:
            if (((byte)(&DAT_019dc06d)[uVar18] >> 3 & 1) == 0) goto LAB_0118aae8;
          }
        }
        goto LAB_0118aae8;
      }
      if (SVar5 != (Scanner)0x6f) goto LAB_0118b2e0;
    }
    else {
      if ((int)uVar6 < 0x10000) {
        uVar18 = unibrow::ID_Start::Is(uVar6);
        if ((uVar18 & 1) == 0) {
          uVar18 = (ulong)*(uint *)pSVar20;
          goto LAB_0118a75c;
        }
LAB_0118b828:
        lVar9 = *(long *)(this + 8);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(undefined1 *)(lVar9 + 0x1c) = 1;
        uVar6 = *(uint *)(this + 0x20);
        if (0x7f < uVar6) goto LAB_0118b93c;
        if (uVar6 == 0x5c) goto LAB_0118b944;
        lVar9 = *(long *)(this + 8);
        iVar8 = *(int *)(lVar9 + 0x18);
        uVar19 = (uint)((byte)(&DAT_019dc0ed)[uVar6] >> 1);
        if (*(int *)(lVar9 + 0x10) <= iVar8) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar9 + 8));
          iVar8 = *(int *)(lVar9 + 0x18);
        }
        *(char *)(*(long *)(lVar9 + 8) + (long)iVar8) = (char)uVar6;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
        plVar17 = *(long **)pSVar21;
        break;
      }
LAB_0118a75c:
      if (((uint)uVar18 & 0xfc00) == 0xd800) {
        plVar17 = *(long **)pSVar21;
        puVar14 = (ushort *)plVar17[2];
        if ((ushort *)plVar17[3] <= puVar14) {
          if ((char)plVar17[6] == '\0') {
            uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
            puVar14 = (ushort *)plVar17[2];
            if ((uVar18 & 1) != 0) goto LAB_0118a77c;
          }
          plVar17[2] = (long)(puVar14 + 1);
LAB_0118a9e4:
          plVar17 = *(long **)pSVar21;
          uVar18 = plVar17[1];
          uVar10 = plVar17[2];
          if (uVar10 < uVar18 || uVar10 - uVar18 == 0) {
            plVar17[2] = uVar18;
            plVar17[4] = plVar17[4] + ((long)(uVar10 - uVar18) >> 1) + -1;
            if ((char)plVar17[6] == '\0') {
              (**(code **)(*plVar17 + 0x28))();
            }
          }
          else {
            plVar17[2] = uVar10 - 2;
          }
LAB_0118a9fc:
          uVar18 = (ulong)*(uint *)pSVar20;
          goto LAB_0118aa00;
        }
LAB_0118a77c:
        uVar3 = *puVar14;
        plVar17[2] = (long)(puVar14 + 1);
        if ((uVar3 & 0xfc00) != 0xdc00) goto LAB_0118a9e4;
        uVar10 = (ulong)(*(uint *)pSVar20 << 10) & 0xffc00 | (ulong)uVar3 & 0x3ff;
        uVar18 = uVar10 + 0x10000;
        *(uint *)pSVar20 = (uint)uVar18;
        if ((uint)uVar18 < 0x80) {
          if (((&UNK_019ec06d)[uVar10] & 1) != 0) goto LAB_0118b828;
          goto LAB_0118a9fc;
        }
      }
      else {
LAB_0118aa00:
        if ((int)uVar18 == -1) {
          SVar5 = (Scanner)0xe;
          if (*(char *)(*(long *)pSVar21 + 0x30) != '\0') {
            SVar5 = (Scanner)0x6d;
          }
          goto LAB_0118b2e0;
        }
      }
      lVar9 = *(long *)pSVar21;
      local_64 = (int)((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 1) +
                 *(int *)(lVar9 + 0x20);
      if ((uint)uVar18 < 0x80) goto LAB_0118aa4c;
LAB_0118aa2c:
      uVar10 = unibrow::WhiteSpace::Is((uint)uVar18);
      if (((uint)uVar18 >> 1 == 0x1014) || ((uVar10 & 1) != 0)) {
        do {
          if ((*(char *)(*(long *)(this + 8) + 0x4c) == '\0') &&
             (((uVar6 = *(uint *)pSVar20, uVar6 - 0x2028 < 2 || (uVar6 == 0xd)) || (uVar6 == 10))))
          {
            *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
          }
          plVar17 = *(long **)pSVar21;
          puVar14 = (ushort *)plVar17[2];
          if (puVar14 < (ushort *)plVar17[3]) {
            uVar18 = (ulong)*puVar14;
          }
          else {
            if ((char)plVar17[6] == '\0') {
              uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
              puVar14 = (ushort *)plVar17[2];
              if ((uVar18 & 1) != 0) {
                uVar18 = (ulong)*puVar14;
                goto LAB_0118aa98;
              }
            }
            uVar18 = 0xffffffff;
          }
LAB_0118aa98:
          plVar17[2] = (long)(puVar14 + 1);
          *(uint *)pSVar20 = (uint)uVar18;
          if (0x7f < (uint)uVar18) goto LAB_0118aa2c;
LAB_0118aa4c:
          if (((byte)(&DAT_019dc06d)[uVar18] >> 3 & 1) == 0) break;
        } while( true );
      }
LAB_0118aae8:
      lVar9 = *(long *)pSVar21;
      if ((int)((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 1) +
          *(int *)(lVar9 + 0x20) == local_64) goto LAB_0118be80;
    }
    pSVar15 = *(Scanner **)(this + 8);
  } while( true );
  while( true ) {
    plVar17[2] = (long)puVar22;
    if ((char)plVar17[6] != '\0') goto LAB_0118bd78;
    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
    if ((uVar18 & 1) == 0) break;
    puVar12 = (ushort *)plVar17[3];
    puVar14 = (ushort *)plVar17[2];
    puVar22 = puVar14;
    for (; puVar14 != puVar12; puVar14 = puVar14 + 1) {
      uVar3 = *puVar14;
      puVar22 = puVar14;
      if (0x7f < (ulong)uVar3) {
        uVar19 = uVar19 | 0x10;
        break;
      }
      uVar19 = (byte)(&DAT_019dc0ed)[uVar3] | uVar19;
      if (((&DAT_019dc0ed)[uVar3] & 1) != 0) break;
      lVar9 = *(long *)(this + 8);
      iVar8 = *(int *)(lVar9 + 0x18);
      if (*(int *)(lVar9 + 0x10) <= iVar8) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar9 + 8));
        iVar8 = *(int *)(lVar9 + 0x18);
      }
      *(char *)(*(long *)(lVar9 + 8) + (long)iVar8) = (char)uVar3;
      *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
      puVar22 = puVar12;
    }
    if (puVar22 != (ushort *)plVar17[3]) {
      plVar17[2] = (long)(puVar22 + 1);
      uVar6 = (uint)*puVar22;
      goto LAB_0118bd84;
    }
  }
  puVar22 = (ushort *)plVar17[2];
LAB_0118bd78:
  plVar17[2] = (long)(puVar22 + 1);
  uVar6 = 0xffffffff;
LAB_0118bd84:
  *(uint *)pSVar20 = uVar6;
  if ((uVar19 & 0x12) != 0) goto LAB_0118b2bc;
  uVar6 = *(uint *)(*(long *)(this + 8) + 0x18);
  if (uVar6 - 2 < 9) {
    pbVar13 = *(byte **)(*(long *)(this + 8) + 8);
    uVar18 = (ulong)(uVar6 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                   [pbVar13[1]] +
                    (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar13]) &
             0x3f;
    if (uVar6 == (byte)(&DAT_019dc1ed)[uVar18]) {
      pbVar16 = (&PTR_DAT_01cb57a0)[uVar18 * 2];
      do {
        bVar2 = *pbVar16;
        if (bVar2 == 0) goto LAB_0118be1c;
        bVar1 = *pbVar13;
        pbVar16 = pbVar16 + 1;
        SVar5 = (Scanner)0x5c;
        pbVar13 = pbVar13 + 1;
      } while (bVar2 == bVar1);
      goto LAB_0118b2e0;
    }
  }
  goto LAB_0118be14;
LAB_0118be80:
  SVar5 = (Scanner)0x6d;
  goto LAB_0118b2e0;
LAB_0118be1c:
  SVar5 = *(Scanner *)(&DAT_01cb57a8 + uVar18 * 0x10);
  goto LAB_0118b2e0;
  while( true ) {
    plVar17[2] = (long)puVar22;
    if ((char)plVar17[6] != '\0') goto LAB_0118b2a0;
    uVar18 = (**(code **)(*plVar17 + 0x28))(plVar17);
    if ((uVar18 & 1) == 0) break;
LAB_0118ae5c:
    puVar12 = (ushort *)plVar17[3];
    puVar14 = (ushort *)plVar17[2];
    puVar22 = puVar14;
    for (; puVar14 != puVar12; puVar14 = puVar14 + 1) {
      uVar3 = *puVar14;
      puVar22 = puVar14;
      if (0x7f < (ulong)uVar3) {
        uVar19 = uVar19 | 0x10;
        break;
      }
      uVar19 = (byte)(&DAT_019dc0ed)[uVar3] | uVar19;
      if (((&DAT_019dc0ed)[uVar3] & 1) != 0) break;
      lVar9 = *(long *)(this + 8);
      iVar8 = *(int *)(lVar9 + 0x18);
      if (*(int *)(lVar9 + 0x10) <= iVar8) {
        LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar9 + 8));
        iVar8 = *(int *)(lVar9 + 0x18);
      }
      *(char *)(*(long *)(lVar9 + 8) + (long)iVar8) = (char)uVar3;
      *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
      puVar22 = puVar12;
    }
    if (puVar22 != (ushort *)plVar17[3]) {
      plVar17[2] = (long)(puVar22 + 1);
      uVar6 = (uint)*puVar22;
      goto LAB_0118b2ac;
    }
  }
  puVar22 = (ushort *)plVar17[2];
LAB_0118b2a0:
  plVar17[2] = (long)(puVar22 + 1);
  uVar6 = 0xffffffff;
LAB_0118b2ac:
  *(uint *)pSVar20 = uVar6;
  if ((uVar19 & 0x12) == 0) {
    uVar6 = *(uint *)(*(long *)(this + 8) + 0x18);
    if (uVar6 - 2 < 9) {
      pbVar13 = *(byte **)(*(long *)(this + 8) + 8);
      uVar18 = (ulong)(uVar6 + (byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values
                                     [pbVar13[1]] +
                      (uint)(byte)PerfectKeywordHash::Hash(char_const*,int)::asso_values[*pbVar13])
               & 0x3f;
      if (uVar6 == (byte)(&DAT_019dc1ed)[uVar18]) {
        pbVar16 = (&PTR_DAT_01cb57a0)[uVar18 * 2];
        do {
          bVar2 = *pbVar16;
          if (bVar2 == 0) goto LAB_0118be1c;
          bVar1 = *pbVar13;
          pbVar16 = pbVar16 + 1;
          SVar5 = (Scanner)0x5c;
          pbVar13 = pbVar13 + 1;
        } while (bVar2 == bVar1);
        goto LAB_0118b2e0;
      }
    }
  }
  else {
LAB_0118b2bc:
    if ((uVar19 >> 4 & 1) != 0) {
      bVar7 = false;
      bVar4 = (uVar19 & 2) == 0 || (uVar19 & 0x10) == 0;
LAB_0118b2d8:
      SVar5 = (Scanner)ScanIdentifierOrKeywordInnerSlow(this,bVar7,bVar4);
      goto LAB_0118b2e0;
    }
  }
LAB_0118be14:
  SVar5 = (Scanner)0x5c;
LAB_0118b2e0:
  lVar9 = *(long *)(this + 0x18);
  this[0xb0] = SVar5;
  *(int *)(this + 0x7c) =
       (int)((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 1) + *(int *)(lVar9 + 0x20)
       + -1;
  return;
}

