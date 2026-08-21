
/* v8::internal::V8HeapExplorer::TagGlobalObjects() */

void __thiscall v8::internal::V8HeapExplorer::TagGlobalObjects(V8HeapExplorer *this)

{
  void *__s;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined **local_80;
  void *local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  
  lVar5 = *(long *)(this + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0xd50);
  local_80 = &PTR__GlobalObjectsEnumerator_01cb75b0;
  lVar4 = *(long *)(lVar5 + 0xd58);
  *(int *)(lVar5 + 0xd60) = *(int *)(lVar5 + 0xd60) + 1;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  GlobalHandles::IterateAllRoots(*(GlobalHandles **)(lVar5 + 0xd90),(RootVisitor *)&local_80);
  uVar9 = (long)local_70 - (long)local_78;
  iVar7 = (int)(uVar9 >> 3);
  if (iVar7 == 0) {
    __s = (void *)0x0;
  }
  else {
    uVar3 = (long)(uVar9 * 0x20000000) >> 0x20;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = uVar3 << 3;
    __s = operator_new(uVar3);
    memset(__s,0,uVar3);
  }
  if (iVar7 < 1) {
    if (__s == (void *)0x0) goto LAB_011a4464;
  }
  else {
    lVar8 = 0;
    puVar1 = *(undefined8 **)(this + 0xb0);
    while( true ) {
      uVar2 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*puVar1)(puVar1,*(undefined8 *)((long)local_78 + lVar8));
      }
      *(undefined8 *)((long)__s + lVar8) = uVar2;
      lVar8 = lVar8 + 8;
      if ((uVar9 >> 3 & 0xffffffff) * 8 - lVar8 == 0) break;
      puVar1 = *(undefined8 **)(this + 0xb0);
    }
    uVar9 = (long)local_70 - (long)local_78;
    if (0 < (int)(uVar9 >> 3)) {
      lVar8 = 0;
      do {
        if (*(char **)((long)__s + lVar8) != (char *)0x0) {
          local_48 = **(undefined8 **)((long)local_78 + lVar8);
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::JSGlobalObject,std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSGlobalObject,std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>,std::__ndk1::equal_to<v8::internal::JSGlobalObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>>>
          ::
          __emplace_unique_key_args<v8::internal::JSGlobalObject,v8::internal::JSGlobalObject,char_const*&>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::JSGlobalObject,std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSGlobalObject,std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>,std::__ndk1::equal_to<v8::internal::JSGlobalObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSGlobalObject,char_const*>>>
                      *)(this + 0x38),(JSGlobalObject *)&local_48,(JSGlobalObject *)&local_48,
                     (char **)((long)__s + lVar8));
        }
        lVar8 = lVar8 + 8;
      } while ((uVar9 >> 3 & 0xffffffff) * 8 - lVar8 != 0);
    }
  }
  operator_delete(__s);
LAB_011a4464:
  local_80 = &PTR__GlobalObjectsEnumerator_01cb75b0;
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if ((Isolate *)(lVar5 + -0x8850) != (Isolate *)0x0) {
    *(undefined8 *)(lVar5 + 0xd50) = uVar6;
    *(int *)(lVar5 + 0xd60) = *(int *)(lVar5 + 0xd60) + -1;
    if (*(long *)(lVar5 + 0xd58) != lVar4) {
      *(long *)(lVar5 + 0xd58) = lVar4;
      HandleScope::DeleteExtensions((Isolate *)(lVar5 + -0x8850));
    }
  }
  return;
}

