
/* v8::internal::Cancelable::Cancelable(v8::internal::CancelableTaskManager*) */

void __thiscall
v8::internal::Cancelable::Cancelable(Cancelable *this,CancelableTaskManager *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  Cancelable *pCVar5;
  long local_48 [2];
  long *local_38;
  
  *(undefined ***)this = &PTR__Cancelable_01cbbd00;
  *(CancelableTaskManager **)(this + 8) = param_1;
  pCVar5 = this + 0x10;
  *(int *)pCVar5 = 0;
  base::Mutex::Lock((Mutex *)(param_1 + 0x60));
  if (param_1[0x88] == (CancelableTaskManager)0x0) {
    uVar4 = *(ulong *)param_1;
    local_48[0] = uVar4 + 1;
    *(long *)param_1 = local_48[0];
    if (0xfffffffffffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kInvalidTaskId != id");
    }
    local_38 = local_48;
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
            ::
            __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                      ((ulong *)(param_1 + 8),(piecewise_construct_t *)local_48,(tuple *)0x19ee4e3,
                       (tuple *)&local_38);
    *(Cancelable **)(lVar3 + 0x18) = this;
    lVar3 = local_48[0];
  }
  else {
    do {
      if (*(int *)pCVar5 != 0) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pCVar5,0x10);
      if (bVar2) {
        *(int *)pCVar5 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar3 = 0;
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 0x60));
  *(long *)(this + 0x18) = lVar3;
  return;
}

