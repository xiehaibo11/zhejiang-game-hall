
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* v8::internal::CallDescriptors::InitializeOncePerProcess() */

void v8::internal::CallDescriptors::InitializeOncePerProcess(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 local_c0 [12];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [12];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd2d0;
  local_c0._8_4_ = 0x1d2c238;
  uStack_b4 = 0;
  AbortDescriptor::InitializePlatformSpecific
            ((AbortDescriptor *)local_c0,(CallInterfaceDescriptorData *)call_descriptor_data_);
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,call_descriptor_data_);
  local_c0._0_8_ = 0x4000000001;
  local_c0._8_4_ = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x28),1,(Register *)local_c0);
  call_descriptor_data_._52_4_ = 1;
  call_descriptor_data_._44_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._72_8_ = puVar3;
  *puVar3 = 0x4050707;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd300;
  local_c0._8_4_ = 0x1d2c288;
  uStack_b4 = 0;
  AllocateHeapNumberDescriptor::InitializePlatformSpecific
            ((AllocateHeapNumberDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x50));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c288);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd3c0;
  local_c0._8_4_ = 0x1d2c2b0;
  uStack_b4 = 0;
  ApiCallbackDescriptor::InitializePlatformSpecific
            ((ApiCallbackDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x78));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c2b0);
  local_c0 = LoadDescriptor::ReceiverRegister();
  auVar11 = ApiGetterDescriptor::HolderRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auStack_a8 = ApiGetterDescriptor::CallbackRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xa0),3,(Register *)local_c0);
  local_c0._0_8_ = 0x708070807080708;
  call_descriptor_data_._172_4_ = 0;
  call_descriptor_data_._164_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x708070807080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._192_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd390;
  local_c0._8_4_ = 0x1d2c300;
  uStack_b4 = 0;
  ArgumentsAdaptorDescriptor::InitializePlatformSpecific
            ((ArgumentsAdaptorDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 200));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c300);
  local_c0._8_4_ = 0;
  uStack_b4 = 3;
  local_c0._0_8_ = 0x4000000001;
  auStack_a8._0_8_ = 0x4000000000;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  uStack_98 = 0x40;
  uStack_94 = 0;
  auStack_a8._8_4_ = 0;
  uStack_9c = 2;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xf0),4,(Register *)local_c0);
  call_descriptor_data_._252_4_ = 4;
  call_descriptor_data_._244_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0;
  call_descriptor_data_._272_8_ = puVar5;
  *puVar5 = 0x204070807080708;
  local_c0._8_4_ = 0;
  uStack_b4 = 2;
  local_c0._0_8_ = 0x4000000001;
  auStack_a8._0_8_ = 0x4000000000;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  auStack_a8._8_4_ = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x118),3,(Register *)local_c0);
  local_c0._0_8_ = 0x204070807080708;
  call_descriptor_data_._292_4_ = 0;
  call_descriptor_data_._284_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x204070807080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._312_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0._8_4_ = 0;
  uStack_b4 = 2;
  local_c0._0_8_ = 0x4000000001;
  auStack_a8._0_8_ = 0x4000000000;
  uStack_b0 = 0x40;
  uVar1 = uStack_b0;
  uStack_ac = 0;
  uVar2 = uStack_ac;
  auStack_a8._8_4_ = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x140),3,(Register *)local_c0);
  call_descriptor_data_._332_4_ = 0;
  call_descriptor_data_._324_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  auStack_a8._0_8_ = 0x4000000000;
  *puVar5 = 0;
  call_descriptor_data_._352_8_ = puVar5;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x204070807080708;
  local_c0._8_4_ = 0;
  uStack_b4 = 2;
  local_c0._0_8_ = 0x4000000001;
  auStack_a8._8_4_ = 0;
  uStack_b0 = uVar1;
  uStack_ac = uVar2;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x168),3,(Register *)local_c0);
  call_descriptor_data_._372_4_ = 0;
  call_descriptor_data_._364_8_ = 0x500000001;
  puVar5 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined4 *)(puVar5 + 1) = 0x7080708;
  *puVar5 = 0;
  call_descriptor_data_._392_8_ = puVar5;
  *puVar5 = 0x204070807080708;
  call_descriptor_data_._400_4_ = 0;
  local_c0._0_6_ = 0x70807070708;
  call_descriptor_data_._412_4_ = 0;
  call_descriptor_data_._404_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x708;
    uVar7 = 0x707;
    uVar8 = 0x708;
  }
  call_descriptor_data_._432_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1b8),1);
  call_descriptor_data_._452_4_ = 0;
  call_descriptor_data_._444_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._472_8_ = puVar3;
  *puVar3 = 0x7080405;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e0),1);
  local_c0._0_6_ = 0x70803040304;
  call_descriptor_data_._492_4_ = 0;
  call_descriptor_data_._484_8_ = 0x100000002;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x304;
    uVar7 = 0x304;
    uVar8 = 0x708;
  }
  call_descriptor_data_._512_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x208),1);
  call_descriptor_data_._532_4_ = 1;
  call_descriptor_data_._524_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._552_8_ = puVar3;
  *puVar3 = 0x4050708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x230),2);
  call_descriptor_data_._572_4_ = 1;
  local_c0._0_6_ = 0x30403040708;
  call_descriptor_data_._564_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    local_c0._0_2_ = 0x708;
    local_c0._4_2_ = 0x304;
    local_c0._2_2_ = 0x304;
  }
  call_descriptor_data_._592_8_ = puVar3;
  *(undefined2 *)puVar3 = local_c0._0_2_;
  *(undefined2 *)((long)puVar3 + 2) = local_c0._2_2_;
  *(undefined2 *)(puVar3 + 1) = local_c0._4_2_;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd360;
  local_c0._8_4_ = 0x1d2c490;
  uStack_b4 = 0;
  BinaryOpDescriptor::InitializePlatformSpecific
            ((BinaryOpDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 600));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c490);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd120;
  local_c0._8_4_ = 0x1d2c4b8;
  uStack_b4 = 0;
  CallForwardVarargsDescriptor::InitializePlatformSpecific
            ((CallForwardVarargsDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x280));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c4b8);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd150;
  local_c0._8_4_ = 0x1d2c4e0;
  uStack_b4 = 0;
  CallFunctionTemplateDescriptor::InitializePlatformSpecific
            ((CallFunctionTemplateDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a8));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c4e0);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd0c0;
  local_c0._8_4_ = 0x1d2c508;
  uStack_b4 = 0;
  CallTrampolineDescriptor::InitializePlatformSpecific
            ((CallTrampolineDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2d0));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c508);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd0f0;
  local_c0._8_4_ = 0x1d2c530;
  uStack_b4 = 0;
  CallVarargsDescriptor::InitializePlatformSpecific
            ((CallVarargsDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2f8));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c530);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd1b0;
  local_c0._8_4_ = 0x1d2c558;
  uStack_b4 = 0;
  CallWithArrayLikeDescriptor::InitializePlatformSpecific
            ((CallWithArrayLikeDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 800));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c558);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd180;
  local_c0._8_4_ = 0x1d2c580;
  uStack_b4 = 0;
  CallWithSpreadDescriptor::InitializePlatformSpecific
            ((CallWithSpreadDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x348));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c580);
  local_c0._8_4_ = 0;
  uStack_b4 = 1;
  local_c0._0_8_ = 0x4000000000;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x370),2,(Register *)local_c0);
  call_descriptor_data_._892_4_ = 0;
  call_descriptor_data_._884_8_ = 0x600000001;
  puVar5 = operator_new__(0xe,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(0xe,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined8 *)((long)puVar5 + 6) = 0;
  *puVar5 = 0;
  call_descriptor_data_._912_8_ = puVar5;
  *(undefined4 *)(puVar5 + 1) = 0x7080708;
  *puVar5 = 0x708000502040708;
  *(undefined2 *)((long)puVar5 + 0xc) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x398),4);
  call_descriptor_data_._932_4_ = 0;
  call_descriptor_data_._924_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._952_8_ = puVar5;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x206020607080707;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd330;
  local_c0._8_4_ = 0x1d2c5f8;
  uStack_b4 = 0;
  CompareDescriptor::InitializePlatformSpecific
            ((CompareDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x3c0));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c5f8);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd210;
  local_c0._8_4_ = 0x1d2c620;
  uStack_b4 = 0;
  ConstructForwardVarargsDescriptor::InitializePlatformSpecific
            ((ConstructForwardVarargsDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 1000));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c620);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd2a0;
  local_c0._8_4_ = 0x1d2c648;
  uStack_b4 = 0;
  ConstructStubDescriptor::InitializePlatformSpecific
            ((ConstructStubDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x410));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c648);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd1e0;
  local_c0._8_4_ = 0x1d2c670;
  uStack_b4 = 0;
  ConstructVarargsDescriptor::InitializePlatformSpecific
            ((ConstructVarargsDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x438));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c670);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd270;
  local_c0._8_4_ = 0x1d2c698;
  uStack_b4 = 0;
  ConstructWithArrayLikeDescriptor::InitializePlatformSpecific
            ((ConstructWithArrayLikeDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x460));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c698);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd240;
  local_c0._8_4_ = 0x1d2c6c0;
  uStack_b4 = 0;
  ConstructWithSpreadDescriptor::InitializePlatformSpecific
            ((ConstructWithSpreadDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x488));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c6c0);
  call_descriptor_data_._1208_4_ = 0;
  call_descriptor_data_._1200_8_ = 0x100000000;
  call_descriptor_data_._1212_4_ = 0;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0;
  local_c0._8_4_ = 0;
  uStack_b4 = 3;
  local_c0._0_8_ = 0x4000000001;
  call_descriptor_data_._1232_8_ = puVar6;
  *puVar6 = 0x708;
  uStack_98 = 0x40;
  uStack_94 = 0;
  auStack_a8._8_4_ = 0;
  uStack_9c = 2;
  auStack_a8._0_8_ = 0x4000000000;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x4d8),4,(Register *)local_c0);
  call_descriptor_data_._1252_4_ = 4;
  call_descriptor_data_._1244_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._1272_8_ = puVar5;
  *puVar5 = 0x204070807080708;
  *(undefined2 *)(puVar5 + 1) = 5;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd060;
  local_c0._8_4_ = 0x1d2c738;
  uStack_b4 = 0;
  EphemeronKeyBarrierDescriptor::InitializePlatformSpecific
            ((EphemeronKeyBarrierDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x500));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c738);
  local_c0 = FastNewFunctionContextDescriptor::ScopeInfoRegister();
  auVar11 = FastNewFunctionContextDescriptor::SlotsRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x528),2,(Register *)local_c0);
  call_descriptor_data_._1332_4_ = 0;
  local_c0._0_6_ = 0x30407080708;
  call_descriptor_data_._1324_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    local_c0._2_2_ = 0x708;
    local_c0._4_2_ = 0x304;
    local_c0._0_2_ = 0x708;
  }
  *(undefined2 *)((long)puVar3 + 2) = local_c0._2_2_;
  call_descriptor_data_._1352_8_ = puVar3;
  *(undefined2 *)puVar3 = local_c0._0_2_;
  *(undefined2 *)(puVar3 + 1) = local_c0._4_2_;
  local_c0._0_8_ = 0x4000000001;
  local_c0._8_4_ = 0;
  uStack_b4 = 3;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x550),2,(Register *)local_c0);
  call_descriptor_data_._1372_4_ = 0;
  local_c0._0_6_ = 0x70807080708;
  call_descriptor_data_._1364_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    local_c0._4_2_ = 0x708;
    local_c0._2_2_ = 0x708;
    local_c0._0_2_ = 0x708;
  }
  call_descriptor_data_._1392_8_ = puVar3;
  *(undefined2 *)puVar3 = local_c0._0_2_;
  *(undefined2 *)((long)puVar3 + 2) = local_c0._2_2_;
  *(undefined2 *)(puVar3 + 1) = local_c0._4_2_;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd4b0;
  local_c0._8_4_ = 0x1d2c7b0;
  uStack_b4 = 0;
  FrameDropperTrampolineDescriptor::InitializePlatformSpecific
            ((FrameDropperTrampolineDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x578));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c7b0);
  call_descriptor_data_._1440_8_ = 0x100000000;
  call_descriptor_data_._1448_8_ = 4;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._1472_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x5c8),2);
  call_descriptor_data_._1492_4_ = 0;
  call_descriptor_data_._1484_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar3 + 1) = 0x708;
  *puVar3 = 0x7080708;
  call_descriptor_data_._1512_8_ = puVar3;
  local_c0 = GrowArrayElementsDescriptor::ObjectRegister();
  auVar11 = GrowArrayElementsDescriptor::KeyRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x5f0),2,(Register *)local_c0);
  local_c0._0_6_ = 0x70807080708;
  call_descriptor_data_._1532_4_ = 0;
  call_descriptor_data_._1524_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    local_c0._4_2_ = 0x708;
    local_c0._2_2_ = 0x708;
    local_c0._0_2_ = 0x708;
  }
  *(undefined2 *)((long)puVar3 + 2) = local_c0._2_2_;
  call_descriptor_data_._1552_8_ = puVar3;
  *(undefined2 *)puVar3 = local_c0._0_2_;
  *(undefined2 *)(puVar3 + 1) = local_c0._4_2_;
  local_c0._8_4_ = 0;
  uStack_b4 = 0xb;
  local_c0._0_8_ = 0x4000000000;
  auStack_a8._0_8_ = 0x4000000001;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  auStack_a8._8_4_ = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x618),3,(Register *)local_c0);
  call_descriptor_data_._1572_4_ = 0;
  call_descriptor_data_._1564_8_ = 0x300000001;
  local_c0._0_8_ = 0x5000502040708;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x5000502040708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._1592_8_ = puVar5;
  *puVar5 = uVar10;
  auStack_a8._0_8_ = 0x4000000001;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  local_c0._8_4_ = 0;
  uStack_b4 = 0xb;
  local_c0._0_8_ = 0x4000000000;
  auStack_a8._8_4_ = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x640),3,(Register *)local_c0);
  call_descriptor_data_._1612_4_ = 0;
  call_descriptor_data_._1604_8_ = 0x300000002;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._1632_8_ = puVar5;
  *(undefined2 *)(puVar5 + 1) = 5;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd3f0;
  *puVar5 = 0x5020407080708;
  local_c0._8_4_ = 0x1d2c8a0;
  uStack_b4 = 0;
  InterpreterDispatchDescriptor::InitializePlatformSpecific
            ((InterpreterDispatchDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x668));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c8a0);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd420;
  local_c0._8_4_ = 0x1d2c8c8;
  uStack_b4 = 0;
  InterpreterPushArgsThenCallDescriptor::InitializePlatformSpecific
            ((InterpreterPushArgsThenCallDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x690));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c8c8);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd450;
  local_c0._8_4_ = 0x1d2c8f0;
  uStack_b4 = 0;
  InterpreterPushArgsThenConstructDescriptor::InitializePlatformSpecific
            ((InterpreterPushArgsThenConstructDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x6b8));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2c8f0);
  local_c0._8_4_ = 0;
  uStack_b4 = 3;
  local_c0._0_8_ = 0x4000000001;
  uStack_98 = 0x40;
  uStack_94 = 0;
  auStack_a8._8_4_ = 0;
  uStack_9c = 2;
  auStack_a8._0_8_ = 0x4000000000;
  uStack_b0 = 0x40;
  uStack_ac = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x6e0),3,(Register *)local_c0);
  local_c0._0_8_ = 0x204070807080708;
  call_descriptor_data_._1772_4_ = 4;
  call_descriptor_data_._1764_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x204070807080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._1792_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0 = LoadDescriptor::ReceiverRegister();
  auVar11 = LoadDescriptor::NameRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auStack_a8 = LoadDescriptor::SlotRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x708),3,(Register *)local_c0);
  call_descriptor_data_._1812_4_ = 0;
  call_descriptor_data_._1804_8_ = 0x300000001;
  local_c0._0_8_ = 0x206070807080708;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x206070807080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._1832_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0 = LoadDescriptor::NameRegister();
  auVar11 = LoadDescriptor::SlotRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x730),2,(Register *)local_c0);
  call_descriptor_data_._1852_4_ = 0;
  local_c0._0_6_ = 0x20607080708;
  call_descriptor_data_._1844_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x708;
    uVar7 = 0x708;
    uVar8 = 0x206;
  }
  call_descriptor_data_._1872_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  local_c0 = LoadDescriptor::NameRegister();
  auVar11 = LoadDescriptor::SlotRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x758),2,(Register *)local_c0);
  call_descriptor_data_._1892_4_ = 0;
  local_c0._0_6_ = 0x20607080708;
  call_descriptor_data_._1884_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x708;
    uVar7 = 0x708;
    uVar8 = 0x206;
  }
  call_descriptor_data_._1912_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  local_c0 = LoadDescriptor::ReceiverRegister();
  auVar11 = LoadDescriptor::NameRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = LoadDescriptor::SlotRegister();
  auStack_a8 = auVar11;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x780),3,(Register *)local_c0);
  call_descriptor_data_._1932_4_ = 0;
  call_descriptor_data_._1924_8_ = 0x300000001;
  local_c0._0_8_ = 0x206070807080708;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x206070807080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._1952_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0 = LoadDescriptor::NameRegister();
  auVar11 = LoadDescriptor::SlotRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = LoadWithVectorDescriptor::VectorRegister();
  auStack_a8 = auVar11;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x7a8),3,(Register *)local_c0);
  call_descriptor_data_._1972_4_ = 0;
  call_descriptor_data_._1964_8_ = 0x300000001;
  local_c0._0_8_ = 0x708020607080708;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x708020607080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._1992_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0 = LoadDescriptor::ReceiverRegister();
  auVar11 = LoadDescriptor::NameRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = LoadDescriptor::SlotRegister();
  auStack_a8 = auVar11;
  auVar11 = LoadWithVectorDescriptor::VectorRegister();
  uStack_94 = auVar11._8_4_;
  uStack_9c = auVar11._0_4_;
  uStack_98 = auVar11._4_4_;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 2000),4,(Register *)local_c0);
  call_descriptor_data_._2012_4_ = 0;
  call_descriptor_data_._2004_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._2032_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x7f8),3);
  call_descriptor_data_._2052_4_ = 0;
  call_descriptor_data_._2044_8_ = 0x300000001;
  local_c0._0_8_ = 0x206020600050708;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x206020600050708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._2072_8_ = puVar5;
  *puVar5 = uVar10;
  call_descriptor_data_._2080_8_ = 0x100000000;
  call_descriptor_data_._2088_8_ = 0x100000000;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0;
  call_descriptor_data_._2112_8_ = puVar6;
  *puVar6 = 0x708;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd030;
  local_c0._8_4_ = 0x1d2ca80;
  uStack_b4 = 0;
  RecordWriteDescriptor::InitializePlatformSpecific
            ((RecordWriteDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x848));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2ca80);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd480;
  local_c0._8_4_ = 0x1d2caa8;
  uStack_b4 = 0;
  ResumeGeneratorDescriptor::InitializePlatformSpecific
            ((ResumeGeneratorDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x870));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2caa8);
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd4e0;
  local_c0._8_4_ = 0x1d2cad0;
  uStack_b4 = 0;
  RunMicrotasksEntryDescriptor::InitializePlatformSpecific
            ((RunMicrotasksEntryDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x898));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2cad0);
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x8c0),1);
  call_descriptor_data_._2252_4_ = 0;
  call_descriptor_data_._2244_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._2272_8_ = puVar3;
  *puVar3 = 0x50708;
  local_c0 = StoreDescriptor::ReceiverRegister();
  auVar11 = StoreDescriptor::NameRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = StoreDescriptor::ValueRegister();
  auStack_a8 = auVar11;
  auVar11 = StoreDescriptor::SlotRegister();
  uStack_94 = auVar11._8_4_;
  uStack_9c = auVar11._0_4_;
  uStack_98 = auVar11._4_4_;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x8e8),4,(Register *)local_c0);
  call_descriptor_data_._2292_4_ = 0;
  call_descriptor_data_._2284_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._2312_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x206;
  auVar11 = StoreDescriptor::NameRegister();
  local_c0 = auVar11;
  auVar11 = StoreDescriptor::ValueRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = StoreDescriptor::SlotRegister();
  auStack_a8 = auVar11;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x910),3,(Register *)local_c0);
  call_descriptor_data_._2332_4_ = 0;
  call_descriptor_data_._2324_8_ = 0x300000001;
  local_c0._0_8_ = 0x206070807080708;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x206070807080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._2352_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0 = StoreDescriptor::NameRegister();
  auVar11 = StoreDescriptor::ValueRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = StoreDescriptor::SlotRegister();
  auStack_a8 = auVar11;
  auVar11 = StoreWithVectorDescriptor::VectorRegister();
  uStack_94 = auVar11._8_4_;
  uStack_9c = auVar11._0_4_;
  uStack_98 = auVar11._4_4_;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x938),4,(Register *)local_c0);
  call_descriptor_data_._2372_4_ = 0;
  call_descriptor_data_._2364_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._2392_8_ = puVar5;
  *puVar5 = 0x206070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  auVar11 = StoreDescriptor::ReceiverRegister();
  local_c0 = auVar11;
  auVar11 = StoreDescriptor::NameRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = StoreTransitionDescriptor::MapRegister();
  auStack_a8 = auVar11;
  auVar11 = StoreDescriptor::ValueRegister();
  uStack_94 = auVar11._8_4_;
  uStack_9c = auVar11._0_4_;
  uStack_98 = auVar11._4_4_;
  local_90 = StoreTransitionDescriptor::SlotRegister();
  local_84 = StoreTransitionDescriptor::VectorRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x960),6,(Register *)local_c0);
  call_descriptor_data_._2412_4_ = 0;
  call_descriptor_data_._2404_8_ = 0x600000001;
  puVar5 = operator_new__(0xe,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(0xe,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined8 *)((long)puVar5 + 6) = 0;
  *puVar5 = 0;
  call_descriptor_data_._2432_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  *(undefined4 *)(puVar5 + 1) = 0x2060708;
  *(undefined2 *)((long)puVar5 + 0xc) = 0x708;
  auVar11 = StoreDescriptor::ReceiverRegister();
  local_c0 = auVar11;
  auVar11 = StoreDescriptor::NameRegister();
  uStack_ac = auVar11._8_4_;
  uStack_b4 = auVar11._0_4_;
  uStack_b0 = auVar11._4_4_;
  auVar11 = StoreDescriptor::ValueRegister();
  auStack_a8 = auVar11;
  auVar11 = StoreDescriptor::SlotRegister();
  uStack_94 = auVar11._8_4_;
  uStack_9c = auVar11._0_4_;
  uStack_98 = auVar11._4_4_;
  auVar11 = StoreWithVectorDescriptor::VectorRegister();
  local_90 = auVar11;
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x988),5,(Register *)local_c0);
  call_descriptor_data_._2452_4_ = 0;
  call_descriptor_data_._2444_8_ = 0x500000001;
  puVar5 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._2472_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  *(undefined4 *)(puVar5 + 1) = 0x7080206;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x9b0),2);
  call_descriptor_data_._2492_4_ = 0;
  local_c0._0_6_ = 0x40507080206;
  call_descriptor_data_._2484_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x206;
    uVar7 = 0x708;
    uVar8 = 0x405;
  }
  call_descriptor_data_._2512_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x9d8),2);
  call_descriptor_data_._2532_4_ = 0;
  local_c0._0_6_ = 0x40507080707;
  call_descriptor_data_._2524_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x707;
    uVar7 = 0x708;
    uVar8 = 0x405;
  }
  call_descriptor_data_._2552_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xa00),3);
  call_descriptor_data_._2572_4_ = 0;
  call_descriptor_data_._2564_8_ = 0x300000001;
  local_c0._0_8_ = 0x405040507080708;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x405040507080708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._2592_8_ = puVar5;
  *puVar5 = uVar10;
  local_c0 = TypeConversionDescriptor::ArgumentRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xa28),1,(Register *)local_c0);
  call_descriptor_data_._2612_4_ = 0;
  call_descriptor_data_._2604_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._2632_8_ = puVar3;
  *puVar3 = 0x7080708;
  call_descriptor_data_._2640_8_ = 0x100000000;
  call_descriptor_data_._2648_8_ = 1;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._2672_8_ = puVar3;
  *puVar3 = 0x7080708;
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01cbd090;
  local_c0._8_4_ = 0x1d2ccb0;
  uStack_b4 = 0;
  TypeofDescriptor::InitializePlatformSpecific
            ((TypeofDescriptor *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xa78));
  (**(code **)(local_c0._0_8_ + 0x18))(local_c0,0x1d2ccb0);
  call_descriptor_data_._2720_8_ = 0x100000000;
  call_descriptor_data_._2732_4_ = 0;
  call_descriptor_data_._2728_4_ = 0;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0;
  call_descriptor_data_._2752_8_ = puVar6;
  *puVar6 = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xac8),2);
  local_c0._0_6_ = 0x30403040304;
  call_descriptor_data_._2772_4_ = 1;
  call_descriptor_data_._2764_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x304;
    uVar7 = 0x304;
    uVar8 = 0x304;
  }
  call_descriptor_data_._2792_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xaf0),3);
  call_descriptor_data_._2812_4_ = 1;
  local_c0._0_8_ = 0x60c020403040304;
  call_descriptor_data_._2804_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x60c020403040304;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._2832_8_ = puVar5;
  *puVar5 = uVar10;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xb18),4);
  call_descriptor_data_._2852_4_ = 1;
  call_descriptor_data_._2844_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  call_descriptor_data_._2872_8_ = puVar5;
  *puVar5 = 0x304030403040304;
  *(undefined2 *)(puVar5 + 1) = 0x60c;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xb40),1);
  call_descriptor_data_._2892_4_ = 1;
  call_descriptor_data_._2884_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._2912_8_ = puVar3;
  *puVar3 = 0x2040204;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xb68),2);
  local_c0._0_6_ = 0x20402060708;
  call_descriptor_data_._2932_4_ = 1;
  call_descriptor_data_._2924_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = local_c0._0_2_;
    uVar7 = local_c0._2_2_;
    uVar8 = local_c0._4_2_;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = 0;
    uVar9 = 0x708;
    uVar7 = 0x206;
    uVar8 = 0x204;
  }
  call_descriptor_data_._2952_8_ = puVar3;
  *(undefined2 *)puVar3 = uVar9;
  *(undefined2 *)((long)puVar3 + 2) = uVar7;
  *(undefined2 *)(puVar3 + 1) = uVar8;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xb90),3);
  call_descriptor_data_._2972_4_ = 1;
  local_c0._0_8_ = 0x708020402060708;
  call_descriptor_data_._2964_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  uVar10 = 0x708020402060708;
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    uVar10 = local_c0._0_8_;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0;
  call_descriptor_data_._2992_8_ = puVar5;
  *puVar5 = uVar10;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 3000),1);
  call_descriptor_data_._3012_4_ = 1;
  call_descriptor_data_._3004_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0;
  call_descriptor_data_._3032_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xbe0),2);
  call_descriptor_data_._3052_4_ = 0;
  call_descriptor_data_._3044_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._3072_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xc08),4);
  call_descriptor_data_._3092_4_ = 0;
  call_descriptor_data_._3084_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3112_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xc30),2);
  call_descriptor_data_._3132_4_ = 0;
  call_descriptor_data_._3124_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._3152_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xc58),3);
  call_descriptor_data_._3172_4_ = 0;
  call_descriptor_data_._3164_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3192_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xc80),4);
  call_descriptor_data_._3212_4_ = 0;
  call_descriptor_data_._3204_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3232_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xca8),3);
  call_descriptor_data_._3252_4_ = 0;
  call_descriptor_data_._3244_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3272_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xcd0),2);
  call_descriptor_data_._3292_4_ = 0;
  call_descriptor_data_._3284_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._3312_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xcf8),1);
  call_descriptor_data_._3332_4_ = 0;
  call_descriptor_data_._3324_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._3352_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xd20),1);
  call_descriptor_data_._3372_4_ = 0;
  call_descriptor_data_._3364_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._3392_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xd48),2);
  call_descriptor_data_._3412_4_ = 0;
  call_descriptor_data_._3404_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._3432_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xd70),3);
  call_descriptor_data_._3452_4_ = 0;
  call_descriptor_data_._3444_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3472_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xd98),2);
  call_descriptor_data_._3492_4_ = 0;
  call_descriptor_data_._3484_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._3512_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xdc0),2);
  call_descriptor_data_._3532_4_ = 0;
  call_descriptor_data_._3524_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._3552_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xde8),4);
  call_descriptor_data_._3572_4_ = 0;
  call_descriptor_data_._3564_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3592_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xe10),4);
  call_descriptor_data_._3612_4_ = 0;
  call_descriptor_data_._3604_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  call_descriptor_data_._3632_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xe38),4);
  call_descriptor_data_._3652_4_ = 0;
  call_descriptor_data_._3644_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3672_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xe60),4);
  call_descriptor_data_._3692_4_ = 0;
  call_descriptor_data_._3684_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  call_descriptor_data_._3712_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xe88),4);
  call_descriptor_data_._3732_4_ = 0;
  call_descriptor_data_._3724_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3752_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xeb0),4);
  call_descriptor_data_._3772_4_ = 0;
  call_descriptor_data_._3764_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  call_descriptor_data_._3792_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xed8),1);
  call_descriptor_data_._3812_4_ = 0;
  call_descriptor_data_._3804_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._3832_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xf00),1);
  call_descriptor_data_._3852_4_ = 0;
  call_descriptor_data_._3844_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._3872_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xf28),3);
  call_descriptor_data_._3892_4_ = 0;
  call_descriptor_data_._3884_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3912_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xf50),5);
  call_descriptor_data_._3932_4_ = 0;
  call_descriptor_data_._3924_8_ = 0x500000001;
  puVar5 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(0xc,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  *(undefined4 *)(puVar5 + 1) = 0x7080708;
  call_descriptor_data_._3952_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xf78),5);
  call_descriptor_data_._3972_4_ = 0;
  call_descriptor_data_._3964_8_ = 0x700000001;
  puVar5 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  puVar5[1] = 0x708070807080708;
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._3992_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 4000),2);
  call_descriptor_data_._4012_4_ = 0;
  call_descriptor_data_._4004_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar3 + 1) = 0x708;
  *puVar3 = 0x7080708;
  call_descriptor_data_._4032_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xfc8),3);
  call_descriptor_data_._4052_4_ = 0;
  call_descriptor_data_._4044_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._4072_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0xff0),3);
  call_descriptor_data_._4092_4_ = 0;
  call_descriptor_data_._4084_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._4112_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1018),2);
  call_descriptor_data_._4132_4_ = 0;
  call_descriptor_data_._4124_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4152_8_ = puVar3;
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1040),2);
  call_descriptor_data_._4172_4_ = 0;
  call_descriptor_data_._4164_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._4192_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1068),2);
  call_descriptor_data_._4212_4_ = 0;
  call_descriptor_data_._4204_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4232_8_ = puVar3;
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1090),2);
  call_descriptor_data_._4252_4_ = 0;
  call_descriptor_data_._4244_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._4272_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x10b8),2);
  call_descriptor_data_._4292_4_ = 0;
  call_descriptor_data_._4284_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4312_8_ = puVar3;
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x10e0),1);
  call_descriptor_data_._4332_4_ = 0;
  call_descriptor_data_._4324_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._4352_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1108),2);
  call_descriptor_data_._4372_4_ = 0;
  call_descriptor_data_._4364_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4392_8_ = puVar3;
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1130),2);
  call_descriptor_data_._4412_4_ = 0;
  call_descriptor_data_._4404_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._4432_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1158),1);
  call_descriptor_data_._4452_4_ = 0;
  call_descriptor_data_._4444_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4472_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1180),2);
  call_descriptor_data_._4492_4_ = 0;
  call_descriptor_data_._4484_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._4512_8_ = puVar3;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x11a8),1);
  call_descriptor_data_._4532_4_ = 0;
  call_descriptor_data_._4524_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4552_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x11d0),2);
  call_descriptor_data_._4572_4_ = 0;
  call_descriptor_data_._4564_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._4592_8_ = puVar3;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x11f8),1);
  call_descriptor_data_._4612_4_ = 0;
  call_descriptor_data_._4604_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4632_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1220),1);
  call_descriptor_data_._4652_4_ = 0;
  call_descriptor_data_._4644_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._4672_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1248),1);
  call_descriptor_data_._4692_4_ = 0;
  call_descriptor_data_._4684_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4712_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1270),1);
  call_descriptor_data_._4732_4_ = 0;
  call_descriptor_data_._4724_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._4752_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1298),1);
  call_descriptor_data_._4772_4_ = 0;
  call_descriptor_data_._4764_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4792_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x12c0),1);
  call_descriptor_data_._4812_4_ = 0;
  call_descriptor_data_._4804_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._4832_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x12e8),2);
  call_descriptor_data_._4852_4_ = 0;
  call_descriptor_data_._4844_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4872_8_ = puVar3;
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1310),2);
  call_descriptor_data_._4892_4_ = 0;
  call_descriptor_data_._4884_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._4912_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1338),3);
  call_descriptor_data_._4932_4_ = 0;
  call_descriptor_data_._4924_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._4952_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1360),3);
  call_descriptor_data_._4972_4_ = 0;
  call_descriptor_data_._4964_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._4992_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 5000),3);
  call_descriptor_data_._5012_4_ = 0;
  call_descriptor_data_._5004_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5032_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x13b0),2);
  call_descriptor_data_._5052_4_ = 0;
  call_descriptor_data_._5044_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._5072_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x13d8),4);
  call_descriptor_data_._5092_4_ = 0;
  call_descriptor_data_._5084_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5112_8_ = puVar5;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1400),4);
  call_descriptor_data_._5132_4_ = 0;
  call_descriptor_data_._5124_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  call_descriptor_data_._5152_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1428),1);
  call_descriptor_data_._5172_4_ = 0;
  call_descriptor_data_._5164_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5192_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1450),1);
  call_descriptor_data_._5212_4_ = 0;
  call_descriptor_data_._5204_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._5232_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1478),0);
  call_descriptor_data_._5252_4_ = 0;
  call_descriptor_data_._5244_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5272_8_ = puVar6;
  *puVar6 = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x14a0),0);
  call_descriptor_data_._5292_4_ = 0;
  call_descriptor_data_._5284_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0x708;
  call_descriptor_data_._5312_8_ = puVar6;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x14c8),0);
  call_descriptor_data_._5332_4_ = 0;
  call_descriptor_data_._5324_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5352_8_ = puVar6;
  *puVar6 = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x14f0),0);
  call_descriptor_data_._5372_4_ = 0;
  call_descriptor_data_._5364_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0x708;
  call_descriptor_data_._5392_8_ = puVar6;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1518),0);
  call_descriptor_data_._5412_4_ = 0;
  call_descriptor_data_._5404_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5432_8_ = puVar6;
  *puVar6 = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1540),0);
  call_descriptor_data_._5452_4_ = 0;
  call_descriptor_data_._5444_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0x708;
  call_descriptor_data_._5472_8_ = puVar6;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1568),0);
  call_descriptor_data_._5492_4_ = 0;
  call_descriptor_data_._5484_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5512_8_ = puVar6;
  *puVar6 = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1590),0);
  call_descriptor_data_._5532_4_ = 0;
  call_descriptor_data_._5524_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0x708;
  call_descriptor_data_._5552_8_ = puVar6;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x15b8),0);
  call_descriptor_data_._5572_4_ = 0;
  call_descriptor_data_._5564_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5592_8_ = puVar6;
  *puVar6 = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x15e0),0);
  call_descriptor_data_._5612_4_ = 0;
  call_descriptor_data_._5604_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0x708;
  call_descriptor_data_._5632_8_ = puVar6;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1608),0);
  call_descriptor_data_._5652_4_ = 0;
  call_descriptor_data_._5644_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5672_8_ = puVar6;
  *puVar6 = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1630),0);
  call_descriptor_data_._5692_4_ = 0;
  call_descriptor_data_._5684_8_ = 1;
  puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
  if (puVar6 == (undefined2 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar6 = operator_new__(2,(nothrow_t *)&std::nothrow);
    if (puVar6 == (undefined2 *)0x0) goto LAB_00eee7f8;
  }
  *puVar6 = 0x708;
  call_descriptor_data_._5712_8_ = puVar6;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1658),2);
  call_descriptor_data_._5732_4_ = 0;
  call_descriptor_data_._5724_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5752_8_ = puVar3;
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1680),2);
  call_descriptor_data_._5772_4_ = 0;
  call_descriptor_data_._5764_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._5792_8_ = puVar3;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x16a8),3);
  call_descriptor_data_._5812_4_ = 0;
  call_descriptor_data_._5804_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5832_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x16d0),3);
  call_descriptor_data_._5852_4_ = 0;
  call_descriptor_data_._5844_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._5872_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x16f8),2);
  call_descriptor_data_._5892_4_ = 0;
  call_descriptor_data_._5884_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5912_8_ = puVar3;
  *puVar3 = 0x7080708;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1720),3);
  call_descriptor_data_._5932_4_ = 0;
  call_descriptor_data_._5924_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5952_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1748),3);
  call_descriptor_data_._5972_4_ = 0;
  call_descriptor_data_._5964_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._5992_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 6000),1);
  call_descriptor_data_._6012_4_ = 0;
  call_descriptor_data_._6004_8_ = 0x100000001;
  puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(4,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._6032_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1798),2);
  call_descriptor_data_._6052_4_ = 0;
  call_descriptor_data_._6044_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._6072_8_ = puVar3;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x17c0),2);
  call_descriptor_data_._6092_4_ = 0;
  call_descriptor_data_._6084_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *(undefined2 *)(puVar3 + 1) = 0x708;
  call_descriptor_data_._6112_8_ = puVar3;
  *puVar3 = 0x7080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x17e8),2);
  call_descriptor_data_._6132_4_ = 0;
  call_descriptor_data_._6124_8_ = 0x200000001;
  puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
  if (puVar3 == (undefined4 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar3 = operator_new__(6,(nothrow_t *)&std::nothrow);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00eee7f8;
  }
  *puVar3 = 0x7080708;
  call_descriptor_data_._6152_8_ = puVar3;
  *(undefined2 *)(puVar3 + 1) = 0x708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1810),3);
  call_descriptor_data_._6172_4_ = 0;
  call_descriptor_data_._6164_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._6192_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1838),4);
  call_descriptor_data_._6212_4_ = 0;
  call_descriptor_data_._6204_8_ = 0x400000001;
  puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(10,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  call_descriptor_data_._6232_8_ = puVar5;
  *(undefined2 *)(puVar5 + 1) = 0x708;
  *puVar5 = 0x708070807080708;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1860),3);
  call_descriptor_data_._6252_4_ = 0;
  call_descriptor_data_._6244_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00eee7f8;
  }
  *puVar5 = 0x708070807080708;
  call_descriptor_data_._6272_8_ = puVar5;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1888),3);
  call_descriptor_data_._6292_4_ = 0;
  call_descriptor_data_._6284_8_ = 0x300000001;
  puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar5 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    puVar5 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) {
LAB_00eee7f8:
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1ad0;
  call_descriptor_data_._6312_8_ = puVar5;
  *puVar5 = 0x708070807080708;
  local_c0._8_4_ = 0x1d2dae8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x18b0),5);
  TorqueInterfaceDescriptor<8>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<8> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x18b0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1b10;
  local_c0._8_4_ = 0x1d2db10;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x18d8),5);
  TorqueInterfaceDescriptor<8>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<8> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x18d8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1b50;
  local_c0._8_4_ = 0x1d2db38;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1900),5);
  TorqueInterfaceDescriptor<6>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<6> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1900));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1b90;
  local_c0._8_4_ = 0x1d2db60;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1928),5);
  TorqueInterfaceDescriptor<6>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<6> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1928));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1bd0;
  local_c0._8_4_ = 0x1d2db88;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1950),5);
  TorqueInterfaceDescriptor<8>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<8> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1950));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1c10;
  local_c0._8_4_ = 0x1d2dbb0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1978),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1978));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1c50;
  local_c0._8_4_ = 0x1d2dbd8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x19a0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x19a0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1c90;
  local_c0._8_4_ = 0x1d2dc00;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x19c8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x19c8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1cd0;
  local_c0._8_4_ = 0x1d2dc28;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x19f0),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x19f0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1d10;
  local_c0._8_4_ = 0x1d2dc50;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a18),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a18));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1d50;
  local_c0._8_4_ = 0x1d2dc78;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a40),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a40));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1d90;
  local_c0._8_4_ = 0x1d2dca0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a68),5);
  TorqueInterfaceDescriptor<7>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<7> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a68));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1dd0;
  local_c0._8_4_ = 0x1d2dcc8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a90),5);
  TorqueInterfaceDescriptor<6>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<6> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1a90));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1e10;
  local_c0._8_4_ = 0x1d2dcf0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ab8),5);
  TorqueInterfaceDescriptor<6>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<6> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ab8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1e50;
  local_c0._8_4_ = 0x1d2dd18;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ae0),5);
  TorqueInterfaceDescriptor<8>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<8> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ae0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1e90;
  local_c0._8_4_ = 0x1d2dd40;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1b08),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1b08));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1ed0;
  local_c0._8_4_ = 0x1d2dd68;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1b30),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1b30));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1f10;
  local_c0._8_4_ = 0x1d2dd90;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 7000),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 7000));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1f50;
  local_c0._8_4_ = 0x1d2ddb8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1b80),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1b80));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1f90;
  local_c0._8_4_ = 0x1d2dde0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ba8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ba8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca1fd0;
  local_c0._8_4_ = 0x1d2de08;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1bd0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1bd0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2010;
  local_c0._8_4_ = 0x1d2de30;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1bf8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1bf8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2050;
  local_c0._8_4_ = 0x1d2de58;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c20),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c20));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2090;
  local_c0._8_4_ = 0x1d2de80;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c48),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c48));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca20d0;
  local_c0._8_4_ = 0x1d2dea8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c70),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c70));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2110;
  local_c0._8_4_ = 0x1d2ded0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c98),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1c98));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2150;
  local_c0._8_4_ = 0x1d2def8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1cc0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1cc0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2190;
  local_c0._8_4_ = 0x1d2df20;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ce8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ce8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca21d0;
  local_c0._8_4_ = 0x1d2df48;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d10),4);
  TorqueInterfaceDescriptor<4>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<4> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d10));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2210;
  local_c0._8_4_ = 0x1d2df70;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d38),4);
  TorqueInterfaceDescriptor<4>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<4> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d38));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2250;
  local_c0._8_4_ = 0x1d2df98;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d60),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d60));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2290;
  local_c0._8_4_ = 0x1d2dfc0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d88),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1d88));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca22d0;
  local_c0._8_4_ = 0x1d2dfe8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1db0),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1db0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2310;
  local_c0._8_4_ = 0x1d2e010;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1dd8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1dd8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2350;
  local_c0._8_4_ = 0x1d2e038;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e00),4);
  TorqueInterfaceDescriptor<4>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<4> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e00));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2390;
  local_c0._8_4_ = 0x1d2e060;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e28),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e28));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca23d0;
  local_c0._8_4_ = 0x1d2e088;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e50),4);
  TorqueInterfaceDescriptor<4>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<4> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e50));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2410;
  local_c0._8_4_ = 0x1d2e0b0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e78),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1e78));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2450;
  local_c0._8_4_ = 0x1d2e0d8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ea0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ea0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2490;
  local_c0._8_4_ = 0x1d2e100;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ec8),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ec8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca24d0;
  local_c0._8_4_ = 0x1d2e128;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ef0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1ef0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2510;
  local_c0._8_4_ = 0x1d2e150;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1f18),4);
  TorqueInterfaceDescriptor<4>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<4> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1f18));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2550;
  local_c0._8_4_ = 0x1d2e178;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 8000),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 8000));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2590;
  local_c0._8_4_ = 0x1d2e1a0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1f68),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1f68));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca25d0;
  local_c0._8_4_ = 0x1d2e1c8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1f90),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1f90));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2610;
  local_c0._8_4_ = 0x1d2e1f0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1fb8),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1fb8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2650;
  local_c0._8_4_ = 0x1d2e218;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1fe0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x1fe0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2690;
  local_c0._8_4_ = 0x1d2e240;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2008),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2008));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca26d0;
  local_c0._8_4_ = 0x1d2e268;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2030),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2030));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2710;
  local_c0._8_4_ = 0x1d2e290;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2058),5);
  TorqueInterfaceDescriptor<5>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<5> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2058));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2750;
  local_c0._8_4_ = 0x1d2e2b8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2080),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2080));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2790;
  local_c0._8_4_ = 0x1d2e2e0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x20a8),5);
  TorqueInterfaceDescriptor<5>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<5> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x20a8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca27d0;
  local_c0._8_4_ = 0x1d2e308;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x20d0),5);
  TorqueInterfaceDescriptor<6>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<6> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x20d0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2810;
  local_c0._8_4_ = 0x1d2e330;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x20f8),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x20f8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2850;
  local_c0._8_4_ = 0x1d2e358;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2120),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2120));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2890;
  local_c0._8_4_ = 0x1d2e380;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2148),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2148));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca28d0;
  local_c0._8_4_ = 0x1d2e3a8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2170),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2170));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2910;
  local_c0._8_4_ = 0x1d2e3d0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2198),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2198));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2950;
  local_c0._8_4_ = 0x1d2e3f8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x21c0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x21c0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2990;
  local_c0._8_4_ = 0x1d2e420;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x21e8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x21e8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca29d0;
  local_c0._8_4_ = 0x1d2e448;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2210),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2210));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2a10;
  local_c0._8_4_ = 0x1d2e470;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2238),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2238));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2a50;
  local_c0._8_4_ = 0x1d2e498;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2260),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2260));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2a90;
  local_c0._8_4_ = 0x1d2e4c0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2288),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2288));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2ad0;
  local_c0._8_4_ = 0x1d2e4e8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x22b0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x22b0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2b10;
  local_c0._8_4_ = 0x1d2e510;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x22d8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x22d8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2b50;
  local_c0._8_4_ = 0x1d2e538;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2300),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2300));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2b90;
  local_c0._8_4_ = 0x1d2e560;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 9000),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 9000));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2bd0;
  local_c0._8_4_ = 0x1d2e588;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2350),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2350));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2c10;
  local_c0._8_4_ = 0x1d2e5b0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2378),5);
  TorqueInterfaceDescriptor<5>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<5> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2378));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2c50;
  local_c0._8_4_ = 0x1d2e5d8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x23a0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x23a0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2c90;
  local_c0._8_4_ = 0x1d2e600;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x23c8),5);
  TorqueInterfaceDescriptor<6>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<6> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x23c8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2cd0;
  local_c0._8_4_ = 0x1d2e628;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x23f0),5);
  TorqueInterfaceDescriptor<6>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<6> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x23f0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2d10;
  local_c0._8_4_ = 0x1d2e650;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2418),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2418));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2d50;
  local_c0._8_4_ = 0x1d2e678;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2440),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2440));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2d90;
  local_c0._8_4_ = 0x1d2e6a0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2468),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2468));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2dd0;
  local_c0._8_4_ = 0x1d2e6c8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2490),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2490));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2e10;
  local_c0._8_4_ = 0x1d2e6f0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x24b8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x24b8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2e50;
  local_c0._8_4_ = 0x1d2e718;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x24e0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x24e0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2e90;
  local_c0._8_4_ = 0x1d2e740;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2508),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2508));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2ed0;
  local_c0._8_4_ = 0x1d2e768;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2530),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2530));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2f10;
  local_c0._8_4_ = 0x1d2e790;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2558),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2558));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2f50;
  local_c0._8_4_ = 0x1d2e7b8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2580),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2580));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2f90;
  local_c0._8_4_ = 0x1d2e7e0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x25a8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x25a8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca2fd0;
  local_c0._8_4_ = 0x1d2e808;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x25d0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x25d0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3010;
  local_c0._8_4_ = 0x1d2e830;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x25f8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x25f8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3050;
  local_c0._8_4_ = 0x1d2e858;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2620),1);
  TorqueInterfaceDescriptor<1>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<1> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2620));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3090;
  local_c0._8_4_ = 0x1d2e880;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2648),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2648));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca30d0;
  local_c0._8_4_ = 0x1d2e8a8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2670),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2670));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3110;
  local_c0._8_4_ = 0x1d2e8d0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2698),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2698));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3150;
  local_c0._8_4_ = 0x1d2e8f8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x26c0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x26c0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3190;
  local_c0._8_4_ = 0x1d2e920;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x26e8),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x26e8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca31d0;
  local_c0._8_4_ = 0x1d2e948;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 10000),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 10000));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3210;
  local_c0._8_4_ = 0x1d2e970;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2738),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2738));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3250;
  local_c0._8_4_ = 0x1d2e998;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2760),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2760));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3290;
  local_c0._8_4_ = 0x1d2e9c0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2788),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2788));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca32d0;
  local_c0._8_4_ = 0x1d2e9e8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x27b0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x27b0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3310;
  local_c0._8_4_ = 0x1d2ea10;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x27d8),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x27d8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3350;
  local_c0._8_4_ = 0x1d2ea38;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2800),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2800));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3390;
  local_c0._8_4_ = 0x1d2ea60;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2828),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2828));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca33d0;
  local_c0._8_4_ = 0x1d2ea88;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2850),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2850));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3410;
  local_c0._8_4_ = 0x1d2eab0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2878),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2878));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3450;
  local_c0._8_4_ = 0x1d2ead8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x28a0),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x28a0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3490;
  local_c0._8_4_ = 0x1d2eb00;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x28c8),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x28c8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca34d0;
  local_c0._8_4_ = 0x1d2eb28;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x28f0),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x28f0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3510;
  local_c0._8_4_ = 0x1d2eb50;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2918),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2918));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3550;
  local_c0._8_4_ = 0x1d2eb78;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2940),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2940));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3590;
  local_c0._8_4_ = 0x1d2eba0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2968),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2968));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca35d0;
  local_c0._8_4_ = 0x1d2ebc8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2990),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2990));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3610;
  local_c0._8_4_ = 0x1d2ebf0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x29b8),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x29b8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3650;
  local_c0._8_4_ = 0x1d2ec18;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x29e0),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x29e0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3690;
  local_c0._8_4_ = 0x1d2ec40;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a08),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a08));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca36d0;
  local_c0._8_4_ = 0x1d2ec68;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a30),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a30));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3710;
  local_c0._8_4_ = 0x1d2ec90;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a58),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a58));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3750;
  local_c0._8_4_ = 0x1d2ecb8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a80),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2a80));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3790;
  local_c0._8_4_ = 0x1d2ece0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2aa8),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2aa8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca37d0;
  local_c0._8_4_ = 0x1d2ed08;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2ad0),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2ad0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3810;
  local_c0._8_4_ = 0x1d2ed30;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 11000),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 11000));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3850;
  local_c0._8_4_ = 0x1d2ed58;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b20),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b20));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3890;
  local_c0._8_4_ = 0x1d2ed80;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b48),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b48));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca38d0;
  local_c0._8_4_ = 0x1d2eda8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b70),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b70));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3910;
  local_c0._8_4_ = 0x1d2edd0;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b98),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2b98));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3950;
  local_c0._8_4_ = 0x1d2edf8;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2bc0),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2bc0));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3990;
  local_c0._8_4_ = 0x1d2ee20;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2be8),2);
  TorqueInterfaceDescriptor<2>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<2> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2be8));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca39d0;
  local_c0._8_4_ = 0x1d2ee48;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2c10),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2c10));
  local_c0._0_8_ = &PTR__CallInterfaceDescriptor_01ca3a10;
  local_c0._8_4_ = 0x1d2ee70;
  uStack_b4 = 0;
  CallInterfaceDescriptor::DefaultInitializePlatformSpecific
            ((CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2c38),3);
  TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
            ((TorqueInterfaceDescriptor<3> *)local_c0,
             (CallInterfaceDescriptorData *)(call_descriptor_data_ + 0x2c38));
  return;
}

