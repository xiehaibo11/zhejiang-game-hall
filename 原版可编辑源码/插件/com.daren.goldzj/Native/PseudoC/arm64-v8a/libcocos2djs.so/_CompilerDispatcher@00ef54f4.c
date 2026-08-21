
/* v8::internal::CompilerDispatcher::~CompilerDispatcher() */

void __thiscall v8::internal::CompilerDispatcher::~CompilerDispatcher(CompilerDispatcher *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  __shared_weak_count *this_00;
  void *pvVar6;
  CancelableTaskManager *this_01;
  IdentityMapBase *this_02;
  
  if (*(char *)(*(long *)(this + 0x48) + 0x88) == '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","task_manager_->canceled()");
  }
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x170));
  base::ConditionVariable::~ConditionVariable((ConditionVariable *)(this + 0x138));
  puVar4 = *(void **)(this + 0x118);
  while (puVar4 != (void *)0x0) {
    pvVar6 = (void *)*puVar4;
    operator_delete(puVar4);
    puVar4 = pvVar6;
  }
  pvVar6 = *(void **)(this + 0x108);
  *(undefined8 *)(this + 0x108) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  puVar4 = *(void **)(this + 0xf0);
  while (puVar4 != (void *)0x0) {
    pvVar6 = (void *)*puVar4;
    operator_delete(puVar4);
    puVar4 = pvVar6;
  }
  pvVar6 = *(void **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0xb0));
  this_02 = (IdentityMapBase *)(this + 0x70);
  *(undefined ***)this_02 = &PTR__IdentityMap_01ca43a8;
  IdentityMapBase::Clear(this_02);
  IdentityMapBase::~IdentityMapBase(this_02);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
             *)(this + 0x58),*(__tree_node **)(this + 0x60));
  this_01 = *(CancelableTaskManager **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (this_01 != (CancelableTaskManager *)0x0) {
    CancelableTaskManager::~CancelableTaskManager(this_01);
    operator_delete(this_01);
  }
  this_00 = *(__shared_weak_count **)(this + 0x28);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

