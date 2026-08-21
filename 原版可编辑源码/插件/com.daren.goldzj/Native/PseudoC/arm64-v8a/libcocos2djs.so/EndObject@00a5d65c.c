
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
   rapidjson::CrtAllocator>::EndObject(unsigned int) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::EndObject(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
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
  __src = (void *)(*(long *)(this + 0x40) + (ulong)param_1 * -0x30);
  *(void **)(this + 0x40) = __src;
  *(undefined2 *)((long)__src + -2) = 3;
  if (param_1 == 0) {
                    /* catch() { ... } // from try @ 00a5d420 with catch @ 00a5d724 */
    *(undefined8 *)((long)__src + -0x10) = 0;
    goto LAB_00a5d728;
  }
  puVar6 = (ulong *)*puVar7;
  __n = (ulong)param_1 * 0x30;
  if (puVar6 == (ulong *)0x0) {
LAB_00a5d6c0:
    uVar1 = puVar7[1];
    if ((ulong)puVar7[1] <= __n) {
      uVar1 = __n;
    }
                    /* catch() { ... } // from try @ 00a5d510 with catch @ 00a5d6d0
                       catch() { ... } // from try @ 00a5d588 with catch @ 00a5d6d0 */
    if (puVar7[3] == 0) {
      pvVar3 = operator_new(1);
      puVar7[3] = pvVar3;
      puVar7[4] = pvVar3;
      if (uVar1 != 0xffffffffffffffe8) goto LAB_00a5d6dc;
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)0x0;
      if (uVar1 != 0xffffffffffffffe8) {
LAB_00a5d6dc:
        puVar2 = malloc(uVar1 + 0x18);
        pvVar3 = (void *)0x0;
        if (puVar2 != (ulong *)0x0) {
          uVar4 = 0;
          *puVar2 = uVar1;
          puVar5 = puVar2 + 1;
          *puVar5 = 0;
          puVar2[2] = (ulong)puVar6;
          *puVar7 = puVar2;
          goto LAB_00a5d700;
        }
      }
    }
  }
  else {
    puVar5 = puVar6 + 1;
    uVar4 = *puVar5;
    puVar2 = puVar6;
    if (*puVar6 < uVar4 + __n) goto LAB_00a5d6c0;
LAB_00a5d700:
    pvVar3 = (void *)((long)puVar2 + uVar4 + 0x18);
    *puVar5 = uVar4 + __n;
  }
  *(void **)((long)__src + -0x10) = pvVar3;
  memcpy(pvVar3,__src,__n);
                    /* catch() { ... } // from try @ 00a5d42c with catch @ 00a5d720 */
LAB_00a5d728:
                    /* catch() { ... } // from try @ 00a5d400 with catch @ 00a5d728 */
  *(uint *)((long)__src + -0x18) = param_1;
  *(uint *)((long)__src + -0x14) = param_1;
                    /* catch() { ... } // from try @ 00a5d438 with catch @ 00a5d738
                       catch() { ... } // from try @ 00a5d540 with catch @ 00a5d738
                       catch() { ... } // from try @ 00a5d61c with catch @ 00a5d738 */
  return 1;
}

