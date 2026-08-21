
/* v8::internal::compiler::PipelineData::~PipelineData() */

void __thiscall v8::internal::compiler::PipelineData::~PipelineData(PipelineData *this)

{
  long *plVar1;
  long *plVar2;
  CodeGenerator *this_00;
  Typer *this_01;
  void *pvVar3;
  
  this_00 = *(CodeGenerator **)(this + 0x68);
  if (this_00 != (CodeGenerator *)0x0) {
    CodeGenerator::~CodeGenerator(this_00);
    operator_delete(this_00);
  }
  this_01 = *(Typer **)(this + 0x70);
  *(undefined8 *)(this + 0x68) = 0;
  if (this_01 != (Typer *)0x0) {
    Typer::~Typer(this_01);
    operator_delete(this_01);
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long *)(this + 0x168) != 0) {
    if (*(long *)(this + 0x160) != 0) {
      ZoneStats::ReturnZone(*(Zone **)(this + 0x158));
    }
    *(undefined8 *)(this + 0x160) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x170) = 0;
  }
  if (*(long *)(this + 0x108) != 0) {
    if (*(long *)(this + 0x100) != 0) {
      ZoneStats::ReturnZone(*(Zone **)(this + 0xf8));
    }
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x110) = 0;
  }
  if (*(long *)(this + 0x130) != 0) {
    if (*(long *)(this + 0x128) != 0) {
      ZoneStats::ReturnZone(*(Zone **)(this + 0x120));
    }
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    pvVar3 = *(void **)(this + 0x140);
    if (pvVar3 != (void *)0x0) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
      ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
                 *)((long)pvVar3 + 0x248),*(__tree_node **)((long)pvVar3 + 0x250));
      if (*(long *)((long)pvVar3 + 0x228) != 0) {
        *(long *)((long)pvVar3 + 0x230) = *(long *)((long)pvVar3 + 0x228);
      }
      plVar2 = (long *)*(long *)((long)pvVar3 + 0x208);
      while (plVar1 = plVar2, plVar1 != (long *)0x0) {
        if (plVar1[0xc] != 0) {
          plVar1[0xd] = plVar1[0xc];
        }
        plVar2 = (long *)*plVar1;
        if (plVar1[8] != 0) {
          plVar1[9] = plVar1[8];
        }
      }
      plVar2 = *(long **)((long)pvVar3 + 0x1d0);
      *(undefined8 *)((long)pvVar3 + 0x1f0) = 0;
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      }
      plVar2 = *(long **)((long)pvVar3 + 0x198);
      *(undefined8 *)((long)pvVar3 + 0x1b8) = 0;
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      }
      *(undefined ***)((long)pvVar3 + 0xd8) = &PTR__StdoutStream_01ca1150;
      *(undefined8 *)((long)pvVar3 + 0x180) = 0;
      *(undefined ***)((long)pvVar3 + 0x78) = &PTR__StdoutStream_01ca1128;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)((long)pvVar3 + 0x80));
      std::__ndk1::ios_base::~ios_base((ios_base *)((long)pvVar3 + 0xd8));
      for (plVar2 = *(long **)((long)pvVar3 + 0x50); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2
          ) {
      }
      operator_delete(pvVar3);
    }
    *(undefined8 *)(this + 0x140) = 0;
    *(undefined8 *)(this + 0x148) = 0;
  }
  if (*(long *)(this + 0x98) != 0) {
    if (*(long *)(this + 0x90) != 0) {
      ZoneStats::ReturnZone(*(Zone **)(this + 0x88));
    }
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
  }
  if (((byte)this[0x180] & 1) != 0) {
    operator_delete(*(void **)(this + 400));
  }
  if (*(long *)(this + 0x160) != 0) {
    ZoneStats::ReturnZone(*(Zone **)(this + 0x158));
  }
  *(undefined8 *)(this + 0x160) = 0;
  if (*(long *)(this + 0x128) != 0) {
    ZoneStats::ReturnZone(*(Zone **)(this + 0x120));
  }
  *(undefined8 *)(this + 0x128) = 0;
  if (*(long *)(this + 0x100) != 0) {
    ZoneStats::ReturnZone(*(Zone **)(this + 0xf8));
  }
  *(undefined8 *)(this + 0x100) = 0;
  if (*(long *)(this + 0x90) != 0) {
    ZoneStats::ReturnZone(*(Zone **)(this + 0x88));
  }
  pvVar3 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    return;
  }
  return;
}

