
/* v8::internal::ScriptContextTable::Extend(v8::internal::Handle<v8::internal::ScriptContextTable>,
   v8::internal::Handle<v8::internal::Context>) */

ulong * v8::internal::ScriptContextTable::Extend(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar2 = *(int *)(*param_1 + 7);
  iVar3 = *(int *)(*param_1 + 3);
  iVar1 = iVar2 >> 1;
  if (((iVar1 < iVar3 >> 1) && (-1 < iVar2)) && (1 < iVar3)) {
    iVar1 = iVar1 + 1;
    if (iVar1 == iVar3 >> 1) {
      if (0x3ffffffd < iVar3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","length < Smi::kMaxValue / 2");
      }
      lVar5 = (ulong)*(uint *)((long)param_2 + 4) << 0x20;
      param_1 = (ulong *)Factory::CopyFixedArrayAndGrow(lVar5,param_1);
      uVar7 = *(ulong *)(lVar5 + 0x1a0);
      uVar6 = *param_1;
      if ((int)uVar7 == 0) {
        *(undefined4 *)(uVar6 - 1) = 0;
      }
      else {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar6 & 0xffffffff00000000 | 0x8850),uVar6,uVar7);
        *(int *)(uVar6 - 1) = (int)uVar7;
        if (((uVar7 & 1) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
          Heap_MarkingBarrierSlow(uVar6,0,uVar7);
        }
      }
    }
    *(int *)(*param_1 + 7) = iVar1 * 2;
    uVar7 = *param_1;
    uVar6 = *param_2;
    lVar5 = uVar7 + (long)(iVar1 * 4);
    *(int *)(lVar5 + 7) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      lVar5 = lVar5 + 7;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar5,uVar6);
        uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar5,uVar6);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",&DAT_019d5aac);
}

