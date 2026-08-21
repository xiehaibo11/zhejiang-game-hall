
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, bool) const */

long * __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  __shared_count *local_78;
  undefined8 *local_70;
  code *local_68;
  undefined1 *puStack_60;
  undefined8 ***local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    plVar7 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return plVar7;
    }
  }
  else {
    ios_base::getloc();
    local_70 = &numpunct<char>::id;
    puStack_60 = (undefined1 *)0x0;
    local_68 = locale::id::__init;
    if (numpunct<char>::id != -1) {
      local_50 = &local_70;
      local_58 = &local_50;
      __call_once((ulong *)&numpunct<char>::id,&local_58,FUN_01208130);
    }
    if (((ulong)(*(long *)(local_78 + 0x18) - *(long *)(local_78 + 0x10) >> 3) <=
         (long)DAT_01794380 - 1U) ||
       (plVar7 = *(long **)(*(long *)(local_78 + 0x10) + ((long)DAT_01794380 - 1U) * 8),
       plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    __shared_count::__release_shared(local_78);
    if ((param_5 & 1) == 0) {
      pcVar8 = *(code **)(*plVar7 + 0x38);
    }
    else {
      pcVar8 = *(code **)(*plVar7 + 0x30);
    }
    (*pcVar8)(&local_70,plVar7);
    bVar5 = ((ulong)local_70 & 1) == 0;
    pcVar8 = (code *)((ulong)local_70 >> 1 & 0x7f);
    if (!bVar5) {
      pcVar8 = local_68;
    }
    if (pcVar8 != (code *)0x0) {
      puVar1 = (undefined1 *)((ulong)&local_70 | 1);
      plVar7 = param_2;
      if (((ulong)local_70 & 1) != 0) {
        puVar1 = puStack_60;
      }
      do {
        param_2 = plVar7;
        if (plVar7 != (long *)0x0) {
          puVar2 = (undefined1 *)plVar7[6];
          uVar3 = *puVar1;
          if (puVar2 == (undefined1 *)plVar7[7]) {
            iVar6 = (**(code **)(*plVar7 + 0x68))(plVar7);
            param_2 = (long *)0x0;
            if (iVar6 != -1) {
              param_2 = plVar7;
            }
          }
          else {
            plVar7[6] = (long)(puVar2 + 1);
            *puVar2 = uVar3;
          }
        }
        puVar1 = puVar1 + 1;
        bVar5 = ((ulong)local_70 & 1) == 0;
        pcVar8 = (code *)((ulong)local_70 >> 1 & 0x7f);
        puVar2 = (undefined1 *)((ulong)&local_70 | 1);
        if (!bVar5) {
          pcVar8 = local_68;
          puVar2 = puStack_60;
        }
        plVar7 = param_2;
      } while (puVar1 != puVar2 + (long)pcVar8);
    }
    if (!bVar5) {
      operator_delete(puStack_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

