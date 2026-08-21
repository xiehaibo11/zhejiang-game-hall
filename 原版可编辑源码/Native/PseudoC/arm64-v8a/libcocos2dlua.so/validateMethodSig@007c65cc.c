
/* LuaJavaBridge::CallInfo::validateMethodSig() */

undefined8 __thiscall LuaJavaBridge::CallInfo::validateMethodSig(CallInfo *this)

{
  int *piVar1;
  basic_string bVar2;
  int iVar3;
  undefined4 uVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  CallInfo *pCVar7;
  basic_string *pbVar8;
  void *__src;
  size_t __n;
  ulong uVar9;
  CallInfo *pCVar10;
  ulong uVar11;
  ulong local_68;
  
  pbVar8 = (basic_string *)(this + 0x38);
  bVar2 = *pbVar8;
  if (((byte)bVar2 & 1) == 0) {
    uVar9 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar9 = *(ulong *)(this + 0x40);
  }
  if (2 < uVar9) {
    if (((byte)bVar2 & 1) == 0) {
      pCVar10 = this + 0x39;
    }
    else {
      pCVar10 = *(CallInfo **)(this + 0x48);
    }
    if (*pCVar10 == (CallInfo)0x28) {
      pCVar10 = this + 0x39;
      local_68 = 1;
      while( true ) {
        pCVar7 = pCVar10;
        if (((byte)bVar2 & 1) != 0) {
          pCVar7 = *(CallInfo **)(this + 0x48);
        }
        if (pCVar7[local_68] == (CallInfo)0x29) break;
        iVar3 = checkType(this,pbVar8,&local_68);
        if (iVar3 == -1) {
          return 0;
        }
        piVar1 = *(int **)(this + 0x60);
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
        if (piVar1 == *(int **)(this + 0x68)) {
          __src = *(void **)(this + 0x58);
          __n = (long)piVar1 - (long)__src;
          uVar11 = ((long)__n >> 2) + 1;
          if (uVar11 >> 0x3e != 0) {
LAB_007c67bc:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar5 = (long)*(int **)(this + 0x68) - (long)__src;
          if ((ulong)(lVar5 >> 2) < 0x1fffffffffffffff) {
            uVar6 = lVar5 >> 1;
            if (uVar11 <= uVar6) {
              uVar11 = uVar6;
            }
            if (uVar11 != 0) {
              if (uVar11 >> 0x3e != 0) goto LAB_007c67bc;
              goto LAB_007c66e0;
            }
            __dest = (void *)0x0;
          }
          else {
            uVar11 = 0x3fffffffffffffff;
LAB_007c66e0:
            __dest = operator_new(uVar11 << 2);
          }
          piVar1 = (int *)((long)__dest + ((long)__n >> 2) * 4);
          *piVar1 = iVar3;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)(this + 0x58) = __dest;
          *(int **)(this + 0x60) = piVar1 + 1;
          *(void **)(this + 0x68) = (void *)((long)__dest + uVar11 * 4);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *piVar1 = iVar3;
          *(int **)(this + 0x60) = piVar1 + 1;
        }
        local_68 = local_68 + 1;
        if (uVar9 <= local_68) goto LAB_007c6788;
        bVar2 = *pbVar8;
      }
      if (((byte)bVar2 & 1) != 0) {
        pCVar10 = *(CallInfo **)(this + 0x48);
      }
      if (pCVar10[local_68] == (CallInfo)0x29) {
        local_68 = local_68 + 1;
        uVar4 = checkType(this,pbVar8,&local_68);
        *(undefined4 *)(this + 0x70) = uVar4;
        return 1;
      }
    }
  }
LAB_007c6788:
  *(undefined4 *)(this + 4) = 0xfffffffe;
  return 0;
}

