
void cpArbiterSetContactPointSet(long param_1,uint *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar4 = *param_2;
  uVar5 = (ulong)uVar4;
  if (uVar4 == *(uint *)(param_1 + 0x58)) {
    if (*(char *)(param_1 + 0x88) == '\0') {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 1);
    }
    else {
      fVar8 = (float)param_2[2];
      *(float *)(param_1 + 0x68) = -(float)param_2[1];
      *(float *)(param_1 + 0x6c) = -fVar8;
    }
    if (0 < (int)uVar4) {
      if (*(char *)(param_1 + 0x88) == '\0') {
        lVar6 = 0;
        pfVar7 = (float *)(param_2 + 6);
        do {
          pfVar1 = pfVar7 + -3;
          fVar8 = pfVar7[-2];
          fVar9 = pfVar7[-1];
          fVar11 = *pfVar7;
          fVar10 = *(float *)(*(long *)(param_1 + 0x28) + 0x2c);
          uVar5 = uVar5 - 1;
          pfVar2 = (float *)(*(long *)(param_1 + 0x60) + lVar6);
          pfVar7 = pfVar7 + 5;
          *pfVar2 = *pfVar1 - *(float *)(*(long *)(param_1 + 0x28) + 0x28);
          pfVar2[1] = fVar8 - fVar10;
          fVar8 = *(float *)(*(long *)(param_1 + 0x30) + 0x2c);
          lVar3 = *(long *)(param_1 + 0x60) + lVar6;
          lVar6 = lVar6 + 0x38;
          *(float *)(lVar3 + 8) = fVar9 - *(float *)(*(long *)(param_1 + 0x30) + 0x28);
          *(float *)(lVar3 + 0xc) = fVar11 - fVar8;
        } while (uVar5 != 0);
      }
      else {
        lVar6 = 0;
        pfVar7 = (float *)(param_2 + 6);
        do {
          pfVar1 = pfVar7 + -1;
          fVar8 = *pfVar7;
          fVar10 = pfVar7[-3];
          fVar11 = pfVar7[-2];
          fVar9 = *(float *)(*(long *)(param_1 + 0x28) + 0x2c);
          uVar5 = uVar5 - 1;
          pfVar2 = (float *)(*(long *)(param_1 + 0x60) + lVar6);
          pfVar7 = pfVar7 + 5;
          *pfVar2 = *pfVar1 - *(float *)(*(long *)(param_1 + 0x28) + 0x28);
          pfVar2[1] = fVar8 - fVar9;
          fVar8 = *(float *)(*(long *)(param_1 + 0x30) + 0x2c);
          lVar3 = *(long *)(param_1 + 0x60) + lVar6;
          lVar6 = lVar6 + 0x38;
          *(float *)(lVar3 + 8) = fVar10 - *(float *)(*(long *)(param_1 + 0x30) + 0x28);
          *(float *)(lVar3 + 0xc) = fVar11 - fVar8;
        } while (uVar5 != 0);
      }
    }
    return;
  }
  cpMessage("count == arb->count",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpArbiter.c"
            ,0x7e,1,1,"The number of contact points cannot be changed.");
                    /* WARNING: Subroutine does not return */
  abort();
}

