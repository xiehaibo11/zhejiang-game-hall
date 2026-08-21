package com.sigmob.sdk.base.models.config;

import android.os.Parcelable;
import com.czhj.wire.AndroidMessage;
import com.czhj.wire.FieldEncoding;
import com.czhj.wire.Message;
import com.czhj.wire.ProtoAdapter;
import com.czhj.wire.ProtoReader;
import com.czhj.wire.ProtoWriter;
import com.czhj.wire.WireField;
import com.czhj.wire.internal.Internal;
import com.czhj.wire.okio.ByteString;
import java.io.IOException;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class Common extends AndroidMessage<Common, Builder> {
    public static final ProtoAdapter<Common> ADAPTER;
    public static final Parcelable.Creator<Common> CREATOR;
    public static final Integer DEFAULT_CONFIGREFRESH;
    public static final Boolean DEFAULT_DISABLE_UP_LOCATION;
    public static final Boolean DEFAULT_ENABLE_DEBUG_LEVEL;
    public static final Boolean DEFAULT_IS_GDPR_REGION;
    public static final Integer DEFAULT_LOAD_INTERVAL;
    public static final Integer DEFAULT_MAX_SEND_LOG_RECORDS;
    public static final Integer DEFAULT_SEND_LOG_INTERVAL;
    public static final Integer DEFAULT_TRACKING_EXPIRATION_TIME;
    public static final Integer DEFAULT_TRACKING_RETRY_INTERVAL;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.sigmob.sdk.base.models.AntiFraudLogConfig#ADAPTER", tag = 7)
    public final AntiFraudLogConfig anti_fraud_log;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 6)
    public final Integer configRefresh;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", label = WireField.Label.REPEATED, tag = 13)
    public final List<Integer> dclog_blacklist;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 16)
    public final Boolean disable_up_location;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 14)
    public final Boolean enable_debug_level;

    @WireField(adapter = "com.sigmob.sdk.base.models.CommonEndpointsConfig#ADAPTER", tag = 1)
    public final CommonEndpointsConfig endpoints;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 8)
    public final Boolean is_gdpr_region;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 15)
    public final Integer load_interval;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 11)
    public final Integer max_send_log_records;

    @WireField(adapter = "com.sigmob.sdk.base.models.NativeConfig#ADAPTER", tag = 4)
    public final NativeConfig native_config;

    @WireField(adapter = "com.sigmob.sdk.base.models.RvConfig#ADAPTER", tag = 2)
    public final RvConfig rv_config;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 12)
    public final Integer send_log_interval;

    @WireField(adapter = "com.sigmob.sdk.base.models.SplashConfig#ADAPTER", tag = 3)
    public final SplashConfig splash_config;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 9)
    public final Integer tracking_expiration_time;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 10)
    public final Integer tracking_retry_interval;

    public static final class Builder extends Message.Builder<Common, Builder> {
        public AntiFraudLogConfig anti_fraud_log;
        public CommonEndpointsConfig endpoints;
        public NativeConfig native_config;
        public RvConfig rv_config;
        public SplashConfig splash_config;
        public Integer configRefresh = Common.DEFAULT_CONFIGREFRESH;
        public Boolean is_gdpr_region = Common.DEFAULT_IS_GDPR_REGION;
        public Integer tracking_expiration_time = Common.DEFAULT_TRACKING_EXPIRATION_TIME;
        public Integer tracking_retry_interval = Common.DEFAULT_TRACKING_RETRY_INTERVAL;
        public Integer max_send_log_records = Common.DEFAULT_MAX_SEND_LOG_RECORDS;
        public Integer send_log_interval = Common.DEFAULT_SEND_LOG_INTERVAL;
        public Boolean enable_debug_level = Common.DEFAULT_ENABLE_DEBUG_LEVEL;
        public Integer load_interval = Common.DEFAULT_LOAD_INTERVAL;
        public Boolean disable_up_location = Common.DEFAULT_DISABLE_UP_LOCATION;
        public List<Integer> dclog_blacklist = Internal.newMutableList();

        public Builder anti_fraud_log(AntiFraudLogConfig antiFraudLogConfig) {
            this.anti_fraud_log = antiFraudLogConfig;
            return this;
        }

        @Override // com.czhj.wire.Message.Builder
        public Common build() {
            return new Common(this.endpoints, this.rv_config, this.splash_config, this.native_config, this.configRefresh, this.anti_fraud_log, this.is_gdpr_region, this.tracking_expiration_time, this.tracking_retry_interval, this.max_send_log_records, this.send_log_interval, this.dclog_blacklist, this.enable_debug_level, this.load_interval, this.disable_up_location, super.buildUnknownFields());
        }

        public Builder configRefresh(Integer num) {
            this.configRefresh = num;
            return this;
        }

        public Builder dclog_blacklist(List<Integer> list) {
            Internal.checkElementsNotNull(list);
            this.dclog_blacklist = list;
            return this;
        }

        public Builder disable_up_location(Boolean bool) {
            this.disable_up_location = bool;
            return this;
        }

        public Builder enable_debug_level(Boolean bool) {
            this.enable_debug_level = bool;
            return this;
        }

        public Builder endpoints(CommonEndpointsConfig commonEndpointsConfig) {
            this.endpoints = commonEndpointsConfig;
            return this;
        }

        public Builder is_gdpr_region(Boolean bool) {
            this.is_gdpr_region = bool;
            return this;
        }

        public Builder load_interval(Integer num) {
            this.load_interval = num;
            return this;
        }

        public Builder max_send_log_records(Integer num) {
            this.max_send_log_records = num;
            return this;
        }

        public Builder native_config(NativeConfig nativeConfig) {
            this.native_config = nativeConfig;
            return this;
        }

        public Builder rv_config(RvConfig rvConfig) {
            this.rv_config = rvConfig;
            return this;
        }

        public Builder send_log_interval(Integer num) {
            this.send_log_interval = num;
            return this;
        }

        public Builder splash_config(SplashConfig splashConfig) {
            this.splash_config = splashConfig;
            return this;
        }

        public Builder tracking_expiration_time(Integer num) {
            this.tracking_expiration_time = num;
            return this;
        }

        public Builder tracking_retry_interval(Integer num) {
            this.tracking_retry_interval = num;
            return this;
        }
    }

    private static final class ProtoAdapter_Common extends ProtoAdapter<Common> {
        public ProtoAdapter_Common() {
            super(FieldEncoding.LENGTH_DELIMITED, Common.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public Common decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                switch (iNextTag) {
                    case 1:
                        builder.endpoints(CommonEndpointsConfig.ADAPTER.decode(protoReader));
                        break;
                    case 2:
                        builder.rv_config(RvConfig.ADAPTER.decode(protoReader));
                        break;
                    case 3:
                        builder.splash_config(SplashConfig.ADAPTER.decode(protoReader));
                        break;
                    case 4:
                        builder.native_config(NativeConfig.ADAPTER.decode(protoReader));
                        break;
                    case 5:
                    default:
                        FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                        builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                        break;
                    case 6:
                        builder.configRefresh(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 7:
                        builder.anti_fraud_log(AntiFraudLogConfig.ADAPTER.decode(protoReader));
                        break;
                    case 8:
                        builder.is_gdpr_region(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 9:
                        builder.tracking_expiration_time(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 10:
                        builder.tracking_retry_interval(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 11:
                        builder.max_send_log_records(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 12:
                        builder.send_log_interval(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 13:
                        builder.dclog_blacklist.add(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 14:
                        builder.enable_debug_level(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 15:
                        builder.load_interval(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 16:
                        builder.disable_up_location(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, Common common) throws IOException {
            CommonEndpointsConfig.ADAPTER.encodeWithTag(protoWriter, 1, common.endpoints);
            RvConfig.ADAPTER.encodeWithTag(protoWriter, 2, common.rv_config);
            SplashConfig.ADAPTER.encodeWithTag(protoWriter, 3, common.splash_config);
            NativeConfig.ADAPTER.encodeWithTag(protoWriter, 4, common.native_config);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 6, common.configRefresh);
            AntiFraudLogConfig.ADAPTER.encodeWithTag(protoWriter, 7, common.anti_fraud_log);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 8, common.is_gdpr_region);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 9, common.tracking_expiration_time);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 10, common.tracking_retry_interval);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 11, common.max_send_log_records);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 12, common.send_log_interval);
            ProtoAdapter.UINT32.asRepeated().encodeWithTag(protoWriter, 13, common.dclog_blacklist);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 14, common.enable_debug_level);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 15, common.load_interval);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 16, common.disable_up_location);
            protoWriter.writeBytes(common.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(Common common) {
            return CommonEndpointsConfig.ADAPTER.encodedSizeWithTag(1, common.endpoints) + RvConfig.ADAPTER.encodedSizeWithTag(2, common.rv_config) + SplashConfig.ADAPTER.encodedSizeWithTag(3, common.splash_config) + NativeConfig.ADAPTER.encodedSizeWithTag(4, common.native_config) + ProtoAdapter.UINT32.encodedSizeWithTag(6, common.configRefresh) + AntiFraudLogConfig.ADAPTER.encodedSizeWithTag(7, common.anti_fraud_log) + ProtoAdapter.BOOL.encodedSizeWithTag(8, common.is_gdpr_region) + ProtoAdapter.UINT32.encodedSizeWithTag(9, common.tracking_expiration_time) + ProtoAdapter.UINT32.encodedSizeWithTag(10, common.tracking_retry_interval) + ProtoAdapter.UINT32.encodedSizeWithTag(11, common.max_send_log_records) + ProtoAdapter.UINT32.encodedSizeWithTag(12, common.send_log_interval) + ProtoAdapter.UINT32.asRepeated().encodedSizeWithTag(13, common.dclog_blacklist) + ProtoAdapter.BOOL.encodedSizeWithTag(14, common.enable_debug_level) + ProtoAdapter.UINT32.encodedSizeWithTag(15, common.load_interval) + ProtoAdapter.BOOL.encodedSizeWithTag(16, common.disable_up_location) + common.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public Common redact(Common common) {
            Builder builderNewBuilder = common.newBuilder();
            if (builderNewBuilder.endpoints != null) {
                builderNewBuilder.endpoints = CommonEndpointsConfig.ADAPTER.redact(builderNewBuilder.endpoints);
            }
            if (builderNewBuilder.rv_config != null) {
                builderNewBuilder.rv_config = RvConfig.ADAPTER.redact(builderNewBuilder.rv_config);
            }
            if (builderNewBuilder.splash_config != null) {
                builderNewBuilder.splash_config = SplashConfig.ADAPTER.redact(builderNewBuilder.splash_config);
            }
            if (builderNewBuilder.native_config != null) {
                builderNewBuilder.native_config = NativeConfig.ADAPTER.redact(builderNewBuilder.native_config);
            }
            if (builderNewBuilder.anti_fraud_log != null) {
                builderNewBuilder.anti_fraud_log = AntiFraudLogConfig.ADAPTER.redact(builderNewBuilder.anti_fraud_log);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_Common protoAdapter_Common = new ProtoAdapter_Common();
        ADAPTER = protoAdapter_Common;
        CREATOR = AndroidMessage.newCreator(protoAdapter_Common);
        DEFAULT_CONFIGREFRESH = 0;
        DEFAULT_IS_GDPR_REGION = false;
        DEFAULT_TRACKING_EXPIRATION_TIME = 86400;
        DEFAULT_TRACKING_RETRY_INTERVAL = 180;
        DEFAULT_MAX_SEND_LOG_RECORDS = 100;
        DEFAULT_SEND_LOG_INTERVAL = 3;
        DEFAULT_ENABLE_DEBUG_LEVEL = false;
        DEFAULT_LOAD_INTERVAL = 0;
        DEFAULT_DISABLE_UP_LOCATION = false;
    }

    public Common(CommonEndpointsConfig commonEndpointsConfig, RvConfig rvConfig, SplashConfig splashConfig, NativeConfig nativeConfig, Integer num, AntiFraudLogConfig antiFraudLogConfig, Boolean bool, Integer num2, Integer num3, Integer num4, Integer num5, List<Integer> list, Boolean bool2, Integer num6, Boolean bool3) {
        this(commonEndpointsConfig, rvConfig, splashConfig, nativeConfig, num, antiFraudLogConfig, bool, num2, num3, num4, num5, list, bool2, num6, bool3, ByteString.EMPTY);
    }

    public Common(CommonEndpointsConfig commonEndpointsConfig, RvConfig rvConfig, SplashConfig splashConfig, NativeConfig nativeConfig, Integer num, AntiFraudLogConfig antiFraudLogConfig, Boolean bool, Integer num2, Integer num3, Integer num4, Integer num5, List<Integer> list, Boolean bool2, Integer num6, Boolean bool3, ByteString byteString) {
        super(ADAPTER, byteString);
        this.endpoints = commonEndpointsConfig;
        this.rv_config = rvConfig;
        this.splash_config = splashConfig;
        this.native_config = nativeConfig;
        this.configRefresh = num;
        this.anti_fraud_log = antiFraudLogConfig;
        this.is_gdpr_region = bool;
        this.tracking_expiration_time = num2;
        this.tracking_retry_interval = num3;
        this.max_send_log_records = num4;
        this.send_log_interval = num5;
        this.dclog_blacklist = Internal.immutableCopyOf("dclog_blacklist", list);
        this.enable_debug_level = bool2;
        this.load_interval = num6;
        this.disable_up_location = bool3;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof Common)) {
            return false;
        }
        Common common = (Common) obj;
        return unknownFields().equals(common.unknownFields()) && Internal.equals(this.endpoints, common.endpoints) && Internal.equals(this.rv_config, common.rv_config) && Internal.equals(this.splash_config, common.splash_config) && Internal.equals(this.native_config, common.native_config) && Internal.equals(this.configRefresh, common.configRefresh) && Internal.equals(this.anti_fraud_log, common.anti_fraud_log) && Internal.equals(this.is_gdpr_region, common.is_gdpr_region) && Internal.equals(this.tracking_expiration_time, common.tracking_expiration_time) && Internal.equals(this.tracking_retry_interval, common.tracking_retry_interval) && Internal.equals(this.max_send_log_records, common.max_send_log_records) && Internal.equals(this.send_log_interval, common.send_log_interval) && this.dclog_blacklist.equals(common.dclog_blacklist) && Internal.equals(this.enable_debug_level, common.enable_debug_level) && Internal.equals(this.load_interval, common.load_interval) && Internal.equals(this.disable_up_location, common.disable_up_location);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        CommonEndpointsConfig commonEndpointsConfig = this.endpoints;
        int iHashCode2 = (iHashCode + (commonEndpointsConfig != null ? commonEndpointsConfig.hashCode() : 0)) * 37;
        RvConfig rvConfig = this.rv_config;
        int iHashCode3 = (iHashCode2 + (rvConfig != null ? rvConfig.hashCode() : 0)) * 37;
        SplashConfig splashConfig = this.splash_config;
        int iHashCode4 = (iHashCode3 + (splashConfig != null ? splashConfig.hashCode() : 0)) * 37;
        NativeConfig nativeConfig = this.native_config;
        int iHashCode5 = (iHashCode4 + (nativeConfig != null ? nativeConfig.hashCode() : 0)) * 37;
        Integer num = this.configRefresh;
        int iHashCode6 = (iHashCode5 + (num != null ? num.hashCode() : 0)) * 37;
        AntiFraudLogConfig antiFraudLogConfig = this.anti_fraud_log;
        int iHashCode7 = (iHashCode6 + (antiFraudLogConfig != null ? antiFraudLogConfig.hashCode() : 0)) * 37;
        Boolean bool = this.is_gdpr_region;
        int iHashCode8 = (iHashCode7 + (bool != null ? bool.hashCode() : 0)) * 37;
        Integer num2 = this.tracking_expiration_time;
        int iHashCode9 = (iHashCode8 + (num2 != null ? num2.hashCode() : 0)) * 37;
        Integer num3 = this.tracking_retry_interval;
        int iHashCode10 = (iHashCode9 + (num3 != null ? num3.hashCode() : 0)) * 37;
        Integer num4 = this.max_send_log_records;
        int iHashCode11 = (iHashCode10 + (num4 != null ? num4.hashCode() : 0)) * 37;
        Integer num5 = this.send_log_interval;
        int iHashCode12 = (((iHashCode11 + (num5 != null ? num5.hashCode() : 0)) * 37) + this.dclog_blacklist.hashCode()) * 37;
        Boolean bool2 = this.enable_debug_level;
        int iHashCode13 = (iHashCode12 + (bool2 != null ? bool2.hashCode() : 0)) * 37;
        Integer num6 = this.load_interval;
        int iHashCode14 = (iHashCode13 + (num6 != null ? num6.hashCode() : 0)) * 37;
        Boolean bool3 = this.disable_up_location;
        int iHashCode15 = iHashCode14 + (bool3 != null ? bool3.hashCode() : 0);
        this.hashCode = iHashCode15;
        return iHashCode15;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.endpoints = this.endpoints;
        builder.rv_config = this.rv_config;
        builder.splash_config = this.splash_config;
        builder.native_config = this.native_config;
        builder.configRefresh = this.configRefresh;
        builder.anti_fraud_log = this.anti_fraud_log;
        builder.is_gdpr_region = this.is_gdpr_region;
        builder.tracking_expiration_time = this.tracking_expiration_time;
        builder.tracking_retry_interval = this.tracking_retry_interval;
        builder.max_send_log_records = this.max_send_log_records;
        builder.send_log_interval = this.send_log_interval;
        builder.dclog_blacklist = Internal.copyOf("dclog_blacklist", this.dclog_blacklist);
        builder.enable_debug_level = this.enable_debug_level;
        builder.load_interval = this.load_interval;
        builder.disable_up_location = this.disable_up_location;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.endpoints != null) {
            sb.append(", endpoints=");
            sb.append(this.endpoints);
        }
        if (this.rv_config != null) {
            sb.append(", rv_config=");
            sb.append(this.rv_config);
        }
        if (this.splash_config != null) {
            sb.append(", splash_config=");
            sb.append(this.splash_config);
        }
        if (this.native_config != null) {
            sb.append(", native_config=");
            sb.append(this.native_config);
        }
        if (this.configRefresh != null) {
            sb.append(", configRefresh=");
            sb.append(this.configRefresh);
        }
        if (this.anti_fraud_log != null) {
            sb.append(", anti_fraud_log=");
            sb.append(this.anti_fraud_log);
        }
        if (this.is_gdpr_region != null) {
            sb.append(", is_gdpr_region=");
            sb.append(this.is_gdpr_region);
        }
        if (this.tracking_expiration_time != null) {
            sb.append(", tracking_expiration_time=");
            sb.append(this.tracking_expiration_time);
        }
        if (this.tracking_retry_interval != null) {
            sb.append(", tracking_retry_interval=");
            sb.append(this.tracking_retry_interval);
        }
        if (this.max_send_log_records != null) {
            sb.append(", max_send_log_records=");
            sb.append(this.max_send_log_records);
        }
        if (this.send_log_interval != null) {
            sb.append(", send_log_interval=");
            sb.append(this.send_log_interval);
        }
        if (!this.dclog_blacklist.isEmpty()) {
            sb.append(", dclog_blacklist=");
            sb.append(this.dclog_blacklist);
        }
        if (this.enable_debug_level != null) {
            sb.append(", enable_debug_level=");
            sb.append(this.enable_debug_level);
        }
        if (this.load_interval != null) {
            sb.append(", load_interval=");
            sb.append(this.load_interval);
        }
        if (this.disable_up_location != null) {
            sb.append(", disable_up_location=");
            sb.append(this.disable_up_location);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "Common{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
