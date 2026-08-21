package com.czhj.wire.protobuf;

public final class UninterpretedOption extends com.czhj.wire.Message<com.czhj.wire.protobuf.UninterpretedOption, com.czhj.wire.protobuf.UninterpretedOption.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> ADAPTER = null;
    public static final java.lang.String DEFAULT_AGGREGATE_VALUE = "";
    public static final java.lang.Double DEFAULT_DOUBLE_VALUE = null;
    public static final java.lang.String DEFAULT_IDENTIFIER_VALUE = "";
    public static final java.lang.Long DEFAULT_NEGATIVE_INT_VALUE = null;
    public static final java.lang.Long DEFAULT_POSITIVE_INT_VALUE = null;
    public static final com.czhj.wire.okio.ByteString DEFAULT_STRING_VALUE = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String aggregate_value;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#DOUBLE", tag = 6)
    public final java.lang.Double double_value;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String identifier_value;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.UninterpretedOption$NamePart#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 2)
    public final java.util.List<com.czhj.wire.protobuf.UninterpretedOption.NamePart> name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT64", tag = 5)
    public final java.lang.Long negative_int_value;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 4)
    public final java.lang.Long positive_int_value;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BYTES", tag = 7)
    public final com.czhj.wire.okio.ByteString string_value;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.UninterpretedOption, com.czhj.wire.protobuf.UninterpretedOption.Builder> {
        public java.lang.String aggregate_value;
        public java.lang.Double double_value;
        public java.lang.String identifier_value;
        public java.util.List<com.czhj.wire.protobuf.UninterpretedOption.NamePart> name;
        public java.lang.Long negative_int_value;
        public java.lang.Long positive_int_value;
        public com.czhj.wire.okio.ByteString string_value;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.name = r0
                return
        }

        public com.czhj.wire.protobuf.UninterpretedOption.Builder aggregate_value(java.lang.String r1) {
                r0 = this;
                r0.aggregate_value = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.UninterpretedOption r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.UninterpretedOption build() {
                r10 = this;
                com.czhj.wire.protobuf.UninterpretedOption r9 = new com.czhj.wire.protobuf.UninterpretedOption
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r10.name
                java.lang.String r2 = r10.identifier_value
                java.lang.Long r3 = r10.positive_int_value
                java.lang.Long r4 = r10.negative_int_value
                java.lang.Double r5 = r10.double_value
                com.czhj.wire.okio.ByteString r6 = r10.string_value
                java.lang.String r7 = r10.aggregate_value
                com.czhj.wire.okio.ByteString r8 = super.buildUnknownFields()
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r9
        }

        public com.czhj.wire.protobuf.UninterpretedOption.Builder double_value(java.lang.Double r1) {
                r0 = this;
                r0.double_value = r1
                return r0
        }

        public com.czhj.wire.protobuf.UninterpretedOption.Builder identifier_value(java.lang.String r1) {
                r0 = this;
                r0.identifier_value = r1
                return r0
        }

        public com.czhj.wire.protobuf.UninterpretedOption.Builder name(java.util.List<com.czhj.wire.protobuf.UninterpretedOption.NamePart> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.name = r1
                return r0
        }

        public com.czhj.wire.protobuf.UninterpretedOption.Builder negative_int_value(java.lang.Long r1) {
                r0 = this;
                r0.negative_int_value = r1
                return r0
        }

        public com.czhj.wire.protobuf.UninterpretedOption.Builder positive_int_value(java.lang.Long r1) {
                r0 = this;
                r0.positive_int_value = r1
                return r0
        }

        public com.czhj.wire.protobuf.UninterpretedOption.Builder string_value(com.czhj.wire.okio.ByteString r1) {
                r0 = this;
                r0.string_value = r1
                return r0
        }
    }

    public static final class NamePart extends com.czhj.wire.Message<com.czhj.wire.protobuf.UninterpretedOption.NamePart, com.czhj.wire.protobuf.UninterpretedOption.NamePart.Builder> {
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption.NamePart> ADAPTER = null;
        public static final java.lang.Boolean DEFAULT_IS_EXTENSION = null;
        public static final java.lang.String DEFAULT_NAME_PART = "";
        private static final long serialVersionUID = 0;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", label = com.czhj.wire.WireField.Label.REQUIRED, tag = 2)
        public final java.lang.Boolean is_extension;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REQUIRED, tag = 1)
        public final java.lang.String name_part;

        public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.UninterpretedOption.NamePart, com.czhj.wire.protobuf.UninterpretedOption.NamePart.Builder> {
            public java.lang.Boolean is_extension;
            public java.lang.String name_part;

            public Builder() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public com.czhj.wire.Message build() {
                    r1 = this;
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r0 = r1.build()
                    return r0
            }

            @Override
            public com.czhj.wire.protobuf.UninterpretedOption.NamePart build() {
                    r4 = this;
                    java.lang.String r0 = r4.name_part
                    if (r0 == 0) goto L16
                    java.lang.Boolean r0 = r4.is_extension
                    if (r0 == 0) goto L16
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r0 = new com.czhj.wire.protobuf.UninterpretedOption$NamePart
                    java.lang.String r1 = r4.name_part
                    java.lang.Boolean r2 = r4.is_extension
                    com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                    r0.<init>(r1, r2, r3)
                    return r0
                L16:
                    r0 = 4
                    java.lang.Object[] r0 = new java.lang.Object[r0]
                    r1 = 0
                    java.lang.String r2 = r4.name_part
                    r0[r1] = r2
                    r1 = 1
                    java.lang.String r2 = "name_part"
                    r0[r1] = r2
                    r1 = 2
                    java.lang.Boolean r2 = r4.is_extension
                    r0[r1] = r2
                    r1 = 3
                    java.lang.String r2 = "is_extension"
                    r0[r1] = r2
                    java.lang.IllegalStateException r0 = com.czhj.wire.internal.Internal.missingRequiredFields(r0)
                    throw r0
            }

            public com.czhj.wire.protobuf.UninterpretedOption.NamePart.Builder is_extension(java.lang.Boolean r1) {
                    r0 = this;
                    r0.is_extension = r1
                    return r0
            }

            public com.czhj.wire.protobuf.UninterpretedOption.NamePart.Builder name_part(java.lang.String r1) {
                    r0 = this;
                    r0.name_part = r1
                    return r0
            }
        }

        private static final class ProtoAdapter_NamePart extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption.NamePart> {
            public ProtoAdapter_NamePart() {
                    r2 = this;
                    com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                    java.lang.Class<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = com.czhj.wire.protobuf.UninterpretedOption.NamePart.class
                    r2.<init>(r0, r1)
                    return
            }

            @Override
            public com.czhj.wire.protobuf.UninterpretedOption.NamePart decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                    r6 = this;
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart$Builder r0 = new com.czhj.wire.protobuf.UninterpretedOption$NamePart$Builder
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
                    com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.Boolean r3 = (java.lang.Boolean) r3
                    r0.is_extension(r3)
                    goto L9
                L32:
                    com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.String r3 = (java.lang.String) r3
                    r0.name_part(r3)
                    goto L9
                L3e:
                    r7.endMessage(r1)
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r7 = r0.build()
                    return r7
            }

            @Override
            public com.czhj.wire.protobuf.UninterpretedOption.NamePart decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r1 = r0.decode(r1)
                    return r1
            }

            public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.UninterpretedOption.NamePart r5) throws java.io.IOException {
                    r3 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.String r1 = r5.name_part
                    r2 = 1
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                    java.lang.Boolean r1 = r5.is_extension
                    r2 = 2
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    r4.writeBytes(r5)
                    return
            }

            @Override
            public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.UninterpretedOption.NamePart r2) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r2 = (com.czhj.wire.protobuf.UninterpretedOption.NamePart) r2
                    r0.encode(r1, r2)
                    return
            }

            public int encodedSize(com.czhj.wire.protobuf.UninterpretedOption.NamePart r5) {
                    r4 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.String r1 = r5.name_part
                    r2 = 1
                    int r0 = r0.encodedSizeWithTag(r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                    java.lang.Boolean r2 = r5.is_extension
                    r3 = 2
                    int r1 = r1.encodedSizeWithTag(r3, r2)
                    int r0 = r0 + r1
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    int r5 = r5.size()
                    int r0 = r0 + r5
                    return r0
            }

            @Override
            public int encodedSize(com.czhj.wire.protobuf.UninterpretedOption.NamePart r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r1 = (com.czhj.wire.protobuf.UninterpretedOption.NamePart) r1
                    int r1 = r0.encodedSize(r1)
                    return r1
            }

            public com.czhj.wire.protobuf.UninterpretedOption.NamePart redact(com.czhj.wire.protobuf.UninterpretedOption.NamePart r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart$Builder r1 = r1.newBuilder()
                    r1.clearUnknownFields()
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r1 = r1.build()
                    return r1
            }

            @Override
            public com.czhj.wire.protobuf.UninterpretedOption.NamePart redact(com.czhj.wire.protobuf.UninterpretedOption.NamePart r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r1 = (com.czhj.wire.protobuf.UninterpretedOption.NamePart) r1
                    com.czhj.wire.protobuf.UninterpretedOption$NamePart r1 = r0.redact(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.UninterpretedOption$NamePart$ProtoAdapter_NamePart r0 = new com.czhj.wire.protobuf.UninterpretedOption$NamePart$ProtoAdapter_NamePart
                r0.<init>()
                com.czhj.wire.protobuf.UninterpretedOption.NamePart.ADAPTER = r0
                r0 = 0
                java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
                com.czhj.wire.protobuf.UninterpretedOption.NamePart.DEFAULT_IS_EXTENSION = r0
                return
        }

        public NamePart(java.lang.String r2, java.lang.Boolean r3) {
                r1 = this;
                com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
                r1.<init>(r2, r3, r0)
                return
        }

        public NamePart(java.lang.String r2, java.lang.Boolean r3, com.czhj.wire.okio.ByteString r4) {
                r1 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r0 = com.czhj.wire.protobuf.UninterpretedOption.NamePart.ADAPTER
                r1.<init>(r0, r4)
                r1.name_part = r2
                r1.is_extension = r3
                return
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof com.czhj.wire.protobuf.UninterpretedOption.NamePart
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                com.czhj.wire.protobuf.UninterpretedOption$NamePart r5 = (com.czhj.wire.protobuf.UninterpretedOption.NamePart) r5
                com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
                com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L2f
                java.lang.String r1 = r4.name_part
                java.lang.String r3 = r5.name_part
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L2f
                java.lang.Boolean r1 = r4.is_extension
                java.lang.Boolean r5 = r5.is_extension
                boolean r5 = r1.equals(r5)
                if (r5 == 0) goto L2f
                goto L30
            L2f:
                r0 = r2
            L30:
                return r0
        }

        public int hashCode() {
                r2 = this;
                int r0 = r2.hashCode
                if (r0 != 0) goto L20
                com.czhj.wire.okio.ByteString r0 = r2.unknownFields()
                int r0 = r0.hashCode()
                int r0 = r0 * 37
                java.lang.String r1 = r2.name_part
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                int r0 = r0 * 37
                java.lang.Boolean r1 = r2.is_extension
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                r2.hashCode = r0
            L20:
                return r0
        }

        @Override
        public com.czhj.wire.Message.Builder newBuilder() {
                r1 = this;
                com.czhj.wire.protobuf.UninterpretedOption$NamePart$Builder r0 = r1.newBuilder()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.UninterpretedOption.NamePart.Builder newBuilder() {
                r2 = this;
                com.czhj.wire.protobuf.UninterpretedOption$NamePart$Builder r0 = new com.czhj.wire.protobuf.UninterpretedOption$NamePart$Builder
                r0.<init>()
                java.lang.String r1 = r2.name_part
                r0.name_part = r1
                java.lang.Boolean r1 = r2.is_extension
                r0.is_extension = r1
                com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
                r0.addUnknownFields(r1)
                return r0
        }

        @Override
        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = ", name_part="
                r0.append(r1)
                java.lang.String r1 = r4.name_part
                r0.append(r1)
                java.lang.String r1 = ", is_extension="
                r0.append(r1)
                java.lang.Boolean r1 = r4.is_extension
                r0.append(r1)
                r1 = 0
                r2 = 2
                java.lang.String r3 = "NamePart{"
                java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static final class ProtoAdapter_UninterpretedOption extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> {
        public ProtoAdapter_UninterpretedOption() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.UninterpretedOption> r1 = com.czhj.wire.protobuf.UninterpretedOption.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.UninterpretedOption decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.UninterpretedOption$Builder r0 = new com.czhj.wire.protobuf.UninterpretedOption$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L77
                switch(r3) {
                    case 2: goto L6b;
                    case 3: goto L5f;
                    case 4: goto L53;
                    case 5: goto L47;
                    case 6: goto L3b;
                    case 7: goto L2f;
                    case 8: goto L23;
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
                r0.aggregate_value(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r3 = com.czhj.wire.ProtoAdapter.BYTES
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.okio.ByteString r3 = (com.czhj.wire.okio.ByteString) r3
                r0.string_value(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Double> r3 = com.czhj.wire.ProtoAdapter.DOUBLE
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Double r3 = (java.lang.Double) r3
                r0.double_value(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.negative_int_value(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.positive_int_value(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.identifier_value(r3)
                goto L9
            L6b:
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r3 = r0.name
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r4 = com.czhj.wire.protobuf.UninterpretedOption.NamePart.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L77:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.UninterpretedOption r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.UninterpretedOption decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.UninterpretedOption r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.UninterpretedOption r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r0 = com.czhj.wire.protobuf.UninterpretedOption.NamePart.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r5.name
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.identifier_value
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.positive_int_value
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Long r1 = r5.negative_int_value
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Double> r0 = com.czhj.wire.ProtoAdapter.DOUBLE
                java.lang.Double r1 = r5.double_value
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r0 = com.czhj.wire.ProtoAdapter.BYTES
                com.czhj.wire.okio.ByteString r1 = r5.string_value
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.aggregate_value
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.UninterpretedOption r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.UninterpretedOption r2 = (com.czhj.wire.protobuf.UninterpretedOption) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.UninterpretedOption r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r0 = com.czhj.wire.protobuf.UninterpretedOption.NamePart.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r5.name
                r2 = 2
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.identifier_value
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.positive_int_value
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Long r2 = r5.negative_int_value
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Double> r1 = com.czhj.wire.ProtoAdapter.DOUBLE
                java.lang.Double r2 = r5.double_value
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r1 = com.czhj.wire.ProtoAdapter.BYTES
                com.czhj.wire.okio.ByteString r2 = r5.string_value
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.aggregate_value
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.UninterpretedOption r1) {
                r0 = this;
                com.czhj.wire.protobuf.UninterpretedOption r1 = (com.czhj.wire.protobuf.UninterpretedOption) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.UninterpretedOption redact(com.czhj.wire.protobuf.UninterpretedOption r3) {
                r2 = this;
                com.czhj.wire.protobuf.UninterpretedOption$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r0 = r3.name
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = com.czhj.wire.protobuf.UninterpretedOption.NamePart.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.UninterpretedOption r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.UninterpretedOption redact(com.czhj.wire.protobuf.UninterpretedOption r1) {
                r0 = this;
                com.czhj.wire.protobuf.UninterpretedOption r1 = (com.czhj.wire.protobuf.UninterpretedOption) r1
                com.czhj.wire.protobuf.UninterpretedOption r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.UninterpretedOption$ProtoAdapter_UninterpretedOption r0 = new com.czhj.wire.protobuf.UninterpretedOption$ProtoAdapter_UninterpretedOption
            r0.<init>()
            com.czhj.wire.protobuf.UninterpretedOption.ADAPTER = r0
            r0 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            com.czhj.wire.protobuf.UninterpretedOption.DEFAULT_POSITIVE_INT_VALUE = r0
            com.czhj.wire.protobuf.UninterpretedOption.DEFAULT_NEGATIVE_INT_VALUE = r0
            r0 = 0
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            com.czhj.wire.protobuf.UninterpretedOption.DEFAULT_DOUBLE_VALUE = r0
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            com.czhj.wire.protobuf.UninterpretedOption.DEFAULT_STRING_VALUE = r0
            return
    }

    public UninterpretedOption(java.util.List<com.czhj.wire.protobuf.UninterpretedOption.NamePart> r10, java.lang.String r11, java.lang.Long r12, java.lang.Long r13, java.lang.Double r14, com.czhj.wire.okio.ByteString r15, java.lang.String r16) {
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

    public UninterpretedOption(java.util.List<com.czhj.wire.protobuf.UninterpretedOption.NamePart> r2, java.lang.String r3, java.lang.Long r4, java.lang.Long r5, java.lang.Double r6, com.czhj.wire.okio.ByteString r7, java.lang.String r8, com.czhj.wire.okio.ByteString r9) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r0 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
            r1.<init>(r0, r9)
            java.lang.String r9 = "name"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r9, r2)
            r1.name = r2
            r1.identifier_value = r3
            r1.positive_int_value = r4
            r1.negative_int_value = r5
            r1.double_value = r6
            r1.string_value = r7
            r1.aggregate_value = r8
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.UninterpretedOption
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.UninterpretedOption r5 = (com.czhj.wire.protobuf.UninterpretedOption) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L61
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r4.name
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r3 = r5.name
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L61
            java.lang.String r1 = r4.identifier_value
            java.lang.String r3 = r5.identifier_value
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Long r1 = r4.positive_int_value
            java.lang.Long r3 = r5.positive_int_value
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Long r1 = r4.negative_int_value
            java.lang.Long r3 = r5.negative_int_value
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Double r1 = r4.double_value
            java.lang.Double r3 = r5.double_value
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            com.czhj.wire.okio.ByteString r1 = r4.string_value
            com.czhj.wire.okio.ByteString r3 = r5.string_value
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.String r1 = r4.aggregate_value
            java.lang.String r5 = r5.aggregate_value
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
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
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r3.name
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.identifier_value
            r2 = 0
            if (r1 == 0) goto L21
            int r1 = r1.hashCode()
            goto L22
        L21:
            r1 = r2
        L22:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.positive_int_value
            if (r1 == 0) goto L2e
            int r1 = r1.hashCode()
            goto L2f
        L2e:
            r1 = r2
        L2f:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.negative_int_value
            if (r1 == 0) goto L3b
            int r1 = r1.hashCode()
            goto L3c
        L3b:
            r1 = r2
        L3c:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Double r1 = r3.double_value
            if (r1 == 0) goto L48
            int r1 = r1.hashCode()
            goto L49
        L48:
            r1 = r2
        L49:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.okio.ByteString r1 = r3.string_value
            if (r1 == 0) goto L55
            int r1 = r1.hashCode()
            goto L56
        L55:
            r1 = r2
        L56:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.aggregate_value
            if (r1 == 0) goto L61
            int r2 = r1.hashCode()
        L61:
            int r0 = r0 + r2
            r3.hashCode = r0
        L64:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.UninterpretedOption$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.UninterpretedOption.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.UninterpretedOption$Builder r0 = new com.czhj.wire.protobuf.UninterpretedOption$Builder
            r0.<init>()
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r3.name
            java.lang.String r2 = "name"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.name = r1
            java.lang.String r1 = r3.identifier_value
            r0.identifier_value = r1
            java.lang.Long r1 = r3.positive_int_value
            r0.positive_int_value = r1
            java.lang.Long r1 = r3.negative_int_value
            r0.negative_int_value = r1
            java.lang.Double r1 = r3.double_value
            r0.double_value = r1
            com.czhj.wire.okio.ByteString r1 = r3.string_value
            r0.string_value = r1
            java.lang.String r1 = r3.aggregate_value
            r0.aggregate_value = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r4.name
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L17
            java.lang.String r1 = ", name="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption$NamePart> r1 = r4.name
            r0.append(r1)
        L17:
            java.lang.String r1 = r4.identifier_value
            if (r1 == 0) goto L25
            java.lang.String r1 = ", identifier_value="
            r0.append(r1)
            java.lang.String r1 = r4.identifier_value
            r0.append(r1)
        L25:
            java.lang.Long r1 = r4.positive_int_value
            if (r1 == 0) goto L33
            java.lang.String r1 = ", positive_int_value="
            r0.append(r1)
            java.lang.Long r1 = r4.positive_int_value
            r0.append(r1)
        L33:
            java.lang.Long r1 = r4.negative_int_value
            if (r1 == 0) goto L41
            java.lang.String r1 = ", negative_int_value="
            r0.append(r1)
            java.lang.Long r1 = r4.negative_int_value
            r0.append(r1)
        L41:
            java.lang.Double r1 = r4.double_value
            if (r1 == 0) goto L4f
            java.lang.String r1 = ", double_value="
            r0.append(r1)
            java.lang.Double r1 = r4.double_value
            r0.append(r1)
        L4f:
            com.czhj.wire.okio.ByteString r1 = r4.string_value
            if (r1 == 0) goto L5d
            java.lang.String r1 = ", string_value="
            r0.append(r1)
            com.czhj.wire.okio.ByteString r1 = r4.string_value
            r0.append(r1)
        L5d:
            java.lang.String r1 = r4.aggregate_value
            if (r1 == 0) goto L6b
            java.lang.String r1 = ", aggregate_value="
            r0.append(r1)
            java.lang.String r1 = r4.aggregate_value
            r0.append(r1)
        L6b:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "UninterpretedOption{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
