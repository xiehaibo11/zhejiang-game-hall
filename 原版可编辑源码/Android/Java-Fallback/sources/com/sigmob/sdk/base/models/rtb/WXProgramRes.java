package com.sigmob.sdk.base.models.rtb;

public final class WXProgramRes extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.WXProgramRes, com.sigmob.sdk.base.models.rtb.WXProgramRes.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.WXProgramRes> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.WXProgramRes> CREATOR = null;
    public static final java.lang.String DEFAULT_WX_APP_ID = "";
    public static final java.lang.String DEFAULT_WX_APP_PATH = "";
    public static final java.lang.String DEFAULT_WX_APP_USERNAME = "";
    public static final java.lang.String DEFAULT_WX_UNIVERSAL_LINK = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String wx_app_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String wx_app_path;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String wx_app_username;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String wx_universal_link;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.WXProgramRes, com.sigmob.sdk.base.models.rtb.WXProgramRes.Builder> {
        public java.lang.String wx_app_id;
        public java.lang.String wx_app_path;
        public java.lang.String wx_app_username;
        public java.lang.String wx_universal_link;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.wx_app_id = r0
                r1.wx_universal_link = r0
                r1.wx_app_username = r0
                r1.wx_app_path = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.WXProgramRes build() {
                r7 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes r6 = new com.sigmob.sdk.base.models.rtb.WXProgramRes
                java.lang.String r1 = r7.wx_app_id
                java.lang.String r2 = r7.wx_universal_link
                java.lang.String r3 = r7.wx_app_username
                java.lang.String r4 = r7.wx_app_path
                com.czhj.wire.okio.ByteString r5 = super.buildUnknownFields()
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        public com.sigmob.sdk.base.models.rtb.WXProgramRes.Builder wx_app_id(java.lang.String r1) {
                r0 = this;
                r0.wx_app_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.WXProgramRes.Builder wx_app_path(java.lang.String r1) {
                r0 = this;
                r0.wx_app_path = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.WXProgramRes.Builder wx_app_username(java.lang.String r1) {
                r0 = this;
                r0.wx_app_username = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.WXProgramRes.Builder wx_universal_link(java.lang.String r1) {
                r0 = this;
                r0.wx_universal_link = r1
                return r0
        }
    }

    private static final class ProtoAdapter_WXProgramRes extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.WXProgramRes> {
        public ProtoAdapter_WXProgramRes() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.WXProgramRes> r1 = com.sigmob.sdk.base.models.rtb.WXProgramRes.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.WXProgramRes decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes$Builder r0 = new com.sigmob.sdk.base.models.rtb.WXProgramRes$Builder
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
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.wx_app_path(r3)
                goto L9
            L38:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.wx_app_username(r3)
                goto L9
            L44:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.wx_universal_link(r3)
                goto L9
            L50:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.wx_app_id(r3)
                goto L9
            L5c:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.WXProgramRes r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.WXProgramRes decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.WXProgramRes r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.wx_app_id
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.wx_universal_link
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.wx_app_username
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.wx_app_path
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.WXProgramRes r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes r2 = (com.sigmob.sdk.base.models.rtb.WXProgramRes) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.WXProgramRes r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.wx_app_id
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.wx_universal_link
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.wx_app_username
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.wx_app_path
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.WXProgramRes r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = (com.sigmob.sdk.base.models.rtb.WXProgramRes) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.WXProgramRes redact(com.sigmob.sdk.base.models.rtb.WXProgramRes r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.WXProgramRes redact(com.sigmob.sdk.base.models.rtb.WXProgramRes r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = (com.sigmob.sdk.base.models.rtb.WXProgramRes) r1
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.WXProgramRes$ProtoAdapter_WXProgramRes r0 = new com.sigmob.sdk.base.models.rtb.WXProgramRes$ProtoAdapter_WXProgramRes
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.WXProgramRes.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.WXProgramRes.CREATOR = r0
            return
    }

    public WXProgramRes(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
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

    public WXProgramRes(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.czhj.wire.okio.ByteString r6) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.WXProgramRes> r0 = com.sigmob.sdk.base.models.rtb.WXProgramRes.ADAPTER
            r1.<init>(r0, r6)
            r1.wx_app_id = r2
            r1.wx_universal_link = r3
            r1.wx_app_username = r4
            r1.wx_app_path = r5
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.WXProgramRes
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.WXProgramRes r5 = (com.sigmob.sdk.base.models.rtb.WXProgramRes) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L43
            java.lang.String r1 = r4.wx_app_id
            java.lang.String r3 = r5.wx_app_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.String r1 = r4.wx_universal_link
            java.lang.String r3 = r5.wx_universal_link
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.String r1 = r4.wx_app_username
            java.lang.String r3 = r5.wx_app_username
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.String r1 = r4.wx_app_path
            java.lang.String r5 = r5.wx_app_path
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
            java.lang.String r1 = r3.wx_app_id
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.wx_universal_link
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.wx_app_username
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.wx_app_path
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
            com.sigmob.sdk.base.models.rtb.WXProgramRes$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.WXProgramRes.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.WXProgramRes$Builder r0 = new com.sigmob.sdk.base.models.rtb.WXProgramRes$Builder
            r0.<init>()
            java.lang.String r1 = r2.wx_app_id
            r0.wx_app_id = r1
            java.lang.String r1 = r2.wx_universal_link
            r0.wx_universal_link = r1
            java.lang.String r1 = r2.wx_app_username
            r0.wx_app_username = r1
            java.lang.String r1 = r2.wx_app_path
            r0.wx_app_path = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.wx_app_id
            if (r1 == 0) goto L13
            java.lang.String r1 = ", wx_app_id="
            r0.append(r1)
            java.lang.String r1 = r4.wx_app_id
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.wx_universal_link
            if (r1 == 0) goto L21
            java.lang.String r1 = ", wx_universal_link="
            r0.append(r1)
            java.lang.String r1 = r4.wx_universal_link
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.wx_app_username
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", wx_app_username="
            r0.append(r1)
            java.lang.String r1 = r4.wx_app_username
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.wx_app_path
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", wx_app_path="
            r0.append(r1)
            java.lang.String r1 = r4.wx_app_path
            r0.append(r1)
        L3d:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "WXProgramRes{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
