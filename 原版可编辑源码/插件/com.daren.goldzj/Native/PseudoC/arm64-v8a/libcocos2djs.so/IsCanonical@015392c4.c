
/* v8::internal::CharacterRange::IsCanonical(v8::internal::ZoneList<v8::internal::CharacterRange>*)
    */

undefined8 v8::internal::CharacterRange::IsCanonical(ZoneList *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (1 < (int)*(uint *)(param_1 + 0xc)) {
    puVar1 = *(ulong **)param_1;
    lVar3 = (ulong)*(uint *)(param_1 + 0xc) - 1;
    uVar2 = (ulong)*(uint *)((long)puVar1 + 4);
    do {
      puVar1 = puVar1 + 1;
      if ((int)*puVar1 <= (int)uVar2 + 1) {
        return 0;
      }
      uVar2 = *puVar1 >> 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 1;
}

