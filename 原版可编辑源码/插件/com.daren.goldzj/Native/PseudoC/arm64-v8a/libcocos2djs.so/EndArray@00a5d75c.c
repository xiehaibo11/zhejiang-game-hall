
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
   rapidjson::CrtAllocator>::EndArray(unsigned int) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::EndArray(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
           *this,uint param_1)

{
  ulong uVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong *puVar5;
  void *__src;
  ulong __n;
  ulong *puVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(this + 0x18);
  __src = (void *)(*(long *)(this + 0x40) + (ulong)param_1 * -0x18);
  *(void **)(this + 0x40) = __src;
                    /* try { // try from 00a5d790 to 00b5d7e3 has its CatchHandler @ 00a5d790
                       catch() { ... } // from try @ 00a5d790 with catch @ 00a5d790
                       catch() { ... } // from try @ 00a5d9ec with catch @ 00a5d790 */
  *(undefined2 *)((long)__src + -2) = 4;
  if (param_1 == 0) {
    *(undefined8 *)((long)__src + -0x10) = 0;
    goto LAB_00a5d828;
  }
  puVar6 = (ulong *)*puVar7;
  __n = (ulong)param_1 * 0x18;
  if (puVar6 == (ulong *)0x0) {
LAB_00a5d7c0:
    uVar1 = puVar7[1];
    if ((ulong)puVar7[1] <= __n) {
      uVar1 = __n;
    }
    if (puVar7[3] == 0) {
      pvVar3 = operator_new(1);
      puVar7[3] = pvVar3;
      puVar7[4] = pvVar3;
                    /* try { // try from 00a5d854 to 00b5d867 has its CatchHandler @ 00a5da64 */
      if (uVar1 != 0xffffffffffffffe8) goto LAB_00a5d7dc;
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)0x0;
      if (uVar1 != 0xffffffffffffffe8) {
LAB_00a5d7dc:
        puVar2 = malloc(uVar1 + 0x18);
        pvVar3 = (void *)0x0;
        if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 00a5d7e4 to 00b5d7fb has its CatchHandler @ 00a5da7c */
          uVar4 = 0;
          *puVar2 = uVar1;
          puVar5 = puVar2 + 1;
          *puVar5 = 0;
          puVar2[2] = (ulong)puVar6;
          *puVar7 = puVar2;
          goto LAB_00a5d800;
        }
      }
    }
  }
  else {
    puVar5 = puVar6 + 1;
    uVar4 = *puVar5;
    puVar2 = puVar6;
    if (*puVar6 < uVar4 + __n) goto LAB_00a5d7c0;
LAB_00a5d800:
                    /* try { // try from 00a5d804 to 00b5d80f has its CatchHandler @ 00a5da78 */
    pvVar3 = (void *)((long)puVar2 + uVar4 + 0x18);
    *puVar5 = uVar4 + __n;
  }
                    /* try { // try from 00a5d810 to 00b5d81b has its CatchHandler @ 00a5da74 */
  *(void **)((long)__src + -0x10) = pvVar3;
                    /* try { // try from 00a5d81c to 00b5d84f has its CatchHandler @ 00a5da8c */
  memcpy(pvVar3,__src,__n);
LAB_00a5d828:
  *(uint *)((long)__src + -0x18) = param_1;
  *(uint *)((long)__src + -0x14) = param_1;
  return 1;
}

