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

public final class ResponseAssetText extends AndroidMessage<ResponseAssetText, Builder> {
    public static final ProtoAdapter<ResponseAssetText> ADAPTER;
    public static final Parcelable.Creator<ResponseAssetText> CREATOR;
    public static final String DEFAULT_CONTEXT = "";
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final String context;

    public static final class Builder extends Message.Builder<ResponseAssetText, Builder> {
        public String context = "";

        @Override
        public ResponseAssetText build() {
            return new ResponseAssetText(this.context, super.buildUnknownFields());
        }

        public Builder context(String str) {
            this.context = str;
            return this;
        }
    }

    private static final class ProtoAdapter_ResponseAssetText extends ProtoAdapter<ResponseAssetText> {
        public ProtoAdapter_ResponseAssetText() {
            super(FieldEncoding.LENGTH_DELIMITED, ResponseAssetText.class);
        }

        @Override
        public ResponseAssetText decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag != 1) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.context(ProtoAdapter.STRING.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, ResponseAssetText responseAssetText) throws IOException {
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 1, responseAssetText.context);
            protoWriter.writeBytes(responseAssetText.unknownFields());
        }

        @Override
        public int encodedSize(ResponseAssetText responseAssetText) {
            return ProtoAdapter.STRING.encodedSizeWithTag(1, responseAssetText.context) + responseAssetText.unknownFields().size();
        }

        @Override
        public ResponseAssetText redact(ResponseAssetText responseAssetText) {
            Builder builderNewBuilder = responseAssetText.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_ResponseAssetText protoAdapter_ResponseAssetText = new ProtoAdapter_ResponseAssetText();
        ADAPTER = protoAdapter_ResponseAssetText;
        CREATOR = AndroidMessage.newCreator(protoAdapter_ResponseAssetText);
    }

    public ResponseAssetText(String str) {
        this(str, ByteString.EMPTY);
    }

    public ResponseAssetText(String str, ByteString byteString) {
        super(ADAPTER, byteString);
        this.context = str;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ResponseAssetText)) {
            return false;
        }
        ResponseAssetText responseAssetText = (ResponseAssetText) obj;
        return unknownFields().equals(responseAssetText.unknownFields()) && Internal.equals(this.context, responseAssetText.context);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        String str = this.context;
        int iHashCode2 = iHashCode + (str != null ? str.hashCode() : 0);
        this.hashCode = iHashCode2;
        return iHashCode2;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.context = this.context;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.context != null) {
            sb.append(", context=");
            sb.append(this.context);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "ResponseAssetText{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
