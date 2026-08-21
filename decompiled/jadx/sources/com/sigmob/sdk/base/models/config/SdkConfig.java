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
public final class SdkConfig extends AndroidMessage<SdkConfig, Builder> {
    public static final ProtoAdapter<SdkConfig> ADAPTER;
    public static final Parcelable.Creator<SdkConfig> CREATOR;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.sigmob.sdk.base.models.Android#ADAPTER", tag = 3)
    public final Android android_config;

    @WireField(adapter = "com.sigmob.sdk.base.models.Common#ADAPTER", tag = 1)
    public final Common common_config;

    public static final class Builder extends Message.Builder<SdkConfig, Builder> {
        public Android android_config;
        public Common common_config;

        public Builder android_config(Android android2) {
            this.android_config = android2;
            return this;
        }

        @Override // com.czhj.wire.Message.Builder
        public SdkConfig build() {
            return new SdkConfig(this.common_config, this.android_config, super.buildUnknownFields());
        }

        public Builder common_config(Common common) {
            this.common_config = common;
            return this;
        }
    }

    private static final class ProtoAdapter_SdkConfig extends ProtoAdapter<SdkConfig> {
        public ProtoAdapter_SdkConfig() {
            super(FieldEncoding.LENGTH_DELIMITED, SdkConfig.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public SdkConfig decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.common_config(Common.ADAPTER.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.android_config(Android.ADAPTER.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, SdkConfig sdkConfig) throws IOException {
            Common.ADAPTER.encodeWithTag(protoWriter, 1, sdkConfig.common_config);
            Android.ADAPTER.encodeWithTag(protoWriter, 3, sdkConfig.android_config);
            protoWriter.writeBytes(sdkConfig.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(SdkConfig sdkConfig) {
            return Common.ADAPTER.encodedSizeWithTag(1, sdkConfig.common_config) + Android.ADAPTER.encodedSizeWithTag(3, sdkConfig.android_config) + sdkConfig.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public SdkConfig redact(SdkConfig sdkConfig) {
            Builder builderNewBuilder = sdkConfig.newBuilder();
            if (builderNewBuilder.common_config != null) {
                builderNewBuilder.common_config = Common.ADAPTER.redact(builderNewBuilder.common_config);
            }
            if (builderNewBuilder.android_config != null) {
                builderNewBuilder.android_config = Android.ADAPTER.redact(builderNewBuilder.android_config);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_SdkConfig protoAdapter_SdkConfig = new ProtoAdapter_SdkConfig();
        ADAPTER = protoAdapter_SdkConfig;
        CREATOR = AndroidMessage.newCreator(protoAdapter_SdkConfig);
    }

    public SdkConfig(Common common, Android android2) {
        this(common, android2, ByteString.EMPTY);
    }

    public SdkConfig(Common common, Android android2, ByteString byteString) {
        super(ADAPTER, byteString);
        this.common_config = common;
        this.android_config = android2;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof SdkConfig)) {
            return false;
        }
        SdkConfig sdkConfig = (SdkConfig) obj;
        return unknownFields().equals(sdkConfig.unknownFields()) && Internal.equals(this.common_config, sdkConfig.common_config) && Internal.equals(this.android_config, sdkConfig.android_config);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Common common = this.common_config;
        int iHashCode2 = (iHashCode + (common != null ? common.hashCode() : 0)) * 37;
        Android android2 = this.android_config;
        int iHashCode3 = iHashCode2 + (android2 != null ? android2.hashCode() : 0);
        this.hashCode = iHashCode3;
        return iHashCode3;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.common_config = this.common_config;
        builder.android_config = this.android_config;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.common_config != null) {
            sb.append(", common_config=");
            sb.append(this.common_config);
        }
        if (this.android_config != null) {
            sb.append(", android_config=");
            sb.append(this.android_config);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "SdkConfig{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
