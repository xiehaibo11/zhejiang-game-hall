
undefined8 FUN_01477c18(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  v8::base::Mutex::Lock((Mutex *)(lVar1 + 8));
  v8::base::Mutex::Unlock((Mutex *)(lVar1 + 8));
  prctl(0xf,param_1 + 2,0,0,0);
  if ((Semaphore *)param_1[5] != (Semaphore *)0x0) {
    v8::base::Semaphore::Signal((Semaphore *)param_1[5]);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return 0;
}

