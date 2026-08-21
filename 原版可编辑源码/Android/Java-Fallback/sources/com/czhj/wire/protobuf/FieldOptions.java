package com.czhj.wire.protobuf;

public final class FieldOptions extends com.czhj.wire.Message<com.czhj.wire.protobuf.FieldOptions, com.czhj.wire.protobuf.FieldOptions.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions> ADAPTER = null;
    public static final com.czhj.wire.protobuf.FieldOptions.CType DEFAULT_CTYPE = null;
    public static final java.lang.Boolean DEFAULT_DEPRECATED = null;
    public static final com.czhj.wire.protobuf.FieldOptions.JSType DEFAULT_JSTYPE = null;
    public static final java.lang.Boolean DEFAULT_LAZY = null;
    public static final java.lang.Boolean DEFAULT_PACKED = null;
    public static final java.lang.Boolean DEFAULT_WEAK = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldOptions$CType#ADAPTER", tag = 1)
    public final com.czhj.wire.protobuf.FieldOptions.CType ctype;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 3)
    public final java.lang.Boolean deprecated;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FieldOptions$JSType#ADAPTER", tag = 6)
    public final com.czhj.wire.protobuf.FieldOptions.JSType jstype;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 5)
    public final java.lang.Boolean lazy;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 2)
    public final java.lang.Boolean packed;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.UninterpretedOption#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 999)
    public final java.util.List<com.czhj.wire.protobuf.UninterpretedOption> uninterpreted_option;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 10)
    public final java.lang.Boolean weak;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.FieldOptions, com.czhj.wire.protobuf.FieldOptions.Builder> {
        public com.czhj.wire.protobuf.FieldOptions.CType ctype;
        public java.lang.Boolean deprecated;
        public com.czhj.wire.protobuf.FieldOptions.JSType jstype;
        public java.lang.Boolean lazy;
        public java.lang.Boolean packed;
        public java.util.List<com.czhj.wire.protobuf.UninterpretedOption> uninterpreted_option;
        public java.lang.Boolean weak;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.uninterpreted_option = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.FieldOptions r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.FieldOptions build() {
                r10 = this;
                com.czhj.wire.protobuf.FieldOptions r9 = new com.czhj.wire.protobuf.FieldOptions
                com.czhj.wire.protobuf.FieldOptions$CType r1 = r10.ctype
                java.lang.Boolean r2 = r10.packed
                com.czhj.wire.protobuf.FieldOptions$JSType r3 = r10.jstype
                java.lang.Boolean r4 = r10.lazy
                java.lang.Boolean r5 = r10.deprecated
                java.lang.Boolean r6 = r10.weak
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r7 = r10.uninterpreted_option
                com.czhj.wire.okio.ByteString r8 = super.buildUnknownFields()
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r9
        }

        public com.czhj.wire.protobuf.FieldOptions.Builder ctype(com.czhj.wire.protobuf.FieldOptions.CType r1) {
                r0 = this;
                r0.ctype = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldOptions.Builder deprecated(java.lang.Boolean r1) {
                r0 = this;
                r0.deprecated = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldOptions.Builder jstype(com.czhj.wire.protobuf.FieldOptions.JSType r1) {
                r0 = this;
                r0.jstype = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldOptions.Builder lazy(java.lang.Boolean r1) {
                r0 = this;
                r0.lazy = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldOptions.Builder packed(java.lang.Boolean r1) {
                r0 = this;
                r0.packed = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldOptions.Builder uninterpreted_option(java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.uninterpreted_option = r1
                return r0
        }

        public com.czhj.wire.protobuf.FieldOptions.Builder weak(java.lang.Boolean r1) {
                r0 = this;
                r0.weak = r1
                return r0
        }
    }

    public enum CType extends java.lang.Enum<com.czhj.wire.protobuf.FieldOptions.CType> implements com.czhj.wire.WireEnum {
        private static final com.czhj.wire.protobuf.FieldOptions.CType[] $VALUES = null;
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions.CType> ADAPTER = null;
        public static final com.czhj.wire.protobuf.FieldOptions.CType CORD = null;
        public static final com.czhj.wire.protobuf.FieldOptions.CType STRING = null;
        public static final com.czhj.wire.protobuf.FieldOptions.CType STRING_PIECE = null;
        private final int value;

        private static final class ProtoAdapter_CType extends com.czhj.wire.EnumAdapter<com.czhj.wire.protobuf.FieldOptions.CType> {
            ProtoAdapter_CType() {
                    r1 = this;
                    java.lang.Class<com.czhj.wire.protobuf.FieldOptions$CType> r0 = com.czhj.wire.protobuf.FieldOptions.CType.class
                    r1.<init>(r0)
                    return
            }

            @Override
            protected com.czhj.wire.WireEnum fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldOptions$CType r1 = r0.fromValue(r1)
                    return r1
            }

            @Override
            protected com.czhj.wire.protobuf.FieldOptions.CType fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldOptions$CType r1 = com.czhj.wire.protobuf.FieldOptions.CType.fromValue(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.FieldOptions$CType r0 = new com.czhj.wire.protobuf.FieldOptions$CType
                r1 = 0
                java.lang.String r2 = "STRING"
                r0.<init>(r2, r1, r1)
                com.czhj.wire.protobuf.FieldOptions.CType.STRING = r0
                com.czhj.wire.protobuf.FieldOptions$CType r0 = new com.czhj.wire.protobuf.FieldOptions$CType
                r2 = 1
                java.lang.String r3 = "CORD"
                r0.<init>(r3, r2, r2)
                com.czhj.wire.protobuf.FieldOptions.CType.CORD = r0
                com.czhj.wire.protobuf.FieldOptions$CType r0 = new com.czhj.wire.protobuf.FieldOptions$CType
                r3 = 2
                java.lang.String r4 = "STRING_PIECE"
                r0.<init>(r4, r3, r3)
                com.czhj.wire.protobuf.FieldOptions.CType.STRING_PIECE = r0
                r4 = 3
                com.czhj.wire.protobuf.FieldOptions$CType[] r4 = new com.czhj.wire.protobuf.FieldOptions.CType[r4]
                com.czhj.wire.protobuf.FieldOptions$CType r5 = com.czhj.wire.protobuf.FieldOptions.CType.STRING
                r4[r1] = r5
                com.czhj.wire.protobuf.FieldOptions$CType r1 = com.czhj.wire.protobuf.FieldOptions.CType.CORD
                r4[r2] = r1
                r4[r3] = r0
                com.czhj.wire.protobuf.FieldOptions.CType.$VALUES = r4
                com.czhj.wire.protobuf.FieldOptions$CType$ProtoAdapter_CType r0 = new com.czhj.wire.protobuf.FieldOptions$CType$ProtoAdapter_CType
                r0.<init>()
                com.czhj.wire.protobuf.FieldOptions.CType.ADAPTER = r0
                return
        }

        CType(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.czhj.wire.protobuf.FieldOptions.CType fromValue(int r1) {
                if (r1 == 0) goto L10
                r0 = 1
                if (r1 == r0) goto Ld
                r0 = 2
                if (r1 == r0) goto La
                r1 = 0
                return r1
            La:
                com.czhj.wire.protobuf.FieldOptions$CType r1 = com.czhj.wire.protobuf.FieldOptions.CType.STRING_PIECE
                return r1
            Ld:
                com.czhj.wire.protobuf.FieldOptions$CType r1 = com.czhj.wire.protobuf.FieldOptions.CType.CORD
                return r1
            L10:
                com.czhj.wire.protobuf.FieldOptions$CType r1 = com.czhj.wire.protobuf.FieldOptions.CType.STRING
                return r1
        }

        public static com.czhj.wire.protobuf.FieldOptions.CType valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.wire.protobuf.FieldOptions$CType> r0 = com.czhj.wire.protobuf.FieldOptions.CType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.wire.protobuf.FieldOptions$CType r1 = (com.czhj.wire.protobuf.FieldOptions.CType) r1
                return r1
        }

        public static com.czhj.wire.protobuf.FieldOptions.CType[] values() {
                com.czhj.wire.protobuf.FieldOptions$CType[] r0 = com.czhj.wire.protobuf.FieldOptions.CType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.wire.protobuf.FieldOptions$CType[] r0 = (com.czhj.wire.protobuf.FieldOptions.CType[]) r0
                return r0
        }

        @Override
        public int getValue() {
                r1 = this;
                int r0 = r1.value
                return r0
        }
    }

    public enum JSType extends java.lang.Enum<com.czhj.wire.protobuf.FieldOptions.JSType> implements com.czhj.wire.WireEnum {
        private static final com.czhj.wire.protobuf.FieldOptions.JSType[] $VALUES = null;
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions.JSType> ADAPTER = null;
        public static final com.czhj.wire.protobuf.FieldOptions.JSType JS_NORMAL = null;
        public static final com.czhj.wire.protobuf.FieldOptions.JSType JS_NUMBER = null;
        public static final com.czhj.wire.protobuf.FieldOptions.JSType JS_STRING = null;
        private final int value;

        private static final class ProtoAdapter_JSType extends com.czhj.wire.EnumAdapter<com.czhj.wire.protobuf.FieldOptions.JSType> {
            ProtoAdapter_JSType() {
                    r1 = this;
                    java.lang.Class<com.czhj.wire.protobuf.FieldOptions$JSType> r0 = com.czhj.wire.protobuf.FieldOptions.JSType.class
                    r1.<init>(r0)
                    return
            }

            @Override
            protected com.czhj.wire.WireEnum fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldOptions$JSType r1 = r0.fromValue(r1)
                    return r1
            }

            @Override
            protected com.czhj.wire.protobuf.FieldOptions.JSType fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FieldOptions$JSType r1 = com.czhj.wire.protobuf.FieldOptions.JSType.fromValue(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.FieldOptions$JSType r0 = new com.czhj.wire.protobuf.FieldOptions$JSType
                r1 = 0
                java.lang.String r2 = "JS_NORMAL"
                r0.<init>(r2, r1, r1)
                com.czhj.wire.protobuf.FieldOptions.JSType.JS_NORMAL = r0
                com.czhj.wire.protobuf.FieldOptions$JSType r0 = new com.czhj.wire.protobuf.FieldOptions$JSType
                r2 = 1
                java.lang.String r3 = "JS_STRING"
                r0.<init>(r3, r2, r2)
                com.czhj.wire.protobuf.FieldOptions.JSType.JS_STRING = r0
                com.czhj.wire.protobuf.FieldOptions$JSType r0 = new com.czhj.wire.protobuf.FieldOptions$JSType
                r3 = 2
                java.lang.String r4 = "JS_NUMBER"
                r0.<init>(r4, r3, r3)
                com.czhj.wire.protobuf.FieldOptions.JSType.JS_NUMBER = r0
                r4 = 3
                com.czhj.wire.protobuf.FieldOptions$JSType[] r4 = new com.czhj.wire.protobuf.FieldOptions.JSType[r4]
                com.czhj.wire.protobuf.FieldOptions$JSType r5 = com.czhj.wire.protobuf.FieldOptions.JSType.JS_NORMAL
                r4[r1] = r5
                com.czhj.wire.protobuf.FieldOptions$JSType r1 = com.czhj.wire.protobuf.FieldOptions.JSType.JS_STRING
                r4[r2] = r1
                r4[r3] = r0
                com.czhj.wire.protobuf.FieldOptions.JSType.$VALUES = r4
                com.czhj.wire.protobuf.FieldOptions$JSType$ProtoAdapter_JSType r0 = new com.czhj.wire.protobuf.FieldOptions$JSType$ProtoAdapter_JSType
                r0.<init>()
                com.czhj.wire.protobuf.FieldOptions.JSType.ADAPTER = r0
                return
        }

        JSType(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.czhj.wire.protobuf.FieldOptions.JSType fromValue(int r1) {
                if (r1 == 0) goto L10
                r0 = 1
                if (r1 == r0) goto Ld
                r0 = 2
                if (r1 == r0) goto La
                r1 = 0
                return r1
            La:
                com.czhj.wire.protobuf.FieldOptions$JSType r1 = com.czhj.wire.protobuf.FieldOptions.JSType.JS_NUMBER
                return r1
            Ld:
                com.czhj.wire.protobuf.FieldOptions$JSType r1 = com.czhj.wire.protobuf.FieldOptions.JSType.JS_STRING
                return r1
            L10:
                com.czhj.wire.protobuf.FieldOptions$JSType r1 = com.czhj.wire.protobuf.FieldOptions.JSType.JS_NORMAL
                return r1
        }

        public static com.czhj.wire.protobuf.FieldOptions.JSType valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.wire.protobuf.FieldOptions$JSType> r0 = com.czhj.wire.protobuf.FieldOptions.JSType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.wire.protobuf.FieldOptions$JSType r1 = (com.czhj.wire.protobuf.FieldOptions.JSType) r1
                return r1
        }

        public static com.czhj.wire.protobuf.FieldOptions.JSType[] values() {
                com.czhj.wire.protobuf.FieldOptions$JSType[] r0 = com.czhj.wire.protobuf.FieldOptions.JSType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.wire.protobuf.FieldOptions$JSType[] r0 = (com.czhj.wire.protobuf.FieldOptions.JSType[]) r0
                return r0
        }

        @Override
        public int getValue() {
                r1 = this;
                int r0 = r1.value
                return r0
        }
    }

    private static final class ProtoAdapter_FieldOptions extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions> {
        public ProtoAdapter_FieldOptions() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.FieldOptions> r1 = com.czhj.wire.protobuf.FieldOptions.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.FieldOptions decode(com.czhj.wire.ProtoReader r9) throws java.io.IOException {
                r8 = this;
                com.czhj.wire.protobuf.FieldOptions$Builder r0 = new com.czhj.wire.protobuf.FieldOptions$Builder
                r0.<init>()
                long r1 = r9.beginMessage()
            L9:
                int r3 = r9.nextTag()
                r4 = -1
                if (r3 == r4) goto L9b
                r4 = 1
                if (r3 == r4) goto L7f
                r4 = 2
                if (r3 == r4) goto L73
                r4 = 3
                if (r3 == r4) goto L67
                r4 = 5
                if (r3 == r4) goto L5b
                r4 = 6
                if (r3 == r4) goto L4f
                r4 = 10
                if (r3 == r4) goto L43
                r4 = 999(0x3e7, float:1.4E-42)
                if (r3 == r4) goto L37
                com.czhj.wire.FieldEncoding r4 = r9.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r9)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L37:
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r3 = r0.uninterpreted_option
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r4 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                java.lang.Object r4 = r4.decode(r9)
                r3.add(r4)
                goto L9
            L43:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.weak(r3)
                goto L9
            L4f:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions$JSType> r4 = com.czhj.wire.protobuf.FieldOptions.JSType.ADAPTER     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                java.lang.Object r4 = r4.decode(r9)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                com.czhj.wire.protobuf.FieldOptions$JSType r4 = (com.czhj.wire.protobuf.FieldOptions.JSType) r4     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                r0.jstype(r4)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                goto L9
            L5b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.lazy(r3)
                goto L9
            L67:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.deprecated(r3)
                goto L9
            L73:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.packed(r3)
                goto L9
            L7f:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions$CType> r4 = com.czhj.wire.protobuf.FieldOptions.CType.ADAPTER     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                java.lang.Object r4 = r4.decode(r9)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                com.czhj.wire.protobuf.FieldOptions$CType r4 = (com.czhj.wire.protobuf.FieldOptions.CType) r4     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                r0.ctype(r4)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8c
                goto L9
            L8c:
                r4 = move-exception
                com.czhj.wire.FieldEncoding r5 = com.czhj.wire.FieldEncoding.VARINT
                int r4 = r4.value
                long r6 = (long) r4
                java.lang.Long r4 = java.lang.Long.valueOf(r6)
                r0.addUnknownField(r3, r5, r4)
                goto L9
            L9b:
                r9.endMessage(r1)
                com.czhj.wire.protobuf.FieldOptions r9 = r0.build()
                return r9
        }

        @Override
        public com.czhj.wire.protobuf.FieldOptions decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FieldOptions r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.FieldOptions r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions$CType> r0 = com.czhj.wire.protobuf.FieldOptions.CType.ADAPTER
                com.czhj.wire.protobuf.FieldOptions$CType r1 = r5.ctype
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.packed
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions$JSType> r0 = com.czhj.wire.protobuf.FieldOptions.JSType.ADAPTER
                com.czhj.wire.protobuf.FieldOptions$JSType r1 = r5.jstype
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.lazy
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.deprecated
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.weak
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r0 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r5.uninterpreted_option
                r2 = 999(0x3e7, float:1.4E-42)
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.FieldOptions r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FieldOptions r2 = (com.czhj.wire.protobuf.FieldOptions) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.FieldOptions r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions$CType> r0 = com.czhj.wire.protobuf.FieldOptions.CType.ADAPTER
                com.czhj.wire.protobuf.FieldOptions$CType r1 = r5.ctype
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.packed
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions$JSType> r1 = com.czhj.wire.protobuf.FieldOptions.JSType.ADAPTER
                com.czhj.wire.protobuf.FieldOptions$JSType r2 = r5.jstype
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.lazy
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.deprecated
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.weak
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r1 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r2 = r5.uninterpreted_option
                r3 = 999(0x3e7, float:1.4E-42)
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.FieldOptions r1) {
                r0 = this;
                com.czhj.wire.protobuf.FieldOptions r1 = (com.czhj.wire.protobuf.FieldOptions) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.FieldOptions redact(com.czhj.wire.protobuf.FieldOptions r3) {
                r2 = this;
                com.czhj.wire.protobuf.FieldOptions$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r0 = r3.uninterpreted_option
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r1 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.FieldOptions r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.FieldOptions redact(com.czhj.wire.protobuf.FieldOptions r1) {
                r0 = this;
                com.czhj.wire.protobuf.FieldOptions r1 = (com.czhj.wire.protobuf.FieldOptions) r1
                com.czhj.wire.protobuf.FieldOptions r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.FieldOptions$ProtoAdapter_FieldOptions r0 = new com.czhj.wire.protobuf.FieldOptions$ProtoAdapter_FieldOptions
            r0.<init>()
            com.czhj.wire.protobuf.FieldOptions.ADAPTER = r0
            com.czhj.wire.protobuf.FieldOptions$CType r0 = com.czhj.wire.protobuf.FieldOptions.CType.STRING
            com.czhj.wire.protobuf.FieldOptions.DEFAULT_CTYPE = r0
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.wire.protobuf.FieldOptions.DEFAULT_PACKED = r0
            com.czhj.wire.protobuf.FieldOptions$JSType r1 = com.czhj.wire.protobuf.FieldOptions.JSType.JS_NORMAL
            com.czhj.wire.protobuf.FieldOptions.DEFAULT_JSTYPE = r1
            com.czhj.wire.protobuf.FieldOptions.DEFAULT_LAZY = r0
            com.czhj.wire.protobuf.FieldOptions.DEFAULT_DEPRECATED = r0
            com.czhj.wire.protobuf.FieldOptions.DEFAULT_WEAK = r0
            return
    }

    public FieldOptions(com.czhj.wire.protobuf.FieldOptions.CType r10, java.lang.Boolean r11, com.czhj.wire.protobuf.FieldOptions.JSType r12, java.lang.Boolean r13, java.lang.Boolean r14, java.lang.Boolean r15, java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r16) {
            r9 = this;
            com.czhj.wire.okio.ByteString r8 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public FieldOptions(com.czhj.wire.protobuf.FieldOptions.CType r2, java.lang.Boolean r3, com.czhj.wire.protobuf.FieldOptions.JSType r4, java.lang.Boolean r5, java.lang.Boolean r6, java.lang.Boolean r7, java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r8, com.czhj.wire.okio.ByteString r9) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FieldOptions> r0 = com.czhj.wire.protobuf.FieldOptions.ADAPTER
            r1.<init>(r0, r9)
            r1.ctype = r2
            r1.packed = r3
            r1.jstype = r4
            r1.lazy = r5
            r1.deprecated = r6
            r1.weak = r7
            java.lang.String r2 = "uninterpreted_option"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r8)
            r1.uninterpreted_option = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.FieldOptions
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.FieldOptions r5 = (com.czhj.wire.protobuf.FieldOptions) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L61
            com.czhj.wire.protobuf.FieldOptions$CType r1 = r4.ctype
            com.czhj.wire.protobuf.FieldOptions$CType r3 = r5.ctype
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.packed
            java.lang.Boolean r3 = r5.packed
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            com.czhj.wire.protobuf.FieldOptions$JSType r1 = r4.jstype
            com.czhj.wire.protobuf.FieldOptions$JSType r3 = r5.jstype
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.lazy
            java.lang.Boolean r3 = r5.lazy
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.deprecated
            java.lang.Boolean r3 = r5.deprecated
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.weak
            java.lang.Boolean r3 = r5.weak
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r5 = r5.uninterpreted_option
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L61
            goto L62
        L61:
            r0 = r2
        L62:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L64
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            com.czhj.wire.protobuf.FieldOptions$CType r1 = r3.ctype
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.packed
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.FieldOptions$JSType r1 = r3.jstype
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.lazy
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.deprecated
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.weak
            if (r1 == 0) goto L58
            int r2 = r1.hashCode()
        L58:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r3.uninterpreted_option
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        L64:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.FieldOptions$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.FieldOptions.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.FieldOptions$Builder r0 = new com.czhj.wire.protobuf.FieldOptions$Builder
            r0.<init>()
            com.czhj.wire.protobuf.FieldOptions$CType r1 = r3.ctype
            r0.ctype = r1
            java.lang.Boolean r1 = r3.packed
            r0.packed = r1
            com.czhj.wire.protobuf.FieldOptions$JSType r1 = r3.jstype
            r0.jstype = r1
            java.lang.Boolean r1 = r3.lazy
            r0.lazy = r1
            java.lang.Boolean r1 = r3.deprecated
            r0.deprecated = r1
            java.lang.Boolean r1 = r3.weak
            r0.weak = r1
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r3.uninterpreted_option
            java.lang.String r2 = "uninterpreted_option"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.uninterpreted_option = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.czhj.wire.protobuf.FieldOptions$CType r1 = r4.ctype
            if (r1 == 0) goto L13
            java.lang.String r1 = ", ctype="
            r0.append(r1)
            com.czhj.wire.protobuf.FieldOptions$CType r1 = r4.ctype
            r0.append(r1)
        L13:
            java.lang.Boolean r1 = r4.packed
            if (r1 == 0) goto L21
            java.lang.String r1 = ", packed="
            r0.append(r1)
            java.lang.Boolean r1 = r4.packed
            r0.append(r1)
        L21:
            com.czhj.wire.protobuf.FieldOptions$JSType r1 = r4.jstype
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", jstype="
            r0.append(r1)
            com.czhj.wire.protobuf.FieldOptions$JSType r1 = r4.jstype
            r0.append(r1)
        L2f:
            java.lang.Boolean r1 = r4.lazy
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", lazy="
            r0.append(r1)
            java.lang.Boolean r1 = r4.lazy
            r0.append(r1)
        L3d:
            java.lang.Boolean r1 = r4.deprecated
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", deprecated="
            r0.append(r1)
            java.lang.Boolean r1 = r4.deprecated
            r0.append(r1)
        L4b:
            java.lang.Boolean r1 = r4.weak
            if (r1 == 0) goto L59
            java.lang.String r1 = ", weak="
            r0.append(r1)
            java.lang.Boolean r1 = r4.weak
            r0.append(r1)
        L59:
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L6b
            java.lang.String r1 = ", uninterpreted_option="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            r0.append(r1)
        L6b:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "FieldOptions{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
