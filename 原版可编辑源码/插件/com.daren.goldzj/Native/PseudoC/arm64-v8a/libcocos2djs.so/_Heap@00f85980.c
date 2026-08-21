
/* v8::internal::Heap::~Heap() */

void __thiscall v8::internal::Heap::~Heap(Heap *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  MemoryAllocator *this_00;
  ArrayBufferCollector *this_01;
  MarkCompactCollector *this_02;
  __shared_weak_count *this_03;
  void *pvVar9;
  
  pvVar6 = *(void **)(this + 0xc20);
  *(undefined8 *)(this + 0xc20) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0xc08);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0xc10) = pvVar6;
    operator_delete(pvVar6);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,v8::internal::RetainingPathOption>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::RetainingPathOption>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::RetainingPathOption>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,v8::internal::RetainingPathOption>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::RetainingPathOption>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::RetainingPathOption>>>
             *)(this + 0xbf0),*(__tree_node **)(this + 0xbf8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
             *)(this + 0xbd8),*(__tree_node **)(this + 0xbe0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>>>
             *)(this + 0xbc0),*(__tree_node **)(this + 0xbc8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
             *)(this + 0xba8),*(__tree_node **)(this + 0xbb0));
  puVar4 = *(void **)(this + 0xb88);
  while (puVar4 != (void *)0x0) {
    pvVar6 = (void *)*puVar4;
    operator_delete(puVar4);
    puVar4 = pvVar6;
  }
  pvVar6 = *(void **)(this + 0xb78);
  *(undefined8 *)(this + 0xb78) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0xb50));
  base::Mutex::~Mutex((Mutex *)(this + 0xb18));
  pvVar6 = *(void **)(this + 0xb00);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0xb08) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0xae8);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0xaf0) = pvVar6;
    operator_delete(pvVar6);
  }
  puVar4 = *(void **)(this + 0x8a8);
  while (puVar4 != (void *)0x0) {
    pvVar6 = (void *)*puVar4;
    operator_delete(puVar4);
    puVar4 = pvVar6;
  }
  pvVar6 = *(void **)(this + 0x898);
  *(undefined8 *)(this + 0x898) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x870);
  *(undefined8 *)(this + 0x870) = 0;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)((long)pvVar6 + 8) != 0) {
      *(undefined8 *)(*(long *)((long)pvVar6 + 8) + 8) = 0;
    }
    operator_delete(pvVar6);
  }
  plVar7 = *(long **)(this + 0x868);
  *(undefined8 *)(this + 0x868) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  pvVar6 = *(void **)(this + 0x860);
  *(undefined8 *)(this + 0x860) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x858);
  *(undefined8 *)(this + 0x858) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x850);
  *(undefined8 *)(this + 0x850) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x848);
  *(undefined8 *)(this + 0x848) = 0;
  if (pvVar6 != (void *)0x0) {
    this_03 = *(__shared_weak_count **)((long)pvVar6 + 0x10);
    if (this_03 != (__shared_weak_count *)0x0) {
      p_Var1 = this_03 + 8;
      do {
        lVar8 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)this_03 + 0x10))(this_03);
        std::__ndk1::__shared_weak_count::__release_weak(this_03);
      }
    }
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x840);
  *(undefined8 *)(this + 0x840) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x838);
  *(undefined8 *)(this + 0x838) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  lVar8 = *(long *)(this + 0x830);
  *(undefined8 *)(this + 0x830) = 0;
  if (lVar8 != 0) {
    FUN_00fa4710(this + 0x830);
  }
  pvVar6 = *(void **)(this + 0x828);
  *(undefined8 *)(this + 0x828) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  this_00 = *(MemoryAllocator **)(this + 0x820);
  *(undefined8 *)(this + 0x820) = 0;
  if (this_00 != (MemoryAllocator *)0x0) {
    MemoryAllocator::~MemoryAllocator(this_00);
    operator_delete(this_00);
  }
  this_01 = *(ArrayBufferCollector **)(this + 0x818);
  *(undefined8 *)(this + 0x818) = 0;
  if (this_01 != (ArrayBufferCollector *)0x0) {
    ArrayBufferCollector::~ArrayBufferCollector(this_01);
    operator_delete(this_01);
  }
  pvVar6 = *(void **)(this + 0x810);
  *(undefined8 *)(this + 0x810) = 0;
  if (pvVar6 != (void *)0x0) {
    puVar4 = *(void **)((long)pvVar6 + 0x30);
    while (puVar4 != (void *)0x0) {
      pvVar9 = (void *)*puVar4;
      operator_delete(puVar4);
      puVar4 = pvVar9;
    }
    pvVar9 = *(void **)((long)pvVar6 + 0x20);
    *(undefined8 *)((long)pvVar6 + 0x20) = 0;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    base::Semaphore::~Semaphore((Semaphore *)((long)pvVar6 + 0x10));
    operator_delete(pvVar6);
  }
  this_02 = *(MarkCompactCollector **)(this + 0x800);
  *(undefined8 *)(this + 0x800) = 0;
  if (this_02 != (MarkCompactCollector *)0x0) {
    MarkCompactCollector::~MarkCompactCollector(this_02);
    operator_delete(this_02);
  }
  pvVar6 = *(void **)(this + 0x7f8);
  *(undefined8 *)(this + 0x7f8) = 0;
  if (pvVar6 != (void *)0x0) {
    base::Mutex::~Mutex((Mutex *)((long)pvVar6 + 0x1130));
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x610);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x618) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x5f8);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x600) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 200);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar6;
    operator_delete(pvVar6);
  }
  puVar4 = *(void **)(this + 0x10);
  while (puVar4 != (void *)0x0) {
    pvVar6 = (void *)*puVar4;
    puVar5 = (void *)puVar4[5];
    while (puVar5 != (void *)0x0) {
      pvVar9 = (void *)*puVar5;
      operator_delete(puVar5);
      puVar5 = pvVar9;
    }
    pvVar9 = (void *)puVar4[3];
    puVar4[3] = 0;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    operator_delete(puVar4);
    puVar4 = pvVar6;
  }
  pvVar6 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}

