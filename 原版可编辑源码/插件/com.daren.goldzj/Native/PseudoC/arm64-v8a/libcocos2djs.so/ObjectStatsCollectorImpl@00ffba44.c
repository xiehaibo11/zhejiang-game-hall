
/* v8::internal::ObjectStatsCollectorImpl::ObjectStatsCollectorImpl(v8::internal::Heap*,
   v8::internal::ObjectStats*) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::ObjectStatsCollectorImpl
          (ObjectStatsCollectorImpl *this,Heap *param_1,ObjectStats *param_2)

{
  long lVar1;
  
  *(Heap **)this = param_1;
  *(ObjectStats **)(this + 8) = param_2;
  lVar1 = *(long *)(param_1 + 0x800);
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined4 *)(this + 0x90) = 0x3f800000;
  *(undefined ***)(this + 0x68) = &PTR__FieldStatsCollector_01ca9160;
  *(ObjectStats **)(this + 0x98) = param_2 + 0x53e70;
  *(ObjectStats **)(this + 0xa0) = param_2 + 0x53e78;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(ObjectStats **)(this + 0xa8) = param_2 + 0x53e80;
  *(ObjectStats **)(this + 0xb0) = param_2 + 0x53e88;
  *(ObjectStats **)(this + 0xb8) = param_2 + 0x53e90;
  *(ObjectStats **)(this + 0xc0) = param_2 + 0x53e98;
  *(long *)(this + 0x10) = lVar1 + 0x2701;
  *(ObjectStats **)(this + 200) = param_2 + 0x53ea0;
  return;
}

