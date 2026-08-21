
/* dragonBones::DeformVertices::init(dragonBones::VerticesData const*, dragonBones::Armature*) */

void __thiscall
dragonBones::DeformVertices::init(DeformVertices *this,VerticesData *param_1,Armature *param_2)

{
  long lVar1;
  long lVar2;
  void *__s;
  long lVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  Bone *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(VerticesData **)(this + 0x40) = param_1;
  if (param_1 == (VerticesData *)0x0) {
    this[0xd] = (DeformVertices)0x0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar5 = (int)*(short *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) +
                             (ulong)*(uint *)(param_1 + 4) * 2);
    }
    else {
      iVar5 = *(int *)(*(long *)(param_1 + 0x10) + 0x10);
    }
    __s = *(void **)(this + 0x10);
    uVar6 = (ulong)(uint)(iVar5 << 1);
    pvVar4 = *(void **)(this + 0x18);
    this[0xd] = (DeformVertices)0x1;
    uVar7 = (long)pvVar4 - (long)__s >> 2;
    if (uVar7 < uVar6) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x10),uVar6 - uVar7);
      __s = *(void **)(this + 0x10);
      pvVar4 = *(void **)(this + 0x18);
    }
    else if (uVar7 != uVar6) {
      pvVar4 = (void *)((long)__s + uVar6 * 4);
      *(void **)(this + 0x18) = pvVar4;
    }
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
    if ((long)pvVar4 - (long)__s != 0) {
      uVar6 = (long)pvVar4 - (long)__s >> 2;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      memset(__s,0,uVar6 << 2);
    }
    lVar3 = *(long *)(*(long *)(this + 0x40) + 0x10);
    if ((lVar3 != 0) && (lVar1 = *(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18), lVar1 != 0)) {
      uVar6 = 0;
      while( true ) {
        local_50 = (Bone *)Armature::getBone(param_2,(basic_string *)
                                                     (*(long *)(*(long *)(lVar3 + 0x18) + uVar6 * 8)
                                                     + 0x18));
        if (local_50 != (Bone *)0x0) {
          if (*(long **)(this + 0x30) == *(long **)(this + 0x38)) {
            std::__ndk1::vector<dragonBones::Bone*,std::__ndk1::allocator<dragonBones::Bone*>>::
            __push_back_slow_path<dragonBones::Bone*const&>
                      ((vector<dragonBones::Bone*,std::__ndk1::allocator<dragonBones::Bone*>> *)
                       (this + 0x28),&local_50);
          }
          else {
            **(long **)(this + 0x30) = (long)local_50;
            *(long *)(this + 0x30) = *(long *)(this + 0x30) + 8;
          }
        }
        uVar6 = uVar6 + 1;
        if ((ulong)(lVar1 >> 3) <= uVar6) break;
        lVar3 = *(long *)(*(long *)(this + 0x40) + 0x10);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

