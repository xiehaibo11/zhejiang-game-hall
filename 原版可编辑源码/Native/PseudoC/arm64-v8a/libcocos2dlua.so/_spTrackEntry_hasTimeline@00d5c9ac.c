
undefined8 _spTrackEntry_hasTimeline(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar1 = *(uint *)(*param_1 + 0xc);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = *(undefined8 **)(*param_1 + 0x10);
    do {
      iVar2 = spTimeline_getPropertyId(*puVar4);
      if (iVar2 == param_2) {
        return 1;
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  return 0;
}

