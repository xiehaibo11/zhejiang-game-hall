
/* JavaScriptJavaBridge::CallInfo::validateMethodSig() */

void __thiscall JavaScriptJavaBridge::CallInfo::validateMethodSig(CallInfo *this)

{
  char *pcVar1;
  basic_string bVar2;
  long lVar3;
  char cVar4;
  CallInfo CVar5;
  undefined8 uVar6;
  ulong uVar7;
  CallInfo *pCVar8;
  basic_string *pbVar9;
  CallInfo *pCVar10;
  void *__src;
  size_t __n;
  void *__dest;
  ulong uVar11;
  ulong uVar12;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar9 = (basic_string *)(this + 0x38);
  bVar2 = *pbVar9;
  if (((byte)bVar2 & 1) == 0) {
    uVar12 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar12 = *(ulong *)(this + 0x40);
  }
  if (2 < uVar12) {
    if (((byte)bVar2 & 1) == 0) {
      pCVar10 = this + 0x39;
    }
    else {
      pCVar10 = *(CallInfo **)(this + 0x48);
    }
    if (*pCVar10 == (CallInfo)0x28) {
      pCVar10 = this + 0x39;
      local_70 = 1;
      while( true ) {
        pCVar8 = pCVar10;
        if (((byte)bVar2 & 1) != 0) {
          pCVar8 = *(CallInfo **)(this + 0x48);
        }
        if (pCVar8[local_70] == (CallInfo)0x29) break;
        cVar4 = checkType(this,pbVar9,&local_70);
        if (cVar4 == '\0') {
          uVar6 = 0;
          goto LAB_008b3734;
        }
        pcVar1 = *(char **)(this + 0x60);
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
        if (pcVar1 == *(char **)(this + 0x68)) {
          __src = *(void **)(this + 0x58);
          __n = (long)pcVar1 - (long)__src;
          uVar11 = __n + 1;
          if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar7 = (long)*(char **)(this + 0x68) - (long)__src;
          if (uVar7 < 0x3fffffffffffffff) {
            uVar7 = uVar7 * 2;
            if (uVar11 <= uVar7) {
              uVar11 = uVar7;
            }
            if (uVar11 != 0) goto LAB_008b3678;
            __dest = (void *)0x0;
          }
          else {
            uVar11 = 0x7fffffffffffffff;
LAB_008b3678:
            __dest = operator_new(uVar11);
          }
          *(char *)((long)__dest + __n) = cVar4;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)(this + 0x58) = __dest;
          *(char **)(this + 0x60) = (char *)((long)__dest + __n) + 1;
          *(ulong *)(this + 0x68) = (long)__dest + uVar11;
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *pcVar1 = cVar4;
          *(char **)(this + 0x60) = pcVar1 + 1;
        }
        local_70 = local_70 + 1;
        if (uVar12 <= local_70) goto LAB_008b371c;
        bVar2 = *pbVar9;
      }
      if (((byte)bVar2 & 1) != 0) {
        pCVar10 = *(CallInfo **)(this + 0x48);
      }
      if (pCVar10[local_70] == (CallInfo)0x29) {
        local_70 = local_70 + 1;
        CVar5 = (CallInfo)checkType(this,pbVar9,&local_70);
        this[0x70] = CVar5;
        uVar6 = 1;
        goto LAB_008b3734;
      }
LAB_008b371c:
      uVar6 = 0;
      *(undefined4 *)(this + 4) = 0xfffffffe;
      goto LAB_008b3734;
    }
  }
  uVar6 = 0;
  *(undefined4 *)(this + 4) = 0xfffffffe;
LAB_008b3734:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

