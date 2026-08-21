package com.czhj.sdk.common.models;

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
import java.util.Map;

public final class BidRequest extends AndroidMessage<BidRequest, Builder> {
    public static final ProtoAdapter<BidRequest> ADAPTER;
    public static final Parcelable.Creator<BidRequest> CREATOR;
    public static final Boolean DEFAULT_AD_IS_EXPIRED;
    public static final Boolean DEFAULT_DISABLE_MEDIATION;
    public static final String DEFAULT_REQUEST_ID = "";
    public static final Integer DEFAULT_REQUEST_SCENE_TYPE;
    public static final Long DEFAULT_REQ_TIMESTAMP;
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 9)
    public final Boolean ad_is_expired;

    @WireField(adapter = "com.czhj.sdk.common.models.Version#ADAPTER", tag = 2)
    public final Version api_version;

    @WireField(adapter = "com.czhj.sdk.common.models.App#ADAPTER", tag = 3)
    public final App app;

    @WireField(adapter = "com.czhj.sdk.common.models.Device#ADAPTER", tag = 4)
    public final Device device;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 11)
    public final Boolean disable_mediation;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 19)
    public final Map<String, String> ext_options;

    @WireField(adapter = "com.czhj.sdk.common.models.HeaderBidding#ADAPTER", label = WireField.Label.REPEATED, tag = 18)
    public final List<HeaderBidding> hbs;

    @WireField(adapter = "com.czhj.sdk.common.models.HeaderBidding#ADAPTER", tag = 16)
    public final HeaderBidding header_bidding;

    @WireField(adapter = "com.czhj.sdk.common.models.Network#ADAPTER", tag = 5)
    public final Network network;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 15)
    public final Map<String, String> options;

    @WireField(adapter = "com.czhj.sdk.common.models.Privacy#ADAPTER", tag = 10)
    public final Privacy privacy;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#INT64", tag = 7)
    public final Long req_timestamp;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final String request_id;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 8)
    public final Integer request_scene_type;

    @WireField(adapter = "com.czhj.sdk.common.models.Version#ADAPTER", tag = 20)
    public final Version sdk_version;

    @WireField(adapter = "com.czhj.sdk.common.models.AdSlot#ADAPTER", label = WireField.Label.REPEATED, tag = 6)
    public final List<AdSlot> slots;

    @WireField(adapter = "com.czhj.sdk.common.models.StrategyReq#ADAPTER", tag = 22)
    public final StrategyReq strategy_req;

    @WireField(adapter = "com.czhj.sdk.common.models.User#ADAPTER", tag = 17)
    public final User user;

    @WireField(adapter = "com.czhj.sdk.common.models.WXProgramReq#ADAPTER", tag = 21)
    public final WXProgramReq wx_program_req;

    public static final class Builder extends Message.Builder<BidRequest, Builder> {
        public Version api_version;
        public App app;
        public Device device;
        public HeaderBidding header_bidding;
        public Network network;
        public Privacy privacy;
        public Version sdk_version;
        public StrategyReq strategy_req;
        public User user;
        public WXProgramReq wx_program_req;
        public String request_id = "";
        public Long req_timestamp = BidRequest.DEFAULT_REQ_TIMESTAMP;
        public Integer request_scene_type = BidRequest.DEFAULT_REQUEST_SCENE_TYPE;
        public Boolean ad_is_expired = BidRequest.DEFAULT_AD_IS_EXPIRED;
        public Boolean disable_mediation = BidRequest.DEFAULT_DISABLE_MEDIATION;
        public List<AdSlot> slots = Internal.newMutableList();
        public Map<String, String> options = Internal.newMutableMap();
        public List<HeaderBidding> hbs = Internal.newMutableList();
        public Map<String, String> ext_options = Internal.newMutableMap();

        public Builder ad_is_expired(Boolean bool) {
            this.ad_is_expired = bool;
            return this;
        }

        public Builder api_version(Version version) {
            this.api_version = version;
            return this;
        }

        public Builder app(App app) {
            this.app = app;
            return this;
        }

        @Override
        public BidRequest build() {
            return new BidRequest(this.request_id, this.api_version, this.app, this.device, this.network, this.slots, this.req_timestamp, this.request_scene_type, this.ad_is_expired, this.privacy, this.disable_mediation, this.options, this.header_bidding, this.user, this.hbs, this.ext_options, this.sdk_version, this.wx_program_req, this.strategy_req, super.buildUnknownFields());
        }

        public Builder device(Device device) {
            this.device = device;
            return this;
        }

        public Builder disable_mediation(Boolean bool) {
            this.disable_mediation = bool;
            return this;
        }

        public Builder ext_options(Map<String, String> map) {
            Internal.checkElementsNotNull(map);
            this.ext_options = map;
            return this;
        }

        public Builder hbs(List<HeaderBidding> list) {
            Internal.checkElementsNotNull(list);
            this.hbs = list;
            return this;
        }

        public Builder header_bidding(HeaderBidding headerBidding) {
            this.header_bidding = headerBidding;
            return this;
        }

        public Builder network(Network network) {
            this.network = network;
            return this;
        }

        public Builder options(Map<String, String> map) {
            Internal.checkElementsNotNull(map);
            this.options = map;
            return this;
        }

        public Builder privacy(Privacy privacy) {
            this.privacy = privacy;
            return this;
        }

        public Builder req_timestamp(Long l) {
            this.req_timestamp = l;
            return this;
        }

        public Builder request_id(String str) {
            this.request_id = str;
            return this;
        }

        public Builder request_scene_type(Integer num) {
            this.request_scene_type = num;
            return this;
        }

        public Builder sdk_version(Version version) {
            this.sdk_version = version;
            return this;
        }

        public Builder slots(List<AdSlot> list) {
            Internal.checkElementsNotNull(list);
            this.slots = list;
            return this;
        }

        public Builder strategy_req(StrategyReq strategyReq) {
            this.strategy_req = strategyReq;
            return this;
        }

        public Builder user(User user) {
            this.user = user;
            return this;
        }

        public Builder wx_program_req(WXProgramReq wXProgramReq) {
            this.wx_program_req = wXProgramReq;
            return this;
        }
    }

    private static final class ProtoAdapter_BidRequest extends ProtoAdapter<BidRequest> {
        private final ProtoAdapter<Map<String, String>> ext_options;
        private final ProtoAdapter<Map<String, String>> options;

        public ProtoAdapter_BidRequest() {
            super(FieldEncoding.LENGTH_DELIMITED, BidRequest.class);
            this.options = ProtoAdapter.newMapAdapter(ProtoAdapter.STRING, ProtoAdapter.STRING);
            this.ext_options = ProtoAdapter.newMapAdapter(ProtoAdapter.STRING, ProtoAdapter.STRING);
        }

        @Override
        public BidRequest decode(ProtoReader protoReader) throws IOException {
            List list;
            ProtoAdapter protoAdapter;
            Map<String, String> map;
            ProtoAdapter<Map<String, String>> protoAdapter2;
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                switch (iNextTag) {
                    case 1:
                        builder.request_id(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 2:
                        builder.api_version(Version.ADAPTER.decode(protoReader));
                        break;
                    case 3:
                        builder.app(App.ADAPTER.decode(protoReader));
                        break;
                    case 4:
                        builder.device(Device.ADAPTER.decode(protoReader));
                        break;
                    case 5:
                        builder.network(Network.ADAPTER.decode(protoReader));
                        break;
                    case 6:
                        list = builder.slots;
                        protoAdapter = AdSlot.ADAPTER;
                        list.add(protoAdapter.decode(protoReader));
                        break;
                    case 7:
                        builder.req_timestamp(ProtoAdapter.INT64.decode(protoReader));
                        break;
                    case 8:
                        builder.request_scene_type(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 9:
                        builder.ad_is_expired(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 10:
                        builder.privacy(Privacy.ADAPTER.decode(protoReader));
                        break;
                    case 11:
                        builder.disable_mediation(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 12:
                    case 13:
                    case 14:
                    default:
                        FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                        builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                        break;
                    case 15:
                        map = builder.options;
                        protoAdapter2 = this.options;
                        map.putAll(protoAdapter2.decode(protoReader));
                        break;
                    case 16:
                        builder.header_bidding(HeaderBidding.ADAPTER.decode(protoReader));
                        break;
                    case 17:
                        builder.user(User.ADAPTER.decode(protoReader));
                        break;
                    case 18:
                        list = builder.hbs;
                        protoAdapter = HeaderBidding.ADAPTER;
                        list.add(protoAdapter.decode(protoReader));
                        break;
                    case 19:
                        map = builder.ext_options;
                        protoAdapter2 = this.ext_options;
                        map.putAll(protoAdapter2.decode(protoReader));
                        break;
                    case 20:
                        builder.sdk_version(Version.ADAPTER.decode(protoReader));
                        break;
                    case 21:
                        builder.wx_program_req(WXProgramReq.ADAPTER.decode(protoReader));
                        break;
                    case 22:
                        builder.strategy_req(StrategyReq.ADAPTER.decode(protoReader));
                        break;
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, BidRequest bidRequest) throws IOException {
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 1, bidRequest.request_id);
            Version.ADAPTER.encodeWithTag(protoWriter, 2, bidRequest.api_version);
            App.ADAPTER.encodeWithTag(protoWriter, 3, bidRequest.app);
            Device.ADAPTER.encodeWithTag(protoWriter, 4, bidRequest.device);
            Network.ADAPTER.encodeWithTag(protoWriter, 5, bidRequest.network);
            AdSlot.ADAPTER.asRepeated().encodeWithTag(protoWriter, 6, bidRequest.slots);
            ProtoAdapter.INT64.encodeWithTag(protoWriter, 7, bidRequest.req_timestamp);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 8, bidRequest.request_scene_type);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 9, bidRequest.ad_is_expired);
            Privacy.ADAPTER.encodeWithTag(protoWriter, 10, bidRequest.privacy);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 11, bidRequest.disable_mediation);
            this.options.encodeWithTag(protoWriter, 15, bidRequest.options);
            HeaderBidding.ADAPTER.encodeWithTag(protoWriter, 16, bidRequest.header_bidding);
            User.ADAPTER.encodeWithTag(protoWriter, 17, bidRequest.user);
            HeaderBidding.ADAPTER.asRepeated().encodeWithTag(protoWriter, 18, bidRequest.hbs);
            this.ext_options.encodeWithTag(protoWriter, 19, bidRequest.ext_options);
            Version.ADAPTER.encodeWithTag(protoWriter, 20, bidRequest.sdk_version);
            WXProgramReq.ADAPTER.encodeWithTag(protoWriter, 21, bidRequest.wx_program_req);
            StrategyReq.ADAPTER.encodeWithTag(protoWriter, 22, bidRequest.strategy_req);
            protoWriter.writeBytes(bidRequest.unknownFields());
        }

        @Override
        public int encodedSize(BidRequest bidRequest) {
            return ProtoAdapter.STRING.encodedSizeWithTag(1, bidRequest.request_id) + Version.ADAPTER.encodedSizeWithTag(2, bidRequest.api_version) + App.ADAPTER.encodedSizeWithTag(3, bidRequest.app) + Device.ADAPTER.encodedSizeWithTag(4, bidRequest.device) + Network.ADAPTER.encodedSizeWithTag(5, bidRequest.network) + AdSlot.ADAPTER.asRepeated().encodedSizeWithTag(6, bidRequest.slots) + ProtoAdapter.INT64.encodedSizeWithTag(7, bidRequest.req_timestamp) + ProtoAdapter.UINT32.encodedSizeWithTag(8, bidRequest.request_scene_type) + ProtoAdapter.BOOL.encodedSizeWithTag(9, bidRequest.ad_is_expired) + Privacy.ADAPTER.encodedSizeWithTag(10, bidRequest.privacy) + ProtoAdapter.BOOL.encodedSizeWithTag(11, bidRequest.disable_mediation) + this.options.encodedSizeWithTag(15, bidRequest.options) + HeaderBidding.ADAPTER.encodedSizeWithTag(16, bidRequest.header_bidding) + User.ADAPTER.encodedSizeWithTag(17, bidRequest.user) + HeaderBidding.ADAPTER.asRepeated().encodedSizeWithTag(18, bidRequest.hbs) + this.ext_options.encodedSizeWithTag(19, bidRequest.ext_options) + Version.ADAPTER.encodedSizeWithTag(20, bidRequest.sdk_version) + WXProgramReq.ADAPTER.encodedSizeWithTag(21, bidRequest.wx_program_req) + StrategyReq.ADAPTER.encodedSizeWithTag(22, bidRequest.strategy_req) + bidRequest.unknownFields().size();
        }

        @Override
        public BidRequest redact(BidRequest bidRequest) {
            Builder builderNewBuilder = bidRequest.newBuilder();
            if (builderNewBuilder.api_version != null) {
                builderNewBuilder.api_version = Version.ADAPTER.redact(builderNewBuilder.api_version);
            }
            if (builderNewBuilder.app != null) {
                builderNewBuilder.app = App.ADAPTER.redact(builderNewBuilder.app);
            }
            if (builderNewBuilder.device != null) {
                builderNewBuilder.device = Device.ADAPTER.redact(builderNewBuilder.device);
            }
            if (builderNewBuilder.network != null) {
                builderNewBuilder.network = Network.ADAPTER.redact(builderNewBuilder.network);
            }
            Internal.redactElements(builderNewBuilder.slots, AdSlot.ADAPTER);
            if (builderNewBuilder.privacy != null) {
                builderNewBuilder.privacy = Privacy.ADAPTER.redact(builderNewBuilder.privacy);
            }
            if (builderNewBuilder.header_bidding != null) {
                builderNewBuilder.header_bidding = HeaderBidding.ADAPTER.redact(builderNewBuilder.header_bidding);
            }
            if (builderNewBuilder.user != null) {
                builderNewBuilder.user = User.ADAPTER.redact(builderNewBuilder.user);
            }
            Internal.redactElements(builderNewBuilder.hbs, HeaderBidding.ADAPTER);
            if (builderNewBuilder.sdk_version != null) {
                builderNewBuilder.sdk_version = Version.ADAPTER.redact(builderNewBuilder.sdk_version);
            }
            if (builderNewBuilder.wx_program_req != null) {
                builderNewBuilder.wx_program_req = WXProgramReq.ADAPTER.redact(builderNewBuilder.wx_program_req);
            }
            if (builderNewBuilder.strategy_req != null) {
                builderNewBuilder.strategy_req = StrategyReq.ADAPTER.redact(builderNewBuilder.strategy_req);
            }
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_BidRequest protoAdapter_BidRequest = new ProtoAdapter_BidRequest();
        ADAPTER = protoAdapter_BidRequest;
        CREATOR = AndroidMessage.newCreator(protoAdapter_BidRequest);
        DEFAULT_REQ_TIMESTAMP = 0L;
        DEFAULT_REQUEST_SCENE_TYPE = 0;
        DEFAULT_AD_IS_EXPIRED = false;
        DEFAULT_DISABLE_MEDIATION = true;
    }

    public BidRequest(String str, Version version, App app, Device device, Network network, List<AdSlot> list, Long l, Integer num, Boolean bool, Privacy privacy, Boolean bool2, Map<String, String> map, HeaderBidding headerBidding, User user, List<HeaderBidding> list2, Map<String, String> map2, Version version2, WXProgramReq wXProgramReq, StrategyReq strategyReq) {
        this(str, version, app, device, network, list, l, num, bool, privacy, bool2, map, headerBidding, user, list2, map2, version2, wXProgramReq, strategyReq, ByteString.EMPTY);
    }

    public BidRequest(String str, Version version, App app, Device device, Network network, List<AdSlot> list, Long l, Integer num, Boolean bool, Privacy privacy, Boolean bool2, Map<String, String> map, HeaderBidding headerBidding, User user, List<HeaderBidding> list2, Map<String, String> map2, Version version2, WXProgramReq wXProgramReq, StrategyReq strategyReq, ByteString byteString) {
        super(ADAPTER, byteString);
        this.request_id = str;
        this.api_version = version;
        this.app = app;
        this.device = device;
        this.network = network;
        this.slots = Internal.immutableCopyOf("slots", list);
        this.req_timestamp = l;
        this.request_scene_type = num;
        this.ad_is_expired = bool;
        this.privacy = privacy;
        this.disable_mediation = bool2;
        this.options = Internal.immutableCopyOf("options", map);
        this.header_bidding = headerBidding;
        this.user = user;
        this.hbs = Internal.immutableCopyOf("hbs", list2);
        this.ext_options = Internal.immutableCopyOf("ext_options", map2);
        this.sdk_version = version2;
        this.wx_program_req = wXProgramReq;
        this.strategy_req = strategyReq;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof BidRequest)) {
            return false;
        }
        BidRequest bidRequest = (BidRequest) obj;
        return unknownFields().equals(bidRequest.unknownFields()) && Internal.equals(this.request_id, bidRequest.request_id) && Internal.equals(this.api_version, bidRequest.api_version) && Internal.equals(this.app, bidRequest.app) && Internal.equals(this.device, bidRequest.device) && Internal.equals(this.network, bidRequest.network) && this.slots.equals(bidRequest.slots) && Internal.equals(this.req_timestamp, bidRequest.req_timestamp) && Internal.equals(this.request_scene_type, bidRequest.request_scene_type) && Internal.equals(this.ad_is_expired, bidRequest.ad_is_expired) && Internal.equals(this.privacy, bidRequest.privacy) && Internal.equals(this.disable_mediation, bidRequest.disable_mediation) && this.options.equals(bidRequest.options) && Internal.equals(this.header_bidding, bidRequest.header_bidding) && Internal.equals(this.user, bidRequest.user) && this.hbs.equals(bidRequest.hbs) && this.ext_options.equals(bidRequest.ext_options) && Internal.equals(this.sdk_version, bidRequest.sdk_version) && Internal.equals(this.wx_program_req, bidRequest.wx_program_req) && Internal.equals(this.strategy_req, bidRequest.strategy_req);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        String str = this.request_id;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 37;
        Version version = this.api_version;
        int iHashCode3 = (iHashCode2 + (version != null ? version.hashCode() : 0)) * 37;
        App app = this.app;
        int iHashCode4 = (iHashCode3 + (app != null ? app.hashCode() : 0)) * 37;
        Device device = this.device;
        int iHashCode5 = (iHashCode4 + (device != null ? device.hashCode() : 0)) * 37;
        Network network = this.network;
        int iHashCode6 = (((iHashCode5 + (network != null ? network.hashCode() : 0)) * 37) + this.slots.hashCode()) * 37;
        Long l = this.req_timestamp;
        int iHashCode7 = (iHashCode6 + (l != null ? l.hashCode() : 0)) * 37;
        Integer num = this.request_scene_type;
        int iHashCode8 = (iHashCode7 + (num != null ? num.hashCode() : 0)) * 37;
        Boolean bool = this.ad_is_expired;
        int iHashCode9 = (iHashCode8 + (bool != null ? bool.hashCode() : 0)) * 37;
        Privacy privacy = this.privacy;
        int iHashCode10 = (iHashCode9 + (privacy != null ? privacy.hashCode() : 0)) * 37;
        Boolean bool2 = this.disable_mediation;
        int iHashCode11 = (((iHashCode10 + (bool2 != null ? bool2.hashCode() : 0)) * 37) + this.options.hashCode()) * 37;
        HeaderBidding headerBidding = this.header_bidding;
        int iHashCode12 = (iHashCode11 + (headerBidding != null ? headerBidding.hashCode() : 0)) * 37;
        User user = this.user;
        int iHashCode13 = (((((iHashCode12 + (user != null ? user.hashCode() : 0)) * 37) + this.hbs.hashCode()) * 37) + this.ext_options.hashCode()) * 37;
        Version version2 = this.sdk_version;
        int iHashCode14 = (iHashCode13 + (version2 != null ? version2.hashCode() : 0)) * 37;
        WXProgramReq wXProgramReq = this.wx_program_req;
        int iHashCode15 = (iHashCode14 + (wXProgramReq != null ? wXProgramReq.hashCode() : 0)) * 37;
        StrategyReq strategyReq = this.strategy_req;
        int iHashCode16 = iHashCode15 + (strategyReq != null ? strategyReq.hashCode() : 0);
        this.hashCode = iHashCode16;
        return iHashCode16;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.request_id = this.request_id;
        builder.api_version = this.api_version;
        builder.app = this.app;
        builder.device = this.device;
        builder.network = this.network;
        builder.slots = Internal.copyOf("slots", this.slots);
        builder.req_timestamp = this.req_timestamp;
        builder.request_scene_type = this.request_scene_type;
        builder.ad_is_expired = this.ad_is_expired;
        builder.privacy = this.privacy;
        builder.disable_mediation = this.disable_mediation;
        builder.options = Internal.copyOf("options", this.options);
        builder.header_bidding = this.header_bidding;
        builder.user = this.user;
        builder.hbs = Internal.copyOf("hbs", this.hbs);
        builder.ext_options = Internal.copyOf("ext_options", this.ext_options);
        builder.sdk_version = this.sdk_version;
        builder.wx_program_req = this.wx_program_req;
        builder.strategy_req = this.strategy_req;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.request_id != null) {
            sb.append(", request_id=");
            sb.append(this.request_id);
        }
        if (this.api_version != null) {
            sb.append(", api_version=");
            sb.append(this.api_version);
        }
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
        if (!this.slots.isEmpty()) {
            sb.append(", slots=");
            sb.append(this.slots);
        }
        if (this.req_timestamp != null) {
            sb.append(", req_timestamp=");
            sb.append(this.req_timestamp);
        }
        if (this.request_scene_type != null) {
            sb.append(", request_scene_type=");
            sb.append(this.request_scene_type);
        }
        if (this.ad_is_expired != null) {
            sb.append(", ad_is_expired=");
            sb.append(this.ad_is_expired);
        }
        if (this.privacy != null) {
            sb.append(", privacy=");
            sb.append(this.privacy);
        }
        if (this.disable_mediation != null) {
            sb.append(", disable_mediation=");
            sb.append(this.disable_mediation);
        }
        if (!this.options.isEmpty()) {
            sb.append(", options=");
            sb.append(this.options);
        }
        if (this.header_bidding != null) {
            sb.append(", header_bidding=");
            sb.append(this.header_bidding);
        }
        if (this.user != null) {
            sb.append(", user=");
            sb.append(this.user);
        }
        if (!this.hbs.isEmpty()) {
            sb.append(", hbs=");
            sb.append(this.hbs);
        }
        if (!this.ext_options.isEmpty()) {
            sb.append(", ext_options=");
            sb.append(this.ext_options);
        }
        if (this.sdk_version != null) {
            sb.append(", sdk_version=");
            sb.append(this.sdk_version);
        }
        if (this.wx_program_req != null) {
            sb.append(", wx_program_req=");
            sb.append(this.wx_program_req);
        }
        if (this.strategy_req != null) {
            sb.append(", strategy_req=");
            sb.append(this.strategy_req);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "BidRequest{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
