
/* cocos2d::ui::EditBoxImplCommon::placeInactiveLabels(cocos2d::Size const&) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::placeInactiveLabels(EditBoxImplCommon *this,Size *param_1)

{
  int iVar1;
  long lVar2;
  Size *pSVar3;
  Label *pLVar4;
  undefined4 local_58;
  float local_54;
  Size aSStack_50 [4];
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  Label::setDimensions(*(Label **)(this + 0x18),*(float *)param_1,*(float *)(param_1 + 4));
  pSVar3 = (Size *)(**(code **)(**(long **)(this + 0x20) + 0x168))();
  Size::Size(aSStack_50,pSVar3);
  iVar1 = *(int *)(this + 0x28);
  pLVar4 = *(Label **)(this + 0x18);
                    /* try { // try from 00dee7c0 to 00eee803 has its CatchHandler @ 00dee958 */
  if (iVar1 == 0) {
                    /* try { // try from 00dee844 to 00eee857 has its CatchHandler @ 00dee978 */
    local_58 = 0x40a00000;
    local_54 = *(float *)(param_1 + 4) + -5.0;
                    /* try { // try from 00dee858 to 00eee86f has its CatchHandler @ 00dee95c */
    (**(code **)(*(long *)pLVar4 + 0x98))(pLVar4,&local_58);
    Label::setAlignment(*(Label **)(this + 0x18),*(undefined4 *)(*(Label **)(this + 0x18) + 0x450),0
                       );
    Label::enableWrap(*(Label **)(this + 0x18),true);
    local_58 = 0x40a00000;
                    /* try { // try from 00dee888 to 00eee8c3 has its CatchHandler @ 00dee97c */
    local_54 = *(float *)(param_1 + 4) + -5.0;
    (**(code **)(**(long **)(this + 0x20) + 0x98))(*(long **)(this + 0x20),&local_58);
    pLVar4 = *(Label **)(this + 0x20);
  }
  else {
    Label::enableWrap(pLVar4,false);
    local_54 = *(float *)(param_1 + 4);
    local_58 = 0x40a00000;
    (**(code **)(**(long **)(this + 0x18) + 0x98))(*(long **)(this + 0x18),&local_58);
    Label::setAlignment(*(Label **)(this + 0x18),*(undefined4 *)(*(Label **)(this + 0x18) + 0x450),1
                       );
    local_58 = 0x40a00000;
    local_54 = (*(float *)(param_1 + 4) + local_4c) * 0.5;
                    /* try { // try from 00dee828 to 00eee82b has its CatchHandler @ 00dee97c */
    (**(code **)(**(long **)(this + 0x20) + 0x98))(*(long **)(this + 0x20),&local_58);
    pLVar4 = *(Label **)(this + 0x20);
  }
  Label::setAlignment(pLVar4,*(undefined4 *)(pLVar4 + 0x450),iVar1 != 0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00dee8c8 to 00eee8e3 has its CatchHandler @ 00dee954 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

