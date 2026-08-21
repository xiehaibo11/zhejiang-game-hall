
/* cocos2d::ui::EditBoxImplCommon::onEnter() */

void __thiscall cocos2d::ui::EditBoxImplCommon::onEnter(EditBoxImplCommon *this)

{
  char *pcVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00def114 with catch @ 00def178
                        */
  pcVar1 = (char *)(**(code **)(*(long *)this + 0x78))();
                    /* try { // try from 00def18c to 00eef2a7 has its CatchHandler @ 00def18c
                       catch(type#1 @ 00000000) { ... } // from try @ 00def18c with catch @ 00def18c
                        */
  if (pcVar1 != (char *)0x0) {
    setInactiveText(this,pcVar1);
    return;
  }
  return;
}

