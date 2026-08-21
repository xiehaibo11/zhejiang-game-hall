package com.czhj.wire.protobuf;

public final class EnumDescriptorProto extends com.czhj.wire.Message<com.czhj.wire.protobuf.EnumDescriptorProto, com.czhj.wire.protobuf.EnumDescriptorProto.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> ADAPTER = null;
    public static final java.lang.String DEFAULT_NAME = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String name;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.EnumOptions#ADAPTER", tag = 3)
    public final com.czhj.wire.protobuf.EnumOptions options;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.EnumValueDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 2)
    public final java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> value;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.EnumDescriptorProto, com.czhj.wire.protobuf.EnumDescriptorProto.Builder> {
        public java.lang.String name;
        public com.czhj.wire.protobuf.EnumOptions options;
        public java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> value;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.value = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.EnumDescriptorProto build() {
                r5 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto r0 = new com.czhj.wire.protobuf.EnumDescriptorProto
                java.lang.String r1 = r5.name
                java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r2 = r5.value
                com.czhj.wire.protobuf.EnumOptions r3 = r5.options
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public com.czhj.wire.protobuf.EnumDescriptorProto.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.czhj.wire.protobuf.EnumDescriptorProto.Builder options(com.czhj.wire.protobuf.EnumOptions r1) {
                r0 = this;
                r0.options = r1
                return r0
        }

        public com.czhj.wire.protobuf.EnumDescriptorProto.Builder value(java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.value = r1
                return r0
        }
    }

    private static final class ProtoAdapter_EnumDescriptorProto extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> {
        public ProtoAdapter_EnumDescriptorProto() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = com.czhj.wire.protobuf.EnumDescriptorProto.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.EnumDescriptorProto decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.EnumDescriptorProto$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L4d
                r4 = 1
                if (r3 == r4) goto L41
                r4 = 2
                if (r3 == r4) goto L35
                r4 = 3
                if (r3 == r4) goto L29
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L29:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumOptions> r3 = com.czhj.wire.protobuf.EnumOptions.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.protobuf.EnumOptions r3 = (com.czhj.wire.protobuf.EnumOptions) r3
                r0.options(r3)
                goto L9
            L35:
                java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r3 = r0.value
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueDescriptorProto> r4 = com.czhj.wire.protobuf.EnumValueDescriptorProto.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L41:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.name(r3)
                goto L9
            L4d:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.EnumDescriptorProto r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.EnumDescriptorProto decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.EnumDescriptorProto r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueDescriptorProto> r0 = com.czhj.wire.protobuf.EnumValueDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = r5.value
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumOptions> r0 = com.czhj.wire.protobuf.EnumOptions.ADAPTER
                com.czhj.wire.protobuf.EnumOptions r1 = r5.options
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.EnumDescriptorProto r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto r2 = (com.czhj.wire.protobuf.EnumDescriptorProto) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.EnumDescriptorProto r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = com.czhj.wire.protobuf.EnumValueDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r2 = r5.value
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumOptions> r1 = com.czhj.wire.protobuf.EnumOptions.ADAPTER
                com.czhj.wire.protobuf.EnumOptions r2 = r5.options
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.EnumDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto r1 = (com.czhj.wire.protobuf.EnumDescriptorProto) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.EnumDescriptorProto redact(com.czhj.wire.protobuf.EnumDescriptorProto r3) {
                r2 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r0 = r3.value
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = com.czhj.wire.protobuf.EnumValueDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.czhj.wire.protobuf.EnumOptions r0 = r3.options
                if (r0 == 0) goto L1b
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumOptions> r0 = com.czhj.wire.protobuf.EnumOptions.ADAPTER
                com.czhj.wire.protobuf.EnumOptions r1 = r3.options
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.wire.protobuf.EnumOptions r0 = (com.czhj.wire.protobuf.EnumOptions) r0
                r3.options = r0
            L1b:
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.EnumDescriptorProto r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.EnumDescriptorProto redact(com.czhj.wire.protobuf.EnumDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.EnumDescriptorProto r1 = (com.czhj.wire.protobuf.EnumDescriptorProto) r1
                com.czhj.wire.protobuf.EnumDescriptorProto r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.EnumDescriptorProto$ProtoAdapter_EnumDescriptorProto r0 = new com.czhj.wire.protobuf.EnumDescriptorProto$ProtoAdapter_EnumDescriptorProto
            r0.<init>()
            com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER = r0
            return
    }

    public EnumDescriptorProto(java.lang.String r2, java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r3, com.czhj.wire.protobuf.EnumOptions r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public EnumDescriptorProto(java.lang.String r2, java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r3, com.czhj.wire.protobuf.EnumOptions r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r0 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
            r1.<init>(r0, r5)
            r1.name = r2
            java.lang.String r2 = "value"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r3)
            r1.value = r2
            r1.options = r4
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.EnumDescriptorProto
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.EnumDescriptorProto r5 = (com.czhj.wire.protobuf.EnumDescriptorProto) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = r4.value
            java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r3 = r5.value
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            com.czhj.wire.protobuf.EnumOptions r1 = r4.options
            com.czhj.wire.protobuf.EnumOptions r5 = r5.options
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L39
            goto L3a
        L39:
            r0 = r2
        L3a:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L30
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.name
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = r3.value
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.EnumOptions r1 = r3.options
            if (r1 == 0) goto L2d
            int r2 = r1.hashCode()
        L2d:
            int r0 = r0 + r2
            r3.hashCode = r0
        L30:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.EnumDescriptorProto$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.EnumDescriptorProto.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.EnumDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.EnumDescriptorProto$Builder
            r0.<init>()
            java.lang.String r1 = r3.name
            r0.name = r1
            java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = r3.value
            java.lang.String r2 = "value"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.value = r1
            com.czhj.wire.protobuf.EnumOptions r1 = r3.options
            r0.options = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.name
            if (r1 == 0) goto L13
            java.lang.String r1 = ", name="
            r0.append(r1)
            java.lang.String r1 = r4.name
            r0.append(r1)
        L13:
            java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = r4.value
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L25
            java.lang.String r1 = ", value="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = r4.value
            r0.append(r1)
        L25:
            com.czhj.wire.protobuf.EnumOptions r1 = r4.options
            if (r1 == 0) goto L33
            java.lang.String r1 = ", options="
            r0.append(r1)
            com.czhj.wire.protobuf.EnumOptions r1 = r4.options
            r0.append(r1)
        L33:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "EnumDescriptorProto{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
