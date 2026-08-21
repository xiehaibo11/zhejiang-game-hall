
/* v8::Object::SetInternalField(int, v8::Local<v8::Value>) */

void __thiscall v8::Object::SetInternalField(Object *this,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = FUN_00ebf580(this,param_2,"v8::Object::SetInternalField()");
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)this;
    uVar6 = *param_3;
    uVar4 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1);
    sVar2 = *(short *)(uVar4 + 7);
    if (sVar2 == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = internal::JSObject::GetHeaderSize(sVar2,*(char *)(uVar4 + 9) < '\0');
    }
    lVar5 = (long)(iVar3 + (int)param_2 * 8);
    lVar1 = uVar7 + lVar5;
    *(int *)(lVar1 + -1) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      lVar5 = (uVar7 - 1) + lVar5;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(uVar7,lVar5,uVar6);
        uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(uVar7,lVar5,uVar6);
      }
    }
    *(undefined4 *)(lVar1 + 3) = 0;
  }
  return;
}

