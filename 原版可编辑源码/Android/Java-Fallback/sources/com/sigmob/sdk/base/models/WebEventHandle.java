package com.sigmob.sdk.base.models;

public final class WebEventHandle extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.WebEventHandle, com.sigmob.sdk.base.models.WebEventHandle.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEventHandle> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.WebEventHandle> CREATOR = null;
    public static final java.lang.Integer DEFAULT_HANDLE_TYPE = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "WebEvent#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 3)
    public final java.util.List<com.sigmob.sdk.base.models.WebEvent> events;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 2)
    public final java.util.List<java.lang.String> handle_name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer handle_type;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.WebEventHandle, com.sigmob.sdk.base.models.WebEventHandle.Builder> {
        public java.util.List<com.sigmob.sdk.base.models.WebEvent> events;
        public java.util.List<java.lang.String> handle_name;
        public java.lang.Integer handle_type;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.WebEventHandle.DEFAULT_HANDLE_TYPE
                r1.handle_type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.handle_name = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.events = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.WebEventHandle r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.WebEventHandle build() {
                r5 = this;
                com.sigmob.sdk.base.models.WebEventHandle r0 = new com.sigmob.sdk.base.models.WebEventHandle
                java.lang.Integer r1 = r5.handle_type
                java.util.List<java.lang.String> r2 = r5.handle_name
                java.util.List<com.sigmob.sdk.base.models.WebEvent> r3 = r5.events
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public com.sigmob.sdk.base.models.WebEventHandle.Builder events(java.util.List<com.sigmob.sdk.base.models.WebEvent> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.events = r1
                return r0
        }

        public com.sigmob.sdk.base.models.WebEventHandle.Builder handle_name(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.handle_name = r1
                return r0
        }

        public com.sigmob.sdk.base.models.WebEventHandle.Builder handle_type(java.lang.Integer r1) {
                r0 = this;
                r0.handle_type = r1
                return r0
        }
    }

    private static final class ProtoAdapter_WebEventHandle extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEventHandle> {
        public ProtoAdapter_WebEventHandle() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.WebEventHandle> r1 = com.sigmob.sdk.base.models.WebEventHandle.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.WebEventHandle decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.WebEventHandle$Builder r0 = new com.sigmob.sdk.base.models.WebEventHandle$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L46
                r4 = 1
                if (r3 == r4) goto L3a
                r4 = 2
                if (r3 == r4) goto L2e
                r4 = 3
                if (r3 == r4) goto L29
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L29:
                java.util.List<com.sigmob.sdk.base.models.WebEvent> r3 = r0.events
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEvent> r4 = com.sigmob.sdk.base.models.WebEvent.ADAPTER
                goto L32
            L2e:
                java.util.List<java.lang.String> r3 = r0.handle_name
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
            L32:
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L3a:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.handle_type(r3)
                goto L9
            L46:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.WebEventHandle r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.WebEventHandle decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.WebEventHandle r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.WebEventHandle r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.handle_type
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.handle_name
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEvent> r0 = com.sigmob.sdk.base.models.WebEvent.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.WebEvent> r1 = r5.events
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.WebEventHandle r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.WebEventHandle r2 = (com.sigmob.sdk.base.models.WebEventHandle) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.WebEventHandle r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.handle_type
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.handle_name
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEvent> r1 = com.sigmob.sdk.base.models.WebEvent.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.WebEvent> r2 = r5.events
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.WebEventHandle r1) {
                r0 = this;
                com.sigmob.sdk.base.models.WebEventHandle r1 = (com.sigmob.sdk.base.models.WebEventHandle) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.WebEventHandle redact(com.sigmob.sdk.base.models.WebEventHandle r3) {
                r2 = this;
                com.sigmob.sdk.base.models.WebEventHandle$Builder r3 = r3.newBuilder()
                java.util.List<com.sigmob.sdk.base.models.WebEvent> r0 = r3.events
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEvent> r1 = com.sigmob.sdk.base.models.WebEvent.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.WebEventHandle r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.WebEventHandle redact(com.sigmob.sdk.base.models.WebEventHandle r1) {
                r0 = this;
                com.sigmob.sdk.base.models.WebEventHandle r1 = (com.sigmob.sdk.base.models.WebEventHandle) r1
                com.sigmob.sdk.base.models.WebEventHandle r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.WebEventHandle$ProtoAdapter_WebEventHandle r0 = new com.sigmob.sdk.base.models.WebEventHandle$ProtoAdapter_WebEventHandle
            r0.<init>()
            com.sigmob.sdk.base.models.WebEventHandle.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.WebEventHandle.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.WebEventHandle.DEFAULT_HANDLE_TYPE = r0
            return
    }

    public WebEventHandle(java.lang.Integer r2, java.util.List<java.lang.String> r3, java.util.List<com.sigmob.sdk.base.models.WebEvent> r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public WebEventHandle(java.lang.Integer r2, java.util.List<java.lang.String> r3, java.util.List<com.sigmob.sdk.base.models.WebEvent> r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEventHandle> r0 = com.sigmob.sdk.base.models.WebEventHandle.ADAPTER
            r1.<init>(r0, r5)
            r1.handle_type = r2
            java.lang.String r2 = "handle_name"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r3)
            r1.handle_name = r2
            java.lang.String r2 = "events"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r4)
            r1.events = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.WebEventHandle
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.WebEventHandle r5 = (com.sigmob.sdk.base.models.WebEventHandle) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.handle_type
            java.lang.Integer r3 = r5.handle_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.util.List<java.lang.String> r1 = r4.handle_name
            java.util.List<java.lang.String> r3 = r5.handle_name
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.util.List<com.sigmob.sdk.base.models.WebEvent> r1 = r4.events
            java.util.List<com.sigmob.sdk.base.models.WebEvent> r5 = r5.events
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L39
            goto L3a
        L39:
            r0 = r2
        L3a:
            return r0
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto L2d
            com.czhj.wire.okio.ByteString r0 = r2.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r2.handle_type
            if (r1 == 0) goto L17
            int r1 = r1.hashCode()
            goto L18
        L17:
            r1 = 0
        L18:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r2.handle_name
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.sigmob.sdk.base.models.WebEvent> r1 = r2.events
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r2.hashCode = r0
        L2d:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.WebEventHandle$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.WebEventHandle.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.WebEventHandle$Builder r0 = new com.sigmob.sdk.base.models.WebEventHandle$Builder
            r0.<init>()
            java.lang.Integer r1 = r3.handle_type
            r0.handle_type = r1
            java.util.List<java.lang.String> r1 = r3.handle_name
            java.lang.String r2 = "handle_name"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.handle_name = r1
            java.util.List<com.sigmob.sdk.base.models.WebEvent> r1 = r3.events
            java.lang.String r2 = "events"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.events = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.handle_type
            if (r1 == 0) goto L13
            java.lang.String r1 = ", handle_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.handle_type
            r0.append(r1)
        L13:
            java.util.List<java.lang.String> r1 = r4.handle_name
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L25
            java.lang.String r1 = ", handle_name="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.handle_name
            r0.append(r1)
        L25:
            java.util.List<com.sigmob.sdk.base.models.WebEvent> r1 = r4.events
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L37
            java.lang.String r1 = ", events="
            r0.append(r1)
            java.util.List<com.sigmob.sdk.base.models.WebEvent> r1 = r4.events
            r0.append(r1)
        L37:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "WebEventHandle{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
