
/* dragonBones::AnimationState::_advanceFadeTime(float) */

void __thiscall dragonBones::AnimationState::_advanceFadeTime(AnimationState *this,float param_1)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  EventObject *pEVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  void *pvVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(this + 100);
  if (*(int *)(this + 0x68) < 0) {
    *(undefined4 *)(this + 0x68) = 0;
    ppuVar1 = &EventObject::FADE_OUT;
    if (iVar2 < 1) {
      ppuVar1 = &EventObject::FADE_IN;
    }
    pcVar8 = *ppuVar1;
    plVar9 = *(long **)(*(long *)(this + 0x130) + 0xb0);
    local_80 = 0;
    local_78 = 0;
    local_70 = (void *)0x0;
    sVar4 = strlen(pcVar8);
    if (0xffffffffffffffef < sVar4) goto LAB_00d2017c;
    if (sVar4 < 0x17) {
      pvVar10 = (void *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
      if (sVar4 != 0) goto LAB_00d1ff38;
    }
    else {
      uVar5 = sVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar5);
      local_80 = uVar5 | 1;
      local_78 = sVar4;
      local_70 = pvVar10;
LAB_00d1ff38:
      memcpy(pvVar10,pcVar8,sVar4);
    }
    *(undefined1 *)((long)pvVar10 + sVar4) = 0;
    uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((uVar5 & 1) != 0) {
      pEVar6 = BaseObject::borrowObject<dragonBones::EventObject>();
      sVar4 = strlen(pcVar8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (pEVar6 + 0x18),pcVar8,sVar4);
      lVar7 = *(long *)(this + 0x130);
      *(AnimationState **)(pEVar6 + 0x60) = this;
      *(long *)(pEVar6 + 0x48) = lVar7;
      DragonBones::bufferEvent(*(DragonBones **)(lVar7 + 0x28),pEVar6);
    }
  }
  fVar12 = -param_1;
  if (0.0 <= param_1) {
    fVar12 = param_1;
  }
  fVar12 = fVar12 + *(float *)(this + 0x94);
  *(float *)(this + 0x94) = fVar12;
  if (*(float *)(this + 0x28) <= fVar12) {
    uVar11 = 0;
    if (iVar2 < 1) {
      uVar11 = 0x3f800000;
    }
    *(undefined4 *)(this + 0x68) = 1;
    *(undefined4 *)(this + 0x74) = uVar11;
  }
  else {
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
      fVar13 = 1.0;
    }
    else {
      fVar12 = fVar12 / *(float *)(this + 0x28);
      fVar13 = 1.0 - fVar12;
    }
    if (iVar2 < 1) {
      fVar13 = fVar12;
    }
    *(float *)(this + 0x74) = fVar13;
    if (*(int *)(this + 0x68) < 1) goto LAB_00d2014c;
  }
  if (iVar2 < 1) {
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 1;
    *(undefined4 *)(this + 100) = 0;
  }
  ppuVar1 = &EventObject::FADE_OUT_COMPLETE;
  if (iVar2 < 1) {
    ppuVar1 = &EventObject::FADE_IN_COMPLETE;
  }
  pcVar8 = *ppuVar1;
  plVar9 = *(long **)(*(long *)(this + 0x130) + 0xb0);
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  sVar4 = strlen(pcVar8);
  if (0xffffffffffffffef < sVar4) {
LAB_00d2017c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar4 < 0x17) {
    pvVar10 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00d200d0;
  }
  else {
    uVar5 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar5);
    local_80 = uVar5 | 1;
    local_78 = sVar4;
    local_70 = pvVar10;
LAB_00d200d0:
    memcpy(pvVar10,pcVar8,sVar4);
  }
  *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((uVar5 & 1) != 0) {
    pEVar6 = BaseObject::borrowObject<dragonBones::EventObject>();
    sVar4 = strlen(pcVar8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pEVar6 + 0x18),pcVar8,sVar4);
    lVar7 = *(long *)(this + 0x130);
    *(AnimationState **)(pEVar6 + 0x60) = this;
    *(long *)(pEVar6 + 0x48) = lVar7;
    DragonBones::bufferEvent(*(DragonBones **)(lVar7 + 0x28),pEVar6);
  }
LAB_00d2014c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

