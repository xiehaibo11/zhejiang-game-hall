
/* v8::internal::SlotSet::Bucket::IsEmpty() */

bool __thiscall v8::internal::SlotSet::Bucket::IsEmpty(Bucket *this)

{
  if ((((((*(int *)this == 0) && (*(int *)(this + 4) == 0)) && (*(int *)(this + 8) == 0)) &&
       (((*(int *)(this + 0xc) == 0 && (*(int *)(this + 0x10) == 0)) &&
        ((*(int *)(this + 0x14) == 0 &&
         ((*(int *)(this + 0x18) == 0 && (*(int *)(this + 0x1c) == 0)))))))) &&
      ((*(int *)(this + 0x20) == 0 &&
       (((*(int *)(this + 0x24) == 0 && (*(int *)(this + 0x28) == 0)) &&
        (*(int *)(this + 0x2c) == 0)))))) &&
     (((((*(int *)(this + 0x30) == 0 && (*(int *)(this + 0x34) == 0)) &&
        ((*(int *)(this + 0x38) == 0 &&
         ((*(int *)(this + 0x3c) == 0 && (*(int *)(this + 0x40) == 0)))))) &&
       (*(int *)(this + 0x44) == 0)) &&
      (((((*(int *)(this + 0x48) == 0 && (*(int *)(this + 0x4c) == 0)) &&
         (*(int *)(this + 0x50) == 0)) &&
        ((*(int *)(this + 0x54) == 0 && (*(int *)(this + 0x58) == 0)))) &&
       ((((*(int *)(this + 0x5c) == 0 &&
          ((*(int *)(this + 0x60) == 0 && (*(int *)(this + 100) == 0)))) &&
         (*(int *)(this + 0x68) == 0)) &&
        ((((*(int *)(this + 0x6c) == 0 && (*(int *)(this + 0x70) == 0)) &&
          (*(int *)(this + 0x74) == 0)) && (*(int *)(this + 0x78) == 0)))))))))) {
    return *(int *)(this + 0x7c) == 0;
  }
  return false;
}

