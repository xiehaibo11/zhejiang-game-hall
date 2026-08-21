package com.sigmob.sdk.base.models.rtb;

public final class AdSetting extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.AdSetting, com.sigmob.sdk.base.models.rtb.AdSetting.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdSetting> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.AdSetting> CREATOR = null;
    public static final java.lang.Boolean DEFAULT_DISABLE_DOWNLOAD_LISTENER = null;
    public static final java.lang.Boolean DEFAULT_IN_APP = null;
    public static final java.lang.Integer DEFAULT_RETRY_COUNT = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 7)
    public final java.lang.Boolean disable_download_listener;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 5)
    public final java.lang.Boolean in_app;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 3)
    public final java.lang.Integer retry_count;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.RvAdSetting#ADAPTER", tag = 1)
    public final com.sigmob.sdk.base.models.rtb.RvAdSetting rv_setting;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 8)
    public final java.util.List<java.lang.String> scheme_white_list;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting#ADAPTER", tag = 4)
    public final com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting single_native_setting;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.SplashAdSetting#ADAPTER", tag = 2)
    public final com.sigmob.sdk.base.models.rtb.SplashAdSetting splash_setting;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.AdSetting, com.sigmob.sdk.base.models.rtb.AdSetting.Builder> {
        public java.lang.Boolean disable_download_listener;
        public java.lang.Boolean in_app;
        public java.lang.Integer retry_count;
        public com.sigmob.sdk.base.models.rtb.RvAdSetting rv_setting;
        public java.util.List<java.lang.String> scheme_white_list;
        public com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting single_native_setting;
        public com.sigmob.sdk.base.models.rtb.SplashAdSetting splash_setting;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.AdSetting.DEFAULT_RETRY_COUNT
                r1.retry_count = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.AdSetting.DEFAULT_IN_APP
                r1.in_app = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.AdSetting.DEFAULT_DISABLE_DOWNLOAD_LISTENER
                r1.disable_download_listener = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.scheme_white_list = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdSetting build() {
                r10 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting r9 = new com.sigmob.sdk.base.models.rtb.AdSetting
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r10.rv_setting
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r2 = r10.splash_setting
                java.lang.Integer r3 = r10.retry_count
                com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r4 = r10.single_native_setting
                java.lang.Boolean r5 = r10.in_app
                java.lang.Boolean r6 = r10.disable_download_listener
                java.util.List<java.lang.String> r7 = r10.scheme_white_list
                com.czhj.wire.okio.ByteString r8 = super.buildUnknownFields()
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r9
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting.Builder disable_download_listener(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_download_listener = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting.Builder in_app(java.lang.Boolean r1) {
                r0 = this;
                r0.in_app = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting.Builder retry_count(java.lang.Integer r1) {
                r0 = this;
                r0.retry_count = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting.Builder rv_setting(com.sigmob.sdk.base.models.rtb.RvAdSetting r1) {
                r0 = this;
                r0.rv_setting = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting.Builder scheme_white_list(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.scheme_white_list = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting.Builder single_native_setting(com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1) {
                r0 = this;
                r0.single_native_setting = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting.Builder splash_setting(com.sigmob.sdk.base.models.rtb.SplashAdSetting r1) {
                r0 = this;
                r0.splash_setting = r1
                return r0
        }
    }

    private static final class ProtoAdapter_AdSetting extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdSetting> {
        public ProtoAdapter_AdSetting() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.AdSetting> r1 = com.sigmob.sdk.base.models.rtb.AdSetting.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdSetting decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.AdSetting$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L77
                switch(r3) {
                    case 1: goto L6b;
                    case 2: goto L5f;
                    case 3: goto L53;
                    case 4: goto L47;
                    case 5: goto L3b;
                    case 6: goto L13;
                    case 7: goto L2f;
                    case 8: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                java.util.List<java.lang.String> r3 = r0.scheme_white_list
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.disable_download_listener(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.in_app(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting> r3 = com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r3 = (com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting) r3
                r0.single_native_setting(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.retry_count(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r3 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r3 = (com.sigmob.sdk.base.models.rtb.SplashAdSetting) r3
                r0.splash_setting(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> r3 = com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.RvAdSetting r3 = (com.sigmob.sdk.base.models.rtb.RvAdSetting) r3
                r0.rv_setting(r3)
                goto L9
            L77:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.AdSetting r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdSetting decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.AdSetting r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r5.rv_setting
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r5.splash_setting
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.retry_count
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1 = r5.single_native_setting
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.in_app
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_download_listener
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.scheme_white_list
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.AdSetting r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting r2 = (com.sigmob.sdk.base.models.rtb.AdSetting) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.AdSetting r5) {
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
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.retry_count
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting> r1 = com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r2 = r5.single_native_setting
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.in_app
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_download_listener
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.scheme_white_list
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.AdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting r1 = (com.sigmob.sdk.base.models.rtb.AdSetting) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.AdSetting redact(com.sigmob.sdk.base.models.rtb.AdSetting r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting$Builder r3 = r3.newBuilder()
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
                com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r0 = r3.single_native_setting
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1 = r3.single_native_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r0 = (com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting) r0
                r3.single_native_setting = r0
            L34:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.AdSetting r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.AdSetting redact(com.sigmob.sdk.base.models.rtb.AdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.AdSetting r1 = (com.sigmob.sdk.base.models.rtb.AdSetting) r1
                com.sigmob.sdk.base.models.rtb.AdSetting r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.AdSetting$ProtoAdapter_AdSetting r0 = new com.sigmob.sdk.base.models.rtb.AdSetting$ProtoAdapter_AdSetting
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.AdSetting.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.AdSetting.CREATOR = r0
            r0 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.AdSetting.DEFAULT_RETRY_COUNT = r0
            com.sigmob.sdk.base.models.rtb.AdSetting.DEFAULT_IN_APP = r1
            com.sigmob.sdk.base.models.rtb.AdSetting.DEFAULT_DISABLE_DOWNLOAD_LISTENER = r1
            return
    }

    public AdSetting(com.sigmob.sdk.base.models.rtb.RvAdSetting r10, com.sigmob.sdk.base.models.rtb.SplashAdSetting r11, java.lang.Integer r12, com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r13, java.lang.Boolean r14, java.lang.Boolean r15, java.util.List<java.lang.String> r16) {
            r9 = this;
            com.czhj.wire.okio.ByteString r8 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public AdSetting(com.sigmob.sdk.base.models.rtb.RvAdSetting r2, com.sigmob.sdk.base.models.rtb.SplashAdSetting r3, java.lang.Integer r4, com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r5, java.lang.Boolean r6, java.lang.Boolean r7, java.util.List<java.lang.String> r8, com.czhj.wire.okio.ByteString r9) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdSetting> r0 = com.sigmob.sdk.base.models.rtb.AdSetting.ADAPTER
            r1.<init>(r0, r9)
            r1.rv_setting = r2
            r1.splash_setting = r3
            r1.retry_count = r4
            r1.single_native_setting = r5
            r1.in_app = r6
            r1.disable_download_listener = r7
            java.lang.String r2 = "scheme_white_list"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r8)
            r1.scheme_white_list = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.AdSetting
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.AdSetting r5 = (com.sigmob.sdk.base.models.rtb.AdSetting) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L61
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r4.rv_setting
            com.sigmob.sdk.base.models.rtb.RvAdSetting r3 = r5.rv_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r4.splash_setting
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r3 = r5.splash_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Integer r1 = r4.retry_count
            java.lang.Integer r3 = r5.retry_count
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1 = r4.single_native_setting
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r3 = r5.single_native_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.in_app
            java.lang.Boolean r3 = r5.in_app
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.disable_download_listener
            java.lang.Boolean r3 = r5.disable_download_listener
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.util.List<java.lang.String> r1 = r4.scheme_white_list
            java.util.List<java.lang.String> r5 = r5.scheme_white_list
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L61
            goto L62
        L61:
            r0 = r2
        L62:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L64
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
            java.lang.Integer r1 = r3.retry_count
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1 = r3.single_native_setting
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.in_app
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_download_listener
            if (r1 == 0) goto L58
            int r2 = r1.hashCode()
        L58:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.scheme_white_list
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        L64:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.AdSetting$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.AdSetting.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.AdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.AdSetting$Builder
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r3.rv_setting
            r0.rv_setting = r1
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r3.splash_setting
            r0.splash_setting = r1
            java.lang.Integer r1 = r3.retry_count
            r0.retry_count = r1
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1 = r3.single_native_setting
            r0.single_native_setting = r1
            java.lang.Boolean r1 = r3.in_app
            r0.in_app = r1
            java.lang.Boolean r1 = r3.disable_download_listener
            r0.disable_download_listener = r1
            java.util.List<java.lang.String> r1 = r3.scheme_white_list
            java.lang.String r2 = "scheme_white_list"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.scheme_white_list = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
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
            java.lang.Integer r1 = r4.retry_count
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", retry_count="
            r0.append(r1)
            java.lang.Integer r1 = r4.retry_count
            r0.append(r1)
        L2f:
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1 = r4.single_native_setting
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", single_native_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r1 = r4.single_native_setting
            r0.append(r1)
        L3d:
            java.lang.Boolean r1 = r4.in_app
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", in_app="
            r0.append(r1)
            java.lang.Boolean r1 = r4.in_app
            r0.append(r1)
        L4b:
            java.lang.Boolean r1 = r4.disable_download_listener
            if (r1 == 0) goto L59
            java.lang.String r1 = ", disable_download_listener="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_download_listener
            r0.append(r1)
        L59:
            java.util.List<java.lang.String> r1 = r4.scheme_white_list
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L6b
            java.lang.String r1 = ", scheme_white_list="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.scheme_white_list
            r0.append(r1)
        L6b:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "AdSetting{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
