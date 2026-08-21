
undefined8 spSkeletonBinary_readSkeletonDataFile(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00d62e58 to 00e62e63 has its CatchHandler @ 00d63180 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __ptr = (void *)_spUtil_readFile(param_2,&local_3c);
  if ((__ptr == (void *)0x0) || (local_3c == 0)) {
    _spSkeletonBinary_setError(param_1,"Unable to read skeleton file: ",param_2);
    uVar2 = 0;
  }
  else {
                    /* try { // try from 00d62e88 to 00e62e93 has its CatchHandler @ 00d6317c */
    uVar2 = spSkeletonBinary_readSkeletonData(param_1,__ptr);
    _spFree(__ptr);
  }
                    /* try { // try from 00d62ebc to 00e62ec7 has its CatchHandler @ 00d63178 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

