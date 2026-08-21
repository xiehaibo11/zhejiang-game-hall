
/* v8::internal::ArrayList::New(v8::internal::Isolate*, int) */

ulong * v8::internal::ArrayList::New(Isolate *param_1,int param_2)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)Factory::NewFixedArray((Factory *)param_1,param_2 + 1,0);
  uVar3 = *puVar1;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x1b8);
  if (iVar2 != 0) {
    Heap::VerifyObjectLayoutChange
              ((Heap *)(uVar3 & 0xffffffff00000000 | 0x8850),uVar3,*(undefined8 *)(param_1 + 0x1b8))
    ;
  }
  *(int *)(uVar3 - 1) = iVar2;
  *(undefined4 *)(*puVar1 + 7) = 0;
  return puVar1;
}

