
void FUN_00fd6280(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  v8::internal::Heap::IterateStrongRoots(*(Heap **)(param_1 + 0x10),param_1 + 8,3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8);
  uVar5 = *(ulong *)(lVar3 + 0x68);
  uVar7 = *(ulong *)((uVar5 - 4 & 0xfffffffffffc0000) + 0xe0);
  uVar6 = *(ulong *)(*(long *)(lVar3 + 0xf0) + 0x20) & 0xfffffffffffc0000;
  if (uVar7 == uVar6) {
    return;
  }
  while( true ) {
    uVar4 = *(ulong *)(uVar6 + 0xe0);
    if (uVar7 == uVar4) {
      FUN_00fdb304(param_1,uVar6,*(undefined8 *)(uVar6 + 0x20),uVar5);
      return;
    }
    uVar1 = *(ulong *)(uVar6 + 0x28);
    uVar2 = uVar5;
    if (((uVar1 != uVar5) && (uVar2 = uVar1, uVar5 < uVar1)) && (*(ulong *)(uVar6 + 0x20) <= uVar5))
    break;
    FUN_00fdb304(param_1,uVar6,*(ulong *)(uVar6 + 0x20),uVar2);
    uVar6 = uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","limit == end || !page->Contains(end)");
}

