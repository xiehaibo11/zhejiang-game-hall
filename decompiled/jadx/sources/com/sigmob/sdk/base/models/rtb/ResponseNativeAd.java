package com.sigmob.sdk.base.models.rtb;

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
public final class ResponseNativeAd extends AndroidMessage<ResponseNativeAd, Builder> {
    public static final ProtoAdapter<ResponseNativeAd> ADAPTER;
    public static final Parcelable.Creator<ResponseNativeAd> CREATOR;
    public static final Integer DEFAULT_TYPE;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "ResponseAsset#ADAPTER", label = WireField.Label.REPEATED, tag = 1)
    public final List<ResponseAsset> assets;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final Integer type;

    public static final class Builder extends Message.Builder<ResponseNativeAd, Builder> {
        public Integer type = ResponseNativeAd.DEFAULT_TYPE;
        public List<ResponseAsset> assets = Internal.newMutableList();

        public Builder assets(List<ResponseAsset> list) {
            Internal.checkElementsNotNull(list);
            this.assets = list;
            return this;
        }

        @Override // com.czhj.wire.Message.Builder
        public ResponseNativeAd build() {
            return new ResponseNativeAd(this.assets, this.type, super.buildUnknownFields());
        }

        public Builder type(Integer num) {
            this.type = num;
            return this;
        }
    }

    private static final class ProtoAdapter_ResponseNativeAd extends ProtoAdapter<ResponseNativeAd> {
        public ProtoAdapter_ResponseNativeAd() {
            super(FieldEncoding.LENGTH_DELIMITED, ResponseNativeAd.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public ResponseNativeAd decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.assets.add(ResponseAsset.ADAPTER.decode(protoReader));
                } else if (iNextTag != 2) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.type(ProtoAdapter.UINT32.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, ResponseNativeAd responseNativeAd) throws IOException {
            ResponseAsset.ADAPTER.asRepeated().encodeWithTag(protoWriter, 1, responseNativeAd.assets);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 2, responseNativeAd.type);
            protoWriter.writeBytes(responseNativeAd.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(ResponseNativeAd responseNativeAd) {
            return ResponseAsset.ADAPTER.asRepeated().encodedSizeWithTag(1, responseNativeAd.assets) + ProtoAdapter.UINT32.encodedSizeWithTag(2, responseNativeAd.type) + responseNativeAd.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public ResponseNativeAd redact(ResponseNativeAd responseNativeAd) {
            Builder builderNewBuilder = responseNativeAd.newBuilder();
            Internal.redactElements(builderNewBuilder.assets, ResponseAsset.ADAPTER);
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_ResponseNativeAd protoAdapter_ResponseNativeAd = new ProtoAdapter_ResponseNativeAd();
        ADAPTER = protoAdapter_ResponseNativeAd;
        CREATOR = AndroidMessage.newCreator(protoAdapter_ResponseNativeAd);
        DEFAULT_TYPE = 0;
    }

    public ResponseNativeAd(List<ResponseAsset> list, Integer num) {
        this(list, num, ByteString.EMPTY);
    }

    public ResponseNativeAd(List<ResponseAsset> list, Integer num, ByteString byteString) {
        super(ADAPTER, byteString);
        this.assets = Internal.immutableCopyOf("assets", list);
        this.type = num;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ResponseNativeAd)) {
            return false;
        }
        ResponseNativeAd responseNativeAd = (ResponseNativeAd) obj;
        return unknownFields().equals(responseNativeAd.unknownFields()) && this.assets.equals(responseNativeAd.assets) && Internal.equals(this.type, responseNativeAd.type);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = ((unknownFields().hashCode() * 37) + this.assets.hashCode()) * 37;
        Integer num = this.type;
        int iHashCode2 = iHashCode + (num != null ? num.hashCode() : 0);
        this.hashCode = iHashCode2;
        return iHashCode2;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.assets = Internal.copyOf("assets", this.assets);
        builder.type = this.type;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (!this.assets.isEmpty()) {
            sb.append(", assets=");
            sb.append(this.assets);
        }
        if (this.type != null) {
            sb.append(", type=");
            sb.append(this.type);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "ResponseNativeAd{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
