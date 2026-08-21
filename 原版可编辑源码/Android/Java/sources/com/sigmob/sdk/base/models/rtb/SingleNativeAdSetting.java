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

public final class SingleNativeAdSetting extends AndroidMessage<SingleNativeAdSetting, Builder> {
    public static final ProtoAdapter<SingleNativeAdSetting> ADAPTER;
    public static final Parcelable.Creator<SingleNativeAdSetting> CREATOR;
    public static final Boolean DEFAULT_USE_NA_VIDEO_COMPONENT;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 1)
    public final Boolean use_na_video_component;

    public static final class Builder extends Message.Builder<SingleNativeAdSetting, Builder> {
        public Boolean use_na_video_component = SingleNativeAdSetting.DEFAULT_USE_NA_VIDEO_COMPONENT;

        @Override
        public SingleNativeAdSetting build() {
            return new SingleNativeAdSetting(this.use_na_video_component, super.buildUnknownFields());
        }

        public Builder use_na_video_component(Boolean bool) {
            this.use_na_video_component = bool;
            return this;
        }
    }

    private static final class ProtoAdapter_SingleNativeAdSetting extends ProtoAdapter<SingleNativeAdSetting> {
        public ProtoAdapter_SingleNativeAdSetting() {
            super(FieldEncoding.LENGTH_DELIMITED, SingleNativeAdSetting.class);
        }

        @Override
        public SingleNativeAdSetting decode(ProtoReader protoReader) throws IOException {
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
                    builder.use_na_video_component(ProtoAdapter.BOOL.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, SingleNativeAdSetting singleNativeAdSetting) throws IOException {
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 1, singleNativeAdSetting.use_na_video_component);
            protoWriter.writeBytes(singleNativeAdSetting.unknownFields());
        }

        @Override
        public int encodedSize(SingleNativeAdSetting singleNativeAdSetting) {
            return ProtoAdapter.BOOL.encodedSizeWithTag(1, singleNativeAdSetting.use_na_video_component) + singleNativeAdSetting.unknownFields().size();
        }

        @Override
        public SingleNativeAdSetting redact(SingleNativeAdSetting singleNativeAdSetting) {
            Builder builderNewBuilder = singleNativeAdSetting.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_SingleNativeAdSetting protoAdapter_SingleNativeAdSetting = new ProtoAdapter_SingleNativeAdSetting();
        ADAPTER = protoAdapter_SingleNativeAdSetting;
        CREATOR = AndroidMessage.newCreator(protoAdapter_SingleNativeAdSetting);
        DEFAULT_USE_NA_VIDEO_COMPONENT = false;
    }

    public SingleNativeAdSetting(Boolean bool) {
        this(bool, ByteString.EMPTY);
    }

    public SingleNativeAdSetting(Boolean bool, ByteString byteString) {
        super(ADAPTER, byteString);
        this.use_na_video_component = bool;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof SingleNativeAdSetting)) {
            return false;
        }
        SingleNativeAdSetting singleNativeAdSetting = (SingleNativeAdSetting) obj;
        return unknownFields().equals(singleNativeAdSetting.unknownFields()) && Internal.equals(this.use_na_video_component, singleNativeAdSetting.use_na_video_component);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Boolean bool = this.use_na_video_component;
        int iHashCode2 = iHashCode + (bool != null ? bool.hashCode() : 0);
        this.hashCode = iHashCode2;
        return iHashCode2;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.use_na_video_component = this.use_na_video_component;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.use_na_video_component != null) {
            sb.append(", use_na_video_component=");
            sb.append(this.use_na_video_component);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "SingleNativeAdSetting{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
