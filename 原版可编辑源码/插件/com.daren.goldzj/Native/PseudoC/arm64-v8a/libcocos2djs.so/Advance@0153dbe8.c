
/* v8::internal::QuickCheckDetails::Advance(int, bool) */

void v8::internal::QuickCheckDetails::Advance(int param_1,bool param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  puVar4 = (uint *)(ulong)(uint)param_1;
  uVar2 = *puVar4;
  uVar6 = (ulong)uVar2;
  uVar5 = (uint)param_2;
  if (uVar2 == uVar5 || (int)uVar2 < 0) {
    if (0 < (int)uVar2) {
      puVar10 = puVar4 + 2;
      do {
        puVar10[-1] = 0;
        *(undefined1 *)puVar10 = 0;
        uVar6 = uVar6 - 1;
        puVar10 = (uint *)((long)puVar10 + 6);
      } while (uVar6 != 0);
    }
    uVar8 = 0;
  }
  else {
    uVar8 = uVar2 - uVar5;
    if (0 < (int)uVar8) {
      uVar6 = (ulong)uVar8;
      puVar10 = puVar4 + 1;
      do {
        puVar1 = (uint *)((long)puVar10 + (ulong)uVar5 * 6);
        uVar3 = *puVar1;
        uVar6 = uVar6 - 1;
        *(char *)(puVar10 + 1) = (char)puVar1[1];
        *puVar10 = uVar3;
        puVar10 = (uint *)((long)puVar10 + 6);
      } while (uVar6 != 0);
    }
    if ((int)uVar8 < (int)uVar2) {
      lVar7 = (long)(int)uVar8;
      puVar9 = (undefined1 *)((long)puVar4 + (long)(int)uVar8 * 6 + 8);
      do {
        *(undefined4 *)(puVar9 + -4) = 0;
        *puVar9 = 0;
        lVar7 = lVar7 + 1;
        puVar9 = puVar9 + 6;
      } while (lVar7 < (int)*puVar4);
      *puVar4 = *puVar4 - uVar5;
      return;
    }
  }
  *puVar4 = uVar8;
  return;
}

