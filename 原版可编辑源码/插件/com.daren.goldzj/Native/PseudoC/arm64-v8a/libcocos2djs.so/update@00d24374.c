
/* dragonBones::ActionTimelineState::update(float) */

void __thiscall dragonBones::ActionTimelineState::update(ActionTimelineState *this,float param_1)

{
  ActionTimelineState *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  EventObject *pEVar13;
  long *plVar14;
  EventObject *pEVar15;
  uint uVar16;
  void *pvVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong local_90;
  size_t local_88;
  void *local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  iVar3 = *(int *)(this + 0x10);
  iVar19 = *(int *)(this + 0x14);
  fVar21 = *(float *)(this + 0x18);
  uVar9 = TimelineState::_setCurrentTime((TimelineState *)this,param_1);
  if ((uVar9 & 1) == 0) goto LAB_00d247b8;
  plVar14 = *(long **)(*(Armature **)(this + 0x60) + 0xb0);
  if (iVar3 < 0) {
    if (*(int *)(this + 0x10) == iVar3) goto LAB_00d247b8;
    if ((*(char *)(*(long *)(this + 0x68) + 0xf) != '\0') &&
       (*(char *)(*(long *)(this + 0x68) + 0x10) != '\0')) {
      Armature::_sortZOrder(*(Armature **)(this + 0x60),(short *)0x0,0);
    }
    puVar8 = EventObject::START;
    iVar19 = *(int *)(this + 0x14);
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    sVar10 = strlen(EventObject::START);
    if (0xffffffffffffffef < sVar10) goto LAB_00d24a50;
    if (sVar10 < 0x17) {
      pvVar17 = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar10 << 1));
      if (sVar10 != 0) goto LAB_00d2487c;
    }
    else {
      uVar9 = sVar10 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = operator_new(uVar9);
      local_90 = uVar9 | 1;
      local_88 = sVar10;
      local_80 = pvVar17;
LAB_00d2487c:
      memcpy(pvVar17,puVar8,sVar10);
    }
    *(undefined1 *)((long)pvVar17 + sVar10) = 0;
    uVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((uVar9 & 1) != 0) {
      pEVar13 = BaseObject::borrowObject<dragonBones::EventObject>();
      puVar8 = EventObject::START;
      sVar10 = strlen(EventObject::START);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (pEVar13 + 0x18),puVar8,sVar10);
      lVar11 = *(long *)(this + 0x60);
      *(long *)(pEVar13 + 0x48) = lVar11;
      *(undefined8 *)(pEVar13 + 0x60) = *(undefined8 *)(this + 0x68);
      DragonBones::bufferEvent(*(DragonBones **)(lVar11 + 0x28),pEVar13);
    }
  }
  puVar8 = EventObject::LOOP_COMPLETE;
  pAVar1 = this + 0x68;
  fVar22 = *(float *)(*(long *)pAVar1 + 0x1c);
  if (*(int *)(this + 0x14) == iVar19) {
    pEVar15 = (EventObject *)0x0;
    pEVar13 = (EventObject *)0x0;
  }
  else {
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    sVar10 = strlen(EventObject::LOOP_COMPLETE);
    if (0xffffffffffffffef < sVar10) goto LAB_00d24a50;
    if (sVar10 < 0x17) {
      pvVar17 = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar10 << 1));
      if (sVar10 != 0) goto LAB_00d244cc;
    }
    else {
      uVar9 = sVar10 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = operator_new(uVar9);
      local_90 = uVar9 | 1;
      local_88 = sVar10;
      local_80 = pvVar17;
LAB_00d244cc:
      memcpy(pvVar17,puVar8,sVar10);
    }
    *(undefined1 *)((long)pvVar17 + sVar10) = 0;
    uVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((uVar9 & 1) == 0) {
      pEVar13 = (EventObject *)0x0;
    }
    else {
      pEVar13 = BaseObject::borrowObject<dragonBones::EventObject>();
      puVar8 = EventObject::LOOP_COMPLETE;
      sVar10 = strlen(EventObject::LOOP_COMPLETE);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (pEVar13 + 0x18),puVar8,sVar10);
      *(undefined8 *)(pEVar13 + 0x48) = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pEVar13 + 0x60) = *(undefined8 *)pAVar1;
    }
    puVar8 = EventObject::COMPLETE;
    if (0 < *(int *)(this + 0x10)) {
      local_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      sVar10 = strlen(EventObject::COMPLETE);
      if (0xffffffffffffffef < sVar10) {
LAB_00d24a50:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (sVar10 < 0x17) {
        pvVar17 = (void *)((ulong)&local_90 | 1);
        local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar10 << 1));
        if (sVar10 != 0) goto LAB_00d245c8;
      }
      else {
        uVar9 = sVar10 + 0x10 & 0xfffffffffffffff0;
        pvVar17 = operator_new(uVar9);
        local_90 = uVar9 | 1;
        local_88 = sVar10;
        local_80 = pvVar17;
LAB_00d245c8:
        memcpy(pvVar17,puVar8,sVar10);
      }
      *(undefined1 *)((long)pvVar17 + sVar10) = 0;
      uVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,&local_90);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((uVar9 & 1) != 0) {
        pEVar15 = BaseObject::borrowObject<dragonBones::EventObject>();
        puVar8 = EventObject::COMPLETE;
        sVar10 = strlen(EventObject::COMPLETE);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pEVar15 + 0x18),puVar8,sVar10);
        *(undefined8 *)(pEVar15 + 0x48) = *(undefined8 *)(this + 0x60);
        *(undefined8 *)(pEVar15 + 0x60) = *(undefined8 *)pAVar1;
        goto LAB_00d24648;
      }
    }
    pEVar15 = (EventObject *)0x0;
  }
LAB_00d24648:
  if (*(uint *)(this + 0x28) < 2) {
    if (*(int *)(this + 0x30) < 0) {
      *(undefined4 *)(this + 0x30) = 0;
      if (*(long *)(this + 0x58) != 0) {
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
        uVar16 = *(int *)(*(long *)(this + 0x50) + 0x18) +
                 (uint)*(ushort *)
                        (*(long *)(this + 0x90) +
                        (ulong)(*(int *)(*(long *)(this + 0x58) + 0x14) + 5) * 2);
        *(uint *)(this + 0x2c) = uVar16;
        fVar20 = (float)(int)*(short *)(*(long *)(this + 0x78) + (ulong)uVar16 * 2) / fVar20;
        if (*(int *)(this + 0x14) == iVar19) {
          if (fVar21 <= fVar20) {
            _onCrossFrame(this,0);
          }
        }
        else if (*(float *)(this + 0x38) <= fVar20) {
          uVar16 = 0;
          if ((pEVar13 != (EventObject *)0x0) && (0.0 <= fVar22)) {
            DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar13);
            uVar16 = *(uint *)(this + 0x30);
            pEVar13 = (EventObject *)0x0;
          }
          _onCrossFrame(this,uVar16);
        }
      }
    }
  }
  else {
    lVar18 = *(long *)(this + 0x58);
    iVar3 = *(int *)(lVar18 + 0x18);
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
    lVar11 = **(long **)(this + 0x98);
    uVar5 = *(uint *)(lVar11 + (ulong)(uint)(iVar3 + (int)(*(float *)(this + 0x18) * fVar20)) * 4);
    uVar16 = *(uint *)(this + 0x30);
    if (uVar16 != uVar5) {
      lVar12 = *(long *)(this + 0x90);
      *(uint *)(this + 0x30) = uVar5;
      if (lVar12 != 0) {
        iVar2 = *(int *)(lVar18 + 0x14) + 5;
        iVar4 = *(int *)(*(long *)(this + 0x50) + 0x18);
        *(uint *)(this + 0x2c) = iVar4 + (uint)*(ushort *)(lVar12 + (ulong)(iVar2 + uVar5) * 2);
        if (0.0 <= fVar22) {
          if (((int)uVar16 < 0) &&
             (uVar6 = *(uint *)(lVar11 + (ulong)(uint)(iVar3 + (int)(fVar21 * fVar20)) * 4),
             uVar16 = uVar6, *(int *)(this + 0x14) == iVar19)) {
            if (fVar21 <= (float)(int)*(short *)(*(long *)(this + 0x78) +
                                                (ulong)(iVar4 + (uint)*(ushort *)
                                                                       (lVar12 + (ulong)(uVar6 + 
                                                  iVar2) * 2)) * 2) / fVar20) {
              uVar16 = uVar6 - 1;
              if ((int)uVar6 < 1) {
                uVar16 = *(uint *)(this + 0x28) - 1;
              }
            }
            else if (uVar6 == uVar5) {
              uVar16 = 0xffffffff;
            }
          }
          do {
            if ((int)uVar16 < 0) break;
            uVar6 = 0;
            if (uVar16 < *(int *)(this + 0x28) - 1U) {
              uVar6 = uVar16 + 1;
            }
            fVar21 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
            fVar21 = (float)(int)*(short *)(*(long *)(this + 0x78) +
                                           (ulong)(*(int *)(*(long *)(this + 0x50) + 0x18) +
                                                  (uint)*(ushort *)
                                                         (*(long *)(this + 0x90) +
                                                         (ulong)(uVar6 + *(int *)(lVar18 + 0x14) + 5
                                                                ) * 2)) * 2) / fVar21;
            if ((*(float *)(this + 0x38) <= fVar21) &&
               (fVar21 <= *(float *)(this + 0x38) + *(float *)(this + 0x3c))) {
              _onCrossFrame(this,uVar6);
            }
            if ((pEVar13 != (EventObject *)0x0) && (uVar6 == 0)) {
              DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar13);
              pEVar13 = (EventObject *)0x0;
            }
            uVar16 = uVar6;
          } while (uVar6 != uVar5);
        }
        else {
          if (((int)uVar16 < 0) &&
             (uVar16 = *(uint *)(lVar11 + (ulong)(uint)(iVar3 + (int)(fVar21 * fVar20)) * 4),
             *(int *)(this + 0x14) == iVar19 && uVar16 == uVar5)) {
            uVar16 = 0xffffffff;
          }
          do {
            if ((int)uVar16 < 0) break;
            fVar21 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
            fVar21 = (float)(int)*(short *)(*(long *)(this + 0x78) +
                                           (ulong)(*(int *)(*(long *)(this + 0x50) + 0x18) +
                                                  (uint)*(ushort *)
                                                         (*(long *)(this + 0x90) +
                                                         (ulong)(uVar16 + *(int *)(lVar18 + 0x14) +
                                                                5) * 2)) * 2) / fVar21;
            if ((*(float *)(this + 0x38) <= fVar21) &&
               (fVar21 <= *(float *)(this + 0x38) + *(float *)(this + 0x3c))) {
              _onCrossFrame(this,uVar16);
            }
            if ((uVar16 == 0) && (pEVar13 != (EventObject *)0x0)) {
              DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar13);
              pEVar13 = (EventObject *)0x0;
LAB_00d24774:
              uVar16 = *(uint *)(this + 0x28);
            }
            else if ((int)uVar16 < 1) goto LAB_00d24774;
            uVar16 = uVar16 - 1;
          } while (uVar16 != uVar5);
        }
      }
    }
  }
  if (pEVar13 != (EventObject *)0x0) {
    DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar13);
  }
  if (pEVar15 != (EventObject *)0x0) {
    DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar15);
  }
LAB_00d247b8:
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

