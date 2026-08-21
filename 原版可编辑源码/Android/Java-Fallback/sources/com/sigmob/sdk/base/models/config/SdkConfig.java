package com.sigmob.sdk.base.models.config;

public final class SdkConfig extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.config.SdkConfig, com.sigmob.sdk.base.models.config.SdkConfig.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.config.SdkConfig> CREATOR = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.Android#ADAPTER", tag = 3)
    public final com.sigmob.sdk.base.models.config.Android android_config;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.Common#ADAPTER", tag = 1)
    public final com.sigmob.sdk.base.models.config.Common common_config;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.config.SdkConfig, com.sigmob.sdk.base.models.config.SdkConfig.Builder> {
        public com.sigmob.sdk.base.models.config.Android android_config;
        public com.sigmob.sdk.base.models.config.Common common_config;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.sigmob.sdk.base.models.config.SdkConfig.Builder android_config(com.sigmob.sdk.base.models.config.Android r1) {
                r0 = this;
                r0.android_config = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.config.SdkConfig r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfig build() {
                r4 = this;
                com.sigmob.sdk.base.models.config.SdkConfig r0 = new com.sigmob.sdk.base.models.config.SdkConfig
                com.sigmob.sdk.base.models.config.Common r1 = r4.common_config
                com.sigmob.sdk.base.models.config.Android r2 = r4.android_config
                com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3)
                return r0
        }

        public com.sigmob.sdk.base.models.config.SdkConfig.Builder common_config(com.sigmob.sdk.base.models.config.Common r1) {
                r0 = this;
                r0.common_config = r1
                return r0
        }
    }

    private static final class ProtoAdapter_SdkConfig extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> {
        public ProtoAdapter_SdkConfig() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.config.SdkConfig> r1 = com.sigmob.sdk.base.models.config.SdkConfig.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfig decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.config.SdkConfig$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfig$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L3e
                r4 = 1
                if (r3 == r4) goto L32
                r4 = 3
                if (r3 == r4) goto L26
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L26:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Android> r3 = com.sigmob.sdk.base.models.config.Android.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.Android r3 = (com.sigmob.sdk.base.models.config.Android) r3
                r0.android_config(r3)
                goto L9
            L32:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Common> r3 = com.sigmob.sdk.base.models.config.Common.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.Common r3 = (com.sigmob.sdk.base.models.config.Common) r3
                r0.common_config(r3)
                goto L9
            L3e:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.config.SdkConfig r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfig decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfig r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.config.SdkConfig r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Common> r0 = com.sigmob.sdk.base.models.config.Common.ADAPTER
                com.sigmob.sdk.base.models.config.Common r1 = r5.common_config
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Android> r0 = com.sigmob.sdk.base.models.config.Android.ADAPTER
                com.sigmob.sdk.base.models.config.Android r1 = r5.android_config
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.config.SdkConfig r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfig r2 = (com.sigmob.sdk.base.models.config.SdkConfig) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.config.SdkConfig r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Common> r0 = com.sigmob.sdk.base.models.config.Common.ADAPTER
                com.sigmob.sdk.base.models.config.Common r1 = r5.common_config
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Android> r1 = com.sigmob.sdk.base.models.config.Android.ADAPTER
                com.sigmob.sdk.base.models.config.Android r2 = r5.android_config
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.config.SdkConfig r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfig r1 = (com.sigmob.sdk.base.models.config.SdkConfig) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.config.SdkConfig redact(com.sigmob.sdk.base.models.config.SdkConfig r3) {
                r2 = this;
                com.sigmob.sdk.base.models.config.SdkConfig$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.config.Common r0 = r3.common_config
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Common> r0 = com.sigmob.sdk.base.models.config.Common.ADAPTER
                com.sigmob.sdk.base.models.config.Common r1 = r3.common_config
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.Common r0 = (com.sigmob.sdk.base.models.config.Common) r0
                r3.common_config = r0
            L14:
                com.sigmob.sdk.base.models.config.Android r0 = r3.android_config
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Android> r0 = com.sigmob.sdk.base.models.config.Android.ADAPTER
                com.sigmob.sdk.base.models.config.Android r1 = r3.android_config
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.Android r0 = (com.sigmob.sdk.base.models.config.Android) r0
                r3.android_config = r0
            L24:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.config.SdkConfig r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfig redact(com.sigmob.sdk.base.models.config.SdkConfig r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfig r1 = (com.sigmob.sdk.base.models.config.SdkConfig) r1
                com.sigmob.sdk.base.models.config.SdkConfig r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.config.SdkConfig$ProtoAdapter_SdkConfig r0 = new com.sigmob.sdk.base.models.config.SdkConfig$ProtoAdapter_SdkConfig
            r0.<init>()
            com.sigmob.sdk.base.models.config.SdkConfig.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.config.SdkConfig.CREATOR = r0
            return
    }

    public SdkConfig(com.sigmob.sdk.base.models.config.Common r2, com.sigmob.sdk.base.models.config.Android r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r0)
            return
    }

    public SdkConfig(com.sigmob.sdk.base.models.config.Common r2, com.sigmob.sdk.base.models.config.Android r3, com.czhj.wire.okio.ByteString r4) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> r0 = com.sigmob.sdk.base.models.config.SdkConfig.ADAPTER
            r1.<init>(r0, r4)
            r1.common_config = r2
            r1.android_config = r3
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.config.SdkConfig
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.config.SdkConfig r5 = (com.sigmob.sdk.base.models.config.SdkConfig) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2f
            com.sigmob.sdk.base.models.config.Common r1 = r4.common_config
            com.sigmob.sdk.base.models.config.Common r3 = r5.common_config
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L2f
            com.sigmob.sdk.base.models.config.Android r1 = r4.android_config
            com.sigmob.sdk.base.models.config.Android r5 = r5.android_config
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L2f
            goto L30
        L2f:
            r0 = r2
        L30:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L27
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.Common r1 = r3.common_config
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.Android r1 = r3.android_config
            if (r1 == 0) goto L24
            int r2 = r1.hashCode()
        L24:
            int r0 = r0 + r2
            r3.hashCode = r0
        L27:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.config.SdkConfig$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.config.SdkConfig.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.config.SdkConfig$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfig$Builder
            r0.<init>()
            com.sigmob.sdk.base.models.config.Common r1 = r2.common_config
            r0.common_config = r1
            com.sigmob.sdk.base.models.config.Android r1 = r2.android_config
            r0.android_config = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.sigmob.sdk.base.models.config.Common r1 = r4.common_config
            if (r1 == 0) goto L13
            java.lang.String r1 = ", common_config="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.Common r1 = r4.common_config
            r0.append(r1)
        L13:
            com.sigmob.sdk.base.models.config.Android r1 = r4.android_config
            if (r1 == 0) goto L21
            java.lang.String r1 = ", android_config="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.Android r1 = r4.android_config
            r0.append(r1)
        L21:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "SdkConfig{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
