
undefined8 spSkeletonJson_readSkeletonDataFile(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __ptr = (void *)_spUtil_readFile(param_2,&local_3c);
  if ((__ptr == (void *)0x0) || (local_3c == 0)) {
    _spSkeletonJson_setError(param_1,0,"Unable to read skeleton file: ",param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = spSkeletonJson_readSkeletonData(param_1,__ptr);
    _spFree(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

