
/* dragonBones::Armature::_addConstraint(dragonBones::Constraint*) */

void __thiscall dragonBones::Armature::_addConstraint(Armature *this,Constraint *param_1)

{
  undefined8 *puVar1;
  undefined8 *__src;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t __n;
  ulong uVar6;
  
  __src = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  puVar5 = __src;
  if ((__src != puVar2) && ((Constraint *)*__src != param_1)) {
    do {
      if (puVar2 + -1 == puVar5) goto LAB_00d7c444;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
    } while ((Constraint *)*puVar1 != param_1);
  }
  if (puVar5 != puVar2) {
    return;
  }
LAB_00d7c444:
  if (*(undefined8 **)(this + 0x50) != puVar2) {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x48) = puVar2 + 1;
    return;
  }
  __n = (long)puVar2 - (long)__src;
  uVar6 = ((long)__n >> 3) + 1;
  if (uVar6 >> 0x3d != 0) {
LAB_00d7c4ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = (long)*(undefined8 **)(this + 0x50) - (long)__src;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d7c4c0;
    }
    if (uVar6 >> 0x3d != 0) goto LAB_00d7c4ac;
  }
  else {
    uVar6 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar6 << 3);
LAB_00d7c4c0:
  puVar5 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar5 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x40) = __dest;
  *(undefined8 **)(this + 0x48) = puVar5 + 1;
  *(void **)(this + 0x50) = (void *)((long)__dest + uVar6 * 8);
  if (__src == (undefined8 *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

