
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, bool) const */

long * __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 *puVar9;
  locale local_50;
  undefined7 uStack_4f;
  ulong local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    plVar7 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    if (*(long *)(lVar4 + 0x28) == local_38) {
      return plVar7;
    }
  }
  else {
    ios_base::getloc();
    plVar7 = (long *)locale::use_facet(&local_50,(id *)&numpunct<char>::id);
    __shared_count::__release_shared((__shared_count *)CONCAT71(uStack_4f,local_50));
    if ((param_5 & 1) == 0) {
      pcVar8 = *(code **)(*plVar7 + 0x38);
    }
    else {
      pcVar8 = *(code **)(*plVar7 + 0x30);
    }
    (*pcVar8)(&local_50,plVar7);
    bVar5 = ((byte)local_50 & 1) == 0;
    uVar1 = (ulong)((byte)local_50 >> 1);
    if (!bVar5) {
      uVar1 = local_48;
    }
    if (uVar1 != 0) {
      plVar7 = param_2;
      puVar9 = (undefined1 *)((ulong)&local_50 | 1);
      if (((byte)local_50 & 1) != 0) {
        puVar9 = puStack_40;
      }
      do {
        param_2 = plVar7;
        if (plVar7 != (long *)0x0) {
          puVar2 = (undefined1 *)plVar7[6];
          uVar3 = *puVar9;
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
        puVar9 = puVar9 + 1;
        bVar5 = ((byte)local_50 & 1) == 0;
        uVar1 = (ulong)((byte)local_50 >> 1);
        puVar2 = (undefined1 *)((ulong)&local_50 | 1);
        if (!bVar5) {
          uVar1 = local_48;
          puVar2 = puStack_40;
        }
        plVar7 = param_2;
      } while (puVar9 != puVar2 + uVar1);
    }
    if (!bVar5) {
      operator_delete(puStack_40);
    }
    if (*(long *)(lVar4 + 0x28) == local_38) {
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

