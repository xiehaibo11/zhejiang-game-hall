
/* v8::Object::SetAlignedPointerInInternalFields(int, int*, void**) */

void __thiscall
v8::Object::SetAlignedPointerInInternalFields(Object *this,int param_1,int *param_2,void **param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  
  uVar9 = *(ulong *)this;
  uVar8 = (ulong)(uint)param_1;
  uVar10 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1);
  bVar3 = *(byte *)(uVar10 + 3);
  if (bVar3 == 0) {
    iVar5 = 0;
  }
  else {
    if (*(short *)(uVar10 + 7) == 0x421) {
      iVar5 = 0xc;
    }
    else {
      iVar5 = internal::JSObject::GetHeaderSize(*(short *)(uVar10 + 7),*(char *)(uVar10 + 9) < '\0')
      ;
    }
    iVar5 = (((int)((uint)bVar3 * 4 - iVar5) >> 2) - (uint)*(byte *)(uVar10 + 3)) +
            (uint)*(byte *)(uVar10 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = iVar5 >> 1;
  }
  if (0 < param_1) {
    do {
      iVar2 = *param_2;
      if (iVar5 <= iVar2) {
        lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar7 != 0) {
          if (*(code **)(lVar7 + 0xb738) != (code *)0x0) {
            (**(code **)(lVar7 + 0xb738))
                      ("v8::Object::SetAlignedPointerInInternalFields()",
                       "Internal field out of bounds");
            *(undefined1 *)(lVar7 + 0xb6b9) = 1;
            return;
          }
        }
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n",
                   "v8::Object::SetAlignedPointerInInternalFields()","Internal field out of bounds")
        ;
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      pvVar11 = *param_3;
      uVar10 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1);
      sVar4 = *(short *)(uVar10 + 7);
      if (sVar4 == 0x421) {
        iVar6 = 0xc;
        if (((ulong)pvVar11 & 1) == 0) goto LAB_00ebfa20;
LAB_00ebfa8c:
        lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar7 == 0) {
LAB_00ebfb18:
          base::OS::PrintError
                    ("\n#\n# Fatal error in %s\n# %s\n#\n\n",
                     "v8::Object::SetAlignedPointerInInternalFields()","Unaligned pointer");
                    /* WARNING: Subroutine does not return */
          base::OS::Abort();
        }
        if (*(code **)(lVar7 + 0xb738) == (code *)0x0) goto LAB_00ebfb18;
        (**(code **)(lVar7 + 0xb738))
                  ("v8::Object::SetAlignedPointerInInternalFields()","Unaligned pointer");
        *(undefined1 *)(lVar7 + 0xb6b9) = 1;
      }
      else {
        iVar6 = internal::JSObject::GetHeaderSize(sVar4,*(char *)(uVar10 + 9) < '\0');
        if (((ulong)pvVar11 & 1) != 0) goto LAB_00ebfa8c;
LAB_00ebfa20:
        puVar1 = (undefined4 *)((long)(uVar9 - 1) + (long)(iVar6 + iVar2 * 8));
        *puVar1 = (int)pvVar11;
        puVar1[1] = (int)((ulong)pvVar11 >> 0x20);
      }
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
      param_2 = param_2 + 1;
    } while (uVar8 != 0);
  }
  return;
}

