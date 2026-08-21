
/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char const*, char const*) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
put(time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
   long *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,undefined1 *param_6,
   undefined1 *param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  __shared_count *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  plVar4 = (long *)locale::use_facet((locale *)&local_70,(id *)&ctype<char>::id);
  plVar5 = (long *)__shared_count::__release_shared(local_70);
joined_r0x018097f4:
  do {
    plVar8 = param_2;
    if (param_6 == param_7) {
LAB_018099c4:
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return plVar8;
      }
LAB_01809a20:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(plVar5);
    }
    plVar5 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,*param_6,0);
    if (((uint)plVar5 & 0xff) == 0x25) {
      puVar9 = param_6 + 1;
      if (puVar9 == param_7) {
        if (param_2 != (long *)0x0) {
          puVar7 = (undefined1 *)param_2[6];
          uVar6 = *param_6;
          if (puVar7 == (undefined1 *)param_2[7]) {
            iVar3 = (**(code **)(*param_2 + 0x68))(param_2);
            plVar5 = (long *)0x0;
            if (iVar3 != -1) {
              plVar5 = param_2;
            }
            if (*(long *)(lVar1 + 0x28) == local_68) {
              return plVar5;
            }
            goto LAB_01809a20;
          }
LAB_018099b8:
          param_2[6] = (long)(puVar7 + 1);
          *puVar7 = uVar6;
        }
        goto LAB_018099c4;
      }
      plVar5 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,*puVar9,0);
      uVar2 = (uint)plVar5;
      uVar10 = (ulong)plVar5 & 0xffffffff;
      if (((uVar2 & 0xff) == 0x4f) || ((uVar2 & 0xff) == 0x45)) {
        puVar7 = param_6 + 2;
        if (puVar7 == param_7) {
          if (param_2 == (long *)0x0) goto LAB_018099c4;
          puVar7 = (undefined1 *)param_2[6];
          uVar6 = *param_6;
          if (puVar7 == (undefined1 *)param_2[7]) {
            plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
            if ((int)plVar5 == -1) {
              plVar8 = (long *)0x0;
              goto LAB_018099c4;
            }
          }
          else {
            param_2[6] = (long)(puVar7 + 1);
            *puVar7 = uVar6;
          }
          puVar7 = (undefined1 *)param_2[6];
          uVar6 = *puVar9;
          if (puVar7 != (undefined1 *)param_2[7]) goto LAB_018099b8;
          plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
          plVar8 = (long *)0x0;
          if ((int)plVar5 != -1) {
            plVar8 = param_2;
          }
          goto LAB_018099c4;
        }
        uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,*puVar7,0);
        puVar9 = puVar7;
      }
      else {
        uVar10 = 0;
      }
      plVar5 = (long *)(**(code **)(*(long *)this + 0x18))
                                 (this,param_2,param_3,param_4,param_5,uVar2,uVar10);
      param_2 = plVar5;
      param_6 = puVar9;
joined_r0x01809830:
      param_6 = param_6 + 1;
      goto joined_r0x018097f4;
    }
    if (param_2 != (long *)0x0) {
      puVar9 = (undefined1 *)param_2[6];
      uVar6 = *param_6;
      if (puVar9 != (undefined1 *)param_2[7]) {
        param_2[6] = (long)(puVar9 + 1);
        *puVar9 = uVar6;
        goto joined_r0x01809830;
      }
      plVar5 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
      plVar8 = (long *)0x0;
      if ((int)plVar5 != -1) {
        plVar8 = param_2;
      }
    }
    param_6 = param_6 + 1;
    param_2 = plVar8;
  } while( true );
}

