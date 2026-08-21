
/* fairygui::UIEventDispatcher::doDispatch(int, fairygui::EventContext*) */

void __thiscall
fairygui::UIEventDispatcher::doDispatch(UIEventDispatcher *this,int param_1,EventContext *param_2)

{
  long lVar1;
  size_t __n;
  long lVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  GObject *pGVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *__dest;
  long lVar9;
  InputProcessor *pIVar10;
  ulong uVar11;
  EventContext *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00aafb0c to 00bafb2b has its CatchHandler @ 00ab032c */
  local_68 = *(long *)(lVar2 + 0x28);
  iVar4 = cocos2d::Ref::getReferenceCount((Ref *)this);
  if (iVar4 != 0) {
                    /* try { // try from 00aafb2c to 00bafb33 has its CatchHandler @ 00ab03f4 */
    cocos2d::Ref::retain((Ref *)this);
  }
  iVar4 = *(int *)(this + 0x40);
  *(int *)(this + 0x40) = iVar4 + 1;
                    /* try { // try from 00aafb3c to 00bafb4f has its CatchHandler @ 00ab0328 */
  *(UIEventDispatcher **)param_2 = this;
  lVar9 = *(long *)(this + 0x28);
  lVar1 = *(long *)(this + 0x30) - lVar9;
  if (lVar1 == 0) {
    *(int *)(this + 0x40) = iVar4;
  }
  else {
                    /* try { // try from 00aafb58 to 00bafbc3 has its CatchHandler @ 00ab03d4 */
    bVar3 = 0;
    uVar11 = 0;
    while( true ) {
      lVar9 = *(long *)(lVar9 + uVar11 * 8);
      plVar5 = *(long **)(lVar9 + 0x20);
      if (plVar5 == (long *)0x0) {
        bVar3 = 1;
      }
      else if (*(int *)(lVar9 + 0x30) == param_1) {
        *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + 1;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        local_70 = param_2;
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_70);
        *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + -1;
        iVar4 = *(int *)(param_2 + 0x2c);
                    /* try { // try from 00aafbd0 to 00bafbdf has its CatchHandler @ 00ab03b4 */
        if ((iVar4 != 0) &&
           (lVar9 = __dynamic_cast(this,&typeinfo,&GObject::typeinfo,0), lVar9 != 0)) {
                    /* try { // try from 00aafbe0 to 00bafbef has its CatchHandler @ 00ab039c */
          if ((param_1 == 10) && (iVar4 == 1)) {
            pIVar10 = *(InputProcessor **)(*(long *)(param_2 + 8) + 0x30);
                    /* try { // try from 00aafbf8 to 00bafc1b has its CatchHandler @ 00ab0324 */
            iVar4 = *(int *)(*(long *)(param_2 + 8) + 0x18);
            pGVar6 = (GObject *)__dynamic_cast(this,&typeinfo,&GObject::typeinfo,0);
            InputProcessor::addTouchMonitor(pIVar10,iVar4,pGVar6);
          }
          else if (iVar4 == 2) {
                    /* try { // try from 00aafc3c to 00bafc43 has its CatchHandler @ 00ab03d4 */
            pIVar10 = *(InputProcessor **)(*(long *)(param_2 + 8) + 0x30);
                    /* try { // try from 00aafc4c to 00bafc5f has its CatchHandler @ 00ab0320 */
            pGVar6 = (GObject *)__dynamic_cast(this,&typeinfo,&GObject::typeinfo,0);
            InputProcessor::removeTouchMonitor(pIVar10,pGVar6);
          }
        }
      }
      uVar11 = uVar11 + 1;
      if ((ulong)(lVar1 >> 3) <= uVar11) break;
      lVar9 = *(long *)(this + 0x28);
    }
    iVar4 = *(int *)(this + 0x40);
                    /* try { // try from 00aafc68 to 00bafc93 has its CatchHandler @ 00ab03cc */
    *(int *)(this + 0x40) = iVar4 + -1;
    if ((bool)(bVar3 & iVar4 + -1 == 0)) {
      __dest = *(undefined8 **)(this + 0x28);
      puVar8 = *(undefined8 **)(this + 0x30);
      if (puVar8 != __dest) {
        do {
          while (pvVar7 = (void *)*__dest, *(long *)((long)pvVar7 + 0x20) != 0) {
            __dest = __dest + 1;
                    /* try { // try from 00aafc98 to 00bafca7 has its CatchHandler @ 00ab0398 */
            if (puVar8 == __dest) goto LAB_00aafce4;
          }
                    /* try { // try from 00aafca8 to 00bafcb7 has its CatchHandler @ 00ab0388 */
          if (pvVar7 != (void *)0x0) {
            operator_delete(pvVar7);
            puVar8 = *(undefined8 **)(this + 0x30);
          }
                    /* try { // try from 00aafcb8 to 00bafce3 has its CatchHandler @ 00ab0368 */
          __n = (long)puVar8 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          puVar8 = __dest + ((long)__n >> 3);
          *(undefined8 **)(this + 0x30) = puVar8;
        } while (puVar8 != __dest);
      }
    }
  }
LAB_00aafce4:
  iVar4 = cocos2d::Ref::getReferenceCount((Ref *)this);
  if (iVar4 != 0) {
    cocos2d::Ref::release((Ref *)this);
  }
                    /* try { // try from 00aafd04 to 00bafd0b has its CatchHandler @ 00ab03cc */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00aafd14 to 00bafd27 has its CatchHandler @ 00ab031c */
  return;
}

