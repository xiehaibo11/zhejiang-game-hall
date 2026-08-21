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
import java.util.List;

public final class AntiFraudLogConfig extends AndroidMessage<AntiFraudLogConfig, Builder> {
    public static final ProtoAdapter<AntiFraudLogConfig> ADAPTER;
    public static final Parcelable.Creator<AntiFraudLogConfig> CREATOR;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = WireField.Label.REPEATED, tag = 2)
    public final List<String> events;

    @WireField(adapter = "com.sigmob.sdk.base.models.MotionConfig#ADAPTER", tag = 1)
    public final MotionConfig motion_config;

    public static final class Builder extends Message.Builder<AntiFraudLogConfig, Builder> {
        public List<String> events = Internal.newMutableList();
        public MotionConfig motion_config;

        @Override
        public AntiFraudLogConfig build() {
            return new AntiFraudLogConfig(this.motion_config, this.events, super.buildUnknownFields());
        }

        public Builder events(List<String> list) {
            Internal.checkElementsNotNull(list);
            this.events = list;
            return this;
        }

        public Builder motion_config(MotionConfig motionConfig) {
            this.motion_config = motionConfig;
            return this;
        }
    }

    private static final class ProtoAdapter_AntiFraudLogConfig extends ProtoAdapter<AntiFraudLogConfig> {
        public ProtoAdapter_AntiFraudLogConfig() {
            super(FieldEncoding.LENGTH_DELIMITED, AntiFraudLogConfig.class);
        }

        @Override
        public AntiFraudLogConfig decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.motion_config(MotionConfig.ADAPTER.decode(protoReader));
                } else if (iNextTag != 2) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.events.add(ProtoAdapter.STRING.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, AntiFraudLogConfig antiFraudLogConfig) throws IOException {
            MotionConfig.ADAPTER.encodeWithTag(protoWriter, 1, antiFraudLogConfig.motion_config);
            ProtoAdapter.STRING.asRepeated().encodeWithTag(protoWriter, 2, antiFraudLogConfig.events);
            protoWriter.writeBytes(antiFraudLogConfig.unknownFields());
        }

        @Override
        public int encodedSize(AntiFraudLogConfig antiFraudLogConfig) {
            return MotionConfig.ADAPTER.encodedSizeWithTag(1, antiFraudLogConfig.motion_config) + ProtoAdapter.STRING.asRepeated().encodedSizeWithTag(2, antiFraudLogConfig.events) + antiFraudLogConfig.unknownFields().size();
        }

        @Override
        public AntiFraudLogConfig redact(AntiFraudLogConfig antiFraudLogConfig) {
            Builder builderNewBuilder = antiFraudLogConfig.newBuilder();
            if (builderNewBuilder.motion_config != null) {
                builderNewBuilder.motion_config = MotionConfig.ADAPTER.redact(builderNewBuilder.motion_config);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_AntiFraudLogConfig protoAdapter_AntiFraudLogConfig = new ProtoAdapter_AntiFraudLogConfig();
        ADAPTER = protoAdapter_AntiFraudLogConfig;
        CREATOR = AndroidMessage.newCreator(protoAdapter_AntiFraudLogConfig);
    }

    public AntiFraudLogConfig(MotionConfig motionConfig, List<String> list) {
        this(motionConfig, list, ByteString.EMPTY);
    }

    public AntiFraudLogConfig(MotionConfig motionConfig, List<String> list, ByteString byteString) {
        super(ADAPTER, byteString);
        this.motion_config = motionConfig;
        this.events = Internal.immutableCopyOf("events", list);
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AntiFraudLogConfig)) {
            return false;
        }
        AntiFraudLogConfig antiFraudLogConfig = (AntiFraudLogConfig) obj;
        return unknownFields().equals(antiFraudLogConfig.unknownFields()) && Internal.equals(this.motion_config, antiFraudLogConfig.motion_config) && this.events.equals(antiFraudLogConfig.events);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        MotionConfig motionConfig = this.motion_config;
        int iHashCode2 = ((iHashCode + (motionConfig != null ? motionConfig.hashCode() : 0)) * 37) + this.events.hashCode();
        this.hashCode = iHashCode2;
        return iHashCode2;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.motion_config = this.motion_config;
        builder.events = Internal.copyOf("events", this.events);
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.motion_config != null) {
            sb.append(", motion_config=");
            sb.append(this.motion_config);
        }
        if (!this.events.isEmpty()) {
            sb.append(", events=");
            sb.append(this.events);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "AntiFraudLogConfig{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
