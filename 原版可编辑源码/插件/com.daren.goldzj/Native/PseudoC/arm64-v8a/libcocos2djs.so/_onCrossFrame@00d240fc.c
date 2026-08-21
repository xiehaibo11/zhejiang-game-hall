
/* dragonBones::ActionTimelineState::_onCrossFrame(unsigned int) const */

void __thiscall
dragonBones::ActionTimelineState::_onCrossFrame(ActionTimelineState *this,uint param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  EventObject *pEVar7;
  size_t __n;
  void *__dest;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ActionData *pAVar11;
  char *__s;
  long lVar12;
  ulong uVar13;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (*(char *)(*(long *)(this + 0x68) + 0xd) != '\0') {
    lVar9 = *(long *)(this + 0x78);
    uVar1 = *(int *)(*(long *)(this + 0x50) + 0x18) +
            (uint)*(ushort *)
                   (*(long *)(this + 0x90) +
                   (ulong)(param_1 + *(int *)(*(long *)(this + 0x58) + 0x14) + 5) * 2);
    uVar2 = (long)*(short *)(lVar9 + (ulong)(uVar1 + 1) * 2) & 0xffffffff;
    if (uVar2 != 0) {
      lVar12 = *(long *)(*(long *)(this + 0x50) + 0xf0);
      plVar10 = *(long **)(*(long *)(this + 0x60) + 0xb0);
      uVar13 = 0;
      do {
        pAVar11 = *(ActionData **)
                   (*(long *)(lVar12 + 0xa8) +
                   (long)*(short *)(lVar9 + (ulong)(uVar1 + 2) * 2 + uVar13 * 2) * 8);
        iVar4 = *(int *)(pAVar11 + 0x10);
        if (iVar4 == 0xb) {
LAB_00d242e4:
          pEVar7 = BaseObject::borrowObject<dragonBones::EventObject>();
          uVar5 = 0;
          if (*(uint *)(this + 0x20) != 0) {
            uVar5 = (uint)(int)*(short *)(*(long *)(this + 0x78) + (ulong)uVar1 * 2) /
                    *(uint *)(this + 0x20);
          }
          *(float *)(pEVar7 + 0x10) = (float)uVar5;
          *(undefined8 *)(pEVar7 + 0x60) = *(undefined8 *)(this + 0x68);
          EventObject::actionDataToInstance(pAVar11,pEVar7,*(Armature **)(this + 0x60));
          DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar7);
        }
        else if (iVar4 == 0) {
          pEVar7 = BaseObject::borrowObject<dragonBones::EventObject>();
          uVar5 = 0;
          if (*(uint *)(this + 0x20) != 0) {
            uVar5 = (uint)(int)*(short *)(*(long *)(this + 0x78) + (ulong)uVar1 * 2) /
                    *(uint *)(this + 0x20);
          }
          *(float *)(pEVar7 + 0x10) = (float)uVar5;
          *(undefined8 *)(pEVar7 + 0x60) = *(undefined8 *)(this + 0x68);
          EventObject::actionDataToInstance(pAVar11,pEVar7,*(Armature **)(this + 0x60));
          Armature::_bufferAction(*(Armature **)(this + 0x60),pEVar7,true);
        }
        else {
          ppuVar3 = &EventObject::FRAME_EVENT;
          if (iVar4 != 10) {
            ppuVar3 = &EventObject::SOUND_EVENT;
          }
          __s = *ppuVar3;
          local_80 = 0;
          local_78 = 0;
          local_70 = (void *)0x0;
          __n = strlen(__s);
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (__n < 0x17) {
            local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
            __dest = (void *)((ulong)&local_80 | 1);
            if (__n != 0) goto LAB_00d242a0;
          }
          else {
            uVar8 = __n + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar8);
            local_80 = uVar8 | 1;
            local_78 = __n;
            local_70 = __dest;
LAB_00d242a0:
            memcpy(__dest,__s,__n);
          }
          *(undefined1 *)((long)__dest + __n) = 0;
          uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_80);
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          if ((uVar8 & 1) != 0) goto LAB_00d242e4;
        }
        uVar13 = uVar13 + 1;
        if (uVar2 <= uVar13) break;
        lVar9 = *(long *)(this + 0x78);
      } while( true );
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

