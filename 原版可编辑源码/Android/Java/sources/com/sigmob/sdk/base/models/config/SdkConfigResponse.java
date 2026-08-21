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

public final class SdkConfigResponse extends AndroidMessage<SdkConfigResponse, Builder> {
    public static final ProtoAdapter<SdkConfigResponse> ADAPTER;
    public static final Parcelable.Creator<SdkConfigResponse> CREATOR;
    public static final Integer DEFAULT_CODE;
    public static final String DEFAULT_ERROR_MESSAGE = "";
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final Integer code;

    @WireField(adapter = "com.sigmob.sdk.base.models.SdkConfig#ADAPTER", tag = 3)
    public final SdkConfig config;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final String error_message;

    public static final class Builder extends Message.Builder<SdkConfigResponse, Builder> {
        public SdkConfig config;
        public Integer code = SdkConfigResponse.DEFAULT_CODE;
        public String error_message = "";

        @Override
        public SdkConfigResponse build() {
            return new SdkConfigResponse(this.code, this.error_message, this.config, super.buildUnknownFields());
        }

        public Builder code(Integer num) {
            this.code = num;
            return this;
        }

        public Builder config(SdkConfig sdkConfig) {
            this.config = sdkConfig;
            return this;
        }

        public Builder error_message(String str) {
            this.error_message = str;
            return this;
        }
    }

    private static final class ProtoAdapter_SdkConfigResponse extends ProtoAdapter<SdkConfigResponse> {
        public ProtoAdapter_SdkConfigResponse() {
            super(FieldEncoding.LENGTH_DELIMITED, SdkConfigResponse.class);
        }

        @Override
        public SdkConfigResponse decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.code(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.error_message(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.config(SdkConfig.ADAPTER.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, SdkConfigResponse sdkConfigResponse) throws IOException {
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 1, sdkConfigResponse.code);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 2, sdkConfigResponse.error_message);
            SdkConfig.ADAPTER.encodeWithTag(protoWriter, 3, sdkConfigResponse.config);
            protoWriter.writeBytes(sdkConfigResponse.unknownFields());
        }

        @Override
        public int encodedSize(SdkConfigResponse sdkConfigResponse) {
            return ProtoAdapter.UINT32.encodedSizeWithTag(1, sdkConfigResponse.code) + ProtoAdapter.STRING.encodedSizeWithTag(2, sdkConfigResponse.error_message) + SdkConfig.ADAPTER.encodedSizeWithTag(3, sdkConfigResponse.config) + sdkConfigResponse.unknownFields().size();
        }

        @Override
        public SdkConfigResponse redact(SdkConfigResponse sdkConfigResponse) {
            Builder builderNewBuilder = sdkConfigResponse.newBuilder();
            if (builderNewBuilder.config != null) {
                builderNewBuilder.config = SdkConfig.ADAPTER.redact(builderNewBuilder.config);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_SdkConfigResponse protoAdapter_SdkConfigResponse = new ProtoAdapter_SdkConfigResponse();
        ADAPTER = protoAdapter_SdkConfigResponse;
        CREATOR = AndroidMessage.newCreator(protoAdapter_SdkConfigResponse);
        DEFAULT_CODE = 0;
    }

    public SdkConfigResponse(Integer num, String str, SdkConfig sdkConfig) {
        this(num, str, sdkConfig, ByteString.EMPTY);
    }

    public SdkConfigResponse(Integer num, String str, SdkConfig sdkConfig, ByteString byteString) {
        super(ADAPTER, byteString);
        this.code = num;
        this.error_message = str;
        this.config = sdkConfig;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof SdkConfigResponse)) {
            return false;
        }
        SdkConfigResponse sdkConfigResponse = (SdkConfigResponse) obj;
        return unknownFields().equals(sdkConfigResponse.unknownFields()) && Internal.equals(this.code, sdkConfigResponse.code) && Internal.equals(this.error_message, sdkConfigResponse.error_message) && Internal.equals(this.config, sdkConfigResponse.config);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Integer num = this.code;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 37;
        String str = this.error_message;
        int iHashCode3 = (iHashCode2 + (str != null ? str.hashCode() : 0)) * 37;
        SdkConfig sdkConfig = this.config;
        int iHashCode4 = iHashCode3 + (sdkConfig != null ? sdkConfig.hashCode() : 0);
        this.hashCode = iHashCode4;
        return iHashCode4;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.code = this.code;
        builder.error_message = this.error_message;
        builder.config = this.config;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.code != null) {
            sb.append(", code=");
            sb.append(this.code);
        }
        if (this.error_message != null) {
            sb.append(", error_message=");
            sb.append(this.error_message);
        }
        if (this.config != null) {
            sb.append(", config=");
            sb.append(this.config);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "SdkConfigResponse{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
