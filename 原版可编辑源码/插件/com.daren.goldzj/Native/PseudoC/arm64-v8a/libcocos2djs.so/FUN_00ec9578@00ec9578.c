
void FUN_00ec9578(long *param_1,undefined8 param_2,GlobalBackingStoreRegistry *param_3,void *param_4
                 ,uint param_5,int param_6)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  BackingStore *pBVar4;
  undefined8 *puVar5;
  long lVar6;
  __shared_weak_count *p_Var7;
  long local_58;
  __shared_weak_count *local_50;
  BackingStore *local_48;
  
  v8::internal::GlobalBackingStoreRegistry::Lookup(param_3,param_4,(ulong)param_4);
  lVar6 = *param_1;
  if (lVar6 == 0) {
    v8::internal::BackingStore::WrapAllocation
              ((BackingStore *)&local_48,param_2,param_3,param_4,param_5,param_6 == 0);
    pBVar4 = local_48;
    if (local_48 == (BackingStore *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = operator_new(0x20);
      puVar5[2] = 0;
      puVar5[3] = local_48;
      *puVar5 = &PTR____shared_weak_count_01c98518;
      puVar5[1] = 0;
    }
    p_Var7 = (__shared_weak_count *)param_1[1];
    local_48 = (BackingStore *)0x0;
    *param_1 = (long)pBVar4;
    param_1[1] = (long)puVar5;
    if (p_Var7 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var7 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      }
    }
    pBVar4 = local_48;
    local_48 = (BackingStore *)0x0;
    if (pBVar4 != (BackingStore *)0x0) {
      v8::internal::BackingStore::~BackingStore(pBVar4);
      operator_delete(pBVar4);
    }
    local_58 = *param_1;
    local_50 = (__shared_weak_count *)param_1[1];
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var7 = local_50 + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
        if (bVar3) {
          *(long *)p_Var7 = *(long *)p_Var7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    v8::internal::GlobalBackingStoreRegistry::Register(&local_58);
    p_Var7 = local_50;
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var1 = local_50 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)local_50 + 0x10))(local_50);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      }
    }
  }
  else {
    if ((param_6 == 0) && ((*(byte *)(lVar6 + 0x28) >> 3 & 1) == 0)) {
      lVar6 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
      if (lVar6 == 0) {
LAB_00ec97ac:
        v8::base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8_[Shared]ArrayBuffer_New",
                   "previous backing store found that should not be freed on destruct");
                    /* WARNING: Subroutine does not return */
        v8::base::OS::Abort();
      }
      if (*(code **)(lVar6 + 0xb738) == (code *)0x0) goto LAB_00ec97ac;
      (**(code **)(lVar6 + 0xb738))
                ("v8_[Shared]ArrayBuffer_New",
                 "previous backing store found that should not be freed on destruct");
      *(undefined1 *)(lVar6 + 0xb6b9) = 1;
      lVar6 = *param_1;
    }
    if (((param_5 & 0xff) != 1) == (bool)(*(byte *)(lVar6 + 0x28) & 1)) {
      lVar6 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
      if (lVar6 != 0) {
        if (*(code **)(lVar6 + 0xb738) != (code *)0x0) {
          (**(code **)(lVar6 + 0xb738))
                    ("v8_[Shared]ArrayBuffer_New",
                     "previous backing store found that does not match shared flag");
          *(undefined1 *)(lVar6 + 0xb6b9) = 1;
          return;
        }
      }
      v8::base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8_[Shared]ArrayBuffer_New",
                 "previous backing store found that does not match shared flag");
                    /* WARNING: Subroutine does not return */
      v8::base::OS::Abort();
    }
  }
  return;
}

