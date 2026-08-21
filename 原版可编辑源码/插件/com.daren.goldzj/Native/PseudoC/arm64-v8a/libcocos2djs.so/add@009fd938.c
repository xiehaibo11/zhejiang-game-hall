
/* universe::Branches::add(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned char*, unsigned long, std::__ndk1::function<void
   (bool)> const&) const */

void __thiscall
universe::Branches::add
          (Branches *this,basic_string *param_1,uchar *param_2,ulong param_3,function *param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  Provided *pPVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  long *plVar5;
  Service *pSVar6;
  code *pcVar7;
  Provided *local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pPVar4 = operator_new(0x80);
  *(undefined8 *)(pPVar4 + 0x68) = 0;
  *(undefined8 *)(pPVar4 + 0x60) = 0;
  *(undefined8 *)(pPVar4 + 0x78) = 0;
  *(undefined8 *)(pPVar4 + 0x70) = 0;
  *(undefined8 *)(pPVar4 + 0x48) = 0;
  *(undefined8 *)(pPVar4 + 0x40) = 0;
  *(undefined8 *)(pPVar4 + 0x58) = 0;
  *(undefined8 *)(pPVar4 + 0x50) = 0;
  *(undefined8 *)(pPVar4 + 0x28) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined8 *)(pPVar4 + 0x38) = 0;
  *(undefined8 *)(pPVar4 + 0x30) = 0;
  *(undefined8 *)(pPVar4 + 8) = 0;
  *(undefined8 *)pPVar4 = 0;
  *(undefined8 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x10) = 0;
  core::Provided::Provided(pPVar4);
  *(undefined8 *)(pPVar4 + 0x28) = 0;
  *(undefined8 *)(pPVar4 + 0x30) = 0;
  *(undefined ***)pPVar4 = &PTR__BranchesTask_01c6c688;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pPVar4 + 0x20);
  *(undefined8 *)this_00 = 0;
  pPVar4[0x48] = (Provided)0x0;
  *(undefined8 *)(pPVar4 + 0x70) = 0;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  *(uchar **)(pPVar4 + 0x38) = param_2;
  *(ulong *)(pPVar4 + 0x40) = param_3;
  plVar5 = *(long **)(param_4 + 0x20);
  if (plVar5 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)param_4 == plVar5) {
    local_60 = alStack_80;
    (**(code **)(*plVar5 + 0x18))(plVar5,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  FUN_0098f2b0(alStack_80,pPVar4 + 0x50);
  if (alStack_80 == local_60) {
    pcVar7 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_009fda58;
    pcVar7 = *(code **)(*local_60 + 0x28);
                    /* try { // try from 009fda48 to 00afdb4f has its CatchHandler @ 009fd85c */
  }
  (*pcVar7)();
LAB_009fda58:
  pSVar6 = (Service *)core::Service::getInstance();
  local_88 = pPVar4;
  core::Service::addTask(pSVar6,&local_88);
  pPVar4 = local_88;
  local_88 = (Provided *)0x0;
  if (pPVar4 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar4 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

