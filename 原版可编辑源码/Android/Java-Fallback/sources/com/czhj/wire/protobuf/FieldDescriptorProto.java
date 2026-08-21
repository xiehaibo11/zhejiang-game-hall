package com.czhj.wire.protobuf;

public final class FieldDescriptorProto extends com.czhj.wire.Message<com.czhj.wire.protobuf.FieldDescriptorProto, com.czhj.wire.protobuf.FieldDescriptorProto.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> ADAPTER = null;
    public static final java.lang.String DEFAULT_DEFAULT_VALUE = "";
    public static final java.lang.String DEFAULT_EXTENDEE = "";
    public static final com.czhj.wire.protobuf.FieldDescriptorProto.Label DEFAULT_LABEL = null;
    public static final java.lang.String DEFAULT_NAME = "";
    public static final java.lang.Integer DEFAULT_NUMBER = null;
    public static final java.lang.Integer DEFAULT_ONEOF_INDEX = null;
    public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type DEFAULT_TYPE = null;
    public static final java.lang.String DEFAULT_TYPE_NAME = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 7)
    public final java.lang.String default_value;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String extendee;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldDescriptorProto$Label#ADAPTER", tag = 4)
    public final com.czhj.wire.protobuf.FieldDescriptorProto.Label label;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 3)
    public final java.lang.Integer number;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 9)
    public final java.lang.Integer oneof_index;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldOptions#ADAPTER", tag = 8)
    public final com.czhj.wire.protobuf.FieldOptions options;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldDescriptorProto$Type#ADAPTER", tag = 5)
    public final com.czhj.wire.protobuf.FieldDescriptorProto.Type type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 6)
    public final java.lang.String type_name;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.FieldDescriptorProto, com.czhj.wire.protobuf.FieldDescriptorProto.Builder> {
        public java.lang.String default_value;
        public java.lang.String extendee;
        public com.czhj.wire.protobuf.FieldDescriptorProto.Label label;
        public java.lang.String name;
        public java.lang.Integer number;
        public java.lang.Integer oneof_index;
        public com.czhj.wire.protobuf.FieldOptions options;
        public com.czhj.wire.protobuf.FieldDescriptorProto.Type type;
        public java.lang.String type_name;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.FieldDescriptorProto build() {
                r12 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto r11 = new com.czhj.wire.protobuf.FieldDescriptorProto
                java.lang.String r1 = r12.name
                java.lang.Integer r2 = r12.number
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r3 = r12.label
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r4 = r12.type
                java.lang.String r5 = r12.type_name
                java.lang.String r6 = r12.extendee
                java.lang.String r7 = r12.default_value
                java.lang.Integer r8 = r12.oneof_index
                com.czhj.wire.protobuf.FieldOptions r9 = r12.options
                com.czhj.wire.okio.ByteString r10 = super.buildUnknownFields()
                r0 = r11
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
                return r11
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder default_value(java.lang.String r1) {
                r0 = this;
                r0.default_value = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder extendee(java.lang.String r1) {
                r0 = this;
                r0.extendee = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder label(com.czhj.wire.protobuf.FieldDescriptorProto.Label r1) {
                r0 = this;
                r0.label = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder number(java.lang.Integer r1) {
                r0 = this;
                r0.number = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder oneof_index(java.lang.Integer r1) {
                r0 = this;
                r0.oneof_index = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder options(com.czhj.wire.protobuf.FieldOptions r1) {
                r0 = this;
                r0.options = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder type(com.czhj.wire.protobuf.FieldDescriptorProto.Type r1) {
                r0 = this;
                r0.type = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto.Builder type_name(java.lang.String r1) {
                r0 = this;
                r0.type_name = r1
                return r0
        }
    }

    public enum Label extends java.lang.Enum<com.czhj.wire.protobuf.FieldDescriptorProto.Label> implements com.czhj.wire.WireEnum {
        private static final com.czhj.wire.protobuf.FieldDescriptorProto.Label[] $VALUES = null;
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto.Label> ADAPTER = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Label LABEL_OPTIONAL = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Label LABEL_REPEATED = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Label LABEL_REQUIRED = null;
        private final int value;

        private static final class ProtoAdapter_Label extends com.czhj.wire.EnumAdapter<com.czhj.wire.protobuf.FieldDescriptorProto.Label> {
            ProtoAdapter_Label() {
                    r1 = this;
                    java.lang.Class<com.czhj.wire.protobuf.FieldDescriptorProto$Label> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.class
                    r1.<init>(r0)
                    return
            }

            @Override
            protected com.czhj.wire.WireEnum fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = r0.fromValue(r1)
                    return r1
            }

            @Override
            protected com.czhj.wire.protobuf.FieldDescriptorProto.Label fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.fromValue(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Label
                r1 = 0
                r2 = 1
                java.lang.String r3 = "LABEL_OPTIONAL"
                r0.<init>(r3, r1, r2)
                com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_OPTIONAL = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Label
                r3 = 2
                java.lang.String r4 = "LABEL_REQUIRED"
                r0.<init>(r4, r2, r3)
                com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_REQUIRED = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Label
                r4 = 3
                java.lang.String r5 = "LABEL_REPEATED"
                r0.<init>(r5, r3, r4)
                com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_REPEATED = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Label[] r4 = new com.czhj.wire.protobuf.FieldDescriptorProto.Label[r4]
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r5 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_OPTIONAL
                r4[r1] = r5
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_REQUIRED
                r4[r2] = r1
                r4[r3] = r0
                com.czhj.wire.protobuf.FieldDescriptorProto.Label.$VALUES = r4
                com.czhj.wire.protobuf.FieldDescriptorProto$Label$ProtoAdapter_Label r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Label$ProtoAdapter_Label
                r0.<init>()
                com.czhj.wire.protobuf.FieldDescriptorProto.Label.ADAPTER = r0
                return
        }

        Label(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.czhj.wire.protobuf.FieldDescriptorProto.Label fromValue(int r1) {
                r0 = 1
                if (r1 == r0) goto L11
                r0 = 2
                if (r1 == r0) goto Le
                r0 = 3
                if (r1 == r0) goto Lb
                r1 = 0
                return r1
            Lb:
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_REPEATED
                return r1
            Le:
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_REQUIRED
                return r1
            L11:
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_OPTIONAL
                return r1
        }

        public static com.czhj.wire.protobuf.FieldDescriptorProto.Label valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.wire.protobuf.FieldDescriptorProto$Label> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = (com.czhj.wire.protobuf.FieldDescriptorProto.Label) r1
                return r1
        }

        public static com.czhj.wire.protobuf.FieldDescriptorProto.Label[] values() {
                com.czhj.wire.protobuf.FieldDescriptorProto$Label[] r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.wire.protobuf.FieldDescriptorProto$Label[] r0 = (com.czhj.wire.protobuf.FieldDescriptorProto.Label[]) r0
                return r0
        }

        @Override
        public int getValue() {
                r1 = this;
                int r0 = r1.value
                return r0
        }
    }

    private static final class ProtoAdapter_FieldDescriptorProto extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> {
        public ProtoAdapter_FieldDescriptorProto() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.FieldDescriptorProto> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.FieldDescriptorProto decode(com.czhj.wire.ProtoReader r9) throws java.io.IOException {
                r8 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Builder
                r0.<init>()
                long r1 = r9.beginMessage()
            L9:
                int r3 = r9.nextTag()
                r4 = -1
                if (r3 == r4) goto L9f
                switch(r3) {
                    case 1: goto L92;
                    case 2: goto L85;
                    case 3: goto L79;
                    case 4: goto L5f;
                    case 5: goto L53;
                    case 6: goto L47;
                    case 7: goto L3b;
                    case 8: goto L2f;
                    case 9: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r9.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r9)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.oneof_index(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions> r3 = com.czhj.wire.protobuf.FieldOptions.ADAPTER
                java.lang.Object r3 = r3.decode(r9)
                com.czhj.wire.protobuf.FieldOptions r3 = (com.czhj.wire.protobuf.FieldOptions) r3
                r0.options(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.default_value(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.type_name(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto$Type> r4 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.ADAPTER     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                java.lang.Object r4 = r4.decode(r9)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r4 = (com.czhj.wire.protobuf.FieldDescriptorProto.Type) r4     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                r0.type(r4)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto$Label> r4 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.ADAPTER     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                java.lang.Object r4 = r4.decode(r9)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r4 = (com.czhj.wire.protobuf.FieldDescriptorProto.Label) r4     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                r0.label(r4)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L6b
                goto L9
            L6b:
                r4 = move-exception
                com.czhj.wire.FieldEncoding r5 = com.czhj.wire.FieldEncoding.VARINT
                int r4 = r4.value
                long r6 = (long) r4
                java.lang.Long r4 = java.lang.Long.valueOf(r6)
                r0.addUnknownField(r3, r5, r4)
                goto L9
            L79:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.number(r3)
                goto L9
            L85:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.extendee(r3)
                goto L9
            L92:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.name(r3)
                goto L9
            L9f:
                r9.endMessage(r1)
                com.czhj.wire.protobuf.FieldDescriptorProto r9 = r0.build()
                return r9
        }

        @Override
        public com.czhj.wire.protobuf.FieldDescriptorProto decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.FieldDescriptorProto r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.number
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto$Label> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.ADAPTER
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = r5.label
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto$Type> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.ADAPTER
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = r5.type
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.type_name
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.extendee
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.default_value
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.oneof_index
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions> r0 = com.czhj.wire.protobuf.FieldOptions.ADAPTER
                com.czhj.wire.protobuf.FieldOptions r1 = r5.options
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.FieldDescriptorProto r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto r2 = (com.czhj.wire.protobuf.FieldDescriptorProto) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.FieldDescriptorProto r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.number
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto$Label> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.ADAPTER
                com.czhj.wire.protobuf.FieldDescriptorProto$Label r2 = r5.label
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto$Type> r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.ADAPTER
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r2 = r5.type
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.type_name
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.extendee
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.default_value
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.oneof_index
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions> r1 = com.czhj.wire.protobuf.FieldOptions.ADAPTER
                com.czhj.wire.protobuf.FieldOptions r2 = r5.options
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.FieldDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto r1 = (com.czhj.wire.protobuf.FieldDescriptorProto) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.FieldDescriptorProto redact(com.czhj.wire.protobuf.FieldDescriptorProto r3) {
                r2 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto$Builder r3 = r3.newBuilder()
                com.czhj.wire.protobuf.FieldOptions r0 = r3.options
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions> r0 = com.czhj.wire.protobuf.FieldOptions.ADAPTER
                com.czhj.wire.protobuf.FieldOptions r1 = r3.options
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.wire.protobuf.FieldOptions r0 = (com.czhj.wire.protobuf.FieldOptions) r0
                r3.options = r0
            L14:
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.FieldDescriptorProto r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.FieldDescriptorProto redact(com.czhj.wire.protobuf.FieldDescriptorProto r1) {
                r0 = this;
                com.czhj.wire.protobuf.FieldDescriptorProto r1 = (com.czhj.wire.protobuf.FieldDescriptorProto) r1
                com.czhj.wire.protobuf.FieldDescriptorProto r1 = r0.redact(r1)
                return r1
        }
    }

    public enum Type extends java.lang.Enum<com.czhj.wire.protobuf.FieldDescriptorProto.Type> implements com.czhj.wire.WireEnum {
        private static final com.czhj.wire.protobuf.FieldDescriptorProto.Type[] $VALUES = null;
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto.Type> ADAPTER = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_BOOL = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_BYTES = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_DOUBLE = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_ENUM = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_FIXED32 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_FIXED64 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_FLOAT = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_GROUP = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_INT32 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_INT64 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_MESSAGE = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_SFIXED32 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_SFIXED64 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_SINT32 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_SINT64 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_STRING = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_UINT32 = null;
        public static final com.czhj.wire.protobuf.FieldDescriptorProto.Type TYPE_UINT64 = null;
        private final int value;

        private static final class ProtoAdapter_Type extends com.czhj.wire.EnumAdapter<com.czhj.wire.protobuf.FieldDescriptorProto.Type> {
            ProtoAdapter_Type() {
                    r1 = this;
                    java.lang.Class<com.czhj.wire.protobuf.FieldDescriptorProto$Type> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.class
                    r1.<init>(r0)
                    return
            }

            @Override
            protected com.czhj.wire.WireEnum fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = r0.fromValue(r1)
                    return r1
            }

            @Override
            protected com.czhj.wire.protobuf.FieldDescriptorProto.Type fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.fromValue(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r1 = 0
                r2 = 1
                java.lang.String r3 = "TYPE_DOUBLE"
                r0.<init>(r3, r1, r2)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_DOUBLE = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r3 = 2
                java.lang.String r4 = "TYPE_FLOAT"
                r0.<init>(r4, r2, r3)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FLOAT = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r4 = 3
                java.lang.String r5 = "TYPE_INT64"
                r0.<init>(r5, r3, r4)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_INT64 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r5 = 4
                java.lang.String r6 = "TYPE_UINT64"
                r0.<init>(r6, r4, r5)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_UINT64 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r6 = 5
                java.lang.String r7 = "TYPE_INT32"
                r0.<init>(r7, r5, r6)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_INT32 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r7 = 6
                java.lang.String r8 = "TYPE_FIXED64"
                r0.<init>(r8, r6, r7)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FIXED64 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r8 = 7
                java.lang.String r9 = "TYPE_FIXED32"
                r0.<init>(r9, r7, r8)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FIXED32 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r9 = 8
                java.lang.String r10 = "TYPE_BOOL"
                r0.<init>(r10, r8, r9)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_BOOL = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r10 = 9
                java.lang.String r11 = "TYPE_STRING"
                r0.<init>(r11, r9, r10)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_STRING = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r11 = 10
                java.lang.String r12 = "TYPE_GROUP"
                r0.<init>(r12, r10, r11)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_GROUP = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r12 = 11
                java.lang.String r13 = "TYPE_MESSAGE"
                r0.<init>(r13, r11, r12)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_MESSAGE = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r13 = 12
                java.lang.String r14 = "TYPE_BYTES"
                r0.<init>(r14, r12, r13)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_BYTES = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r14 = 13
                java.lang.String r15 = "TYPE_UINT32"
                r0.<init>(r15, r13, r14)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_UINT32 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r15 = 14
                java.lang.String r13 = "TYPE_ENUM"
                r0.<init>(r13, r14, r15)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_ENUM = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r13 = 15
                java.lang.String r14 = "TYPE_SFIXED32"
                r0.<init>(r14, r15, r13)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SFIXED32 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r14 = 16
                java.lang.String r15 = "TYPE_SFIXED64"
                r0.<init>(r15, r13, r14)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SFIXED64 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r15 = 17
                java.lang.String r13 = "TYPE_SINT32"
                r0.<init>(r13, r14, r15)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SINT32 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type
                r13 = 18
                java.lang.String r14 = "TYPE_SINT64"
                r0.<init>(r14, r15, r13)
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SINT64 = r0
                com.czhj.wire.protobuf.FieldDescriptorProto$Type[] r13 = new com.czhj.wire.protobuf.FieldDescriptorProto.Type[r13]
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r14 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_DOUBLE
                r13[r1] = r14
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FLOAT
                r13[r2] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_INT64
                r13[r3] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_UINT64
                r13[r4] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_INT32
                r13[r5] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FIXED64
                r13[r6] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FIXED32
                r13[r7] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_BOOL
                r13[r8] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_STRING
                r13[r9] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_GROUP
                r13[r10] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_MESSAGE
                r13[r11] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_BYTES
                r13[r12] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_UINT32
                r2 = 12
                r13[r2] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_ENUM
                r2 = 13
                r13[r2] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SFIXED32
                r2 = 14
                r13[r2] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SFIXED64
                r2 = 15
                r13[r2] = r1
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SINT32
                r2 = 16
                r13[r2] = r1
                r13[r15] = r0
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.$VALUES = r13
                com.czhj.wire.protobuf.FieldDescriptorProto$Type$ProtoAdapter_Type r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Type$ProtoAdapter_Type
                r0.<init>()
                com.czhj.wire.protobuf.FieldDescriptorProto.Type.ADAPTER = r0
                return
        }

        Type(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.czhj.wire.protobuf.FieldDescriptorProto.Type fromValue(int r0) {
                switch(r0) {
                    case 1: goto L38;
                    case 2: goto L35;
                    case 3: goto L32;
                    case 4: goto L2f;
                    case 5: goto L2c;
                    case 6: goto L29;
                    case 7: goto L26;
                    case 8: goto L23;
                    case 9: goto L20;
                    case 10: goto L1d;
                    case 11: goto L1a;
                    case 12: goto L17;
                    case 13: goto L14;
                    case 14: goto L11;
                    case 15: goto Le;
                    case 16: goto Lb;
                    case 17: goto L8;
                    case 18: goto L5;
                    default: goto L3;
                }
            L3:
                r0 = 0
                return r0
            L5:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SINT64
                return r0
            L8:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SINT32
                return r0
            Lb:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SFIXED64
                return r0
            Le:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_SFIXED32
                return r0
            L11:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_ENUM
                return r0
            L14:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_UINT32
                return r0
            L17:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_BYTES
                return r0
            L1a:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_MESSAGE
                return r0
            L1d:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_GROUP
                return r0
            L20:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_STRING
                return r0
            L23:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_BOOL
                return r0
            L26:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FIXED32
                return r0
            L29:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FIXED64
                return r0
            L2c:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_INT32
                return r0
            L2f:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_UINT64
                return r0
            L32:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_INT64
                return r0
            L35:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_FLOAT
                return r0
            L38:
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_DOUBLE
                return r0
        }

        public static com.czhj.wire.protobuf.FieldDescriptorProto.Type valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.wire.protobuf.FieldDescriptorProto$Type> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = (com.czhj.wire.protobuf.FieldDescriptorProto.Type) r1
                return r1
        }

        public static com.czhj.wire.protobuf.FieldDescriptorProto.Type[] values() {
                com.czhj.wire.protobuf.FieldDescriptorProto$Type[] r0 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.wire.protobuf.FieldDescriptorProto$Type[] r0 = (com.czhj.wire.protobuf.FieldDescriptorProto.Type[]) r0
                return r0
        }

        @Override
        public int getValue() {
                r1 = this;
                int r0 = r1.value
                return r0
        }
    }

    static {
            com.czhj.wire.protobuf.FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto
            r0.<init>()
            com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.wire.protobuf.FieldDescriptorProto.DEFAULT_NUMBER = r0
            com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Label.LABEL_OPTIONAL
            com.czhj.wire.protobuf.FieldDescriptorProto.DEFAULT_LABEL = r1
            com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = com.czhj.wire.protobuf.FieldDescriptorProto.Type.TYPE_DOUBLE
            com.czhj.wire.protobuf.FieldDescriptorProto.DEFAULT_TYPE = r1
            com.czhj.wire.protobuf.FieldDescriptorProto.DEFAULT_ONEOF_INDEX = r0
            return
    }

    public FieldDescriptorProto(java.lang.String r12, java.lang.Integer r13, com.czhj.wire.protobuf.FieldDescriptorProto.Label r14, com.czhj.wire.protobuf.FieldDescriptorProto.Type r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.Integer r19, com.czhj.wire.protobuf.FieldOptions r20) {
            r11 = this;
            com.czhj.wire.okio.ByteString r10 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public FieldDescriptorProto(java.lang.String r2, java.lang.Integer r3, com.czhj.wire.protobuf.FieldDescriptorProto.Label r4, com.czhj.wire.protobuf.FieldDescriptorProto.Type r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.Integer r9, com.czhj.wire.protobuf.FieldOptions r10, com.czhj.wire.okio.ByteString r11) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldDescriptorProto> r0 = com.czhj.wire.protobuf.FieldDescriptorProto.ADAPTER
            r1.<init>(r0, r11)
            r1.name = r2
            r1.number = r3
            r1.label = r4
            r1.type = r5
            r1.type_name = r6
            r1.extendee = r7
            r1.default_value = r8
            r1.oneof_index = r9
            r1.options = r10
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.FieldDescriptorProto
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.FieldDescriptorProto r5 = (com.czhj.wire.protobuf.FieldDescriptorProto) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Integer r1 = r4.number
            java.lang.Integer r3 = r5.number
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = r4.label
            com.czhj.wire.protobuf.FieldDescriptorProto$Label r3 = r5.label
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = r4.type
            com.czhj.wire.protobuf.FieldDescriptorProto$Type r3 = r5.type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.type_name
            java.lang.String r3 = r5.type_name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.extendee
            java.lang.String r3 = r5.extendee
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.default_value
            java.lang.String r3 = r5.default_value
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Integer r1 = r4.oneof_index
            java.lang.Integer r3 = r5.oneof_index
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            com.czhj.wire.protobuf.FieldOptions r1 = r4.options
            com.czhj.wire.protobuf.FieldOptions r5 = r5.options
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L75
            goto L76
        L75:
            r0 = r2
        L76:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L82
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
            com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = r3.label
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = r3.type
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.type_name
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.extendee
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.default_value
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.oneof_index
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.FieldOptions r1 = r3.options
            if (r1 == 0) goto L7f
            int r2 = r1.hashCode()
        L7f:
            int r0 = r0 + r2
            r3.hashCode = r0
        L82:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.FieldDescriptorProto$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.FieldDescriptorProto.Builder newBuilder() {
            r2 = this;
            com.czhj.wire.protobuf.FieldDescriptorProto$Builder r0 = new com.czhj.wire.protobuf.FieldDescriptorProto$Builder
            r0.<init>()
            java.lang.String r1 = r2.name
            r0.name = r1
            java.lang.Integer r1 = r2.number
            r0.number = r1
            com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = r2.label
            r0.label = r1
            com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = r2.type
            r0.type = r1
            java.lang.String r1 = r2.type_name
            r0.type_name = r1
            java.lang.String r1 = r2.extendee
            r0.extendee = r1
            java.lang.String r1 = r2.default_value
            r0.default_value = r1
            java.lang.Integer r1 = r2.oneof_index
            r0.oneof_index = r1
            com.czhj.wire.protobuf.FieldOptions r1 = r2.options
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
            com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = r4.label
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", label="
            r0.append(r1)
            com.czhj.wire.protobuf.FieldDescriptorProto$Label r1 = r4.label
            r0.append(r1)
        L2f:
            com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = r4.type
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", type="
            r0.append(r1)
            com.czhj.wire.protobuf.FieldDescriptorProto$Type r1 = r4.type
            r0.append(r1)
        L3d:
            java.lang.String r1 = r4.type_name
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", type_name="
            r0.append(r1)
            java.lang.String r1 = r4.type_name
            r0.append(r1)
        L4b:
            java.lang.String r1 = r4.extendee
            if (r1 == 0) goto L59
            java.lang.String r1 = ", extendee="
            r0.append(r1)
            java.lang.String r1 = r4.extendee
            r0.append(r1)
        L59:
            java.lang.String r1 = r4.default_value
            if (r1 == 0) goto L67
            java.lang.String r1 = ", default_value="
            r0.append(r1)
            java.lang.String r1 = r4.default_value
            r0.append(r1)
        L67:
            java.lang.Integer r1 = r4.oneof_index
            if (r1 == 0) goto L75
            java.lang.String r1 = ", oneof_index="
            r0.append(r1)
            java.lang.Integer r1 = r4.oneof_index
            r0.append(r1)
        L75:
            com.czhj.wire.protobuf.FieldOptions r1 = r4.options
            if (r1 == 0) goto L83
            java.lang.String r1 = ", options="
            r0.append(r1)
            com.czhj.wire.protobuf.FieldOptions r1 = r4.options
            r0.append(r1)
        L83:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "FieldDescriptorProto{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
