package com.sigmob.sdk.base.models.rtb;

public final class ResponseAsset extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.ResponseAsset, com.sigmob.sdk.base.models.rtb.ResponseAsset.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.ResponseAsset> CREATOR = null;
    public static final java.lang.Integer DEFAULT_INDEX = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "ResponseAssetImage#ADAPTER", tag = 3)
    public final com.sigmob.sdk.base.models.rtb.ResponseAssetImage image;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer index;

    @com.czhj.wire.WireField(adapter = "ResponseAssetText#ADAPTER", tag = 4)
    public final com.sigmob.sdk.base.models.rtb.ResponseAssetText text;

    @com.czhj.wire.WireField(adapter = "ResponseAssetVideo#ADAPTER", tag = 2)
    public final com.sigmob.sdk.base.models.rtb.ResponseAssetVideo video;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.ResponseAsset, com.sigmob.sdk.base.models.rtb.ResponseAsset.Builder> {
        public com.sigmob.sdk.base.models.rtb.ResponseAssetImage image;
        public java.lang.Integer index;
        public com.sigmob.sdk.base.models.rtb.ResponseAssetText text;
        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo video;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.ResponseAsset.DEFAULT_INDEX
                r1.index = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAsset build() {
                r7 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset r6 = new com.sigmob.sdk.base.models.rtb.ResponseAsset
                java.lang.Integer r1 = r7.index
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r2 = r7.video
                com.sigmob.sdk.base.models.rtb.ResponseAssetImage r3 = r7.image
                com.sigmob.sdk.base.models.rtb.ResponseAssetText r4 = r7.text
                com.czhj.wire.okio.ByteString r5 = super.buildUnknownFields()
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAsset.Builder image(com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1) {
                r0 = this;
                r0.image = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAsset.Builder index(java.lang.Integer r1) {
                r0 = this;
                r0.index = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAsset.Builder text(com.sigmob.sdk.base.models.rtb.ResponseAssetText r1) {
                r0 = this;
                r0.text = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAsset.Builder video(com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1) {
                r0 = this;
                r0.video = r1
                return r0
        }
    }

    private static final class ProtoAdapter_ResponseAsset extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> {
        public ProtoAdapter_ResponseAsset() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = com.sigmob.sdk.base.models.rtb.ResponseAsset.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAsset decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset$Builder r0 = new com.sigmob.sdk.base.models.rtb.ResponseAsset$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L5c
                r4 = 1
                if (r3 == r4) goto L50
                r4 = 2
                if (r3 == r4) goto L44
                r4 = 3
                if (r3 == r4) goto L38
                r4 = 4
                if (r3 == r4) goto L2c
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L2c:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetText> r3 = com.sigmob.sdk.base.models.rtb.ResponseAssetText.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.ResponseAssetText r3 = (com.sigmob.sdk.base.models.rtb.ResponseAssetText) r3
                r0.text(r3)
                goto L9
            L38:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetImage> r3 = com.sigmob.sdk.base.models.rtb.ResponseAssetImage.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.ResponseAssetImage r3 = (com.sigmob.sdk.base.models.rtb.ResponseAssetImage) r3
                r0.image(r3)
                goto L9
            L44:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> r3 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r3 = (com.sigmob.sdk.base.models.rtb.ResponseAssetVideo) r3
                r0.video(r3)
                goto L9
            L50:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.index(r3)
                goto L9
            L5c:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.ResponseAsset r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAsset decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.ResponseAsset r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.index
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r5.video
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetImage> r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetImage.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r5.image
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetText> r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetText.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetText r1 = r5.text
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.ResponseAsset r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset r2 = (com.sigmob.sdk.base.models.rtb.ResponseAsset) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.ResponseAsset r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.index
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> r1 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r2 = r5.video
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetImage> r1 = com.sigmob.sdk.base.models.rtb.ResponseAssetImage.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetImage r2 = r5.image
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetText> r1 = com.sigmob.sdk.base.models.rtb.ResponseAssetText.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetText r2 = r5.text
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.ResponseAsset r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset r1 = (com.sigmob.sdk.base.models.rtb.ResponseAsset) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAsset redact(com.sigmob.sdk.base.models.rtb.ResponseAsset r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r0 = r3.video
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r3.video
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r0 = (com.sigmob.sdk.base.models.rtb.ResponseAssetVideo) r0
                r3.video = r0
            L14:
                com.sigmob.sdk.base.models.rtb.ResponseAssetImage r0 = r3.image
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetImage> r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetImage.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r3.image
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.ResponseAssetImage r0 = (com.sigmob.sdk.base.models.rtb.ResponseAssetImage) r0
                r3.image = r0
            L24:
                com.sigmob.sdk.base.models.rtb.ResponseAssetText r0 = r3.text
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetText> r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetText.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseAssetText r1 = r3.text
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.ResponseAssetText r0 = (com.sigmob.sdk.base.models.rtb.ResponseAssetText) r0
                r3.text = r0
            L34:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.ResponseAsset r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAsset redact(com.sigmob.sdk.base.models.rtb.ResponseAsset r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAsset r1 = (com.sigmob.sdk.base.models.rtb.ResponseAsset) r1
                com.sigmob.sdk.base.models.rtb.ResponseAsset r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.ResponseAsset$ProtoAdapter_ResponseAsset r0 = new com.sigmob.sdk.base.models.rtb.ResponseAsset$ProtoAdapter_ResponseAsset
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.ResponseAsset.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.ResponseAsset.DEFAULT_INDEX = r0
            return
    }

    public ResponseAsset(java.lang.Integer r7, com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r8, com.sigmob.sdk.base.models.rtb.ResponseAssetImage r9, com.sigmob.sdk.base.models.rtb.ResponseAssetText r10) {
            r6 = this;
            com.czhj.wire.okio.ByteString r5 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ResponseAsset(java.lang.Integer r2, com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r3, com.sigmob.sdk.base.models.rtb.ResponseAssetImage r4, com.sigmob.sdk.base.models.rtb.ResponseAssetText r5, com.czhj.wire.okio.ByteString r6) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
            r1.<init>(r0, r6)
            r1.index = r2
            r1.video = r3
            r1.image = r4
            r1.text = r5
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.ResponseAsset
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.ResponseAsset r5 = (com.sigmob.sdk.base.models.rtb.ResponseAsset) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L43
            java.lang.Integer r1 = r4.index
            java.lang.Integer r3 = r5.index
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r4.video
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r3 = r5.video
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r4.image
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r3 = r5.image
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            com.sigmob.sdk.base.models.rtb.ResponseAssetText r1 = r4.text
            com.sigmob.sdk.base.models.rtb.ResponseAssetText r5 = r5.text
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L43
            goto L44
        L43:
            r0 = r2
        L44:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L41
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.index
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r3.video
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r3.image
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.ResponseAssetText r1 = r3.text
            if (r1 == 0) goto L3e
            int r2 = r1.hashCode()
        L3e:
            int r0 = r0 + r2
            r3.hashCode = r0
        L41:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.ResponseAsset$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.ResponseAsset.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.ResponseAsset$Builder r0 = new com.sigmob.sdk.base.models.rtb.ResponseAsset$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.index
            r0.index = r1
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r2.video
            r0.video = r1
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r2.image
            r0.image = r1
            com.sigmob.sdk.base.models.rtb.ResponseAssetText r1 = r2.text
            r0.text = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.index
            if (r1 == 0) goto L13
            java.lang.String r1 = ", index="
            r0.append(r1)
            java.lang.Integer r1 = r4.index
            r0.append(r1)
        L13:
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r4.video
            if (r1 == 0) goto L21
            java.lang.String r1 = ", video="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r4.video
            r0.append(r1)
        L21:
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r4.image
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", image="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.ResponseAssetImage r1 = r4.image
            r0.append(r1)
        L2f:
            com.sigmob.sdk.base.models.rtb.ResponseAssetText r1 = r4.text
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", text="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.ResponseAssetText r1 = r4.text
            r0.append(r1)
        L3d:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "ResponseAsset{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
