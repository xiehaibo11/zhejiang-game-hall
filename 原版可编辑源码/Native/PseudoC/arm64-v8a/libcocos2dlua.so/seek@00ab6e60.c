
/* fairygui::ByteBuffer::seek(int, int) */

bool __thiscall fairygui::ByteBuffer::seek(ByteBuffer *this,int param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  lVar9 = (long)*(int *)(this + 0x10);
  lVar7 = *(long *)(this + 8);
  lVar2 = (long)param_1 + 1;
  iVar4 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = (int)lVar2;
  if (param_2 < *(char *)(lVar7 + lVar9 + param_1)) {
    iVar8 = param_1 + 2;
                    /* try { // try from 00ab6e8c to 00bb6f67 has its CatchHandler @ 00ab7218 */
    *(int *)(this + 0x1c) = iVar8;
    if (*(char *)(lVar7 + lVar9 + lVar2) == '\x01') {
      iVar8 = iVar8 + param_2 * 2;
      *(int *)(this + 0x1c) = iVar8 + 2;
      puVar3 = (undefined1 *)(lVar7 + lVar9 + iVar8);
      if (this[0x18] == (ByteBuffer)0x0) {
        uVar6 = (uint)CONCAT11(*puVar3,puVar3[1]);
      }
      else {
        uVar6 = (uint)CONCAT11(puVar3[1],*puVar3);
      }
    }
    else {
      iVar8 = iVar8 + param_2 * 4;
      *(int *)(this + 0x1c) = iVar8 + 4;
      pbVar1 = (byte *)(lVar7 + (*(int *)(this + 0x10) + iVar8));
      if (this[0x18] == (ByteBuffer)0x0) {
        uVar6 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 |
                (uint)pbVar1[3];
      }
      else {
        uVar6 = CONCAT13(pbVar1[3],CONCAT12(pbVar1[2],CONCAT11(pbVar1[1],*pbVar1)));
      }
    }
    bVar5 = 0 < (int)uVar6;
    iVar8 = uVar6 + param_1;
    if ((int)uVar6 < 1) {
      iVar8 = iVar4;
    }
  }
  else {
    bVar5 = false;
    iVar8 = iVar4;
  }
  *(int *)(this + 0x1c) = iVar8;
  return bVar5;
}

