package com.sigmob.sdk.base.models.rtb;

public final class ResponseAssetVideo extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo, com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> CREATOR = null;
    public static final java.lang.Integer DEFAULT_DURATION = null;
    public static final java.lang.Integer DEFAULT_H = null;
    public static final java.lang.String DEFAULT_URL = "";
    public static final java.lang.Integer DEFAULT_W = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 4)
    public final java.lang.Integer duration;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final java.lang.Integer h;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String url;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer w;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo, com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.Builder> {
        public java.lang.Integer duration;
        public java.lang.Integer h;
        public java.lang.String url;
        public java.lang.Integer w;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.url = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.DEFAULT_W
                r1.w = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.DEFAULT_H
                r1.h = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.DEFAULT_DURATION
                r1.duration = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo build() {
                r7 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r6 = new com.sigmob.sdk.base.models.rtb.ResponseAssetVideo
                java.lang.String r1 = r7.url
                java.lang.Integer r2 = r7.w
                java.lang.Integer r3 = r7.h
                java.lang.Integer r4 = r7.duration
                com.czhj.wire.okio.ByteString r5 = super.buildUnknownFields()
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.Builder duration(java.lang.Integer r1) {
                r0 = this;
                r0.duration = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.Builder h(java.lang.Integer r1) {
                r0 = this;
                r0.h = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.Builder url(java.lang.String r1) {
                r0 = this;
                r0.url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.Builder w(java.lang.Integer r1) {
                r0 = this;
                r0.w = r1
                return r0
        }
    }

    private static final class ProtoAdapter_ResponseAssetVideo extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> {
        public ProtoAdapter_ResponseAssetVideo() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> r1 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$Builder r0 = new com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$Builder
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
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.duration(r3)
                goto L9
            L38:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.h(r3)
                goto L9
            L44:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.w(r3)
                goto L9
            L50:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.url(r3)
                goto L9
            L5c:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.url
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.w
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.h
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.duration
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r2 = (com.sigmob.sdk.base.models.rtb.ResponseAssetVideo) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.url
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.w
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.h
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.duration
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = (com.sigmob.sdk.base.models.rtb.ResponseAssetVideo) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo redact(com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo redact(com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = (com.sigmob.sdk.base.models.rtb.ResponseAssetVideo) r1
                com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$ProtoAdapter_ResponseAssetVideo r0 = new com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$ProtoAdapter_ResponseAssetVideo
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.DEFAULT_W = r0
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.DEFAULT_H = r0
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.DEFAULT_DURATION = r0
            return
    }

    public ResponseAssetVideo(java.lang.String r7, java.lang.Integer r8, java.lang.Integer r9, java.lang.Integer r10) {
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

    public ResponseAssetVideo(java.lang.String r2, java.lang.Integer r3, java.lang.Integer r4, java.lang.Integer r5, com.czhj.wire.okio.ByteString r6) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAssetVideo> r0 = com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.ADAPTER
            r1.<init>(r0, r6)
            r1.url = r2
            r1.w = r3
            r1.h = r4
            r1.duration = r5
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.ResponseAssetVideo
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo r5 = (com.sigmob.sdk.base.models.rtb.ResponseAssetVideo) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L43
            java.lang.String r1 = r4.url
            java.lang.String r3 = r5.url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Integer r1 = r4.w
            java.lang.Integer r3 = r5.w
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Integer r1 = r4.h
            java.lang.Integer r3 = r5.h
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Integer r1 = r4.duration
            java.lang.Integer r5 = r5.duration
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
            java.lang.String r1 = r3.url
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.w
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.h
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.duration
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
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.ResponseAssetVideo.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$Builder r0 = new com.sigmob.sdk.base.models.rtb.ResponseAssetVideo$Builder
            r0.<init>()
            java.lang.String r1 = r2.url
            r0.url = r1
            java.lang.Integer r1 = r2.w
            r0.w = r1
            java.lang.Integer r1 = r2.h
            r0.h = r1
            java.lang.Integer r1 = r2.duration
            r0.duration = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.url
            if (r1 == 0) goto L13
            java.lang.String r1 = ", url="
            r0.append(r1)
            java.lang.String r1 = r4.url
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.w
            if (r1 == 0) goto L21
            java.lang.String r1 = ", w="
            r0.append(r1)
            java.lang.Integer r1 = r4.w
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.h
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", h="
            r0.append(r1)
            java.lang.Integer r1 = r4.h
            r0.append(r1)
        L2f:
            java.lang.Integer r1 = r4.duration
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", duration="
            r0.append(r1)
            java.lang.Integer r1 = r4.duration
            r0.append(r1)
        L3d:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "ResponseAssetVideo{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
