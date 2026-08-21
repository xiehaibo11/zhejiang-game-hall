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

/* JADX INFO: loaded from: classes3.dex */
public final class CommonEndpointsConfig extends AndroidMessage<CommonEndpointsConfig, Builder> {
    public static final ProtoAdapter<CommonEndpointsConfig> ADAPTER;
    public static final Parcelable.Creator<CommonEndpointsConfig> CREATOR;
    public static final String DEFAULT_ADS = "";
    public static final String DEFAULT_HB_ADS = "";
    public static final String DEFAULT_LOG = "";
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final String ads;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final String hb_ads;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final String log;

    public static final class Builder extends Message.Builder<CommonEndpointsConfig, Builder> {
        public String log = "";
        public String ads = "";
        public String hb_ads = "";

        public Builder ads(String str) {
            this.ads = str;
            return this;
        }

        @Override // com.czhj.wire.Message.Builder
        public CommonEndpointsConfig build() {
            return new CommonEndpointsConfig(this.log, this.ads, this.hb_ads, super.buildUnknownFields());
        }

        public Builder hb_ads(String str) {
            this.hb_ads = str;
            return this;
        }

        public Builder log(String str) {
            this.log = str;
            return this;
        }
    }

    private static final class ProtoAdapter_CommonEndpointsConfig extends ProtoAdapter<CommonEndpointsConfig> {
        public ProtoAdapter_CommonEndpointsConfig() {
            super(FieldEncoding.LENGTH_DELIMITED, CommonEndpointsConfig.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public CommonEndpointsConfig decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.log(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.ads(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.hb_ads(ProtoAdapter.STRING.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, CommonEndpointsConfig commonEndpointsConfig) throws IOException {
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 1, commonEndpointsConfig.log);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 2, commonEndpointsConfig.ads);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 3, commonEndpointsConfig.hb_ads);
            protoWriter.writeBytes(commonEndpointsConfig.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(CommonEndpointsConfig commonEndpointsConfig) {
            return ProtoAdapter.STRING.encodedSizeWithTag(1, commonEndpointsConfig.log) + ProtoAdapter.STRING.encodedSizeWithTag(2, commonEndpointsConfig.ads) + ProtoAdapter.STRING.encodedSizeWithTag(3, commonEndpointsConfig.hb_ads) + commonEndpointsConfig.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public CommonEndpointsConfig redact(CommonEndpointsConfig commonEndpointsConfig) {
            Builder builderNewBuilder = commonEndpointsConfig.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_CommonEndpointsConfig protoAdapter_CommonEndpointsConfig = new ProtoAdapter_CommonEndpointsConfig();
        ADAPTER = protoAdapter_CommonEndpointsConfig;
        CREATOR = AndroidMessage.newCreator(protoAdapter_CommonEndpointsConfig);
    }

    public CommonEndpointsConfig(String str, String str2, String str3) {
        this(str, str2, str3, ByteString.EMPTY);
    }

    public CommonEndpointsConfig(String str, String str2, String str3, ByteString byteString) {
        super(ADAPTER, byteString);
        this.log = str;
        this.ads = str2;
        this.hb_ads = str3;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof CommonEndpointsConfig)) {
            return false;
        }
        CommonEndpointsConfig commonEndpointsConfig = (CommonEndpointsConfig) obj;
        return unknownFields().equals(commonEndpointsConfig.unknownFields()) && Internal.equals(this.log, commonEndpointsConfig.log) && Internal.equals(this.ads, commonEndpointsConfig.ads) && Internal.equals(this.hb_ads, commonEndpointsConfig.hb_ads);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        String str = this.log;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 37;
        String str2 = this.ads;
        int iHashCode3 = (iHashCode2 + (str2 != null ? str2.hashCode() : 0)) * 37;
        String str3 = this.hb_ads;
        int iHashCode4 = iHashCode3 + (str3 != null ? str3.hashCode() : 0);
        this.hashCode = iHashCode4;
        return iHashCode4;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.log = this.log;
        builder.ads = this.ads;
        builder.hb_ads = this.hb_ads;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.log != null) {
            sb.append(", log=");
            sb.append(this.log);
        }
        if (this.ads != null) {
            sb.append(", ads=");
            sb.append(this.ads);
        }
        if (this.hb_ads != null) {
            sb.append(", hb_ads=");
            sb.append(this.hb_ads);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "CommonEndpointsConfig{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
