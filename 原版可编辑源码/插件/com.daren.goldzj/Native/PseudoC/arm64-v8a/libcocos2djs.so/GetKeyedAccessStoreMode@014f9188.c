
/* v8::internal::StoreHandler::GetKeyedAccessStoreMode(v8::internal::MaybeObject) */

uint v8::internal::StoreHandler::GetKeyedAccessStoreMode(uint param_1)

{
  if (((param_1 & 1) == 0) && ((param_1 & 0x1e) == 0x14)) {
    return param_1 >> 0x11 & 3;
  }
  return 0;
}

