
/* v8::internal::PreparseDataBuilder::DataGatheringScope::Start(v8::internal::DeclarationScope*) */

void __thiscall
v8::internal::PreparseDataBuilder::DataGatheringScope::Start
          (DataGatheringScope *this,DeclarationScope *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Zone *this_00;
  long lVar3;
  undefined8 uVar4;
  
  this_00 = *(Zone **)(*(long *)(*(long *)this + 0x28) + 0x448);
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x50) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x50);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar2 + 10;
  }
  lVar3 = *(long *)this;
  uVar4 = *(undefined8 *)(lVar3 + 0x120);
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[4] = lVar3 + 0x128;
  *puVar2 = uVar4;
  puVar2[1] = 0;
  puVar2[5] = *(long *)(lVar3 + 0x130) - *(long *)(lVar3 + 0x128) >> 3;
  lVar1 = *(long *)(lVar3 + 0x128);
  lVar3 = *(long *)(lVar3 + 0x130);
  puVar2[8] = 0xffffffff;
  *(undefined4 *)(puVar2 + 9) = 0;
  puVar2[6] = lVar3 - lVar1 >> 3;
  puVar2[7] = 0;
  *(byte *)((long)puVar2 + 0x4c) = *(byte *)((long)puVar2 + 0x4c) & 0xfc;
  *(undefined8 **)(this + 8) = puVar2;
  *(undefined8 **)(*(long *)this + 0x120) = puVar2;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(this + 8);
  return;
}

