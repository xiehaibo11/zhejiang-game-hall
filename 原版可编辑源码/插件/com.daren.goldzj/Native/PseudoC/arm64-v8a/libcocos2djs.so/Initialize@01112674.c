
/* v8::internal::Oddball::Initialize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Oddball>, char const*,
   v8::internal::Handle<v8::internal::Object>, char const*, unsigned char) */

void v8::internal::Oddball::Initialize
               (Factory *param_1,ulong *param_2,char *param_3,ulong *param_4,char *param_5,
               uint param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  char *local_60;
  size_t sStack_58;
  
  sStack_58 = strlen(param_3);
  local_60 = param_3;
  puVar1 = (ulong *)Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  sStack_58 = strlen(param_5);
  local_60 = param_5;
  puVar2 = (ulong *)Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  uVar5 = *param_4;
  if ((uVar5 & 1) == 0) {
    uVar3 = *param_2;
    dVar6 = (double)((int)uVar5 >> 1);
  }
  else {
    uVar3 = *param_2;
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42) {
      *(undefined8 *)(uVar3 + 3) = *(undefined8 *)(uVar5 + 3);
      goto LAB_01112728;
    }
    dVar6 = *(double *)(uVar5 + 3);
  }
  *(double *)(uVar3 + 3) = dVar6;
LAB_01112728:
  uVar3 = *param_2;
  uVar5 = *param_4;
  *(int *)(uVar3 + 0xf) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 0xf,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0xf,uVar5);
    }
  }
  uVar3 = *param_2;
  uVar5 = *puVar1;
  *(int *)(uVar3 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 0xb,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0xb,uVar5);
    }
  }
  uVar3 = *param_2;
  uVar5 = *puVar2;
  *(int *)(uVar3 + 0x13) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 0x13,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0x13,uVar5);
    }
  }
  *(uint *)(*param_2 + 0x17) = (param_6 & 0xff) << 1;
  return;
}

