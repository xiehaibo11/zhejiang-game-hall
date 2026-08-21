
/* dragonBones::ActionTimelineState::update(float) */

void __thiscall dragonBones::ActionTimelineState::update(ActionTimelineState *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  EventObject *pEVar12;
  long *plVar13;
  EventObject *pEVar14;
  uint uVar15;
  void *pvVar16;
  long lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong local_90;
  size_t sStack_88;
  void *local_80;
  long local_78;
  
                    /* try { // try from 00d78fc4 to 00e78ff3 has its CatchHandler @ 00d78638 */
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  iVar2 = *(int *)(this + 0x10);
  iVar18 = *(int *)(this + 0x14);
                    /* try { // try from 00d78ff4 to 00e78fff has its CatchHandler @ 00d79b50 */
  fVar20 = *(float *)(this + 0x18);
  uVar8 = TimelineState::_setCurrentTime((TimelineState *)this,param_1);
  if ((uVar8 & 1) == 0) goto LAB_00d793f4;
  plVar13 = *(long **)(*(Armature **)(this + 0x60) + 0xb0);
  if (iVar2 < 0) {
                    /* try { // try from 00d7907c to 00e7909f has its CatchHandler @ 00d79af0 */
    if (*(int *)(this + 0x10) == iVar2) goto LAB_00d793f4;
    if ((*(char *)(*(long *)(this + 0x68) + 0xf) != '\0') &&
       (*(char *)(*(long *)(this + 0x68) + 0x10) != '\0')) {
      Armature::_sortZOrder(*(Armature **)(this + 0x60),(short *)0x0,0);
    }
    puVar7 = EventObject::START;
    iVar18 = *(int *)(this + 0x14);
                    /* try { // try from 00d790ac to 00e790c7 has its CatchHandler @ 00d79ca8 */
    local_90 = 0;
    sStack_88 = 0;
    local_80 = (void *)0x0;
    sVar9 = strlen(EventObject::START);
    if (0xffffffffffffffef < sVar9) goto LAB_00d79694;
                    /* try { // try from 00d790cc to 00e790db has its CatchHandler @ 00d79cac */
    if (sVar9 < 0x17) {
      pvVar16 = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar9 << 1));
      if (sVar9 != 0) goto LAB_00d794b8;
    }
    else {
      uVar8 = sVar9 + 0x10 & 0xfffffffffffffff0;
      pvVar16 = operator_new(uVar8);
      local_90 = uVar8 | 1;
                    /* try { // try from 00d794b0 to 00e794bb has its CatchHandler @ 00d79b0c */
      sStack_88 = sVar9;
      local_80 = pvVar16;
LAB_00d794b8:
      memcpy(pvVar16,puVar7,sVar9);
    }
    *(undefined1 *)((long)pvVar16 + sVar9) = 0;
    uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
                    /* try { // try from 00d794f4 to 00e794f7 has its CatchHandler @ 00d79a18 */
    if ((uVar8 & 1) != 0) {
      pEVar12 = BaseObject::borrowObject<dragonBones::EventObject>();
      puVar7 = EventObject::START;
      sVar9 = strlen(EventObject::START);
                    /* try { // try from 00d79518 to 00e7953b has its CatchHandler @ 00d79abc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (pEVar12 + 0x18),puVar7,sVar9);
      lVar10 = *(long *)(this + 0x60);
      *(long *)(pEVar12 + 0x48) = lVar10;
      *(undefined8 *)(pEVar12 + 0x60) = *(undefined8 *)(this + 0x68);
      DragonBones::bufferEvent(*(DragonBones **)(lVar10 + 0x28),pEVar12);
    }
  }
  puVar7 = EventObject::LOOP_COMPLETE;
  fVar21 = *(float *)(*(long *)(this + 0x68) + 0x1c);
  if (*(int *)(this + 0x14) == iVar18) {
    pEVar14 = (EventObject *)0x0;
    pEVar12 = (EventObject *)0x0;
                    /* try { // try from 00d79028 to 00e7903b has its CatchHandler @ 00d79b38 */
  }
  else {
    local_90 = 0;
    sStack_88 = 0;
    local_80 = (void *)0x0;
                    /* try { // try from 00d7903c to 00e79047 has its CatchHandler @ 00d79b28 */
    sVar9 = strlen(EventObject::LOOP_COMPLETE);
    if (0xffffffffffffffef < sVar9) goto LAB_00d79694;
                    /* try { // try from 00d79058 to 00e7905b has its CatchHandler @ 00d79ac8 */
    if (sVar9 < 0x17) {
      pvVar16 = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar9 << 1));
      if (sVar9 != 0) goto LAB_00d7910c;
    }
    else {
      uVar8 = sVar9 + 0x10 & 0xfffffffffffffff0;
      pvVar16 = operator_new(uVar8);
      local_90 = uVar8 | 1;
      sStack_88 = sVar9;
      local_80 = pvVar16;
LAB_00d7910c:
      memcpy(pvVar16,puVar7,sVar9);
    }
    *(undefined1 *)((long)pvVar16 + sVar9) = 0;
    uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((uVar8 & 1) == 0) {
      pEVar12 = (EventObject *)0x0;
    }
    else {
      pEVar12 = BaseObject::borrowObject<dragonBones::EventObject>();
      puVar7 = EventObject::LOOP_COMPLETE;
      sVar9 = strlen(EventObject::LOOP_COMPLETE);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (pEVar12 + 0x18),puVar7,sVar9);
      *(undefined8 *)(pEVar12 + 0x48) = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pEVar12 + 0x60) = *(undefined8 *)(this + 0x68);
    }
    puVar7 = EventObject::COMPLETE;
                    /* try { // try from 00d79190 to 00e7921b has its CatchHandler @ 00d79b80 */
    if (0 < *(int *)(this + 0x10)) {
      local_90 = 0;
      sStack_88 = 0;
      local_80 = (void *)0x0;
      sVar9 = strlen(EventObject::COMPLETE);
      if (0xffffffffffffffef < sVar9) {
LAB_00d79694:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (sVar9 < 0x17) {
        pvVar16 = (void *)((ulong)&local_90 | 1);
        local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar9 << 1));
        if (sVar9 != 0) goto LAB_00d79200;
      }
      else {
        uVar8 = sVar9 + 0x10 & 0xfffffffffffffff0;
        pvVar16 = operator_new(uVar8);
        local_90 = uVar8 | 1;
        sStack_88 = sVar9;
        local_80 = pvVar16;
LAB_00d79200:
        memcpy(pvVar16,puVar7,sVar9);
      }
      *(undefined1 *)((long)pvVar16 + sVar9) = 0;
                    /* try { // try from 00d7921c to 00e7924b has its CatchHandler @ 00d78638 */
      uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_90);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((uVar8 & 1) != 0) {
        pEVar14 = BaseObject::borrowObject<dragonBones::EventObject>();
        puVar7 = EventObject::COMPLETE;
                    /* try { // try from 00d7924c to 00e79253 has its CatchHandler @ 00d79b3c */
        sVar9 = strlen(EventObject::COMPLETE);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pEVar14 + 0x18),puVar7,sVar9);
        *(undefined8 *)(pEVar14 + 0x48) = *(undefined8 *)(this + 0x60);
        *(undefined8 *)(pEVar14 + 0x60) = *(undefined8 *)(this + 0x68);
        goto LAB_00d79280;
      }
    }
    pEVar14 = (EventObject *)0x0;
  }
LAB_00d79280:
  if (*(uint *)(this + 0x28) < 2) {
    if (*(int *)(this + 0x30) < 0) {
      *(undefined4 *)(this + 0x30) = 0;
      if (*(long *)(this + 0x58) != 0) {
        fVar19 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
        uVar15 = *(int *)(*(long *)(this + 0x50) + 0x18) +
                 (uint)*(ushort *)
                        (*(long *)(this + 0x90) +
                        (ulong)(*(int *)(*(long *)(this + 0x58) + 0x14) + 5) * 2);
        *(uint *)(this + 0x2c) = uVar15;
        fVar19 = (float)(int)*(short *)(*(long *)(this + 0x78) + (ulong)uVar15 * 2) / fVar19;
        if (*(int *)(this + 0x14) == iVar18) {
                    /* try { // try from 00d79480 to 00e794af has its CatchHandler @ 00d78638 */
          if (fVar20 <= fVar19) {
            _onCrossFrame(this,0);
          }
        }
        else if (*(float *)(this + 0x38) <= fVar19) {
          uVar15 = 0;
                    /* try { // try from 00d795ac to 00e795af has its CatchHandler @ 00d79a10 */
          if ((pEVar12 != (EventObject *)0x0) && (0.0 <= fVar21)) {
            DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar12);
            uVar15 = *(uint *)(this + 0x30);
            pEVar12 = (EventObject *)0x0;
          }
                    /* try { // try from 00d795d0 to 00e795d7 has its CatchHandler @ 00d79a14 */
          _onCrossFrame(this,uVar15);
        }
      }
    }
  }
  else {
                    /* try { // try from 00d7928c to 00e7928f has its CatchHandler @ 00d79ac4 */
    lVar17 = *(long *)(this + 0x58);
    iVar2 = *(int *)(lVar17 + 0x18);
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
    lVar10 = **(long **)(this + 0x98);
                    /* try { // try from 00d792b0 to 00e792d3 has its CatchHandler @ 00d79af4 */
    uVar4 = *(uint *)(lVar10 + (ulong)(uint)(iVar2 + (int)(*(float *)(this + 0x18) * fVar19)) * 4);
    uVar15 = *(uint *)(this + 0x30);
    if (uVar15 != uVar4) {
      lVar11 = *(long *)(this + 0x90);
      *(uint *)(this + 0x30) = uVar4;
      if (lVar11 != 0) {
                    /* try { // try from 00d792d8 to 00e792eb has its CatchHandler @ 00d79aec */
        iVar1 = *(int *)(lVar17 + 0x14) + 5;
        iVar3 = *(int *)(*(long *)(this + 0x50) + 0x18);
                    /* try { // try from 00d792ec to 00e792fb has its CatchHandler @ 00d79ae8 */
        *(uint *)(this + 0x2c) = iVar3 + (uint)*(ushort *)(lVar11 + (ulong)(iVar1 + uVar4) * 2);
        if (0.0 <= fVar21) {
                    /* try { // try from 00d79550 to 00e79553 has its CatchHandler @ 00d79a1c */
          if (((int)uVar15 < 0) &&
             (uVar5 = *(uint *)(lVar10 + (ulong)(uint)(iVar2 + (int)(fVar20 * fVar19)) * 4),
             uVar15 = uVar5, *(int *)(this + 0x14) == iVar18)) {
                    /* try { // try from 00d79574 to 00e79597 has its CatchHandler @ 00d79ac0 */
            if (fVar20 <= (float)(int)*(short *)(*(long *)(this + 0x78) +
                                                (ulong)(iVar3 + (uint)*(ushort *)
                                                                       (lVar11 + (ulong)(uVar5 + 
                                                  iVar1) * 2)) * 2) / fVar19) {
              uVar15 = uVar5 - 1;
              if ((int)uVar5 < 1) {
                uVar15 = *(uint *)(this + 0x28) - 1;
              }
            }
            else if (uVar5 == uVar4) {
              uVar15 = 0xffffffff;
            }
          }
          do {
            if ((int)uVar15 < 0) break;
                    /* try { // try from 00d79610 to 00e7961b has its CatchHandler @ 00d79bc0 */
            uVar5 = 0;
            if (uVar15 < *(int *)(this + 0x28) - 1U) {
              uVar5 = uVar15 + 1;
            }
                    /* try { // try from 00d79634 to 00e7963f has its CatchHandler @ 00d79a14 */
            fVar20 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
            fVar20 = (float)(int)*(short *)(*(long *)(this + 0x78) +
                                           (ulong)(*(int *)(*(long *)(this + 0x50) + 0x18) +
                                                  (uint)*(ushort *)
                                                         (*(long *)(this + 0x90) +
                                                         (ulong)(uVar5 + *(int *)(lVar17 + 0x14) + 5
                                                                ) * 2)) * 2) / fVar20;
            if ((*(float *)(this + 0x38) <= fVar20) &&
               (fVar20 <= *(float *)(this + 0x38) + *(float *)(this + 0x3c))) {
              _onCrossFrame(this,uVar5);
            }
                    /* try { // try from 00d79674 to 00e798a7 has its CatchHandler @ 00d79b7c */
            if ((pEVar12 != (EventObject *)0x0) && (uVar5 == 0)) {
              DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar12);
              pEVar12 = (EventObject *)0x0;
            }
            uVar15 = uVar5;
          } while (uVar5 != uVar4);
        }
        else {
                    /* try { // try from 00d79310 to 00e7932b has its CatchHandler @ 00d79ca0 */
          if (((int)uVar15 < 0) &&
             (uVar15 = *(uint *)(lVar10 + (ulong)(uint)(iVar2 + (int)(fVar20 * fVar19)) * 4),
             *(int *)(this + 0x14) == iVar18 && uVar15 == uVar4)) {
            uVar15 = 0xffffffff;
          }
          do {
            if ((int)uVar15 < 0) break;
            fVar20 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
            fVar20 = (float)(int)*(short *)(*(long *)(this + 0x78) +
                                           (ulong)(*(int *)(*(long *)(this + 0x50) + 0x18) +
                                                  (uint)*(ushort *)
                                                         (*(long *)(this + 0x90) +
                                                         (ulong)(uVar15 + *(int *)(lVar17 + 0x14) +
                                                                5) * 2)) * 2) / fVar20;
            if ((*(float *)(this + 0x38) <= fVar20) &&
               (fVar20 <= *(float *)(this + 0x38) + *(float *)(this + 0x3c))) {
              _onCrossFrame(this,uVar15);
            }
            if ((uVar15 == 0) && (pEVar12 != (EventObject *)0x0)) {
                    /* try { // try from 00d79330 to 00e7933f has its CatchHandler @ 00d79c98 */
              DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar12);
              pEVar12 = (EventObject *)0x0;
LAB_00d79338:
              uVar15 = *(uint *)(this + 0x28);
            }
            else if ((int)uVar15 < 1) goto LAB_00d79338;
            uVar15 = uVar15 - 1;
          } while (uVar15 != uVar4);
        }
      }
    }
  }
  if (pEVar12 != (EventObject *)0x0) {
    DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar12);
  }
  if (pEVar14 != (EventObject *)0x0) {
    DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar14);
  }
LAB_00d793f4:
                    /* try { // try from 00d793f4 to 00e7947f has its CatchHandler @ 00d79b74 */
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

