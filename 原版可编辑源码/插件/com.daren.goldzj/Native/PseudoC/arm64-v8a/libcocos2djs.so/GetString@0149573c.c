
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x01495790 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::AstValueFactory::GetString(unsigned int, bool, v8::internal::Vector<unsigned char
   const>) */

undefined8 *
v8::internal::AstValueFactory::GetString
          (long param_1,ulong param_2,byte param_3,void *param_4,undefined8 param_5)

{
  TemplateHashMapEntry *pTVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  void *__dest;
  ulong uVar4;
  size_t __n;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  undefined8 local_60;
  undefined4 local_58;
  byte local_54;
  undefined1 auStack_38 [8];
  
  local_70 = 0;
  local_78 = &local_70;
  pvStack_68 = param_4;
  local_60 = param_5;
  local_58 = (int)param_2;
  local_54 = param_3 & 1;
  pTVar1 = base::
           TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                     (param_1,&local_78,param_2 >> 3 & 0x1fffffff,auStack_38);
  if (*(long *)(pTVar1 + 8) == 0) {
    pZVar3 = *(Zone **)(param_1 + 0x448);
    __n = (size_t)(int)param_5;
    uVar4 = __n + 7 & 0xfffffffffffffff8;
    __dest = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)__dest) < uVar4) {
      __dest = (void *)Zone::NewExpand(pZVar3,uVar4);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)__dest + uVar4;
    }
    memcpy(__dest,param_4,__n);
    pZVar3 = *(Zone **)(param_1 + 0x448);
    puVar2 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar2) < 0x20) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar2 + 4;
    }
    *puVar2 = 0;
    puVar2[1] = __dest;
    puVar2[2] = __n;
    *(int *)(puVar2 + 3) = (int)param_2;
    *(byte *)((long)puVar2 + 0x1c) = param_3 & 1;
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(new_string) != nullptr");
    }
    **(undefined8 **)(param_1 + 0x20) = puVar2;
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    *(undefined8 **)pTVar1 = puVar2;
    *(undefined8 *)(pTVar1 + 8) = 1;
  }
  else {
    puVar2 = *(undefined8 **)pTVar1;
  }
  return puVar2;
}

