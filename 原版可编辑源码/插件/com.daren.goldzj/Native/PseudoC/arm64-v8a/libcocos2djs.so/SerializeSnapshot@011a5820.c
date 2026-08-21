
/* v8::internal::HeapSnapshotJSONSerializer::SerializeSnapshot() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeSnapshot(HeapSnapshotJSONSerializer *this)

{
  uint uVar1;
  long lVar2;
  
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\"meta\":");
  OutputStreamWriter::AddString
            (*(OutputStreamWriter **)(this + 0x28),
             "{\"node_fields\":[\"type\",\"name\",\"id\",\"self_size\",\"edge_count\",\"trace_node_id\"],\"node_types\":[[\"hidden\",\"array\",\"string\",\"object\",\"code\",\"closure\",\"regexp\",\"number\",\"native\",\"synthetic\",\"concatenated string\",\"sliced string\",\"symbol\",\"bigint\"],\"string\",\"number\",\"number\",\"number\",\"number\",\"number\"],\"edge_fields\":[\"type\",\"name_or_index\",\"to_node\"],\"edge_types\":[[\"context\",\"element\",\"property\",\"internal\",\"hidden\",\"shortcut\",\"weak\"],\"string_or_number\",\"node\"],\"trace_function_info_fields\":[\"function_id\",\"name\",\"script_name\",\"script_id\",\"line\",\"column\"],\"trace_node_fields\":[\"id\",\"function_info_index\",\"count\",\"size\",\"children\"],\"sample_fields\":[\"timestamp_us\",\"last_assigned_id\"],\"location_fields\":[\"object_index\",\"script_id\",\"line\",\"column\"]}"
            );
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),",\"node_count\":");
  OutputStreamWriter::AddNumberImpl<unsigned_int>
            (*(OutputStreamWriter **)(this + 0x28),*(uint *)(*(long *)this + 0xf8),"%u");
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),",\"edge_count\":");
  OutputStreamWriter::AddNumberImpl<unsigned_int>
            (*(OutputStreamWriter **)(this + 0x28),*(uint *)(*(long *)this + 0x128),"%u");
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),",\"trace_function_count\":");
  lVar2 = *(long *)(**(long **)this + 0x30);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)((ulong)(*(long *)(lVar2 + 0x150) - *(long *)(lVar2 + 0x148)) >> 3);
  }
  OutputStreamWriter::AddNumberImpl<unsigned_int>(*(OutputStreamWriter **)(this + 0x28),uVar1,"%u");
  return;
}

