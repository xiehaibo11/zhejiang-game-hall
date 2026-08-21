package com.czhj.wire.protobuf;

public final class MethodDescriptorProto extends com.czhj.wire.Message<com.czhj.wire.protobuf.MethodDescriptorProto, com.czhj.wire.protobuf.MethodDescriptorProto.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MethodDescriptorProto> ADAPTER = null;
    public static final java.lang.Boolean DEFAULT_CLIENT_STREAMING = null;
    public static final java.lang.String DEFAULT_INPUT_TYPE = "";
    public static final java.lang.String DEFAULT_NAME = "";
    public static final java.lang.String DEFAULT_OUTPUT_TYPE = "";
    public static final java.lang.Boolean DEFAULT_SERVER_STREAMING = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 5)
    public final java.lang.Boolean client_streaming;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String input_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String name;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.MethodOptions#ADAPTER", tag = 4)
    public final com.czhj.wire.protobuf.MethodOptions options;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String output_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 6)
    public final java.lang.Boolean server_streaming;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.MethodDescriptorProto, com.czhj.wire.protobuf.MethodDescriptorProto.Builder> {
        public java.lang.Boolean client_streaming;
        public java.lang.String input_type;
        public java.lang.String name;
        public com.czhj.wire.protobuf.MethodOptions options;
        public java.lang.String output_type;
        public java.lang.Boolean server_streaming;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.MethodDescriptorProto build() {
                r9 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto r8 = new com.czhj.wire.protobuf.MethodDescriptorProto
                java.lang.String r1 = r9.name
                java.lang.String r2 = r9.input_type
                java.lang.String r3 = r9.output_type
                com.czhj.wire.protobuf.MethodOptions r4 = r9.options
                java.lang.Boolean r5 = r9.client_streaming
                java.lang.Boolean r6 = r9.server_streaming
                com.czhj.wire.okio.ByteString r7 = super.buildUnknownFields()
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return r8
        }

        public com.czhj.wire.protobuf.MethodDescriptorProto.Builder client_streaming(java.lang.Boolean r1) {
                r0 = this;
                r0.client_streaming = r1
                return r0
        }

        public com.czhj.wire.protobuf.MethodDescriptorProto.Builder input_type(java.lang.String r1) {
                r0 = this;
                r0.input_type = r1
                return r0
        }

        public com.czhj.wire.protobuf.MethodDescriptorProto.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.czhj.wire.protobuf.MethodDescriptorProto.Builder options(com.czhj.wire.protobuf.MethodOptions r1) {
                r0 = this;
                r0.options = r1
                return r0
        }

        public com.czhj.wire.protobuf.MethodDescriptorProto.Builder output_type(java.lang.String r1) {
                r0 = this;
                r0.output_type = r1
                return r0
        }

        public com.czhj.wire.protobuf.MethodDescriptorProto.Builder server_streaming(java.lang.Boolean r1) {
                r0 = this;
                r0.server_streaming = r1
                return r0
        }
    }

    private static final class ProtoAdapter_MethodDescriptorProto extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MethodDescriptorProto> {
        public ProtoAdapter_MethodDescriptorProto() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.MethodDescriptorProto> r1 = com.czhj.wire.protobuf.MethodDescriptorProto.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.MethodDescriptorProto decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.MethodDescriptorProto$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L6b
                switch(r3) {
                    case 1: goto L5f;
                    case 2: goto L53;
                    case 3: goto L47;
                    case 4: goto L3b;
                    case 5: goto L2f;
                    case 6: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.server_streaming(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.client_streaming(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MethodOptions> r3 = com.czhj.wire.protobuf.MethodOptions.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.protobuf.MethodOptions r3 = (com.czhj.wire.protobuf.MethodOptions) r3
                r0.options(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.output_type(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.input_type(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.name(r3)
                goto L9
            L6b:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.MethodDescriptorProto r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.MethodDescriptorProto decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.MethodDescriptorProto r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.input_type
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.output_type
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MethodOptions> r0 = com.czhj.wire.protobuf.MethodOptions.ADAPTER
                com.czhj.wire.protobuf.MethodOptions r1 = r5.options
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.client_streaming
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.server_streaming
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.MethodDescriptorProto r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto r2 = (com.czhj.wire.protobuf.MethodDescriptorProto) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.MethodDescriptorProto r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.input_type
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.output_type
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MethodOptions> r1 = com.czhj.wire.protobuf.MethodOptions.ADAPTER
                com.czhj.wire.protobuf.MethodOptions r2 = r5.options
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.client_streaming
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.server_streaming
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.MethodDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto r1 = (com.czhj.wire.protobuf.MethodDescriptorProto) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.MethodDescriptorProto redact(com.czhj.wire.protobuf.MethodDescriptorProto r3) {
                r2 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto$Builder r3 = r3.newBuilder()
                com.czhj.wire.protobuf.MethodOptions r0 = r3.options
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MethodOptions> r0 = com.czhj.wire.protobuf.MethodOptions.ADAPTER
                com.czhj.wire.protobuf.MethodOptions r1 = r3.options
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.wire.protobuf.MethodOptions r0 = (com.czhj.wire.protobuf.MethodOptions) r0
                r3.options = r0
            L14:
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.MethodDescriptorProto r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.MethodDescriptorProto redact(com.czhj.wire.protobuf.MethodDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.MethodDescriptorProto r1 = (com.czhj.wire.protobuf.MethodDescriptorProto) r1
                com.czhj.wire.protobuf.MethodDescriptorProto r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.MethodDescriptorProto$ProtoAdapter_MethodDescriptorProto r0 = new com.czhj.wire.protobuf.MethodDescriptorProto$ProtoAdapter_MethodDescriptorProto
            r0.<init>()
            com.czhj.wire.protobuf.MethodDescriptorProto.ADAPTER = r0
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.wire.protobuf.MethodDescriptorProto.DEFAULT_CLIENT_STREAMING = r0
            com.czhj.wire.protobuf.MethodDescriptorProto.DEFAULT_SERVER_STREAMING = r0
            return
    }

    public MethodDescriptorProto(java.lang.String r9, java.lang.String r10, java.lang.String r11, com.czhj.wire.protobuf.MethodOptions r12, java.lang.Boolean r13, java.lang.Boolean r14) {
            r8 = this;
            com.czhj.wire.okio.ByteString r7 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public MethodDescriptorProto(java.lang.String r2, java.lang.String r3, java.lang.String r4, com.czhj.wire.protobuf.MethodOptions r5, java.lang.Boolean r6, java.lang.Boolean r7, com.czhj.wire.okio.ByteString r8) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MethodDescriptorProto> r0 = com.czhj.wire.protobuf.MethodDescriptorProto.ADAPTER
            r1.<init>(r0, r8)
            r1.name = r2
            r1.input_type = r3
            r1.output_type = r4
            r1.options = r5
            r1.client_streaming = r6
            r1.server_streaming = r7
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.MethodDescriptorProto
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.MethodDescriptorProto r5 = (com.czhj.wire.protobuf.MethodDescriptorProto) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L57
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.String r1 = r4.input_type
            java.lang.String r3 = r5.input_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.String r1 = r4.output_type
            java.lang.String r3 = r5.output_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            com.czhj.wire.protobuf.MethodOptions r1 = r4.options
            com.czhj.wire.protobuf.MethodOptions r3 = r5.options
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.Boolean r1 = r4.client_streaming
            java.lang.Boolean r3 = r5.client_streaming
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.Boolean r1 = r4.server_streaming
            java.lang.Boolean r5 = r5.server_streaming
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L57
            goto L58
        L57:
            r0 = r2
        L58:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L5b
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
            java.lang.String r1 = r3.input_type
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.output_type
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.MethodOptions r1 = r3.options
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.client_streaming
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.server_streaming
            if (r1 == 0) goto L58
            int r2 = r1.hashCode()
        L58:
            int r0 = r0 + r2
            r3.hashCode = r0
        L5b:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.MethodDescriptorProto$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.MethodDescriptorProto.Builder newBuilder() {
            r2 = this;
            com.czhj.wire.protobuf.MethodDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.MethodDescriptorProto$Builder
            r0.<init>()
            java.lang.String r1 = r2.name
            r0.name = r1
            java.lang.String r1 = r2.input_type
            r0.input_type = r1
            java.lang.String r1 = r2.output_type
            r0.output_type = r1
            com.czhj.wire.protobuf.MethodOptions r1 = r2.options
            r0.options = r1
            java.lang.Boolean r1 = r2.client_streaming
            r0.client_streaming = r1
            java.lang.Boolean r1 = r2.server_streaming
            r0.server_streaming = r1
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
            java.lang.String r1 = r4.input_type
            if (r1 == 0) goto L21
            java.lang.String r1 = ", input_type="
            r0.append(r1)
            java.lang.String r1 = r4.input_type
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.output_type
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", output_type="
            r0.append(r1)
            java.lang.String r1 = r4.output_type
            r0.append(r1)
        L2f:
            com.czhj.wire.protobuf.MethodOptions r1 = r4.options
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", options="
            r0.append(r1)
            com.czhj.wire.protobuf.MethodOptions r1 = r4.options
            r0.append(r1)
        L3d:
            java.lang.Boolean r1 = r4.client_streaming
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", client_streaming="
            r0.append(r1)
            java.lang.Boolean r1 = r4.client_streaming
            r0.append(r1)
        L4b:
            java.lang.Boolean r1 = r4.server_streaming
            if (r1 == 0) goto L59
            java.lang.String r1 = ", server_streaming="
            r0.append(r1)
            java.lang.Boolean r1 = r4.server_streaming
            r0.append(r1)
        L59:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "MethodDescriptorProto{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
