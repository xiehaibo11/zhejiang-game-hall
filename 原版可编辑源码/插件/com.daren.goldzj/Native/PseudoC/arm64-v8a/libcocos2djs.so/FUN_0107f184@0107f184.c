
void FUN_0107f184(ulong param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *__dest;
  undefined8 *__src;
  ulong __n;
  ulong local_50;
  ulong local_48;
  
  local_50 = param_2;
  local_48 = param_1;
  if ((*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  iVar2 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
  iVar3 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_50);
  lVar4 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
  lVar5 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_50);
  __src = (undefined8 *)(*(long *)(local_48 + 0x27) + (ulong)*(uint *)(local_48 + 0x2f));
  uVar1 = *(long *)(local_50 + 0x27) + (ulong)*(uint *)(local_50 + 0x2f);
  if ((iVar2 == iVar3) || (lVar4 == lVar5 && (2 < iVar2 - 7U && 2 < iVar3 - 7U))) {
LAB_0107f2d0:
    lVar4 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
    memmove((void *)(uVar1 + lVar4 * param_4),__src,lVar4 * param_3);
    return;
  }
  __n = *(ulong *)(local_48 + 0x17);
  __dest = (undefined8 *)0x0;
  if ((uVar1 < (long)__src + __n) && (__src < (undefined8 *)(uVar1 + *(long *)(local_50 + 0x17)))) {
    __dest = operator_new__(__n);
    memcpy(__dest,__src,__n);
    __src = __dest;
  }
  switch(*(byte *)((local_48 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(local_48 - 1)) >> 3) {
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x19:
    if (param_3 != 0) {
      FUN_010c3880();
      goto LAB_0107f2d0;
    }
    break;
  case 0x17:
  case 0x18:
    if (param_3 == 0) break;
    FUN_010c38a8();
  case 0x15:
    if (param_3 != 0) {
      FUN_010c3894();
switchD_0107f2c4_caseD_1a:
      if (param_3 != 0) {
        puVar6 = (undefined8 *)(uVar1 + param_4 * 8);
        do {
          param_3 = param_3 + -1;
          *puVar6 = *__src;
          puVar6 = puVar6 + 1;
          __src = __src + 1;
        } while (param_3 != 0);
      }
    }
    break;
  case 0x1a:
    goto switchD_0107f2c4_caseD_1a;
  case 0x1b:
    if (param_3 != 0) {
      puVar6 = (undefined8 *)(uVar1 + param_4 * 8);
      do {
        param_3 = param_3 + -1;
        *puVar6 = *__src;
        puVar6 = puVar6 + 1;
        __src = __src + 1;
      } while (param_3 != 0);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (__dest != (undefined8 *)0x0) {
    operator_delete__(__dest);
  }
  return;
}

