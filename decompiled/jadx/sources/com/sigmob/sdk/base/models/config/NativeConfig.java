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
public final class NativeConfig extends AndroidMessage<NativeConfig, Builder> {
    public static final ProtoAdapter<NativeConfig> ADAPTER;
    public static final Parcelable.Creator<NativeConfig> CREATOR;
    public static final Integer DEFAULT_AD_LOAD_TIMEOUT;
    public static final Integer DEFAULT_CACHETOP;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final Integer ad_load_timeout;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 1)
    public final Integer cacheTop;

    public static final class Builder extends Message.Builder<NativeConfig, Builder> {
        public Integer cacheTop = NativeConfig.DEFAULT_CACHETOP;
        public Integer ad_load_timeout = NativeConfig.DEFAULT_AD_LOAD_TIMEOUT;

        public Builder ad_load_timeout(Integer num) {
            this.ad_load_timeout = num;
            return this;
        }

        @Override // com.czhj.wire.Message.Builder
        public NativeConfig build() {
            return new NativeConfig(this.cacheTop, this.ad_load_timeout, super.buildUnknownFields());
        }

        public Builder cacheTop(Integer num) {
            this.cacheTop = num;
            return this;
        }
    }

    private static final class ProtoAdapter_NativeConfig extends ProtoAdapter<NativeConfig> {
        public ProtoAdapter_NativeConfig() {
            super(FieldEncoding.LENGTH_DELIMITED, NativeConfig.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public NativeConfig decode(ProtoReader protoReader) throws IOException {
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
                    builder.ad_load_timeout(ProtoAdapter.UINT32.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, NativeConfig nativeConfig) throws IOException {
            ProtoAdapter.INT32.encodeWithTag(protoWriter, 1, nativeConfig.cacheTop);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 2, nativeConfig.ad_load_timeout);
            protoWriter.writeBytes(nativeConfig.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(NativeConfig nativeConfig) {
            return ProtoAdapter.INT32.encodedSizeWithTag(1, nativeConfig.cacheTop) + ProtoAdapter.UINT32.encodedSizeWithTag(2, nativeConfig.ad_load_timeout) + nativeConfig.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public NativeConfig redact(NativeConfig nativeConfig) {
            Builder builderNewBuilder = nativeConfig.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_NativeConfig protoAdapter_NativeConfig = new ProtoAdapter_NativeConfig();
        ADAPTER = protoAdapter_NativeConfig;
        CREATOR = AndroidMessage.newCreator(protoAdapter_NativeConfig);
        DEFAULT_CACHETOP = 10;
        DEFAULT_AD_LOAD_TIMEOUT = 45;
    }

    public NativeConfig(Integer num, Integer num2) {
        this(num, num2, ByteString.EMPTY);
    }

    public NativeConfig(Integer num, Integer num2, ByteString byteString) {
        super(ADAPTER, byteString);
        this.cacheTop = num;
        this.ad_load_timeout = num2;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof NativeConfig)) {
            return false;
        }
        NativeConfig nativeConfig = (NativeConfig) obj;
        return unknownFields().equals(nativeConfig.unknownFields()) && Internal.equals(this.cacheTop, nativeConfig.cacheTop) && Internal.equals(this.ad_load_timeout, nativeConfig.ad_load_timeout);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Integer num = this.cacheTop;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 37;
        Integer num2 = this.ad_load_timeout;
        int iHashCode3 = iHashCode2 + (num2 != null ? num2.hashCode() : 0);
        this.hashCode = iHashCode3;
        return iHashCode3;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.cacheTop = this.cacheTop;
        builder.ad_load_timeout = this.ad_load_timeout;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.cacheTop != null) {
            sb.append(", cacheTop=");
            sb.append(this.cacheTop);
        }
        if (this.ad_load_timeout != null) {
            sb.append(", ad_load_timeout=");
            sb.append(this.ad_load_timeout);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "NativeConfig{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
