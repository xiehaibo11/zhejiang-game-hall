
/* dtProximityGrid::queryItems(float, float, float, float, unsigned short*, int) const */

int __thiscall
dtProximityGrid::queryItems
          (dtProximityGrid *this,float param_1,float param_2,float param_3,float param_4,
          ushort *param_5,int param_6)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  float fVar13;
  
  fVar13 = *(float *)(this + 4);
  if ((int)(fVar13 * param_4) < (int)(fVar13 * param_2)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    iVar5 = (int)(fVar13 * param_2);
    do {
      if ((int)(fVar13 * param_1) <= (int)(fVar13 * param_3)) {
        iVar3 = *(int *)(this + 0x20);
        lVar9 = *(long *)(this + 0x18);
        iVar6 = (int)(fVar13 * param_1);
        do {
          uVar4 = *(ushort *)
                   (lVar9 + (long)(int)(iVar3 - 1U & (iVar6 * 0x466f45d ^ iVar5 * 0x127409f)) * 2);
          if (uVar4 != 0xffff) {
            lVar7 = *(long *)(this + 8);
            do {
              puVar2 = (ushort *)(lVar7 + (ulong)uVar4 * 8);
              if ((iVar6 == (short)puVar2[1]) && (iVar5 == *(short *)(lVar7 + (ulong)uVar4 * 8 + 4))
                 ) {
                lVar10 = (long)iVar8;
                if (iVar8 != 0) {
                  lVar11 = lVar10 << 1;
                  puVar12 = param_5;
                  do {
                    if (*puVar12 == *puVar2) goto LAB_01194d78;
                    lVar11 = lVar11 + -2;
                    puVar12 = puVar12 + 1;
                  } while (lVar11 != 0);
                }
                if (param_6 <= iVar8) {
                  return iVar8;
                }
                iVar8 = iVar8 + 1;
                param_5[lVar10] = *puVar2;
              }
LAB_01194d78:
              uVar4 = *(ushort *)(lVar7 + (ulong)uVar4 * 8 + 6);
            } while (uVar4 != 0xffff);
          }
          bVar1 = iVar6 < (int)(fVar13 * param_3);
          iVar6 = iVar6 + 1;
        } while (bVar1);
      }
      bVar1 = iVar5 < (int)(fVar13 * param_4);
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
  return iVar8;
}

