
/* v8::internal::ArrayList::EnsureSpace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ArrayList>, int) */

ulong * v8::internal::ArrayList::EnsureSpace(undefined8 param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  iVar4 = *(int *)(*param_2 + 3) >> 1;
  puVar3 = param_2;
  if (iVar4 <= param_3) {
    iVar1 = param_3 + 1;
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = param_3 + 2;
    }
    iVar2 = iVar2 >> 1;
    if (iVar2 < 3) {
      iVar2 = 2;
    }
    puVar3 = (ulong *)Factory::CopyFixedArrayAndGrow(param_1,param_2,(iVar2 + iVar1) - iVar4);
  }
  if (iVar4 == 0) {
    uVar6 = *puVar3;
    uVar5 = *(undefined8 *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20) + 0x1b8);
    iVar4 = (int)uVar5;
    if (iVar4 != 0) {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar6 & 0xffffffff00000000 | 0x8850),uVar6,uVar5);
    }
    *(int *)(uVar6 - 1) = iVar4;
    *(undefined4 *)(*puVar3 + 7) = 0;
  }
  return puVar3;
}

