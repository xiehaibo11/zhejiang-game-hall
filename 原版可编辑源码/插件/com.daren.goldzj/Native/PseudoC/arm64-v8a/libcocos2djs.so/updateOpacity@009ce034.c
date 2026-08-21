
/* cocos2d::renderer::Assembler::updateOpacity(unsigned long, unsigned char) */

void __thiscall
cocos2d::renderer::Assembler::updateOpacity(Assembler *this,ulong param_1,uchar param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  short sVar6;
  RenderData *this_00;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  uchar *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (((*(long *)(this + 0x80) != 0) && (*(RenderDataList **)(this + 0x38) != (RenderDataList *)0x0)
      ) && (*(long *)(this + 0x70) != 0)) {
    lVar13 = *(long *)(this + 0x40);
    iVar3 = *(int *)(lVar13 + param_1 * 0x20 + 8);
    uVar1 = (long)iVar3;
    if (iVar3 < 0) {
      uVar1 = param_1;
    }
    this_00 = (RenderData *)RenderDataList::getRenderData(*(RenderDataList **)(this + 0x38),uVar1);
    if (this_00 != (RenderData *)0x0) {
      uVar12 = *(uint *)(this_00 + 8);
      uVar2 = *(uint *)(this + 0x58);
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar12 / uVar2;
      }
      lVar7 = RenderData::getVertices(this_00);
      plVar9 = *(long **)(lVar13 + param_1 * 0x20);
      lVar13 = *(long *)(this + 0x68);
      puVar14 = (uchar *)(lVar7 + lVar13);
      puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
      sVar6 = Pass::getState(*(Pass **)*puVar8,3);
      if (sVar6 == 1) {
        if (uVar2 <= uVar12) {
          fVar5 = (float)param_2 / 255.0;
          if (uVar2 == 1) {
            fVar15 = (float)NEON_ucvtf((uint)puVar14[-2]);
            fVar17 = (float)NEON_ucvtf((uint)puVar14[-3]);
            fVar16 = (float)NEON_ucvtf((uint)((uchar *)(lVar7 + lVar13))[-1]);
            puVar14[-2] = (uchar)(int)(fVar5 * fVar15);
            puVar14[-3] = (uchar)(int)(fVar5 * fVar17);
            puVar14[-1] = (uchar)(int)(fVar5 * fVar16);
            *(uchar *)(lVar7 + lVar13) = param_2;
            if (1 < uVar4) {
              puVar10 = (undefined1 *)(lVar7 + lVar13);
              uVar12 = 1;
              do {
                uVar12 = uVar12 + 1;
                *puVar10 = (char)(int)(fVar5 * (float)param_2);
                puVar10[1] = param_2;
                fVar15 = (float)NEON_ucvtf((uint)(byte)puVar10[-1]);
                puVar10[-1] = (char)(int)(fVar5 * fVar15);
                fVar15 = (float)NEON_ucvtf((uint)(byte)puVar10[-2]);
                puVar10[-2] = (char)(int)(fVar5 * fVar15);
                puVar10 = puVar10 + 1;
              } while (uVar12 < uVar4);
            }
          }
          else {
            uVar12 = 0;
            pbVar11 = (byte *)(lVar7 + lVar13 + -1);
            do {
              uVar12 = uVar12 + 1;
              pbVar11[1] = param_2;
              fVar15 = (float)NEON_ucvtf((uint)*pbVar11);
              fVar16 = (float)NEON_ucvtf((uint)pbVar11[-1]);
              *pbVar11 = (byte)(int)(fVar5 * fVar15);
              pbVar11[-1] = (byte)(int)(fVar5 * fVar16);
              fVar15 = (float)NEON_ucvtf((uint)pbVar11[-2]);
              pbVar11[-2] = (byte)(int)(fVar5 * fVar15);
              pbVar11 = pbVar11 + uVar2;
            } while (uVar12 < uVar4);
          }
        }
      }
      else if (uVar2 <= uVar12) {
        uVar12 = 0;
        do {
          uVar12 = uVar12 + 1;
          *puVar14 = param_2;
          puVar14 = puVar14 + uVar2;
        } while (uVar12 < uVar4);
      }
      **(uint **)(this + 0x18) = **(uint **)(this + 0x18) & 0xfffffffe;
    }
  }
  return;
}

