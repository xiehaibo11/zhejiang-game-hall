package com.sigmob.sdk.base.models.config;

public final class Android extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.config.Android, com.sigmob.sdk.base.models.config.Android.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Android> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.config.Android> CREATOR = null;
    public static final java.lang.Integer DEFAULT_APK_EXPIRED_TIME = null;
    public static final java.lang.Boolean DEFAULT_DISABLEUPAPPINFO = null;
    public static final java.lang.Boolean DEFAULT_DISABLE_BOOT_MARK = null;
    public static final java.lang.Integer DEFAULT_DISABLE_UP_OAID = null;
    public static final java.lang.Boolean DEFAULT_ENABLE_PERMISSION = null;
    public static final java.lang.Boolean DEFAULT_ENABLE_REPORT_CRASH = null;
    public static final java.lang.Boolean DEFAULT_OAID_API_IS_DISABLE = null;
    public static final java.lang.Integer DEFAULT_REPORT_LOG = null;
    public static final java.lang.Integer DEFAULT_UP_WIFI_LIST_INTERVAL = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 6)
    public final java.lang.Integer apk_expired_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 1)
    public final java.lang.Boolean disableUpAppInfo;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 9)
    public final java.lang.Boolean disable_boot_mark;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 4)
    public final java.lang.Integer disable_up_oaid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 5)
    public final java.lang.Boolean enable_permission;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 7)
    public final java.lang.Boolean enable_report_crash;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 8)
    public final java.lang.Boolean oaid_api_is_disable;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer report_log;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final java.lang.Integer up_wifi_list_interval;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.config.Android, com.sigmob.sdk.base.models.config.Android.Builder> {
        public java.lang.Integer apk_expired_time;
        public java.lang.Boolean disableUpAppInfo;
        public java.lang.Boolean disable_boot_mark;
        public java.lang.Integer disable_up_oaid;
        public java.lang.Boolean enable_permission;
        public java.lang.Boolean enable_report_crash;
        public java.lang.Boolean oaid_api_is_disable;
        public java.lang.Integer report_log;
        public java.lang.Integer up_wifi_list_interval;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_DISABLEUPAPPINFO
                r1.disableUpAppInfo = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_REPORT_LOG
                r1.report_log = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_UP_WIFI_LIST_INTERVAL
                r1.up_wifi_list_interval = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_DISABLE_UP_OAID
                r1.disable_up_oaid = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_ENABLE_PERMISSION
                r1.enable_permission = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_APK_EXPIRED_TIME
                r1.apk_expired_time = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_ENABLE_REPORT_CRASH
                r1.enable_report_crash = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_OAID_API_IS_DISABLE
                r1.oaid_api_is_disable = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Android.DEFAULT_DISABLE_BOOT_MARK
                r1.disable_boot_mark = r0
                return
        }

        public com.sigmob.sdk.base.models.config.Android.Builder apk_expired_time(java.lang.Integer r1) {
                r0 = this;
                r0.apk_expired_time = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.config.Android r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.config.Android build() {
                r12 = this;
                com.sigmob.sdk.base.models.config.Android r11 = new com.sigmob.sdk.base.models.config.Android
                java.lang.Boolean r1 = r12.disableUpAppInfo
                java.lang.Integer r2 = r12.report_log
                java.lang.Integer r3 = r12.up_wifi_list_interval
                java.lang.Integer r4 = r12.disable_up_oaid
                java.lang.Boolean r5 = r12.enable_permission
                java.lang.Integer r6 = r12.apk_expired_time
                java.lang.Boolean r7 = r12.enable_report_crash
                java.lang.Boolean r8 = r12.oaid_api_is_disable
                java.lang.Boolean r9 = r12.disable_boot_mark
                com.czhj.wire.okio.ByteString r10 = super.buildUnknownFields()
                r0 = r11
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
                return r11
        }

        public com.sigmob.sdk.base.models.config.Android.Builder disableUpAppInfo(java.lang.Boolean r1) {
                r0 = this;
                r0.disableUpAppInfo = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Android.Builder disable_boot_mark(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_boot_mark = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Android.Builder disable_up_oaid(java.lang.Integer r1) {
                r0 = this;
                r0.disable_up_oaid = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Android.Builder enable_permission(java.lang.Boolean r1) {
                r0 = this;
                r0.enable_permission = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Android.Builder enable_report_crash(java.lang.Boolean r1) {
                r0 = this;
                r0.enable_report_crash = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Android.Builder oaid_api_is_disable(java.lang.Boolean r1) {
                r0 = this;
                r0.oaid_api_is_disable = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Android.Builder report_log(java.lang.Integer r1) {
                r0 = this;
                r0.report_log = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Android.Builder up_wifi_list_interval(java.lang.Integer r1) {
                r0 = this;
                r0.up_wifi_list_interval = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Android extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Android> {
        public ProtoAdapter_Android() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.config.Android> r1 = com.sigmob.sdk.base.models.config.Android.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.config.Android decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.config.Android$Builder r0 = new com.sigmob.sdk.base.models.config.Android$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L90
                switch(r3) {
                    case 1: goto L83;
                    case 2: goto L77;
                    case 3: goto L6b;
                    case 4: goto L5f;
                    case 5: goto L53;
                    case 6: goto L47;
                    case 7: goto L3b;
                    case 8: goto L2f;
                    case 9: goto L23;
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
                r0.disable_boot_mark(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.oaid_api_is_disable(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.enable_report_crash(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.apk_expired_time(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.enable_permission(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.disable_up_oaid(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.up_wifi_list_interval(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.report_log(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.disableUpAppInfo(r3)
                goto L9
            L90:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.config.Android r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.config.Android decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.Android r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.config.Android r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disableUpAppInfo
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.report_log
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.up_wifi_list_interval
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.disable_up_oaid
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.enable_permission
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.apk_expired_time
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.enable_report_crash
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.oaid_api_is_disable
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_boot_mark
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.config.Android r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.Android r2 = (com.sigmob.sdk.base.models.config.Android) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.config.Android r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disableUpAppInfo
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.report_log
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.up_wifi_list_interval
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.disable_up_oaid
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.enable_permission
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.apk_expired_time
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.enable_report_crash
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.oaid_api_is_disable
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_boot_mark
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.config.Android r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.Android r1 = (com.sigmob.sdk.base.models.config.Android) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.config.Android redact(com.sigmob.sdk.base.models.config.Android r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.Android$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.config.Android r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.config.Android redact(com.sigmob.sdk.base.models.config.Android r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.Android r1 = (com.sigmob.sdk.base.models.config.Android) r1
                com.sigmob.sdk.base.models.config.Android r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.config.Android$ProtoAdapter_Android r0 = new com.sigmob.sdk.base.models.config.Android$ProtoAdapter_Android
            r0.<init>()
            com.sigmob.sdk.base.models.config.Android.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.config.Android.CREATOR = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.sigmob.sdk.base.models.config.Android.DEFAULT_DISABLEUPAPPINFO = r0
            com.sigmob.sdk.base.models.config.Android.DEFAULT_REPORT_LOG = r1
            com.sigmob.sdk.base.models.config.Android.DEFAULT_UP_WIFI_LIST_INTERVAL = r1
            com.sigmob.sdk.base.models.config.Android.DEFAULT_DISABLE_UP_OAID = r1
            com.sigmob.sdk.base.models.config.Android.DEFAULT_ENABLE_PERMISSION = r0
            com.sigmob.sdk.base.models.config.Android.DEFAULT_APK_EXPIRED_TIME = r1
            com.sigmob.sdk.base.models.config.Android.DEFAULT_ENABLE_REPORT_CRASH = r0
            com.sigmob.sdk.base.models.config.Android.DEFAULT_OAID_API_IS_DISABLE = r0
            com.sigmob.sdk.base.models.config.Android.DEFAULT_DISABLE_BOOT_MARK = r0
            return
    }

    public Android(java.lang.Boolean r12, java.lang.Integer r13, java.lang.Integer r14, java.lang.Integer r15, java.lang.Boolean r16, java.lang.Integer r17, java.lang.Boolean r18, java.lang.Boolean r19, java.lang.Boolean r20) {
            r11 = this;
            com.czhj.wire.okio.ByteString r10 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public Android(java.lang.Boolean r2, java.lang.Integer r3, java.lang.Integer r4, java.lang.Integer r5, java.lang.Boolean r6, java.lang.Integer r7, java.lang.Boolean r8, java.lang.Boolean r9, java.lang.Boolean r10, com.czhj.wire.okio.ByteString r11) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Android> r0 = com.sigmob.sdk.base.models.config.Android.ADAPTER
            r1.<init>(r0, r11)
            r1.disableUpAppInfo = r2
            r1.report_log = r3
            r1.up_wifi_list_interval = r4
            r1.disable_up_oaid = r5
            r1.enable_permission = r6
            r1.apk_expired_time = r7
            r1.enable_report_crash = r8
            r1.oaid_api_is_disable = r9
            r1.disable_boot_mark = r10
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.config.Android
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.config.Android r5 = (com.sigmob.sdk.base.models.config.Android) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L75
            java.lang.Boolean r1 = r4.disableUpAppInfo
            java.lang.Boolean r3 = r5.disableUpAppInfo
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Integer r1 = r4.report_log
            java.lang.Integer r3 = r5.report_log
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Integer r1 = r4.up_wifi_list_interval
            java.lang.Integer r3 = r5.up_wifi_list_interval
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Integer r1 = r4.disable_up_oaid
            java.lang.Integer r3 = r5.disable_up_oaid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Boolean r1 = r4.enable_permission
            java.lang.Boolean r3 = r5.enable_permission
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Integer r1 = r4.apk_expired_time
            java.lang.Integer r3 = r5.apk_expired_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Boolean r1 = r4.enable_report_crash
            java.lang.Boolean r3 = r5.enable_report_crash
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Boolean r1 = r4.oaid_api_is_disable
            java.lang.Boolean r3 = r5.oaid_api_is_disable
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Boolean r1 = r4.disable_boot_mark
            java.lang.Boolean r5 = r5.disable_boot_mark
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L75
            goto L76
        L75:
            r0 = r2
        L76:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L82
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disableUpAppInfo
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.report_log
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.up_wifi_list_interval
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.disable_up_oaid
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.enable_permission
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.apk_expired_time
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.enable_report_crash
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.oaid_api_is_disable
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_boot_mark
            if (r1 == 0) goto L7f
            int r2 = r1.hashCode()
        L7f:
            int r0 = r0 + r2
            r3.hashCode = r0
        L82:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.config.Android$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.config.Android.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android$Builder r0 = new com.sigmob.sdk.base.models.config.Android$Builder
            r0.<init>()
            java.lang.Boolean r1 = r2.disableUpAppInfo
            r0.disableUpAppInfo = r1
            java.lang.Integer r1 = r2.report_log
            r0.report_log = r1
            java.lang.Integer r1 = r2.up_wifi_list_interval
            r0.up_wifi_list_interval = r1
            java.lang.Integer r1 = r2.disable_up_oaid
            r0.disable_up_oaid = r1
            java.lang.Boolean r1 = r2.enable_permission
            r0.enable_permission = r1
            java.lang.Integer r1 = r2.apk_expired_time
            r0.apk_expired_time = r1
            java.lang.Boolean r1 = r2.enable_report_crash
            r0.enable_report_crash = r1
            java.lang.Boolean r1 = r2.oaid_api_is_disable
            r0.oaid_api_is_disable = r1
            java.lang.Boolean r1 = r2.disable_boot_mark
            r0.disable_boot_mark = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Boolean r1 = r4.disableUpAppInfo
            if (r1 == 0) goto L13
            java.lang.String r1 = ", disableUpAppInfo="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disableUpAppInfo
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.report_log
            if (r1 == 0) goto L21
            java.lang.String r1 = ", report_log="
            r0.append(r1)
            java.lang.Integer r1 = r4.report_log
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.up_wifi_list_interval
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", up_wifi_list_interval="
            r0.append(r1)
            java.lang.Integer r1 = r4.up_wifi_list_interval
            r0.append(r1)
        L2f:
            java.lang.Integer r1 = r4.disable_up_oaid
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", disable_up_oaid="
            r0.append(r1)
            java.lang.Integer r1 = r4.disable_up_oaid
            r0.append(r1)
        L3d:
            java.lang.Boolean r1 = r4.enable_permission
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", enable_permission="
            r0.append(r1)
            java.lang.Boolean r1 = r4.enable_permission
            r0.append(r1)
        L4b:
            java.lang.Integer r1 = r4.apk_expired_time
            if (r1 == 0) goto L59
            java.lang.String r1 = ", apk_expired_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.apk_expired_time
            r0.append(r1)
        L59:
            java.lang.Boolean r1 = r4.enable_report_crash
            if (r1 == 0) goto L67
            java.lang.String r1 = ", enable_report_crash="
            r0.append(r1)
            java.lang.Boolean r1 = r4.enable_report_crash
            r0.append(r1)
        L67:
            java.lang.Boolean r1 = r4.oaid_api_is_disable
            if (r1 == 0) goto L75
            java.lang.String r1 = ", oaid_api_is_disable="
            r0.append(r1)
            java.lang.Boolean r1 = r4.oaid_api_is_disable
            r0.append(r1)
        L75:
            java.lang.Boolean r1 = r4.disable_boot_mark
            if (r1 == 0) goto L83
            java.lang.String r1 = ", disable_boot_mark="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_boot_mark
            r0.append(r1)
        L83:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Android{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
