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

public final class AndroidMarket extends AndroidMessage<AndroidMarket, Builder> {
    public static final ProtoAdapter<AndroidMarket> ADAPTER;
    public static final Parcelable.Creator<AndroidMarket> CREATOR;
    public static final String DEFAULT_APPSTORE_PACKAGE_NAME = "";
    public static final String DEFAULT_APP_PACKAGE_NAME = "";
    public static final String DEFAULT_MARKETURL = "";
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final String app_package_name;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final String appstore_package_name;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final String market_url;

    public static final class Builder extends Message.Builder<AndroidMarket, Builder> {
        public String app_package_name;
        public String appstore_package_name;
        public String marketUrl;

        public Builder app_package_name(String str) {
            this.app_package_name = str;
            return this;
        }

        public Builder appstore_package_name(String str) {
            this.appstore_package_name = str;
            return this;
        }

        @Override
        public AndroidMarket build() {
            return new AndroidMarket(this.marketUrl, this.app_package_name, this.appstore_package_name, super.buildUnknownFields());
        }

        public Builder marketUrl(String str) {
            this.marketUrl = str;
            return this;
        }
    }

    private static final class ProtoAdapter_AndroidMarket extends ProtoAdapter<AndroidMarket> {
        public ProtoAdapter_AndroidMarket() {
            super(FieldEncoding.LENGTH_DELIMITED, AndroidMarket.class);
        }

        @Override
        public AndroidMarket decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.marketUrl(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.app_package_name(ProtoAdapter.STRING.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.appstore_package_name(ProtoAdapter.STRING.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, AndroidMarket androidMarket) throws IOException {
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 1, androidMarket.market_url);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 2, androidMarket.app_package_name);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 3, androidMarket.appstore_package_name);
            protoWriter.writeBytes(androidMarket.unknownFields());
        }

        @Override
        public int encodedSize(AndroidMarket androidMarket) {
            return ProtoAdapter.STRING.encodedSizeWithTag(1, androidMarket.market_url) + ProtoAdapter.STRING.encodedSizeWithTag(2, androidMarket.app_package_name) + ProtoAdapter.STRING.encodedSizeWithTag(3, androidMarket.appstore_package_name) + androidMarket.unknownFields().size();
        }

        @Override
        public AndroidMarket redact(AndroidMarket androidMarket) {
            Builder builderNewBuilder = androidMarket.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_AndroidMarket protoAdapter_AndroidMarket = new ProtoAdapter_AndroidMarket();
        ADAPTER = protoAdapter_AndroidMarket;
        CREATOR = AndroidMessage.newCreator(protoAdapter_AndroidMarket);
    }

    public AndroidMarket(String str, String str2, String str3) {
        this(str, str2, str3, ByteString.EMPTY);
    }

    public AndroidMarket(String str, String str2, String str3, ByteString byteString) {
        super(ADAPTER, byteString);
        this.market_url = str;
        this.app_package_name = str2;
        this.appstore_package_name = str3;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AndroidMarket)) {
            return false;
        }
        AndroidMarket androidMarket = (AndroidMarket) obj;
        return unknownFields().equals(androidMarket.unknownFields()) && Internal.equals(this.market_url, androidMarket.market_url) && Internal.equals(this.app_package_name, androidMarket.app_package_name) && Internal.equals(this.appstore_package_name, androidMarket.appstore_package_name);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        String str = this.market_url;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 37;
        String str2 = this.app_package_name;
        int iHashCode3 = (iHashCode2 + (str2 != null ? str2.hashCode() : 0)) * 37;
        String str3 = this.appstore_package_name;
        int iHashCode4 = iHashCode3 + (str3 != null ? str3.hashCode() : 0);
        this.hashCode = iHashCode4;
        return iHashCode4;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.marketUrl = this.market_url;
        builder.app_package_name = this.app_package_name;
        builder.appstore_package_name = this.appstore_package_name;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.market_url != null) {
            sb.append(", marketUrl=");
            sb.append(this.market_url);
        }
        if (this.app_package_name != null) {
            sb.append(", app_package_name=");
            sb.append(this.app_package_name);
        }
        if (this.appstore_package_name != null) {
            sb.append(", appstore_package_name=");
            sb.append(this.appstore_package_name);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "AndroidMarket{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
