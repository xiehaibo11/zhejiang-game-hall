
/* v8::internal::Serializer::Serializer(v8::internal::Isolate*) */

void __thiscall v8::internal::Serializer::Serializer(Serializer *this,Isolate *param_1)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__Serializer_01cbb9d0;
  *(undefined8 *)(this + 0x60) = 0;
  *(Isolate **)(this + 0x68) = param_1;
  pvVar1 = malloc(0xc0);
  *(void **)(this + 0x70) = pvVar1;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(this + 0x78) = 8;
  *(undefined1 *)((long)pvVar1 + 0x14) = 0;
  *(undefined1 *)((long)pvVar1 + 0x2c) = 0;
  *(undefined1 *)((long)pvVar1 + 0x44) = 0;
  *(undefined1 *)((long)pvVar1 + 0x5c) = 0;
  uVar3 = 4;
  lVar5 = 0x74;
  do {
    uVar3 = uVar3 + 1;
    *(undefined1 *)(*(long *)(this + 0x70) + lVar5) = 0;
    lVar5 = lVar5 + 0x18;
  } while (uVar3 < *(uint *)(this + 0x78));
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  ExternalReferenceEncoder::ExternalReferenceEncoder
            ((ExternalReferenceEncoder *)(this + 0x88),param_1);
  RootIndexMap::RootIndexMap((RootIndexMap *)(this + 0x90),param_1);
  *(undefined8 *)(this + 0xcc) = 0;
  *(undefined8 *)(this + 0xc4) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  SerializerAllocator::SerializerAllocator((SerializerAllocator *)(this + 0xd8),this);
  if (FLAG_serialization_statistics == '\0') {
    *(undefined8 *)(this + 0x1b0) = 0;
    *(undefined8 *)(this + 0x1a8) = 0;
    *(undefined8 *)(this + 0x1c0) = 0;
    *(undefined8 *)(this + 0x1b8) = 0;
    *(undefined8 *)(this + 400) = 0;
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined8 *)(this + 0x1a0) = 0;
    *(undefined8 *)(this + 0x198) = 0;
    *(undefined8 *)(this + 0x170) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined8 *)(this + 0x178) = 0;
  }
  else {
    lVar5 = 0;
    do {
      pvVar1 = operator_new__(0x10e8,(nothrow_t *)&std::nothrow);
      if (pvVar1 == (void *)0x0) {
        plVar2 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar2 + 0x18))();
        pvVar1 = operator_new__(0x10e8,(nothrow_t *)&std::nothrow);
        if (pvVar1 == (void *)0x0) goto LAB_011dcee0;
      }
      *(void **)(this + lVar5 * 8 + 0x168) = pvVar1;
      pvVar1 = operator_new__(0x21d0,(nothrow_t *)&std::nothrow);
      if (pvVar1 == (void *)0x0) {
        plVar2 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar2 + 0x18))();
        pvVar1 = operator_new__(0x21d0,(nothrow_t *)&std::nothrow);
        if (pvVar1 == (void *)0x0) {
LAB_011dcee0:
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
      }
      lVar4 = 0;
      *(void **)(this + lVar5 * 8 + 0x198) = pvVar1;
      do {
        *(undefined4 *)(*(long *)(this + lVar5 * 8 + 0x168) + lVar4 * 4) = 0;
        *(undefined8 *)(*(long *)(this + lVar5 * 8 + 0x198) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x43a);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 6);
  }
  return;
}

