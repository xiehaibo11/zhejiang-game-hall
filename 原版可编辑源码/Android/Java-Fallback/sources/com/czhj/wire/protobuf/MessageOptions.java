package com.czhj.wire.protobuf;

public final class MessageOptions extends com.czhj.wire.Message<com.czhj.wire.protobuf.MessageOptions, com.czhj.wire.protobuf.MessageOptions.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MessageOptions> ADAPTER = null;
    public static final java.lang.Boolean DEFAULT_DEPRECATED = null;
    public static final java.lang.Boolean DEFAULT_MAP_ENTRY = null;
    public static final java.lang.Boolean DEFAULT_MESSAGE_SET_WIRE_FORMAT = null;
    public static final java.lang.Boolean DEFAULT_NO_STANDARD_DESCRIPTOR_ACCESSOR = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 3)
    public final java.lang.Boolean deprecated;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 7)
    public final java.lang.Boolean map_entry;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 1)
    public final java.lang.Boolean message_set_wire_format;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 2)
    public final java.lang.Boolean no_standard_descriptor_accessor;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.UninterpretedOption#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 999)
    public final java.util.List<com.czhj.wire.protobuf.UninterpretedOption> uninterpreted_option;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.MessageOptions, com.czhj.wire.protobuf.MessageOptions.Builder> {
        public java.lang.Boolean deprecated;
        public java.lang.Boolean map_entry;
        public java.lang.Boolean message_set_wire_format;
        public java.lang.Boolean no_standard_descriptor_accessor;
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
                com.czhj.wire.protobuf.MessageOptions r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.MessageOptions build() {
                r8 = this;
                com.czhj.wire.protobuf.MessageOptions r7 = new com.czhj.wire.protobuf.MessageOptions
                java.lang.Boolean r1 = r8.message_set_wire_format
                java.lang.Boolean r2 = r8.no_standard_descriptor_accessor
                java.lang.Boolean r3 = r8.deprecated
                java.lang.Boolean r4 = r8.map_entry
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r5 = r8.uninterpreted_option
                com.czhj.wire.okio.ByteString r6 = super.buildUnknownFields()
                r0 = r7
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return r7
        }

        public com.czhj.wire.protobuf.MessageOptions.Builder deprecated(java.lang.Boolean r1) {
                r0 = this;
                r0.deprecated = r1
                return r0
        }

        public com.czhj.wire.protobuf.MessageOptions.Builder map_entry(java.lang.Boolean r1) {
                r0 = this;
                r0.map_entry = r1
                return r0
        }

        public com.czhj.wire.protobuf.MessageOptions.Builder message_set_wire_format(java.lang.Boolean r1) {
                r0 = this;
                r0.message_set_wire_format = r1
                return r0
        }

        public com.czhj.wire.protobuf.MessageOptions.Builder no_standard_descriptor_accessor(java.lang.Boolean r1) {
                r0 = this;
                r0.no_standard_descriptor_accessor = r1
                return r0
        }

        public com.czhj.wire.protobuf.MessageOptions.Builder uninterpreted_option(java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.uninterpreted_option = r1
                return r0
        }
    }

    private static final class ProtoAdapter_MessageOptions extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MessageOptions> {
        public ProtoAdapter_MessageOptions() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.MessageOptions> r1 = com.czhj.wire.protobuf.MessageOptions.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.MessageOptions decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.MessageOptions$Builder r0 = new com.czhj.wire.protobuf.MessageOptions$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L6c
                r4 = 1
                if (r3 == r4) goto L60
                r4 = 2
                if (r3 == r4) goto L54
                r4 = 3
                if (r3 == r4) goto L48
                r4 = 7
                if (r3 == r4) goto L3c
                r4 = 999(0x3e7, float:1.4E-42)
                if (r3 == r4) goto L30
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L30:
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r3 = r0.uninterpreted_option
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r4 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L3c:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.map_entry(r3)
                goto L9
            L48:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.deprecated(r3)
                goto L9
            L54:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.no_standard_descriptor_accessor(r3)
                goto L9
            L60:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.message_set_wire_format(r3)
                goto L9
            L6c:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.MessageOptions r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.MessageOptions decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.MessageOptions r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.MessageOptions r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.message_set_wire_format
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.no_standard_descriptor_accessor
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.deprecated
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.map_entry
                r2 = 7
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
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.MessageOptions r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.MessageOptions r2 = (com.czhj.wire.protobuf.MessageOptions) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.MessageOptions r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.message_set_wire_format
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.no_standard_descriptor_accessor
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.deprecated
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.map_entry
                r3 = 7
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
        public int encodedSize(com.czhj.wire.protobuf.MessageOptions r1) {
                r0 = this;
                com.czhj.wire.protobuf.MessageOptions r1 = (com.czhj.wire.protobuf.MessageOptions) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.MessageOptions redact(com.czhj.wire.protobuf.MessageOptions r3) {
                r2 = this;
                com.czhj.wire.protobuf.MessageOptions$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r0 = r3.uninterpreted_option
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.UninterpretedOption> r1 = com.czhj.wire.protobuf.UninterpretedOption.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.MessageOptions r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.MessageOptions redact(com.czhj.wire.protobuf.MessageOptions r1) {
                r0 = this;
                com.czhj.wire.protobuf.MessageOptions r1 = (com.czhj.wire.protobuf.MessageOptions) r1
                com.czhj.wire.protobuf.MessageOptions r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.MessageOptions$ProtoAdapter_MessageOptions r0 = new com.czhj.wire.protobuf.MessageOptions$ProtoAdapter_MessageOptions
            r0.<init>()
            com.czhj.wire.protobuf.MessageOptions.ADAPTER = r0
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.wire.protobuf.MessageOptions.DEFAULT_MESSAGE_SET_WIRE_FORMAT = r0
            com.czhj.wire.protobuf.MessageOptions.DEFAULT_NO_STANDARD_DESCRIPTOR_ACCESSOR = r0
            com.czhj.wire.protobuf.MessageOptions.DEFAULT_DEPRECATED = r0
            com.czhj.wire.protobuf.MessageOptions.DEFAULT_MAP_ENTRY = r0
            return
    }

    public MessageOptions(java.lang.Boolean r8, java.lang.Boolean r9, java.lang.Boolean r10, java.lang.Boolean r11, java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r12) {
            r7 = this;
            com.czhj.wire.okio.ByteString r6 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public MessageOptions(java.lang.Boolean r2, java.lang.Boolean r3, java.lang.Boolean r4, java.lang.Boolean r5, java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r6, com.czhj.wire.okio.ByteString r7) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.MessageOptions> r0 = com.czhj.wire.protobuf.MessageOptions.ADAPTER
            r1.<init>(r0, r7)
            r1.message_set_wire_format = r2
            r1.no_standard_descriptor_accessor = r3
            r1.deprecated = r4
            r1.map_entry = r5
            java.lang.String r2 = "uninterpreted_option"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r6)
            r1.uninterpreted_option = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.MessageOptions
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.MessageOptions r5 = (com.czhj.wire.protobuf.MessageOptions) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L4d
            java.lang.Boolean r1 = r4.message_set_wire_format
            java.lang.Boolean r3 = r5.message_set_wire_format
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.lang.Boolean r1 = r4.no_standard_descriptor_accessor
            java.lang.Boolean r3 = r5.no_standard_descriptor_accessor
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.lang.Boolean r1 = r4.deprecated
            java.lang.Boolean r3 = r5.deprecated
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.lang.Boolean r1 = r4.map_entry
            java.lang.Boolean r3 = r5.map_entry
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r5 = r5.uninterpreted_option
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L4d
            goto L4e
        L4d:
            r0 = r2
        L4e:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L4a
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.message_set_wire_format
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.no_standard_descriptor_accessor
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.deprecated
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.map_entry
            if (r1 == 0) goto L3e
            int r2 = r1.hashCode()
        L3e:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r3.uninterpreted_option
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        L4a:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.MessageOptions$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.MessageOptions.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.MessageOptions$Builder r0 = new com.czhj.wire.protobuf.MessageOptions$Builder
            r0.<init>()
            java.lang.Boolean r1 = r3.message_set_wire_format
            r0.message_set_wire_format = r1
            java.lang.Boolean r1 = r3.no_standard_descriptor_accessor
            r0.no_standard_descriptor_accessor = r1
            java.lang.Boolean r1 = r3.deprecated
            r0.deprecated = r1
            java.lang.Boolean r1 = r3.map_entry
            r0.map_entry = r1
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
            java.lang.Boolean r1 = r4.message_set_wire_format
            if (r1 == 0) goto L13
            java.lang.String r1 = ", message_set_wire_format="
            r0.append(r1)
            java.lang.Boolean r1 = r4.message_set_wire_format
            r0.append(r1)
        L13:
            java.lang.Boolean r1 = r4.no_standard_descriptor_accessor
            if (r1 == 0) goto L21
            java.lang.String r1 = ", no_standard_descriptor_accessor="
            r0.append(r1)
            java.lang.Boolean r1 = r4.no_standard_descriptor_accessor
            r0.append(r1)
        L21:
            java.lang.Boolean r1 = r4.deprecated
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", deprecated="
            r0.append(r1)
            java.lang.Boolean r1 = r4.deprecated
            r0.append(r1)
        L2f:
            java.lang.Boolean r1 = r4.map_entry
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", map_entry="
            r0.append(r1)
            java.lang.Boolean r1 = r4.map_entry
            r0.append(r1)
        L3d:
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L4f
            java.lang.String r1 = ", uninterpreted_option="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.UninterpretedOption> r1 = r4.uninterpreted_option
            r0.append(r1)
        L4f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "MessageOptions{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
