
/* v8::internal::trap_handler::RegisterHandlerData(unsigned long, unsigned long, unsigned long,
   v8::internal::trap_handler::ProtectedInstructionData const*) */

ulong v8::internal::trap_handler::RegisterHandlerData
                (ulong param_1,ulong param_2,ulong param_3,ProtectedInstructionData *param_4)

{
  ulong uVar1;
  ulong *__ptr;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  MetadataLock aMStack_38 [8];
  
  __ptr = malloc(param_3 * 8 + 0x18);
  if (__ptr == (ulong *)0x0) {
LAB_011faa9c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *__ptr = param_1;
  __ptr[1] = param_2;
  __ptr[2] = param_3;
  memcpy(__ptr + 3,param_4,param_3 * 8);
  MetadataLock::MetadataLock(aMStack_38);
  uVar3 = DAT_01d3fc50;
  if (DAT_01d3fc50 == gNumCodeObjects) {
    uVar1 = 0x400;
    if (DAT_01d3fc50 != 0) {
      uVar1 = DAT_01d3fc50 << 1;
    }
    if (0x7ffffffe < uVar1) {
      uVar1 = 0x7fffffff;
    }
    if (uVar1 != DAT_01d3fc50) {
      gCodeObjects = realloc(gCodeObjects,uVar1 << 4);
      uVar4 = gNumCodeObjects;
      if (gCodeObjects == (void *)0x0) goto LAB_011faa9c;
      memset((void *)((long)gCodeObjects + gNumCodeObjects * 0x10),0,
             (uVar1 - gNumCodeObjects) * 0x10);
      gNumCodeObjects = uVar1;
      if (uVar4 < uVar1) {
        uVar2 = uVar4 << 4 | 8;
        do {
          uVar4 = uVar4 + 1;
          *(ulong *)((long)gCodeObjects + uVar2) = uVar4;
          uVar2 = uVar2 + 0x10;
        } while (uVar4 < uVar1);
      }
      goto LAB_011faa40;
    }
  }
  else {
LAB_011faa40:
    DAT_01d3fc50 = *(ulong *)((long)gCodeObjects + uVar3 * 0x10 + 8);
    if (uVar3 >> 0x1f == 0) {
      *(ulong **)((long)gCodeObjects + uVar3 * 0x10) = __ptr;
      goto LAB_011faa78;
    }
  }
  free(__ptr);
  uVar3 = 0xffffffff;
LAB_011faa78:
  MetadataLock::~MetadataLock(aMStack_38);
  return uVar3 & 0xffffffff;
}

