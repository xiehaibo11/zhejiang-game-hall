
void FUN_00fdac6c(ObjectVisitor *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong local_48;
  
  puVar5 = (undefined8 *)(param_2 + 0x68);
  puVar3 = (uint *)*puVar5;
  uVar6 = *(ulong *)(((ulong)(puVar3 + -1) & 0xfffffffffffc0000) + 0xe0);
  uVar4 = *(ulong *)(*(long *)(param_2 + 0xf0) + 0x20) & 0xfffffffffffc0000;
  if (uVar6 != uVar4) {
    while( true ) {
      uVar7 = *(ulong *)(uVar4 + 0xe0);
      puVar9 = *(uint **)(uVar4 + 0x20);
      puVar1 = puVar5;
      if (uVar6 != uVar7) {
        puVar1 = (undefined8 *)(uVar4 + 0x28);
      }
      puVar8 = (uint *)*puVar1;
      if (((puVar8 != puVar3) && (puVar9 <= puVar3)) && (puVar3 < *(uint **)(uVar4 + 0x28))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",&DAT_019c5355);
      }
      for (; puVar9 < puVar8; puVar9 = (uint *)((long)puVar9 + (long)iVar2)) {
        local_48 = (long)puVar9 + 1;
        uVar4 = local_48 & 0xffffffff00000000;
        if ((*(ushort *)((uVar4 | 7) + (ulong)*puVar9) | 1) != 0xa1) {
          v8::internal::HeapObject::Iterate((HeapObject *)&local_48,param_1);
          uVar4 = local_48 & 0xffffffff00000000;
        }
        iVar2 = v8::internal::HeapObject::SizeFromMap
                          ((HeapObject *)&local_48,uVar4 | *(uint *)(local_48 - 1));
      }
      if (uVar6 == uVar7) break;
      puVar3 = (uint *)*puVar5;
      uVar4 = uVar7;
    }
  }
  return;
}

