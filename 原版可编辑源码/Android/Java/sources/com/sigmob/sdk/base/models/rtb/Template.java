package com.sigmob.sdk.base.models.rtb;

import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Log;
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
import java.util.UUID;

public final class Template extends AndroidMessage<Template, Builder> {
    public static final ProtoAdapter<Template> ADAPTER;
    public static final Parcelable.Creator<Template> CREATOR;
    public static final ByteString DEFAULT_CONTEXT;
    public static final Integer DEFAULT_TYPE;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BYTES", tag = 2)
    public final ByteString context;
    public String templateId;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final Integer type;

    public static final class Builder extends Message.Builder<Template, Builder> {
        public ByteString context;
        public Integer type = Template.DEFAULT_TYPE;

        @Override
        public Template build() {
            return new Template(this.type, this.context, super.buildUnknownFields());
        }

        public Builder context(ByteString byteString) {
            this.context = byteString;
            return this;
        }

        public Builder type(Integer num) {
            this.type = num;
            return this;
        }
    }

    private static final class ProtoAdapter_Template extends ProtoAdapter<Template> {
        public ProtoAdapter_Template() {
            super(FieldEncoding.LENGTH_DELIMITED, Template.class);
        }

        @Override
        public Template decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.type(ProtoAdapter.UINT32.decode(protoReader));
                } else if (iNextTag != 2) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.context(ProtoAdapter.BYTES.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, Template template) throws IOException {
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 1, template.type);
            ProtoAdapter.BYTES.encodeWithTag(protoWriter, 2, template.context);
            protoWriter.writeBytes(template.unknownFields());
        }

        @Override
        public int encodedSize(Template template) {
            return ProtoAdapter.UINT32.encodedSizeWithTag(1, template.type) + ProtoAdapter.BYTES.encodedSizeWithTag(2, template.context) + template.unknownFields().size();
        }

        @Override
        public Template redact(Template template) {
            Builder builderNewBuilder = template.newBuilder();
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_Template protoAdapter_Template = new ProtoAdapter_Template();
        ADAPTER = protoAdapter_Template;
        CREATOR = AndroidMessage.newCreator(protoAdapter_Template);
        DEFAULT_TYPE = 0;
        DEFAULT_CONTEXT = ByteString.EMPTY;
    }

    public Template(Integer num, ByteString byteString) {
        this(num, byteString, ByteString.EMPTY);
    }

    public Template(Integer num, ByteString byteString, ByteString byteString2) {
        super(ADAPTER, byteString2);
        this.type = num;
        this.context = byteString;
        if (num.intValue() == 2 && TextUtils.isEmpty(this.templateId)) {
            this.templateId = UUID.randomUUID().toString();
        }
        Log.d("templateId", "--------Template--------" + this.templateId);
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof Template)) {
            return false;
        }
        Template template = (Template) obj;
        return unknownFields().equals(template.unknownFields()) && Internal.equals(this.type, template.type) && Internal.equals(this.context, template.context);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Integer num = this.type;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 37;
        ByteString byteString = this.context;
        int iHashCode3 = iHashCode2 + (byteString != null ? byteString.hashCode() : 0);
        this.hashCode = iHashCode3;
        return iHashCode3;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.type = this.type;
        builder.context = this.context;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.type != null) {
            sb.append(", type=");
            sb.append(this.type);
        }
        if (this.context != null) {
            sb.append(", context=");
            sb.append(this.context);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "Template{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
