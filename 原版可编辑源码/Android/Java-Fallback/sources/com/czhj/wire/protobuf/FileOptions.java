package com.czhj.wire.protobuf;

public final class FileOptions extends com.czhj.wire.Message<com.czhj.wire.protobuf.FileOptions, com.czhj.wire.protobuf.FileOptions.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions> ADAPTER = null;
    public static final java.lang.Boolean DEFAULT_CC_ENABLE_ARENAS = null;
    public static final java.lang.Boolean DEFAULT_CC_GENERIC_SERVICES = null;
    public static final java.lang.String DEFAULT_CSHARP_NAMESPACE = "";
    public static final java.lang.Boolean DEFAULT_DEPRECATED = null;
    public static final java.lang.String DEFAULT_GO_PACKAGE = "";
    public static final java.lang.Boolean DEFAULT_JAVA_GENERATE_EQUALS_AND_HASH = null;
    public static final java.lang.Boolean DEFAULT_JAVA_GENERIC_SERVICES = null;
    public static final java.lang.Boolean DEFAULT_JAVA_MULTIPLE_FILES = null;
    public static final java.lang.String DEFAULT_JAVA_OUTER_CLASSNAME = "";
    public static final java.lang.String DEFAULT_JAVA_PACKAGE = "";
    public static final java.lang.Boolean DEFAULT_JAVA_STRING_CHECK_UTF8 = null;
    public static final java.lang.String DEFAULT_OBJC_CLASS_PREFIX = "";
    public static final com.czhj.wire.protobuf.FileOptions.OptimizeMode DEFAULT_OPTIMIZE_FOR = null;
    public static final java.lang.Boolean DEFAULT_PY_GENERIC_SERVICES = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 31)
    public final java.lang.Boolean cc_enable_arenas;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 16)
    public final java.lang.Boolean cc_generic_services;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 37)
    public final java.lang.String csharp_namespace;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 23)
    public final java.lang.Boolean deprecated;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 11)
    public final java.lang.String go_package;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 20)
    public final java.lang.Boolean java_generate_equals_and_hash;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 17)
    public final java.lang.Boolean java_generic_services;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 10)
    public final java.lang.Boolean java_multiple_files;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String java_outer_classname;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String java_package;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 27)
    public final java.lang.Boolean java_string_check_utf8;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 36)
    public final java.lang.String objc_class_prefix;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.FileOptions$OptimizeMode#ADAPTER", tag = 9)
    public final com.czhj.wire.protobuf.FileOptions.OptimizeMode optimize_for;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 18)
    public final java.lang.Boolean py_generic_services;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.UninterpretedOption#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 999)
    public final java.util.List<com.czhj.wire.protobuf.UninterpretedOption> uninterpreted_option;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.FileOptions, com.czhj.wire.protobuf.FileOptions.Builder> {
        public java.lang.Boolean cc_enable_arenas;
        public java.lang.Boolean cc_generic_services;
        public java.lang.String csharp_namespace;
        public java.lang.Boolean deprecated;
        public java.lang.String go_package;
        public java.lang.Boolean java_generate_equals_and_hash;
        public java.lang.Boolean java_generic_services;
        public java.lang.Boolean java_multiple_files;
        public java.lang.String java_outer_classname;
        public java.lang.String java_package;
        public java.lang.Boolean java_string_check_utf8;
        public java.lang.String objc_class_prefix;
        public com.czhj.wire.protobuf.FileOptions.OptimizeMode optimize_for;
        public java.lang.Boolean py_generic_services;
        public java.util.List<com.czhj.wire.protobuf.UninterpretedOption> uninterpreted_option;

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
                com.czhj.wire.protobuf.FileOptions r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.FileOptions build() {
                r20 = this;
                r0 = r20
                com.czhj.wire.protobuf.FileOptions r18 = new com.czhj.wire.protobuf.FileOptions
                r1 = r18
                java.lang.String r2 = r0.java_package
                java.lang.String r3 = r0.java_outer_classname
                java.lang.Boolean r4 = r0.java_multiple_files
                java.lang.Boolean r5 = r0.java_generate_equals_and_hash
                java.lang.Boolean r6 = r0.java_string_check_utf8
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r7 = r0.optimize_for
                java.lang.String r8 = r0.go_package
                java.lang.Boolean r9 = r0.cc_generic_services
                java.lang.Boolean r10 = r0.java_generic_services
                java.lang.Boolean r11 = r0.py_generic_services
                java.lang.Boolean r12 = r0.deprecated
                java.lang.Boolean r13 = r0.cc_enable_arenas
                java.lang.String r14 = r0.objc_class_prefix
                java.lang.String r15 = r0.csharp_namespace
                r19 = r1
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r0.uninterpreted_option
                r16 = r1
                com.czhj.wire.okio.ByteString r17 = super.buildUnknownFields()
                r1 = r19
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
                return r18
        }

        public com.czhj.wire.protobuf.FileOptions.Builder cc_enable_arenas(java.lang.Boolean r1) {
                r0 = this;
                r0.cc_enable_arenas = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder cc_generic_services(java.lang.Boolean r1) {
                r0 = this;
                r0.cc_generic_services = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder csharp_namespace(java.lang.String r1) {
                r0 = this;
                r0.csharp_namespace = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder deprecated(java.lang.Boolean r1) {
                r0 = this;
                r0.deprecated = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder go_package(java.lang.String r1) {
                r0 = this;
                r0.go_package = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder java_generate_equals_and_hash(java.lang.Boolean r1) {
                r0 = this;
                r0.java_generate_equals_and_hash = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder java_generic_services(java.lang.Boolean r1) {
                r0 = this;
                r0.java_generic_services = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder java_multiple_files(java.lang.Boolean r1) {
                r0 = this;
                r0.java_multiple_files = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder java_outer_classname(java.lang.String r1) {
                r0 = this;
                r0.java_outer_classname = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder java_package(java.lang.String r1) {
                r0 = this;
                r0.java_package = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder java_string_check_utf8(java.lang.Boolean r1) {
                r0 = this;
                r0.java_string_check_utf8 = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder objc_class_prefix(java.lang.String r1) {
                r0 = this;
                r0.objc_class_prefix = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder optimize_for(com.czhj.wire.protobuf.FileOptions.OptimizeMode r1) {
                r0 = this;
                r0.optimize_for = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder py_generic_services(java.lang.Boolean r1) {
                r0 = this;
                r0.py_generic_services = r1
                return r0
        }

        public com.czhj.wire.protobuf.FileOptions.Builder uninterpreted_option(java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.uninterpreted_option = r1
                return r0
        }
    }

    public enum OptimizeMode extends java.lang.Enum<com.czhj.wire.protobuf.FileOptions.OptimizeMode> implements com.czhj.wire.WireEnum {
        private static final com.czhj.wire.protobuf.FileOptions.OptimizeMode[] $VALUES = null;
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions.OptimizeMode> ADAPTER = null;
        public static final com.czhj.wire.protobuf.FileOptions.OptimizeMode CODE_SIZE = null;
        public static final com.czhj.wire.protobuf.FileOptions.OptimizeMode LITE_RUNTIME = null;
        public static final com.czhj.wire.protobuf.FileOptions.OptimizeMode SPEED = null;
        private final int value;

        private static final class ProtoAdapter_OptimizeMode extends com.czhj.wire.EnumAdapter<com.czhj.wire.protobuf.FileOptions.OptimizeMode> {
            ProtoAdapter_OptimizeMode() {
                    r1 = this;
                    java.lang.Class<com.czhj.wire.protobuf.FileOptions$OptimizeMode> r0 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.class
                    r1.<init>(r0)
                    return
            }

            @Override
            protected com.czhj.wire.WireEnum fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = r0.fromValue(r1)
                    return r1
            }

            @Override
            protected com.czhj.wire.protobuf.FileOptions.OptimizeMode fromValue(int r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.fromValue(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r0 = new com.czhj.wire.protobuf.FileOptions$OptimizeMode
                r1 = 0
                r2 = 1
                java.lang.String r3 = "SPEED"
                r0.<init>(r3, r1, r2)
                com.czhj.wire.protobuf.FileOptions.OptimizeMode.SPEED = r0
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r0 = new com.czhj.wire.protobuf.FileOptions$OptimizeMode
                r3 = 2
                java.lang.String r4 = "CODE_SIZE"
                r0.<init>(r4, r2, r3)
                com.czhj.wire.protobuf.FileOptions.OptimizeMode.CODE_SIZE = r0
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r0 = new com.czhj.wire.protobuf.FileOptions$OptimizeMode
                r4 = 3
                java.lang.String r5 = "LITE_RUNTIME"
                r0.<init>(r5, r3, r4)
                com.czhj.wire.protobuf.FileOptions.OptimizeMode.LITE_RUNTIME = r0
                com.czhj.wire.protobuf.FileOptions$OptimizeMode[] r4 = new com.czhj.wire.protobuf.FileOptions.OptimizeMode[r4]
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r5 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.SPEED
                r4[r1] = r5
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.CODE_SIZE
                r4[r2] = r1
                r4[r3] = r0
                com.czhj.wire.protobuf.FileOptions.OptimizeMode.$VALUES = r4
                com.czhj.wire.protobuf.FileOptions$OptimizeMode$ProtoAdapter_OptimizeMode r0 = new com.czhj.wire.protobuf.FileOptions$OptimizeMode$ProtoAdapter_OptimizeMode
                r0.<init>()
                com.czhj.wire.protobuf.FileOptions.OptimizeMode.ADAPTER = r0
                return
        }

        OptimizeMode(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.czhj.wire.protobuf.FileOptions.OptimizeMode fromValue(int r1) {
                r0 = 1
                if (r1 == r0) goto L11
                r0 = 2
                if (r1 == r0) goto Le
                r0 = 3
                if (r1 == r0) goto Lb
                r1 = 0
                return r1
            Lb:
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.LITE_RUNTIME
                return r1
            Le:
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.CODE_SIZE
                return r1
            L11:
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.SPEED
                return r1
        }

        public static com.czhj.wire.protobuf.FileOptions.OptimizeMode valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.wire.protobuf.FileOptions$OptimizeMode> r0 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = (com.czhj.wire.protobuf.FileOptions.OptimizeMode) r1
                return r1
        }

        public static com.czhj.wire.protobuf.FileOptions.OptimizeMode[] values() {
                com.czhj.wire.protobuf.FileOptions$OptimizeMode[] r0 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.wire.protobuf.FileOptions$OptimizeMode[] r0 = (com.czhj.wire.protobuf.FileOptions.OptimizeMode[]) r0
                return r0
        }

        @Override
        public int getValue() {
                r1 = this;
                int r0 = r1.value
                return r0
        }
    }

    private static final class ProtoAdapter_FileOptions extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions> {
        public ProtoAdapter_FileOptions() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.FileOptions> r1 = com.czhj.wire.protobuf.FileOptions.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.FileOptions decode(com.czhj.wire.ProtoReader r9) throws java.io.IOException {
                r8 = this;
                com.czhj.wire.protobuf.FileOptions$Builder r0 = new com.czhj.wire.protobuf.FileOptions$Builder
                r0.<init>()
                long r1 = r9.beginMessage()
            L9:
                int r3 = r9.nextTag()
                r4 = -1
                if (r3 == r4) goto L112
                r4 = 1
                if (r3 == r4) goto L105
                r4 = 20
                if (r3 == r4) goto Lf8
                r4 = 23
                if (r3 == r4) goto Leb
                r4 = 27
                if (r3 == r4) goto Lde
                r4 = 31
                if (r3 == r4) goto Ld1
                r4 = 999(0x3e7, float:1.4E-42)
                if (r3 == r4) goto Lc4
                r4 = 36
                if (r3 == r4) goto Lb7
                r4 = 37
                if (r3 == r4) goto Laa
                switch(r3) {
                    case 8: goto L9d;
                    case 9: goto L81;
                    case 10: goto L75;
                    case 11: goto L69;
                    default: goto L32;
                }
            L32:
                switch(r3) {
                    case 16: goto L5d;
                    case 17: goto L51;
                    case 18: goto L45;
                    default: goto L35;
                }
            L35:
                com.czhj.wire.FieldEncoding r4 = r9.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r9)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L45:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.py_generic_services(r3)
                goto L9
            L51:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.java_generic_services(r3)
                goto L9
            L5d:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.cc_generic_services(r3)
                goto L9
            L69:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.go_package(r3)
                goto L9
            L75:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.java_multiple_files(r3)
                goto L9
            L81:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions$OptimizeMode> r4 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.ADAPTER     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8e
                java.lang.Object r4 = r4.decode(r9)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8e
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r4 = (com.czhj.wire.protobuf.FileOptions.OptimizeMode) r4     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8e
                r0.optimize_for(r4)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L8e
                goto L9
            L8e:
                r4 = move-exception
                com.czhj.wire.FieldEncoding r5 = com.czhj.wire.FieldEncoding.VARINT
                int r4 = r4.value
                long r6 = (long) r4
                java.lang.Long r4 = java.lang.Long.valueOf(r6)
                r0.addUnknownField(r3, r5, r4)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.java_outer_classname(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.csharp_namespace(r3)
                goto L9
            Lb7:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.objc_class_prefix(r3)
                goto L9
            Lc4:
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r3 = r0.uninterpreted_option
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r4 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                java.lang.Object r4 = r4.decode(r9)
                r3.add(r4)
                goto L9
            Ld1:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.cc_enable_arenas(r3)
                goto L9
            Lde:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.java_string_check_utf8(r3)
                goto L9
            Leb:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.deprecated(r3)
                goto L9
            Lf8:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r9)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.java_generate_equals_and_hash(r3)
                goto L9
            L105:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r9)
                java.lang.String r3 = (java.lang.String) r3
                r0.java_package(r3)
                goto L9
            L112:
                r9.endMessage(r1)
                com.czhj.wire.protobuf.FileOptions r9 = r0.build()
                return r9
        }

        @Override
        public com.czhj.wire.protobuf.FileOptions decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FileOptions r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.FileOptions r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.java_package
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.java_outer_classname
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.java_multiple_files
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.java_generate_equals_and_hash
                r2 = 20
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.java_string_check_utf8
                r2 = 27
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions$OptimizeMode> r0 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.ADAPTER
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = r5.optimize_for
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.go_package
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.cc_generic_services
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.java_generic_services
                r2 = 17
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.py_generic_services
                r2 = 18
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.deprecated
                r2 = 23
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.cc_enable_arenas
                r2 = 31
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.objc_class_prefix
                r2 = 36
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.csharp_namespace
                r2 = 37
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
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.FileOptions r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.FileOptions r2 = (com.czhj.wire.protobuf.FileOptions) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.FileOptions r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.java_package
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.java_outer_classname
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.java_multiple_files
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.java_generate_equals_and_hash
                r3 = 20
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.java_string_check_utf8
                r3 = 27
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions$OptimizeMode> r1 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.ADAPTER
                com.czhj.wire.protobuf.FileOptions$OptimizeMode r2 = r5.optimize_for
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.go_package
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.cc_generic_services
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.java_generic_services
                r3 = 17
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.py_generic_services
                r3 = 18
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.deprecated
                r3 = 23
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.cc_enable_arenas
                r3 = 31
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.objc_class_prefix
                r3 = 36
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.csharp_namespace
                r3 = 37
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
        public int encodedSize(com.czhj.wire.protobuf.FileOptions r1) {
                r0 = this;
                com.czhj.wire.protobuf.FileOptions r1 = (com.czhj.wire.protobuf.FileOptions) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.FileOptions redact(com.czhj.wire.protobuf.FileOptions r3) {
                r2 = this;
                com.czhj.wire.protobuf.FileOptions$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r0 = r3.uninterpreted_option
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r1 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.FileOptions r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.FileOptions redact(com.czhj.wire.protobuf.FileOptions r1) {
                r0 = this;
                com.czhj.wire.protobuf.FileOptions r1 = (com.czhj.wire.protobuf.FileOptions) r1
                com.czhj.wire.protobuf.FileOptions r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.FileOptions$ProtoAdapter_FileOptions r0 = new com.czhj.wire.protobuf.FileOptions$ProtoAdapter_FileOptions
            r0.<init>()
            com.czhj.wire.protobuf.FileOptions.ADAPTER = r0
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.wire.protobuf.FileOptions.DEFAULT_JAVA_MULTIPLE_FILES = r0
            com.czhj.wire.protobuf.FileOptions.DEFAULT_JAVA_GENERATE_EQUALS_AND_HASH = r0
            com.czhj.wire.protobuf.FileOptions.DEFAULT_JAVA_STRING_CHECK_UTF8 = r0
            com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = com.czhj.wire.protobuf.FileOptions.OptimizeMode.SPEED
            com.czhj.wire.protobuf.FileOptions.DEFAULT_OPTIMIZE_FOR = r1
            com.czhj.wire.protobuf.FileOptions.DEFAULT_CC_GENERIC_SERVICES = r0
            com.czhj.wire.protobuf.FileOptions.DEFAULT_JAVA_GENERIC_SERVICES = r0
            com.czhj.wire.protobuf.FileOptions.DEFAULT_PY_GENERIC_SERVICES = r0
            com.czhj.wire.protobuf.FileOptions.DEFAULT_DEPRECATED = r0
            com.czhj.wire.protobuf.FileOptions.DEFAULT_CC_ENABLE_ARENAS = r0
            return
    }

    public FileOptions(java.lang.String r18, java.lang.String r19, java.lang.Boolean r20, java.lang.Boolean r21, java.lang.Boolean r22, com.czhj.wire.protobuf.FileOptions.OptimizeMode r23, java.lang.String r24, java.lang.Boolean r25, java.lang.Boolean r26, java.lang.Boolean r27, java.lang.Boolean r28, java.lang.Boolean r29, java.lang.String r30, java.lang.String r31, java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r32) {
            r17 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            r3 = r20
            r4 = r21
            r5 = r22
            r6 = r23
            r7 = r24
            r8 = r25
            r9 = r26
            r10 = r27
            r11 = r28
            r12 = r29
            r13 = r30
            r14 = r31
            r15 = r32
            com.czhj.wire.okio.ByteString r16 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            return
    }

    public FileOptions(java.lang.String r4, java.lang.String r5, java.lang.Boolean r6, java.lang.Boolean r7, java.lang.Boolean r8, com.czhj.wire.protobuf.FileOptions.OptimizeMode r9, java.lang.String r10, java.lang.Boolean r11, java.lang.Boolean r12, java.lang.Boolean r13, java.lang.Boolean r14, java.lang.Boolean r15, java.lang.String r16, java.lang.String r17, java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r18, com.czhj.wire.okio.ByteString r19) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.FileOptions> r1 = com.czhj.wire.protobuf.FileOptions.ADAPTER
            r2 = r19
            r3.<init>(r1, r2)
            r1 = r4
            r0.java_package = r1
            r1 = r5
            r0.java_outer_classname = r1
            r1 = r6
            r0.java_multiple_files = r1
            r1 = r7
            r0.java_generate_equals_and_hash = r1
            r1 = r8
            r0.java_string_check_utf8 = r1
            r1 = r9
            r0.optimize_for = r1
            r1 = r10
            r0.go_package = r1
            r1 = r11
            r0.cc_generic_services = r1
            r1 = r12
            r0.java_generic_services = r1
            r1 = r13
            r0.py_generic_services = r1
            r1 = r14
            r0.deprecated = r1
            r1 = r15
            r0.cc_enable_arenas = r1
            r1 = r16
            r0.objc_class_prefix = r1
            r1 = r17
            r0.csharp_namespace = r1
            java.lang.String r1 = "uninterpreted_option"
            r2 = r18
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.uninterpreted_option = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.FileOptions
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.FileOptions r5 = (com.czhj.wire.protobuf.FileOptions) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Lb1
            java.lang.String r1 = r4.java_package
            java.lang.String r3 = r5.java_package
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.String r1 = r4.java_outer_classname
            java.lang.String r3 = r5.java_outer_classname
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.java_multiple_files
            java.lang.Boolean r3 = r5.java_multiple_files
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.java_generate_equals_and_hash
            java.lang.Boolean r3 = r5.java_generate_equals_and_hash
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.java_string_check_utf8
            java.lang.Boolean r3 = r5.java_string_check_utf8
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = r4.optimize_for
            com.czhj.wire.protobuf.FileOptions$OptimizeMode r3 = r5.optimize_for
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.String r1 = r4.go_package
            java.lang.String r3 = r5.go_package
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.cc_generic_services
            java.lang.Boolean r3 = r5.cc_generic_services
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.java_generic_services
            java.lang.Boolean r3 = r5.java_generic_services
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.py_generic_services
            java.lang.Boolean r3 = r5.py_generic_services
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.deprecated
            java.lang.Boolean r3 = r5.deprecated
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.cc_enable_arenas
            java.lang.Boolean r3 = r5.cc_enable_arenas
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.String r1 = r4.objc_class_prefix
            java.lang.String r3 = r5.objc_class_prefix
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.String r1 = r4.csharp_namespace
            java.lang.String r3 = r5.csharp_namespace
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r5 = r5.uninterpreted_option
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto Lb1
            goto Lb2
        Lb1:
            r0 = r2
        Lb2:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto Lcc
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.java_package
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.java_outer_classname
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.java_multiple_files
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.java_generate_equals_and_hash
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.java_string_check_utf8
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = r3.optimize_for
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.go_package
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.cc_generic_services
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.java_generic_services
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.py_generic_services
            if (r1 == 0) goto L8d
            int r1 = r1.hashCode()
            goto L8e
        L8d:
            r1 = r2
        L8e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.deprecated
            if (r1 == 0) goto L9a
            int r1 = r1.hashCode()
            goto L9b
        L9a:
            r1 = r2
        L9b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.cc_enable_arenas
            if (r1 == 0) goto La7
            int r1 = r1.hashCode()
            goto La8
        La7:
            r1 = r2
        La8:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.objc_class_prefix
            if (r1 == 0) goto Lb4
            int r1 = r1.hashCode()
            goto Lb5
        Lb4:
            r1 = r2
        Lb5:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.csharp_namespace
            if (r1 == 0) goto Lc0
            int r2 = r1.hashCode()
        Lc0:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r3.uninterpreted_option
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        Lcc:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.FileOptions$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.FileOptions.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.FileOptions$Builder r0 = new com.czhj.wire.protobuf.FileOptions$Builder
            r0.<init>()
            java.lang.String r1 = r3.java_package
            r0.java_package = r1
            java.lang.String r1 = r3.java_outer_classname
            r0.java_outer_classname = r1
            java.lang.Boolean r1 = r3.java_multiple_files
            r0.java_multiple_files = r1
            java.lang.Boolean r1 = r3.java_generate_equals_and_hash
            r0.java_generate_equals_and_hash = r1
            java.lang.Boolean r1 = r3.java_string_check_utf8
            r0.java_string_check_utf8 = r1
            com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = r3.optimize_for
            r0.optimize_for = r1
            java.lang.String r1 = r3.go_package
            r0.go_package = r1
            java.lang.Boolean r1 = r3.cc_generic_services
            r0.cc_generic_services = r1
            java.lang.Boolean r1 = r3.java_generic_services
            r0.java_generic_services = r1
            java.lang.Boolean r1 = r3.py_generic_services
            r0.py_generic_services = r1
            java.lang.Boolean r1 = r3.deprecated
            r0.deprecated = r1
            java.lang.Boolean r1 = r3.cc_enable_arenas
            r0.cc_enable_arenas = r1
            java.lang.String r1 = r3.objc_class_prefix
            r0.objc_class_prefix = r1
            java.lang.String r1 = r3.csharp_namespace
            r0.csharp_namespace = r1
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
            java.lang.String r1 = r4.java_package
            if (r1 == 0) goto L13
            java.lang.String r1 = ", java_package="
            r0.append(r1)
            java.lang.String r1 = r4.java_package
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.java_outer_classname
            if (r1 == 0) goto L21
            java.lang.String r1 = ", java_outer_classname="
            r0.append(r1)
            java.lang.String r1 = r4.java_outer_classname
            r0.append(r1)
        L21:
            java.lang.Boolean r1 = r4.java_multiple_files
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", java_multiple_files="
            r0.append(r1)
            java.lang.Boolean r1 = r4.java_multiple_files
            r0.append(r1)
        L2f:
            java.lang.Boolean r1 = r4.java_generate_equals_and_hash
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", java_generate_equals_and_hash="
            r0.append(r1)
            java.lang.Boolean r1 = r4.java_generate_equals_and_hash
            r0.append(r1)
        L3d:
            java.lang.Boolean r1 = r4.java_string_check_utf8
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", java_string_check_utf8="
            r0.append(r1)
            java.lang.Boolean r1 = r4.java_string_check_utf8
            r0.append(r1)
        L4b:
            com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = r4.optimize_for
            if (r1 == 0) goto L59
            java.lang.String r1 = ", optimize_for="
            r0.append(r1)
            com.czhj.wire.protobuf.FileOptions$OptimizeMode r1 = r4.optimize_for
            r0.append(r1)
        L59:
            java.lang.String r1 = r4.go_package
            if (r1 == 0) goto L67
            java.lang.String r1 = ", go_package="
            r0.append(r1)
            java.lang.String r1 = r4.go_package
            r0.append(r1)
        L67:
            java.lang.Boolean r1 = r4.cc_generic_services
            if (r1 == 0) goto L75
            java.lang.String r1 = ", cc_generic_services="
            r0.append(r1)
            java.lang.Boolean r1 = r4.cc_generic_services
            r0.append(r1)
        L75:
            java.lang.Boolean r1 = r4.java_generic_services
            if (r1 == 0) goto L83
            java.lang.String r1 = ", java_generic_services="
            r0.append(r1)
            java.lang.Boolean r1 = r4.java_generic_services
            r0.append(r1)
        L83:
            java.lang.Boolean r1 = r4.py_generic_services
            if (r1 == 0) goto L91
            java.lang.String r1 = ", py_generic_services="
            r0.append(r1)
            java.lang.Boolean r1 = r4.py_generic_services
            r0.append(r1)
        L91:
            java.lang.Boolean r1 = r4.deprecated
            if (r1 == 0) goto L9f
            java.lang.String r1 = ", deprecated="
            r0.append(r1)
            java.lang.Boolean r1 = r4.deprecated
            r0.append(r1)
        L9f:
            java.lang.Boolean r1 = r4.cc_enable_arenas
            if (r1 == 0) goto Lad
            java.lang.String r1 = ", cc_enable_arenas="
            r0.append(r1)
            java.lang.Boolean r1 = r4.cc_enable_arenas
            r0.append(r1)
        Lad:
            java.lang.String r1 = r4.objc_class_prefix
            if (r1 == 0) goto Lbb
            java.lang.String r1 = ", objc_class_prefix="
            r0.append(r1)
            java.lang.String r1 = r4.objc_class_prefix
            r0.append(r1)
        Lbb:
            java.lang.String r1 = r4.csharp_namespace
            if (r1 == 0) goto Lc9
            java.lang.String r1 = ", csharp_namespace="
            r0.append(r1)
            java.lang.String r1 = r4.csharp_namespace
            r0.append(r1)
        Lc9:
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Ldb
            java.lang.String r1 = ", uninterpreted_option="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            r0.append(r1)
        Ldb:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "FileOptions{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
