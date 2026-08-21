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
public final class RvConfig extends AndroidMessage<RvConfig, Builder> {
    public static final ProtoAdapter<RvConfig> ADAPTER;
    public static final Parcelable.Creator<RvConfig> CREATOR;
    public static final Integer DEFAULT_AD_LOAD_TIMEOUT;
    public static final Integer DEFAULT_CACHETOP;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final Integer ad_load_timeout;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final Integer cacheTop;

    @WireField(adapter = "com.sigmob.sdk.base.models.DialogSetting#ADAPTER", tag = 3)
    public final DialogSetting close_dialog_setting;

    public static final class Builder extends Message.Builder<RvConfig, Builder> {
        public DialogSetting close_dialog_setting;
        public Integer cacheTop = RvConfig.DEFAULT_CACHETOP;
        public Integer ad_load_timeout = RvConfig.DEFAULT_AD_LOAD_TIMEOUT;

        public Builder ad_load_timeout(Integer num) {
            this.ad_load_timeout = num;
            return this;
        }

        @Override // com.czhj.wire.Message.Builder
        public RvConfig build() {
            return new RvConfig(this.cacheTop, this.ad_load_timeout, this.close_dialog_setting, super.buildUnknownFields());
        }

        public Builder cacheTop(Integer num) {
            this.cacheTop = num;
            return this;
        }

        public Builder close_dialog_setting(DialogSetting dialogSetting) {
            this.close_dialog_setting = dialogSetting;
            return this;
        }
    }

    private static final class ProtoAdapter_RvConfig extends ProtoAdapter<RvConfig> {
        public ProtoAdapter_RvConfig() {
            super(FieldEncoding.LENGTH_DELIMITED, RvConfig.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public RvConfig decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.cacheTop(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.ad_load_timeout(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.close_dialog_setting(DialogSetting.ADAPTER.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, RvConfig rvConfig) throws IOException {
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 1, rvConfig.cacheTop);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 2, rvConfig.ad_load_timeout);
            DialogSetting.ADAPTER.encodeWithTag(protoWriter, 3, rvConfig.close_dialog_setting);
            protoWriter.writeBytes(rvConfig.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(RvConfig rvConfig) {
            return ProtoAdapter.UINT32.encodedSizeWithTag(1, rvConfig.cacheTop) + ProtoAdapter.UINT32.encodedSizeWithTag(2, rvConfig.ad_load_timeout) + DialogSetting.ADAPTER.encodedSizeWithTag(3, rvConfig.close_dialog_setting) + rvConfig.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public RvConfig redact(RvConfig rvConfig) {
            Builder builderNewBuilder = rvConfig.newBuilder();
            if (builderNewBuilder.close_dialog_setting != null) {
                builderNewBuilder.close_dialog_setting = DialogSetting.ADAPTER.redact(builderNewBuilder.close_dialog_setting);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_RvConfig protoAdapter_RvConfig = new ProtoAdapter_RvConfig();
        ADAPTER = protoAdapter_RvConfig;
        CREATOR = AndroidMessage.newCreator(protoAdapter_RvConfig);
        DEFAULT_CACHETOP = 5;
        DEFAULT_AD_LOAD_TIMEOUT = 45;
    }

    public RvConfig(Integer num, Integer num2, DialogSetting dialogSetting) {
        this(num, num2, dialogSetting, ByteString.EMPTY);
    }

    public RvConfig(Integer num, Integer num2, DialogSetting dialogSetting, ByteString byteString) {
        super(ADAPTER, byteString);
        this.cacheTop = num;
        this.ad_load_timeout = num2;
        this.close_dialog_setting = dialogSetting;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof RvConfig)) {
            return false;
        }
        RvConfig rvConfig = (RvConfig) obj;
        return unknownFields().equals(rvConfig.unknownFields()) && Internal.equals(this.cacheTop, rvConfig.cacheTop) && Internal.equals(this.ad_load_timeout, rvConfig.ad_load_timeout) && Internal.equals(this.close_dialog_setting, rvConfig.close_dialog_setting);
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
        int iHashCode3 = (iHashCode2 + (num2 != null ? num2.hashCode() : 0)) * 37;
        DialogSetting dialogSetting = this.close_dialog_setting;
        int iHashCode4 = iHashCode3 + (dialogSetting != null ? dialogSetting.hashCode() : 0);
        this.hashCode = iHashCode4;
        return iHashCode4;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.cacheTop = this.cacheTop;
        builder.ad_load_timeout = this.ad_load_timeout;
        builder.close_dialog_setting = this.close_dialog_setting;
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
        if (this.close_dialog_setting != null) {
            sb.append(", close_dialog_setting=");
            sb.append(this.close_dialog_setting);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "RvConfig{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
