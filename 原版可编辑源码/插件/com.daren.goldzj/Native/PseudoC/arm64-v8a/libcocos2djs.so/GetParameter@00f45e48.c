
/* v8::internal::JavaScriptFrame::GetParameter(int) const */

undefined8 __thiscall v8::internal::JavaScriptFrame::GetParameter(JavaScriptFrame *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (**(code **)(*(long *)this + 0x78))();
  lVar2 = (**(code **)(*(long *)this + 0x38))(this);
  return *(undefined8 *)(lVar2 + (long)(iVar1 + ~param_1) * 8);
}

