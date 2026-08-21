
/* cocos2d::Terrain::insertIndicesLODSkirt(int, unsigned short*, int) */

void __thiscall
cocos2d::Terrain::insertIndicesLODSkirt(Terrain *this,int param_1,ushort *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__src;
  size_t __n;
  ulong uVar7;
  int local_68;
  undefined4 uStack_64;
  undefined2 local_60;
  undefined2 uStack_5e;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = (undefined2)param_3;
  local_68 = param_1;
  glGenBuffers(1,(ulong)&local_68 | 4);
  glBindBuffer(0x8893,uStack_64);
  glBufferData(0x8893,-(ulong)((uint)param_3 >> 0x1f) & 0xfffffffe00000000 |
                      (ulong)(uint)param_3 << 1,param_2,0x88e4);
  puVar6 = *(undefined8 **)(this + 0x318);
  if (puVar6 != *(undefined8 **)(this + 800)) {
    *(uint *)(puVar6 + 1) = CONCAT22(uStack_5e,local_60);
    *puVar6 = CONCAT44(uStack_64,local_68);
    *(long *)(this + 0x318) = (long)puVar6 + 0xc;
    goto LAB_00d4748c;
  }
  __src = *(void **)(this + 0x310);
  __n = (long)puVar6 - (long)__src;
  uVar7 = 0x1555555555555555;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(undefined8 **)(this + 800) - (long)__src >> 2;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) goto LAB_00d4742c;
    pvVar3 = (void *)0x0;
  }
  else {
LAB_00d4742c:
    pvVar3 = operator_new(uVar7 * 0xc);
  }
  puVar6 = (undefined8 *)((long)pvVar3 + ((long)__n >> 2) * 4);
  *(uint *)(puVar6 + 1) = CONCAT22(uStack_5e,local_60);
  *puVar6 = CONCAT44(uStack_64,local_68);
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar6 - __n),__src,__n);
  }
  *(void **)(this + 0x310) = (void *)((long)puVar6 - __n);
  *(long *)(this + 0x318) = (long)puVar6 + 0xc;
  *(void **)(this + 800) = (void *)((long)pvVar3 + uVar7 * 0xc);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00d4748c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(CONCAT26(uStack_5e,CONCAT24(local_60,uStack_64)));
}

