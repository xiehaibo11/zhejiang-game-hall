
void FUN_00ff5538(Evacuator *param_1)

{
  void *extraout_x1;
  
  *(undefined ***)param_1 = &PTR_FUN_01ca9030;
  v8::internal::LocalAllocationBuffer::Close((LocalAllocationBuffer *)(param_1 + 0x358));
  v8::internal::CompactionSpaceCollection::~CompactionSpaceCollection
            ((CompactionSpaceCollection *)(param_1 + 0x180));
  v8::internal::Evacuator::~Evacuator(param_1);
  v8::internal::Malloced::operator_delete((Malloced *)param_1,extraout_x1);
  return;
}

