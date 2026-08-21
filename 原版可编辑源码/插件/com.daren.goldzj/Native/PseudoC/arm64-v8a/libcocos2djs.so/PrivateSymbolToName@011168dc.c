
/* v8::internal::Symbol::PrivateSymbolToName() const */

char * __thiscall v8::internal::Symbol::PrivateSymbolToName(Symbol *this)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  iVar2 = (int)*(ulong *)this;
  if (iVar2 == *(int *)(uVar3 + 0xb10)) {
    return "call_site_frame_array_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb18)) {
    return "call_site_frame_index_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb20)) {
    return "console_context_id_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb28)) {
    return "console_context_name_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb30)) {
    return "class_fields_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb38)) {
    return "class_positions_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb40)) {
    return "detailed_stack_trace_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb48)) {
    return "elements_transition_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb50)) {
    return "error_end_pos_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb58)) {
    return "error_script_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb60)) {
    return "error_start_pos_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb68)) {
    return "frozen_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb70)) {
    return "generic_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb78)) {
    return "home_object_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb80)) {
    return "interpreter_trampoline_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb88)) {
    return "megamorphic_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb90)) {
    return "native_context_index_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xb98)) {
    return "nonextensible_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xba0)) {
    return "not_mapped_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xba8)) {
    return "promise_debug_marker_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbb0)) {
    return "promise_forwarding_handler_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 3000)) {
    return "promise_handled_by_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbc0)) {
    return "regexp_result_cached_indices_or_regexp_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbc8)) {
    return "regexp_result_names_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbd0)) {
    return "regexp_result_regexp_input_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbd8)) {
    return "regexp_result_regexp_last_index_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbe0)) {
    return "sealed_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbe8)) {
    return "stack_trace_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbf0)) {
    return "strict_function_transition_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xbf8)) {
    return "wasm_exception_tag_symbol";
  }
  if (iVar2 == *(int *)(uVar3 + 0xc00)) {
    return "wasm_exception_values_symbol";
  }
  pcVar1 = "uninitialized_symbol";
  if (iVar2 != *(int *)(uVar3 + 0xc08)) {
    pcVar1 = "UNKNOWN";
  }
  return pcVar1;
}

