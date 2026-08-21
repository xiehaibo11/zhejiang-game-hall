
void FUN_015ddeb8(long param_1,long param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  WasmGraphBuilder *this;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  Node *local_60;
  undefined8 local_58;
  
  iVar6 = *param_4;
  if (iVar6 == 3) {
    pNVar4 = *(Node **)(param_4 + 2);
    v8::internal::compiler::WasmGraphBuilder::AppendToMerge
              (*(WasmGraphBuilder **)(param_1 + 8),pNVar4,*(Node **)(param_3 + 2));
    uVar5 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoEffectPhi
                      (*(WasmGraphBuilder **)(param_1 + 8),pNVar4,*(Node **)(param_4 + 4),
                       *(Node **)(param_3 + 4));
    *(undefined8 *)(param_4 + 4) = uVar5;
    lVar8 = *(long *)(param_2 + 0x90);
    this = *(WasmGraphBuilder **)(param_1 + 8);
    iVar6 = (int)*(undefined8 *)(param_2 + 0x98);
    if (-1 < (int)(~(uint)lVar8 + iVar6)) {
      iVar6 = (iVar6 - (uint)lVar8) + -2;
      do {
        uVar5 = 4;
        switch(*(undefined1 *)(lVar8 + (ulong)(iVar6 + 1))) {
        case 0:
          uVar5 = 0;
          break;
        case 1:
          break;
        case 2:
          uVar5 = 5;
          break;
        case 3:
          uVar5 = 0xb;
          break;
        case 4:
          uVar5 = 0xc;
          break;
        case 5:
          uVar5 = 0xd;
          break;
        case 6:
        case 7:
        case 8:
        case 9:
          uVar5 = 7;
          break;
        default:
          goto switchD_015de084_default;
        }
        lVar8 = (ulong)(iVar6 + 1) * 8;
        uVar5 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                          (this,uVar5,pNVar4,*(undefined8 *)(*(long *)(param_4 + 0xc) + lVar8),
                           *(undefined8 *)(*(long *)(param_3 + 0xc) + lVar8));
        *(undefined8 *)(*(long *)(param_4 + 0xc) + lVar8) = uVar5;
        this = *(WasmGraphBuilder **)(param_1 + 8);
        if (iVar6 < 0) break;
        lVar8 = *(long *)(param_2 + 0x90);
        iVar6 = iVar6 + -1;
      } while( true );
    }
    v8::internal::compiler::WasmGraphBuilder::MergeInstanceCacheInto
              (this,(WasmInstanceCacheNodes *)(param_4 + 6),(WasmInstanceCacheNodes *)(param_3 + 6),
               pNVar4);
  }
  else if (iVar6 == 2) {
    local_60 = *(Node **)(param_4 + 2);
    *param_4 = 3;
    local_58 = *(undefined8 *)(param_3 + 2);
    pNVar4 = (Node *)v8::internal::compiler::WasmGraphBuilder::Merge
                               (*(WasmGraphBuilder **)(param_1 + 8),2,&local_60);
    *(Node **)(param_4 + 2) = pNVar4;
    if (*(Node **)(param_3 + 4) != *(Node **)(param_4 + 4)) {
      local_78 = *(Node **)(param_4 + 4);
      pNStack_70 = *(Node **)(param_3 + 4);
      local_68 = pNVar4;
      uVar5 = v8::internal::compiler::WasmGraphBuilder::EffectPhi
                        (*(WasmGraphBuilder **)(param_1 + 8),2,&local_78);
      *(undefined8 *)(param_4 + 4) = uVar5;
    }
    pNVar2 = local_78;
    pNVar3 = pNStack_70;
    for (uVar1 = ~*(uint *)(param_2 + 0x90) + *(int *)(param_2 + 0x98); -1 < (int)uVar1;
        uVar1 = uVar1 - 1) {
      uVar7 = (ulong)uVar1;
      local_78 = *(Node **)(*(long *)(param_4 + 0xc) + uVar7 * 8);
      pNStack_70 = *(Node **)(*(long *)(param_3 + 0xc) + uVar7 * 8);
      if (local_78 != pNStack_70) {
        local_68 = pNVar4;
        uVar5 = v8::internal::compiler::WasmGraphBuilder::Phi
                          (*(WasmGraphBuilder **)(param_1 + 8),
                           *(undefined1 *)(*(long *)(param_2 + 0x90) + uVar7),2,&local_78);
        *(undefined8 *)(*(long *)(param_4 + 0xc) + uVar7 * 8) = uVar5;
        pNVar2 = local_78;
        pNVar3 = pNStack_70;
      }
      pNStack_70 = pNVar3;
      local_78 = pNVar2;
      pNVar2 = local_78;
      pNVar3 = pNStack_70;
    }
    local_78 = pNVar2;
    pNStack_70 = pNVar3;
    v8::internal::compiler::WasmGraphBuilder::NewInstanceCacheMerge
              (*(WasmGraphBuilder **)(param_1 + 8),(WasmInstanceCacheNodes *)(param_4 + 6),
               (WasmInstanceCacheNodes *)(param_3 + 6),pNVar4);
  }
  else {
    if (iVar6 != 1) {
switchD_015de084_default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    *param_4 = 2;
    *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_3 + 4);
    uVar9 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_4 + 10) = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_4 + 8) = uVar9;
    *(undefined8 *)(param_4 + 6) = uVar5;
  }
  *param_3 = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  return;
}

