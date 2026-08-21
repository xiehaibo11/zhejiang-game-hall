package com.sigmob.sdk.base.models.rtb;

public final class ResponseNativeAd extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.ResponseNativeAd, com.sigmob.sdk.base.models.rtb.ResponseNativeAd.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> CREATOR = null;
    public static final java.lang.Integer DEFAULT_TYPE = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "ResponseAsset#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 1)
    public final java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> assets;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer type;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.ResponseNativeAd, com.sigmob.sdk.base.models.rtb.ResponseNativeAd.Builder> {
        public java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> assets;
        public java.lang.Integer type;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.ResponseNativeAd.DEFAULT_TYPE
                r1.type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.assets = r0
                return
        }

        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd.Builder assets(java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.assets = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd build() {
                r4 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = new com.sigmob.sdk.base.models.rtb.ResponseNativeAd
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r4.assets
                java.lang.Integer r2 = r4.type
                com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3)
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd.Builder type(java.lang.Integer r1) {
                r0 = this;
                r0.type = r1
                return r0
        }
    }

    private static final class ProtoAdapter_ResponseNativeAd extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> {
        public ProtoAdapter_ResponseNativeAd() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> r1 = com.sigmob.sdk.base.models.rtb.ResponseNativeAd.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd$Builder r0 = new com.sigmob.sdk.base.models.rtb.ResponseNativeAd$Builder
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
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.type(r3)
                goto L9
            L32:
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r3 = r0.assets
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r4 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L3e:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.ResponseNativeAd r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r5.assets
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.type
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.ResponseNativeAd r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r2 = (com.sigmob.sdk.base.models.rtb.ResponseNativeAd) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.ResponseNativeAd r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r5.assets
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.type
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = (com.sigmob.sdk.base.models.rtb.ResponseNativeAd) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd redact(com.sigmob.sdk.base.models.rtb.ResponseNativeAd r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd$Builder r3 = r3.newBuilder()
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = r3.assets
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd redact(com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = (com.sigmob.sdk.base.models.rtb.ResponseNativeAd) r1
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd$ProtoAdapter_ResponseNativeAd r0 = new com.sigmob.sdk.base.models.rtb.ResponseNativeAd$ProtoAdapter_ResponseNativeAd
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd.DEFAULT_TYPE = r0
            return
    }

    public ResponseNativeAd(java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r2, java.lang.Integer r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r0)
            return
    }

    public ResponseNativeAd(java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r2, java.lang.Integer r3, com.czhj.wire.okio.ByteString r4) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> r0 = com.sigmob.sdk.base.models.rtb.ResponseNativeAd.ADAPTER
            r1.<init>(r0, r4)
            java.lang.String r4 = "assets"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r4, r2)
            r1.assets = r2
            r1.type = r3
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.ResponseNativeAd
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r5 = (com.sigmob.sdk.base.models.rtb.ResponseNativeAd) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2f
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r4.assets
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r3 = r5.assets
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2f
            java.lang.Integer r1 = r4.type
            java.lang.Integer r5 = r5.type
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
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
            if (r0 != 0) goto L24
            com.czhj.wire.okio.ByteString r0 = r2.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r2.assets
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r2.type
            if (r1 == 0) goto L20
            int r1 = r1.hashCode()
            goto L21
        L20:
            r1 = 0
        L21:
            int r0 = r0 + r1
            r2.hashCode = r0
        L24:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.ResponseNativeAd.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd$Builder r0 = new com.sigmob.sdk.base.models.rtb.ResponseNativeAd$Builder
            r0.<init>()
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r3.assets
            java.lang.String r2 = "assets"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.assets = r1
            java.lang.Integer r1 = r3.type
            r0.type = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r4.assets
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L17
            java.lang.String r1 = ", assets="
            r0.append(r1)
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r4.assets
            r0.append(r1)
        L17:
            java.lang.Integer r1 = r4.type
            if (r1 == 0) goto L25
            java.lang.String r1 = ", type="
            r0.append(r1)
            java.lang.Integer r1 = r4.type
            r0.append(r1)
        L25:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "ResponseNativeAd{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
