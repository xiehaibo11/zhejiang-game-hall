package com.czhj.wire.protobuf;

public final class FileDescriptorProto extends com.czhj.wire.Message<com.czhj.wire.protobuf.FileDescriptorProto, com.czhj.wire.protobuf.FileDescriptorProto.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorProto> ADAPTER = null;
    public static final java.lang.String DEFAULT_NAME = "";
    public static final java.lang.String DEFAULT_PACKAGE_ = "";
    public static final java.lang.String DEFAULT_SYNTAX = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 3)
    public final java.util.List<java.lang.String> dependency;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.EnumDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 5)
    public final java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> enum_type;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 7)
    public final java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> extension;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.DescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 4)
    public final java.util.List<com.czhj.wire.protobuf.DescriptorProto> message_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String name;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FileOptions#ADAPTER", tag = 8)
    public final com.czhj.wire.protobuf.FileOptions options;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String package_;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", label = com.czhj.wire.WireField.Label.REPEATED, tag = 10)
    public final java.util.List<java.lang.Integer> public_dependency;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.ServiceDescriptorProto#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 6)
    public final java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> service;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.SourceCodeInfo#ADAPTER", tag = 9)
    public final com.czhj.wire.protobuf.SourceCodeInfo source_code_info;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 12)
    public final java.lang.String syntax;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", label = com.czhj.wire.WireField.Label.REPEATED, tag = 11)
    public final java.util.List<java.lang.Integer> weak_dependency;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.FileDescriptorProto, com.czhj.wire.protobuf.FileDescriptorProto.Builder> {
        public java.util.List<java.lang.String> dependency;
        public java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> enum_type;
        public java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> extension;
        public java.util.List<com.czhj.wire.protobuf.DescriptorProto> message_type;
        public java.lang.String name;
        public com.czhj.wire.protobuf.FileOptions options;
        public java.lang.String package_;
        public java.util.List<java.lang.Integer> public_dependency;
        public java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> service;
        public com.czhj.wire.protobuf.SourceCodeInfo source_code_info;
        public java.lang.String syntax;
        public java.util.List<java.lang.Integer> weak_dependency;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.dependency = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.public_dependency = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.weak_dependency = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.message_type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.enum_type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.service = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.extension = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.FileDescriptorProto r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorProto build() {
                r15 = this;
                com.czhj.wire.protobuf.FileDescriptorProto r14 = new com.czhj.wire.protobuf.FileDescriptorProto
                java.lang.String r1 = r15.name
                java.lang.String r2 = r15.package_
                java.util.List<java.lang.String> r3 = r15.dependency
                java.util.List<java.lang.Integer> r4 = r15.public_dependency
                java.util.List<java.lang.Integer> r5 = r15.weak_dependency
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r6 = r15.message_type
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r7 = r15.enum_type
                java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r8 = r15.service
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r9 = r15.extension
                com.czhj.wire.protobuf.FileOptions r10 = r15.options
                com.czhj.wire.protobuf.SourceCodeInfo r11 = r15.source_code_info
                java.lang.String r12 = r15.syntax
                com.czhj.wire.okio.ByteString r13 = super.buildUnknownFields()
                r0 = r14
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
                return r14
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder dependency(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.dependency = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder enum_type(java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.enum_type = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder extension(java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.extension = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder message_type(java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.message_type = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder options(com.czhj.wire.protobuf.FileOptions r1) {
                r0 = this;
                r0.options = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder package_(java.lang.String r1) {
                r0 = this;
                r0.package_ = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder public_dependency(java.util.List<java.lang.Integer> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.public_dependency = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder service(java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.service = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder source_code_info(com.czhj.wire.protobuf.SourceCodeInfo r1) {
                r0 = this;
                r0.source_code_info = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder syntax(java.lang.String r1) {
                r0 = this;
                r0.syntax = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileDescriptorProto.Builder weak_dependency(java.util.List<java.lang.Integer> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.weak_dependency = r1
                return r0
        }
    }

    private static final class ProtoAdapter_FileDescriptorProto extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorProto> {
        public ProtoAdapter_FileDescriptorProto() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.FileDescriptorProto> r1 = com.czhj.wire.protobuf.FileDescriptorProto.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorProto decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.FileDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.FileDescriptorProto$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L87
                switch(r3) {
                    case 1: goto L7b;
                    case 2: goto L6f;
                    case 3: goto L63;
                    case 4: goto L5e;
                    case 5: goto L59;
                    case 6: goto L54;
                    case 7: goto L4f;
                    case 8: goto L43;
                    case 9: goto L37;
                    case 10: goto L32;
                    case 11: goto L2f;
                    case 12: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.syntax(r3)
                goto L9
            L2f:
                java.util.List<java.lang.Integer> r3 = r0.weak_dependency
                goto L34
            L32:
                java.util.List<java.lang.Integer> r3 = r0.public_dependency
            L34:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r4 = com.czhj.wire.ProtoAdapter.INT32
                goto L67
            L37:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo> r3 = com.czhj.wire.protobuf.SourceCodeInfo.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.protobuf.SourceCodeInfo r3 = (com.czhj.wire.protobuf.SourceCodeInfo) r3
                r0.source_code_info(r3)
                goto L9
            L43:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions> r3 = com.czhj.wire.protobuf.FileOptions.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.protobuf.FileOptions r3 = (com.czhj.wire.protobuf.FileOptions) r3
                r0.options(r3)
                goto L9
            L4f:
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3 = r0.extension
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r4 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                goto L67
            L54:
                java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r3 = r0.service
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.ServiceDescriptorProto> r4 = com.czhj.wire.protobuf.ServiceDescriptorProto.ADAPTER
                goto L67
            L59:
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r3 = r0.enum_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r4 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                goto L67
            L5e:
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r3 = r0.message_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r4 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                goto L67
            L63:
                java.util.List<java.lang.String> r3 = r0.dependency
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
            L67:
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L6f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.package_(r3)
                goto L9
            L7b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.name(r3)
                goto L9
            L87:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.FileDescriptorProto r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorProto decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorProto r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.FileDescriptorProto r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.package_
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.dependency
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.Integer> r1 = r5.public_dependency
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.Integer> r1 = r5.weak_dependency
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r0 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r5.message_type
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r0 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r5.enum_type
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.ServiceDescriptorProto> r0 = com.czhj.wire.protobuf.ServiceDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = r5.service
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r5.extension
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions> r0 = com.czhj.wire.protobuf.FileOptions.ADAPTER
                com.czhj.wire.protobuf.FileOptions r1 = r5.options
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo> r0 = com.czhj.wire.protobuf.SourceCodeInfo.ADAPTER
                com.czhj.wire.protobuf.SourceCodeInfo r1 = r5.source_code_info
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.syntax
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.FileDescriptorProto r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorProto r2 = (com.czhj.wire.protobuf.FileDescriptorProto) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.FileDescriptorProto r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.package_
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.dependency
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.Integer> r2 = r5.public_dependency
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.Integer> r2 = r5.weak_dependency
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r1 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r2 = r5.message_type
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r2 = r5.enum_type
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = com.czhj.wire.protobuf.ServiceDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r2 = r5.service
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r2 = r5.extension
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions> r1 = com.czhj.wire.protobuf.FileOptions.ADAPTER
                com.czhj.wire.protobuf.FileOptions r2 = r5.options
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo> r1 = com.czhj.wire.protobuf.SourceCodeInfo.ADAPTER
                com.czhj.wire.protobuf.SourceCodeInfo r2 = r5.source_code_info
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.syntax
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.FileDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorProto r1 = (com.czhj.wire.protobuf.FileDescriptorProto) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.FileDescriptorProto redact(com.czhj.wire.protobuf.FileDescriptorProto r3) {
                r2 = this;
                com.czhj.wire.protobuf.FileDescriptorProto$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.DescriptorProto> r0 = r3.message_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.DescriptorProto> r1 = com.czhj.wire.protobuf.DescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r0 = r3.enum_type
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = com.czhj.wire.protobuf.EnumDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r0 = r3.service
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = com.czhj.wire.protobuf.ServiceDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r0 = r3.extension
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.czhj.wire.protobuf.FileOptions r0 = r3.options
                if (r0 == 0) goto L30
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions> r0 = com.czhj.wire.protobuf.FileOptions.ADAPTER
                com.czhj.wire.protobuf.FileOptions r1 = r3.options
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.wire.protobuf.FileOptions r0 = (com.czhj.wire.protobuf.FileOptions) r0
                r3.options = r0
            L30:
                com.czhj.wire.protobuf.SourceCodeInfo r0 = r3.source_code_info
                if (r0 == 0) goto L40
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo> r0 = com.czhj.wire.protobuf.SourceCodeInfo.ADAPTER
                com.czhj.wire.protobuf.SourceCodeInfo r1 = r3.source_code_info
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.wire.protobuf.SourceCodeInfo r0 = (com.czhj.wire.protobuf.SourceCodeInfo) r0
                r3.source_code_info = r0
            L40:
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.FileDescriptorProto r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.FileDescriptorProto redact(com.czhj.wire.protobuf.FileDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.FileDescriptorProto r1 = (com.czhj.wire.protobuf.FileDescriptorProto) r1
                com.czhj.wire.protobuf.FileDescriptorProto r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.FileDescriptorProto$ProtoAdapter_FileDescriptorProto r0 = new com.czhj.wire.protobuf.FileDescriptorProto$ProtoAdapter_FileDescriptorProto
            r0.<init>()
            com.czhj.wire.protobuf.FileDescriptorProto.ADAPTER = r0
            return
    }

    public FileDescriptorProto(java.lang.String r15, java.lang.String r16, java.util.List<java.lang.String> r17, java.util.List<java.lang.Integer> r18, java.util.List<java.lang.Integer> r19, java.util.List<com.czhj.wire.protobuf.DescriptorProto> r20, java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r21, java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r22, java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r23, com.czhj.wire.protobuf.FileOptions r24, com.czhj.wire.protobuf.SourceCodeInfo r25, java.lang.String r26) {
            r14 = this;
            com.czhj.wire.okio.ByteString r13 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r14
            r1 = r15
            r2 = r16
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r9 = r23
            r10 = r24
            r11 = r25
            r12 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return
    }

    public FileDescriptorProto(java.lang.String r2, java.lang.String r3, java.util.List<java.lang.String> r4, java.util.List<java.lang.Integer> r5, java.util.List<java.lang.Integer> r6, java.util.List<com.czhj.wire.protobuf.DescriptorProto> r7, java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r8, java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r9, java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r10, com.czhj.wire.protobuf.FileOptions r11, com.czhj.wire.protobuf.SourceCodeInfo r12, java.lang.String r13, com.czhj.wire.okio.ByteString r14) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileDescriptorProto> r0 = com.czhj.wire.protobuf.FileDescriptorProto.ADAPTER
            r1.<init>(r0, r14)
            r1.name = r2
            r1.package_ = r3
            java.lang.String r2 = "dependency"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r4)
            r1.dependency = r2
            java.lang.String r2 = "public_dependency"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r5)
            r1.public_dependency = r2
            java.lang.String r2 = "weak_dependency"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r6)
            r1.weak_dependency = r2
            java.lang.String r2 = "message_type"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r7)
            r1.message_type = r2
            java.lang.String r2 = "enum_type"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r8)
            r1.enum_type = r2
            java.lang.String r2 = "service"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r9)
            r1.service = r2
            java.lang.String r2 = "extension"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r10)
            r1.extension = r2
            r1.options = r11
            r1.source_code_info = r12
            r1.syntax = r13
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.FileDescriptorProto
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.FileDescriptorProto r5 = (com.czhj.wire.protobuf.FileDescriptorProto) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.package_
            java.lang.String r3 = r5.package_
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.util.List<java.lang.String> r1 = r4.dependency
            java.util.List<java.lang.String> r3 = r5.dependency
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.util.List<java.lang.Integer> r1 = r4.public_dependency
            java.util.List<java.lang.Integer> r3 = r5.public_dependency
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.util.List<java.lang.Integer> r1 = r4.weak_dependency
            java.util.List<java.lang.Integer> r3 = r5.weak_dependency
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r4.message_type
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r3 = r5.message_type
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r4.enum_type
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r3 = r5.enum_type
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = r4.service
            java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r3 = r5.service
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.extension
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r3 = r5.extension
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            com.czhj.wire.protobuf.FileOptions r1 = r4.options
            com.czhj.wire.protobuf.FileOptions r3 = r5.options
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            com.czhj.wire.protobuf.SourceCodeInfo r1 = r4.source_code_info
            com.czhj.wire.protobuf.SourceCodeInfo r3 = r5.source_code_info
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.syntax
            java.lang.String r5 = r5.syntax
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L93
            goto L94
        L93:
            r0 = r2
        L94:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L8d
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
            java.lang.String r1 = r3.package_
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.dependency
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.Integer> r1 = r3.public_dependency
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.Integer> r1 = r3.weak_dependency
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r3.message_type
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r3.enum_type
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = r3.service
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r3.extension
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.FileOptions r1 = r3.options
            if (r1 == 0) goto L71
            int r1 = r1.hashCode()
            goto L72
        L71:
            r1 = r2
        L72:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.SourceCodeInfo r1 = r3.source_code_info
            if (r1 == 0) goto L7e
            int r1 = r1.hashCode()
            goto L7f
        L7e:
            r1 = r2
        L7f:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.syntax
            if (r1 == 0) goto L8a
            int r2 = r1.hashCode()
        L8a:
            int r0 = r0 + r2
            r3.hashCode = r0
        L8d:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.FileDescriptorProto$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.FileDescriptorProto.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.FileDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.FileDescriptorProto$Builder
            r0.<init>()
            java.lang.String r1 = r3.name
            r0.name = r1
            java.lang.String r1 = r3.package_
            r0.package_ = r1
            java.util.List<java.lang.String> r1 = r3.dependency
            java.lang.String r2 = "dependency"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.dependency = r1
            java.util.List<java.lang.Integer> r1 = r3.public_dependency
            java.lang.String r2 = "public_dependency"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.public_dependency = r1
            java.util.List<java.lang.Integer> r1 = r3.weak_dependency
            java.lang.String r2 = "weak_dependency"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.weak_dependency = r1
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r3.message_type
            java.lang.String r2 = "message_type"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.message_type = r1
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r3.enum_type
            java.lang.String r2 = "enum_type"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.enum_type = r1
            java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = r3.service
            java.lang.String r2 = "service"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.service = r1
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r3.extension
            java.lang.String r2 = "extension"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.extension = r1
            com.czhj.wire.protobuf.FileOptions r1 = r3.options
            r0.options = r1
            com.czhj.wire.protobuf.SourceCodeInfo r1 = r3.source_code_info
            r0.source_code_info = r1
            java.lang.String r1 = r3.syntax
            r0.syntax = r1
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
            java.lang.String r1 = r4.package_
            if (r1 == 0) goto L21
            java.lang.String r1 = ", package="
            r0.append(r1)
            java.lang.String r1 = r4.package_
            r0.append(r1)
        L21:
            java.util.List<java.lang.String> r1 = r4.dependency
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L33
            java.lang.String r1 = ", dependency="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.dependency
            r0.append(r1)
        L33:
            java.util.List<java.lang.Integer> r1 = r4.public_dependency
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L45
            java.lang.String r1 = ", public_dependency="
            r0.append(r1)
            java.util.List<java.lang.Integer> r1 = r4.public_dependency
            r0.append(r1)
        L45:
            java.util.List<java.lang.Integer> r1 = r4.weak_dependency
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L57
            java.lang.String r1 = ", weak_dependency="
            r0.append(r1)
            java.util.List<java.lang.Integer> r1 = r4.weak_dependency
            r0.append(r1)
        L57:
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r4.message_type
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L69
            java.lang.String r1 = ", message_type="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.DescriptorProto> r1 = r4.message_type
            r0.append(r1)
        L69:
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r4.enum_type
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L7b
            java.lang.String r1 = ", enum_type="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.EnumDescriptorProto> r1 = r4.enum_type
            r0.append(r1)
        L7b:
            java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = r4.service
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L8d
            java.lang.String r1 = ", service="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.ServiceDescriptorProto> r1 = r4.service
            r0.append(r1)
        L8d:
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.extension
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L9f
            java.lang.String r1 = ", extension="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = r4.extension
            r0.append(r1)
        L9f:
            com.czhj.wire.protobuf.FileOptions r1 = r4.options
            if (r1 == 0) goto Lad
            java.lang.String r1 = ", options="
            r0.append(r1)
            com.czhj.wire.protobuf.FileOptions r1 = r4.options
            r0.append(r1)
        Lad:
            com.czhj.wire.protobuf.SourceCodeInfo r1 = r4.source_code_info
            if (r1 == 0) goto Lbb
            java.lang.String r1 = ", source_code_info="
            r0.append(r1)
            com.czhj.wire.protobuf.SourceCodeInfo r1 = r4.source_code_info
            r0.append(r1)
        Lbb:
            java.lang.String r1 = r4.syntax
            if (r1 == 0) goto Lc9
            java.lang.String r1 = ", syntax="
            r0.append(r1)
            java.lang.String r1 = r4.syntax
            r0.append(r1)
        Lc9:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "FileDescriptorProto{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
