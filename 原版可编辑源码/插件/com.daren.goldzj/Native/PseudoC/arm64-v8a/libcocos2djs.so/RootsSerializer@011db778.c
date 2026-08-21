
/* v8::internal::RootsSerializer::RootsSerializer(v8::internal::Isolate*, v8::internal::RootIndex)
    */

void __thiscall
v8::internal::RootsSerializer::RootsSerializer
          (RootsSerializer *this,Isolate *param_1,ushort param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Serializer::Serializer((Serializer *)this,param_1);
  *(ushort *)(this + 0x1c8) = param_3;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined ***)this = &PTR__RootsSerializer_01cbb988;
  *(undefined8 *)(this + 0x220) = 0;
  pvVar2 = malloc(0xc0);
  *(void **)(this + 0x218) = pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(this + 0x220) = 8;
  *(undefined1 *)((long)pvVar2 + 0x10) = 0;
  *(undefined1 *)((long)pvVar2 + 0x28) = 0;
  *(undefined1 *)((long)pvVar2 + 0x40) = 0;
  *(undefined1 *)((long)pvVar2 + 0x58) = 0;
  *(undefined1 *)((long)pvVar2 + 0x70) = 0;
  *(undefined1 *)((long)pvVar2 + 0x88) = 0;
  uVar3 = 6;
  lVar4 = 0xa0;
  do {
    uVar3 = uVar3 + 1;
    *(undefined1 *)(*(long *)(this + 0x218) + lVar4) = 0;
    lVar4 = lVar4 + 0x18;
  } while (uVar3 < *(uint *)(this + 0x220));
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  this[0x238] = (RootsSerializer)0x1;
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      uVar1 = uVar3 & 0x3f;
      uVar3 = uVar3 + 1;
      *(ulong *)(this + uVar5 + 0x1d0) = *(ulong *)(this + uVar5 + 0x1d0) | 1L << uVar1;
    } while (param_3 != uVar3);
  }
  return;
}

