
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::EnsureCapacity(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, int) */

void v8::internal::
     BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
     EnsureCapacity(undefined8 param_1,ulong *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong local_68;
  
  if (0x7fffff < (uint)(param_3 + (*(int *)(*param_2 + 0x13) >> 1))) {
    uVar2 = *(uint *)(*param_2 + 7);
    plVar5 = (long *)IterationIndices(param_1,param_2);
    if (1 < (int)uVar2) {
      iVar7 = 0;
      uVar8 = 0;
      uVar9 = 0x200;
      do {
        uVar8 = uVar8 + 1;
        lVar1 = *param_2 +
                (long)(int)((*(uint *)(*plVar5 + (long)iVar7 + 7) & 0x7ffffffe) * 2 + 0x14);
        uVar6 = *param_2 & 0xffffffff00000000;
        uVar3 = *(uint *)((uVar6 | *(uint *)(lVar1 + 7)) + 7);
        uVar10 = uVar6 | *(uint *)(lVar1 + 7);
        uVar4 = uVar3 & 0x1fe | uVar9;
        if ((uVar3 >> 4 & 1) != (*(byte *)(uVar10 + 7) & 0x10) >> 4) {
          local_68 = uVar6 | *(uint *)(uVar10 + 0xf);
          DependentCode::DeoptimizeDependentCodeGroup(&local_68,param_1,2);
        }
        iVar7 = iVar7 + 4;
        uVar9 = uVar9 + 0x200;
        *(uint *)(uVar10 + 7) = uVar4;
      } while (uVar8 < uVar2 >> 1);
    }
    *(uint *)(*param_2 + 0x13) = uVar2 + 2 & 0xfffffffe;
  }
  HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::EnsureCapacity
            (param_1,param_2,param_3,0);
  return;
}

