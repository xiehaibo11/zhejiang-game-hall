
/* v8::internal::FunctionLiteral::GetDebugName() const */

void v8::internal::FunctionLiteral::GetDebugName(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  long in_x0;
  void *pvVar5;
  undefined8 *in_x8;
  ulong uVar6;
  long lVar7;
  void *__dest;
  size_t sVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *local_68;
  
  if (((*(long *)(in_x0 + 0x20) == 0) || (*(long *)(*(long *)(in_x0 + 0x20) + 8) == 0)) &&
     ((*(long *)(in_x0 + 0x40) == 0 || (*(long *)(*(long *)(in_x0 + 0x40) + 8) == 0)))) {
    if (*(undefined8 **)(in_x0 + 0x48) == (undefined8 *)0x0) {
      puVar11 = operator_new__(1);
      *puVar11 = 0;
      *in_x8 = puVar11;
    }
    else {
      local_68 = (undefined8 *)**(undefined8 **)(in_x0 + 0x48);
      String::ToCString(&local_68,1,1,0);
    }
  }
  else {
    AstConsString::ToRawStrings();
    if (local_68 == (undefined8 *)0x0) {
      puVar11 = (undefined1 *)0x0;
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)0x0;
      puVar11 = (undefined1 *)0x0;
      puVar9 = (undefined1 *)0x0;
      puVar10 = local_68;
      do {
        lVar12 = puVar10[1];
        if (*(char *)(lVar12 + 0x1c) == '\0') break;
        if (0 < *(int *)(lVar12 + 0x10)) {
          lVar7 = 0;
          pvVar5 = __dest;
          do {
            uVar4 = *(undefined1 *)(*(long *)(lVar12 + 8) + lVar7);
            if (puVar11 < puVar9) {
              *puVar11 = uVar4;
              __dest = pvVar5;
            }
            else {
              sVar8 = (long)puVar11 - (long)pvVar5;
              uVar1 = sVar8 + 1;
              if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar6 = ((long)puVar9 - (long)pvVar5) * 2;
              if (uVar1 <= uVar6) {
                uVar1 = uVar6;
              }
              if (0x3ffffffffffffffe < (ulong)((long)puVar9 - (long)pvVar5)) {
                uVar1 = 0x7fffffffffffffff;
              }
              if (uVar1 == 0) {
                __dest = (void *)0x0;
              }
              else {
                __dest = operator_new(uVar1);
              }
              puVar11 = (undefined1 *)((long)__dest + sVar8);
              puVar9 = (undefined1 *)((long)__dest + uVar1);
              *puVar11 = uVar4;
              if (0 < (long)sVar8) {
                memcpy(__dest,pvVar5,sVar8);
              }
              if (pvVar5 != (void *)0x0) {
                operator_delete(pvVar5);
              }
            }
            puVar11 = puVar11 + 1;
            iVar3 = *(int *)(lVar12 + 0x10);
            lVar7 = lVar7 + 1;
            iVar2 = iVar3;
            if (iVar3 < 0) {
              iVar2 = iVar3 + 1;
            }
            iVar2 = iVar2 >> 1;
            if (*(char *)(lVar12 + 0x1c) != '\0') {
              iVar2 = iVar3;
            }
            pvVar5 = __dest;
          } while (lVar7 < iVar2);
        }
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    sVar8 = (long)puVar11 - (long)__dest;
    pvVar5 = operator_new__(sVar8 + 1);
    memcpy(pvVar5,__dest,sVar8);
    *(undefined1 *)((long)pvVar5 + sVar8) = 0;
    *in_x8 = pvVar5;
    while (local_68 != (void *)0x0) {
      pvVar5 = (void *)*local_68;
      operator_delete(local_68);
      local_68 = pvVar5;
    }
    if (__dest != (void *)0x0) {
      operator_delete(__dest);
    }
  }
  return;
}

