package com.czhj.sdk.common.models;

public final class WXProgramReq extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.WXProgramReq, com.czhj.sdk.common.models.WXProgramReq.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.WXProgramReq> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.WXProgramReq> CREATOR = null;
    public static final java.lang.String DEFAULT_OPENSDK_VER = "";
    public static final java.lang.Integer DEFAULT_WX_API_VER = null;
    public static final java.lang.Boolean DEFAULT_WX_INSTALLED = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String opensdk_ver;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 1)
    public final java.lang.Integer wx_api_ver;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 3)
    public final java.lang.Boolean wx_installed;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.WXProgramReq, com.czhj.sdk.common.models.WXProgramReq.Builder> {
        public java.lang.String opensdk_ver;
        public java.lang.Integer wx_api_ver;
        public java.lang.Boolean wx_installed;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.czhj.sdk.common.models.WXProgramReq.DEFAULT_WX_API_VER
                r1.wx_api_ver = r0
                java.lang.String r0 = ""
                r1.opensdk_ver = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.WXProgramReq.DEFAULT_WX_INSTALLED
                r1.wx_installed = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.WXProgramReq build() {
                r5 = this;
                com.czhj.sdk.common.models.WXProgramReq r0 = new com.czhj.sdk.common.models.WXProgramReq
                java.lang.Integer r1 = r5.wx_api_ver
                java.lang.String r2 = r5.opensdk_ver
                java.lang.Boolean r3 = r5.wx_installed
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.WXProgramReq r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.WXProgramReq.Builder opensdk_ver(java.lang.String r1) {
                r0 = this;
                r0.opensdk_ver = r1
                return r0
        }

        public com.czhj.sdk.common.models.WXProgramReq.Builder wx_api_ver(java.lang.Integer r1) {
                r0 = this;
                r0.wx_api_ver = r1
                return r0
        }

        public com.czhj.sdk.common.models.WXProgramReq.Builder wx_installed(java.lang.Boolean r1) {
                r0 = this;
                r0.wx_installed = r1
                return r0
        }
    }

    private static final class ProtoAdapter_WXProgramReq extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.WXProgramReq> {
        public ProtoAdapter_WXProgramReq() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.WXProgramReq> r1 = com.czhj.sdk.common.models.WXProgramReq.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.WXProgramReq decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.WXProgramReq$Builder r0 = new com.czhj.sdk.common.models.WXProgramReq$Builder
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
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.wx_installed(r3)
                goto L9
            L35:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.opensdk_ver(r3)
                goto L9
            L41:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.wx_api_ver(r3)
                goto L9
            L4d:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.WXProgramReq r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.WXProgramReq decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.WXProgramReq r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.WXProgramReq r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.wx_api_ver
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.opensdk_ver
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.wx_installed
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.WXProgramReq r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.WXProgramReq r2 = (com.czhj.sdk.common.models.WXProgramReq) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.WXProgramReq r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.wx_api_ver
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.opensdk_ver
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.wx_installed
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.WXProgramReq r1) {
                r0 = this;
                com.czhj.sdk.common.models.WXProgramReq r1 = (com.czhj.sdk.common.models.WXProgramReq) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.WXProgramReq redact(com.czhj.sdk.common.models.WXProgramReq r1) {
                r0 = this;
                com.czhj.sdk.common.models.WXProgramReq$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.WXProgramReq r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.WXProgramReq redact(com.czhj.sdk.common.models.WXProgramReq r1) {
                r0 = this;
                com.czhj.sdk.common.models.WXProgramReq r1 = (com.czhj.sdk.common.models.WXProgramReq) r1
                com.czhj.sdk.common.models.WXProgramReq r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.WXProgramReq$ProtoAdapter_WXProgramReq r0 = new com.czhj.sdk.common.models.WXProgramReq$ProtoAdapter_WXProgramReq
            r0.<init>()
            com.czhj.sdk.common.models.WXProgramReq.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.WXProgramReq.CREATOR = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.WXProgramReq.DEFAULT_WX_API_VER = r1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.sdk.common.models.WXProgramReq.DEFAULT_WX_INSTALLED = r0
            return
    }

    public WXProgramReq(java.lang.Integer r2, java.lang.String r3, java.lang.Boolean r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public WXProgramReq(java.lang.Integer r2, java.lang.String r3, java.lang.Boolean r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.WXProgramReq> r0 = com.czhj.sdk.common.models.WXProgramReq.ADAPTER
            r1.<init>(r0, r5)
            r1.wx_api_ver = r2
            r1.opensdk_ver = r3
            r1.wx_installed = r4
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.WXProgramReq
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.WXProgramReq r5 = (com.czhj.sdk.common.models.WXProgramReq) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.wx_api_ver
            java.lang.Integer r3 = r5.wx_api_ver
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.opensdk_ver
            java.lang.String r3 = r5.opensdk_ver
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.Boolean r1 = r4.wx_installed
            java.lang.Boolean r5 = r5.wx_installed
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
            java.lang.Integer r1 = r3.wx_api_ver
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.opensdk_ver
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.wx_installed
            if (r1 == 0) goto L31
            int r2 = r1.hashCode()
        L31:
            int r0 = r0 + r2
            r3.hashCode = r0
        L34:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.WXProgramReq.Builder newBuilder() {
            r2 = this;
            com.czhj.sdk.common.models.WXProgramReq$Builder r0 = new com.czhj.sdk.common.models.WXProgramReq$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.wx_api_ver
            r0.wx_api_ver = r1
            java.lang.String r1 = r2.opensdk_ver
            r0.opensdk_ver = r1
            java.lang.Boolean r1 = r2.wx_installed
            r0.wx_installed = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.WXProgramReq$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.wx_api_ver
            if (r1 == 0) goto L13
            java.lang.String r1 = ", wx_api_ver="
            r0.append(r1)
            java.lang.Integer r1 = r4.wx_api_ver
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.opensdk_ver
            if (r1 == 0) goto L21
            java.lang.String r1 = ", opensdk_ver="
            r0.append(r1)
            java.lang.String r1 = r4.opensdk_ver
            r0.append(r1)
        L21:
            java.lang.Boolean r1 = r4.wx_installed
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", wx_installed="
            r0.append(r1)
            java.lang.Boolean r1 = r4.wx_installed
            r0.append(r1)
        L2f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "WXProgramReq{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
