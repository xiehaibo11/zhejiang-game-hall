package com.czhj.wire;

import com.czhj.wire.Message;
import com.czhj.wire.Message.Builder;

public abstract class Message<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> implements java.io.Serializable {
    private static final long serialVersionUID = 0;
    private final transient com.czhj.wire.ProtoAdapter<M> adapter;
    transient int cachedSerializedSize;
    protected transient int hashCode;
    private final transient com.czhj.wire.okio.ByteString unknownFields;

    public static abstract class Builder<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> {
        transient com.czhj.wire.okio.Buffer unknownFieldsBuffer;
        transient com.czhj.wire.okio.ByteString unknownFieldsByteString;
        transient com.czhj.wire.ProtoWriter unknownFieldsWriter;

        protected Builder() {
                r1 = this;
                r1.<init>()
                com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
                r1.unknownFieldsByteString = r0
                return
        }

        private void prepareForNewUnknownFields() {
                r2 = this;
                com.czhj.wire.okio.Buffer r0 = r2.unknownFieldsBuffer
                if (r0 != 0) goto L22
                com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
                r0.<init>()
                r2.unknownFieldsBuffer = r0
                com.czhj.wire.ProtoWriter r1 = new com.czhj.wire.ProtoWriter
                r1.<init>(r0)
                r2.unknownFieldsWriter = r1
                com.czhj.wire.okio.ByteString r0 = r2.unknownFieldsByteString     // Catch: java.io.IOException -> L1c
                r1.writeBytes(r0)     // Catch: java.io.IOException -> L1c
                com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
                r2.unknownFieldsByteString = r0
                goto L22
            L1c:
                java.lang.AssertionError r0 = new java.lang.AssertionError
                r0.<init>()
                throw r0
            L22:
                return
        }

        public final com.czhj.wire.Message.Builder<M, B> addUnknownField(int r2, com.czhj.wire.FieldEncoding r3, java.lang.Object r4) {
                r1 = this;
                r1.prepareForNewUnknownFields()
                com.czhj.wire.ProtoAdapter r3 = r3.rawProtoAdapter()     // Catch: java.io.IOException -> Ld
                com.czhj.wire.ProtoWriter r0 = r1.unknownFieldsWriter     // Catch: java.io.IOException -> Ld
                r3.encodeWithTag(r0, r2, r4)     // Catch: java.io.IOException -> Ld
                return r1
            Ld:
                java.lang.AssertionError r2 = new java.lang.AssertionError
                r2.<init>()
                throw r2
        }

        public final com.czhj.wire.Message.Builder<M, B> addUnknownFields(com.czhj.wire.okio.ByteString r2) {
                r1 = this;
                int r0 = r2.size()
                if (r0 <= 0) goto L15
                r1.prepareForNewUnknownFields()
                com.czhj.wire.ProtoWriter r0 = r1.unknownFieldsWriter     // Catch: java.io.IOException -> Lf
                r0.writeBytes(r2)     // Catch: java.io.IOException -> Lf
                goto L15
            Lf:
                java.lang.AssertionError r2 = new java.lang.AssertionError
                r2.<init>()
                throw r2
            L15:
                return r1
        }

        public abstract M build();

        public final com.czhj.wire.okio.ByteString buildUnknownFields() {
                r1 = this;
                com.czhj.wire.okio.Buffer r0 = r1.unknownFieldsBuffer
                if (r0 == 0) goto Lf
                com.czhj.wire.okio.ByteString r0 = r0.readByteString()
                r1.unknownFieldsByteString = r0
                r0 = 0
                r1.unknownFieldsBuffer = r0
                r1.unknownFieldsWriter = r0
            Lf:
                com.czhj.wire.okio.ByteString r0 = r1.unknownFieldsByteString
                return r0
        }

        public final com.czhj.wire.Message.Builder<M, B> clearUnknownFields() {
                r2 = this;
                com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
                r2.unknownFieldsByteString = r0
                com.czhj.wire.okio.Buffer r0 = r2.unknownFieldsBuffer
                r1 = 0
                if (r0 == 0) goto Le
                r0.clear()
                r2.unknownFieldsBuffer = r1
            Le:
                r2.unknownFieldsWriter = r1
                return r2
        }
    }

    protected Message(com.czhj.wire.ProtoAdapter<M> r2, com.czhj.wire.okio.ByteString r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.cachedSerializedSize = r0
            r1.hashCode = r0
            if (r2 == 0) goto L19
            if (r3 == 0) goto L11
            r1.adapter = r2
            r1.unknownFields = r3
            return
        L11:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "unknownFields == null"
            r2.<init>(r3)
            throw r2
        L19:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "adapter == null"
            r2.<init>(r3)
            throw r2
    }

    public final com.czhj.wire.ProtoAdapter<M> adapter() {
            r1 = this;
            com.czhj.wire.ProtoAdapter<M extends com.czhj.wire.Message<M, B>> r0 = r1.adapter
            return r0
    }

    public final void encode(com.czhj.wire.okio.BufferedSink r2) throws java.io.IOException {
            r1 = this;
            com.czhj.wire.ProtoAdapter<M extends com.czhj.wire.Message<M, B>> r0 = r1.adapter
            r0.encode(r2, r1)
            return
    }

    public final void encode(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            com.czhj.wire.ProtoAdapter<M extends com.czhj.wire.Message<M, B>> r0 = r1.adapter
            r0.encode(r2, r1)
            return
    }

    public final byte[] encode() {
            r1 = this;
            com.czhj.wire.ProtoAdapter<M extends com.czhj.wire.Message<M, B>> r0 = r1.adapter
            byte[] r0 = r0.encode(r1)
            return r0
    }

    public abstract B newBuilder();

    public java.lang.String toString() {
            r1 = this;
            com.czhj.wire.ProtoAdapter<M extends com.czhj.wire.Message<M, B>> r0 = r1.adapter
            java.lang.String r0 = r0.toString(r1)
            return r0
    }

    public final com.czhj.wire.okio.ByteString unknownFields() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.unknownFields
            if (r0 == 0) goto L5
            goto L7
        L5:
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
        L7:
            return r0
    }

    public final M withoutUnknownFields() {
            r1 = this;
            com.czhj.wire.Message$Builder r0 = r1.newBuilder()
            com.czhj.wire.Message$Builder r0 = r0.clearUnknownFields()
            com.czhj.wire.Message r0 = r0.build()
            return r0
    }

    protected final java.lang.Object writeReplace() throws java.io.ObjectStreamException {
            r3 = this;
            com.czhj.wire.MessageSerializedForm r0 = new com.czhj.wire.MessageSerializedForm
            byte[] r1 = r3.encode()
            java.lang.Class r2 = r3.getClass()
            r0.<init>(r1, r2)
            return r0
    }
}
