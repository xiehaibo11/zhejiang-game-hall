
/* universe::core::Service::performInNextLoop(std::__ndk1::function<void ()> const&) */

void __thiscall universe::core::Service::performInNextLoop(Service *this,function *param_1)

{
  long lVar1;
  Provided *pPVar2;
  long *plVar3;
  Provided **ppPVar4;
  Provided *pPVar5;
  code *pcVar6;
  long alStack_b0 [4];
  long *local_90;
  Provided *local_80 [4];
  Provided **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar2 = operator_new(0x50);
  *(undefined8 *)(pPVar2 + 0x38) = 0;
  *(undefined8 *)(pPVar2 + 0x30) = 0;
  *(undefined8 *)(pPVar2 + 0x48) = 0;
  *(undefined8 *)(pPVar2 + 0x40) = 0;
  *(undefined8 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x10) = 0;
  *(undefined8 *)(pPVar2 + 0x28) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined8 *)(pPVar2 + 8) = 0;
  *(undefined8 *)pPVar2 = 0;
  Provided::Provided(pPVar2);
  *(undefined8 *)(pPVar2 + 0x40) = 0;
  *(undefined ***)pPVar2 = &PTR__SimpleProvided_01c6c7f8;
                    /* try { // try from 009f712c to 00af7133 has its CatchHandler @ 009f7180 */
  plVar3 = *(long **)(param_1 + 0x20);
                    /* try { // try from 009f7134 to 00af715f has its CatchHandler @ 009f6d7c */
  local_90 = alStack_b0;
  if (plVar3 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar3) {
                    /* try { // try from 009f7160 to 00af7167 has its CatchHandler @ 009f7180 */
                    /* try { // try from 009f7168 to 00af716b has its CatchHandler @ 009f71c4 */
                    /* try { // try from 009f716c to 00af716f has its CatchHandler @ 009f71c0 */
                    /* try { // try from 009f7170 to 00af7173 has its CatchHandler @ 009f717c */
    (**(code **)(*plVar3 + 0x18))(plVar3,local_90);
  }
  else {
    local_90 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
                    /* try { // try from 009f7174 to 00af717b has its CatchHandler @ 009f7180 */
  local_60 = (Provided **)0x0;
                    /* catch() { ... } // from try @ 009f6f68 with catch @ 009f717c
                       catch() { ... } // from try @ 009f70a0 with catch @ 009f717c
                       catch() { ... } // from try @ 009f7170 with catch @ 009f717c
                       try { // try from 009f717c to 00af71e7 has its CatchHandler @ 009f6d7c */
  ppPVar4 = operator_new(0x50);
                    /* catch() { ... } // from try @ 009f6e54 with catch @ 009f7180
                       catch() { ... } // from try @ 009f712c with catch @ 009f7180
                       catch() { ... } // from try @ 009f7160 with catch @ 009f7180
                       catch() { ... } // from try @ 009f7174 with catch @ 009f7180 */
                    /* catch() { ... } // from try @ 009f6fc8 with catch @ 009f7188 */
                    /* catch() { ... } // from try @ 009f6eec with catch @ 009f718c */
  *ppPVar4 = (Provided *)&PTR_FUN_01c6c478;
  ppPVar4[2] = (Provided *)this;
  if (local_90 == (long *)0x0) {
                    /* catch() { ... } // from try @ 009f6ebc with catch @ 009f71c4
                       catch() { ... } // from try @ 009f6fdc with catch @ 009f71c4
                       catch() { ... } // from try @ 009f7168 with catch @ 009f71c4 */
    ppPVar4[8] = (Provided *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 009f6fb0 with catch @ 009f71a4 */
                    /* catch() { ... } // from try @ 009f6ed4 with catch @ 009f71a8 */
                    /* catch() { ... } // from try @ 009f6e80 with catch @ 009f71ac */
    if (alStack_b0 == local_90) {
      ppPVar4[8] = (Provided *)(ppPVar4 + 4);
      (**(code **)(*local_90 + 0x18))();
    }
    else {
      pPVar5 = (Provided *)(**(code **)(*local_90 + 0x10))();
      ppPVar4[8] = pPVar5;
                    /* catch() { ... } // from try @ 009f6f04 with catch @ 009f71c0
                       catch() { ... } // from try @ 009f7030 with catch @ 009f71c0
                       catch() { ... } // from try @ 009f716c with catch @ 009f71c0 */
    }
  }
  local_60 = ppPVar4;
  SimpleProvided::setCompleteFunction((SimpleProvided *)pPVar2,(function *)local_80);
  if (local_80 == local_60) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7280 with catch @ 009f7210
                       catch(type#1 @ 00000000) { ... } // from try @ 009f72b0 with catch @ 009f7210
                       catch(type#1 @ 00000000) { ... } // from try @ 009f72e0 with catch @ 009f7210
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7308 with catch @ 009f7210
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7334 with catch @ 009f7210
                        */
    pcVar6 = *(code **)(*local_60 + 0x20);
LAB_009f7218:
    (*pcVar6)();
  }
  else if (local_60 != (Provided **)0x0) {
    pcVar6 = *(code **)(*local_60 + 0x28);
    goto LAB_009f7218;
  }
  if (alStack_b0 == local_90) {
    pcVar6 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_009f724c;
    pcVar6 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar6)();
LAB_009f724c:
  local_80[0] = pPVar2;
  Computational::push((Computational *)(this + 0x70),local_80);
  pPVar2 = local_80[0];
  local_80[0] = (Provided *)0x0;
  if (pPVar2 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar2 + 8))();
  }
                    /* try { // try from 009f7278 to 00af727f has its CatchHandler @ 009f7374 */
                    /* try { // try from 009f7280 to 00af72a3 has its CatchHandler @ 009f7210 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

