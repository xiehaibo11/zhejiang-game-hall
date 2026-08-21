
/* v8::internal::FrameInspector::~FrameInspector() */

void __thiscall v8::internal::FrameInspector::~FrameInspector(FrameInspector *this)

{
  InterpretedFrameDeleter *this_00;
  void *pvVar1;
  InterpretedFrame *pIVar2;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *pvVar3;
  Malloced *this_01;
  
  this_00 = (InterpretedFrameDeleter *)(this + 0x18);
  pIVar2 = *(InterpretedFrame **)this_00;
  *(undefined8 *)this_00 = 0;
  pvVar3 = (void *)0x0;
  if (pIVar2 != (InterpretedFrame *)0x0) {
    wasm::InterpretedFrameDeleter::operator()(this_00,pIVar2);
    pvVar3 = extraout_x1;
  }
  this_01 = *(Malloced **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (this_01 != (Malloced *)0x0) {
    pvVar1 = *(void **)(this_01 + 0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)(this_01 + 0x30) = pvVar1;
      operator_delete(pvVar1);
      pvVar3 = extraout_x1_00;
    }
    pvVar1 = *(void **)(this_01 + 0x10);
    if (pvVar1 != (void *)0x0) {
      *(void **)(this_01 + 0x18) = pvVar1;
      operator_delete(pvVar1);
      pvVar3 = extraout_x1_01;
    }
    Malloced::operator_delete(this_01,pvVar3);
    return;
  }
  return;
}

