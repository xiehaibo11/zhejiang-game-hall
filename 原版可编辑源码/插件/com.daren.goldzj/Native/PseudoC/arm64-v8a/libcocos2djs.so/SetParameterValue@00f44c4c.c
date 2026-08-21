
/* v8::internal::JavaScriptFrame::SetParameterValue(int, v8::internal::Object) const */

void __thiscall
v8::internal::JavaScriptFrame::SetParameterValue
          (JavaScriptFrame *this,uint param_1,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (**(code **)(*(long *)this + 0x78))();
  lVar2 = (**(code **)(*(long *)this + 0x38))(this);
  *(undefined8 *)(lVar2 + (long)(int)(iVar1 + ~param_1) * 8) = param_3;
  return;
}

