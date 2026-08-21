package com.czhj.wire.protobuf;

public final class DescriptorProto extends com.czhj.wire.Message<com.czhj.wire.protobuf.DescriptorProto, com.czhj.wire.protobuf.DescriptorProto.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> ADAPTER = null;
    public static final java.lang.String DEFAULT_NAME = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.EnumDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 4)
    public final java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> enum_type;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 6)
    public final java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> extension;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.DescriptorProto$ExtensionRange#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 5)
    public final java.util.List<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange> extension_range;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 2)
    public final java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> field;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String name;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.DescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 3)
    public final java.util.List<com.czhj.wire.protobuf.DescriptorProto> nested_type;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.OneofDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 8)
    public final java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> oneof_decl;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.MessageOptions#ADAPTER", tag = 7)
    public final com.czhj.wire.protobuf.MessageOptions options;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 10)
    public final java.util.List<java.lang.String> reserved_name;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.DescriptorProto$ReservedRange#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 9)
    public final java.util.List<com.czhj.wire.protobuf.DescriptorProto.ReservedRange> reserved_range;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.DescriptorProto, com.czhj.wire.protobuf.DescriptorProto.Builder> {
        public java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> enum_type;
        public java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> extension;
        public java.util.List<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange> extension_range;
        public java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> field;
        public java.lang.String name;
        public java.util.List<com.czhj.wire.protobuf.DescriptorProto> nested_type;
        public java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> oneof_decl;
        public com.czhj.wire.protobuf.MessageOptions options;
        public java.util.List<java.lang.String> reserved_name;
        public java.util.List<com.czhj.wire.protobuf.DescriptorProto.ReservedRange> reserved_range;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.field = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.extension = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.nested_type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.enum_type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.extension_range = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.oneof_decl = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.reserved_range = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.reserved_name = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.DescriptorProto r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.DescriptorProto build() {
                r13 = this;
                com.czhj.wire.protobuf.DescriptorProto r12 = new com.czhj.wire.protobuf.DescriptorProto
                java.lang.String r1 = r13.name
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r2 = r13.field
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3 = r13.extension
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r4 = r13.nested_type
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r5 = r13.enum_type
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r6 = r13.extension_range
                java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r7 = r13.oneof_decl
                com.czhj.wire.protobuf.MessageOptions r8 = r13.options
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r9 = r13.reserved_range
                java.util.List<java.lang.String> r10 = r13.reserved_name
                com.czhj.wire.okio.ByteString r11 = super.buildUnknownFields()
                r0 = r12
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
                return r12
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder enum_type(java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.enum_type = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder extension(java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.extension = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder extension_range(java.util.List<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.extension_range = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder field(java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.field = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder nested_type(java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.nested_type = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder oneof_decl(java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.oneof_decl = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder options(com.czhj.wire.protobuf.MessageOptions r1) {
                r0 = this;
                r0.options = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder reserved_name(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.reserved_name = r1
                return r0
        }

        public com.czhj.wire.protobuf.DescriptorProto.Builder reserved_range(java.util.List<com.czhj.wire.protobuf.DescriptorProto.ReservedRange> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.reserved_range = r1
                return r0
        }
    }

    public static final class ExtensionRange extends com.czhj.wire.Message<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange, com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.Builder> {
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange> ADAPTER = null;
        public static final java.lang.Integer DEFAULT_END = null;
        public static final java.lang.Integer DEFAULT_START = null;
        private static final long serialVersionUID = 0;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 2)
        public final java.lang.Integer end;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 1)
        public final java.lang.Integer start;

        public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange, com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.Builder> {
            public java.lang.Integer end;
            public java.lang.Integer start;

            public Builder() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public com.czhj.wire.Message build() {
                    r1 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r0 = r1.build()
                    return r0
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange build() {
                    r4 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r0 = new com.czhj.wire.protobuf.DescriptorProto$ExtensionRange
                    java.lang.Integer r1 = r4.start
                    java.lang.Integer r2 = r4.end
                    com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                    r0.<init>(r1, r2, r3)
                    return r0
            }

            public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.Builder end(java.lang.Integer r1) {
                    r0 = this;
                    r0.end = r1
                    return r0
            }

            public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.Builder start(java.lang.Integer r1) {
                    r0 = this;
                    r0.start = r1
                    return r0
            }
        }

        private static final class ProtoAdapter_ExtensionRange extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange> {
            public ProtoAdapter_ExtensionRange() {
                    r2 = this;
                    com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                    java.lang.Class<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.class
                    r2.<init>(r0, r1)
                    return
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                    r6 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$Builder r0 = new com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$Builder
                    r0.<init>()
                    long r1 = r7.beginMessage()
                L9:
                    int r3 = r7.nextTag()
                    r4 = -1
                    if (r3 == r4) goto L3e
                    r4 = 1
                    if (r3 == r4) goto L32
                    r4 = 2
                    if (r3 == r4) goto L26
                    com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                    com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                    java.lang.Object r5 = r5.decode(r7)
                    r0.addUnknownField(r3, r4, r5)
                    goto L9
                L26:
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.Integer r3 = (java.lang.Integer) r3
                    r0.end(r3)
                    goto L9
                L32:
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.Integer r3 = (java.lang.Integer) r3
                    r0.start(r3)
                    goto L9
                L3e:
                    r7.endMessage(r1)
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r7 = r0.build()
                    return r7
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r1 = r0.decode(r1)
                    return r1
            }

            public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.DescriptorProto.ExtensionRange r5) throws java.io.IOException {
                    r3 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r1 = r5.start
                    r2 = 1
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r1 = r5.end
                    r2 = 2
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    r4.writeBytes(r5)
                    return
            }

            @Override
            public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.DescriptorProto.ExtensionRange r2) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r2 = (com.czhj.wire.protobuf.DescriptorProto.ExtensionRange) r2
                    r0.encode(r1, r2)
                    return
            }

            public int encodedSize(com.czhj.wire.protobuf.DescriptorProto.ExtensionRange r5) {
                    r4 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r1 = r5.start
                    r2 = 1
                    int r0 = r0.encodedSizeWithTag(r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r2 = r5.end
                    r3 = 2
                    int r1 = r1.encodedSizeWithTag(r3, r2)
                    int r0 = r0 + r1
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    int r5 = r5.size()
                    int r0 = r0 + r5
                    return r0
            }

            @Override
            public int encodedSize(com.czhj.wire.protobuf.DescriptorProto.ExtensionRange r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r1 = (com.czhj.wire.protobuf.DescriptorProto.ExtensionRange) r1
                    int r1 = r0.encodedSize(r1)
                    return r1
            }

            public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange redact(com.czhj.wire.protobuf.DescriptorProto.ExtensionRange r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$Builder r1 = r1.newBuilder()
                    r1.clearUnknownFields()
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r1 = r1.build()
                    return r1
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange redact(com.czhj.wire.protobuf.DescriptorProto.ExtensionRange r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r1 = (com.czhj.wire.protobuf.DescriptorProto.ExtensionRange) r1
                    com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r1 = r0.redact(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$ProtoAdapter_ExtensionRange r0 = new com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$ProtoAdapter_ExtensionRange
                r0.<init>()
                com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.ADAPTER = r0
                r0 = 0
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
                com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.DEFAULT_START = r0
                com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.DEFAULT_END = r0
                return
        }

        public ExtensionRange(java.lang.Integer r2, java.lang.Integer r3) {
                r1 = this;
                com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
                r1.<init>(r2, r3, r0)
                return
        }

        public ExtensionRange(java.lang.Integer r2, java.lang.Integer r3, com.czhj.wire.okio.ByteString r4) {
                r1 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r0 = com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.ADAPTER
                r1.<init>(r0, r4)
                r1.start = r2
                r1.end = r3
                return
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof com.czhj.wire.protobuf.DescriptorProto.ExtensionRange
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                com.czhj.wire.protobuf.DescriptorProto$ExtensionRange r5 = (com.czhj.wire.protobuf.DescriptorProto.ExtensionRange) r5
                com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
                com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L2f
                java.lang.Integer r1 = r4.start
                java.lang.Integer r3 = r5.start
                boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
                if (r1 == 0) goto L2f
                java.lang.Integer r1 = r4.end
                java.lang.Integer r5 = r5.end
                boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
                if (r5 == 0) goto L2f
                goto L30
            L2f:
                r0 = r2
            L30:
                return r0
        }

        public int hashCode() {
                r3 = this;
                int r0 = r3.hashCode
                if (r0 != 0) goto L27
                com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
                int r0 = r0.hashCode()
                int r0 = r0 * 37
                java.lang.Integer r1 = r3.start
                r2 = 0
                if (r1 == 0) goto L18
                int r1 = r1.hashCode()
                goto L19
            L18:
                r1 = r2
            L19:
                int r0 = r0 + r1
                int r0 = r0 * 37
                java.lang.Integer r1 = r3.end
                if (r1 == 0) goto L24
                int r2 = r1.hashCode()
            L24:
                int r0 = r0 + r2
                r3.hashCode = r0
            L27:
                return r0
        }

        @Override
        public com.czhj.wire.Message.Builder newBuilder() {
                r1 = this;
                com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$Builder r0 = r1.newBuilder()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.Builder newBuilder() {
                r2 = this;
                com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$Builder r0 = new com.czhj.wire.protobuf.DescriptorProto$ExtensionRange$Builder
                r0.<init>()
                java.lang.Integer r1 = r2.start
                r0.start = r1
                java.lang.Integer r1 = r2.end
                r0.end = r1
                com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
                r0.addUnknownFields(r1)
                return r0
        }

        @Override
        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.Integer r1 = r4.start
                if (r1 == 0) goto L13
                java.lang.String r1 = ", start="
                r0.append(r1)
                java.lang.Integer r1 = r4.start
                r0.append(r1)
            L13:
                java.lang.Integer r1 = r4.end
                if (r1 == 0) goto L21
                java.lang.String r1 = ", end="
                r0.append(r1)
                java.lang.Integer r1 = r4.end
                r0.append(r1)
            L21:
                r1 = 0
                r2 = 2
                java.lang.String r3 = "ExtensionRange{"
                java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static final class ProtoAdapter_DescriptorProto extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> {
        public ProtoAdapter_DescriptorProto() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.DescriptorProto> r1 = com.czhj.wire.protobuf.DescriptorProto.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.DescriptorProto decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.DescriptorProto$Builder r0 = new com.czhj.wire.protobuf.DescriptorProto$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L68
                switch(r3) {
                    case 1: goto L5c;
                    case 2: goto L50;
                    case 3: goto L4b;
                    case 4: goto L46;
                    case 5: goto L41;
                    case 6: goto L3e;
                    case 7: goto L32;
                    case 8: goto L2d;
                    case 9: goto L28;
                    case 10: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                java.util.List<java.lang.String> r3 = r0.reserved_name
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
                goto L54
            L28:
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r3 = r0.reserved_range
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r4 = com.czhj.wire.protobuf.DescriptorProto.ReservedRange.ADAPTER
                goto L54
            L2d:
                java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r3 = r0.oneof_decl
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.OneofDescriptorProto> r4 = com.czhj.wire.protobuf.OneofDescriptorProto.ADAPTER
                goto L54
            L32:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MessageOptions> r3 = com.czhj.wire.protobuf.MessageOptions.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.protobuf.MessageOptions r3 = (com.czhj.wire.protobuf.MessageOptions) r3
                r0.options(r3)
                goto L9
            L3e:
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3 = r0.extension
                goto L52
            L41:
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r3 = r0.extension_range
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r4 = com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.ADAPTER
                goto L54
            L46:
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r3 = r0.enum_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r4 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                goto L54
            L4b:
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r3 = r0.nested_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r4 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                goto L54
            L50:
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3 = r0.field
            L52:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r4 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
            L54:
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L5c:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.name(r3)
                goto L9
            L68:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.DescriptorProto r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.DescriptorProto decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.DescriptorProto r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.DescriptorProto r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r5.field
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r5.extension
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r0 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r5.nested_type
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r0 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r5.enum_type
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r0 = com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = r5.extension_range
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.OneofDescriptorProto> r0 = com.czhj.wire.protobuf.OneofDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = r5.oneof_decl
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MessageOptions> r0 = com.czhj.wire.protobuf.MessageOptions.ADAPTER
                com.czhj.wire.protobuf.MessageOptions r1 = r5.options
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r0 = com.czhj.wire.protobuf.DescriptorProto.ReservedRange.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = r5.reserved_range
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.reserved_name
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.DescriptorProto r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.DescriptorProto r2 = (com.czhj.wire.protobuf.DescriptorProto) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.DescriptorProto r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r2 = r5.field
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r2 = r5.extension
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r1 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r2 = r5.nested_type
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r2 = r5.enum_type
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r2 = r5.extension_range
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = com.czhj.wire.protobuf.OneofDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r2 = r5.oneof_decl
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MessageOptions> r1 = com.czhj.wire.protobuf.MessageOptions.ADAPTER
                com.czhj.wire.protobuf.MessageOptions r2 = r5.options
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = com.czhj.wire.protobuf.DescriptorProto.ReservedRange.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r2 = r5.reserved_range
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.reserved_name
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.DescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.DescriptorProto r1 = (com.czhj.wire.protobuf.DescriptorProto) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.DescriptorProto redact(com.czhj.wire.protobuf.DescriptorProto r3) {
                r2 = this;
                com.czhj.wire.protobuf.DescriptorProto$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r0 = r3.field
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r0 = r3.extension
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r0 = r3.nested_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r1 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r0 = r3.enum_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r0 = r3.extension_range
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = com.czhj.wire.protobuf.DescriptorProto.ExtensionRange.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r0 = r3.oneof_decl
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = com.czhj.wire.protobuf.OneofDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.czhj.wire.protobuf.MessageOptions r0 = r3.options
                if (r0 == 0) goto L3e
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MessageOptions> r0 = com.czhj.wire.protobuf.MessageOptions.ADAPTER
                com.czhj.wire.protobuf.MessageOptions r1 = r3.options
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.wire.protobuf.MessageOptions r0 = (com.czhj.wire.protobuf.MessageOptions) r0
                r3.options = r0
            L3e:
                java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r0 = r3.reserved_range
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = com.czhj.wire.protobuf.DescriptorProto.ReservedRange.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.DescriptorProto r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.DescriptorProto redact(com.czhj.wire.protobuf.DescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.DescriptorProto r1 = (com.czhj.wire.protobuf.DescriptorProto) r1
                com.czhj.wire.protobuf.DescriptorProto r1 = r0.redact(r1)
                return r1
        }
    }

    public static final class ReservedRange extends com.czhj.wire.Message<com.czhj.wire.protobuf.DescriptorProto.ReservedRange, com.czhj.wire.protobuf.DescriptorProto.ReservedRange.Builder> {
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto.ReservedRange> ADAPTER = null;
        public static final java.lang.Integer DEFAULT_END = null;
        public static final java.lang.Integer DEFAULT_START = null;
        private static final long serialVersionUID = 0;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 2)
        public final java.lang.Integer end;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 1)
        public final java.lang.Integer start;

        public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.DescriptorProto.ReservedRange, com.czhj.wire.protobuf.DescriptorProto.ReservedRange.Builder> {
            public java.lang.Integer end;
            public java.lang.Integer start;

            public Builder() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public com.czhj.wire.Message build() {
                    r1 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r0 = r1.build()
                    return r0
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ReservedRange build() {
                    r4 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r0 = new com.czhj.wire.protobuf.DescriptorProto$ReservedRange
                    java.lang.Integer r1 = r4.start
                    java.lang.Integer r2 = r4.end
                    com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                    r0.<init>(r1, r2, r3)
                    return r0
            }

            public com.czhj.wire.protobuf.DescriptorProto.ReservedRange.Builder end(java.lang.Integer r1) {
                    r0 = this;
                    r0.end = r1
                    return r0
            }

            public com.czhj.wire.protobuf.DescriptorProto.ReservedRange.Builder start(java.lang.Integer r1) {
                    r0 = this;
                    r0.start = r1
                    return r0
            }
        }

        private static final class ProtoAdapter_ReservedRange extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto.ReservedRange> {
            public ProtoAdapter_ReservedRange() {
                    r2 = this;
                    com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                    java.lang.Class<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = com.czhj.wire.protobuf.DescriptorProto.ReservedRange.class
                    r2.<init>(r0, r1)
                    return
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ReservedRange decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                    r6 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange$Builder r0 = new com.czhj.wire.protobuf.DescriptorProto$ReservedRange$Builder
                    r0.<init>()
                    long r1 = r7.beginMessage()
                L9:
                    int r3 = r7.nextTag()
                    r4 = -1
                    if (r3 == r4) goto L3e
                    r4 = 1
                    if (r3 == r4) goto L32
                    r4 = 2
                    if (r3 == r4) goto L26
                    com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                    com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                    java.lang.Object r5 = r5.decode(r7)
                    r0.addUnknownField(r3, r4, r5)
                    goto L9
                L26:
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.Integer r3 = (java.lang.Integer) r3
                    r0.end(r3)
                    goto L9
                L32:
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.Integer r3 = (java.lang.Integer) r3
                    r0.start(r3)
                    goto L9
                L3e:
                    r7.endMessage(r1)
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r7 = r0.build()
                    return r7
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ReservedRange decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r1 = r0.decode(r1)
                    return r1
            }

            public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.DescriptorProto.ReservedRange r5) throws java.io.IOException {
                    r3 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r1 = r5.start
                    r2 = 1
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r1 = r5.end
                    r2 = 2
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    r4.writeBytes(r5)
                    return
            }

            @Override
            public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.DescriptorProto.ReservedRange r2) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r2 = (com.czhj.wire.protobuf.DescriptorProto.ReservedRange) r2
                    r0.encode(r1, r2)
                    return
            }

            public int encodedSize(com.czhj.wire.protobuf.DescriptorProto.ReservedRange r5) {
                    r4 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r1 = r5.start
                    r2 = 1
                    int r0 = r0.encodedSizeWithTag(r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                    java.lang.Integer r2 = r5.end
                    r3 = 2
                    int r1 = r1.encodedSizeWithTag(r3, r2)
                    int r0 = r0 + r1
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    int r5 = r5.size()
                    int r0 = r0 + r5
                    return r0
            }

            @Override
            public int encodedSize(com.czhj.wire.protobuf.DescriptorProto.ReservedRange r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r1 = (com.czhj.wire.protobuf.DescriptorProto.ReservedRange) r1
                    int r1 = r0.encodedSize(r1)
                    return r1
            }

            public com.czhj.wire.protobuf.DescriptorProto.ReservedRange redact(com.czhj.wire.protobuf.DescriptorProto.ReservedRange r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange$Builder r1 = r1.newBuilder()
                    r1.clearUnknownFields()
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r1 = r1.build()
                    return r1
            }

            @Override
            public com.czhj.wire.protobuf.DescriptorProto.ReservedRange redact(com.czhj.wire.protobuf.DescriptorProto.ReservedRange r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r1 = (com.czhj.wire.protobuf.DescriptorProto.ReservedRange) r1
                    com.czhj.wire.protobuf.DescriptorProto$ReservedRange r1 = r0.redact(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.DescriptorProto$ReservedRange$ProtoAdapter_ReservedRange r0 = new com.czhj.wire.protobuf.DescriptorProto$ReservedRange$ProtoAdapter_ReservedRange
                r0.<init>()
                com.czhj.wire.protobuf.DescriptorProto.ReservedRange.ADAPTER = r0
                r0 = 0
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
                com.czhj.wire.protobuf.DescriptorProto.ReservedRange.DEFAULT_START = r0
                com.czhj.wire.protobuf.DescriptorProto.ReservedRange.DEFAULT_END = r0
                return
        }

        public ReservedRange(java.lang.Integer r2, java.lang.Integer r3) {
                r1 = this;
                com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
                r1.<init>(r2, r3, r0)
                return
        }

        public ReservedRange(java.lang.Integer r2, java.lang.Integer r3, com.czhj.wire.okio.ByteString r4) {
                r1 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r0 = com.czhj.wire.protobuf.DescriptorProto.ReservedRange.ADAPTER
                r1.<init>(r0, r4)
                r1.start = r2
                r1.end = r3
                return
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof com.czhj.wire.protobuf.DescriptorProto.ReservedRange
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                com.czhj.wire.protobuf.DescriptorProto$ReservedRange r5 = (com.czhj.wire.protobuf.DescriptorProto.ReservedRange) r5
                com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
                com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L2f
                java.lang.Integer r1 = r4.start
                java.lang.Integer r3 = r5.start
                boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
                if (r1 == 0) goto L2f
                java.lang.Integer r1 = r4.end
                java.lang.Integer r5 = r5.end
                boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
                if (r5 == 0) goto L2f
                goto L30
            L2f:
                r0 = r2
            L30:
                return r0
        }

        public int hashCode() {
                r3 = this;
                int r0 = r3.hashCode
                if (r0 != 0) goto L27
                com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
                int r0 = r0.hashCode()
                int r0 = r0 * 37
                java.lang.Integer r1 = r3.start
                r2 = 0
                if (r1 == 0) goto L18
                int r1 = r1.hashCode()
                goto L19
            L18:
                r1 = r2
            L19:
                int r0 = r0 + r1
                int r0 = r0 * 37
                java.lang.Integer r1 = r3.end
                if (r1 == 0) goto L24
                int r2 = r1.hashCode()
            L24:
                int r0 = r0 + r2
                r3.hashCode = r0
            L27:
                return r0
        }

        @Override
        public com.czhj.wire.Message.Builder newBuilder() {
                r1 = this;
                com.czhj.wire.protobuf.DescriptorProto$ReservedRange$Builder r0 = r1.newBuilder()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.DescriptorProto.ReservedRange.Builder newBuilder() {
                r2 = this;
                com.czhj.wire.protobuf.DescriptorProto$ReservedRange$Builder r0 = new com.czhj.wire.protobuf.DescriptorProto$ReservedRange$Builder
                r0.<init>()
                java.lang.Integer r1 = r2.start
                r0.start = r1
                java.lang.Integer r1 = r2.end
                r0.end = r1
                com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
                r0.addUnknownFields(r1)
                return r0
        }

        @Override
        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.Integer r1 = r4.start
                if (r1 == 0) goto L13
                java.lang.String r1 = ", start="
                r0.append(r1)
                java.lang.Integer r1 = r4.start
                r0.append(r1)
            L13:
                java.lang.Integer r1 = r4.end
                if (r1 == 0) goto L21
                java.lang.String r1 = ", end="
                r0.append(r1)
                java.lang.Integer r1 = r4.end
                r0.append(r1)
            L21:
                r1 = 0
                r2 = 2
                java.lang.String r3 = "ReservedRange{"
                java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            com.czhj.wire.protobuf.DescriptorProto$ProtoAdapter_DescriptorProto r0 = new com.czhj.wire.protobuf.DescriptorProto$ProtoAdapter_DescriptorProto
            r0.<init>()
            com.czhj.wire.protobuf.DescriptorProto.ADAPTER = r0
            return
    }

    public DescriptorProto(java.lang.String r13, java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r14, java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r15, java.util.List<com.czhj.wire.protobuf.DescriptorProto> r16, java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r17, java.util.List<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange> r18, java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r19, com.czhj.wire.protobuf.MessageOptions r20, java.util.List<com.czhj.wire.protobuf.DescriptorProto.ReservedRange> r21, java.util.List<java.lang.String> r22) {
            r12 = this;
            com.czhj.wire.okio.ByteString r11 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return
    }

    public DescriptorProto(java.lang.String r2, java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3, java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r4, java.util.List<com.czhj.wire.protobuf.DescriptorProto> r5, java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r6, java.util.List<com.czhj.wire.protobuf.DescriptorProto.ExtensionRange> r7, java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r8, com.czhj.wire.protobuf.MessageOptions r9, java.util.List<com.czhj.wire.protobuf.DescriptorProto.ReservedRange> r10, java.util.List<java.lang.String> r11, com.czhj.wire.okio.ByteString r12) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r0 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
            r1.<init>(r0, r12)
            r1.name = r2
            java.lang.String r2 = "field"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r3)
            r1.field = r2
            java.lang.String r2 = "extension"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r4)
            r1.extension = r2
            java.lang.String r2 = "nested_type"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r5)
            r1.nested_type = r2
            java.lang.String r2 = "enum_type"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r6)
            r1.enum_type = r2
            java.lang.String r2 = "extension_range"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r7)
            r1.extension_range = r2
            java.lang.String r2 = "oneof_decl"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r8)
            r1.oneof_decl = r2
            r1.options = r9
            java.lang.String r2 = "reserved_range"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r10)
            r1.reserved_range = r2
            java.lang.String r2 = "reserved_name"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r11)
            r1.reserved_name = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.DescriptorProto
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.DescriptorProto r5 = (com.czhj.wire.protobuf.DescriptorProto) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.field
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3 = r5.field
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.extension
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3 = r5.extension
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r4.nested_type
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r3 = r5.nested_type
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r4.enum_type
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r3 = r5.enum_type
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = r4.extension_range
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r3 = r5.extension_range
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = r4.oneof_decl
            java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r3 = r5.oneof_decl
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            com.czhj.wire.protobuf.MessageOptions r1 = r4.options
            com.czhj.wire.protobuf.MessageOptions r3 = r5.options
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = r4.reserved_range
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r3 = r5.reserved_range
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.util.List<java.lang.String> r1 = r4.reserved_name
            java.util.List<java.lang.String> r5 = r5.reserved_name
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L7f
            goto L80
        L7f:
            r0 = r2
        L80:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L6f
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
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r3.field
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r3.extension
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r3.nested_type
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r3.enum_type
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = r3.extension_range
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = r3.oneof_decl
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.MessageOptions r1 = r3.options
            if (r1 == 0) goto L5a
            int r2 = r1.hashCode()
        L5a:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = r3.reserved_range
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.reserved_name
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        L6f:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.DescriptorProto$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.DescriptorProto.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.DescriptorProto$Builder r0 = new com.czhj.wire.protobuf.DescriptorProto$Builder
            r0.<init>()
            java.lang.String r1 = r3.name
            r0.name = r1
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r3.field
            java.lang.String r2 = "field"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.field = r1
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r3.extension
            java.lang.String r2 = "extension"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.extension = r1
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r3.nested_type
            java.lang.String r2 = "nested_type"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.nested_type = r1
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r3.enum_type
            java.lang.String r2 = "enum_type"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.enum_type = r1
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = r3.extension_range
            java.lang.String r2 = "extension_range"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.extension_range = r1
            java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = r3.oneof_decl
            java.lang.String r2 = "oneof_decl"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.oneof_decl = r1
            com.czhj.wire.protobuf.MessageOptions r1 = r3.options
            r0.options = r1
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = r3.reserved_range
            java.lang.String r2 = "reserved_range"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.reserved_range = r1
            java.util.List<java.lang.String> r1 = r3.reserved_name
            java.lang.String r2 = "reserved_name"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.reserved_name = r1
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
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.field
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L25
            java.lang.String r1 = ", field="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.field
            r0.append(r1)
        L25:
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.extension
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L37
            java.lang.String r1 = ", extension="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.extension
            r0.append(r1)
        L37:
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r4.nested_type
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L49
            java.lang.String r1 = ", nested_type="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r4.nested_type
            r0.append(r1)
        L49:
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r4.enum_type
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L5b
            java.lang.String r1 = ", enum_type="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r4.enum_type
            r0.append(r1)
        L5b:
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = r4.extension_range
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L6d
            java.lang.String r1 = ", extension_range="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ExtensionRange> r1 = r4.extension_range
            r0.append(r1)
        L6d:
            java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = r4.oneof_decl
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L7f
            java.lang.String r1 = ", oneof_decl="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.OneofDescriptorProto> r1 = r4.oneof_decl
            r0.append(r1)
        L7f:
            com.czhj.wire.protobuf.MessageOptions r1 = r4.options
            if (r1 == 0) goto L8d
            java.lang.String r1 = ", options="
            r0.append(r1)
            com.czhj.wire.protobuf.MessageOptions r1 = r4.options
            r0.append(r1)
        L8d:
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = r4.reserved_range
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L9f
            java.lang.String r1 = ", reserved_range="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.DescriptorProto$ReservedRange> r1 = r4.reserved_range
            r0.append(r1)
        L9f:
            java.util.List<java.lang.String> r1 = r4.reserved_name
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lb1
            java.lang.String r1 = ", reserved_name="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.reserved_name
            r0.append(r1)
        Lb1:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "DescriptorProto{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
