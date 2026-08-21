
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>::Uint(unsigned
   int) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::Uint(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
       *this,uint param_1)

{
  ulong __size;
  ulong *puVar1;
  void *__ptr;
  void *pvVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined2 uVar6;
  
                    /* try { // try from 00a5db58 to 00b5db63 has its CatchHandler @ 00a5dda8 */
                    /* try { // try from 00a5db64 to 00b5db6f has its CatchHandler @ 00a5dda4 */
  puVar3 = *(ulong **)(this + 0x40);
  puVar1 = *(ulong **)(this + 0x48);
                    /* try { // try from 00a5db70 to 00b5dba3 has its CatchHandler @ 00a5ddbc */
  puVar4 = puVar3 + 3;
  if (puVar1 < puVar4) {
                    /* try { // try from 00a5dbb4 to 00b5dbb7 has its CatchHandler @ 00a5dd94 */
    __ptr = *(void **)(this + 0x38);
    if (__ptr == (void *)0x0) {
      if (*(long *)(this + 0x28) == 0) {
        pvVar2 = operator_new(1);
                    /* try { // try from 00a5dbe8 to 00b5dbef has its CatchHandler @ 00a5dd78 */
        *(void **)(this + 0x28) = pvVar2;
        *(void **)(this + 0x30) = pvVar2;
                    /* try { // try from 00a5dbf0 to 00b5dc03 has its CatchHandler @ 00a5dd74 */
      }
      uVar5 = *(ulong *)(this + 0x50);
    }
    else {
                    /* try { // try from 00a5dbc0 to 00b5dbc7 has its CatchHandler @ 00a5dd8c */
      uVar5 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
                    /* try { // try from 00a5dbc8 to 00b5dbdb has its CatchHandler @ 00a5dd7c */
    }
    __size = ((long)puVar3 - (long)__ptr) + 0x18;
    if (__size <= uVar5) {
      __size = uVar5;
    }
    if (__size == 0) {
                    /* try { // try from 00a5dc18 to 00b5dc2b has its CatchHandler @ 00a5dd6c */
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
                    /* try { // try from 00a5dc10 to 00b5dc17 has its CatchHandler @ 00a5dd70 */
      pvVar2 = realloc(__ptr,__size);
    }
    puVar3 = (ulong *)((long)pvVar2 + ((long)puVar3 - (long)__ptr));
    *(ulong *)(this + 0x48) = (long)pvVar2 + __size;
    puVar4 = puVar3 + 3;
    *(void **)(this + 0x38) = pvVar2;
    *(ulong **)(this + 0x40) = puVar3;
                    /* try { // try from 00a5dc34 to 00b5dc47 has its CatchHandler @ 00a5dd94 */
  }
  *(ulong **)(this + 0x40) = puVar4;
  *puVar3 = (ulong)param_1;
  uVar6 = 0x1d6;
  if (-1 < (int)param_1) {
    uVar6 = 0x1f6;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined2 *)((long)puVar3 + 0x16) = uVar6;
                    /* try { // try from 00a5dba4 to 00b5dbaf has its CatchHandler @ 00a5dd90 */
  return 1;
}

