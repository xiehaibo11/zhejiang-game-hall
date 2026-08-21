package com.sigmob.sdk.base.models.config;

public final class SdkConfigResponse extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.config.SdkConfigResponse, com.sigmob.sdk.base.models.config.SdkConfigResponse.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfigResponse> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.config.SdkConfigResponse> CREATOR = null;
    public static final java.lang.Integer DEFAULT_CODE = null;
    public static final java.lang.String DEFAULT_ERROR_MESSAGE = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer code;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.SdkConfig#ADAPTER", tag = 3)
    public final com.sigmob.sdk.base.models.config.SdkConfig config;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String error_message;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.config.SdkConfigResponse, com.sigmob.sdk.base.models.config.SdkConfigResponse.Builder> {
        public java.lang.Integer code;
        public com.sigmob.sdk.base.models.config.SdkConfig config;
        public java.lang.String error_message;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.SdkConfigResponse.DEFAULT_CODE
                r1.code = r0
                java.lang.String r0 = ""
                r1.error_message = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigResponse build() {
                r5 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse r0 = new com.sigmob.sdk.base.models.config.SdkConfigResponse
                java.lang.Integer r1 = r5.code
                java.lang.String r2 = r5.error_message
                com.sigmob.sdk.base.models.config.SdkConfig r3 = r5.config
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public com.sigmob.sdk.base.models.config.SdkConfigResponse.Builder code(java.lang.Integer r1) {
                r0 = this;
                r0.code = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.SdkConfigResponse.Builder config(com.sigmob.sdk.base.models.config.SdkConfig r1) {
                r0 = this;
                r0.config = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.SdkConfigResponse.Builder error_message(java.lang.String r1) {
                r0 = this;
                r0.error_message = r1
                return r0
        }
    }

    private static final class ProtoAdapter_SdkConfigResponse extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfigResponse> {
        public ProtoAdapter_SdkConfigResponse() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.config.SdkConfigResponse> r1 = com.sigmob.sdk.base.models.config.SdkConfigResponse.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigResponse decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfigResponse$Builder
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
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> r3 = com.sigmob.sdk.base.models.config.SdkConfig.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.SdkConfig r3 = (com.sigmob.sdk.base.models.config.SdkConfig) r3
                r0.config(r3)
                goto L9
            L35:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.error_message(r3)
                goto L9
            L41:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.code(r3)
                goto L9
            L4d:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.config.SdkConfigResponse r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigResponse decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.config.SdkConfigResponse r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.code
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.error_message
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> r0 = com.sigmob.sdk.base.models.config.SdkConfig.ADAPTER
                com.sigmob.sdk.base.models.config.SdkConfig r1 = r5.config
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.config.SdkConfigResponse r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse r2 = (com.sigmob.sdk.base.models.config.SdkConfigResponse) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.config.SdkConfigResponse r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.code
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.error_message
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> r1 = com.sigmob.sdk.base.models.config.SdkConfig.ADAPTER
                com.sigmob.sdk.base.models.config.SdkConfig r2 = r5.config
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.config.SdkConfigResponse r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse r1 = (com.sigmob.sdk.base.models.config.SdkConfigResponse) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.config.SdkConfigResponse redact(com.sigmob.sdk.base.models.config.SdkConfigResponse r3) {
                r2 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.config.SdkConfig r0 = r3.config
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> r0 = com.sigmob.sdk.base.models.config.SdkConfig.ADAPTER
                com.sigmob.sdk.base.models.config.SdkConfig r1 = r3.config
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.SdkConfig r0 = (com.sigmob.sdk.base.models.config.SdkConfig) r0
                r3.config = r0
            L14:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.config.SdkConfigResponse r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigResponse redact(com.sigmob.sdk.base.models.config.SdkConfigResponse r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigResponse r1 = (com.sigmob.sdk.base.models.config.SdkConfigResponse) r1
                com.sigmob.sdk.base.models.config.SdkConfigResponse r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.config.SdkConfigResponse$ProtoAdapter_SdkConfigResponse r0 = new com.sigmob.sdk.base.models.config.SdkConfigResponse$ProtoAdapter_SdkConfigResponse
            r0.<init>()
            com.sigmob.sdk.base.models.config.SdkConfigResponse.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.config.SdkConfigResponse.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.config.SdkConfigResponse.DEFAULT_CODE = r0
            return
    }

    public SdkConfigResponse(java.lang.Integer r2, java.lang.String r3, com.sigmob.sdk.base.models.config.SdkConfig r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public SdkConfigResponse(java.lang.Integer r2, java.lang.String r3, com.sigmob.sdk.base.models.config.SdkConfig r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfigResponse> r0 = com.sigmob.sdk.base.models.config.SdkConfigResponse.ADAPTER
            r1.<init>(r0, r5)
            r1.code = r2
            r1.error_message = r3
            r1.config = r4
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.config.SdkConfigResponse
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.config.SdkConfigResponse r5 = (com.sigmob.sdk.base.models.config.SdkConfigResponse) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.code
            java.lang.Integer r3 = r5.code
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.error_message
            java.lang.String r3 = r5.error_message
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            com.sigmob.sdk.base.models.config.SdkConfig r1 = r4.config
            com.sigmob.sdk.base.models.config.SdkConfig r5 = r5.config
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
            java.lang.Integer r1 = r3.code
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.error_message
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.SdkConfig r1 = r3.config
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
            com.sigmob.sdk.base.models.config.SdkConfigResponse$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.config.SdkConfigResponse.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.config.SdkConfigResponse$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfigResponse$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.code
            r0.code = r1
            java.lang.String r1 = r2.error_message
            r0.error_message = r1
            com.sigmob.sdk.base.models.config.SdkConfig r1 = r2.config
            r0.config = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.code
            if (r1 == 0) goto L13
            java.lang.String r1 = ", code="
            r0.append(r1)
            java.lang.Integer r1 = r4.code
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.error_message
            if (r1 == 0) goto L21
            java.lang.String r1 = ", error_message="
            r0.append(r1)
            java.lang.String r1 = r4.error_message
            r0.append(r1)
        L21:
            com.sigmob.sdk.base.models.config.SdkConfig r1 = r4.config
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", config="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.SdkConfig r1 = r4.config
            r0.append(r1)
        L2f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "SdkConfigResponse{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
