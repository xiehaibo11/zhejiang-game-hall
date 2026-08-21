
/* cocos2d::ui::EditBoxImplCommon::initWithSize(cocos2d::Size const&) */

undefined8 __thiscall
cocos2d::ui::EditBoxImplCommon::initWithSize(EditBoxImplCommon *this,Size *param_1)

{
  long lVar1;
  Rect aRStack_48 [16];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee2d8 with catch @ 00dee578
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee2c0 with catch @ 00dee588
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee248 with catch @ 00dee590
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee4d0 with catch @ 00dee598
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee2ac with catch @ 00dee59c
                        */
  Rect::Rect(aRStack_48,0.0,0.0,*(float *)param_1,*(float *)(param_1 + 4));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee1c4 with catch @ 00dee5a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee310 with catch @ 00dee5ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00dee364 with catch @ 00dee5ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00dee3b8 with catch @ 00dee5ac
                        */
  (**(code **)(*(long *)this + 0x140))(this,aRStack_48);
  initInactiveLabels(this,param_1);
  (**(code **)(*(long *)this + 0x108))(this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

