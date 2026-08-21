
/* btHeightfieldTerrainShape::getRawHeightFieldValue(int, int) const */

undefined4 __thiscall
btHeightfieldTerrainShape::getRawHeightFieldValue
          (btHeightfieldTerrainShape *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  float fVar7;
  
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 == 5) {
    fVar7 = *(float *)(this + 100);
    uVar2 = NEON_ucvtf((uint)*(byte *)(*(long *)(this + 0x68) +
                                      (long)(param_1 + *(int *)(this + 0x4c) * param_2)));
    uVar4 = (undefined1)uVar2;
    uVar5 = (undefined1)((uint)uVar2 >> 8);
    uVar6 = (undefined2)((uint)uVar2 >> 0x10);
  }
  else {
    if (iVar1 != 3) {
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      if (iVar1 == 0) {
        return *(undefined4 *)
                (*(long *)(this + 0x68) + (long)(param_1 + *(int *)(this + 0x4c) * param_2) * 4);
      }
      goto LAB_01229304;
    }
    fVar7 = *(float *)(this + 100);
    fVar3 = (float)(int)*(short *)(*(long *)(this + 0x68) +
                                  (long)(param_1 + *(int *)(this + 0x4c) * param_2) * 2);
    uVar4 = SUB41(fVar3,0);
    uVar5 = (undefined1)((uint)fVar3 >> 8);
    uVar6 = (undefined2)((uint)fVar3 >> 0x10);
  }
  fVar7 = fVar7 * (float)CONCAT22(uVar6,CONCAT11(uVar5,uVar4));
  uVar4 = SUB41(fVar7,0);
  uVar5 = (undefined1)((uint)fVar7 >> 8);
  uVar6 = (undefined2)((uint)fVar7 >> 0x10);
LAB_01229304:
  return CONCAT22(uVar6,CONCAT11(uVar5,uVar4));
}

