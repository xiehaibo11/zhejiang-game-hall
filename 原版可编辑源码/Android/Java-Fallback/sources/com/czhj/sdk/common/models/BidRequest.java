package com.czhj.sdk.common.models;

public final class BidRequest extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.BidRequest, com.czhj.sdk.common.models.BidRequest.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.BidRequest> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.BidRequest> CREATOR = null;
    public static final java.lang.Boolean DEFAULT_AD_IS_EXPIRED = null;
    public static final java.lang.Boolean DEFAULT_DISABLE_MEDIATION = null;
    public static final java.lang.String DEFAULT_REQUEST_ID = "";
    public static final java.lang.Integer DEFAULT_REQUEST_SCENE_TYPE = null;
    public static final java.lang.Long DEFAULT_REQ_TIMESTAMP = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 9)
    public final java.lang.Boolean ad_is_expired;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.Version#ADAPTER", tag = 2)
    public final com.czhj.sdk.common.models.Version api_version;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.App#ADAPTER", tag = 3)
    public final com.czhj.sdk.common.models.App app;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.Device#ADAPTER", tag = 4)
    public final com.czhj.sdk.common.models.Device device;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 11)
    public final java.lang.Boolean disable_mediation;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 19)
    public final java.util.Map<java.lang.String, java.lang.String> ext_options;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.HeaderBidding#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 18)
    public final java.util.List<com.czhj.sdk.common.models.HeaderBidding> hbs;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.HeaderBidding#ADAPTER", tag = 16)
    public final com.czhj.sdk.common.models.HeaderBidding header_bidding;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.Network#ADAPTER", tag = 5)
    public final com.czhj.sdk.common.models.Network network;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 15)
    public final java.util.Map<java.lang.String, java.lang.String> options;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.Privacy#ADAPTER", tag = 10)
    public final com.czhj.sdk.common.models.Privacy privacy;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT64", tag = 7)
    public final java.lang.Long req_timestamp;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String request_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 8)
    public final java.lang.Integer request_scene_type;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.Version#ADAPTER", tag = 20)
    public final com.czhj.sdk.common.models.Version sdk_version;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.AdSlot#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 6)
    public final java.util.List<com.czhj.sdk.common.models.AdSlot> slots;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.StrategyReq#ADAPTER", tag = 22)
    public final com.czhj.sdk.common.models.StrategyReq strategy_req;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.User#ADAPTER", tag = 17)
    public final com.czhj.sdk.common.models.User user;

    @com.czhj.wire.WireField(adapter = "com.czhj.sdk.common.models.WXProgramReq#ADAPTER", tag = 21)
    public final com.czhj.sdk.common.models.WXProgramReq wx_program_req;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.BidRequest, com.czhj.sdk.common.models.BidRequest.Builder> {
        public java.lang.Boolean ad_is_expired;
        public com.czhj.sdk.common.models.Version api_version;
        public com.czhj.sdk.common.models.App app;
        public com.czhj.sdk.common.models.Device device;
        public java.lang.Boolean disable_mediation;
        public java.util.Map<java.lang.String, java.lang.String> ext_options;
        public java.util.List<com.czhj.sdk.common.models.HeaderBidding> hbs;
        public com.czhj.sdk.common.models.HeaderBidding header_bidding;
        public com.czhj.sdk.common.models.Network network;
        public java.util.Map<java.lang.String, java.lang.String> options;
        public com.czhj.sdk.common.models.Privacy privacy;
        public java.lang.Long req_timestamp;
        public java.lang.String request_id;
        public java.lang.Integer request_scene_type;
        public com.czhj.sdk.common.models.Version sdk_version;
        public java.util.List<com.czhj.sdk.common.models.AdSlot> slots;
        public com.czhj.sdk.common.models.StrategyReq strategy_req;
        public com.czhj.sdk.common.models.User user;
        public com.czhj.sdk.common.models.WXProgramReq wx_program_req;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.request_id = r0
                java.lang.Long r0 = com.czhj.sdk.common.models.BidRequest.DEFAULT_REQ_TIMESTAMP
                r1.req_timestamp = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.BidRequest.DEFAULT_REQUEST_SCENE_TYPE
                r1.request_scene_type = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.BidRequest.DEFAULT_AD_IS_EXPIRED
                r1.ad_is_expired = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.BidRequest.DEFAULT_DISABLE_MEDIATION
                r1.disable_mediation = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.slots = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r1.options = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.hbs = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r1.ext_options = r0
                return
        }

        public com.czhj.sdk.common.models.BidRequest.Builder ad_is_expired(java.lang.Boolean r1) {
                r0 = this;
                r0.ad_is_expired = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder api_version(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                r0.api_version = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder app(com.czhj.sdk.common.models.App r1) {
                r0 = this;
                r0.app = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.BidRequest build() {
                r24 = this;
                r0 = r24
                com.czhj.sdk.common.models.BidRequest r22 = new com.czhj.sdk.common.models.BidRequest
                r1 = r22
                java.lang.String r2 = r0.request_id
                com.czhj.sdk.common.models.Version r3 = r0.api_version
                com.czhj.sdk.common.models.App r4 = r0.app
                com.czhj.sdk.common.models.Device r5 = r0.device
                com.czhj.sdk.common.models.Network r6 = r0.network
                java.util.List<com.czhj.sdk.common.models.AdSlot> r7 = r0.slots
                java.lang.Long r8 = r0.req_timestamp
                java.lang.Integer r9 = r0.request_scene_type
                java.lang.Boolean r10 = r0.ad_is_expired
                com.czhj.sdk.common.models.Privacy r11 = r0.privacy
                java.lang.Boolean r12 = r0.disable_mediation
                java.util.Map<java.lang.String, java.lang.String> r13 = r0.options
                com.czhj.sdk.common.models.HeaderBidding r14 = r0.header_bidding
                com.czhj.sdk.common.models.User r15 = r0.user
                r23 = r1
                java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1 = r0.hbs
                r16 = r1
                java.util.Map<java.lang.String, java.lang.String> r1 = r0.ext_options
                r17 = r1
                com.czhj.sdk.common.models.Version r1 = r0.sdk_version
                r18 = r1
                com.czhj.sdk.common.models.WXProgramReq r1 = r0.wx_program_req
                r19 = r1
                com.czhj.sdk.common.models.StrategyReq r1 = r0.strategy_req
                r20 = r1
                com.czhj.wire.okio.ByteString r21 = super.buildUnknownFields()
                r1 = r23
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21)
                return r22
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.BidRequest r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder device(com.czhj.sdk.common.models.Device r1) {
                r0 = this;
                r0.device = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder disable_mediation(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_mediation = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder ext_options(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ext_options = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder hbs(java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.hbs = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder header_bidding(com.czhj.sdk.common.models.HeaderBidding r1) {
                r0 = this;
                r0.header_bidding = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder network(com.czhj.sdk.common.models.Network r1) {
                r0 = this;
                r0.network = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder options(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.options = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder privacy(com.czhj.sdk.common.models.Privacy r1) {
                r0 = this;
                r0.privacy = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder req_timestamp(java.lang.Long r1) {
                r0 = this;
                r0.req_timestamp = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder request_id(java.lang.String r1) {
                r0 = this;
                r0.request_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder request_scene_type(java.lang.Integer r1) {
                r0 = this;
                r0.request_scene_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder sdk_version(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                r0.sdk_version = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder slots(java.util.List<com.czhj.sdk.common.models.AdSlot> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.slots = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder strategy_req(com.czhj.sdk.common.models.StrategyReq r1) {
                r0 = this;
                r0.strategy_req = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder user(com.czhj.sdk.common.models.User r1) {
                r0 = this;
                r0.user = r1
                return r0
        }

        public com.czhj.sdk.common.models.BidRequest.Builder wx_program_req(com.czhj.sdk.common.models.WXProgramReq r1) {
                r0 = this;
                r0.wx_program_req = r1
                return r0
        }
    }

    private static final class ProtoAdapter_BidRequest extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.BidRequest> {
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> ext_options;
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> options;

        public ProtoAdapter_BidRequest() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.BidRequest> r1 = com.czhj.sdk.common.models.BidRequest.class
                r2.<init>(r0, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.options = r0
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.ext_options = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.BidRequest decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.BidRequest$Builder r0 = new com.czhj.sdk.common.models.BidRequest$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L105
                switch(r3) {
                    case 1: goto Lf8;
                    case 2: goto Leb;
                    case 3: goto Lde;
                    case 4: goto Ld1;
                    case 5: goto Lc4;
                    case 6: goto Lb7;
                    case 7: goto Laa;
                    case 8: goto L9d;
                    case 9: goto L90;
                    case 10: goto L83;
                    case 11: goto L77;
                    case 12: goto L13;
                    case 13: goto L13;
                    case 14: goto L13;
                    case 15: goto L69;
                    case 16: goto L5d;
                    case 17: goto L51;
                    case 18: goto L4c;
                    case 19: goto L47;
                    case 20: goto L3b;
                    case 21: goto L2f;
                    case 22: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.StrategyReq> r3 = com.czhj.sdk.common.models.StrategyReq.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.StrategyReq r3 = (com.czhj.sdk.common.models.StrategyReq) r3
                r0.strategy_req(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.WXProgramReq> r3 = com.czhj.sdk.common.models.WXProgramReq.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.WXProgramReq r3 = (com.czhj.sdk.common.models.WXProgramReq) r3
                r0.wx_program_req(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r3 = com.czhj.sdk.common.models.Version.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Version r3 = (com.czhj.sdk.common.models.Version) r3
                r0.sdk_version(r3)
                goto L9
            L47:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.ext_options
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.ext_options
                goto L6d
            L4c:
                java.util.List<com.czhj.sdk.common.models.HeaderBidding> r3 = r0.hbs
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r4 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                goto Lbb
            L51:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r3 = com.czhj.sdk.common.models.User.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.User r3 = (com.czhj.sdk.common.models.User) r3
                r0.user(r3)
                goto L9
            L5d:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r3 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.HeaderBidding r3 = (com.czhj.sdk.common.models.HeaderBidding) r3
                r0.header_bidding(r3)
                goto L9
            L69:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.options
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.options
            L6d:
                java.lang.Object r4 = r4.decode(r7)
                java.util.Map r4 = (java.util.Map) r4
                r3.putAll(r4)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.disable_mediation(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r3 = com.czhj.sdk.common.models.Privacy.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Privacy r3 = (com.czhj.sdk.common.models.Privacy) r3
                r0.privacy(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.ad_is_expired(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.request_scene_type(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.req_timestamp(r3)
                goto L9
            Lb7:
                java.util.List<com.czhj.sdk.common.models.AdSlot> r3 = r0.slots
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdSlot> r4 = com.czhj.sdk.common.models.AdSlot.ADAPTER
            Lbb:
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            Lc4:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r3 = com.czhj.sdk.common.models.Network.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Network r3 = (com.czhj.sdk.common.models.Network) r3
                r0.network(r3)
                goto L9
            Ld1:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r3 = com.czhj.sdk.common.models.Device.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Device r3 = (com.czhj.sdk.common.models.Device) r3
                r0.device(r3)
                goto L9
            Lde:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r3 = com.czhj.sdk.common.models.App.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.App r3 = (com.czhj.sdk.common.models.App) r3
                r0.app(r3)
                goto L9
            Leb:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r3 = com.czhj.sdk.common.models.Version.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Version r3 = (com.czhj.sdk.common.models.Version) r3
                r0.api_version(r3)
                goto L9
            Lf8:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.request_id(r3)
                goto L9
            L105:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.BidRequest r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.BidRequest decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.BidRequest r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.BidRequest r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.request_id
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r5.api_version
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r0 = com.czhj.sdk.common.models.App.ADAPTER
                com.czhj.sdk.common.models.App r1 = r5.app
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r0 = com.czhj.sdk.common.models.Device.ADAPTER
                com.czhj.sdk.common.models.Device r1 = r5.device
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r0 = com.czhj.sdk.common.models.Network.ADAPTER
                com.czhj.sdk.common.models.Network r1 = r5.network
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdSlot> r0 = com.czhj.sdk.common.models.AdSlot.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.sdk.common.models.AdSlot> r1 = r5.slots
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Long r1 = r5.req_timestamp
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.request_scene_type
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.ad_is_expired
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r0 = com.czhj.sdk.common.models.Privacy.ADAPTER
                com.czhj.sdk.common.models.Privacy r1 = r5.privacy
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_mediation
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.options
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.options
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r0 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                com.czhj.sdk.common.models.HeaderBidding r1 = r5.header_bidding
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r0 = com.czhj.sdk.common.models.User.ADAPTER
                com.czhj.sdk.common.models.User r1 = r5.user
                r2 = 17
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r0 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1 = r5.hbs
                r2 = 18
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.ext_options
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.ext_options
                r2 = 19
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r5.sdk_version
                r2 = 20
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.WXProgramReq> r0 = com.czhj.sdk.common.models.WXProgramReq.ADAPTER
                com.czhj.sdk.common.models.WXProgramReq r1 = r5.wx_program_req
                r2 = 21
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.StrategyReq> r0 = com.czhj.sdk.common.models.StrategyReq.ADAPTER
                com.czhj.sdk.common.models.StrategyReq r1 = r5.strategy_req
                r2 = 22
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.BidRequest r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.BidRequest r2 = (com.czhj.sdk.common.models.BidRequest) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.BidRequest r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.request_id
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r1 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r2 = r5.api_version
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r1 = com.czhj.sdk.common.models.App.ADAPTER
                com.czhj.sdk.common.models.App r2 = r5.app
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r1 = com.czhj.sdk.common.models.Device.ADAPTER
                com.czhj.sdk.common.models.Device r2 = r5.device
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r1 = com.czhj.sdk.common.models.Network.ADAPTER
                com.czhj.sdk.common.models.Network r2 = r5.network
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdSlot> r1 = com.czhj.sdk.common.models.AdSlot.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.sdk.common.models.AdSlot> r2 = r5.slots
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Long r2 = r5.req_timestamp
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.request_scene_type
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.ad_is_expired
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r1 = com.czhj.sdk.common.models.Privacy.ADAPTER
                com.czhj.sdk.common.models.Privacy r2 = r5.privacy
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_mediation
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.options
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.options
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r1 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                com.czhj.sdk.common.models.HeaderBidding r2 = r5.header_bidding
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r1 = com.czhj.sdk.common.models.User.ADAPTER
                com.czhj.sdk.common.models.User r2 = r5.user
                r3 = 17
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r1 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.czhj.sdk.common.models.HeaderBidding> r2 = r5.hbs
                r3 = 18
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.ext_options
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.ext_options
                r3 = 19
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r1 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r2 = r5.sdk_version
                r3 = 20
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.WXProgramReq> r1 = com.czhj.sdk.common.models.WXProgramReq.ADAPTER
                com.czhj.sdk.common.models.WXProgramReq r2 = r5.wx_program_req
                r3 = 21
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.StrategyReq> r1 = com.czhj.sdk.common.models.StrategyReq.ADAPTER
                com.czhj.sdk.common.models.StrategyReq r2 = r5.strategy_req
                r3 = 22
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.BidRequest r1) {
                r0 = this;
                com.czhj.sdk.common.models.BidRequest r1 = (com.czhj.sdk.common.models.BidRequest) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.BidRequest redact(com.czhj.sdk.common.models.BidRequest r3) {
                r2 = this;
                com.czhj.sdk.common.models.BidRequest$Builder r3 = r3.newBuilder()
                com.czhj.sdk.common.models.Version r0 = r3.api_version
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r3.api_version
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Version r0 = (com.czhj.sdk.common.models.Version) r0
                r3.api_version = r0
            L14:
                com.czhj.sdk.common.models.App r0 = r3.app
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r0 = com.czhj.sdk.common.models.App.ADAPTER
                com.czhj.sdk.common.models.App r1 = r3.app
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.App r0 = (com.czhj.sdk.common.models.App) r0
                r3.app = r0
            L24:
                com.czhj.sdk.common.models.Device r0 = r3.device
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r0 = com.czhj.sdk.common.models.Device.ADAPTER
                com.czhj.sdk.common.models.Device r1 = r3.device
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Device r0 = (com.czhj.sdk.common.models.Device) r0
                r3.device = r0
            L34:
                com.czhj.sdk.common.models.Network r0 = r3.network
                if (r0 == 0) goto L44
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r0 = com.czhj.sdk.common.models.Network.ADAPTER
                com.czhj.sdk.common.models.Network r1 = r3.network
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Network r0 = (com.czhj.sdk.common.models.Network) r0
                r3.network = r0
            L44:
                java.util.List<com.czhj.sdk.common.models.AdSlot> r0 = r3.slots
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdSlot> r1 = com.czhj.sdk.common.models.AdSlot.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.czhj.sdk.common.models.Privacy r0 = r3.privacy
                if (r0 == 0) goto L5b
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r0 = com.czhj.sdk.common.models.Privacy.ADAPTER
                com.czhj.sdk.common.models.Privacy r1 = r3.privacy
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Privacy r0 = (com.czhj.sdk.common.models.Privacy) r0
                r3.privacy = r0
            L5b:
                com.czhj.sdk.common.models.HeaderBidding r0 = r3.header_bidding
                if (r0 == 0) goto L6b
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r0 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                com.czhj.sdk.common.models.HeaderBidding r1 = r3.header_bidding
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.HeaderBidding r0 = (com.czhj.sdk.common.models.HeaderBidding) r0
                r3.header_bidding = r0
            L6b:
                com.czhj.sdk.common.models.User r0 = r3.user
                if (r0 == 0) goto L7b
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r0 = com.czhj.sdk.common.models.User.ADAPTER
                com.czhj.sdk.common.models.User r1 = r3.user
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.User r0 = (com.czhj.sdk.common.models.User) r0
                r3.user = r0
            L7b:
                java.util.List<com.czhj.sdk.common.models.HeaderBidding> r0 = r3.hbs
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r1 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.czhj.sdk.common.models.Version r0 = r3.sdk_version
                if (r0 == 0) goto L92
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r3.sdk_version
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Version r0 = (com.czhj.sdk.common.models.Version) r0
                r3.sdk_version = r0
            L92:
                com.czhj.sdk.common.models.WXProgramReq r0 = r3.wx_program_req
                if (r0 == 0) goto La2
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.WXProgramReq> r0 = com.czhj.sdk.common.models.WXProgramReq.ADAPTER
                com.czhj.sdk.common.models.WXProgramReq r1 = r3.wx_program_req
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.WXProgramReq r0 = (com.czhj.sdk.common.models.WXProgramReq) r0
                r3.wx_program_req = r0
            La2:
                com.czhj.sdk.common.models.StrategyReq r0 = r3.strategy_req
                if (r0 == 0) goto Lb2
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.StrategyReq> r0 = com.czhj.sdk.common.models.StrategyReq.ADAPTER
                com.czhj.sdk.common.models.StrategyReq r1 = r3.strategy_req
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.StrategyReq r0 = (com.czhj.sdk.common.models.StrategyReq) r0
                r3.strategy_req = r0
            Lb2:
                r3.clearUnknownFields()
                com.czhj.sdk.common.models.BidRequest r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.sdk.common.models.BidRequest redact(com.czhj.sdk.common.models.BidRequest r1) {
                r0 = this;
                com.czhj.sdk.common.models.BidRequest r1 = (com.czhj.sdk.common.models.BidRequest) r1
                com.czhj.sdk.common.models.BidRequest r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.BidRequest$ProtoAdapter_BidRequest r0 = new com.czhj.sdk.common.models.BidRequest$ProtoAdapter_BidRequest
            r0.<init>()
            com.czhj.sdk.common.models.BidRequest.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.BidRequest.CREATOR = r0
            r0 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            com.czhj.sdk.common.models.BidRequest.DEFAULT_REQ_TIMESTAMP = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.BidRequest.DEFAULT_REQUEST_SCENE_TYPE = r1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.sdk.common.models.BidRequest.DEFAULT_AD_IS_EXPIRED = r0
            r0 = 1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.sdk.common.models.BidRequest.DEFAULT_DISABLE_MEDIATION = r0
            return
    }

    public BidRequest(java.lang.String r22, com.czhj.sdk.common.models.Version r23, com.czhj.sdk.common.models.App r24, com.czhj.sdk.common.models.Device r25, com.czhj.sdk.common.models.Network r26, java.util.List<com.czhj.sdk.common.models.AdSlot> r27, java.lang.Long r28, java.lang.Integer r29, java.lang.Boolean r30, com.czhj.sdk.common.models.Privacy r31, java.lang.Boolean r32, java.util.Map<java.lang.String, java.lang.String> r33, com.czhj.sdk.common.models.HeaderBidding r34, com.czhj.sdk.common.models.User r35, java.util.List<com.czhj.sdk.common.models.HeaderBidding> r36, java.util.Map<java.lang.String, java.lang.String> r37, com.czhj.sdk.common.models.Version r38, com.czhj.sdk.common.models.WXProgramReq r39, com.czhj.sdk.common.models.StrategyReq r40) {
            r21 = this;
            r0 = r21
            r1 = r22
            r2 = r23
            r3 = r24
            r4 = r25
            r5 = r26
            r6 = r27
            r7 = r28
            r8 = r29
            r9 = r30
            r10 = r31
            r11 = r32
            r12 = r33
            r13 = r34
            r14 = r35
            r15 = r36
            r16 = r37
            r17 = r38
            r18 = r39
            r19 = r40
            com.czhj.wire.okio.ByteString r20 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20)
            return
    }

    public BidRequest(java.lang.String r4, com.czhj.sdk.common.models.Version r5, com.czhj.sdk.common.models.App r6, com.czhj.sdk.common.models.Device r7, com.czhj.sdk.common.models.Network r8, java.util.List<com.czhj.sdk.common.models.AdSlot> r9, java.lang.Long r10, java.lang.Integer r11, java.lang.Boolean r12, com.czhj.sdk.common.models.Privacy r13, java.lang.Boolean r14, java.util.Map<java.lang.String, java.lang.String> r15, com.czhj.sdk.common.models.HeaderBidding r16, com.czhj.sdk.common.models.User r17, java.util.List<com.czhj.sdk.common.models.HeaderBidding> r18, java.util.Map<java.lang.String, java.lang.String> r19, com.czhj.sdk.common.models.Version r20, com.czhj.sdk.common.models.WXProgramReq r21, com.czhj.sdk.common.models.StrategyReq r22, com.czhj.wire.okio.ByteString r23) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.BidRequest> r1 = com.czhj.sdk.common.models.BidRequest.ADAPTER
            r2 = r23
            r3.<init>(r1, r2)
            r1 = r4
            r0.request_id = r1
            r1 = r5
            r0.api_version = r1
            r1 = r6
            r0.app = r1
            r1 = r7
            r0.device = r1
            r1 = r8
            r0.network = r1
            java.lang.String r1 = "slots"
            r2 = r9
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r9)
            r0.slots = r1
            r1 = r10
            r0.req_timestamp = r1
            r1 = r11
            r0.request_scene_type = r1
            r1 = r12
            r0.ad_is_expired = r1
            r1 = r13
            r0.privacy = r1
            r1 = r14
            r0.disable_mediation = r1
            java.lang.String r1 = "options"
            r2 = r15
            java.util.Map r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r15)
            r0.options = r1
            r1 = r16
            r0.header_bidding = r1
            r1 = r17
            r0.user = r1
            java.lang.String r1 = "hbs"
            r2 = r18
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.hbs = r1
            java.lang.String r1 = "ext_options"
            r2 = r19
            java.util.Map r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.ext_options = r1
            r1 = r20
            r0.sdk_version = r1
            r1 = r21
            r0.wx_program_req = r1
            r1 = r22
            r0.strategy_req = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.BidRequest
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.BidRequest r5 = (com.czhj.sdk.common.models.BidRequest) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Ld9
            java.lang.String r1 = r4.request_id
            java.lang.String r3 = r5.request_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.Version r1 = r4.api_version
            com.czhj.sdk.common.models.Version r3 = r5.api_version
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.App r1 = r4.app
            com.czhj.sdk.common.models.App r3 = r5.app
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.Device r1 = r4.device
            com.czhj.sdk.common.models.Device r3 = r5.device
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.Network r1 = r4.network
            com.czhj.sdk.common.models.Network r3 = r5.network
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            java.util.List<com.czhj.sdk.common.models.AdSlot> r1 = r4.slots
            java.util.List<com.czhj.sdk.common.models.AdSlot> r3 = r5.slots
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Ld9
            java.lang.Long r1 = r4.req_timestamp
            java.lang.Long r3 = r5.req_timestamp
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            java.lang.Integer r1 = r4.request_scene_type
            java.lang.Integer r3 = r5.request_scene_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            java.lang.Boolean r1 = r4.ad_is_expired
            java.lang.Boolean r3 = r5.ad_is_expired
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.Privacy r1 = r4.privacy
            com.czhj.sdk.common.models.Privacy r3 = r5.privacy
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            java.lang.Boolean r1 = r4.disable_mediation
            java.lang.Boolean r3 = r5.disable_mediation
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.options
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.HeaderBidding r1 = r4.header_bidding
            com.czhj.sdk.common.models.HeaderBidding r3 = r5.header_bidding
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.User r1 = r4.user
            com.czhj.sdk.common.models.User r3 = r5.user
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1 = r4.hbs
            java.util.List<com.czhj.sdk.common.models.HeaderBidding> r3 = r5.hbs
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Ld9
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ext_options
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.ext_options
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.Version r1 = r4.sdk_version
            com.czhj.sdk.common.models.Version r3 = r5.sdk_version
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.WXProgramReq r1 = r4.wx_program_req
            com.czhj.sdk.common.models.WXProgramReq r3 = r5.wx_program_req
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Ld9
            com.czhj.sdk.common.models.StrategyReq r1 = r4.strategy_req
            com.czhj.sdk.common.models.StrategyReq r5 = r5.strategy_req
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto Ld9
            goto Lda
        Ld9:
            r0 = r2
        Lda:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto Lf4
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.request_id
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Version r1 = r3.api_version
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.App r1 = r3.app
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Device r1 = r3.device
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Network r1 = r3.network
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.sdk.common.models.AdSlot> r1 = r3.slots
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.req_timestamp
            if (r1 == 0) goto L62
            int r1 = r1.hashCode()
            goto L63
        L62:
            r1 = r2
        L63:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.request_scene_type
            if (r1 == 0) goto L6f
            int r1 = r1.hashCode()
            goto L70
        L6f:
            r1 = r2
        L70:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.ad_is_expired
            if (r1 == 0) goto L7c
            int r1 = r1.hashCode()
            goto L7d
        L7c:
            r1 = r2
        L7d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Privacy r1 = r3.privacy
            if (r1 == 0) goto L89
            int r1 = r1.hashCode()
            goto L8a
        L89:
            r1 = r2
        L8a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_mediation
            if (r1 == 0) goto L96
            int r1 = r1.hashCode()
            goto L97
        L96:
            r1 = r2
        L97:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.options
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.HeaderBidding r1 = r3.header_bidding
            if (r1 == 0) goto Lac
            int r1 = r1.hashCode()
            goto Lad
        Lac:
            r1 = r2
        Lad:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.User r1 = r3.user
            if (r1 == 0) goto Lb9
            int r1 = r1.hashCode()
            goto Lba
        Lb9:
            r1 = r2
        Lba:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1 = r3.hbs
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ext_options
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Version r1 = r3.sdk_version
            if (r1 == 0) goto Ld8
            int r1 = r1.hashCode()
            goto Ld9
        Ld8:
            r1 = r2
        Ld9:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.WXProgramReq r1 = r3.wx_program_req
            if (r1 == 0) goto Le5
            int r1 = r1.hashCode()
            goto Le6
        Le5:
            r1 = r2
        Le6:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.StrategyReq r1 = r3.strategy_req
            if (r1 == 0) goto Lf1
            int r2 = r1.hashCode()
        Lf1:
            int r0 = r0 + r2
            r3.hashCode = r0
        Lf4:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.BidRequest.Builder newBuilder() {
            r3 = this;
            com.czhj.sdk.common.models.BidRequest$Builder r0 = new com.czhj.sdk.common.models.BidRequest$Builder
            r0.<init>()
            java.lang.String r1 = r3.request_id
            r0.request_id = r1
            com.czhj.sdk.common.models.Version r1 = r3.api_version
            r0.api_version = r1
            com.czhj.sdk.common.models.App r1 = r3.app
            r0.app = r1
            com.czhj.sdk.common.models.Device r1 = r3.device
            r0.device = r1
            com.czhj.sdk.common.models.Network r1 = r3.network
            r0.network = r1
            java.util.List<com.czhj.sdk.common.models.AdSlot> r1 = r3.slots
            java.lang.String r2 = "slots"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.slots = r1
            java.lang.Long r1 = r3.req_timestamp
            r0.req_timestamp = r1
            java.lang.Integer r1 = r3.request_scene_type
            r0.request_scene_type = r1
            java.lang.Boolean r1 = r3.ad_is_expired
            r0.ad_is_expired = r1
            com.czhj.sdk.common.models.Privacy r1 = r3.privacy
            r0.privacy = r1
            java.lang.Boolean r1 = r3.disable_mediation
            r0.disable_mediation = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.options
            java.lang.String r2 = "options"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.options = r1
            com.czhj.sdk.common.models.HeaderBidding r1 = r3.header_bidding
            r0.header_bidding = r1
            com.czhj.sdk.common.models.User r1 = r3.user
            r0.user = r1
            java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1 = r3.hbs
            java.lang.String r2 = "hbs"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.hbs = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ext_options
            java.lang.String r2 = "ext_options"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ext_options = r1
            com.czhj.sdk.common.models.Version r1 = r3.sdk_version
            r0.sdk_version = r1
            com.czhj.sdk.common.models.WXProgramReq r1 = r3.wx_program_req
            r0.wx_program_req = r1
            com.czhj.sdk.common.models.StrategyReq r1 = r3.strategy_req
            r0.strategy_req = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.BidRequest$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.request_id
            if (r1 == 0) goto L13
            java.lang.String r1 = ", request_id="
            r0.append(r1)
            java.lang.String r1 = r4.request_id
            r0.append(r1)
        L13:
            com.czhj.sdk.common.models.Version r1 = r4.api_version
            if (r1 == 0) goto L21
            java.lang.String r1 = ", api_version="
            r0.append(r1)
            com.czhj.sdk.common.models.Version r1 = r4.api_version
            r0.append(r1)
        L21:
            com.czhj.sdk.common.models.App r1 = r4.app
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", app="
            r0.append(r1)
            com.czhj.sdk.common.models.App r1 = r4.app
            r0.append(r1)
        L2f:
            com.czhj.sdk.common.models.Device r1 = r4.device
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", device="
            r0.append(r1)
            com.czhj.sdk.common.models.Device r1 = r4.device
            r0.append(r1)
        L3d:
            com.czhj.sdk.common.models.Network r1 = r4.network
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", network="
            r0.append(r1)
            com.czhj.sdk.common.models.Network r1 = r4.network
            r0.append(r1)
        L4b:
            java.util.List<com.czhj.sdk.common.models.AdSlot> r1 = r4.slots
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L5d
            java.lang.String r1 = ", slots="
            r0.append(r1)
            java.util.List<com.czhj.sdk.common.models.AdSlot> r1 = r4.slots
            r0.append(r1)
        L5d:
            java.lang.Long r1 = r4.req_timestamp
            if (r1 == 0) goto L6b
            java.lang.String r1 = ", req_timestamp="
            r0.append(r1)
            java.lang.Long r1 = r4.req_timestamp
            r0.append(r1)
        L6b:
            java.lang.Integer r1 = r4.request_scene_type
            if (r1 == 0) goto L79
            java.lang.String r1 = ", request_scene_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.request_scene_type
            r0.append(r1)
        L79:
            java.lang.Boolean r1 = r4.ad_is_expired
            if (r1 == 0) goto L87
            java.lang.String r1 = ", ad_is_expired="
            r0.append(r1)
            java.lang.Boolean r1 = r4.ad_is_expired
            r0.append(r1)
        L87:
            com.czhj.sdk.common.models.Privacy r1 = r4.privacy
            if (r1 == 0) goto L95
            java.lang.String r1 = ", privacy="
            r0.append(r1)
            com.czhj.sdk.common.models.Privacy r1 = r4.privacy
            r0.append(r1)
        L95:
            java.lang.Boolean r1 = r4.disable_mediation
            if (r1 == 0) goto La3
            java.lang.String r1 = ", disable_mediation="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_mediation
            r0.append(r1)
        La3:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lb5
            java.lang.String r1 = ", options="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            r0.append(r1)
        Lb5:
            com.czhj.sdk.common.models.HeaderBidding r1 = r4.header_bidding
            if (r1 == 0) goto Lc3
            java.lang.String r1 = ", header_bidding="
            r0.append(r1)
            com.czhj.sdk.common.models.HeaderBidding r1 = r4.header_bidding
            r0.append(r1)
        Lc3:
            com.czhj.sdk.common.models.User r1 = r4.user
            if (r1 == 0) goto Ld1
            java.lang.String r1 = ", user="
            r0.append(r1)
            com.czhj.sdk.common.models.User r1 = r4.user
            r0.append(r1)
        Ld1:
            java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1 = r4.hbs
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Le3
            java.lang.String r1 = ", hbs="
            r0.append(r1)
            java.util.List<com.czhj.sdk.common.models.HeaderBidding> r1 = r4.hbs
            r0.append(r1)
        Le3:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ext_options
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lf5
            java.lang.String r1 = ", ext_options="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ext_options
            r0.append(r1)
        Lf5:
            com.czhj.sdk.common.models.Version r1 = r4.sdk_version
            if (r1 == 0) goto L103
            java.lang.String r1 = ", sdk_version="
            r0.append(r1)
            com.czhj.sdk.common.models.Version r1 = r4.sdk_version
            r0.append(r1)
        L103:
            com.czhj.sdk.common.models.WXProgramReq r1 = r4.wx_program_req
            if (r1 == 0) goto L111
            java.lang.String r1 = ", wx_program_req="
            r0.append(r1)
            com.czhj.sdk.common.models.WXProgramReq r1 = r4.wx_program_req
            r0.append(r1)
        L111:
            com.czhj.sdk.common.models.StrategyReq r1 = r4.strategy_req
            if (r1 == 0) goto L11f
            java.lang.String r1 = ", strategy_req="
            r0.append(r1)
            com.czhj.sdk.common.models.StrategyReq r1 = r4.strategy_req
            r0.append(r1)
        L11f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "BidRequest{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
