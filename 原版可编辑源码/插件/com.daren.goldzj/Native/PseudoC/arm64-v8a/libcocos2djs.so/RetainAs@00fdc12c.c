
/* v8::internal::MarkCompactWeakObjectRetainer::RetainAs(v8::internal::Object) */

ulong __thiscall
v8::internal::MarkCompactWeakObjectRetainer::RetainAs(undefined8 param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong local_28;
  
  uVar7 = param_2 - (param_2 & 0xfffffffffffc0000);
  puVar1 = (uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) + (uVar7 >> 7 & 0x1ffffff) * 4)
  ;
  uVar3 = 1 << (ulong)((uint)(uVar7 >> 2) & 0x1f);
  if ((*puVar1 & uVar3) != 0) {
    uVar3 = uVar3 << 1;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = 1;
    }
    if ((puVar1[bVar5] & uVar3) != 0) {
      return param_2;
    }
  }
  if ((((param_2 & 1) == 0) ||
      (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x55)) ||
     (local_28 = param_2, (*(uint *)(param_2 + 0xf) & 0x1c000000) == 0x10000000)) {
    param_2 = 0;
  }
  else {
    do {
      uVar7 = local_28 & 0xffffffff00000000;
      if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x55) {
        return param_2;
      }
      uVar3 = *(uint *)(local_28 + 7);
      *(undefined4 *)(local_28 + 3) = 0;
      *(undefined4 *)(local_28 + 3) = 0;
      uVar9 = local_28 & 0xfffffffffffc0000;
      *(uint *)(local_28 + 7) = 0;
      *(undefined8 *)(local_28 + 0xf) = 0;
      lVar8 = (local_28 - uVar9 >> 7 & 0x1ffffff) * 4;
      *(undefined4 *)(local_28 + 0xb) = *(undefined4 *)(uVar7 + 0x420);
      uVar4 = 1 << (ulong)((uint)(local_28 - uVar9 >> 2) & 0x1f);
      *(uint *)(local_28 + 0xf) = *(uint *)(local_28 + 0xf) & 0xe3ffffff | 0x10000000;
      uVar2 = *(uint *)(*(long *)(uVar9 + 0x10) + lVar8);
      *(uint *)(*(long *)(uVar9 + 0x10) + lVar8) = uVar2 | uVar4;
      if ((uVar2 & uVar4) == 0) {
        puVar1 = (uint *)(*(long *)(uVar9 + 0x10) + (local_28 + ~uVar9 >> 7 & 0x1ffffff) * 4);
        uVar2 = 1 << (ulong)((uint)(local_28 + ~uVar9 >> 2) & 0x1f);
        if ((*puVar1 & uVar2) != 0) {
          uVar2 = uVar2 << 1;
          bVar5 = uVar2 == 0;
          uVar4 = puVar1[bVar5];
          if (bVar5) {
            uVar2 = 1;
          }
          puVar1[bVar5] = uVar4 | uVar2;
          if ((uVar4 & uVar2) == 0) {
            iVar6 = HeapObject::SizeFromMap
                              ((HeapObject *)&local_28,
                               local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1));
            *(long *)(uVar9 + 0x68) = *(long *)(uVar9 + 0x68) + (long)iVar6;
          }
        }
      }
      local_28 = uVar7 | uVar3;
    } while ((uVar3 & 1) != 0);
  }
  return param_2;
}

