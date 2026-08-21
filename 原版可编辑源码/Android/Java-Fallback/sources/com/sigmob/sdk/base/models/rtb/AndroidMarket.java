package com.sigmob.sdk.base.models.rtb;

public final class AndroidMarket extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.AndroidMarket, com.sigmob.sdk.base.models.rtb.AndroidMarket.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AndroidMarket> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.AndroidMarket> CREATOR = null;
    public static final java.lang.String DEFAULT_APPSTORE_PACKAGE_NAME = "";
    public static final java.lang.String DEFAULT_APP_PACKAGE_NAME = "";
    public static final java.lang.String DEFAULT_MARKETURL = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String app_package_name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String appstore_package_name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String market_url;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.AndroidMarket, com.sigmob.sdk.base.models.rtb.AndroidMarket.Builder> {
        public java.lang.String app_package_name;
        public java.lang.String appstore_package_name;
        public java.lang.String marketUrl;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.sigmob.sdk.base.models.rtb.AndroidMarket.Builder app_package_name(java.lang.String r1) {
                r0 = this;
                r0.app_package_name = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AndroidMarket.Builder appstore_package_name(java.lang.String r1) {
                r0 = this;
                r0.appstore_package_name = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AndroidMarket build() {
                r5 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket r0 = new com.sigmob.sdk.base.models.rtb.AndroidMarket
                java.lang.String r1 = r5.marketUrl
                java.lang.String r2 = r5.app_package_name
                java.lang.String r3 = r5.appstore_package_name
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AndroidMarket.Builder marketUrl(java.lang.String r1) {
                r0 = this;
                r0.marketUrl = r1
                return r0
        }
    }

    private static final class ProtoAdapter_AndroidMarket extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AndroidMarket> {
        public ProtoAdapter_AndroidMarket() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.AndroidMarket> r1 = com.sigmob.sdk.base.models.rtb.AndroidMarket.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AndroidMarket decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket$Builder r0 = new com.sigmob.sdk.base.models.rtb.AndroidMarket$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L4d
                r4 = 1
                if (r3 == r4) goto L41
                r4 = 2
                if (r3 == r4) goto L35
                r4 = 3
                if (r3 == r4) goto L29
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L29:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.appstore_package_name(r3)
                goto L9
            L35:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.app_package_name(r3)
                goto L9
            L41:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.marketUrl(r3)
                goto L9
            L4d:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.AndroidMarket r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AndroidMarket decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.AndroidMarket r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.market_url
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.app_package_name
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.appstore_package_name
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.AndroidMarket r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket r2 = (com.sigmob.sdk.base.models.rtb.AndroidMarket) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.AndroidMarket r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.market_url
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.app_package_name
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.appstore_package_name
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.AndroidMarket r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = (com.sigmob.sdk.base.models.rtb.AndroidMarket) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.AndroidMarket redact(com.sigmob.sdk.base.models.rtb.AndroidMarket r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AndroidMarket redact(com.sigmob.sdk.base.models.rtb.AndroidMarket r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = (com.sigmob.sdk.base.models.rtb.AndroidMarket) r1
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.AndroidMarket$ProtoAdapter_AndroidMarket r0 = new com.sigmob.sdk.base.models.rtb.AndroidMarket$ProtoAdapter_AndroidMarket
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.AndroidMarket.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.AndroidMarket.CREATOR = r0
            return
    }

    public AndroidMarket(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AndroidMarket(java.lang.String r2, java.lang.String r3, java.lang.String r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AndroidMarket> r0 = com.sigmob.sdk.base.models.rtb.AndroidMarket.ADAPTER
            r1.<init>(r0, r5)
            r1.market_url = r2
            r1.app_package_name = r3
            r1.appstore_package_name = r4
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.AndroidMarket
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.AndroidMarket r5 = (com.sigmob.sdk.base.models.rtb.AndroidMarket) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.market_url
            java.lang.String r3 = r5.market_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.app_package_name
            java.lang.String r3 = r5.app_package_name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.appstore_package_name
            java.lang.String r5 = r5.appstore_package_name
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
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
            if (r0 != 0) goto L34
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.market_url
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.app_package_name
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.appstore_package_name
            if (r1 == 0) goto L31
            int r2 = r1.hashCode()
        L31:
            int r0 = r0 + r2
            r3.hashCode = r0
        L34:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.AndroidMarket$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.AndroidMarket.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.AndroidMarket$Builder r0 = new com.sigmob.sdk.base.models.rtb.AndroidMarket$Builder
            r0.<init>()
            java.lang.String r1 = r2.market_url
            r0.marketUrl = r1
            java.lang.String r1 = r2.app_package_name
            r0.app_package_name = r1
            java.lang.String r1 = r2.appstore_package_name
            r0.appstore_package_name = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.market_url
            if (r1 == 0) goto L13
            java.lang.String r1 = ", marketUrl="
            r0.append(r1)
            java.lang.String r1 = r4.market_url
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.app_package_name
            if (r1 == 0) goto L21
            java.lang.String r1 = ", app_package_name="
            r0.append(r1)
            java.lang.String r1 = r4.app_package_name
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.appstore_package_name
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", appstore_package_name="
            r0.append(r1)
            java.lang.String r1 = r4.appstore_package_name
            r0.append(r1)
        L2f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "AndroidMarket{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
