package com.czhj.wire.protobuf;

public final class FileDescriptorSet extends com.czhj.wire.Message<com.czhj.wire.protobuf.FileDescriptorSet, com.czhj.wire.protobuf.FileDescriptorSet.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorSet> ADAPTER = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FileDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 1)
    public final java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> file;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.FileDescriptorSet, com.czhj.wire.protobuf.FileDescriptorSet.Builder> {
        public java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> file;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.file = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.FileDescriptorSet r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorSet build() {
                r3 = this;
                com.czhj.wire.protobuf.FileDescriptorSet r0 = new com.czhj.wire.protobuf.FileDescriptorSet
                java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r3.file
                com.czhj.wire.okio.ByteString r2 = super.buildUnknownFields()
                r0.<init>(r1, r2)
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorSet.Builder file(java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.file = r1
                return r0
        }
    }

    private static final class ProtoAdapter_FileDescriptorSet extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorSet> {
        public ProtoAdapter_FileDescriptorSet() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.FileDescriptorSet> r1 = com.czhj.wire.protobuf.FileDescriptorSet.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorSet decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.FileDescriptorSet$Builder r0 = new com.czhj.wire.protobuf.FileDescriptorSet$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L2f
                r4 = 1
                if (r3 == r4) goto L23
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r3 = r0.file
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorProto> r4 = com.czhj.wire.protobuf.FileDescriptorProto.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L2f:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.FileDescriptorSet r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorSet decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorSet r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.FileDescriptorSet r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorProto> r0 = com.czhj.wire.protobuf.FileDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r5.file
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.FileDescriptorSet r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorSet r2 = (com.czhj.wire.protobuf.FileDescriptorSet) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.FileDescriptorSet r4) {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorProto> r0 = com.czhj.wire.protobuf.FileDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r4.file
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.okio.ByteString r4 = r4.unknownFields()
                int r4 = r4.size()
                int r0 = r0 + r4
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.FileDescriptorSet r1) {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorSet r1 = (com.czhj.wire.protobuf.FileDescriptorSet) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.FileDescriptorSet redact(com.czhj.wire.protobuf.FileDescriptorSet r3) {
                r2 = this;
                com.czhj.wire.protobuf.FileDescriptorSet$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r0 = r3.file
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorProto> r1 = com.czhj.wire.protobuf.FileDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.FileDescriptorSet r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorSet redact(com.czhj.wire.protobuf.FileDescriptorSet r1) {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorSet r1 = (com.czhj.wire.protobuf.FileDescriptorSet) r1
                com.czhj.wire.protobuf.FileDescriptorSet r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.FileDescriptorSet$ProtoAdapter_FileDescriptorSet r0 = new com.czhj.wire.protobuf.FileDescriptorSet$ProtoAdapter_FileDescriptorSet
            r0.<init>()
            com.czhj.wire.protobuf.FileDescriptorSet.ADAPTER = r0
            return
    }

    public FileDescriptorSet(java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r2) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r0)
            return
    }

    public FileDescriptorSet(java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r2, com.czhj.wire.okio.ByteString r3) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorSet> r0 = com.czhj.wire.protobuf.FileDescriptorSet.ADAPTER
            r1.<init>(r0, r3)
            java.lang.String r3 = "file"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r3, r2)
            r1.file = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.FileDescriptorSet
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.FileDescriptorSet r5 = (com.czhj.wire.protobuf.FileDescriptorSet) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L25
            java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r4.file
            java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r5 = r5.file
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L25
            goto L26
        L25:
            r0 = r2
        L26:
            return r0
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto L17
            com.czhj.wire.okio.ByteString r0 = r2.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r2.file
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r2.hashCode = r0
        L17:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.FileDescriptorSet$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.FileDescriptorSet.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.FileDescriptorSet$Builder r0 = new com.czhj.wire.protobuf.FileDescriptorSet$Builder
            r0.<init>()
            java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r3.file
            java.lang.String r2 = "file"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.file = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r4.file
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L17
            java.lang.String r1 = ", file="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.FileDescriptorProto> r1 = r4.file
            r0.append(r1)
        L17:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "FileDescriptorSet{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
