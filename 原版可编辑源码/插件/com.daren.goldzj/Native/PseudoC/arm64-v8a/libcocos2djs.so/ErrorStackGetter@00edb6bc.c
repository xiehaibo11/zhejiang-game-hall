
/* v8::internal::Accessors::ErrorStackGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::ErrorStackGetter(undefined8 param_1,long *param_2)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  Isolate *this;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  Isolate *local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  this = *(Isolate **)(*param_2 + 0x10);
  uVar2 = *(undefined8 *)(this + 0x95a0);
  lVar3 = *(long *)(this + 0x95a8);
  pIVar1 = this + 0xbe8;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  uVar7 = *(ulong *)(this + 0xbe8);
  lVar6 = *param_2 + 8;
  local_a8 = 3;
  if ((*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x40) &&
     (local_a8 = 3, (*(byte *)(uVar7 + 7) & 1) != 0)) {
    local_a8 = 0;
  }
  local_9c = 0xc000000000;
  local_88 = pIVar1;
  local_90 = this;
  if ((*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) & 0xffe0) == 0x20
     ) {
    local_88 = (Isolate *)StringTable::LookupString(this,pIVar1);
  }
  uStack_80 = 0;
  uStack_70 = 0;
  local_58 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_78 = lVar6;
  local_68 = lVar6;
  LookupIterator::Start<false>((LookupIterator *)&local_a8);
  if (local_a4 == 4) {
    uVar7 = *(ulong *)(local_90 + 0xa0);
joined_r0x00edb7c4:
    if ((uVar7 & 1) == 0) {
      *(ulong *)(*param_2 + 0x20) = uVar7;
      if (this == (Isolate *)0x0) {
        return;
      }
      goto LAB_00edb86c;
    }
    uVar8 = *(undefined8 *)(this + 0xa0);
    if ((int)uVar7 != (int)uVar8) {
      if (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) - 0x76 < 0xf)
      {
        puVar5 = (undefined8 *)ErrorUtils::FormatStackTrace(this,lVar6);
        if ((puVar5 == (undefined8 *)0x0) ||
           (lVar6 = Object::SetProperty(this,lVar6,pIVar1,puVar5,0,1), lVar6 == 0)) {
          Isolate::OptionalRescheduleException(this,false);
        }
        else {
          *(undefined8 *)(*param_2 + 0x20) = *puVar5;
        }
      }
      else {
        *(ulong *)(*param_2 + 0x20) = uVar7;
      }
      goto LAB_00edb86c;
    }
  }
  else {
    puVar4 = (ulong *)Object::GetProperty((LookupIterator *)&local_a8,false);
    if (puVar4 != (ulong *)0x0) {
      uVar7 = *puVar4;
      goto joined_r0x00edb7c4;
    }
    uVar8 = *(undefined8 *)(this + 0xa0);
  }
  *(undefined8 *)(*param_2 + 0x20) = uVar8;
LAB_00edb86c:
  *(undefined8 *)(this + 0x95a0) = uVar2;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar3) {
    *(long *)(this + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(this);
  }
  return;
}

