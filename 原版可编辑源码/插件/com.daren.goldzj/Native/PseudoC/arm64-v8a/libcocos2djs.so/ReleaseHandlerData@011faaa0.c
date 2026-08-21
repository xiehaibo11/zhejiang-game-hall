
/* v8::internal::trap_handler::ReleaseHandlerData(int) */

void v8::internal::trap_handler::ReleaseHandlerData(int param_1)

{
  ulong uVar1;
  void *__ptr;
  MetadataLock aMStack_28 [8];
  
  if (param_1 != -1) {
    MetadataLock::MetadataLock(aMStack_28);
    uVar1 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
    __ptr = *(void **)(gCodeObjects + uVar1);
    *(undefined8 *)(gCodeObjects + uVar1) = 0;
    *(long *)(gCodeObjects + uVar1 + 8) = DAT_01d3fc50;
    DAT_01d3fc50 = (long)param_1;
    MetadataLock::~MetadataLock(aMStack_28);
    free(__ptr);
  }
  return;
}

