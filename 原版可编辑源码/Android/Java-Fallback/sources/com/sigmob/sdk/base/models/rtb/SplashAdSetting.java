package com.sigmob.sdk.base.models.rtb;

public final class SplashAdSetting extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.SplashAdSetting, com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.SplashAdSetting> CREATOR = null;
    public static final java.lang.Integer DEFAULT_AUTO_CLICK_MODE = null;
    public static final java.lang.Integer DEFAULT_AUTO_CLICK_TIME_RATIO = null;
    public static final java.lang.Boolean DEFAULT_ENABLE_CLOSE_ON_CLICK = null;
    public static final java.lang.Boolean DEFAULT_ENABLE_FULL_CLICK = null;
    public static final java.lang.Boolean DEFAULT_INVISIBLE_AD_LABEL = null;
    public static final java.lang.Integer DEFAULT_SHOW_DURATION = null;
    public static final java.lang.Boolean DEFAULT_USE_FLOATING_BTN = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final java.lang.Integer auto_click_mode;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 4)
    public final java.lang.Integer auto_click_time_ratio;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 2)
    public final java.lang.Boolean enable_close_on_click;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 5)
    public final java.lang.Boolean enable_full_click;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 6)
    public final java.lang.Boolean invisible_ad_label;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 1)
    public final java.lang.Integer show_duration;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 7)
    public final java.lang.Boolean use_floating_btn;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.SplashAdSetting, com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder> {
        public java.lang.Integer auto_click_mode;
        public java.lang.Integer auto_click_time_ratio;
        public java.lang.Boolean enable_close_on_click;
        public java.lang.Boolean enable_full_click;
        public java.lang.Boolean invisible_ad_label;
        public java.lang.Integer show_duration;
        public java.lang.Boolean use_floating_btn;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_SHOW_DURATION
                r1.show_duration = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_ENABLE_CLOSE_ON_CLICK
                r1.enable_close_on_click = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_AUTO_CLICK_MODE
                r1.auto_click_mode = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_AUTO_CLICK_TIME_RATIO
                r1.auto_click_time_ratio = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_ENABLE_FULL_CLICK
                r1.enable_full_click = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_INVISIBLE_AD_LABEL
                r1.invisible_ad_label = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_USE_FLOATING_BTN
                r1.use_floating_btn = r0
                return
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder auto_click_mode(java.lang.Integer r1) {
                r0 = this;
                r0.auto_click_mode = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder auto_click_time_ratio(java.lang.Integer r1) {
                r0 = this;
                r0.auto_click_time_ratio = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SplashAdSetting build() {
                r10 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r9 = new com.sigmob.sdk.base.models.rtb.SplashAdSetting
                java.lang.Integer r1 = r10.show_duration
                java.lang.Boolean r2 = r10.enable_close_on_click
                java.lang.Integer r3 = r10.auto_click_mode
                java.lang.Integer r4 = r10.auto_click_time_ratio
                java.lang.Boolean r5 = r10.enable_full_click
                java.lang.Boolean r6 = r10.invisible_ad_label
                java.lang.Boolean r7 = r10.use_floating_btn
                com.czhj.wire.okio.ByteString r8 = super.buildUnknownFields()
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r9
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder enable_close_on_click(java.lang.Boolean r1) {
                r0 = this;
                r0.enable_close_on_click = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder enable_full_click(java.lang.Boolean r1) {
                r0 = this;
                r0.enable_full_click = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder invisible_ad_label(java.lang.Boolean r1) {
                r0 = this;
                r0.invisible_ad_label = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder show_duration(java.lang.Integer r1) {
                r0 = this;
                r0.show_duration = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder use_floating_btn(java.lang.Boolean r1) {
                r0 = this;
                r0.use_floating_btn = r1
                return r0
        }
    }

    private static final class ProtoAdapter_SplashAdSetting extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> {
        public ProtoAdapter_SplashAdSetting() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r1 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SplashAdSetting decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.SplashAdSetting$Builder
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
                    case 6: goto L2f;
                    case 7: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.use_floating_btn(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.invisible_ad_label(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.enable_full_click(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.auto_click_time_ratio(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.auto_click_mode(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.enable_close_on_click(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.show_duration(r3)
                goto L9
            L77:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SplashAdSetting decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.SplashAdSetting r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.show_duration
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.enable_close_on_click
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.auto_click_mode
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.auto_click_time_ratio
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.enable_full_click
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.invisible_ad_label
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.use_floating_btn
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.SplashAdSetting r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r2 = (com.sigmob.sdk.base.models.rtb.SplashAdSetting) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.SplashAdSetting r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.show_duration
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.enable_close_on_click
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.auto_click_mode
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.auto_click_time_ratio
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.enable_full_click
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.invisible_ad_label
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.use_floating_btn
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.SplashAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = (com.sigmob.sdk.base.models.rtb.SplashAdSetting) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.SplashAdSetting redact(com.sigmob.sdk.base.models.rtb.SplashAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.SplashAdSetting redact(com.sigmob.sdk.base.models.rtb.SplashAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = (com.sigmob.sdk.base.models.rtb.SplashAdSetting) r1
                com.sigmob.sdk.base.models.rtb.SplashAdSetting r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.SplashAdSetting$ProtoAdapter_SplashAdSetting r0 = new com.sigmob.sdk.base.models.rtb.SplashAdSetting$ProtoAdapter_SplashAdSetting
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.CREATOR = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_SHOW_DURATION = r1
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_ENABLE_CLOSE_ON_CLICK = r0
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_AUTO_CLICK_MODE = r1
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_AUTO_CLICK_TIME_RATIO = r1
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_ENABLE_FULL_CLICK = r0
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_INVISIBLE_AD_LABEL = r0
            com.sigmob.sdk.base.models.rtb.SplashAdSetting.DEFAULT_USE_FLOATING_BTN = r0
            return
    }

    public SplashAdSetting(java.lang.Integer r10, java.lang.Boolean r11, java.lang.Integer r12, java.lang.Integer r13, java.lang.Boolean r14, java.lang.Boolean r15, java.lang.Boolean r16) {
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

    public SplashAdSetting(java.lang.Integer r2, java.lang.Boolean r3, java.lang.Integer r4, java.lang.Integer r5, java.lang.Boolean r6, java.lang.Boolean r7, java.lang.Boolean r8, com.czhj.wire.okio.ByteString r9) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SplashAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SplashAdSetting.ADAPTER
            r1.<init>(r0, r9)
            r1.show_duration = r2
            r1.enable_close_on_click = r3
            r1.auto_click_mode = r4
            r1.auto_click_time_ratio = r5
            r1.enable_full_click = r6
            r1.invisible_ad_label = r7
            r1.use_floating_btn = r8
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.SplashAdSetting
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r5 = (com.sigmob.sdk.base.models.rtb.SplashAdSetting) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L61
            java.lang.Integer r1 = r4.show_duration
            java.lang.Integer r3 = r5.show_duration
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.enable_close_on_click
            java.lang.Boolean r3 = r5.enable_close_on_click
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Integer r1 = r4.auto_click_mode
            java.lang.Integer r3 = r5.auto_click_mode
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Integer r1 = r4.auto_click_time_ratio
            java.lang.Integer r3 = r5.auto_click_time_ratio
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.enable_full_click
            java.lang.Boolean r3 = r5.enable_full_click
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.invisible_ad_label
            java.lang.Boolean r3 = r5.invisible_ad_label
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L61
            java.lang.Boolean r1 = r4.use_floating_btn
            java.lang.Boolean r5 = r5.use_floating_btn
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
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
            if (r0 != 0) goto L68
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.show_duration
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.enable_close_on_click
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.auto_click_mode
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.auto_click_time_ratio
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.enable_full_click
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.invisible_ad_label
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.use_floating_btn
            if (r1 == 0) goto L65
            int r2 = r1.hashCode()
        L65:
            int r0 = r0 + r2
            r3.hashCode = r0
        L68:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.SplashAdSetting$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.SplashAdSetting.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.SplashAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.SplashAdSetting$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.show_duration
            r0.show_duration = r1
            java.lang.Boolean r1 = r2.enable_close_on_click
            r0.enable_close_on_click = r1
            java.lang.Integer r1 = r2.auto_click_mode
            r0.auto_click_mode = r1
            java.lang.Integer r1 = r2.auto_click_time_ratio
            r0.auto_click_time_ratio = r1
            java.lang.Boolean r1 = r2.enable_full_click
            r0.enable_full_click = r1
            java.lang.Boolean r1 = r2.invisible_ad_label
            r0.invisible_ad_label = r1
            java.lang.Boolean r1 = r2.use_floating_btn
            r0.use_floating_btn = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.show_duration
            if (r1 == 0) goto L13
            java.lang.String r1 = ", show_duration="
            r0.append(r1)
            java.lang.Integer r1 = r4.show_duration
            r0.append(r1)
        L13:
            java.lang.Boolean r1 = r4.enable_close_on_click
            if (r1 == 0) goto L21
            java.lang.String r1 = ", enable_close_on_click="
            r0.append(r1)
            java.lang.Boolean r1 = r4.enable_close_on_click
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.auto_click_mode
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", auto_click_mode="
            r0.append(r1)
            java.lang.Integer r1 = r4.auto_click_mode
            r0.append(r1)
        L2f:
            java.lang.Integer r1 = r4.auto_click_time_ratio
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", auto_click_time_ratio="
            r0.append(r1)
            java.lang.Integer r1 = r4.auto_click_time_ratio
            r0.append(r1)
        L3d:
            java.lang.Boolean r1 = r4.enable_full_click
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", enable_full_click="
            r0.append(r1)
            java.lang.Boolean r1 = r4.enable_full_click
            r0.append(r1)
        L4b:
            java.lang.Boolean r1 = r4.invisible_ad_label
            if (r1 == 0) goto L59
            java.lang.String r1 = ", invisible_ad_label="
            r0.append(r1)
            java.lang.Boolean r1 = r4.invisible_ad_label
            r0.append(r1)
        L59:
            java.lang.Boolean r1 = r4.use_floating_btn
            if (r1 == 0) goto L67
            java.lang.String r1 = ", use_floating_btn="
            r0.append(r1)
            java.lang.Boolean r1 = r4.use_floating_btn
            r0.append(r1)
        L67:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "SplashAdSetting{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
