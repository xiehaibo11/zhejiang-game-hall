package com.sigmob.sdk.base.models.config;

public final class AntiFraudLogConfig extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.config.AntiFraudLogConfig, com.sigmob.sdk.base.models.config.AntiFraudLogConfig.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> CREATOR = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 2)
    public final java.util.List<java.lang.String> events;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.MotionConfig#ADAPTER", tag = 1)
    public final com.sigmob.sdk.base.models.config.MotionConfig motion_config;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.config.AntiFraudLogConfig, com.sigmob.sdk.base.models.config.AntiFraudLogConfig.Builder> {
        public java.util.List<java.lang.String> events;
        public com.sigmob.sdk.base.models.config.MotionConfig motion_config;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.events = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig build() {
                r4 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = new com.sigmob.sdk.base.models.config.AntiFraudLogConfig
                com.sigmob.sdk.base.models.config.MotionConfig r1 = r4.motion_config
                java.util.List<java.lang.String> r2 = r4.events
                com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3)
                return r0
        }

        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig.Builder events(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.events = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig.Builder motion_config(com.sigmob.sdk.base.models.config.MotionConfig r1) {
                r0 = this;
                r0.motion_config = r1
                return r0
        }
    }

    private static final class ProtoAdapter_AntiFraudLogConfig extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> {
        public ProtoAdapter_AntiFraudLogConfig() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> r1 = com.sigmob.sdk.base.models.config.AntiFraudLogConfig.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig$Builder r0 = new com.sigmob.sdk.base.models.config.AntiFraudLogConfig$Builder
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
                java.util.List<java.lang.String> r3 = r0.events
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L32:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.MotionConfig> r3 = com.sigmob.sdk.base.models.config.MotionConfig.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.MotionConfig r3 = (com.sigmob.sdk.base.models.config.MotionConfig) r3
                r0.motion_config(r3)
                goto L9
            L3e:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.config.AntiFraudLogConfig r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.MotionConfig> r0 = com.sigmob.sdk.base.models.config.MotionConfig.ADAPTER
                com.sigmob.sdk.base.models.config.MotionConfig r1 = r5.motion_config
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.events
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.config.AntiFraudLogConfig r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r2 = (com.sigmob.sdk.base.models.config.AntiFraudLogConfig) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.config.AntiFraudLogConfig r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.MotionConfig> r0 = com.sigmob.sdk.base.models.config.MotionConfig.ADAPTER
                com.sigmob.sdk.base.models.config.MotionConfig r1 = r5.motion_config
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.events
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = (com.sigmob.sdk.base.models.config.AntiFraudLogConfig) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig redact(com.sigmob.sdk.base.models.config.AntiFraudLogConfig r3) {
                r2 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.config.MotionConfig r0 = r3.motion_config
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.MotionConfig> r0 = com.sigmob.sdk.base.models.config.MotionConfig.ADAPTER
                com.sigmob.sdk.base.models.config.MotionConfig r1 = r3.motion_config
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.MotionConfig r0 = (com.sigmob.sdk.base.models.config.MotionConfig) r0
                r3.motion_config = r0
            L14:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig redact(com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = (com.sigmob.sdk.base.models.config.AntiFraudLogConfig) r1
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig$ProtoAdapter_AntiFraudLogConfig r0 = new com.sigmob.sdk.base.models.config.AntiFraudLogConfig$ProtoAdapter_AntiFraudLogConfig
            r0.<init>()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig.CREATOR = r0
            return
    }

    public AntiFraudLogConfig(com.sigmob.sdk.base.models.config.MotionConfig r2, java.util.List<java.lang.String> r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r0)
            return
    }

    public AntiFraudLogConfig(com.sigmob.sdk.base.models.config.MotionConfig r2, java.util.List<java.lang.String> r3, com.czhj.wire.okio.ByteString r4) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> r0 = com.sigmob.sdk.base.models.config.AntiFraudLogConfig.ADAPTER
            r1.<init>(r0, r4)
            r1.motion_config = r2
            java.lang.String r2 = "events"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r3)
            r1.events = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.config.AntiFraudLogConfig
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r5 = (com.sigmob.sdk.base.models.config.AntiFraudLogConfig) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2f
            com.sigmob.sdk.base.models.config.MotionConfig r1 = r4.motion_config
            com.sigmob.sdk.base.models.config.MotionConfig r3 = r5.motion_config
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L2f
            java.util.List<java.lang.String> r1 = r4.events
            java.util.List<java.lang.String> r5 = r5.events
            boolean r5 = r1.equals(r5)
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
            com.sigmob.sdk.base.models.config.MotionConfig r1 = r2.motion_config
            if (r1 == 0) goto L17
            int r1 = r1.hashCode()
            goto L18
        L17:
            r1 = 0
        L18:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r2.events
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r2.hashCode = r0
        L24:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.config.AntiFraudLogConfig.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig$Builder r0 = new com.sigmob.sdk.base.models.config.AntiFraudLogConfig$Builder
            r0.<init>()
            com.sigmob.sdk.base.models.config.MotionConfig r1 = r3.motion_config
            r0.motion_config = r1
            java.util.List<java.lang.String> r1 = r3.events
            java.lang.String r2 = "events"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.events = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.sigmob.sdk.base.models.config.MotionConfig r1 = r4.motion_config
            if (r1 == 0) goto L13
            java.lang.String r1 = ", motion_config="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.MotionConfig r1 = r4.motion_config
            r0.append(r1)
        L13:
            java.util.List<java.lang.String> r1 = r4.events
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L25
            java.lang.String r1 = ", events="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.events
            r0.append(r1)
        L25:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "AntiFraudLogConfig{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
