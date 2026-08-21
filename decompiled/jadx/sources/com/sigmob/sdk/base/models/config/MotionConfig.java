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
public final class MotionConfig extends AndroidMessage<MotionConfig, Builder> {
    public static final ProtoAdapter<MotionConfig> ADAPTER;
    public static final Parcelable.Creator<MotionConfig> CREATOR;
    public static final Integer DEFAULT_COUNT;
    public static final Integer DEFAULT_INTERVAL;
    public static final Integer DEFAULT_QUEUE_MAX;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final Integer count;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final Integer interval;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final Integer queue_max;

    public static final class Builder extends Message.Builder<MotionConfig, Builder> {
        public Integer interval = MotionConfig.DEFAULT_INTERVAL;
        public Integer queue_max = MotionConfig.DEFAULT_QUEUE_MAX;
        public Integer count = MotionConfig.DEFAULT_COUNT;

        @Override // com.czhj.wire.Message.Builder
        public MotionConfig build() {
            return new MotionConfig(this.interval, this.queue_max, this.count, super.buildUnknownFields());
        }

        public Builder count(Integer num) {
            this.count = num;
            return this;
        }

        public Builder interval(Integer num) {
            this.interval = num;
            return this;
        }

        public Builder queue_max(Integer num) {
            this.queue_max = num;
            return this;
        }
    }

    private static final class ProtoAdapter_MotionConfig extends ProtoAdapter<MotionConfig> {
        public ProtoAdapter_MotionConfig() {
            super(FieldEncoding.LENGTH_DELIMITED, MotionConfig.class);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.czhj.wire.ProtoAdapter
        public MotionConfig decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.interval(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.queue_max(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag != 3) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.count(ProtoAdapter.UINT32.decode(protoReader));
                }
            }
        }

        @Override // com.czhj.wire.ProtoAdapter
        public void encode(ProtoWriter protoWriter, MotionConfig motionConfig) throws IOException {
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 1, motionConfig.interval);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 2, motionConfig.queue_max);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 3, motionConfig.count);
            protoWriter.writeBytes(motionConfig.unknownFields());
        }

        @Override // com.czhj.wire.ProtoAdapter
        public int encodedSize(MotionConfig motionConfig) {
            return ProtoAdapter.UINT32.encodedSizeWithTag(1, motionConfig.interval) + ProtoAdapter.UINT32.encodedSizeWithTag(2, motionConfig.queue_max) + ProtoAdapter.UINT32.encodedSizeWithTag(3, motionConfig.count) + motionConfig.unknownFields().size();
        }

        @Override // com.czhj.wire.ProtoAdapter
        public MotionConfig redact(MotionConfig motionConfig) {
            Builder builderNewBuilder = motionConfig.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_MotionConfig protoAdapter_MotionConfig = new ProtoAdapter_MotionConfig();
        ADAPTER = protoAdapter_MotionConfig;
        CREATOR = AndroidMessage.newCreator(protoAdapter_MotionConfig);
        DEFAULT_INTERVAL = 0;
        DEFAULT_QUEUE_MAX = 0;
        DEFAULT_COUNT = 0;
    }

    public MotionConfig(Integer num, Integer num2, Integer num3) {
        this(num, num2, num3, ByteString.EMPTY);
    }

    public MotionConfig(Integer num, Integer num2, Integer num3, ByteString byteString) {
        super(ADAPTER, byteString);
        this.interval = num;
        this.queue_max = num2;
        this.count = num3;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof MotionConfig)) {
            return false;
        }
        MotionConfig motionConfig = (MotionConfig) obj;
        return unknownFields().equals(motionConfig.unknownFields()) && Internal.equals(this.interval, motionConfig.interval) && Internal.equals(this.queue_max, motionConfig.queue_max) && Internal.equals(this.count, motionConfig.count);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Integer num = this.interval;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 37;
        Integer num2 = this.queue_max;
        int iHashCode3 = (iHashCode2 + (num2 != null ? num2.hashCode() : 0)) * 37;
        Integer num3 = this.count;
        int iHashCode4 = iHashCode3 + (num3 != null ? num3.hashCode() : 0);
        this.hashCode = iHashCode4;
        return iHashCode4;
    }

    @Override // com.czhj.wire.Message
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.interval = this.interval;
        builder.queue_max = this.queue_max;
        builder.count = this.count;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override // com.czhj.wire.Message
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.interval != null) {
            sb.append(", interval=");
            sb.append(this.interval);
        }
        if (this.queue_max != null) {
            sb.append(", queue_max=");
            sb.append(this.queue_max);
        }
        if (this.count != null) {
            sb.append(", count=");
            sb.append(this.count);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "MotionConfig{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
