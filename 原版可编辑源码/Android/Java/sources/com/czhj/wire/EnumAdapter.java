package com.czhj.wire;

import com.czhj.wire.ProtoAdapter;
import com.czhj.wire.WireEnum;
import java.io.IOException;

public abstract class EnumAdapter<E extends WireEnum> extends ProtoAdapter<E> {
    protected EnumAdapter(Class<E> cls) {
        super(FieldEncoding.VARINT, cls);
    }

    @Override
    public final E decode(ProtoReader protoReader) throws IOException {
        int varint32 = protoReader.readVarint32();
        E e = (E) fromValue(varint32);
        if (e != null) {
            return e;
        }
        throw new ProtoAdapter.EnumConstantNotFoundException(varint32, this.javaType);
    }

    @Override
    public final void encode(ProtoWriter protoWriter, E e) throws IOException {
        protoWriter.writeVarint32(e.getValue());
    }

    @Override
    public final int encodedSize(E e) {
        return ProtoWriter.c(e.getValue());
    }

    protected abstract E fromValue(int i);
}
