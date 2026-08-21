package com.sigmob.sdk.base.models.rtb;

public final class AdPrivacy extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.AdPrivacy, com.sigmob.sdk.base.models.rtb.AdPrivacy.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdPrivacy> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.AdPrivacy> CREATOR = null;
    public static final java.lang.String DEFAULT_PRIVACY_INFO_URL = "";
    public static final java.lang.String DEFAULT_PRIVACY_TEMPLATE_URL = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String privacy_info_url;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.util.Map<java.lang.String, java.lang.String> privacy_template_info;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String privacy_template_url;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.AdPrivacy, com.sigmob.sdk.base.models.rtb.AdPrivacy.Builder> {
        public java.lang.String privacy_info_url;
        public java.util.Map<java.lang.String, java.lang.String> privacy_template_info;
        public java.lang.String privacy_template_url;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.privacy_info_url = r0
                r1.privacy_template_url = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r1.privacy_template_info = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdPrivacy build() {
                r5 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = new com.sigmob.sdk.base.models.rtb.AdPrivacy
                java.lang.String r1 = r5.privacy_info_url
                java.lang.String r2 = r5.privacy_template_url
                java.util.Map<java.lang.String, java.lang.String> r3 = r5.privacy_template_info
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdPrivacy.Builder privacy_info_url(java.lang.String r1) {
                r0 = this;
                r0.privacy_info_url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdPrivacy.Builder privacy_template_info(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.privacy_template_info = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdPrivacy.Builder privacy_template_url(java.lang.String r1) {
                r0 = this;
                r0.privacy_template_url = r1
                return r0
        }
    }

    private static final class ProtoAdapter_AdPrivacy extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdPrivacy> {
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> privacy_template_info;

        public ProtoAdapter_AdPrivacy() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.AdPrivacy> r1 = com.sigmob.sdk.base.models.rtb.AdPrivacy.class
                r2.<init>(r0, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.privacy_template_info = r0
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdPrivacy decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy$Builder r0 = new com.sigmob.sdk.base.models.rtb.AdPrivacy$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L4f
                r4 = 1
                if (r3 == r4) goto L43
                r4 = 2
                if (r3 == r4) goto L37
                r4 = 3
                if (r3 == r4) goto L29
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L29:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.privacy_template_info
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.privacy_template_info
                java.lang.Object r4 = r4.decode(r7)
                java.util.Map r4 = (java.util.Map) r4
                r3.putAll(r4)
                goto L9
            L37:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.privacy_template_url(r3)
                goto L9
            L43:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.privacy_info_url(r3)
                goto L9
            L4f:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.AdPrivacy r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdPrivacy decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.AdPrivacy r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.privacy_info_url
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.privacy_template_url
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.privacy_template_info
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.privacy_template_info
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.AdPrivacy r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy r2 = (com.sigmob.sdk.base.models.rtb.AdPrivacy) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.AdPrivacy r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.privacy_info_url
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.privacy_template_url
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.privacy_template_info
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.privacy_template_info
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.AdPrivacy r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = (com.sigmob.sdk.base.models.rtb.AdPrivacy) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.AdPrivacy redact(com.sigmob.sdk.base.models.rtb.AdPrivacy r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdPrivacy redact(com.sigmob.sdk.base.models.rtb.AdPrivacy r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = (com.sigmob.sdk.base.models.rtb.AdPrivacy) r1
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.AdPrivacy$ProtoAdapter_AdPrivacy r0 = new com.sigmob.sdk.base.models.rtb.AdPrivacy$ProtoAdapter_AdPrivacy
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.AdPrivacy.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.AdPrivacy.CREATOR = r0
            return
    }

    public AdPrivacy(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AdPrivacy(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdPrivacy> r0 = com.sigmob.sdk.base.models.rtb.AdPrivacy.ADAPTER
            r1.<init>(r0, r5)
            r1.privacy_info_url = r2
            r1.privacy_template_url = r3
            java.lang.String r2 = "privacy_template_info"
            java.util.Map r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r4)
            r1.privacy_template_info = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.AdPrivacy
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.AdPrivacy r5 = (com.sigmob.sdk.base.models.rtb.AdPrivacy) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.privacy_info_url
            java.lang.String r3 = r5.privacy_info_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.privacy_template_url
            java.lang.String r3 = r5.privacy_template_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.privacy_template_info
            java.util.Map<java.lang.String, java.lang.String> r5 = r5.privacy_template_info
            boolean r5 = r1.equals(r5)
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
            if (r0 != 0) goto L30
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.privacy_info_url
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.privacy_template_url
            if (r1 == 0) goto L24
            int r2 = r1.hashCode()
        L24:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.privacy_template_info
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        L30:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.AdPrivacy$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.AdPrivacy.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.AdPrivacy$Builder r0 = new com.sigmob.sdk.base.models.rtb.AdPrivacy$Builder
            r0.<init>()
            java.lang.String r1 = r3.privacy_info_url
            r0.privacy_info_url = r1
            java.lang.String r1 = r3.privacy_template_url
            r0.privacy_template_url = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.privacy_template_info
            java.lang.String r2 = "privacy_template_info"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.privacy_template_info = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.privacy_info_url
            if (r1 == 0) goto L13
            java.lang.String r1 = ", privacy_info_url="
            r0.append(r1)
            java.lang.String r1 = r4.privacy_info_url
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.privacy_template_url
            if (r1 == 0) goto L21
            java.lang.String r1 = ", privacy_template_url="
            r0.append(r1)
            java.lang.String r1 = r4.privacy_template_url
            r0.append(r1)
        L21:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.privacy_template_info
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L33
            java.lang.String r1 = ", privacy_template_info="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.privacy_template_info
            r0.append(r1)
        L33:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "AdPrivacy{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
