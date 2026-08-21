package com.czhj.wire;

import com.czhj.wire.Message;
import com.czhj.wire.Message.Builder;

final class MessageSerializedForm<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> implements java.io.Serializable {
    private static final long serialVersionUID = 0;
    private final byte[] a;
    private final java.lang.Class<M> b;

    MessageSerializedForm(byte[] r1, java.lang.Class<M> r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    java.lang.Object readResolve() throws java.io.ObjectStreamException {
            r2 = this;
            java.lang.Class<M extends com.czhj.wire.Message<M, B>> r0 = r2.b
            com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.get(r0)
            byte[] r1 = r2.a     // Catch: java.io.IOException -> Ld
            java.lang.Object r0 = r0.decode(r1)     // Catch: java.io.IOException -> Ld
            return r0
        Ld:
            r0 = move-exception
            java.io.StreamCorruptedException r1 = new java.io.StreamCorruptedException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }
}
