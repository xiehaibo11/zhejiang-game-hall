
/* se::Object::_isNativeFunction() const */

void __thiscall se::Object::_isNativeFunction(Object *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  Object *this_00;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  byte local_70 [8];
  ulong local_68;
  void *pvStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  uVar6 = v8::Object::IsCallable(this_00);
  if ((uVar6 & 1) != 0) {
    toString();
    uVar6 = (ulong)(local_70[0] >> 1);
    pvVar3 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      uVar6 = local_68;
      pvVar3 = pvStack_60;
    }
    if (0xc < (long)uVar6) {
      pvVar1 = (void *)((long)pvVar3 + uVar6);
      pvVar7 = pvVar3;
      do {
        if ((uVar6 - 0xc == 0) || (pvVar7 = memchr(pvVar7,0x5b,uVar6 - 0xc), pvVar7 == (void *)0x0))
        break;
        iVar5 = memcmp(pvVar7,"[native code]",0xd);
        if (iVar5 == 0) {
          if ((pvVar7 != pvVar1) && ((long)pvVar7 - (long)pvVar3 != -1)) {
            bVar4 = false;
            if ((local_70[0] & 1) == 0) goto LAB_00906dbc;
            goto LAB_00906db4;
          }
          break;
        }
        pvVar7 = (void *)((long)pvVar7 + 1);
        uVar6 = (long)pvVar1 - (long)pvVar7;
      } while (0xc < (long)uVar6);
    }
    bVar4 = true;
    if ((local_70[0] & 1) != 0) {
LAB_00906db4:
      operator_delete(pvStack_60);
    }
LAB_00906dbc:
    if (!bVar4) {
      uVar8 = 1;
      goto LAB_00906dcc;
    }
  }
  uVar8 = 0;
LAB_00906dcc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

