package com.sigmob.sdk.base.models.config;

import android.os.Parcelable;
import com.czhj.sdk.common.models.App;
import com.czhj.sdk.common.models.Device;
import com.czhj.sdk.common.models.Network;
import com.czhj.sdk.common.models.Privacy;
import com.czhj.sdk.common.models.User;
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

public final class SdkConfigRequest extends AndroidMessage<SdkConfigRequest, Builder> {
    public static final ProtoAdapter<SdkConfigRequest> ADAPTER;
    public static final Parcelable.Creator<SdkConfigRequest> CREATOR;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.App#ADAPTER", tag = 1)
    public final App app;

    @WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Device#ADAPTER", tag = 2)
    public final Device device;

    @WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Network#ADAPTER", tag = 3)
    public final Network network;

    @WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Privacy#ADAPTER", tag = 4)
    public final Privacy privacy;

    @WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.User#ADAPTER", tag = 5)
    public final User user;

    public static final class Builder extends Message.Builder<SdkConfigRequest, Builder> {
        public App app;
        public Device device;
        public Network network;
        public Privacy privacy;
        public User user;

        public Builder app(App app) {
            this.app = app;
            return this;
        }

        @Override
        public SdkConfigRequest build() {
            return new SdkConfigRequest(this.app, this.device, this.network, this.privacy, this.user, super.buildUnknownFields());
        }

        public Builder device(Device device) {
            this.device = device;
            return this;
        }

        public Builder network(Network network) {
            this.network = network;
            return this;
        }

        public Builder privacy(Privacy privacy) {
            this.privacy = privacy;
            return this;
        }

        public Builder user(User user) {
            this.user = user;
            return this;
        }
    }

    private static final class ProtoAdapter_SdkConfigRequest extends ProtoAdapter<SdkConfigRequest> {
        public ProtoAdapter_SdkConfigRequest() {
            super(FieldEncoding.LENGTH_DELIMITED, SdkConfigRequest.class);
        }

        @Override
        public SdkConfigRequest decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                if (iNextTag == 1) {
                    builder.app(App.ADAPTER.decode(protoReader));
                } else if (iNextTag == 2) {
                    builder.device(Device.ADAPTER.decode(protoReader));
                } else if (iNextTag == 3) {
                    builder.network(Network.ADAPTER.decode(protoReader));
                } else if (iNextTag == 4) {
                    builder.privacy(Privacy.ADAPTER.decode(protoReader));
                } else if (iNextTag != 5) {
                    FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                    builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                } else {
                    builder.user(User.ADAPTER.decode(protoReader));
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, SdkConfigRequest sdkConfigRequest) throws IOException {
            App.ADAPTER.encodeWithTag(protoWriter, 1, sdkConfigRequest.app);
            Device.ADAPTER.encodeWithTag(protoWriter, 2, sdkConfigRequest.device);
            Network.ADAPTER.encodeWithTag(protoWriter, 3, sdkConfigRequest.network);
            Privacy.ADAPTER.encodeWithTag(protoWriter, 4, sdkConfigRequest.privacy);
            User.ADAPTER.encodeWithTag(protoWriter, 5, sdkConfigRequest.user);
            protoWriter.writeBytes(sdkConfigRequest.unknownFields());
        }

        @Override
        public int encodedSize(SdkConfigRequest sdkConfigRequest) {
            return App.ADAPTER.encodedSizeWithTag(1, sdkConfigRequest.app) + Device.ADAPTER.encodedSizeWithTag(2, sdkConfigRequest.device) + Network.ADAPTER.encodedSizeWithTag(3, sdkConfigRequest.network) + Privacy.ADAPTER.encodedSizeWithTag(4, sdkConfigRequest.privacy) + User.ADAPTER.encodedSizeWithTag(5, sdkConfigRequest.user) + sdkConfigRequest.unknownFields().size();
        }

        @Override
        public SdkConfigRequest redact(SdkConfigRequest sdkConfigRequest) {
            Builder builderNewBuilder = sdkConfigRequest.newBuilder();
            if (builderNewBuilder.app != null) {
                builderNewBuilder.app = App.ADAPTER.redact(builderNewBuilder.app);
            }
            if (builderNewBuilder.device != null) {
                builderNewBuilder.device = Device.ADAPTER.redact(builderNewBuilder.device);
            }
            if (builderNewBuilder.network != null) {
                builderNewBuilder.network = Network.ADAPTER.redact(builderNewBuilder.network);
            }
            if (builderNewBuilder.privacy != null) {
                builderNewBuilder.privacy = Privacy.ADAPTER.redact(builderNewBuilder.privacy);
            }
            if (builderNewBuilder.user != null) {
                builderNewBuilder.user = User.ADAPTER.redact(builderNewBuilder.user);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_SdkConfigRequest protoAdapter_SdkConfigRequest = new ProtoAdapter_SdkConfigRequest();
        ADAPTER = protoAdapter_SdkConfigRequest;
        CREATOR = AndroidMessage.newCreator(protoAdapter_SdkConfigRequest);
    }

    public SdkConfigRequest(App app, Device device, Network network, Privacy privacy, User user) {
        this(app, device, network, privacy, user, ByteString.EMPTY);
    }

    public SdkConfigRequest(App app, Device device, Network network, Privacy privacy, User user, ByteString byteString) {
        super(ADAPTER, byteString);
        this.app = app;
        this.device = device;
        this.network = network;
        this.privacy = privacy;
        this.user = user;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof SdkConfigRequest)) {
            return false;
        }
        SdkConfigRequest sdkConfigRequest = (SdkConfigRequest) obj;
        return unknownFields().equals(sdkConfigRequest.unknownFields()) && Internal.equals(this.app, sdkConfigRequest.app) && Internal.equals(this.device, sdkConfigRequest.device) && Internal.equals(this.network, sdkConfigRequest.network) && Internal.equals(this.privacy, sdkConfigRequest.privacy) && Internal.equals(this.user, sdkConfigRequest.user);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        App app = this.app;
        int iHashCode2 = (iHashCode + (app != null ? app.hashCode() : 0)) * 37;
        Device device = this.device;
        int iHashCode3 = (iHashCode2 + (device != null ? device.hashCode() : 0)) * 37;
        Network network = this.network;
        int iHashCode4 = (iHashCode3 + (network != null ? network.hashCode() : 0)) * 37;
        Privacy privacy = this.privacy;
        int iHashCode5 = (iHashCode4 + (privacy != null ? privacy.hashCode() : 0)) * 37;
        User user = this.user;
        int iHashCode6 = iHashCode5 + (user != null ? user.hashCode() : 0);
        this.hashCode = iHashCode6;
        return iHashCode6;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.app = this.app;
        builder.device = this.device;
        builder.network = this.network;
        builder.privacy = this.privacy;
        builder.user = this.user;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.app != null) {
            sb.append(", app=");
            sb.append(this.app);
        }
        if (this.device != null) {
            sb.append(", device=");
            sb.append(this.device);
        }
        if (this.network != null) {
            sb.append(", network=");
            sb.append(this.network);
        }
        if (this.privacy != null) {
            sb.append(", privacy=");
            sb.append(this.privacy);
        }
        if (this.user != null) {
            sb.append(", user=");
            sb.append(this.user);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "SdkConfigRequest{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
