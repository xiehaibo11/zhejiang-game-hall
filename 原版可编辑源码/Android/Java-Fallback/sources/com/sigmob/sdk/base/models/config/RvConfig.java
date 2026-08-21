package com.sigmob.sdk.base.models.config;

public final class RvConfig extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.config.RvConfig, com.sigmob.sdk.base.models.config.RvConfig.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.RvConfig> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.config.RvConfig> CREATOR = null;
    public static final java.lang.Integer DEFAULT_AD_LOAD_TIMEOUT = null;
    public static final java.lang.Integer DEFAULT_CACHETOP = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer ad_load_timeout;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer cacheTop;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.DialogSetting#ADAPTER", tag = 3)
    public final com.sigmob.sdk.base.models.config.DialogSetting close_dialog_setting;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.config.RvConfig, com.sigmob.sdk.base.models.config.RvConfig.Builder> {
        public java.lang.Integer ad_load_timeout;
        public java.lang.Integer cacheTop;
        public com.sigmob.sdk.base.models.config.DialogSetting close_dialog_setting;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.RvConfig.DEFAULT_CACHETOP
                r1.cacheTop = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.RvConfig.DEFAULT_AD_LOAD_TIMEOUT
                r1.ad_load_timeout = r0
                return
        }

        public com.sigmob.sdk.base.models.config.RvConfig.Builder ad_load_timeout(java.lang.Integer r1) {
                r0 = this;
                r0.ad_load_timeout = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.config.RvConfig r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.config.RvConfig build() {
                r5 = this;
                com.sigmob.sdk.base.models.config.RvConfig r0 = new com.sigmob.sdk.base.models.config.RvConfig
                java.lang.Integer r1 = r5.cacheTop
                java.lang.Integer r2 = r5.ad_load_timeout
                com.sigmob.sdk.base.models.config.DialogSetting r3 = r5.close_dialog_setting
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public com.sigmob.sdk.base.models.config.RvConfig.Builder cacheTop(java.lang.Integer r1) {
                r0 = this;
                r0.cacheTop = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.RvConfig.Builder close_dialog_setting(com.sigmob.sdk.base.models.config.DialogSetting r1) {
                r0 = this;
                r0.close_dialog_setting = r1
                return r0
        }
    }

    private static final class ProtoAdapter_RvConfig extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.RvConfig> {
        public ProtoAdapter_RvConfig() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.config.RvConfig> r1 = com.sigmob.sdk.base.models.config.RvConfig.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.config.RvConfig decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.config.RvConfig$Builder r0 = new com.sigmob.sdk.base.models.config.RvConfig$Builder
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
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.DialogSetting> r3 = com.sigmob.sdk.base.models.config.DialogSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.DialogSetting r3 = (com.sigmob.sdk.base.models.config.DialogSetting) r3
                r0.close_dialog_setting(r3)
                goto L9
            L35:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.ad_load_timeout(r3)
                goto L9
            L41:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.cacheTop(r3)
                goto L9
            L4d:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.config.RvConfig r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.config.RvConfig decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.RvConfig r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.config.RvConfig r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.cacheTop
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.ad_load_timeout
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.DialogSetting> r0 = com.sigmob.sdk.base.models.config.DialogSetting.ADAPTER
                com.sigmob.sdk.base.models.config.DialogSetting r1 = r5.close_dialog_setting
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.config.RvConfig r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.RvConfig r2 = (com.sigmob.sdk.base.models.config.RvConfig) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.config.RvConfig r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.cacheTop
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.ad_load_timeout
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.DialogSetting> r1 = com.sigmob.sdk.base.models.config.DialogSetting.ADAPTER
                com.sigmob.sdk.base.models.config.DialogSetting r2 = r5.close_dialog_setting
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.config.RvConfig r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.RvConfig r1 = (com.sigmob.sdk.base.models.config.RvConfig) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.config.RvConfig redact(com.sigmob.sdk.base.models.config.RvConfig r3) {
                r2 = this;
                com.sigmob.sdk.base.models.config.RvConfig$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.config.DialogSetting r0 = r3.close_dialog_setting
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.DialogSetting> r0 = com.sigmob.sdk.base.models.config.DialogSetting.ADAPTER
                com.sigmob.sdk.base.models.config.DialogSetting r1 = r3.close_dialog_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.DialogSetting r0 = (com.sigmob.sdk.base.models.config.DialogSetting) r0
                r3.close_dialog_setting = r0
            L14:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.config.RvConfig r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.config.RvConfig redact(com.sigmob.sdk.base.models.config.RvConfig r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.RvConfig r1 = (com.sigmob.sdk.base.models.config.RvConfig) r1
                com.sigmob.sdk.base.models.config.RvConfig r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.config.RvConfig$ProtoAdapter_RvConfig r0 = new com.sigmob.sdk.base.models.config.RvConfig$ProtoAdapter_RvConfig
            r0.<init>()
            com.sigmob.sdk.base.models.config.RvConfig.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.config.RvConfig.CREATOR = r0
            r0 = 5
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.config.RvConfig.DEFAULT_CACHETOP = r0
            r0 = 45
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.config.RvConfig.DEFAULT_AD_LOAD_TIMEOUT = r0
            return
    }

    public RvConfig(java.lang.Integer r2, java.lang.Integer r3, com.sigmob.sdk.base.models.config.DialogSetting r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public RvConfig(java.lang.Integer r2, java.lang.Integer r3, com.sigmob.sdk.base.models.config.DialogSetting r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.RvConfig> r0 = com.sigmob.sdk.base.models.config.RvConfig.ADAPTER
            r1.<init>(r0, r5)
            r1.cacheTop = r2
            r1.ad_load_timeout = r3
            r1.close_dialog_setting = r4
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.config.RvConfig
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.config.RvConfig r5 = (com.sigmob.sdk.base.models.config.RvConfig) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.cacheTop
            java.lang.Integer r3 = r5.cacheTop
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.ad_load_timeout
            java.lang.Integer r3 = r5.ad_load_timeout
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            com.sigmob.sdk.base.models.config.DialogSetting r1 = r4.close_dialog_setting
            com.sigmob.sdk.base.models.config.DialogSetting r5 = r5.close_dialog_setting
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
            java.lang.Integer r1 = r3.cacheTop
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.ad_load_timeout
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.DialogSetting r1 = r3.close_dialog_setting
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
            com.sigmob.sdk.base.models.config.RvConfig$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.config.RvConfig.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.config.RvConfig$Builder r0 = new com.sigmob.sdk.base.models.config.RvConfig$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.cacheTop
            r0.cacheTop = r1
            java.lang.Integer r1 = r2.ad_load_timeout
            r0.ad_load_timeout = r1
            com.sigmob.sdk.base.models.config.DialogSetting r1 = r2.close_dialog_setting
            r0.close_dialog_setting = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.cacheTop
            if (r1 == 0) goto L13
            java.lang.String r1 = ", cacheTop="
            r0.append(r1)
            java.lang.Integer r1 = r4.cacheTop
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.ad_load_timeout
            if (r1 == 0) goto L21
            java.lang.String r1 = ", ad_load_timeout="
            r0.append(r1)
            java.lang.Integer r1 = r4.ad_load_timeout
            r0.append(r1)
        L21:
            com.sigmob.sdk.base.models.config.DialogSetting r1 = r4.close_dialog_setting
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", close_dialog_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.DialogSetting r1 = r4.close_dialog_setting
            r0.append(r1)
        L2f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "RvConfig{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
