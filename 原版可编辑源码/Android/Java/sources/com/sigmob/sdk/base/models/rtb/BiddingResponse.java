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

public final class BiddingResponse extends AndroidMessage<BiddingResponse, Builder> {
    public static final ProtoAdapter<BiddingResponse> ADAPTER;
    public static final Parcelable.Creator<BiddingResponse> CREATOR;
    public static final Integer DEFAULT_ECPM;
    public static final String DEFAULT_LOSE_URL = "";
    public static final String DEFAULT_WIN_URL = "";
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final Integer ecpm;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final String lose_url;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final String win_url;

    public static final class Builder extends Message.Builder<BiddingResponse, Builder> {
        public String win_url = "";
        public String lose_url = "";
        public Integer ecpm = BiddingResponse.DEFAULT_ECPM;

        @Override
        public BiddingResponse build() {
            return new BiddingResponse(this.win_url, this.lose_url, this.ecpm, super.buildUnknownFields());
        }

        public Builder ecpm(Integer num) {
            this.ecpm = num;
            return this;
        }

        public Builder lose_url(String str) {
            this.lose_url = str;
            return this;
        }

        public Builder win_url(String str) {
            this.win_url = str;
            return this;
        }
    }

    private static final class ProtoAdapter_BiddingResponse extends ProtoAdapter<BiddingResponse> {
        public ProtoAdapter_BiddingResponse() {
            super(FieldEncoding.LENGTH_DELIMITED, BiddingResponse.class);
        }

        @Override
        public BiddingResponse decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.win_url(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.lose_url(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.ecpm(ProtoAdapter.UINT32.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, BiddingResponse biddingResponse) throws IOException {
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 1, biddingResponse.win_url);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 2, biddingResponse.lose_url);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 3, biddingResponse.ecpm);
            protoWriter.writeBytes(biddingResponse.unknownFields());
        }

        @Override
        public int encodedSize(BiddingResponse biddingResponse) {
            return ProtoAdapter.STRING.encodedSizeWithTag(1, biddingResponse.win_url) + ProtoAdapter.STRING.encodedSizeWithTag(2, biddingResponse.lose_url) + ProtoAdapter.UINT32.encodedSizeWithTag(3, biddingResponse.ecpm) + biddingResponse.unknownFields().size();
        }

        @Override
        public BiddingResponse redact(BiddingResponse biddingResponse) {
            Builder builderNewBuilder = biddingResponse.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_BiddingResponse protoAdapter_BiddingResponse = new ProtoAdapter_BiddingResponse();
        ADAPTER = protoAdapter_BiddingResponse;
        CREATOR = AndroidMessage.newCreator(protoAdapter_BiddingResponse);
        DEFAULT_ECPM = 0;
    }

    public BiddingResponse(String str, String str2, Integer num) {
        this(str, str2, num, ByteString.EMPTY);
    }

    public BiddingResponse(String str, String str2, Integer num, ByteString byteString) {
        super(ADAPTER, byteString);
        this.win_url = str;
        this.lose_url = str2;
        this.ecpm = num;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof BiddingResponse)) {
            return false;
        }
        BiddingResponse biddingResponse = (BiddingResponse) obj;
        return unknownFields().equals(biddingResponse.unknownFields()) && Internal.equals(this.win_url, biddingResponse.win_url) && Internal.equals(this.lose_url, biddingResponse.lose_url) && Internal.equals(this.ecpm, biddingResponse.ecpm);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        String str = this.win_url;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 37;
        String str2 = this.lose_url;
        int iHashCode3 = (iHashCode2 + (str2 != null ? str2.hashCode() : 0)) * 37;
        Integer num = this.ecpm;
        int iHashCode4 = iHashCode3 + (num != null ? num.hashCode() : 0);
        this.hashCode = iHashCode4;
        return iHashCode4;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.win_url = this.win_url;
        builder.lose_url = this.lose_url;
        builder.ecpm = this.ecpm;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.win_url != null) {
            sb.append(", win_url=");
            sb.append(this.win_url);
        }
        if (this.lose_url != null) {
            sb.append(", lose_url=");
            sb.append(this.lose_url);
        }
        if (this.ecpm != null) {
            sb.append(", ecpm=");
            sb.append(this.ecpm);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "BiddingResponse{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
