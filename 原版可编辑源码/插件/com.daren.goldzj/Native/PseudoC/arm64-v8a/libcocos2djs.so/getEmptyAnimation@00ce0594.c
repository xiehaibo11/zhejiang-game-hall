
/* spine::AnimationState::getEmptyAnimation() */

undefined * spine::AnimationState::getEmptyAnimation(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined **local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_01d3d898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d3d898), iVar3 != 0)) {
    DAT_01d3d888 = 0;
    DAT_01d3d890 = 0;
    DAT_01d3d878 = &PTR__Vector_01c8cfd8;
    DAT_01d3d880 = 0;
    __cxa_atexit(Vector<spine::Timeline*>::~Vector,&DAT_01d3d878,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3d898);
  }
  if (((DAT_01d3d900 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d3d900), iVar3 != 0)) {
    uStack_38 = 7;
    local_40 = &PTR__String_01c67868;
    plVar4 = (long *)SpineExtension::getInstance();
    local_30 = (undefined8 *)
               (**(code **)(*plVar4 + 0x18))
                         (plVar4,8,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                          ,0x39);
    *local_30 = 0x3e7974706d653c;
    Animation::Animation((Animation *)&DAT_01d3d8a0,(String *)&local_40,(Vector *)&DAT_01d3d878,0.0)
    ;
    puVar2 = local_30;
    local_40 = &PTR__String_01c67868;
    if (local_30 != (undefined8 *)0x0) {
      plVar4 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar4 + 0x28))
                (plVar4,puVar2,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_40);
    __cxa_atexit(Animation::~Animation,&DAT_01d3d8a0,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3d900);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return &DAT_01d3d8a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

