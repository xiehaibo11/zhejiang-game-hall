package com.czhj.wire;

import com.czhj.wire.WireEnum;

public abstract class EnumAdapter<E extends com.czhj.wire.WireEnum> extends com.czhj.wire.ProtoAdapter<E> {
    protected EnumAdapter(java.lang.Class<E> r2) {
            r1 = this;
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.VARINT
            r1.<init>(r0, r2)
            return
    }

    @Override
    public final E decode(com.czhj.wire.ProtoReader r3) throws java.io.IOException {
            r2 = this;
            int r3 = r3.readVarint32()
            com.czhj.wire.WireEnum r0 = r2.fromValue(r3)
            if (r0 == 0) goto Lb
            return r0
        Lb:
            com.czhj.wire.ProtoAdapter$EnumConstantNotFoundException r0 = new com.czhj.wire.ProtoAdapter$EnumConstantNotFoundException
            java.lang.Class<?> r1 = r2.javaType
            r0.<init>(r3, r1)
            throw r0
    }

    @Override
    public java.lang.Object decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.WireEnum r1 = r0.decode(r1)
            return r1
    }

    public final void encode(com.czhj.wire.ProtoWriter r1, E r2) throws java.io.IOException {
            r0 = this;
            int r2 = r2.getValue()
            r1.writeVarint32(r2)
            return
    }

    @Override
    public void encode(com.czhj.wire.ProtoWriter r1, java.lang.Object r2) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.WireEnum r2 = (com.czhj.wire.WireEnum) r2
            r0.encode(r1, r2)
            return
    }

    public final int encodedSize(E r1) {
            r0 = this;
            int r1 = r1.getValue()
            int r1 = com.czhj.wire.ProtoWriter.c(r1)
            return r1
    }

    @Override
    public int encodedSize(java.lang.Object r1) {
            r0 = this;
            com.czhj.wire.WireEnum r1 = (com.czhj.wire.WireEnum) r1
            int r1 = r0.encodedSize(r1)
            return r1
    }

    protected abstract E fromValue(int r1);
}
