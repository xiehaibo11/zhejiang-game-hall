
/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char const*, char const*) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
put(time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
   long *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,undefined1 *param_6,
   undefined1 *param_7)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  __shared_count *local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ios_base::getloc();
  local_90 = &ctype<char>::id;
  uStack_80 = 0;
  local_88 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)&ctype<char>::id,&local_78,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3) <=
       (long)DAT_01794330 - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_98 + 0x10) + ((long)DAT_01794330 - 1U) * 8),
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  plVar4 = (long *)__shared_count::__release_shared(local_98);
joined_r0x011ebe6c:
  do {
    plVar8 = param_2;
    if (param_6 == param_7) {
LAB_011ec038:
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return plVar8;
      }
LAB_011ec098:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(plVar4);
    }
    plVar4 = (long *)(**(code **)(*plVar10 + 0x48))(plVar10,*param_6,0);
    if (((uint)plVar4 & 0xff) == 0x25) {
      puVar9 = param_6 + 1;
      if (puVar9 == param_7) {
        if (param_2 != (long *)0x0) {
          puVar7 = (undefined1 *)param_2[6];
          uVar6 = *param_6;
          if (puVar7 == (undefined1 *)param_2[7]) {
            iVar3 = (**(code **)(*param_2 + 0x68))(param_2);
            plVar4 = (long *)0x0;
            if (iVar3 != -1) {
              plVar4 = param_2;
            }
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return plVar4;
            }
            goto LAB_011ec098;
          }
LAB_011ec02c:
          param_2[6] = (long)(puVar7 + 1);
          *puVar7 = uVar6;
        }
        goto LAB_011ec038;
      }
      plVar4 = (long *)(**(code **)(*plVar10 + 0x48))(plVar10,*puVar9,0);
      uVar1 = (uint)plVar4 & 0xff;
      if ((uVar1 == 0x4f) || (uVar1 == 0x45)) {
        puVar7 = param_6 + 2;
        if (puVar7 == param_7) {
          if (param_2 == (long *)0x0) goto LAB_011ec038;
          puVar7 = (undefined1 *)param_2[6];
          uVar6 = *param_6;
          if (puVar7 == (undefined1 *)param_2[7]) {
            plVar4 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
            if ((int)plVar4 == -1) {
              plVar8 = (long *)0x0;
              goto LAB_011ec038;
            }
          }
          else {
            param_2[6] = (long)(puVar7 + 1);
            *puVar7 = uVar6;
          }
          puVar7 = (undefined1 *)param_2[6];
          uVar6 = *puVar9;
          if (puVar7 != (undefined1 *)param_2[7]) goto LAB_011ec02c;
          plVar4 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
          plVar8 = (long *)0x0;
          if ((int)plVar4 != -1) {
            plVar8 = param_2;
          }
          goto LAB_011ec038;
        }
        uVar5 = (**(code **)(*plVar10 + 0x48))(plVar10,*puVar7,0);
        uVar5 = uVar5 & 0xffffffff;
        puVar9 = puVar7;
        uVar11 = (ulong)plVar4 & 0xffffffff;
      }
      else {
        uVar11 = 0;
        uVar5 = (ulong)plVar4 & 0xffffffff;
      }
      plVar4 = (long *)(**(code **)(*(long *)this + 0x18))
                                 (this,param_2,param_3,param_4,param_5,uVar5,uVar11);
      param_2 = plVar4;
      param_6 = puVar9;
joined_r0x011ebf94:
      param_6 = param_6 + 1;
      goto joined_r0x011ebe6c;
    }
    if (param_2 != (long *)0x0) {
      puVar9 = (undefined1 *)param_2[6];
      uVar6 = *param_6;
      if (puVar9 != (undefined1 *)param_2[7]) {
        param_2[6] = (long)(puVar9 + 1);
        *puVar9 = uVar6;
        goto joined_r0x011ebf94;
      }
      plVar4 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
      plVar8 = (long *)0x0;
      if ((int)plVar4 != -1) {
        plVar8 = param_2;
      }
    }
    param_6 = param_6 + 1;
    param_2 = plVar8;
  } while( true );
}

