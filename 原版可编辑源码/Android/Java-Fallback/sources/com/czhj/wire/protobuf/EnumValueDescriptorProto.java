package com.czhj.wire.protobuf;

public final class EnumValueDescriptorProto extends com.czhj.wire.Message<com.czhj.wire.protobuf.EnumValueDescriptorProto, com.czhj.wire.protobuf.EnumValueDescriptorProto.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueDescriptorProto> ADAPTER = null;
    public static final java.lang.String DEFAULT_NAME = "";
    public static final java.lang.Integer DEFAULT_NUMBER = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 2)
    public final java.lang.Integer number;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.EnumValueOptions#ADAPTER", tag = 3)
    public final com.czhj.wire.protobuf.EnumValueOptions options;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.EnumValueDescriptorProto, com.czhj.wire.protobuf.EnumValueDescriptorProto.Builder> {
        public java.lang.String name;
        public java.lang.Integer number;
        public com.czhj.wire.protobuf.EnumValueOptions options;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.EnumValueDescriptorProto build() {
                r5 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto r0 = new com.czhj.wire.protobuf.EnumValueDescriptorProto
                java.lang.String r1 = r5.name
                java.lang.Integer r2 = r5.number
                com.czhj.wire.protobuf.EnumValueOptions r3 = r5.options
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public com.czhj.wire.protobuf.EnumValueDescriptorProto.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.czhj.wire.protobuf.EnumValueDescriptorProto.Builder number(java.lang.Integer r1) {
                r0 = this;
                r0.number = r1
                return r0
        }

        public com.czhj.wire.protobuf.EnumValueDescriptorProto.Builder options(com.czhj.wire.protobuf.EnumValueOptions r1) {
                r0 = this;
                r0.options = r1
                return r0
        }
    }

    private static final class ProtoAdapter_EnumValueDescriptorProto extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueDescriptorProto> {
        public ProtoAdapter_EnumValueDescriptorProto() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.EnumValueDescriptorProto> r1 = com.czhj.wire.protobuf.EnumValueDescriptorProto.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.EnumValueDescriptorProto decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.EnumValueDescriptorProto$Builder
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
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueOptions> r3 = com.czhj.wire.protobuf.EnumValueOptions.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.protobuf.EnumValueOptions r3 = (com.czhj.wire.protobuf.EnumValueOptions) r3
                r0.options(r3)
                goto L9
            L35:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.number(r3)
                goto L9
            L41:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.name(r3)
                goto L9
            L4d:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.EnumValueDescriptorProto r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.EnumValueDescriptorProto decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.EnumValueDescriptorProto r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.number
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueOptions> r0 = com.czhj.wire.protobuf.EnumValueOptions.ADAPTER
                com.czhj.wire.protobuf.EnumValueOptions r1 = r5.options
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.EnumValueDescriptorProto r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto r2 = (com.czhj.wire.protobuf.EnumValueDescriptorProto) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.EnumValueDescriptorProto r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.number
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueOptions> r1 = com.czhj.wire.protobuf.EnumValueOptions.ADAPTER
                com.czhj.wire.protobuf.EnumValueOptions r2 = r5.options
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.EnumValueDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto r1 = (com.czhj.wire.protobuf.EnumValueDescriptorProto) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.EnumValueDescriptorProto redact(com.czhj.wire.protobuf.EnumValueDescriptorProto r3) {
                r2 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto$Builder r3 = r3.newBuilder()
                com.czhj.wire.protobuf.EnumValueOptions r0 = r3.options
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueOptions> r0 = com.czhj.wire.protobuf.EnumValueOptions.ADAPTER
                com.czhj.wire.protobuf.EnumValueOptions r1 = r3.options
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.wire.protobuf.EnumValueOptions r0 = (com.czhj.wire.protobuf.EnumValueOptions) r0
                r3.options = r0
            L14:
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.EnumValueDescriptorProto r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.EnumValueDescriptorProto redact(com.czhj.wire.protobuf.EnumValueDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.EnumValueDescriptorProto r1 = (com.czhj.wire.protobuf.EnumValueDescriptorProto) r1
                com.czhj.wire.protobuf.EnumValueDescriptorProto r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.EnumValueDescriptorProto$ProtoAdapter_EnumValueDescriptorProto r0 = new com.czhj.wire.protobuf.EnumValueDescriptorProto$ProtoAdapter_EnumValueDescriptorProto
            r0.<init>()
            com.czhj.wire.protobuf.EnumValueDescriptorProto.ADAPTER = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.wire.protobuf.EnumValueDescriptorProto.DEFAULT_NUMBER = r0
            return
    }

    public EnumValueDescriptorProto(java.lang.String r2, java.lang.Integer r3, com.czhj.wire.protobuf.EnumValueOptions r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public EnumValueDescriptorProto(java.lang.String r2, java.lang.Integer r3, com.czhj.wire.protobuf.EnumValueOptions r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumValueDescriptorProto> r0 = com.czhj.wire.protobuf.EnumValueDescriptorProto.ADAPTER
            r1.<init>(r0, r5)
            r1.name = r2
            r1.number = r3
            r1.options = r4
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.EnumValueDescriptorProto
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.EnumValueDescriptorProto r5 = (com.czhj.wire.protobuf.EnumValueDescriptorProto) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.number
            java.lang.Integer r3 = r5.number
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            com.czhj.wire.protobuf.EnumValueOptions r1 = r4.options
            com.czhj.wire.protobuf.EnumValueOptions r5 = r5.options
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
            if (r0 != 0) goto L34
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
            java.lang.Integer r1 = r3.number
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.EnumValueOptions r1 = r3.options
            if (r1 == 0) goto L31
            int r2 = r1.hashCode()
        L31:
            int r0 = r0 + r2
            r3.hashCode = r0
        L34:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.EnumValueDescriptorProto$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.EnumValueDescriptorProto.Builder newBuilder() {
            r2 = this;
            com.czhj.wire.protobuf.EnumValueDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.EnumValueDescriptorProto$Builder
            r0.<init>()
            java.lang.String r1 = r2.name
            r0.name = r1
            java.lang.Integer r1 = r2.number
            r0.number = r1
            com.czhj.wire.protobuf.EnumValueOptions r1 = r2.options
            r0.options = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
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
            java.lang.Integer r1 = r4.number
            if (r1 == 0) goto L21
            java.lang.String r1 = ", number="
            r0.append(r1)
            java.lang.Integer r1 = r4.number
            r0.append(r1)
        L21:
            com.czhj.wire.protobuf.EnumValueOptions r1 = r4.options
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", options="
            r0.append(r1)
            com.czhj.wire.protobuf.EnumValueOptions r1 = r4.options
            r0.append(r1)
        L2f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "EnumValueDescriptorProto{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
