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

public final class ResponseAssetImage extends AndroidMessage<ResponseAssetImage, Builder> {
    public static final ProtoAdapter<ResponseAssetImage> ADAPTER;
    public static final Parcelable.Creator<ResponseAssetImage> CREATOR;
    public static final Integer DEFAULT_H;
    public static final String DEFAULT_URL = "";
    public static final Integer DEFAULT_W;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final Integer h;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final String url;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final Integer w;

    public static final class Builder extends Message.Builder<ResponseAssetImage, Builder> {
        public String url = "";
        public Integer w = ResponseAssetImage.DEFAULT_W;
        public Integer h = ResponseAssetImage.DEFAULT_H;

        @Override
        public ResponseAssetImage build() {
            return new ResponseAssetImage(this.url, this.w, this.h, super.buildUnknownFields());
        }

        public Builder h(Integer num) {
            this.h = num;
            return this;
        }

        public Builder url(String str) {
            this.url = str;
            return this;
        }

        public Builder w(Integer num) {
            this.w = num;
            return this;
        }
    }

    private static final class ProtoAdapter_ResponseAssetImage extends ProtoAdapter<ResponseAssetImage> {
        public ProtoAdapter_ResponseAssetImage() {
            super(FieldEncoding.LENGTH_DELIMITED, ResponseAssetImage.class);
        }

        @Override
        public ResponseAssetImage decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.url(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.w(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.h(ProtoAdapter.UINT32.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, ResponseAssetImage responseAssetImage) throws IOException {
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 1, responseAssetImage.url);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 2, responseAssetImage.w);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 3, responseAssetImage.h);
            protoWriter.writeBytes(responseAssetImage.unknownFields());
        }

        @Override
        public int encodedSize(ResponseAssetImage responseAssetImage) {
            return ProtoAdapter.STRING.encodedSizeWithTag(1, responseAssetImage.url) + ProtoAdapter.UINT32.encodedSizeWithTag(2, responseAssetImage.w) + ProtoAdapter.UINT32.encodedSizeWithTag(3, responseAssetImage.h) + responseAssetImage.unknownFields().size();
        }

        @Override
        public ResponseAssetImage redact(ResponseAssetImage responseAssetImage) {
            Builder builderNewBuilder = responseAssetImage.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_ResponseAssetImage protoAdapter_ResponseAssetImage = new ProtoAdapter_ResponseAssetImage();
        ADAPTER = protoAdapter_ResponseAssetImage;
        CREATOR = AndroidMessage.newCreator(protoAdapter_ResponseAssetImage);
        DEFAULT_W = 0;
        DEFAULT_H = 0;
    }

    public ResponseAssetImage(String str, Integer num, Integer num2) {
        this(str, num, num2, ByteString.EMPTY);
    }

    public ResponseAssetImage(String str, Integer num, Integer num2, ByteString byteString) {
        super(ADAPTER, byteString);
        this.url = str;
        this.w = num;
        this.h = num2;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ResponseAssetImage)) {
            return false;
        }
        ResponseAssetImage responseAssetImage = (ResponseAssetImage) obj;
        return unknownFields().equals(responseAssetImage.unknownFields()) && Internal.equals(this.url, responseAssetImage.url) && Internal.equals(this.w, responseAssetImage.w) && Internal.equals(this.h, responseAssetImage.h);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        String str = this.url;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 37;
        Integer num = this.w;
        int iHashCode3 = (iHashCode2 + (num != null ? num.hashCode() : 0)) * 37;
        Integer num2 = this.h;
        int iHashCode4 = iHashCode3 + (num2 != null ? num2.hashCode() : 0);
        this.hashCode = iHashCode4;
        return iHashCode4;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.url = this.url;
        builder.w = this.w;
        builder.h = this.h;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.url != null) {
            sb.append(", url=");
            sb.append(this.url);
        }
        if (this.w != null) {
            sb.append(", w=");
            sb.append(this.w);
        }
        if (this.h != null) {
            sb.append(", h=");
            sb.append(this.h);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "ResponseAssetImage{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
