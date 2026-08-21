
/* cocos2d::renderer::CustomAssembler::adjustIA(unsigned long) */

void __thiscall cocos2d::renderer::CustomAssembler::adjustIA(CustomAssembler *this,ulong param_1)

{
  long lVar1;
  InputAssembler *pIVar2;
  long lVar3;
  ulong uVar4;
  InputAssembler *local_50;
  long local_48;
  
                    /* try { // try from 009ce89c to 00ace8a7 has its CatchHandler @ 009cec48 */
                    /* try { // try from 009ce8a8 to 00ace8b3 has its CatchHandler @ 009cec44 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009ce8b4 to 00ace95f has its CatchHandler @ 009cec60 */
  lVar3 = *(long *)(this + 0x38);
  local_50 = (InputAssembler *)0x0;
  uVar4 = *(long *)(this + 0x40) - lVar3 >> 3;
  if (uVar4 == param_1) {
    pIVar2 = operator_new(0x20);
    InputAssembler::InputAssembler(pIVar2);
    local_50 = pIVar2;
    if (*(undefined8 **)(this + 0x40) == *(undefined8 **)(this + 0x48)) {
      std::__ndk1::
      vector<cocos2d::renderer::InputAssembler*,std::__ndk1::allocator<cocos2d::renderer::InputAssembler*>>
      ::__push_back_slow_path<cocos2d::renderer::InputAssembler*const&>
                ((vector<cocos2d::renderer::InputAssembler*,std::__ndk1::allocator<cocos2d::renderer::InputAssembler*>>
                  *)(this + 0x38),&local_50);
    }
    else {
      **(undefined8 **)(this + 0x40) = pIVar2;
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
    }
  }
  else {
    if (uVar4 <= param_1) {
      log("CustomAssembler:updateIA index:%zu is out of range",param_1);
      pIVar2 = (InputAssembler *)0x0;
      goto LAB_009ce960;
    }
    local_50 = *(InputAssembler **)(lVar3 + param_1 * 8);
  }
  pIVar2 = local_50;
  if (*(ulong *)(this + 0x68) < param_1 + 1) {
    *(ulong *)(this + 0x68) = param_1 + 1;
  }
LAB_009ce960:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pIVar2);
  }
  return;
}

