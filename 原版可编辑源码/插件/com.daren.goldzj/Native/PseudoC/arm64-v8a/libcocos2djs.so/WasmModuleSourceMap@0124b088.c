
/* v8::internal::wasm::WasmModuleSourceMap::WasmModuleSourceMap(v8::Isolate*, v8::Local<v8::String>)
    */

void __thiscall
v8::internal::wasm::WasmModuleSourceMap::WasmModuleSourceMap
          (WasmModuleSourceMap *this,Isolate *param_1,undefined8 param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Object *pOVar6;
  long lVar7;
  Value *pVVar8;
  ulong uVar9;
  Value *pVVar10;
  String *pSVar11;
  char *pcVar12;
  size_t sVar13;
  int iVar14;
  void *pvVar15;
  char *local_90;
  size_t local_88;
  void *local_80;
  HandleScope aHStack_78 [24];
  
  this[0x60] = (WasmModuleSourceMap)0x0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  v8::HandleScope::HandleScope(aHStack_78,param_1);
  uVar5 = v8::Context::New(param_1,0,0,0,0,0,0);
  pOVar6 = (Object *)JSON::Parse(uVar5,param_3);
  if (pOVar6 == (Object *)0x0) goto LAB_0124b46c;
  lVar7 = v8::String::NewFromUtf8(param_1,"version",0,0xffffffff);
  if (lVar7 == 0) {
    v8::V8::ToLocalEmpty();
  }
  pVVar8 = (Value *)v8::Object::Get(pOVar6,uVar5,lVar7);
  if ((((pVVar8 == (Value *)0x0) || (uVar9 = v8::Value::IsUint32(pVVar8), (uVar9 & 1) == 0)) ||
      (uVar9 = v8::Value::Uint32Value(pVVar8,uVar5), (uVar9 & 0xff) == 0)) ||
     ((uVar9 & 0xffffffff00000000) != 0x300000000)) goto LAB_0124b46c;
  lVar7 = v8::String::NewFromUtf8(param_1,"sources",0,0xffffffff);
  if (lVar7 == 0) {
    v8::V8::ToLocalEmpty();
  }
  pVVar8 = (Value *)v8::Object::Get(pOVar6,uVar5,lVar7);
  if ((pVVar8 == (Value *)0x0) || (uVar9 = v8::Value::IsArray(pVVar8), (uVar9 & 1) == 0))
  goto LAB_0124b46c;
  lVar7 = v8::String::NewFromUtf8(param_1,"length",0,0xffffffff);
  if (lVar7 == 0) {
    v8::V8::ToLocalEmpty();
  }
  pVVar10 = (Value *)v8::Object::Get((Object *)pVVar8,uVar5,lVar7);
  if ((pVVar10 == (Value *)0x0) ||
     (uVar9 = v8::Value::Uint32Value(pVVar10,uVar5), (uVar9 & 0xff) == 0)) goto LAB_0124b46c;
  iVar4 = (int)(uVar9 >> 0x20);
  if (iVar4 != 0) {
    iVar14 = 0;
    do {
      pSVar11 = (String *)v8::Object::Get((Object *)pVVar8,uVar5,iVar14);
      if (((pSVar11 == (String *)0x0) || (uVar9 = *(ulong *)pSVar11, (uVar9 & 3) != 1)) ||
         (0x3f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar9 - 1))))
      goto LAB_0124b46c;
      iVar3 = v8::String::Utf8Length(pSVar11,param_1);
      pcVar12 = operator_new__((long)(iVar3 + 1));
      v8::String::WriteUtf8(pSVar11,param_1,pcVar12,-1,(int *)0x0,0);
      pcVar12[iVar3] = '\0';
      puVar1 = *(ulong **)(this + 0x20);
      local_90 = pcVar12;
      if (puVar1 < *(ulong **)(this + 0x28)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        sVar13 = strlen(pcVar12);
        if (0xffffffffffffffef < sVar13) goto LAB_0124b4b4;
        if (sVar13 < 0x17) {
          pvVar15 = (void *)((long)puVar1 + 1);
          *(char *)puVar1 = (char)((int)sVar13 << 1);
          if (sVar13 != 0) goto LAB_0124b30c;
        }
        else {
          uVar9 = sVar13 + 0x10 & 0xfffffffffffffff0;
          pvVar15 = operator_new(uVar9);
          puVar1[1] = sVar13;
          puVar1[2] = (ulong)pvVar15;
          *puVar1 = uVar9 | 1;
LAB_0124b30c:
          memcpy(pvVar15,pcVar12,sVar13);
        }
        *(undefined1 *)((long)pvVar15 + sVar13) = 0;
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 0x18;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::__emplace_back_slow_path<char*>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x18),&local_90);
      }
      operator_delete__(pcVar12);
      iVar14 = iVar14 + 1;
    } while (iVar4 != iVar14);
  }
  lVar7 = v8::String::NewFromUtf8(param_1,"mappings",0,0xffffffff);
  if (lVar7 == 0) {
    v8::V8::ToLocalEmpty();
  }
  pSVar11 = (String *)v8::Object::Get(pOVar6,uVar5,lVar7);
  if (((pSVar11 == (String *)0x0) || (uVar9 = *(ulong *)pSVar11, (uVar9 & 3) != 1)) ||
     (0x3f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar9 - 1))))
  goto LAB_0124b46c;
  iVar4 = v8::String::Utf8Length(pSVar11,param_1);
  pcVar12 = operator_new__((long)(iVar4 + 1));
  v8::String::WriteUtf8(pSVar11,param_1,pcVar12,-1,(int *)0x0,0);
  pcVar12[iVar4] = '\0';
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = (char *)0x0;
  sVar13 = strlen(pcVar12);
  if (0xffffffffffffffef < sVar13) {
LAB_0124b4b4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar13 < 0x17) {
    pvVar15 = (void *)((ulong)&local_90 | 1);
    local_90 = (char *)CONCAT71(local_90._1_7_,(char)((int)sVar13 << 1));
    if (sVar13 != 0) goto LAB_0124b42c;
  }
  else {
    uVar9 = sVar13 + 0x10 & 0xfffffffffffffff0;
    pvVar15 = operator_new(uVar9);
    local_90 = (char *)(uVar9 | 1);
    local_88 = sVar13;
    local_80 = pvVar15;
LAB_0124b42c:
    memcpy(pvVar15,pcVar12,sVar13);
  }
  *(undefined1 *)((long)pvVar15 + sVar13) = 0;
  bVar2 = DecodeMapping(this,(basic_string *)&local_90);
  this[0x60] = (WasmModuleSourceMap)(bVar2 & 1);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  operator_delete__(pcVar12);
LAB_0124b46c:
  v8::HandleScope::~HandleScope(aHStack_78);
  return;
}

