package com.sigmob.sdk.base.models.rtb;

public final class SlotAdSetting extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.SlotAdSetting, com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SlotAdSetting> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.SlotAdSetting> CREATOR = null;
    public static final java.lang.Boolean DEFAULT_DISABLE_X_REQUESTED_WITH = null;
    public static final java.lang.Integer DEFAULT_RETRY_COUNT = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 5)
    public final java.lang.Boolean disable_x_requested_with;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.NativeAdSetting#ADAPTER", tag = 3)
    public final com.sigmob.sdk.base.models.rtb.NativeAdSetting native_setting;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 4)
    public final java.lang.Integer retry_count;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.RvAdSetting#ADAPTER", tag = 1)
    public final com.sigmob.sdk.base.models.rtb.RvAdSetting rv_setting;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.SplashAdSetting#ADAPTER", tag = 2)
    public final com.sigmob.sdk.base.models.rtb.SplashAdSetting splash_setting;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.SlotAdSetting, com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder> {
        public java.lang.Boolean disable_x_requested_with;
        public com.sigmob.sdk.base.models.rtb.NativeAdSetting native_setting;
        public java.lang.Integer retry_count;
        public com.sigmob.sdk.base.models.rtb.RvAdSetting rv_setting;
        public com.sigmob.sdk.base.models.rtb.SplashAdSetting splash_setting;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.DEFAULT_RETRY_COUNT
                r1.retry_count = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.DEFAULT_DISABLE_X_REQUESTED_WITH
                r1.disable_x_requested_with = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SlotAdSetting build() {
                r8 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r7 = new com.sigmob.sdk.base.models.rtb.SlotAdSetting
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r8.rv_setting
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r2 = r8.splash_setting
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r3 = r8.native_setting
                java.lang.Integer r4 = r8.retry_count
                java.lang.Boolean r5 = r8.disable_x_requested_with
                com.czhj.wire.okio.ByteString r6 = super.buildUnknownFields()
                r0 = r7
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return r7
        }

        public com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder disable_x_requested_with(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_x_requested_with = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder native_setting(com.sigmob.sdk.base.models.rtb.NativeAdSetting r1) {
                r0 = this;
                r0.native_setting = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder retry_count(java.lang.Integer r1) {
                r0 = this;
                r0.retry_count = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder rv_setting(com.sigmob.sdk.base.models.rtb.RvAdSetting r1) {
                r0 = this;
                r0.rv_setting = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder splash_setting(com.sigmob.sdk.base.models.rtb.SplashAdSetting r1) {
                r0 = this;
                r0.splash_setting = r1
                return r0
        }
    }

    private static final class ProtoAdapter_SlotAdSetting extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SlotAdSetting> {
        public ProtoAdapter_SlotAdSetting() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.SlotAdSetting> r1 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SlotAdSetting decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.SlotAdSetting$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L6b
                r4 = 1
                if (r3 == r4) goto L5f
                r4 = 2
                if (r3 == r4) goto L53
                r4 = 3
                if (r3 == r4) goto L47
                r4 = 4
                if (r3 == r4) goto L3b
                r4 = 5
                if (r3 == r4) goto L2f
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.disable_x_requested_with(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.retry_count(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.NativeAdSetting> r3 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r3 = (com.sigmob.sdk.base.models.rtb.NativeAdSetting) r3
                r0.native_setting(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r3 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r3 = (com.sigmob.sdk.base.models.rtb.SplashAdSetting) r3
                r0.splash_setting(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> r3 = com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.RvAdSetting r3 = (com.sigmob.sdk.base.models.rtb.RvAdSetting) r3
                r0.rv_setting(r3)
                goto L9
            L6b:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SlotAdSetting decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.SlotAdSetting r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r5.rv_setting
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r5.splash_setting
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.NativeAdSetting> r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r5.native_setting
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.retry_count
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_x_requested_with
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.SlotAdSetting r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r2 = (com.sigmob.sdk.base.models.rtb.SlotAdSetting) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.SlotAdSetting r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r5.rv_setting
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r1 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r2 = r5.splash_setting
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.NativeAdSetting> r1 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r2 = r5.native_setting
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.retry_count
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_x_requested_with
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.SlotAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = (com.sigmob.sdk.base.models.rtb.SlotAdSetting) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.SlotAdSetting redact(com.sigmob.sdk.base.models.rtb.SlotAdSetting r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r3.rv_setting
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r3.rv_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = (com.sigmob.sdk.base.models.rtb.RvAdSetting) r0
                r3.rv_setting = r0
            L14:
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r0 = r3.splash_setting
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r3.splash_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r0 = (com.sigmob.sdk.base.models.rtb.SplashAdSetting) r0
                r3.splash_setting = r0
            L24:
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r0 = r3.native_setting
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.NativeAdSetting> r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r3.native_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r0 = (com.sigmob.sdk.base.models.rtb.NativeAdSetting) r0
                r3.native_setting = r0
            L34:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SlotAdSetting redact(com.sigmob.sdk.base.models.rtb.SlotAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = (com.sigmob.sdk.base.models.rtb.SlotAdSetting) r1
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.SlotAdSetting$ProtoAdapter_SlotAdSetting r0 = new com.sigmob.sdk.base.models.rtb.SlotAdSetting$ProtoAdapter_SlotAdSetting
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.SlotAdSetting.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.SlotAdSetting.CREATOR = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.SlotAdSetting.DEFAULT_RETRY_COUNT = r1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.SlotAdSetting.DEFAULT_DISABLE_X_REQUESTED_WITH = r0
            return
    }

    public SlotAdSetting(com.sigmob.sdk.base.models.rtb.RvAdSetting r8, com.sigmob.sdk.base.models.rtb.SplashAdSetting r9, com.sigmob.sdk.base.models.rtb.NativeAdSetting r10, java.lang.Integer r11, java.lang.Boolean r12) {
            r7 = this;
            com.czhj.wire.okio.ByteString r6 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public SlotAdSetting(com.sigmob.sdk.base.models.rtb.RvAdSetting r2, com.sigmob.sdk.base.models.rtb.SplashAdSetting r3, com.sigmob.sdk.base.models.rtb.NativeAdSetting r4, java.lang.Integer r5, java.lang.Boolean r6, com.czhj.wire.okio.ByteString r7) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SlotAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.ADAPTER
            r1.<init>(r0, r7)
            r1.rv_setting = r2
            r1.splash_setting = r3
            r1.native_setting = r4
            r1.retry_count = r5
            r1.disable_x_requested_with = r6
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.SlotAdSetting
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r5 = (com.sigmob.sdk.base.models.rtb.SlotAdSetting) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L4d
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r4.rv_setting
            com.sigmob.sdk.base.models.rtb.RvAdSetting r3 = r5.rv_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r4.splash_setting
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r3 = r5.splash_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r4.native_setting
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r3 = r5.native_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.lang.Integer r1 = r4.retry_count
            java.lang.Integer r3 = r5.retry_count
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.lang.Boolean r1 = r4.disable_x_requested_with
            java.lang.Boolean r5 = r5.disable_x_requested_with
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L4d
            goto L4e
        L4d:
            r0 = r2
        L4e:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L4e
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r3.rv_setting
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r3.splash_setting
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r3.native_setting
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.retry_count
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_x_requested_with
            if (r1 == 0) goto L4b
            int r2 = r1.hashCode()
        L4b:
            int r0 = r0 + r2
            r3.hashCode = r0
        L4e:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.SlotAdSetting.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.SlotAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.SlotAdSetting$Builder
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r2.rv_setting
            r0.rv_setting = r1
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r2.splash_setting
            r0.splash_setting = r1
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r2.native_setting
            r0.native_setting = r1
            java.lang.Integer r1 = r2.retry_count
            r0.retry_count = r1
            java.lang.Boolean r1 = r2.disable_x_requested_with
            r0.disable_x_requested_with = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r4.rv_setting
            if (r1 == 0) goto L13
            java.lang.String r1 = ", rv_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r4.rv_setting
            r0.append(r1)
        L13:
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r4.splash_setting
            if (r1 == 0) goto L21
            java.lang.String r1 = ", splash_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r4.splash_setting
            r0.append(r1)
        L21:
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r4.native_setting
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", native_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r4.native_setting
            r0.append(r1)
        L2f:
            java.lang.Integer r1 = r4.retry_count
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", retry_count="
            r0.append(r1)
            java.lang.Integer r1 = r4.retry_count
            r0.append(r1)
        L3d:
            java.lang.Boolean r1 = r4.disable_x_requested_with
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", disable_x_requested_with="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_x_requested_with
            r0.append(r1)
        L4b:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "SlotAdSetting{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
