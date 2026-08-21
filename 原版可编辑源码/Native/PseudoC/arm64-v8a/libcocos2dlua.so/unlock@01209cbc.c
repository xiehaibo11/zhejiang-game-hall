
/* std::__ndk1::__sp_mut::unlock() */

int __thiscall std::__ndk1::__sp_mut::unlock(__sp_mut *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(*(pthread_mutex_t **)this);
  return iVar1;
}

