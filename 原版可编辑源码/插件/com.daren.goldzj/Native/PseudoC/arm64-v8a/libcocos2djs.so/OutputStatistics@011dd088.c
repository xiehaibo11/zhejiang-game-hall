
/* v8::internal::Serializer::OutputStatistics(char const*) */

void v8::internal::Serializer::OutputStatistics(char *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (FLAG_serialization_statistics != '\0') {
    PrintF("%s:\n");
    SerializerAllocator::OutputStatistics((SerializerAllocator *)(param_1 + 0xd8));
    PrintF("  Instance types (count and bytes):\n");
    uVar7 = **(uint **)(param_1 + 0x168);
    if (uVar7 != 0) {
      uVar9 = **(undefined8 **)(param_1 + 0x198);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNALIZED_STRING_TYPE");
    }
    uVar7 = **(uint **)(param_1 + 0x170);
    if (uVar7 != 0) {
      uVar9 = **(undefined8 **)(param_1 + 0x1a0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNALIZED_STRING_TYPE");
    }
    uVar7 = **(uint **)(param_1 + 0x178);
    if (uVar7 != 0) {
      uVar9 = **(undefined8 **)(param_1 + 0x1a8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNALIZED_STRING_TYPE");
    }
    uVar7 = **(uint **)(param_1 + 0x180);
    if (uVar7 != 0) {
      uVar9 = **(undefined8 **)(param_1 + 0x1b0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNALIZED_STRING_TYPE");
    }
    uVar7 = **(uint **)(param_1 + 0x188);
    if (uVar7 != 0) {
      uVar9 = **(undefined8 **)(param_1 + 0x1b8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNALIZED_STRING_TYPE");
    }
    plVar1 = (long *)(param_1 + 0x168);
    uVar7 = **(uint **)(param_1 + 400);
    if (uVar7 != 0) {
      uVar9 = **(undefined8 **)(param_1 + 0x1c0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNALIZED_STRING_TYPE");
    }
    plVar2 = (long *)(param_1 + 0x170);
    uVar7 = *(uint *)(*plVar1 + 8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x10);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    plVar3 = (long *)(param_1 + 0x178);
    uVar7 = *(uint *)(*plVar2 + 8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x10);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    plVar4 = (long *)(param_1 + 0x180);
    uVar7 = *(uint *)(*plVar3 + 8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x10);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    plVar5 = (long *)(param_1 + 0x188);
    uVar7 = *(uint *)(*plVar4 + 8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x10);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    plVar6 = (long *)(param_1 + 400);
    uVar7 = *(uint *)(*plVar5 + 8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x10);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x10);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x20);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x40);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x20);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x40);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x20);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x40);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x20);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x40);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x20);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x40);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x20);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x40);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x28);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x50);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x28);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x50);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x28);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x50);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x28);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x50);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x28);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x50);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x28);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x50);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x48);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x90);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x48);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x90);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x48);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x90);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x48);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x90);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x48);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x90);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x48);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x90);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x68);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0xd0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x68);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0xd0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x68);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0xd0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x68);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0xd0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x68);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0xd0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x68);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0xd0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x80);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x100);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x80);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x100);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x80);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x100);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x80);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x100);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x80);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x100);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x80);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x100);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x84);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x108);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x84);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x108);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x84);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x108);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x84);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x108);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x84);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x108);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x84);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x108);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x88);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x110);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x88);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x110);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x88);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x110);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x88);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x110);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x88);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x110);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x88);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x110);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x8c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x118);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x8c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x118);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x8c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x118);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x8c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x118);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x8c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x118);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x8c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x118);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x94);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x128);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x94);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x128);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x94);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x128);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x94);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x128);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x94);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x128);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x94);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x128);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0xa0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x140);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0xa0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x140);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0xa0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x140);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0xa0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x140);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0xa0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x140);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0xa0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x140);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0xa4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x148);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0xa4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x148);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0xa4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x148);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0xa4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x148);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0xa4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x148);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0xa4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x148);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CONS_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0xa8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x150);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0xa8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x150);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0xa8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x150);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0xa8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x150);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0xa8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x150);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0xa8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x150);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0xac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x158);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0xac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x158);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0xac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x158);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0xac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x158);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0xac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x158);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0xac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x158);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SLICED_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0xb4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x168);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0xb4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x168);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0xb4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x168);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0xb4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x168);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0xb4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x168);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0xb4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x168);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"THIN_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 400);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"UNCACHED_EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 400);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"UNCACHED_EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 400);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"UNCACHED_EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 400);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"UNCACHED_EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 400);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"UNCACHED_EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 400);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"UNCACHED_EXTERNAL_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0xe8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x1d0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0xe8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x1d0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0xe8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x1d0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0xe8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x1d0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0xe8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x1d0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0xe8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x1d0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x100);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x200);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYMBOL_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x100);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x200);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYMBOL_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x100);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x200);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYMBOL_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x100);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x200);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYMBOL_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x100);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x200);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYMBOL_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x100);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x200);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYMBOL_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x104);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x208);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BIG_INT_BASE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x104);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x208);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BIG_INT_BASE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x104);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x208);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BIG_INT_BASE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x104);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x208);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BIG_INT_BASE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x104);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x208);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BIG_INT_BASE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x104);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x208);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BIG_INT_BASE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x108);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x210);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HEAP_NUMBER_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x108);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x210);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HEAP_NUMBER_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x108);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x210);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HEAP_NUMBER_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x108);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x210);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HEAP_NUMBER_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x108);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x210);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HEAP_NUMBER_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x108);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x210);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HEAP_NUMBER_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x218);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ODDBALL_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x218);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ODDBALL_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x218);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ODDBALL_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x218);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ODDBALL_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x218);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ODDBALL_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x218);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ODDBALL_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x110);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x220);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x110);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x220);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x110);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x220);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x110);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x220);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x110);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x220);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x110);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x220);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x114);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x228);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYNTHETIC_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x114);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x228);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYNTHETIC_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x114);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x228);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYNTHETIC_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x114);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x228);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYNTHETIC_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x114);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x228);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYNTHETIC_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x114);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x228);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SYNTHETIC_MODULE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x118);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x230);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FOREIGN_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x118);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x230);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FOREIGN_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x118);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x230);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FOREIGN_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x118);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x230);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FOREIGN_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x118);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x230);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FOREIGN_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x118);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x230);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FOREIGN_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x11c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x238);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_FULFILL_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x11c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x238);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_FULFILL_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x11c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x238);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_FULFILL_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x11c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x238);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_FULFILL_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x11c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x238);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_FULFILL_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x11c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x238);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_FULFILL_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x120);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x240);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_REJECT_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x120);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x240);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_REJECT_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x120);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x240);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_REJECT_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x120);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x240);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_REJECT_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x120);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x240);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_REJECT_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x120);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x240);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_REJECT_REACTION_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x124);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x248);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLABLE_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x124);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x248);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLABLE_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x124);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x248);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLABLE_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x124);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x248);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLABLE_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x124);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x248);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLABLE_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x124);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x248);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLABLE_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x128);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x250);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLBACK_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x128);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x250);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLBACK_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x128);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x250);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLBACK_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x128);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x250);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLBACK_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x128);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x250);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLBACK_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x128);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x250);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALLBACK_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 300);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 600);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 300);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 600);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 300);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 600);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 300);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 600);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 300);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 600);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 300);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 600);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x130);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x260);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"LOAD_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x130);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x260);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"LOAD_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x130);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x260);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"LOAD_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x130);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x260);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"LOAD_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x130);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x260);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"LOAD_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x130);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x260);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"LOAD_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x134);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x268);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STORE_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x134);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x268);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STORE_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x134);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x268);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STORE_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x134);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x268);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STORE_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x134);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x268);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STORE_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x134);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x268);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STORE_HANDLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x138);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x270);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x138);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x270);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x138);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x270);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x138);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x270);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x138);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x270);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x138);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x270);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x13c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x278);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x13c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x278);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x13c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x278);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x13c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x278);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x13c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x278);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x13c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x278);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_TEMPLATE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x140);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x280);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESS_CHECK_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x140);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x280);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESS_CHECK_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x140);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x280);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESS_CHECK_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x140);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x280);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESS_CHECK_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x140);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x280);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESS_CHECK_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x140);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x280);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESS_CHECK_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x144);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x288);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x144);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x288);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x144);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x288);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x144);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x288);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x144);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x288);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x144);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x288);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x148);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x290);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x148);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x290);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x148);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x290);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x148);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x290);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x148);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x290);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x148);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x290);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ACCESSOR_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x14c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x298);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALIASED_ARGUMENTS_ENTRY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x14c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x298);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALIASED_ARGUMENTS_ENTRY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x14c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x298);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALIASED_ARGUMENTS_ENTRY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x14c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x298);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALIASED_ARGUMENTS_ENTRY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x14c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x298);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALIASED_ARGUMENTS_ENTRY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x14c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x298);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALIASED_ARGUMENTS_ENTRY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x150);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2a0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_MEMENTO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x150);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2a0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_MEMENTO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x150);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2a0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_MEMENTO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x150);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2a0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_MEMENTO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x150);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2a0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_MEMENTO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x150);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2a0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_MEMENTO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x154);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2a8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_SITE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x154);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2a8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_SITE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x154);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2a8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_SITE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x154);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2a8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_SITE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x154);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2a8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_SITE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x154);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2a8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ALLOCATION_SITE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x158);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2b0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ARRAY_BOILERPLATE_DESCRIPTION_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar2 + 0x158);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2b0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ARRAY_BOILERPLATE_DESCRIPTION_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar3 + 0x158);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2b0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ARRAY_BOILERPLATE_DESCRIPTION_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar4 + 0x158);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2b0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ARRAY_BOILERPLATE_DESCRIPTION_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar5 + 0x158);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2b0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ARRAY_BOILERPLATE_DESCRIPTION_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar6 + 0x158);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2b0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ARRAY_BOILERPLATE_DESCRIPTION_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar1 + 0x15c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2b8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASM_WASM_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x15c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2b8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASM_WASM_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x15c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2b8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASM_WASM_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x15c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2b8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASM_WASM_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x15c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2b8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASM_WASM_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x15c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2b8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASM_WASM_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x160);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2c0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASYNC_GENERATOR_REQUEST_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x160);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2c0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASYNC_GENERATOR_REQUEST_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x160);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2c0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASYNC_GENERATOR_REQUEST_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x160);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2c0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASYNC_GENERATOR_REQUEST_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x160);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2c0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASYNC_GENERATOR_REQUEST_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x160);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2c0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ASYNC_GENERATOR_REQUEST_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x164);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2c8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALL_HANDLER_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x164);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2c8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALL_HANDLER_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x164);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2c8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALL_HANDLER_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x164);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2c8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALL_HANDLER_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x164);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2c8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALL_HANDLER_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x164);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2c8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CALL_HANDLER_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x168);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2d0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLASS_POSITIONS_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x168);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2d0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLASS_POSITIONS_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x168);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2d0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLASS_POSITIONS_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x168);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2d0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLASS_POSITIONS_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x168);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2d0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLASS_POSITIONS_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x168);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2d0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLASS_POSITIONS_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x16c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2d8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x16c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2d8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x16c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2d8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x16c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2d8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x16c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2d8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x16c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2d8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x170);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2e0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ENUM_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x170);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2e0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ENUM_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x170);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2e0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ENUM_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x170);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2e0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ENUM_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x170);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2e0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ENUM_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x170);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2e0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ENUM_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x174);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2e8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x174);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2e8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x174);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2e8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x174);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2e8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x174);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2e8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x174);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2e8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x178);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2f0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_RARE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x178);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2f0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_RARE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x178);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2f0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_RARE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x178);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2f0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_RARE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x178);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2f0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_RARE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x178);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2f0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_TEMPLATE_RARE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x17c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2f8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERCEPTOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x17c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2f8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERCEPTOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x17c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2f8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERCEPTOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x17c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2f8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERCEPTOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x17c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2f8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERCEPTOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x17c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2f8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERCEPTOR_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x180);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x300);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNAL_CLASS_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x180);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x300);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNAL_CLASS_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x180);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x300);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNAL_CLASS_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x180);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x300);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNAL_CLASS_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x180);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x300);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNAL_CLASS_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x180);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x300);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERNAL_CLASS_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x184);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x308);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERPRETER_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x184);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x308);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERPRETER_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x184);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x308);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERPRETER_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x184);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x308);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERPRETER_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x184);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x308);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERPRETER_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x184);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x308);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"INTERPRETER_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x188);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x310);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_CAPABILITY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x188);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x310);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_CAPABILITY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x188);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x310);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_CAPABILITY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x188);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x310);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_CAPABILITY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x188);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x310);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_CAPABILITY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x188);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x310);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_CAPABILITY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x18c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x318);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_REACTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x18c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x318);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_REACTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x18c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x318);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_REACTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x18c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x318);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_REACTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x18c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x318);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_REACTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x18c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x318);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROMISE_REACTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 400);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 800);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROTOTYPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 400);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 800);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROTOTYPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 400);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 800);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROTOTYPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 400);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 800);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROTOTYPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 400);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 800);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROTOTYPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 400);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 800);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROTOTYPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x194);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x328);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x194);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x328);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x194);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x328);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x194);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x328);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x194);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x328);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x194);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x328);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x198);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x330);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_BOX_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x198);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x330);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_BOX_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x198);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x330);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_BOX_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x198);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x330);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_BOX_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x198);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x330);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_BOX_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x198);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x330);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_BOX_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x19c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x338);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x19c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x338);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x19c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x338);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x19c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x338);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x19c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x338);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x19c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x338);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMI_PAIR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x340);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SORT_STATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x340);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SORT_STATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x340);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SORT_STATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x340);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SORT_STATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x340);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SORT_STATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x340);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SORT_STATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x348);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x348);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x348);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x348);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x348);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x348);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x350);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar2 + 0x1a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x350);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar3 + 0x1a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x350);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar4 + 0x1a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x350);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar5 + 0x1a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x350);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar6 + 0x1a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x350);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar1 + 0x1ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x358);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_FRAME_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x358);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_FRAME_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x358);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_FRAME_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x358);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_FRAME_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x358);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_FRAME_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x358);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_FRAME_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x360);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_TRACE_FRAME_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x360);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_TRACE_FRAME_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x360);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_TRACE_FRAME_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x360);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_TRACE_FRAME_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x360);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_TRACE_FRAME_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x360);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STACK_TRACE_FRAME_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x368);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TEMPLATE_OBJECT_DESCRIPTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x368);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TEMPLATE_OBJECT_DESCRIPTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x368);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TEMPLATE_OBJECT_DESCRIPTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x368);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TEMPLATE_OBJECT_DESCRIPTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x368);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TEMPLATE_OBJECT_DESCRIPTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x368);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TEMPLATE_OBJECT_DESCRIPTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x370);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE2_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x370);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE2_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x370);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE2_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x370);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE2_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x370);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE2_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x370);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE2_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x378);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE3_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x378);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE3_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x378);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE3_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x378);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE3_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x378);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE3_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x378);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TUPLE3_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x380);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_CAPI_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x380);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_CAPI_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x380);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_CAPI_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x380);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_CAPI_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x380);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_CAPI_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x380);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_CAPI_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x388);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x388);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x388);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x388);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x388);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x388);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_DEBUG_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x390);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_TAG_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x390);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_TAG_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x390);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_TAG_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x390);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_TAG_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x390);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_TAG_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x390);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_TAG_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x398);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXPORTED_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x398);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXPORTED_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x398);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXPORTED_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x398);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXPORTED_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x398);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXPORTED_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x398);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXPORTED_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3a0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INDIRECT_FUNCTION_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3a0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INDIRECT_FUNCTION_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3a0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INDIRECT_FUNCTION_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3a0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INDIRECT_FUNCTION_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3a0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INDIRECT_FUNCTION_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3a0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INDIRECT_FUNCTION_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3a8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_JS_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3a8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_JS_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3a8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_JS_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3a8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_JS_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3a8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_JS_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3a8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_JS_FUNCTION_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3b0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3b0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3b0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3b0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3b0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3b0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3b8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3b8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3b8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3b8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3b8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3b8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3c0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EPHEMERON_HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3c0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EPHEMERON_HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3c0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EPHEMERON_HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3c0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EPHEMERON_HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3c0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EPHEMERON_HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3c0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EPHEMERON_HASH_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3c8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"GLOBAL_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3c8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"GLOBAL_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3c8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"GLOBAL_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3c8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"GLOBAL_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3c8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"GLOBAL_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3c8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"GLOBAL_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1e8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3d0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1e8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3d0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1e8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3d0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1e8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3d0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1e8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3d0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1e8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3d0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1ec);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3d8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1ec);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3d8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1ec);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3d8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1ec);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3d8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1ec);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3d8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1ec);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3d8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1f0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3e0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1f0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3e0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1f0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3e0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1f0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3e0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1f0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3e0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1f0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3e0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 500);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 1000);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 500);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 1000);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 500);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 1000);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 500);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 1000);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 500);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 1000);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 500);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 1000);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1f8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3f0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1f8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3f0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1f8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3f0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1f8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3f0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1f8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3f0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1f8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3f0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"ORDERED_NAME_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1fc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x3f8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SIMPLE_NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1fc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x3f8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SIMPLE_NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1fc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x3f8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SIMPLE_NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1fc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x3f8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SIMPLE_NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1fc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x3f8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SIMPLE_NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1fc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x3f8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SIMPLE_NUMBER_DICTIONARY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x400);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x400);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x400);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x400);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x400);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x200);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x400);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"STRING_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x204);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x408);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x204);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x408);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x204);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x408);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x204);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x408);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x204);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x408);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x204);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x408);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x208);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x410);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_BOILERPLATE_DESCRIPTION_TYPE"
            );
    }
    uVar7 = *(uint *)(*plVar2 + 0x208);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x410);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_BOILERPLATE_DESCRIPTION_TYPE"
            );
    }
    uVar7 = *(uint *)(*plVar3 + 0x208);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x410);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_BOILERPLATE_DESCRIPTION_TYPE"
            );
    }
    uVar7 = *(uint *)(*plVar4 + 0x208);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x410);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_BOILERPLATE_DESCRIPTION_TYPE"
            );
    }
    uVar7 = *(uint *)(*plVar5 + 0x208);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x410);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_BOILERPLATE_DESCRIPTION_TYPE"
            );
    }
    uVar7 = *(uint *)(*plVar6 + 0x208);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x410);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"OBJECT_BOILERPLATE_DESCRIPTION_TYPE"
            );
    }
    uVar7 = *(uint *)(*plVar1 + 0x20c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x418);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCOPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x20c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x418);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCOPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x20c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x418);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCOPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x20c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x418);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCOPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x20c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x418);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCOPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x20c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x418);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCOPE_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x210);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x420);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x210);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x420);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x210);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x420);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x210);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x420);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x210);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x420);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x210);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x420);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TABLE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x214);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x428);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x214);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x428);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x214);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x428);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x214);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x428);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x214);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x428);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x214);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x428);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x218);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x430);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTECODE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x218);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x430);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTECODE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x218);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x430);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTECODE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x218);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x430);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTECODE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x218);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x430);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTECODE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x218);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x430);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BYTECODE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x21c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x438);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_DOUBLE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x21c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x438);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_DOUBLE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x21c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x438);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_DOUBLE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x21c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x438);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_DOUBLE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x21c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x438);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_DOUBLE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x21c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x438);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FIXED_DOUBLE_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x220);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x440);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"AWAIT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x220);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x440);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"AWAIT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x220);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x440);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"AWAIT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x220);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x440);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"AWAIT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x220);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x440);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"AWAIT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x220);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x440);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"AWAIT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x224);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x448);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BLOCK_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x224);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x448);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BLOCK_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x224);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x448);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BLOCK_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x224);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x448);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BLOCK_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x224);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x448);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BLOCK_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x224);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x448);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"BLOCK_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x228);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x450);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CATCH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x228);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x450);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CATCH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x228);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x450);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CATCH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x228);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x450);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CATCH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x228);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x450);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CATCH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x228);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x450);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CATCH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x22c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x458);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_EVALUATE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x22c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x458);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_EVALUATE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x22c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x458);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_EVALUATE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x22c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x458);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_EVALUATE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x22c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x458);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_EVALUATE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x22c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x458);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DEBUG_EVALUATE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x230);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x460);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EVAL_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x230);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x460);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EVAL_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x230);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x460);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EVAL_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x230);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x460);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EVAL_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x230);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x460);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EVAL_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x230);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x460);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EVAL_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x234);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x468);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x234);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x468);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x234);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x468);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x234);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x468);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x234);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x468);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x234);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x468);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FUNCTION_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x238);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x470);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MODULE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x238);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x470);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MODULE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x238);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x470);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MODULE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x238);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x470);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MODULE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x238);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x470);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MODULE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x238);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x470);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MODULE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x23c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x478);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NATIVE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x23c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x478);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NATIVE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x23c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x478);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NATIVE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x23c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x478);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NATIVE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x23c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x478);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NATIVE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x23c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x478);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"NATIVE_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x240);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x480);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x240);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x480);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x240);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x480);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x240);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x480);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x240);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x480);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x240);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x480);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SCRIPT_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x244);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x488);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WITH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x244);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x488);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WITH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x244);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x488);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WITH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x244);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x488);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WITH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x244);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x488);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WITH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x244);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x488);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WITH_CONTEXT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x248);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x490);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x248);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x490);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x248);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x490);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x248);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x490);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x248);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x490);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x248);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x490);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x24c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x498);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x24c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x498);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x24c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x498);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x24c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x498);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x24c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x498);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x24c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x498);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_HASH_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x250);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4a0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_NAME_DICTIONARY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar2 + 0x250);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4a0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_NAME_DICTIONARY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar3 + 0x250);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4a0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_NAME_DICTIONARY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar4 + 0x250);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4a0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_NAME_DICTIONARY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar5 + 0x250);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4a0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_NAME_DICTIONARY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar6 + 0x250);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4a0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SMALL_ORDERED_NAME_DICTIONARY_TYPE")
      ;
    }
    uVar7 = *(uint *)(*plVar1 + 0x254);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4a8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x254);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4a8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x254);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4a8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x254);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4a8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x254);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4a8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x254);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4a8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 600);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4b0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 600);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4b0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 600);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4b0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 600);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4b0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 600);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4b0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 600);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4b0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x25c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4b8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x25c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4b8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x25c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4b8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x25c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4b8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x25c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4b8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x25c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4b8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_FIXED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x260);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4c0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TRANSITION_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x260);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4c0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TRANSITION_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x260);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4c0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TRANSITION_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x260);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4c0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TRANSITION_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x260);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4c0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TRANSITION_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x260);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4c0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"TRANSITION_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x264);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4c8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x264);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4c8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x264);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4c8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x264);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4c8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x264);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4c8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x264);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4c8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x268);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4d0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x268);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4d0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x268);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4d0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x268);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4d0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x268);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4d0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x268);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4d0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x26c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4d8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_DATA_CONTAINER_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x26c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4d8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_DATA_CONTAINER_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x26c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4d8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_DATA_CONTAINER_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x26c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4d8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_DATA_CONTAINER_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x26c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4d8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_DATA_CONTAINER_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x26c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4d8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"CODE_DATA_CONTAINER_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x270);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4e0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DESCRIPTOR_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x270);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4e0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DESCRIPTOR_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x270);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4e0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DESCRIPTOR_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x270);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4e0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DESCRIPTOR_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x270);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4e0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DESCRIPTOR_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x270);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4e0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"DESCRIPTOR_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x274);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4e8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EMBEDDER_DATA_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x274);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4e8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EMBEDDER_DATA_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x274);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4e8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EMBEDDER_DATA_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x274);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4e8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EMBEDDER_DATA_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x274);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4e8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EMBEDDER_DATA_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x274);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4e8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"EMBEDDER_DATA_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x278);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4f0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_METADATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x278);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4f0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_METADATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x278);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4f0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_METADATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x278);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4f0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_METADATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x278);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4f0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_METADATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x278);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4f0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_METADATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x27c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x4f8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_VECTOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x27c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x4f8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_VECTOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x27c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x4f8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_VECTOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x27c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x4f8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_VECTOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x27c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x4f8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_VECTOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x27c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x4f8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FEEDBACK_VECTOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x280);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x500);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FILLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x280);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x500);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FILLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x280);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x500);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FILLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x280);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x500);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FILLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x280);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x500);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FILLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x280);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x500);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FILLER_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x284);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x508);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FREE_SPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x284);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x508);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FREE_SPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x284);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x508);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FREE_SPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x284);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x508);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FREE_SPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x284);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x508);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FREE_SPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x284);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x508);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"FREE_SPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x288);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x510);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x288);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x510);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x288);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x510);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x288);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x510);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x288);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x510);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x288);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x510);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x28c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x518);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x28c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x518);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x28c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x518);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x28c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x518);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x28c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x518);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x28c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x518);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PREPARSE_DATA_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x290);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x520);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x290);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x520);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x290);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x520);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x290);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x520);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x290);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x520);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x290);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x520);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x294);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x528);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x294);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x528);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x294);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x528);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x294);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x528);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x294);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x528);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x294);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x528);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"PROPERTY_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x298);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x530);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SHARED_FUNCTION_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x298);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x530);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SHARED_FUNCTION_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x298);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x530);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SHARED_FUNCTION_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x298);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x530);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SHARED_FUNCTION_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x298);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x530);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SHARED_FUNCTION_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x298);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x530);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"SHARED_FUNCTION_INFO_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x29c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x538);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_ARRAY_LIST_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x29c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x538);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_ARRAY_LIST_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x29c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x538);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_ARRAY_LIST_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x29c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x538);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_ARRAY_LIST_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x29c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x538);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_ARRAY_LIST_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x29c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x538);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_ARRAY_LIST_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x2a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x540);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x2a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x540);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x2a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x540);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x2a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x540);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x2a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x540);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x2a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x540);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WEAK_CELL_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x2a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x548);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x2a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x548);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x2a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x548);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x2a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x548);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x2a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x548);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x2a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x548);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1084);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2108);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1084);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2108);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1084);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2108);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1084);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2108);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1084);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2108);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1084);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2108);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x2a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x550);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x2a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x550);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x2a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x550);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x2a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x550);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x2a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x550);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x2a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x550);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x2ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x558);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x2ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x558);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x2ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x558);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x2ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x558);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x2ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x558);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x2ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x558);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GLOBAL_PROXY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x2b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x560);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MODULE_NAMESPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x2b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x560);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MODULE_NAMESPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x2b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x560);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MODULE_NAMESPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x2b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x560);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MODULE_NAMESPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x2b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x560);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MODULE_NAMESPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x2b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x560);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MODULE_NAMESPACE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1040);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2080);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SPECIAL_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1040);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2080);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SPECIAL_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1040);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2080);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SPECIAL_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1040);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2080);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SPECIAL_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1040);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2080);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SPECIAL_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1040);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2080);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SPECIAL_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1044);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2088);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PRIMITIVE_WRAPPER_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1044);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2088);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PRIMITIVE_WRAPPER_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1044);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2088);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PRIMITIVE_WRAPPER_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1044);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2088);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PRIMITIVE_WRAPPER_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1044);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2088);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PRIMITIVE_WRAPPER_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1044);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2088);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PRIMITIVE_WRAPPER_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1048);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2090);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1048);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2090);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1048);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2090);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1048);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2090);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1048);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2090);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1048);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2090);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x104c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2098);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x104c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2098);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x104c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2098);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x104c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2098);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x104c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2098);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x104c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2098);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1050);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20a0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1050);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20a0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1050);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20a0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1050);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20a0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1050);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20a0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1050);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20a0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1054);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20a8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1054);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20a8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1054);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20a8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1054);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20a8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1054);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20a8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1054);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20a8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_KEY_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1058);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20b0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1058);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20b0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1058);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20b0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1058);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20b0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1058);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20b0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1058);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20b0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_VALUE_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x105c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20b8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x105c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20b8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x105c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20b8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x105c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20b8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x105c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20b8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x105c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20b8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1060);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20c0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FUNCTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1060);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20c0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FUNCTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1060);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20c0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FUNCTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1060);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20c0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FUNCTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1060);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20c0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FUNCTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1060);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20c0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FUNCTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1064);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20c8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1064);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20c8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1064);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20c8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1064);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20c8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1064);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20c8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1064);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20c8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_GENERATOR_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1068);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20d0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATA_VIEW_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1068);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20d0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATA_VIEW_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1068);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20d0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATA_VIEW_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1068);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20d0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATA_VIEW_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1068);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20d0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATA_VIEW_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1068);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20d0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATA_VIEW_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x106c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20d8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_TYPED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x106c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20d8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_TYPED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x106c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20d8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_TYPED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x106c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20d8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_TYPED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x106c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20d8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_TYPED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x106c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20d8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_TYPED_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1070);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20e0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1070);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20e0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1070);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20e0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1070);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20e0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1070);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20e0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1070);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20e0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1074);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20e8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1074);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20e8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1074);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20e8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1074);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20e8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1074);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20e8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1074);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20e8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1078);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20f0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1078);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20f0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1078);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20f0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1078);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20f0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1078);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20f0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1078);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20f0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_MAP_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x107c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x20f8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x107c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20f8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x107c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x20f8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x107c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x20f8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x107c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x20f8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x107c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x20f8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_SET_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1080);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2100);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1080);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2100);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1080);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2100);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1080);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2100);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1080);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2100);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1080);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2100);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_API_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1088);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2110);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARGUMENTS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1088);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2110);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARGUMENTS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1088);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2110);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARGUMENTS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1088);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2110);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARGUMENTS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1088);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2110);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARGUMENTS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1088);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2110);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARGUMENTS_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x108c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2118);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x108c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2118);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x108c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2118);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x108c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2118);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x108c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2118);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x108c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2118);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1090);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2120);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_BUFFER_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1090);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2120);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_BUFFER_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1090);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2120);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_BUFFER_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1090);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2120);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_BUFFER_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1090);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2120);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_BUFFER_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1090);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2120);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_BUFFER_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1094);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2128);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1094);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2128);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1094);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2128);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1094);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2128);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1094);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2128);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1094);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2128);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ARRAY_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x1098);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2130);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x1098);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2130);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x1098);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2130);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x1098);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2130);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x1098);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2130);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x1098);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2130);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x109c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2138);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_CONTEXT_EXTENSION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x109c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2138);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_CONTEXT_EXTENSION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x109c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2138);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_CONTEXT_EXTENSION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x109c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2138);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_CONTEXT_EXTENSION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x109c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2138);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_CONTEXT_EXTENSION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x109c);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2138);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_CONTEXT_EXTENSION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2140);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2140);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2140);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2140);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2140);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10a0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2140);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_DATE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2148);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ERROR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2148);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ERROR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2148);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ERROR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2148);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ERROR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2148);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ERROR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10a4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2148);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_ERROR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2150);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FINALIZATION_GROUP_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2150);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FINALIZATION_GROUP_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2150);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FINALIZATION_GROUP_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2150);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FINALIZATION_GROUP_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2150);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FINALIZATION_GROUP_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10a8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2150);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FINALIZATION_GROUP_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2158);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2158);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2158);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2158);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2158);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10ac);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2158);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,
             "JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2160);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MESSAGE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2160);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MESSAGE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2160);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MESSAGE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2160);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MESSAGE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2160);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MESSAGE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10b0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2160);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_MESSAGE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2168);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROMISE_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2168);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROMISE_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2168);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROMISE_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2168);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROMISE_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2168);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROMISE_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10b4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2168);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_PROMISE_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2170);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2170);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2170);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2170);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2170);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10b8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2170);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2178);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2178);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2178);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2178);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2178);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10bc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2178);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_REG_EXP_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2180);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2180);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2180);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2180);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2180);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10c0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2180);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_STRING_ITERATOR_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2188);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_REF_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2188);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_REF_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2188);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_REF_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2188);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_REF_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2188);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_REF_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10c4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2188);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_WEAK_REF_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2190);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2190);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2190);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2190);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2190);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10c8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2190);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_EXCEPTION_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x2198);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x2198);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x2198);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x2198);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2198);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10cc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x2198);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_GLOBAL_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x21a0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INSTANCE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x21a0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INSTANCE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x21a0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INSTANCE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x21a0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INSTANCE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x21a0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INSTANCE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10d0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x21a0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_INSTANCE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x21a8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MEMORY_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x21a8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MEMORY_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x21a8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MEMORY_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x21a8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MEMORY_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x21a8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MEMORY_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10d4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x21a8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MEMORY_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x21b0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MODULE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x21b0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MODULE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x21b0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MODULE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x21b0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MODULE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x21b0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MODULE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10d8);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x21b0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_MODULE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x21b8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_TABLE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x21b8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_TABLE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x21b8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_TABLE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x21b8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_TABLE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x21b8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_TABLE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10dc);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x21b8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"WASM_TABLE_OBJECT_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x21c0);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_BOUND_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x21c0);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_BOUND_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x21c0);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_BOUND_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x21c0);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_BOUND_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x21c0);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_BOUND_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10e0);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x21c0);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_BOUND_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar1 + 0x10e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x21c8);
      uVar8 = Heap::GetSpaceName(0);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar2 + 0x10e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x21c8);
      uVar8 = Heap::GetSpaceName(1);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar3 + 0x10e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x21c8);
      uVar8 = Heap::GetSpaceName(2);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar4 + 0x10e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x21c8);
      uVar8 = Heap::GetSpaceName(3);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar5 + 0x10e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x21c8);
      uVar8 = Heap::GetSpaceName(4);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FUNCTION_TYPE");
    }
    uVar7 = *(uint *)(*plVar6 + 0x10e4);
    if (uVar7 != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x21c8);
      uVar8 = Heap::GetSpaceName(5);
      PrintF("%10d %10zu  %-10s %s\n",(ulong)uVar7,uVar9,uVar8,"JS_FUNCTION_TYPE");
    }
    PrintF("\n");
    return;
  }
  return;
}

