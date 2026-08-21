package com.sigmob.sdk.base.models.config;

public final class Common extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.config.Common, com.sigmob.sdk.base.models.config.Common.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Common> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.config.Common> CREATOR = null;
    public static final java.lang.Integer DEFAULT_CONFIGREFRESH = null;
    public static final java.lang.Boolean DEFAULT_DISABLE_UP_LOCATION = null;
    public static final java.lang.Boolean DEFAULT_ENABLE_DEBUG_LEVEL = null;
    public static final java.lang.Boolean DEFAULT_IS_GDPR_REGION = null;
    public static final java.lang.Integer DEFAULT_LOAD_INTERVAL = null;
    public static final java.lang.Integer DEFAULT_MAX_SEND_LOG_RECORDS = null;
    public static final java.lang.Integer DEFAULT_SEND_LOG_INTERVAL = null;
    public static final java.lang.Integer DEFAULT_TRACKING_EXPIRATION_TIME = null;
    public static final java.lang.Integer DEFAULT_TRACKING_RETRY_INTERVAL = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.AntiFraudLogConfig#ADAPTER", tag = 7)
    public final com.sigmob.sdk.base.models.config.AntiFraudLogConfig anti_fraud_log;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 6)
    public final java.lang.Integer configRefresh;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", label = com.czhj.wire.WireField.Label.REPEATED, tag = 13)
    public final java.util.List<java.lang.Integer> dclog_blacklist;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 16)
    public final java.lang.Boolean disable_up_location;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 14)
    public final java.lang.Boolean enable_debug_level;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.CommonEndpointsConfig#ADAPTER", tag = 1)
    public final com.sigmob.sdk.base.models.config.CommonEndpointsConfig endpoints;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 8)
    public final java.lang.Boolean is_gdpr_region;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 15)
    public final java.lang.Integer load_interval;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 11)
    public final java.lang.Integer max_send_log_records;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.NativeConfig#ADAPTER", tag = 4)
    public final com.sigmob.sdk.base.models.config.NativeConfig native_config;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.RvConfig#ADAPTER", tag = 2)
    public final com.sigmob.sdk.base.models.config.RvConfig rv_config;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 12)
    public final java.lang.Integer send_log_interval;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.SplashConfig#ADAPTER", tag = 3)
    public final com.sigmob.sdk.base.models.config.SplashConfig splash_config;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 9)
    public final java.lang.Integer tracking_expiration_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 10)
    public final java.lang.Integer tracking_retry_interval;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.config.Common, com.sigmob.sdk.base.models.config.Common.Builder> {
        public com.sigmob.sdk.base.models.config.AntiFraudLogConfig anti_fraud_log;
        public java.lang.Integer configRefresh;
        public java.util.List<java.lang.Integer> dclog_blacklist;
        public java.lang.Boolean disable_up_location;
        public java.lang.Boolean enable_debug_level;
        public com.sigmob.sdk.base.models.config.CommonEndpointsConfig endpoints;
        public java.lang.Boolean is_gdpr_region;
        public java.lang.Integer load_interval;
        public java.lang.Integer max_send_log_records;
        public com.sigmob.sdk.base.models.config.NativeConfig native_config;
        public com.sigmob.sdk.base.models.config.RvConfig rv_config;
        public java.lang.Integer send_log_interval;
        public com.sigmob.sdk.base.models.config.SplashConfig splash_config;
        public java.lang.Integer tracking_expiration_time;
        public java.lang.Integer tracking_retry_interval;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_CONFIGREFRESH
                r1.configRefresh = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_IS_GDPR_REGION
                r1.is_gdpr_region = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_TRACKING_EXPIRATION_TIME
                r1.tracking_expiration_time = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_TRACKING_RETRY_INTERVAL
                r1.tracking_retry_interval = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_MAX_SEND_LOG_RECORDS
                r1.max_send_log_records = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_SEND_LOG_INTERVAL
                r1.send_log_interval = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_ENABLE_DEBUG_LEVEL
                r1.enable_debug_level = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_LOAD_INTERVAL
                r1.load_interval = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_DISABLE_UP_LOCATION
                r1.disable_up_location = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.dclog_blacklist = r0
                return
        }

        public com.sigmob.sdk.base.models.config.Common.Builder anti_fraud_log(com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1) {
                r0 = this;
                r0.anti_fraud_log = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.config.Common r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.config.Common build() {
                r20 = this;
                r0 = r20
                com.sigmob.sdk.base.models.config.Common r18 = new com.sigmob.sdk.base.models.config.Common
                r1 = r18
                com.sigmob.sdk.base.models.config.CommonEndpointsConfig r2 = r0.endpoints
                com.sigmob.sdk.base.models.config.RvConfig r3 = r0.rv_config
                com.sigmob.sdk.base.models.config.SplashConfig r4 = r0.splash_config
                com.sigmob.sdk.base.models.config.NativeConfig r5 = r0.native_config
                java.lang.Integer r6 = r0.configRefresh
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r7 = r0.anti_fraud_log
                java.lang.Boolean r8 = r0.is_gdpr_region
                java.lang.Integer r9 = r0.tracking_expiration_time
                java.lang.Integer r10 = r0.tracking_retry_interval
                java.lang.Integer r11 = r0.max_send_log_records
                java.lang.Integer r12 = r0.send_log_interval
                java.util.List<java.lang.Integer> r13 = r0.dclog_blacklist
                java.lang.Boolean r14 = r0.enable_debug_level
                java.lang.Integer r15 = r0.load_interval
                r19 = r1
                java.lang.Boolean r1 = r0.disable_up_location
                r16 = r1
                com.czhj.wire.okio.ByteString r17 = super.buildUnknownFields()
                r1 = r19
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
                return r18
        }

        public com.sigmob.sdk.base.models.config.Common.Builder configRefresh(java.lang.Integer r1) {
                r0 = this;
                r0.configRefresh = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder dclog_blacklist(java.util.List<java.lang.Integer> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.dclog_blacklist = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder disable_up_location(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_up_location = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder enable_debug_level(java.lang.Boolean r1) {
                r0 = this;
                r0.enable_debug_level = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder endpoints(com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1) {
                r0 = this;
                r0.endpoints = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder is_gdpr_region(java.lang.Boolean r1) {
                r0 = this;
                r0.is_gdpr_region = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder load_interval(java.lang.Integer r1) {
                r0 = this;
                r0.load_interval = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder max_send_log_records(java.lang.Integer r1) {
                r0 = this;
                r0.max_send_log_records = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder native_config(com.sigmob.sdk.base.models.config.NativeConfig r1) {
                r0 = this;
                r0.native_config = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder rv_config(com.sigmob.sdk.base.models.config.RvConfig r1) {
                r0 = this;
                r0.rv_config = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder send_log_interval(java.lang.Integer r1) {
                r0 = this;
                r0.send_log_interval = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder splash_config(com.sigmob.sdk.base.models.config.SplashConfig r1) {
                r0 = this;
                r0.splash_config = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder tracking_expiration_time(java.lang.Integer r1) {
                r0 = this;
                r0.tracking_expiration_time = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.Common.Builder tracking_retry_interval(java.lang.Integer r1) {
                r0 = this;
                r0.tracking_retry_interval = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Common extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Common> {
        public ProtoAdapter_Common() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.config.Common> r1 = com.sigmob.sdk.base.models.config.Common.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.config.Common decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.config.Common$Builder r0 = new com.sigmob.sdk.base.models.config.Common$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto Lde
                switch(r3) {
                    case 1: goto Ld1;
                    case 2: goto Lc4;
                    case 3: goto Lb7;
                    case 4: goto Laa;
                    case 5: goto L13;
                    case 6: goto L9d;
                    case 7: goto L90;
                    case 8: goto L83;
                    case 9: goto L77;
                    case 10: goto L6b;
                    case 11: goto L5f;
                    case 12: goto L53;
                    case 13: goto L47;
                    case 14: goto L3b;
                    case 15: goto L2f;
                    case 16: goto L23;
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
                r0.disable_up_location(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.load_interval(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.enable_debug_level(r3)
                goto L9
            L47:
                java.util.List<java.lang.Integer> r3 = r0.dclog_blacklist
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r4 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.send_log_interval(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.max_send_log_records(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.tracking_retry_interval(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.tracking_expiration_time(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.is_gdpr_region(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> r3 = com.sigmob.sdk.base.models.config.AntiFraudLogConfig.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r3 = (com.sigmob.sdk.base.models.config.AntiFraudLogConfig) r3
                r0.anti_fraud_log(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.configRefresh(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.NativeConfig> r3 = com.sigmob.sdk.base.models.config.NativeConfig.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.NativeConfig r3 = (com.sigmob.sdk.base.models.config.NativeConfig) r3
                r0.native_config(r3)
                goto L9
            Lb7:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SplashConfig> r3 = com.sigmob.sdk.base.models.config.SplashConfig.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.SplashConfig r3 = (com.sigmob.sdk.base.models.config.SplashConfig) r3
                r0.splash_config(r3)
                goto L9
            Lc4:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.RvConfig> r3 = com.sigmob.sdk.base.models.config.RvConfig.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.RvConfig r3 = (com.sigmob.sdk.base.models.config.RvConfig) r3
                r0.rv_config(r3)
                goto L9
            Ld1:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.CommonEndpointsConfig> r3 = com.sigmob.sdk.base.models.config.CommonEndpointsConfig.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.config.CommonEndpointsConfig r3 = (com.sigmob.sdk.base.models.config.CommonEndpointsConfig) r3
                r0.endpoints(r3)
                goto L9
            Lde:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.config.Common r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.config.Common decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.Common r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.config.Common r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.CommonEndpointsConfig> r0 = com.sigmob.sdk.base.models.config.CommonEndpointsConfig.ADAPTER
                com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r5.endpoints
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.RvConfig> r0 = com.sigmob.sdk.base.models.config.RvConfig.ADAPTER
                com.sigmob.sdk.base.models.config.RvConfig r1 = r5.rv_config
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SplashConfig> r0 = com.sigmob.sdk.base.models.config.SplashConfig.ADAPTER
                com.sigmob.sdk.base.models.config.SplashConfig r1 = r5.splash_config
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.NativeConfig> r0 = com.sigmob.sdk.base.models.config.NativeConfig.ADAPTER
                com.sigmob.sdk.base.models.config.NativeConfig r1 = r5.native_config
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.configRefresh
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> r0 = com.sigmob.sdk.base.models.config.AntiFraudLogConfig.ADAPTER
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r5.anti_fraud_log
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.is_gdpr_region
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.tracking_expiration_time
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.tracking_retry_interval
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.max_send_log_records
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.send_log_interval
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.Integer> r1 = r5.dclog_blacklist
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.enable_debug_level
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.load_interval
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_up_location
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.config.Common r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.Common r2 = (com.sigmob.sdk.base.models.config.Common) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.config.Common r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.CommonEndpointsConfig> r0 = com.sigmob.sdk.base.models.config.CommonEndpointsConfig.ADAPTER
                com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r5.endpoints
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.RvConfig> r1 = com.sigmob.sdk.base.models.config.RvConfig.ADAPTER
                com.sigmob.sdk.base.models.config.RvConfig r2 = r5.rv_config
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SplashConfig> r1 = com.sigmob.sdk.base.models.config.SplashConfig.ADAPTER
                com.sigmob.sdk.base.models.config.SplashConfig r2 = r5.splash_config
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.NativeConfig> r1 = com.sigmob.sdk.base.models.config.NativeConfig.ADAPTER
                com.sigmob.sdk.base.models.config.NativeConfig r2 = r5.native_config
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.configRefresh
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> r1 = com.sigmob.sdk.base.models.config.AntiFraudLogConfig.ADAPTER
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r2 = r5.anti_fraud_log
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.is_gdpr_region
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.tracking_expiration_time
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.tracking_retry_interval
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.max_send_log_records
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.send_log_interval
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.Integer> r2 = r5.dclog_blacklist
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.enable_debug_level
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.load_interval
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_up_location
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.config.Common r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.Common r1 = (com.sigmob.sdk.base.models.config.Common) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.config.Common redact(com.sigmob.sdk.base.models.config.Common r3) {
                r2 = this;
                com.sigmob.sdk.base.models.config.Common$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.config.CommonEndpointsConfig r0 = r3.endpoints
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.CommonEndpointsConfig> r0 = com.sigmob.sdk.base.models.config.CommonEndpointsConfig.ADAPTER
                com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r3.endpoints
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.CommonEndpointsConfig r0 = (com.sigmob.sdk.base.models.config.CommonEndpointsConfig) r0
                r3.endpoints = r0
            L14:
                com.sigmob.sdk.base.models.config.RvConfig r0 = r3.rv_config
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.RvConfig> r0 = com.sigmob.sdk.base.models.config.RvConfig.ADAPTER
                com.sigmob.sdk.base.models.config.RvConfig r1 = r3.rv_config
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.RvConfig r0 = (com.sigmob.sdk.base.models.config.RvConfig) r0
                r3.rv_config = r0
            L24:
                com.sigmob.sdk.base.models.config.SplashConfig r0 = r3.splash_config
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SplashConfig> r0 = com.sigmob.sdk.base.models.config.SplashConfig.ADAPTER
                com.sigmob.sdk.base.models.config.SplashConfig r1 = r3.splash_config
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.SplashConfig r0 = (com.sigmob.sdk.base.models.config.SplashConfig) r0
                r3.splash_config = r0
            L34:
                com.sigmob.sdk.base.models.config.NativeConfig r0 = r3.native_config
                if (r0 == 0) goto L44
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.NativeConfig> r0 = com.sigmob.sdk.base.models.config.NativeConfig.ADAPTER
                com.sigmob.sdk.base.models.config.NativeConfig r1 = r3.native_config
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.NativeConfig r0 = (com.sigmob.sdk.base.models.config.NativeConfig) r0
                r3.native_config = r0
            L44:
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r3.anti_fraud_log
                if (r0 == 0) goto L54
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.AntiFraudLogConfig> r0 = com.sigmob.sdk.base.models.config.AntiFraudLogConfig.ADAPTER
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r3.anti_fraud_log
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = (com.sigmob.sdk.base.models.config.AntiFraudLogConfig) r0
                r3.anti_fraud_log = r0
            L54:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.config.Common r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.config.Common redact(com.sigmob.sdk.base.models.config.Common r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.Common r1 = (com.sigmob.sdk.base.models.config.Common) r1
                com.sigmob.sdk.base.models.config.Common r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.config.Common$ProtoAdapter_Common r0 = new com.sigmob.sdk.base.models.config.Common$ProtoAdapter_Common
            r0.<init>()
            com.sigmob.sdk.base.models.config.Common.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.config.Common.CREATOR = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.sigmob.sdk.base.models.config.Common.DEFAULT_CONFIGREFRESH = r1
            com.sigmob.sdk.base.models.config.Common.DEFAULT_IS_GDPR_REGION = r0
            r2 = 86400(0x15180, float:1.21072E-40)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.config.Common.DEFAULT_TRACKING_EXPIRATION_TIME = r2
            r2 = 180(0xb4, float:2.52E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.config.Common.DEFAULT_TRACKING_RETRY_INTERVAL = r2
            r2 = 100
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.config.Common.DEFAULT_MAX_SEND_LOG_RECORDS = r2
            r2 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.config.Common.DEFAULT_SEND_LOG_INTERVAL = r2
            com.sigmob.sdk.base.models.config.Common.DEFAULT_ENABLE_DEBUG_LEVEL = r0
            com.sigmob.sdk.base.models.config.Common.DEFAULT_LOAD_INTERVAL = r1
            com.sigmob.sdk.base.models.config.Common.DEFAULT_DISABLE_UP_LOCATION = r0
            return
    }

    public Common(com.sigmob.sdk.base.models.config.CommonEndpointsConfig r18, com.sigmob.sdk.base.models.config.RvConfig r19, com.sigmob.sdk.base.models.config.SplashConfig r20, com.sigmob.sdk.base.models.config.NativeConfig r21, java.lang.Integer r22, com.sigmob.sdk.base.models.config.AntiFraudLogConfig r23, java.lang.Boolean r24, java.lang.Integer r25, java.lang.Integer r26, java.lang.Integer r27, java.lang.Integer r28, java.util.List<java.lang.Integer> r29, java.lang.Boolean r30, java.lang.Integer r31, java.lang.Boolean r32) {
            r17 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            r3 = r20
            r4 = r21
            r5 = r22
            r6 = r23
            r7 = r24
            r8 = r25
            r9 = r26
            r10 = r27
            r11 = r28
            r12 = r29
            r13 = r30
            r14 = r31
            r15 = r32
            com.czhj.wire.okio.ByteString r16 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            return
    }

    public Common(com.sigmob.sdk.base.models.config.CommonEndpointsConfig r4, com.sigmob.sdk.base.models.config.RvConfig r5, com.sigmob.sdk.base.models.config.SplashConfig r6, com.sigmob.sdk.base.models.config.NativeConfig r7, java.lang.Integer r8, com.sigmob.sdk.base.models.config.AntiFraudLogConfig r9, java.lang.Boolean r10, java.lang.Integer r11, java.lang.Integer r12, java.lang.Integer r13, java.lang.Integer r14, java.util.List<java.lang.Integer> r15, java.lang.Boolean r16, java.lang.Integer r17, java.lang.Boolean r18, com.czhj.wire.okio.ByteString r19) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.Common> r1 = com.sigmob.sdk.base.models.config.Common.ADAPTER
            r2 = r19
            r3.<init>(r1, r2)
            r1 = r4
            r0.endpoints = r1
            r1 = r5
            r0.rv_config = r1
            r1 = r6
            r0.splash_config = r1
            r1 = r7
            r0.native_config = r1
            r1 = r8
            r0.configRefresh = r1
            r1 = r9
            r0.anti_fraud_log = r1
            r1 = r10
            r0.is_gdpr_region = r1
            r1 = r11
            r0.tracking_expiration_time = r1
            r1 = r12
            r0.tracking_retry_interval = r1
            r1 = r13
            r0.max_send_log_records = r1
            r1 = r14
            r0.send_log_interval = r1
            java.lang.String r1 = "dclog_blacklist"
            r2 = r15
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r15)
            r0.dclog_blacklist = r1
            r1 = r16
            r0.enable_debug_level = r1
            r1 = r17
            r0.load_interval = r1
            r1 = r18
            r0.disable_up_location = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.config.Common
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.config.Common r5 = (com.sigmob.sdk.base.models.config.Common) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Lb1
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r4.endpoints
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r3 = r5.endpoints
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            com.sigmob.sdk.base.models.config.RvConfig r1 = r4.rv_config
            com.sigmob.sdk.base.models.config.RvConfig r3 = r5.rv_config
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            com.sigmob.sdk.base.models.config.SplashConfig r1 = r4.splash_config
            com.sigmob.sdk.base.models.config.SplashConfig r3 = r5.splash_config
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            com.sigmob.sdk.base.models.config.NativeConfig r1 = r4.native_config
            com.sigmob.sdk.base.models.config.NativeConfig r3 = r5.native_config
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.configRefresh
            java.lang.Integer r3 = r5.configRefresh
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r4.anti_fraud_log
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r3 = r5.anti_fraud_log
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.is_gdpr_region
            java.lang.Boolean r3 = r5.is_gdpr_region
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.tracking_expiration_time
            java.lang.Integer r3 = r5.tracking_expiration_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.tracking_retry_interval
            java.lang.Integer r3 = r5.tracking_retry_interval
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.max_send_log_records
            java.lang.Integer r3 = r5.max_send_log_records
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.send_log_interval
            java.lang.Integer r3 = r5.send_log_interval
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.util.List<java.lang.Integer> r1 = r4.dclog_blacklist
            java.util.List<java.lang.Integer> r3 = r5.dclog_blacklist
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.enable_debug_level
            java.lang.Boolean r3 = r5.enable_debug_level
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.load_interval
            java.lang.Integer r3 = r5.load_interval
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.disable_up_location
            java.lang.Boolean r5 = r5.disable_up_location
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto Lb1
            goto Lb2
        Lb1:
            r0 = r2
        Lb2:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto Lcc
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r3.endpoints
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.RvConfig r1 = r3.rv_config
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.SplashConfig r1 = r3.splash_config
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.NativeConfig r1 = r3.native_config
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.configRefresh
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r3.anti_fraud_log
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.is_gdpr_region
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.tracking_expiration_time
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.tracking_retry_interval
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.max_send_log_records
            if (r1 == 0) goto L8d
            int r1 = r1.hashCode()
            goto L8e
        L8d:
            r1 = r2
        L8e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.send_log_interval
            if (r1 == 0) goto L9a
            int r1 = r1.hashCode()
            goto L9b
        L9a:
            r1 = r2
        L9b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.Integer> r1 = r3.dclog_blacklist
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.enable_debug_level
            if (r1 == 0) goto Lb0
            int r1 = r1.hashCode()
            goto Lb1
        Lb0:
            r1 = r2
        Lb1:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.load_interval
            if (r1 == 0) goto Lbd
            int r1 = r1.hashCode()
            goto Lbe
        Lbd:
            r1 = r2
        Lbe:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_up_location
            if (r1 == 0) goto Lc9
            int r2 = r1.hashCode()
        Lc9:
            int r0 = r0 + r2
            r3.hashCode = r0
        Lcc:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.config.Common$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.config.Common.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.config.Common$Builder r0 = new com.sigmob.sdk.base.models.config.Common$Builder
            r0.<init>()
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r3.endpoints
            r0.endpoints = r1
            com.sigmob.sdk.base.models.config.RvConfig r1 = r3.rv_config
            r0.rv_config = r1
            com.sigmob.sdk.base.models.config.SplashConfig r1 = r3.splash_config
            r0.splash_config = r1
            com.sigmob.sdk.base.models.config.NativeConfig r1 = r3.native_config
            r0.native_config = r1
            java.lang.Integer r1 = r3.configRefresh
            r0.configRefresh = r1
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r3.anti_fraud_log
            r0.anti_fraud_log = r1
            java.lang.Boolean r1 = r3.is_gdpr_region
            r0.is_gdpr_region = r1
            java.lang.Integer r1 = r3.tracking_expiration_time
            r0.tracking_expiration_time = r1
            java.lang.Integer r1 = r3.tracking_retry_interval
            r0.tracking_retry_interval = r1
            java.lang.Integer r1 = r3.max_send_log_records
            r0.max_send_log_records = r1
            java.lang.Integer r1 = r3.send_log_interval
            r0.send_log_interval = r1
            java.util.List<java.lang.Integer> r1 = r3.dclog_blacklist
            java.lang.String r2 = "dclog_blacklist"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.dclog_blacklist = r1
            java.lang.Boolean r1 = r3.enable_debug_level
            r0.enable_debug_level = r1
            java.lang.Integer r1 = r3.load_interval
            r0.load_interval = r1
            java.lang.Boolean r1 = r3.disable_up_location
            r0.disable_up_location = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r4.endpoints
            if (r1 == 0) goto L13
            java.lang.String r1 = ", endpoints="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r1 = r4.endpoints
            r0.append(r1)
        L13:
            com.sigmob.sdk.base.models.config.RvConfig r1 = r4.rv_config
            if (r1 == 0) goto L21
            java.lang.String r1 = ", rv_config="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.RvConfig r1 = r4.rv_config
            r0.append(r1)
        L21:
            com.sigmob.sdk.base.models.config.SplashConfig r1 = r4.splash_config
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", splash_config="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.SplashConfig r1 = r4.splash_config
            r0.append(r1)
        L2f:
            com.sigmob.sdk.base.models.config.NativeConfig r1 = r4.native_config
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", native_config="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.NativeConfig r1 = r4.native_config
            r0.append(r1)
        L3d:
            java.lang.Integer r1 = r4.configRefresh
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", configRefresh="
            r0.append(r1)
            java.lang.Integer r1 = r4.configRefresh
            r0.append(r1)
        L4b:
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r4.anti_fraud_log
            if (r1 == 0) goto L59
            java.lang.String r1 = ", anti_fraud_log="
            r0.append(r1)
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r4.anti_fraud_log
            r0.append(r1)
        L59:
            java.lang.Boolean r1 = r4.is_gdpr_region
            if (r1 == 0) goto L67
            java.lang.String r1 = ", is_gdpr_region="
            r0.append(r1)
            java.lang.Boolean r1 = r4.is_gdpr_region
            r0.append(r1)
        L67:
            java.lang.Integer r1 = r4.tracking_expiration_time
            if (r1 == 0) goto L75
            java.lang.String r1 = ", tracking_expiration_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.tracking_expiration_time
            r0.append(r1)
        L75:
            java.lang.Integer r1 = r4.tracking_retry_interval
            if (r1 == 0) goto L83
            java.lang.String r1 = ", tracking_retry_interval="
            r0.append(r1)
            java.lang.Integer r1 = r4.tracking_retry_interval
            r0.append(r1)
        L83:
            java.lang.Integer r1 = r4.max_send_log_records
            if (r1 == 0) goto L91
            java.lang.String r1 = ", max_send_log_records="
            r0.append(r1)
            java.lang.Integer r1 = r4.max_send_log_records
            r0.append(r1)
        L91:
            java.lang.Integer r1 = r4.send_log_interval
            if (r1 == 0) goto L9f
            java.lang.String r1 = ", send_log_interval="
            r0.append(r1)
            java.lang.Integer r1 = r4.send_log_interval
            r0.append(r1)
        L9f:
            java.util.List<java.lang.Integer> r1 = r4.dclog_blacklist
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lb1
            java.lang.String r1 = ", dclog_blacklist="
            r0.append(r1)
            java.util.List<java.lang.Integer> r1 = r4.dclog_blacklist
            r0.append(r1)
        Lb1:
            java.lang.Boolean r1 = r4.enable_debug_level
            if (r1 == 0) goto Lbf
            java.lang.String r1 = ", enable_debug_level="
            r0.append(r1)
            java.lang.Boolean r1 = r4.enable_debug_level
            r0.append(r1)
        Lbf:
            java.lang.Integer r1 = r4.load_interval
            if (r1 == 0) goto Lcd
            java.lang.String r1 = ", load_interval="
            r0.append(r1)
            java.lang.Integer r1 = r4.load_interval
            r0.append(r1)
        Lcd:
            java.lang.Boolean r1 = r4.disable_up_location
            if (r1 == 0) goto Ldb
            java.lang.String r1 = ", disable_up_location="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_up_location
            r0.append(r1)
        Ldb:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Common{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
