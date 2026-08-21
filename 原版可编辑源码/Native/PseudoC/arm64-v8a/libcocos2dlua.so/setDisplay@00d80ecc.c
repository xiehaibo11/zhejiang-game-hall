
/* dragonBones::Slot::setDisplay(void*, dragonBones::DisplayType) */

void __thiscall dragonBones::Slot::setDisplay(Slot *this,long param_1,undefined4 param_3)

{
  long *plVar1;
  void *__src;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  void *local_80;
  void *local_78;
  void *pvStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x170) != param_1) {
    __src = *(void **)(this + 0x140);
    iVar5 = *(int *)(this + 0x100);
    uVar4 = *(long *)(this + 0x148) - (long)__src;
    if ((iVar5 < 0) && (uVar4 == 0)) {
      iVar5 = 0;
      *(undefined4 *)(this + 0x100) = 0;
    }
    else if (iVar5 < 0) goto LAB_00d81008;
    uVar6 = (long)uVar4 >> 4;
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_80 = (void *)0x0;
    if (uVar4 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar4);
      pvStack_70 = (void *)((long)__dest + uVar6 * 0x10);
      local_80 = __dest;
      local_78 = __dest;
      if (0 < (long)uVar4) {
        memcpy(__dest,__src,uVar4);
        local_78 = (void *)((long)__dest + uVar4);
      }
    }
    uVar4 = (ulong)iVar5;
    if (uVar6 <= uVar4) {
      uVar6 = (ulong)(iVar5 + 1);
      uVar3 = (long)local_78 - (long)__dest >> 4;
      if (uVar3 < uVar6) {
                    /* try { // try from 00d80fc4 to 00e80fcb has its CatchHandler @ 00d8128c */
        std::__ndk1::
        vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
        ::__append((vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
                    *)&local_80,uVar6 - uVar3);
        uVar4 = (ulong)*(int *)(this + 0x100);
        __dest = local_80;
                    /* try { // try from 00d80fcc to 00e80fd3 has its CatchHandler @ 00d81284 */
      }
      else {
                    /* try { // try from 00d80fd4 to 00e80fdb has its CatchHandler @ 00d81290 */
        if (uVar3 != uVar6) {
          local_78 = (void *)((long)__dest + uVar6 * 0x10);
                    /* try { // try from 00d80fdc to 00e80fe3 has its CatchHandler @ 00d81280 */
        }
      }
    }
    plVar1 = (long *)((long)__dest + uVar4 * 0x10);
                    /* try { // try from 00d80fe4 to 00e80feb has its CatchHandler @ 00d8127c */
                    /* try { // try from 00d80fec to 00e80ff3 has its CatchHandler @ 00d81290 */
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = param_3;
                    /* try { // try from 00d80ff4 to 00e80ffb has its CatchHandler @ 00d81278 */
    setDisplayList(this,(vector *)&local_80);
                    /* try { // try from 00d80ffc to 00e81003 has its CatchHandler @ 00d81274 */
    if (local_80 != (void *)0x0) {
      local_78 = local_80;
                    /* try { // try from 00d81004 to 00e8100b has its CatchHandler @ 00d81270 */
      operator_delete(local_80);
    }
  }
LAB_00d81008:
                    /* try { // try from 00d8100c to 00e81017 has its CatchHandler @ 00d81290 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d81038 to 00e8103f has its CatchHandler @ 00d81268 */
    __stack_chk_fail();
  }
                    /* try { // try from 00d81018 to 00e8101f has its CatchHandler @ 00d8126c */
                    /* try { // try from 00d81020 to 00e81023 has its CatchHandler @ 00d81288 */
                    /* try { // try from 00d81024 to 00e81037 has its CatchHandler @ 00d81290 */
  return;
}

