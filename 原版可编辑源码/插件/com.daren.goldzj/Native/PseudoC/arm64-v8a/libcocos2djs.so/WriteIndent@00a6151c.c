
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::WriteIndent() */

void __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::WriteIndent(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              *this)

{
  ulong __size;
  PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  PVar1;
  void *__s;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  size_t __n;
  long *plVar5;
  
  plVar5 = *(long **)this;
  __s = (void *)plVar5[3];
  pvVar2 = (void *)plVar5[4];
  PVar1 = this[0x3d];
  __n = ((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 4) *
        (ulong)*(uint *)(this + 0x40);
  pvVar3 = (void *)((long)__s + __n);
  if (pvVar2 < pvVar3) {
    pvVar3 = (void *)plVar5[2];
    if (pvVar3 == (void *)0x0) {
      if (*plVar5 == 0) {
        pvVar2 = operator_new(1);
                    /* try { // try from 00a615bc to 00b615c3 has its CatchHandler @ 00a617e8 */
        *plVar5 = (long)pvVar2;
        plVar5[1] = (long)pvVar2;
      }
      uVar4 = plVar5[5];
    }
    else {
      uVar4 = (long)pvVar2 + (((ulong)((long)pvVar2 + (1 - (long)pvVar3)) >> 1) - (long)pvVar3);
    }
                    /* try { // try from 00a615c8 to 00b615cf has its CatchHandler @ 00a617e0 */
    __size = ((long)__s - (long)pvVar3) + __n;
                    /* try { // try from 00a615d0 to 00b615df has its CatchHandler @ 00a617d8 */
    if (__size <= uVar4) {
      __size = uVar4;
    }
    if (__size == 0) {
      free(pvVar3);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(pvVar3,__size);
                    /* try { // try from 00a615e8 to 00b61623 has its CatchHandler @ 00a617f0 */
    }
    __s = (void *)((long)pvVar2 + ((long)__s - (long)pvVar3));
    plVar5[2] = (long)pvVar2;
    plVar5[3] = (long)__s;
    pvVar3 = (void *)((long)__s + __n);
    plVar5[4] = (long)pvVar2 + __size;
  }
  plVar5[3] = (long)pvVar3;
                    /* try { // try from 00a61564 to 00b615bb has its CatchHandler @ 00a61564
                       catch() { ... } // from try @ 00a61564 with catch @ 00a61564
                       catch() { ... } // from try @ 00a61758 with catch @ 00a61564 */
  memset(__s,(uint)(byte)PVar1,__n);
  return;
}

