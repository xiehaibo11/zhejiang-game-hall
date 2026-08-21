
Node * FUN_015ddc44(undefined8 *param_1,long param_2,Node *param_3)

{
  ulong uVar1;
  Zone *this;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Node *local_50;
  Node *local_48;
  
  if ((param_3 != (Node *)0x0) && (*(int *)(param_1 + 2) != -1)) {
    local_50 = (Node *)0x0;
    local_48 = (Node *)0x0;
    uVar1 = v8::internal::compiler::WasmGraphBuilder::ThrowsException
                      ((WasmGraphBuilder *)param_1[1],param_3,&local_48,&local_50);
    if ((uVar1 & 1) != 0) {
      this = *(Zone **)(param_2 + 0x70);
      puVar4 = (undefined4 *)*param_1;
      puVar3 = *(undefined4 **)(this + 0x10);
      if ((ulong)(*(long *)(this + 0x18) - (long)puVar3) < 0x38) {
        puVar3 = (undefined4 *)v8::internal::Zone::NewExpand(this,0x38);
      }
      else {
        *(undefined4 **)(this + 0x10) = puVar3 + 0xe;
      }
      *puVar3 = 2;
      *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
      puVar5 = (undefined8 *)(puVar3 + 2);
      *puVar5 = *(undefined8 *)(puVar4 + 2);
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar4 + 4);
      uVar8 = *(undefined8 *)(puVar4 + 8);
      uVar7 = *(undefined8 *)(puVar4 + 6);
      *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(puVar4 + 10);
      *(undefined8 *)(puVar3 + 8) = uVar8;
      *(undefined8 *)(puVar3 + 6) = uVar7;
      *puVar4 = 1;
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 10) = 0;
      *puVar5 = local_48;
      lVar2 = FUN_015ddde4(param_2,puVar3);
      *(Node **)(lVar2 + 8) = local_50;
      *(Node **)(lVar2 + 0x10) = local_50;
      plVar6 = *(long **)(*(long *)(param_2 + 0xd8) +
                          (ulong)(~*(uint *)(param_1 + 2) +
                                 (int)((ulong)(*(long *)(param_2 + 0xd8) - *(long *)(param_2 + 0xd0)
                                              ) >> 3) * -0xf0f0f0f) * -0x88 + -0x10);
      FUN_015ddeb8(param_1,param_2,lVar2,*plVar6);
      if (plVar6[1] != 0) {
        local_50 = (Node *)v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                                     ((WasmGraphBuilder *)param_1[1],4,*(undefined8 *)(*plVar6 + 8),
                                      plVar6[1],local_50);
      }
      plVar6[1] = (long)local_50;
      *param_1 = puVar3;
      *(undefined8 **)(param_1[1] + 0x18) = puVar5;
      *(undefined4 **)(param_1[1] + 0x20) = puVar3 + 4;
      *(undefined4 **)(param_1[1] + 0x28) = puVar3 + 6;
    }
  }
  return param_3;
}

