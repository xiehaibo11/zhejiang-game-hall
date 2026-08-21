
/* v8::internal::SourceTextModule::StoreVariable(v8::internal::Handle<v8::internal::SourceTextModule>,
   int, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::SourceTextModule::StoreVariable(ulong *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  iVar2 = SourceTextModuleDescriptor::GetCellIndexKind(param_2);
  if (iVar2 == 1) {
    uVar1 = *(uint *)(uVar5 + 0x1b);
    iVar2 = param_2 * 4 + -4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar5 = 0;
      goto LAB_0112bab0;
    }
    uVar1 = *(uint *)(uVar5 + 0x1f);
    iVar2 = ~param_2 << 2;
  }
  uVar5 = uVar5 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)uVar1) + (long)iVar2 + 7);
LAB_0112bab0:
  uVar4 = *param_3;
  *(int *)(uVar5 + 3) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar4);
      return;
    }
  }
  return;
}

