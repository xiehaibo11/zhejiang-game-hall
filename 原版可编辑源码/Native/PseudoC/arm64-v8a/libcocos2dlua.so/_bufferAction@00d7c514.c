
/* dragonBones::Armature::_bufferAction(dragonBones::EventObject*, bool) */

void __thiscall
dragonBones::Armature::_bufferAction(Armature *this,EventObject *param_1,bool param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *__src;
  size_t __n;
  ulong uVar7;
  EventObject *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __src = *(undefined8 **)(this + 0x90);
  puVar3 = *(undefined8 **)(this + 0x98);
  puVar6 = __src;
  local_70 = param_1;
  if ((__src != puVar3) && ((EventObject *)*__src != param_1)) {
    do {
      if (puVar3 + -1 == puVar6) goto LAB_00d7c59c;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
    } while ((EventObject *)*puVar1 != param_1);
  }
  if (puVar6 != puVar3) goto LAB_00d7c5c4;
LAB_00d7c59c:
  if (!param_2) {
    std::__ndk1::vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>>
    ::insert((vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>> *)
             (this + 0x90),__src,&local_70);
    goto LAB_00d7c5c4;
  }
  if (*(undefined8 **)(this + 0xa0) != puVar3) {
    *puVar3 = param_1;
    *(undefined8 **)(this + 0x98) = puVar3 + 1;
    goto LAB_00d7c5c4;
  }
  __n = (long)puVar3 - (long)__src;
  uVar7 = ((long)__n >> 3) + 1;
  if (uVar7 >> 0x3d != 0) {
LAB_00d7c630:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = (long)*(undefined8 **)(this + 0xa0) - (long)__src;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      if (uVar7 >> 0x3d != 0) goto LAB_00d7c630;
      goto LAB_00d7c638;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar7 = 0x1fffffffffffffff;
LAB_00d7c638:
    __dest = operator_new(uVar7 << 3);
  }
  puVar6 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar6 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x90) = __dest;
  *(undefined8 **)(this + 0x98) = puVar6 + 1;
  *(void **)(this + 0xa0) = (void *)((long)__dest + uVar7 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
  }
LAB_00d7c5c4:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

