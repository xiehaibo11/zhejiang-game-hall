
/* v8::base::Thread::Start() */

void __thiscall v8::base::Thread::Start(Thread *this)

{
  Mutex *this_00;
  long lVar1;
  bool bVar2;
  int iVar3;
  pthread_attr_t local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70._48_8_ = 0;
  local_70._24_8_ = 0;
  local_70._16_8_ = 0;
  local_70._40_8_ = 0;
  local_70._32_8_ = 0;
  local_70._8_8_ = 0;
  local_70.__align = 0;
  iVar3 = pthread_attr_init(&local_70);
  if (iVar3 == 0) {
    if ((*(int *)(this + 0x20) == 0) ||
       (iVar3 = pthread_attr_setstacksize(&local_70,(long)*(int *)(this + 0x20)), iVar3 == 0)) {
      this_00 = (Mutex *)(*(long *)(this + 8) + 8);
      Mutex::Lock(this_00);
      iVar3 = pthread_create(*(pthread_t **)(this + 8),&local_70,FUN_01477c18,this);
      if ((iVar3 == 0) && (**(long **)(this + 8) != 0)) {
        Mutex::Unlock(this_00);
        iVar3 = pthread_attr_destroy(&local_70);
        bVar2 = iVar3 == 0;
      }
      else {
        pthread_attr_destroy(&local_70);
        Mutex::Unlock(this_00);
        bVar2 = false;
      }
    }
    else {
      pthread_attr_destroy(&local_70);
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

