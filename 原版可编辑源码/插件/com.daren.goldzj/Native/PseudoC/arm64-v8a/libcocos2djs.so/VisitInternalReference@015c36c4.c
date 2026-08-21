
/* v8::internal::Deserializer::VisitInternalReference(v8::internal::Code, v8::internal::RelocInfo*)
    */

void __thiscall
v8::internal::Deserializer::VisitInternalReference
          (Deserializer *this,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)*(int *)(this + 0x7c);
  lVar8 = *(long *)(this + 0x70);
  iVar6 = (int)(lVar7 + 1);
  *(int *)(this + 0x7c) = iVar6;
  if (*(char *)(lVar8 + lVar7) == '\"') {
    lVar1 = lVar7 + lVar8;
    bVar5 = *(byte *)(lVar8 + lVar7 + 1);
    uVar2 = *(undefined1 *)(lVar1 + 2);
    uVar3 = *(undefined1 *)(lVar1 + 3);
    uVar4 = *(undefined1 *)(lVar1 + 4);
    lVar7 = ((ulong)bVar5 & 3) + 1;
    *(int *)(this + 0x7c) = (int)lVar7 + iVar6;
    *(ulong *)*param_3 =
         param_2 + (((ulong)CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,bVar5))) &
                    0xffffffffUL >> (lVar7 * -8 + 0x20U & 0x3f)) >> 2) + 0x3f;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","data == kInternalReference");
}

