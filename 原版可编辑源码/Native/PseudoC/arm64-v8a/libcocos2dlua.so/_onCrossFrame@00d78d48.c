
/* dragonBones::ActionTimelineState::_onCrossFrame(unsigned int) const */

void __thiscall
dragonBones::ActionTimelineState::_onCrossFrame(ActionTimelineState *this,uint param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  EventObject *pEVar6;
  size_t __n;
  void *__dest;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ActionData *pAVar10;
  char *__s;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(char *)(*(long *)(this + 0x68) + 0xd) != '\0') {
    lVar8 = *(long *)(this + 0x78);
    uVar1 = *(int *)(*(long *)(this + 0x50) + 0x18) +
            (uint)*(ushort *)
                   (*(long *)(this + 0x90) +
                   (ulong)(param_1 + *(int *)(*(long *)(this + 0x58) + 0x14) + 5) * 2);
    uVar12 = (long)*(short *)(lVar8 + (ulong)(uVar1 + 1) * 2) & 0xffffffff;
    if (uVar12 != 0) {
                    /* try { // try from 00d78dbc to 00e78deb has its CatchHandler @ 00d78638 */
      lVar13 = *(long *)(*(long *)(this + 0x50) + 0xf0);
      plVar11 = *(long **)(*(long *)(this + 0x60) + 0xb0);
      lVar9 = (ulong)(uVar1 + 2) << 1;
      do {
        uVar12 = uVar12 - 1;
                    /* try { // try from 00d78dec to 00e78df7 has its CatchHandler @ 00d79acc */
        pAVar10 = *(ActionData **)(*(long *)(lVar13 + 0xa8) + (long)*(short *)(lVar8 + lVar9) * 8);
        iVar3 = *(int *)(pAVar10 + 0x10);
        if (iVar3 == 0xb) {
LAB_00d78f24:
          pEVar6 = BaseObject::borrowObject<dragonBones::EventObject>();
                    /* try { // try from 00d78f38 to 00e78fc3 has its CatchHandler @ 00d79ba0 */
          uVar4 = 0;
          if (*(uint *)(this + 0x20) != 0) {
            uVar4 = (uint)(int)*(short *)(*(long *)(this + 0x78) + (ulong)uVar1 * 2) /
                    *(uint *)(this + 0x20);
          }
          *(float *)(pEVar6 + 0x10) = (float)uVar4;
          *(undefined8 *)(pEVar6 + 0x60) = *(undefined8 *)(this + 0x68);
          EventObject::actionDataToInstance(pAVar10,pEVar6,*(Armature **)(this + 0x60));
          DragonBones::bufferEvent(*(DragonBones **)(*(long *)(this + 0x60) + 0x28),pEVar6);
        }
        else if (iVar3 == 0) {
          pEVar6 = BaseObject::borrowObject<dragonBones::EventObject>();
          uVar4 = 0;
          if (*(uint *)(this + 0x20) != 0) {
            uVar4 = (uint)(int)*(short *)(*(long *)(this + 0x78) + (ulong)uVar1 * 2) /
                    *(uint *)(this + 0x20);
          }
                    /* try { // try from 00d78e20 to 00e78e33 has its CatchHandler @ 00d79b24 */
          *(float *)(pEVar6 + 0x10) = (float)uVar4;
          *(undefined8 *)(pEVar6 + 0x60) = *(undefined8 *)(this + 0x68);
                    /* try { // try from 00d78e34 to 00e78e3f has its CatchHandler @ 00d79b20 */
          EventObject::actionDataToInstance(pAVar10,pEVar6,*(Armature **)(this + 0x60));
          Armature::_bufferAction(*(Armature **)(this + 0x60),pEVar6,true);
        }
        else {
                    /* try { // try from 00d78e54 to 00e78e6f has its CatchHandler @ 00d79cb0 */
          ppuVar2 = &EventObject::FRAME_EVENT;
          if (iVar3 != 10) {
            ppuVar2 = &EventObject::SOUND_EVENT;
          }
          __s = *ppuVar2;
          local_78 = 0;
          local_70 = (void *)0x0;
          local_80 = 0;
                    /* try { // try from 00d78e74 to 00e78e83 has its CatchHandler @ 00d79cb4 */
          __n = strlen(__s);
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (__n < 0x17) {
            local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
            __dest = (void *)((ulong)&local_80 | 1);
            if (__n != 0) goto LAB_00d78ed8;
          }
          else {
            uVar7 = __n + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar7);
            local_80 = uVar7 | 1;
            local_78 = __n;
            local_70 = __dest;
LAB_00d78ed8:
            memcpy(__dest,__s,__n);
          }
          *(undefined1 *)((long)__dest + __n) = 0;
          uVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,&local_80);
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          if ((uVar7 & 1) != 0) goto LAB_00d78f24;
        }
        if (uVar12 == 0) break;
        lVar8 = *(long *)(this + 0x78);
        lVar9 = lVar9 + 2;
      } while( true );
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

