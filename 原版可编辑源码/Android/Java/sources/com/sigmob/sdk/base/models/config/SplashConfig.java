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

public final class SplashConfig extends AndroidMessage<SplashConfig, Builder> {
    public static final ProtoAdapter<SplashConfig> ADAPTER;
    public static final Parcelable.Creator<SplashConfig> CREATOR;
    public static final Integer DEFAULT_CACHETOP;
    public static final Integer DEFAULT_MATERIAL_EXPIRED_TIME;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 1)
    public final Integer cacheTop;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 2)
    public final Integer material_expired_time;

    public static final class Builder extends Message.Builder<SplashConfig, Builder> {
        public Integer cacheTop = SplashConfig.DEFAULT_CACHETOP;
        public Integer material_expired_time = SplashConfig.DEFAULT_MATERIAL_EXPIRED_TIME;

        @Override
        public SplashConfig build() {
            return new SplashConfig(this.cacheTop, this.material_expired_time, super.buildUnknownFields());
        }

        public Builder cacheTop(Integer num) {
            this.cacheTop = num;
            return this;
        }

        public Builder material_expired_time(Integer num) {
            this.material_expired_time = num;
            return this;
        }
    }

    private static final class ProtoAdapter_SplashConfig extends ProtoAdapter<SplashConfig> {
        public ProtoAdapter_SplashConfig() {
            super(FieldEncoding.LENGTH_DELIMITED, SplashConfig.class);
        }

        @Override
        public SplashConfig decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.cacheTop(ProtoAdapter.INT32.decode(protoReader));
                } else if (iNextTag != 2) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.material_expired_time(ProtoAdapter.INT32.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, SplashConfig splashConfig) throws IOException {
            ProtoAdapter.INT32.encodeWithTag(protoWriter, 1, splashConfig.cacheTop);
            ProtoAdapter.INT32.encodeWithTag(protoWriter, 2, splashConfig.material_expired_time);
            protoWriter.writeBytes(splashConfig.unknownFields());
        }

        @Override
        public int encodedSize(SplashConfig splashConfig) {
            return ProtoAdapter.INT32.encodedSizeWithTag(1, splashConfig.cacheTop) + ProtoAdapter.INT32.encodedSizeWithTag(2, splashConfig.material_expired_time) + splashConfig.unknownFields().size();
        }

        @Override
        public SplashConfig redact(SplashConfig splashConfig) {
            Builder builderNewBuilder = splashConfig.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_SplashConfig protoAdapter_SplashConfig = new ProtoAdapter_SplashConfig();
        ADAPTER = protoAdapter_SplashConfig;
        CREATOR = AndroidMessage.newCreator(protoAdapter_SplashConfig);
        DEFAULT_CACHETOP = 50;
        DEFAULT_MATERIAL_EXPIRED_TIME = 3;
    }

    public SplashConfig(Integer num, Integer num2) {
        this(num, num2, ByteString.EMPTY);
    }

    public SplashConfig(Integer num, Integer num2, ByteString byteString) {
        super(ADAPTER, byteString);
        this.cacheTop = num;
        this.material_expired_time = num2;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof SplashConfig)) {
            return false;
        }
        SplashConfig splashConfig = (SplashConfig) obj;
        return unknownFields().equals(splashConfig.unknownFields()) && Internal.equals(this.cacheTop, splashConfig.cacheTop) && Internal.equals(this.material_expired_time, splashConfig.material_expired_time);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Integer num = this.cacheTop;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 37;
        Integer num2 = this.material_expired_time;
        int iHashCode3 = iHashCode2 + (num2 != null ? num2.hashCode() : 0);
        this.hashCode = iHashCode3;
        return iHashCode3;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.cacheTop = this.cacheTop;
        builder.material_expired_time = this.material_expired_time;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.cacheTop != null) {
            sb.append(", cacheTop=");
            sb.append(this.cacheTop);
        }
        if (this.material_expired_time != null) {
            sb.append(", material_expired_time=");
            sb.append(this.material_expired_time);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "SplashConfig{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
