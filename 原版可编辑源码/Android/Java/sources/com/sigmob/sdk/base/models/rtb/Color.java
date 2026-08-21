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

public final class Color extends AndroidMessage<Color, Builder> {
    public static final ProtoAdapter<Color> ADAPTER;
    public static final Parcelable.Creator<Color> CREATOR;
    public static final Float DEFAULT_ALPHA;
    public static final Integer DEFAULT_BLUE;
    public static final Integer DEFAULT_GREEN;
    public static final Integer DEFAULT_RED;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 4)
    public final Float alpha;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final Integer blue;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final Integer green;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final Integer red;

    public static final class Builder extends Message.Builder<Color, Builder> {
        public Integer red = Color.DEFAULT_RED;
        public Integer green = Color.DEFAULT_GREEN;
        public Integer blue = Color.DEFAULT_BLUE;
        public Float alpha = Color.DEFAULT_ALPHA;

        public Builder alpha(Float f) {
            this.alpha = f;
            return this;
        }

        public Builder blue(Integer num) {
            this.blue = num;
            return this;
        }

        @Override
        public Color build() {
            return new Color(this.red, this.green, this.blue, this.alpha, super.buildUnknownFields());
        }

        public Builder green(Integer num) {
            this.green = num;
            return this;
        }

        public Builder red(Integer num) {
            this.red = num;
            return this;
        }
    }

    private static final class ProtoAdapter_Color extends ProtoAdapter<Color> {
        public ProtoAdapter_Color() {
            super(FieldEncoding.LENGTH_DELIMITED, Color.class);
        }

        @Override
        public Color decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.red(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.green(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag == 3) {
                    builder.blue(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag != 4) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.alpha(ProtoAdapter.FLOAT.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, Color color) throws IOException {
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 1, color.red);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 2, color.green);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 3, color.blue);
            ProtoAdapter.FLOAT.encodeWithTag(protoWriter, 4, color.alpha);
            protoWriter.writeBytes(color.unknownFields());
        }

        @Override
        public int encodedSize(Color color) {
            return ProtoAdapter.UINT32.encodedSizeWithTag(1, color.red) + ProtoAdapter.UINT32.encodedSizeWithTag(2, color.green) + ProtoAdapter.UINT32.encodedSizeWithTag(3, color.blue) + ProtoAdapter.FLOAT.encodedSizeWithTag(4, color.alpha) + color.unknownFields().size();
        }

        @Override
        public Color redact(Color color) {
            Builder builderNewBuilder = color.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_Color protoAdapter_Color = new ProtoAdapter_Color();
        ADAPTER = protoAdapter_Color;
        CREATOR = AndroidMessage.newCreator(protoAdapter_Color);
        DEFAULT_RED = 0;
        DEFAULT_GREEN = 0;
        DEFAULT_BLUE = 0;
        DEFAULT_ALPHA = Float.valueOf(0.0f);
    }

    public Color(Integer num, Integer num2, Integer num3, Float f) {
        this(num, num2, num3, f, ByteString.EMPTY);
    }

    public Color(Integer num, Integer num2, Integer num3, Float f, ByteString byteString) {
        super(ADAPTER, byteString);
        this.red = num;
        this.green = num2;
        this.blue = num3;
        this.alpha = f;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof Color)) {
            return false;
        }
        Color color = (Color) obj;
        return unknownFields().equals(color.unknownFields()) && Internal.equals(this.red, color.red) && Internal.equals(this.green, color.green) && Internal.equals(this.blue, color.blue) && Internal.equals(this.alpha, color.alpha);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Integer num = this.red;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 37;
        Integer num2 = this.green;
        int iHashCode3 = (iHashCode2 + (num2 != null ? num2.hashCode() : 0)) * 37;
        Integer num3 = this.blue;
        int iHashCode4 = (iHashCode3 + (num3 != null ? num3.hashCode() : 0)) * 37;
        Float f = this.alpha;
        int iHashCode5 = iHashCode4 + (f != null ? f.hashCode() : 0);
        this.hashCode = iHashCode5;
        return iHashCode5;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.red = this.red;
        builder.green = this.green;
        builder.blue = this.blue;
        builder.alpha = this.alpha;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.red != null) {
            sb.append(", red=");
            sb.append(this.red);
        }
        if (this.green != null) {
            sb.append(", green=");
            sb.append(this.green);
        }
        if (this.blue != null) {
            sb.append(", blue=");
            sb.append(this.blue);
        }
        if (this.alpha != null) {
            sb.append(", alpha=");
            sb.append(this.alpha);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "Color{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
