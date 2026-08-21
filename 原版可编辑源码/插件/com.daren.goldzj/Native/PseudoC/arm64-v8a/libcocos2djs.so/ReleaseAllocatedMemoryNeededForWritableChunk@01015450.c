
/* v8::internal::MemoryChunk::ReleaseAllocatedMemoryNeededForWritableChunk() */

void v8::internal::MemoryChunk::ReleaseAllocatedMemoryNeededForWritableChunk(void)

{
  undefined8 *puVar1;
  long *in_x0;
  void *pvVar2;
  Malloced *pMVar3;
  long *plVar4;
  void *in_x1;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  Mutex *pMVar5;
  undefined8 *puVar6;
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  *p_Var7;
  LocalArrayBufferTracker *this;
  ulong uVar8;
  
  pMVar5 = (Mutex *)in_x0[0x14];
  if (pMVar5 != (Mutex *)0x0) {
    base::Mutex::~Mutex(pMVar5);
    operator_delete(pMVar5);
    in_x0[0x14] = 0;
    in_x1 = extraout_x1;
  }
  pMVar5 = (Mutex *)in_x0[0x16];
  if (pMVar5 != (Mutex *)0x0) {
    base::Mutex::~Mutex(pMVar5);
    operator_delete(pMVar5);
    in_x0[0x16] = 0;
    in_x1 = extraout_x1_00;
  }
  puVar6 = (undefined8 *)in_x0[0x22];
  if (puVar6 != (undefined8 *)0x0) {
    std::__ndk1::
    __tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>::
    destroy((__tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
             *)(puVar6 + 3),(__tree_node *)puVar6[4]);
    pvVar2 = (void *)*puVar6;
    if (pvVar2 != (void *)0x0) {
      puVar6[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar6);
    in_x0[0x22] = 0;
    in_x1 = extraout_x1_01;
  }
  puVar6 = (undefined8 *)in_x0[6];
  if (puVar6 != (undefined8 *)0x0) {
    puVar1 = puVar6;
    for (uVar8 = *in_x0 + 0xfffU >> 0xc; uVar8 != 0; uVar8 = uVar8 - 1) {
      pMVar3 = (Malloced *)*puVar1;
      *puVar1 = 0;
      if (pMVar3 != (Malloced *)0x0) {
        Malloced::operator_delete(pMVar3,in_x1);
        in_x1 = extraout_x1_02;
      }
      puVar1 = puVar1 + 1;
    }
    AlignedFree((void *)((long)(puVar6 + -1) - (puVar6[-1] + 7 & 0xfffffffffffffff8)));
    in_x0[6] = 0;
    in_x1 = extraout_x1_03;
  }
  puVar6 = (undefined8 *)in_x0[0xe];
  if (puVar6 != (undefined8 *)0x0) {
    puVar1 = puVar6;
    for (uVar8 = *in_x0 + 0xfffU >> 0xc; uVar8 != 0; uVar8 = uVar8 - 1) {
      pMVar3 = (Malloced *)*puVar1;
      *puVar1 = 0;
      if (pMVar3 != (Malloced *)0x0) {
        Malloced::operator_delete(pMVar3,in_x1);
        in_x1 = extraout_x1_04;
      }
      puVar1 = puVar1 + 1;
    }
    AlignedFree((void *)((long)(puVar6 + -1) - (puVar6[-1] + 7 & 0xfffffffffffffff8)));
    in_x0[0xe] = 0;
    in_x1 = extraout_x1_05;
  }
  puVar6 = (undefined8 *)in_x0[7];
  if (puVar6 != (undefined8 *)0x0) {
    puVar1 = puVar6;
    for (uVar8 = *in_x0 + 0xfffU >> 0xc; uVar8 != 0; uVar8 = uVar8 - 1) {
      pMVar3 = (Malloced *)*puVar1;
      *puVar1 = 0;
      if (pMVar3 != (Malloced *)0x0) {
        Malloced::operator_delete(pMVar3,in_x1);
        in_x1 = extraout_x1_06;
      }
      puVar1 = puVar1 + 1;
    }
    AlignedFree((void *)((long)(puVar6 + -1) - (puVar6[-1] + 7 & 0xfffffffffffffff8)));
    in_x0[7] = 0;
  }
  plVar4 = (long *)in_x0[0xf];
  if (plVar4 != (long *)0x0) {
    in_x0[0xf] = 0;
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)in_x0[0x10];
  if (plVar4 != (long *)0x0) {
    in_x0[0x10] = 0;
    (**(code **)(*plVar4 + 8))();
  }
  p_Var7 = (__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
            *)in_x0[0x11];
  if (p_Var7 != (__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
                 *)0x0) {
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy(p_Var7,*(__tree_node **)(p_Var7 + 8));
    operator_delete(p_Var7);
    in_x0[0x11] = 0;
  }
  p_Var7 = (__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
            *)in_x0[0x12];
  if (p_Var7 != (__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
                 *)0x0) {
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy(p_Var7,*(__tree_node **)(p_Var7 + 8));
    operator_delete(p_Var7);
    in_x0[0x12] = 0;
  }
  this = (LocalArrayBufferTracker *)in_x0[0x1f];
  if (this != (LocalArrayBufferTracker *)0x0) {
    LocalArrayBufferTracker::~LocalArrayBufferTracker(this);
    operator_delete(this);
    in_x0[0x1f] = 0;
  }
  if ((void *)in_x0[0x21] != (void *)0x0) {
    free((void *)in_x0[0x21]);
    in_x0[0x21] = 0;
  }
  return;
}

