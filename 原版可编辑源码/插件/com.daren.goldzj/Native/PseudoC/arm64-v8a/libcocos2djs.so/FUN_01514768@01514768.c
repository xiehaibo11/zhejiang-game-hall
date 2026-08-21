
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x015147b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_01514768(long param_1,Literal *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
  *pTVar3;
  TemplateHashMapEntry *pTVar4;
  Zone *this;
  void *__dest;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__src;
  size_t __n;
  Literal *local_68;
  undefined1 auStack_48 [8];
  
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  local_68 = param_2;
  pTVar3 = (TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
            *)v8::internal::Literal::Hash(param_2);
  pTVar4 = v8::base::
           TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::internal::ZoneAllocationPolicy)::_lambda()_1_>
                     (pTVar3,&local_68,(ulong)pTVar3 & 0xffffffff,auStack_48,uVar8);
  if (*(long *)(pTVar4 + 8) == 0) {
    this = *(Zone **)(param_1 + 0x30);
    puVar5 = *(undefined8 **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)puVar5) < 0x10) {
      puVar5 = (undefined8 *)v8::internal::Zone::NewExpand(this,0x10);
    }
    else {
      *(undefined8 **)(this + 0x10) = puVar5 + 2;
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined8 **)(pTVar4 + 8) = puVar5;
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    if (puVar2 < *(undefined8 **)(param_1 + 0x28)) {
      *puVar2 = param_2;
      puVar2[1] = puVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x10;
    }
    else {
      __src = *(void **)(param_1 + 0x18);
      __n = (long)puVar2 - (long)__src;
      uVar1 = ((long)__n >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
LAB_015148d4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = (long)*(undefined8 **)(param_1 + 0x28) - (long)__src;
      uVar7 = lVar6 >> 3;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3c != 0) goto LAB_015148d4;
        __dest = operator_new(uVar1 << 4);
      }
      puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
      *puVar2 = param_2;
      puVar2[1] = puVar5;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
        __src = *(void **)(param_1 + 0x18);
      }
      *(void **)(param_1 + 0x18) = __dest;
      *(undefined8 **)(param_1 + 0x20) = puVar2 + 2;
      *(void **)(param_1 + 0x28) = (void *)((long)__dest + uVar1 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
  }
  return *(undefined8 *)(pTVar4 + 8);
}

