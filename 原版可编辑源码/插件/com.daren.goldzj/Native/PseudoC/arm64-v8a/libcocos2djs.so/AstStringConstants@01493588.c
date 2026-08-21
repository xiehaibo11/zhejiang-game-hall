
/* v8::internal::AstStringConstants::AstStringConstants(v8::internal::Isolate*, unsigned long) */

void __thiscall
v8::internal::AstStringConstants::AstStringConstants
          (AstStringConstants *this,Isolate *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  AstStringConstants *pAVar7;
  AstStringConstants *pAVar8;
  long local_38;
  
  Zone::Zone((Zone *)this,*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/ast/ast-value-factory.cc:169");
  *(code **)(this + 0x50) = AstRawString::Compare;
  puVar3 = malloc(0xc0);
  pAVar7 = this + 0x40;
  *(undefined8 **)pAVar7 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(this + 0x48) = 8;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  uVar4 = 4;
  lVar6 = 0x60;
  do {
    uVar4 = uVar4 + 1;
    *(undefined8 *)(*(long *)(this + 0x40) + lVar6) = 0;
    lVar6 = lVar6 + 0x18;
  } while (uVar4 < *(uint *)(this + 0x48));
  *(ulong *)(this + 0x58) = param_2;
  *(undefined4 *)(this + 0x4c) = 0;
  iVar1 = __strlen_chk("anonymous",10);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)"anonymous",iVar1,*(ulong *)(this + 0x58));
  pAVar8 = this + 0x10;
  plVar5 = *(long **)pAVar8;
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"anonymous";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x60) = plVar5;
  *plVar5 = (long)(param_1 + 0x4b0);
  local_38 = *(long *)(this + 0x60);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("(anonymous function)",0x15);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)"(anonymous function)",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"(anonymous function)";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x68) = plVar5;
  *plVar5 = (long)(param_1 + 0x4a8);
  local_38 = *(long *)(this + 0x68);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("arguments",10);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ("arguments",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"arguments";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x70) = plVar5;
  *plVar5 = (long)(param_1 + 0x4c8);
  local_38 = *(long *)(this + 0x70);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("as",3);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("as",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"as";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x78) = plVar5;
  *plVar5 = (long)(param_1 + 0x4f8);
  local_38 = *(long *)(this + 0x78);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("async",6);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("async",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"async";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x80) = plVar5;
  *plVar5 = (long)(param_1 + 0x500);
  local_38 = *(long *)(this + 0x80);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("await",6);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("await",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"await";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x88) = plVar5;
  *plVar5 = (long)(param_1 + 0x510);
  local_38 = *(long *)(this + 0x88);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("bigint",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("bigint",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"bigint";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x90) = plVar5;
  *plVar5 = (long)(param_1 + 0x520);
  local_38 = *(long *)(this + 0x90);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("boolean",8);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("boolean",iVar1,*(ulong *)(this + 0x58))
  ;
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"boolean";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x98) = plVar5;
  *plVar5 = (long)(param_1 + 0x548);
  local_38 = *(long *)(this + 0x98);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("<computed>",0xb);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)"<computed>",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"<computed>";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xa0) = plVar5;
  *plVar5 = (long)(param_1 + 0x5b0);
  local_38 = *(long *)(this + 0xa0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".brand",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".brand",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".brand";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xa8) = plVar5;
  *plVar5 = (long)(param_1 + 0x618);
  local_38 = *(long *)(this + 0xa8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("constructor",0xc);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ("constructor",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"constructor";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xb0) = plVar5;
  *plVar5 = (long)(param_1 + 0x5d0);
  local_38 = *(long *)(this + 0xb0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("default",8);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("default",iVar1,*(ulong *)(this + 0x58))
  ;
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"default";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xb8) = plVar5;
  *plVar5 = (long)(param_1 + 0x5e8);
  local_38 = *(long *)(this + 0xb8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("done",5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("done",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"done";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xc0) = plVar5;
  *plVar5 = (long)(param_1 + 0x610);
  local_38 = *(long *)(this + 0xc0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".",2);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>(".",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 200) = plVar5;
  *plVar5 = (long)(param_1 + 0x658);
  local_38 = *(long *)(this + 200);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".default",9);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".default",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".default";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xd0) = plVar5;
  *plVar5 = (long)(param_1 + 0x628);
  local_38 = *(long *)(this + 0xd0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(&DAT_01a3f04f,5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>(".for",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)&DAT_01a3f04f;
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xd8) = plVar5;
  *plVar5 = (long)(param_1 + 0x630);
  local_38 = *(long *)(this + 0xd8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".generator_object",0x12);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".generator_object",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".generator_object";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xe0) = plVar5;
  *plVar5 = (long)(param_1 + 0x638);
  local_38 = *(long *)(this + 0xe0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".iterator",10);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".iterator",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".iterator";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xe8) = plVar5;
  *plVar5 = (long)(param_1 + 0x640);
  local_38 = *(long *)(this + 0xe8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".promise",9);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".promise",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".promise";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xf0) = plVar5;
  *plVar5 = (long)(param_1 + 0x648);
  local_38 = *(long *)(this + 0xf0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".result",8);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".result",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".result";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0xf8) = plVar5;
  *plVar5 = (long)(param_1 + 0x650);
  local_38 = *(long *)(this + 0xf8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".switch_tag",0xc);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".switch_tag",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".switch_tag";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x100) = plVar5;
  *plVar5 = (long)(param_1 + 0x660);
  local_38 = *(long *)(this + 0x100);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".catch",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".catch",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".catch";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x108) = plVar5;
  *plVar5 = (long)(param_1 + 0x620);
  local_38 = *(long *)(this + 0x108);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(&DAT_0189703a,1);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)&DAT_0189703a;
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x110) = plVar5;
  *plVar5 = (long)(param_1 + 200);
  local_38 = *(long *)(this + 0x110);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("eval",5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("eval",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"eval";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x118) = plVar5;
  *plVar5 = (long)(param_1 + 0x690);
  local_38 = *(long *)(this + 0x118);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("from",5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("from",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"from";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x120) = plVar5;
  *plVar5 = (long)(param_1 + 0x6c8);
  local_38 = *(long *)(this + 0x120);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("function",9);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ("function",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"function";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x128) = plVar5;
  *plVar5 = (long)(param_1 + 0x6e0);
  local_38 = *(long *)(this + 0x128);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("get",4);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("get",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"get";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x130) = plVar5;
  *plVar5 = (long)(param_1 + 0x700);
  local_38 = *(long *)(this + 0x130);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(&DAT_0189f8a5,5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("get ",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)&DAT_0189f8a5;
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x138) = plVar5;
  *plVar5 = (long)(param_1 + 0x6f8);
  local_38 = *(long *)(this + 0x138);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("length",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)"length",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"length";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x140) = plVar5;
  *plVar5 = (long)(param_1 + 0x7b8);
  local_38 = *(long *)(this + 0x140);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("let",4);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("let",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"let";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x148) = plVar5;
  *plVar5 = (long)(param_1 + 0x7c0);
  local_38 = *(long *)(this + 0x148);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("meta",5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("meta",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"meta";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x150) = plVar5;
  *plVar5 = (long)(param_1 + 0x800);
  local_38 = *(long *)(this + 0x150);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("name",5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("name",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"name";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x158) = plVar5;
  *plVar5 = (long)(param_1 + 0x820);
  local_38 = *(long *)(this + 0x158);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("native",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("native",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"native";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x160) = plVar5;
  *plVar5 = (long)(param_1 + 0x838);
  local_38 = *(long *)(this + 0x160);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".new.target",0xc);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".new.target",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".new.target";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x168) = plVar5;
  *plVar5 = (long)(param_1 + 0x840);
  local_38 = *(long *)(this + 0x168);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("next",5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("next",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"next";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x170) = plVar5;
  *plVar5 = (long)(param_1 + 0x848);
  local_38 = *(long *)(this + 0x170);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("number",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("number",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"number";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x178) = plVar5;
  *plVar5 = (long)(param_1 + 0x890);
  local_38 = *(long *)(this + 0x178);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("object",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("object",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"object";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x180) = plVar5;
  *plVar5 = (long)(param_1 + 0x8a8);
  local_38 = *(long *)(this + 0x180);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(&DAT_019db47e,3);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("of",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)&DAT_019db47e;
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x188) = plVar5;
  *plVar5 = (long)(param_1 + 0x8b8);
  local_38 = *(long *)(this + 0x188);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("#constructor",0xd);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)"#constructor",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"#constructor";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 400) = plVar5;
  *plVar5 = (long)(param_1 + 0x8f0);
  local_38 = *(long *)(this + 400);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("__proto__",10);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ("__proto__",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"__proto__";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x198) = plVar5;
  *plVar5 = (long)(param_1 + 0x900);
  local_38 = *(long *)(this + 0x198);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("prototype",10);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ("prototype",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"prototype";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1a0) = plVar5;
  *plVar5 = (long)(param_1 + 0x908);
  local_38 = *(long *)(this + 0x1a0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("return",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("return",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"return";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1a8) = plVar5;
  *plVar5 = (long)(param_1 + 0x968);
  local_38 = *(long *)(this + 0x1a8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("set",4);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("set",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"set";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1b0) = plVar5;
  *plVar5 = (long)(param_1 + 0x9b0);
  local_38 = *(long *)(this + 0x1b0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(&DAT_019b0c3f,5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("set ",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)&DAT_019b0c3f;
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1b8) = plVar5;
  *plVar5 = (long)(param_1 + 0x9a8);
  local_38 = *(long *)(this + 0x1b8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("string",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("string",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"string";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1c0) = plVar5;
  *plVar5 = (long)(param_1 + 0xa00);
  local_38 = *(long *)(this + 0x1c0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("symbol",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("symbol",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"symbol";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1c8) = plVar5;
  *plVar5 = (long)(param_1 + 0xa20);
  local_38 = *(long *)(this + 0x1c8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("target",7);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("target",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"target";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1d0) = plVar5;
  *plVar5 = (long)(param_1 + 0xa30);
  local_38 = *(long *)(this + 0x1d0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("this",5);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("this",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"this";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1d8) = plVar5;
  *plVar5 = (long)(param_1 + 0xa48);
  local_38 = *(long *)(this + 0x1d8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk(".this_function",0xf);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)".this_function",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)".this_function";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1e0) = plVar5;
  *plVar5 = (long)(param_1 + 0xa40);
  local_38 = *(long *)(this + 0x1e0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("throw",6);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("throw",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"throw";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1e8) = plVar5;
  *plVar5 = (long)(param_1 + 0xa50);
  local_38 = *(long *)(this + 0x1e8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("undefined",10);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    ("undefined",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"undefined";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1f0) = plVar5;
  *plVar5 = (long)(param_1 + 0xaa8);
  local_38 = *(long *)(this + 0x1f0);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  iVar1 = __strlen_chk("value",6);
  uVar2 = StringHasher::HashSequentialString<unsigned_char>("value",iVar1,*(ulong *)(this + 0x58));
  plVar5 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar5) < 0x20) {
    plVar5 = (long *)Zone::NewExpand((Zone *)this,0x20);
  }
  else {
    *(long **)pAVar8 = plVar5 + 4;
  }
  *plVar5 = 0;
  plVar5[1] = (long)"value";
  plVar5[2] = (long)iVar1;
  *(uint *)(plVar5 + 3) = uVar2;
  *(undefined1 *)((long)plVar5 + 0x1c) = 1;
  *(long **)(this + 0x1f8) = plVar5;
  *plVar5 = (long)(param_1 + 0xac8);
  local_38 = *(long *)(this + 0x1f8);
  lVar6 = base::
          TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
          ::InsertNew(pAVar7,&local_38,*(uint *)(local_38 + 0x18) >> 3);
  *(undefined8 *)(lVar6 + 8) = 1;
  return;
}

