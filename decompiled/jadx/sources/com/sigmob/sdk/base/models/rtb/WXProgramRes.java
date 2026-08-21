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

/* JADX INFO: loaded from: classes3.dex */
public final class WXProgramRes extends AndroidMessage<WXProgramRes, Builder> {
    public static final ProtoAdapter<WXProgramRes> ADAPTER;
    public static final Parcelable.Creator<WXProgramRes> CREATOR;
    public static final String DEFAULT_WX_APP_ID = "";
    public static final String DEFAULT_WX_APP_PATH = "";
    public static final String DEFAULT_WX_APP_USERNAME = "";
    public static final String DEFAULT_WX_UNIVERSAL_LINK = "";
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final String wx_app_id;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final String wx_app_path;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final String wx_app_username;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final String wx_universal_link;

    public static final class Builder extends Message.Builder<WXProgramRes, Builder> {
        public String wx_app_id = "";
        public String wx_universal_link = "";
        public String wx_app_username = "";
        public String wx_app_path = "";

        @Override // com.czhj.wire.Message.Builder
        public WXProgramRes build() {
            return new WXProgramRes(this.wx_app_id, this.wx_universal_link, this.wx_app_username, this.wx_app_path, super.buildUnknownFields());
        }

        public Builder wx_app_id(String str) {
            this.wx_app_id = str;
            return this;
        }

        public Builder wx_app_path(String str) {
            this.wx_app_path = str;
            return this;
        }

        public Builder wx_app_username(String str) {
            this.wx_app_username = str;
            return this;
        }

        public Builder wx_universal_link(String str) {
            this.wx_universal_link = str;
            return this;
        }
    }

    private static final class ProtoAdapter_WXProgramRes extends ProtoAdapter<WXProgramRes> {
        public ProtoAdapter_WXProgramRes() {
            super(FieldEncoding.LENGTH_DELIMITED, WXProgramRes.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public WXProgramRes decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.wx_app_id(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.wx_universal_link(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag == 3) {
                    builder.wx_app_username(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag != 4) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.wx_app_path(ProtoAdapter.STRING.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, WXProgramRes wXProgramRes) throws IOException {
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 1, wXProgramRes.wx_app_id);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 2, wXProgramRes.wx_universal_link);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 3, wXProgramRes.wx_app_username);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 4, wXProgramRes.wx_app_path);
            protoWriter.writeBytes(wXProgramRes.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(WXProgramRes wXProgramRes) {
            return ProtoAdapter.STRING.encodedSizeWithTag(1, wXProgramRes.wx_app_id) + ProtoAdapter.STRING.encodedSizeWithTag(2, wXProgramRes.wx_universal_link) + ProtoAdapter.STRING.encodedSizeWithTag(3, wXProgramRes.wx_app_username) + ProtoAdapter.STRING.encodedSizeWithTag(4, wXProgramRes.wx_app_path) + wXProgramRes.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public WXProgramRes redact(WXProgramRes wXProgramRes) {
            Builder builderNewBuilder = wXProgramRes.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_WXProgramRes protoAdapter_WXProgramRes = new ProtoAdapter_WXProgramRes();
        ADAPTER = protoAdapter_WXProgramRes;
        CREATOR = AndroidMessage.newCreator(protoAdapter_WXProgramRes);
    }

    public WXProgramRes(String str, String str2, String str3, String str4) {
        this(str, str2, str3, str4, ByteString.EMPTY);
    }

    public WXProgramRes(String str, String str2, String str3, String str4, ByteString byteString) {
        super(ADAPTER, byteString);
        this.wx_app_id = str;
        this.wx_universal_link = str2;
        this.wx_app_username = str3;
        this.wx_app_path = str4;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof WXProgramRes)) {
            return false;
        }
        WXProgramRes wXProgramRes = (WXProgramRes) obj;
        return unknownFields().equals(wXProgramRes.unknownFields()) && Internal.equals(this.wx_app_id, wXProgramRes.wx_app_id) && Internal.equals(this.wx_universal_link, wXProgramRes.wx_universal_link) && Internal.equals(this.wx_app_username, wXProgramRes.wx_app_username) && Internal.equals(this.wx_app_path, wXProgramRes.wx_app_path);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        String str = this.wx_app_id;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 37;
        String str2 = this.wx_universal_link;
        int iHashCode3 = (iHashCode2 + (str2 != null ? str2.hashCode() : 0)) * 37;
        String str3 = this.wx_app_username;
        int iHashCode4 = (iHashCode3 + (str3 != null ? str3.hashCode() : 0)) * 37;
        String str4 = this.wx_app_path;
        int iHashCode5 = iHashCode4 + (str4 != null ? str4.hashCode() : 0);
        this.hashCode = iHashCode5;
        return iHashCode5;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.wx_app_id = this.wx_app_id;
        builder.wx_universal_link = this.wx_universal_link;
        builder.wx_app_username = this.wx_app_username;
        builder.wx_app_path = this.wx_app_path;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.wx_app_id != null) {
            sb.append(", wx_app_id=");
            sb.append(this.wx_app_id);
        }
        if (this.wx_universal_link != null) {
            sb.append(", wx_universal_link=");
            sb.append(this.wx_universal_link);
        }
        if (this.wx_app_username != null) {
            sb.append(", wx_app_username=");
            sb.append(this.wx_app_username);
        }
        if (this.wx_app_path != null) {
            sb.append(", wx_app_path=");
            sb.append(this.wx_app_path);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "WXProgramRes{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
