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
public final class SlotAdSetting extends AndroidMessage<SlotAdSetting, Builder> {
    public static final ProtoAdapter<SlotAdSetting> ADAPTER;
    public static final Parcelable.Creator<SlotAdSetting> CREATOR;
    public static final Boolean DEFAULT_DISABLE_X_REQUESTED_WITH;
    public static final Integer DEFAULT_RETRY_COUNT;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 5)
    public final Boolean disable_x_requested_with;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.NativeAdSetting#ADAPTER", tag = 3)
    public final NativeAdSetting native_setting;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 4)
    public final Integer retry_count;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.RvAdSetting#ADAPTER", tag = 1)
    public final RvAdSetting rv_setting;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.SplashAdSetting#ADAPTER", tag = 2)
    public final SplashAdSetting splash_setting;

    public static final class Builder extends Message.Builder<SlotAdSetting, Builder> {
        public NativeAdSetting native_setting;
        public RvAdSetting rv_setting;
        public SplashAdSetting splash_setting;
        public Integer retry_count = SlotAdSetting.DEFAULT_RETRY_COUNT;
        public Boolean disable_x_requested_with = SlotAdSetting.DEFAULT_DISABLE_X_REQUESTED_WITH;

        @Override // com.czhj.wire.Message.Builder
        public SlotAdSetting build() {
            return new SlotAdSetting(this.rv_setting, this.splash_setting, this.native_setting, this.retry_count, this.disable_x_requested_with, super.buildUnknownFields());
        }

        public Builder disable_x_requested_with(Boolean bool) {
            this.disable_x_requested_with = bool;
            return this;
        }

        public Builder native_setting(NativeAdSetting nativeAdSetting) {
            this.native_setting = nativeAdSetting;
            return this;
        }

        public Builder retry_count(Integer num) {
            this.retry_count = num;
            return this;
        }

        public Builder rv_setting(RvAdSetting rvAdSetting) {
            this.rv_setting = rvAdSetting;
            return this;
        }

        public Builder splash_setting(SplashAdSetting splashAdSetting) {
            this.splash_setting = splashAdSetting;
            return this;
        }
    }

    private static final class ProtoAdapter_SlotAdSetting extends ProtoAdapter<SlotAdSetting> {
        public ProtoAdapter_SlotAdSetting() {
            super(FieldEncoding.LENGTH_DELIMITED, SlotAdSetting.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public SlotAdSetting decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.rv_setting(RvAdSetting.ADAPTER.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.splash_setting(SplashAdSetting.ADAPTER.decode(protoReader));
                } else if (iNextTag == 3) {
                    builder.native_setting(NativeAdSetting.ADAPTER.decode(protoReader));
                } else if (iNextTag == 4) {
                    builder.retry_count(ProtoAdapter.INT32.decode(protoReader));
                } else if (iNextTag != 5) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.disable_x_requested_with(ProtoAdapter.BOOL.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, SlotAdSetting slotAdSetting) throws IOException {
            RvAdSetting.ADAPTER.encodeWithTag(protoWriter, 1, slotAdSetting.rv_setting);
            SplashAdSetting.ADAPTER.encodeWithTag(protoWriter, 2, slotAdSetting.splash_setting);
            NativeAdSetting.ADAPTER.encodeWithTag(protoWriter, 3, slotAdSetting.native_setting);
            ProtoAdapter.INT32.encodeWithTag(protoWriter, 4, slotAdSetting.retry_count);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 5, slotAdSetting.disable_x_requested_with);
            protoWriter.writeBytes(slotAdSetting.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(SlotAdSetting slotAdSetting) {
            return RvAdSetting.ADAPTER.encodedSizeWithTag(1, slotAdSetting.rv_setting) + SplashAdSetting.ADAPTER.encodedSizeWithTag(2, slotAdSetting.splash_setting) + NativeAdSetting.ADAPTER.encodedSizeWithTag(3, slotAdSetting.native_setting) + ProtoAdapter.INT32.encodedSizeWithTag(4, slotAdSetting.retry_count) + ProtoAdapter.BOOL.encodedSizeWithTag(5, slotAdSetting.disable_x_requested_with) + slotAdSetting.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public SlotAdSetting redact(SlotAdSetting slotAdSetting) {
            Builder builderNewBuilder = slotAdSetting.newBuilder();
            if (builderNewBuilder.rv_setting != null) {
                builderNewBuilder.rv_setting = RvAdSetting.ADAPTER.redact(builderNewBuilder.rv_setting);
            }
            if (builderNewBuilder.splash_setting != null) {
                builderNewBuilder.splash_setting = SplashAdSetting.ADAPTER.redact(builderNewBuilder.splash_setting);
            }
            if (builderNewBuilder.native_setting != null) {
                builderNewBuilder.native_setting = NativeAdSetting.ADAPTER.redact(builderNewBuilder.native_setting);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_SlotAdSetting protoAdapter_SlotAdSetting = new ProtoAdapter_SlotAdSetting();
        ADAPTER = protoAdapter_SlotAdSetting;
        CREATOR = AndroidMessage.newCreator(protoAdapter_SlotAdSetting);
        DEFAULT_RETRY_COUNT = 0;
        DEFAULT_DISABLE_X_REQUESTED_WITH = false;
    }

    public SlotAdSetting(RvAdSetting rvAdSetting, SplashAdSetting splashAdSetting, NativeAdSetting nativeAdSetting, Integer num, Boolean bool) {
        this(rvAdSetting, splashAdSetting, nativeAdSetting, num, bool, ByteString.EMPTY);
    }

    public SlotAdSetting(RvAdSetting rvAdSetting, SplashAdSetting splashAdSetting, NativeAdSetting nativeAdSetting, Integer num, Boolean bool, ByteString byteString) {
        super(ADAPTER, byteString);
        this.rv_setting = rvAdSetting;
        this.splash_setting = splashAdSetting;
        this.native_setting = nativeAdSetting;
        this.retry_count = num;
        this.disable_x_requested_with = bool;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof SlotAdSetting)) {
            return false;
        }
        SlotAdSetting slotAdSetting = (SlotAdSetting) obj;
        return unknownFields().equals(slotAdSetting.unknownFields()) && Internal.equals(this.rv_setting, slotAdSetting.rv_setting) && Internal.equals(this.splash_setting, slotAdSetting.splash_setting) && Internal.equals(this.native_setting, slotAdSetting.native_setting) && Internal.equals(this.retry_count, slotAdSetting.retry_count) && Internal.equals(this.disable_x_requested_with, slotAdSetting.disable_x_requested_with);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        RvAdSetting rvAdSetting = this.rv_setting;
        int iHashCode2 = (iHashCode + (rvAdSetting != null ? rvAdSetting.hashCode() : 0)) * 37;
        SplashAdSetting splashAdSetting = this.splash_setting;
        int iHashCode3 = (iHashCode2 + (splashAdSetting != null ? splashAdSetting.hashCode() : 0)) * 37;
        NativeAdSetting nativeAdSetting = this.native_setting;
        int iHashCode4 = (iHashCode3 + (nativeAdSetting != null ? nativeAdSetting.hashCode() : 0)) * 37;
        Integer num = this.retry_count;
        int iHashCode5 = (iHashCode4 + (num != null ? num.hashCode() : 0)) * 37;
        Boolean bool = this.disable_x_requested_with;
        int iHashCode6 = iHashCode5 + (bool != null ? bool.hashCode() : 0);
        this.hashCode = iHashCode6;
        return iHashCode6;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.rv_setting = this.rv_setting;
        builder.splash_setting = this.splash_setting;
        builder.native_setting = this.native_setting;
        builder.retry_count = this.retry_count;
        builder.disable_x_requested_with = this.disable_x_requested_with;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.rv_setting != null) {
            sb.append(", rv_setting=");
            sb.append(this.rv_setting);
        }
        if (this.splash_setting != null) {
            sb.append(", splash_setting=");
            sb.append(this.splash_setting);
        }
        if (this.native_setting != null) {
            sb.append(", native_setting=");
            sb.append(this.native_setting);
        }
        if (this.retry_count != null) {
            sb.append(", retry_count=");
            sb.append(this.retry_count);
        }
        if (this.disable_x_requested_with != null) {
            sb.append(", disable_x_requested_with=");
            sb.append(this.disable_x_requested_with);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "SlotAdSetting{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
