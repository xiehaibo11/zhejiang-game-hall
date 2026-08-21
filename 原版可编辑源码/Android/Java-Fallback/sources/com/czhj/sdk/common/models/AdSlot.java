package com.czhj.sdk.common.models;

public final class AdSlot extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.AdSlot, com.czhj.sdk.common.models.AdSlot.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdSlot> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.AdSlot> CREATOR = null;
    public static final java.lang.String DEFAULT_ADSLOT_ID = "";
    public static final java.lang.Integer DEFAULT_ADX_ECPM = null;
    public static final java.lang.Integer DEFAULT_AD_COUNT = null;
    public static final java.lang.Integer DEFAULT_ALGORITHM_FLOOR = null;
    public static final java.lang.Integer DEFAULT_ALG_BID_TYPE = null;
    public static final java.lang.Integer DEFAULT_API_STRATEGY_INDEX = null;
    public static final java.lang.Integer DEFAULT_AUTO_CLICK_MODE = null;
    public static final java.lang.Integer DEFAULT_BIDFLOOR = null;
    public static final java.lang.Integer DEFAULT_COMMER_ECPM = null;
    public static final java.lang.Integer DEFAULT_COMMER_ECPM_STATE = null;
    public static final java.lang.Integer DEFAULT_ECPM_TARGET = null;
    public static final java.lang.Integer DEFAULT_EXPECTED_FLOOR = null;
    public static final java.lang.String DEFAULT_LATEST_CAMP_ID = "";
    public static final java.lang.String DEFAULT_LATEST_CRID = "";
    public static final java.lang.Integer DEFAULT_SDK_STRATEGY_INDEX = null;
    public static final java.lang.Integer DEFAULT_SETTLEMENT_MODE = null;
    public static final java.lang.Integer DEFAULT_SETTLEMENT_SETTING = null;
    public static final java.lang.String DEFAULT_VID = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "AdCache#ADAPTER", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 15)
    public final java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> ad_caches;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 28)
    public final java.lang.Integer ad_count;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String adslot_id;

    @com.czhj.wire.WireField(adapter = "Size#ADAPTER", tag = 2)
    public final com.czhj.sdk.common.models.Size adslot_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", label = com.czhj.wire.WireField.Label.REPEATED, tag = 3)
    public final java.util.List<java.lang.Integer> adslot_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 24)
    public final java.lang.Integer adx_ecpm;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 20)
    public final java.lang.Integer alg_bid_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 13)
    public final java.lang.Integer algorithm_floor;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 10)
    public final java.lang.Integer api_strategy_index;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 18)
    public final java.lang.Integer auto_click_mode;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 27)
    public final java.util.List<java.lang.String> b_seat;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 4)
    public final java.lang.Integer bidfloor;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 23)
    public final java.lang.Integer commer_ecpm;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 25)
    public final java.lang.Integer commer_ecpm_state;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", label = com.czhj.wire.WireField.Label.REPEATED, tag = 12)
    public final java.util.List<java.lang.Integer> creative_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 21)
    public final java.lang.Integer ecpm_target;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 17)
    public final java.lang.Integer expected_floor;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 14)
    public final java.util.Map<java.lang.String, java.lang.String> ext;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 6)
    public final java.lang.String latest_camp_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 7)
    public final java.lang.String latest_crid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", label = com.czhj.wire.WireField.Label.REPEATED, tag = 8)
    public final java.util.List<java.lang.Integer> material_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 11)
    public final java.util.Map<java.lang.String, java.lang.String> sdk_cached_ads;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 9)
    public final java.lang.Integer sdk_strategy_index;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 19)
    public final java.lang.Integer settlement_mode;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 22)
    public final java.lang.Integer settlement_setting;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 5)
    public final java.lang.String vid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 29)
    public final java.util.List<java.lang.String> vid_list;

    @com.czhj.wire.WireField(adapter = "Video#ADAPTER", tag = 16)
    public final com.czhj.sdk.common.models.Video video;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.AdSlot, com.czhj.sdk.common.models.AdSlot.Builder> {
        public java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> ad_caches;
        public java.lang.Integer ad_count;
        public java.lang.String adslot_id;
        public com.czhj.sdk.common.models.Size adslot_size;
        public java.util.List<java.lang.Integer> adslot_type;
        public java.lang.Integer adx_ecpm;
        public java.lang.Integer alg_bid_type;
        public java.lang.Integer algorithm_floor;
        public java.lang.Integer api_strategy_index;
        public java.lang.Integer auto_click_mode;
        public java.util.List<java.lang.String> b_seat;
        public java.lang.Integer bidfloor;
        public java.lang.Integer commer_ecpm;
        public java.lang.Integer commer_ecpm_state;
        public java.util.List<java.lang.Integer> creative_type;
        public java.lang.Integer ecpm_target;
        public java.lang.Integer expected_floor;
        public java.util.Map<java.lang.String, java.lang.String> ext;
        public java.lang.String latest_camp_id;
        public java.lang.String latest_crid;
        public java.util.List<java.lang.Integer> material_type;
        public java.util.Map<java.lang.String, java.lang.String> sdk_cached_ads;
        public java.lang.Integer sdk_strategy_index;
        public java.lang.Integer settlement_mode;
        public java.lang.Integer settlement_setting;
        public java.lang.String vid;
        public java.util.List<java.lang.String> vid_list;
        public com.czhj.sdk.common.models.Video video;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.adslot_id = r0
                java.lang.Integer r1 = com.czhj.sdk.common.models.AdSlot.DEFAULT_BIDFLOOR
                r2.bidfloor = r1
                r2.vid = r0
                r2.latest_camp_id = r0
                r2.latest_crid = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_SDK_STRATEGY_INDEX
                r2.sdk_strategy_index = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_API_STRATEGY_INDEX
                r2.api_strategy_index = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_ALGORITHM_FLOOR
                r2.algorithm_floor = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_EXPECTED_FLOOR
                r2.expected_floor = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_AUTO_CLICK_MODE
                r2.auto_click_mode = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_SETTLEMENT_MODE
                r2.settlement_mode = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_ALG_BID_TYPE
                r2.alg_bid_type = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_ECPM_TARGET
                r2.ecpm_target = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_SETTLEMENT_SETTING
                r2.settlement_setting = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_COMMER_ECPM
                r2.commer_ecpm = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_ADX_ECPM
                r2.adx_ecpm = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_COMMER_ECPM_STATE
                r2.commer_ecpm_state = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.AdSlot.DEFAULT_AD_COUNT
                r2.ad_count = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.adslot_type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.material_type = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r2.sdk_cached_ads = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.creative_type = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r2.ext = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r2.ad_caches = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.b_seat = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.vid_list = r0
                return
        }

        public com.czhj.sdk.common.models.AdSlot.Builder ad_caches(java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ad_caches = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder ad_count(java.lang.Integer r1) {
                r0 = this;
                r0.ad_count = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder adslot_id(java.lang.String r1) {
                r0 = this;
                r0.adslot_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder adslot_size(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                r0.adslot_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder adslot_type(java.util.List<java.lang.Integer> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.adslot_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder adx_ecpm(java.lang.Integer r1) {
                r0 = this;
                r0.adx_ecpm = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder alg_bid_type(java.lang.Integer r1) {
                r0 = this;
                r0.alg_bid_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder algorithm_floor(java.lang.Integer r1) {
                r0 = this;
                r0.algorithm_floor = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder api_strategy_index(java.lang.Integer r1) {
                r0 = this;
                r0.api_strategy_index = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder auto_click_mode(java.lang.Integer r1) {
                r0 = this;
                r0.auto_click_mode = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder b_seat(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.b_seat = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder bidfloor(java.lang.Integer r1) {
                r0 = this;
                r0.bidfloor = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.AdSlot build() {
                r33 = this;
                r0 = r33
                com.czhj.sdk.common.models.AdSlot r31 = new com.czhj.sdk.common.models.AdSlot
                r1 = r31
                java.lang.String r2 = r0.adslot_id
                com.czhj.sdk.common.models.Size r3 = r0.adslot_size
                java.util.List<java.lang.Integer> r4 = r0.adslot_type
                java.lang.Integer r5 = r0.bidfloor
                java.lang.String r6 = r0.vid
                java.lang.String r7 = r0.latest_camp_id
                java.lang.String r8 = r0.latest_crid
                java.util.List<java.lang.Integer> r9 = r0.material_type
                java.lang.Integer r10 = r0.sdk_strategy_index
                java.lang.Integer r11 = r0.api_strategy_index
                java.util.Map<java.lang.String, java.lang.String> r12 = r0.sdk_cached_ads
                java.util.List<java.lang.Integer> r13 = r0.creative_type
                java.lang.Integer r14 = r0.algorithm_floor
                java.util.Map<java.lang.String, java.lang.String> r15 = r0.ext
                r32 = r1
                java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1 = r0.ad_caches
                r16 = r1
                com.czhj.sdk.common.models.Video r1 = r0.video
                r17 = r1
                java.lang.Integer r1 = r0.expected_floor
                r18 = r1
                java.lang.Integer r1 = r0.auto_click_mode
                r19 = r1
                java.lang.Integer r1 = r0.settlement_mode
                r20 = r1
                java.lang.Integer r1 = r0.alg_bid_type
                r21 = r1
                java.lang.Integer r1 = r0.ecpm_target
                r22 = r1
                java.lang.Integer r1 = r0.settlement_setting
                r23 = r1
                java.lang.Integer r1 = r0.commer_ecpm
                r24 = r1
                java.lang.Integer r1 = r0.adx_ecpm
                r25 = r1
                java.lang.Integer r1 = r0.commer_ecpm_state
                r26 = r1
                java.util.List<java.lang.String> r1 = r0.b_seat
                r27 = r1
                java.lang.Integer r1 = r0.ad_count
                r28 = r1
                java.util.List<java.lang.String> r1 = r0.vid_list
                r29 = r1
                com.czhj.wire.okio.ByteString r30 = super.buildUnknownFields()
                r1 = r32
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30)
                return r31
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.AdSlot r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder commer_ecpm(java.lang.Integer r1) {
                r0 = this;
                r0.commer_ecpm = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder commer_ecpm_state(java.lang.Integer r1) {
                r0 = this;
                r0.commer_ecpm_state = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder creative_type(java.util.List<java.lang.Integer> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.creative_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder ecpm_target(java.lang.Integer r1) {
                r0 = this;
                r0.ecpm_target = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder expected_floor(java.lang.Integer r1) {
                r0 = this;
                r0.expected_floor = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder ext(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ext = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder latest_camp_id(java.lang.String r1) {
                r0 = this;
                r0.latest_camp_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder latest_crid(java.lang.String r1) {
                r0 = this;
                r0.latest_crid = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder material_type(java.util.List<java.lang.Integer> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.material_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder sdk_cached_ads(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.sdk_cached_ads = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder sdk_strategy_index(java.lang.Integer r1) {
                r0 = this;
                r0.sdk_strategy_index = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder settlement_mode(java.lang.Integer r1) {
                r0 = this;
                r0.settlement_mode = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder settlement_setting(java.lang.Integer r1) {
                r0 = this;
                r0.settlement_setting = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder vid(java.lang.String r1) {
                r0 = this;
                r0.vid = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder vid_list(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.vid_list = r1
                return r0
        }

        public com.czhj.sdk.common.models.AdSlot.Builder video(com.czhj.sdk.common.models.Video r1) {
                r0 = this;
                r0.video = r1
                return r0
        }
    }

    private static final class ProtoAdapter_AdSlot extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdSlot> {
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache>> ad_caches;
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> ext;
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> sdk_cached_ads;

        public ProtoAdapter_AdSlot() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.AdSlot> r1 = com.czhj.sdk.common.models.AdSlot.class
                r2.<init>(r0, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.sdk_cached_ads = r0
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.ext = r0
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdCache> r1 = com.czhj.sdk.common.models.AdCache.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.ad_caches = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.AdSlot decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.AdSlot$Builder r0 = new com.czhj.sdk.common.models.AdSlot$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L155
                switch(r3) {
                    case 1: goto L148;
                    case 2: goto L13b;
                    case 3: goto L12e;
                    case 4: goto L121;
                    case 5: goto L114;
                    case 6: goto L107;
                    case 7: goto Lfa;
                    case 8: goto Lf7;
                    case 9: goto Lea;
                    case 10: goto Ldd;
                    case 11: goto Lce;
                    case 12: goto Lcb;
                    case 13: goto Lbe;
                    case 14: goto Lb9;
                    case 15: goto Lb4;
                    case 16: goto La7;
                    case 17: goto L9a;
                    case 18: goto L8d;
                    case 19: goto L80;
                    case 20: goto L74;
                    case 21: goto L68;
                    case 22: goto L5c;
                    case 23: goto L50;
                    case 24: goto L44;
                    case 25: goto L38;
                    case 26: goto L13;
                    case 27: goto L32;
                    case 28: goto L26;
                    case 29: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                java.util.List<java.lang.String> r3 = r0.vid_list
                goto L34
            L26:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.ad_count(r3)
                goto L9
            L32:
                java.util.List<java.lang.String> r3 = r0.b_seat
            L34:
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
                goto L132
            L38:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.commer_ecpm_state(r3)
                goto L9
            L44:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.adx_ecpm(r3)
                goto L9
            L50:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.commer_ecpm(r3)
                goto L9
            L5c:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.settlement_setting(r3)
                goto L9
            L68:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.ecpm_target(r3)
                goto L9
            L74:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.alg_bid_type(r3)
                goto L9
            L80:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.settlement_mode(r3)
                goto L9
            L8d:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.auto_click_mode(r3)
                goto L9
            L9a:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.expected_floor(r3)
                goto L9
            La7:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Video> r3 = com.czhj.sdk.common.models.Video.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Video r3 = (com.czhj.sdk.common.models.Video) r3
                r0.video(r3)
                goto L9
            Lb4:
                java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r3 = r0.ad_caches
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache>> r4 = r6.ad_caches
                goto Ld2
            Lb9:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.ext
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.ext
                goto Ld2
            Lbe:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.algorithm_floor(r3)
                goto L9
            Lcb:
                java.util.List<java.lang.Integer> r3 = r0.creative_type
                goto L130
            Lce:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.sdk_cached_ads
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.sdk_cached_ads
            Ld2:
                java.lang.Object r4 = r4.decode(r7)
                java.util.Map r4 = (java.util.Map) r4
                r3.putAll(r4)
                goto L9
            Ldd:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.api_strategy_index(r3)
                goto L9
            Lea:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.sdk_strategy_index(r3)
                goto L9
            Lf7:
                java.util.List<java.lang.Integer> r3 = r0.material_type
                goto L130
            Lfa:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.latest_crid(r3)
                goto L9
            L107:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.latest_camp_id(r3)
                goto L9
            L114:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.vid(r3)
                goto L9
            L121:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.bidfloor(r3)
                goto L9
            L12e:
                java.util.List<java.lang.Integer> r3 = r0.adslot_type
            L130:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r4 = com.czhj.wire.ProtoAdapter.UINT32
            L132:
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L13b:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r3 = com.czhj.sdk.common.models.Size.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Size r3 = (com.czhj.sdk.common.models.Size) r3
                r0.adslot_size(r3)
                goto L9
            L148:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.adslot_id(r3)
                goto L9
            L155:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.AdSlot r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.AdSlot decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.AdSlot r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.AdSlot r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.adslot_id
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r5.adslot_size
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.Integer> r1 = r5.adslot_type
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.bidfloor
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.vid
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.latest_camp_id
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.latest_crid
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.Integer> r1 = r5.material_type
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.sdk_strategy_index
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.api_strategy_index
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.sdk_cached_ads
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.sdk_cached_ads
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.Integer> r1 = r5.creative_type
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.algorithm_floor
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.ext
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.ext
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache>> r0 = r3.ad_caches
                java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1 = r5.ad_caches
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Video> r0 = com.czhj.sdk.common.models.Video.ADAPTER
                com.czhj.sdk.common.models.Video r1 = r5.video
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.expected_floor
                r2 = 17
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.auto_click_mode
                r2 = 18
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.settlement_mode
                r2 = 19
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.alg_bid_type
                r2 = 20
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.ecpm_target
                r2 = 21
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.settlement_setting
                r2 = 22
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.commer_ecpm
                r2 = 23
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.adx_ecpm
                r2 = 24
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.commer_ecpm_state
                r2 = 25
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.b_seat
                r2 = 27
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.ad_count
                r2 = 28
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.vid_list
                r2 = 29
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.AdSlot r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.AdSlot r2 = (com.czhj.sdk.common.models.AdSlot) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.AdSlot r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.adslot_id
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r1 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r2 = r5.adslot_size
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.Integer> r2 = r5.adslot_type
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.bidfloor
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.vid
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.latest_camp_id
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.latest_crid
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.Integer> r2 = r5.material_type
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.sdk_strategy_index
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.api_strategy_index
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.sdk_cached_ads
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.sdk_cached_ads
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.Integer> r2 = r5.creative_type
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.algorithm_floor
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.ext
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.ext
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache>> r1 = r4.ad_caches
                java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r2 = r5.ad_caches
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Video> r1 = com.czhj.sdk.common.models.Video.ADAPTER
                com.czhj.sdk.common.models.Video r2 = r5.video
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.expected_floor
                r3 = 17
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.auto_click_mode
                r3 = 18
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.settlement_mode
                r3 = 19
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.alg_bid_type
                r3 = 20
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.ecpm_target
                r3 = 21
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.settlement_setting
                r3 = 22
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.commer_ecpm
                r3 = 23
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.adx_ecpm
                r3 = 24
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.commer_ecpm_state
                r3 = 25
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.b_seat
                r3 = 27
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.ad_count
                r3 = 28
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.vid_list
                r3 = 29
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.AdSlot r1) {
                r0 = this;
                com.czhj.sdk.common.models.AdSlot r1 = (com.czhj.sdk.common.models.AdSlot) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.AdSlot redact(com.czhj.sdk.common.models.AdSlot r3) {
                r2 = this;
                com.czhj.sdk.common.models.AdSlot$Builder r3 = r3.newBuilder()
                com.czhj.sdk.common.models.Size r0 = r3.adslot_size
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r3.adslot_size
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Size r0 = (com.czhj.sdk.common.models.Size) r0
                r3.adslot_size = r0
            L14:
                java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r0 = r3.ad_caches
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdCache> r1 = com.czhj.sdk.common.models.AdCache.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.czhj.sdk.common.models.Video r0 = r3.video
                if (r0 == 0) goto L2b
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Video> r0 = com.czhj.sdk.common.models.Video.ADAPTER
                com.czhj.sdk.common.models.Video r1 = r3.video
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Video r0 = (com.czhj.sdk.common.models.Video) r0
                r3.video = r0
            L2b:
                r3.clearUnknownFields()
                com.czhj.sdk.common.models.AdSlot r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.sdk.common.models.AdSlot redact(com.czhj.sdk.common.models.AdSlot r1) {
                r0 = this;
                com.czhj.sdk.common.models.AdSlot r1 = (com.czhj.sdk.common.models.AdSlot) r1
                com.czhj.sdk.common.models.AdSlot r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.AdSlot$ProtoAdapter_AdSlot r0 = new com.czhj.sdk.common.models.AdSlot$ProtoAdapter_AdSlot
            r0.<init>()
            com.czhj.sdk.common.models.AdSlot.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.AdSlot.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.AdSlot.DEFAULT_BIDFLOOR = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_SDK_STRATEGY_INDEX = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_API_STRATEGY_INDEX = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_ALGORITHM_FLOOR = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_EXPECTED_FLOOR = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_AUTO_CLICK_MODE = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_SETTLEMENT_MODE = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_ALG_BID_TYPE = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_ECPM_TARGET = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_SETTLEMENT_SETTING = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_COMMER_ECPM = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_ADX_ECPM = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_COMMER_ECPM_STATE = r0
            com.czhj.sdk.common.models.AdSlot.DEFAULT_AD_COUNT = r0
            return
    }

    public AdSlot(java.lang.String r31, com.czhj.sdk.common.models.Size r32, java.util.List<java.lang.Integer> r33, java.lang.Integer r34, java.lang.String r35, java.lang.String r36, java.lang.String r37, java.util.List<java.lang.Integer> r38, java.lang.Integer r39, java.lang.Integer r40, java.util.Map<java.lang.String, java.lang.String> r41, java.util.List<java.lang.Integer> r42, java.lang.Integer r43, java.util.Map<java.lang.String, java.lang.String> r44, java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r45, com.czhj.sdk.common.models.Video r46, java.lang.Integer r47, java.lang.Integer r48, java.lang.Integer r49, java.lang.Integer r50, java.lang.Integer r51, java.lang.Integer r52, java.lang.Integer r53, java.lang.Integer r54, java.lang.Integer r55, java.util.List<java.lang.String> r56, java.lang.Integer r57, java.util.List<java.lang.String> r58) {
            r30 = this;
            r0 = r30
            r1 = r31
            r2 = r32
            r3 = r33
            r4 = r34
            r5 = r35
            r6 = r36
            r7 = r37
            r8 = r38
            r9 = r39
            r10 = r40
            r11 = r41
            r12 = r42
            r13 = r43
            r14 = r44
            r15 = r45
            r16 = r46
            r17 = r47
            r18 = r48
            r19 = r49
            r20 = r50
            r21 = r51
            r22 = r52
            r23 = r53
            r24 = r54
            r25 = r55
            r26 = r56
            r27 = r57
            r28 = r58
            com.czhj.wire.okio.ByteString r29 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29)
            return
    }

    public AdSlot(java.lang.String r4, com.czhj.sdk.common.models.Size r5, java.util.List<java.lang.Integer> r6, java.lang.Integer r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.util.List<java.lang.Integer> r11, java.lang.Integer r12, java.lang.Integer r13, java.util.Map<java.lang.String, java.lang.String> r14, java.util.List<java.lang.Integer> r15, java.lang.Integer r16, java.util.Map<java.lang.String, java.lang.String> r17, java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r18, com.czhj.sdk.common.models.Video r19, java.lang.Integer r20, java.lang.Integer r21, java.lang.Integer r22, java.lang.Integer r23, java.lang.Integer r24, java.lang.Integer r25, java.lang.Integer r26, java.lang.Integer r27, java.lang.Integer r28, java.util.List<java.lang.String> r29, java.lang.Integer r30, java.util.List<java.lang.String> r31, com.czhj.wire.okio.ByteString r32) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.AdSlot> r1 = com.czhj.sdk.common.models.AdSlot.ADAPTER
            r2 = r32
            r3.<init>(r1, r2)
            r1 = r4
            r0.adslot_id = r1
            r1 = r5
            r0.adslot_size = r1
            java.lang.String r1 = "adslot_type"
            r2 = r6
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r6)
            r0.adslot_type = r1
            r1 = r7
            r0.bidfloor = r1
            r1 = r8
            r0.vid = r1
            r1 = r9
            r0.latest_camp_id = r1
            r1 = r10
            r0.latest_crid = r1
            java.lang.String r1 = "material_type"
            r2 = r11
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r11)
            r0.material_type = r1
            r1 = r12
            r0.sdk_strategy_index = r1
            r1 = r13
            r0.api_strategy_index = r1
            java.lang.String r1 = "sdk_cached_ads"
            r2 = r14
            java.util.Map r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r14)
            r0.sdk_cached_ads = r1
            java.lang.String r1 = "creative_type"
            r2 = r15
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r15)
            r0.creative_type = r1
            r1 = r16
            r0.algorithm_floor = r1
            java.lang.String r1 = "ext"
            r2 = r17
            java.util.Map r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.ext = r1
            java.lang.String r1 = "ad_caches"
            r2 = r18
            java.util.Map r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.ad_caches = r1
            r1 = r19
            r0.video = r1
            r1 = r20
            r0.expected_floor = r1
            r1 = r21
            r0.auto_click_mode = r1
            r1 = r22
            r0.settlement_mode = r1
            r1 = r23
            r0.alg_bid_type = r1
            r1 = r24
            r0.ecpm_target = r1
            r1 = r25
            r0.settlement_setting = r1
            r1 = r26
            r0.commer_ecpm = r1
            r1 = r27
            r0.adx_ecpm = r1
            r1 = r28
            r0.commer_ecpm_state = r1
            java.lang.String r1 = "b_seat"
            r2 = r29
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.b_seat = r1
            r1 = r30
            r0.ad_count = r1
            java.lang.String r1 = "vid_list"
            r2 = r31
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.vid_list = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.AdSlot
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.AdSlot r5 = (com.czhj.sdk.common.models.AdSlot) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            java.lang.String r1 = r4.adslot_id
            java.lang.String r3 = r5.adslot_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            com.czhj.sdk.common.models.Size r1 = r4.adslot_size
            com.czhj.sdk.common.models.Size r3 = r5.adslot_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.util.List<java.lang.Integer> r1 = r4.adslot_type
            java.util.List<java.lang.Integer> r3 = r5.adslot_type
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.bidfloor
            java.lang.Integer r3 = r5.bidfloor
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.String r1 = r4.vid
            java.lang.String r3 = r5.vid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.String r1 = r4.latest_camp_id
            java.lang.String r3 = r5.latest_camp_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.String r1 = r4.latest_crid
            java.lang.String r3 = r5.latest_crid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.util.List<java.lang.Integer> r1 = r4.material_type
            java.util.List<java.lang.Integer> r3 = r5.material_type
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.sdk_strategy_index
            java.lang.Integer r3 = r5.sdk_strategy_index
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.api_strategy_index
            java.lang.Integer r3 = r5.api_strategy_index
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.sdk_cached_ads
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.sdk_cached_ads
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            java.util.List<java.lang.Integer> r1 = r4.creative_type
            java.util.List<java.lang.Integer> r3 = r5.creative_type
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.algorithm_floor
            java.lang.Integer r3 = r5.algorithm_floor
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ext
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.ext
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1 = r4.ad_caches
            java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r3 = r5.ad_caches
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            com.czhj.sdk.common.models.Video r1 = r4.video
            com.czhj.sdk.common.models.Video r3 = r5.video
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.expected_floor
            java.lang.Integer r3 = r5.expected_floor
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.auto_click_mode
            java.lang.Integer r3 = r5.auto_click_mode
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.settlement_mode
            java.lang.Integer r3 = r5.settlement_mode
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.alg_bid_type
            java.lang.Integer r3 = r5.alg_bid_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.ecpm_target
            java.lang.Integer r3 = r5.ecpm_target
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.settlement_setting
            java.lang.Integer r3 = r5.settlement_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.commer_ecpm
            java.lang.Integer r3 = r5.commer_ecpm
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.adx_ecpm
            java.lang.Integer r3 = r5.adx_ecpm
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.commer_ecpm_state
            java.lang.Integer r3 = r5.commer_ecpm_state
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.util.List<java.lang.String> r1 = r4.b_seat
            java.util.List<java.lang.String> r3 = r5.b_seat
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L133
            java.lang.Integer r1 = r4.ad_count
            java.lang.Integer r3 = r5.ad_count
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L133
            java.util.List<java.lang.String> r1 = r4.vid_list
            java.util.List<java.lang.String> r5 = r5.vid_list
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L133
            goto L134
        L133:
            r0 = r2
        L134:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L159
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.adslot_id
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Size r1 = r3.adslot_size
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.Integer> r1 = r3.adslot_type
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.bidfloor
            if (r1 == 0) goto L3b
            int r1 = r1.hashCode()
            goto L3c
        L3b:
            r1 = r2
        L3c:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.vid
            if (r1 == 0) goto L48
            int r1 = r1.hashCode()
            goto L49
        L48:
            r1 = r2
        L49:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.latest_camp_id
            if (r1 == 0) goto L55
            int r1 = r1.hashCode()
            goto L56
        L55:
            r1 = r2
        L56:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.latest_crid
            if (r1 == 0) goto L62
            int r1 = r1.hashCode()
            goto L63
        L62:
            r1 = r2
        L63:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.Integer> r1 = r3.material_type
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.sdk_strategy_index
            if (r1 == 0) goto L78
            int r1 = r1.hashCode()
            goto L79
        L78:
            r1 = r2
        L79:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.api_strategy_index
            if (r1 == 0) goto L85
            int r1 = r1.hashCode()
            goto L86
        L85:
            r1 = r2
        L86:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.sdk_cached_ads
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.Integer> r1 = r3.creative_type
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.algorithm_floor
            if (r1 == 0) goto La4
            int r1 = r1.hashCode()
            goto La5
        La4:
            r1 = r2
        La5:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ext
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1 = r3.ad_caches
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Video r1 = r3.video
            if (r1 == 0) goto Lc3
            int r1 = r1.hashCode()
            goto Lc4
        Lc3:
            r1 = r2
        Lc4:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.expected_floor
            if (r1 == 0) goto Ld0
            int r1 = r1.hashCode()
            goto Ld1
        Ld0:
            r1 = r2
        Ld1:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.auto_click_mode
            if (r1 == 0) goto Ldd
            int r1 = r1.hashCode()
            goto Lde
        Ldd:
            r1 = r2
        Lde:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.settlement_mode
            if (r1 == 0) goto Lea
            int r1 = r1.hashCode()
            goto Leb
        Lea:
            r1 = r2
        Leb:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.alg_bid_type
            if (r1 == 0) goto Lf7
            int r1 = r1.hashCode()
            goto Lf8
        Lf7:
            r1 = r2
        Lf8:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.ecpm_target
            if (r1 == 0) goto L104
            int r1 = r1.hashCode()
            goto L105
        L104:
            r1 = r2
        L105:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.settlement_setting
            if (r1 == 0) goto L111
            int r1 = r1.hashCode()
            goto L112
        L111:
            r1 = r2
        L112:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.commer_ecpm
            if (r1 == 0) goto L11e
            int r1 = r1.hashCode()
            goto L11f
        L11e:
            r1 = r2
        L11f:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.adx_ecpm
            if (r1 == 0) goto L12b
            int r1 = r1.hashCode()
            goto L12c
        L12b:
            r1 = r2
        L12c:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.commer_ecpm_state
            if (r1 == 0) goto L138
            int r1 = r1.hashCode()
            goto L139
        L138:
            r1 = r2
        L139:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.b_seat
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.ad_count
            if (r1 == 0) goto L14d
            int r2 = r1.hashCode()
        L14d:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.vid_list
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        L159:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.AdSlot.Builder newBuilder() {
            r3 = this;
            com.czhj.sdk.common.models.AdSlot$Builder r0 = new com.czhj.sdk.common.models.AdSlot$Builder
            r0.<init>()
            java.lang.String r1 = r3.adslot_id
            r0.adslot_id = r1
            com.czhj.sdk.common.models.Size r1 = r3.adslot_size
            r0.adslot_size = r1
            java.util.List<java.lang.Integer> r1 = r3.adslot_type
            java.lang.String r2 = "adslot_type"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.adslot_type = r1
            java.lang.Integer r1 = r3.bidfloor
            r0.bidfloor = r1
            java.lang.String r1 = r3.vid
            r0.vid = r1
            java.lang.String r1 = r3.latest_camp_id
            r0.latest_camp_id = r1
            java.lang.String r1 = r3.latest_crid
            r0.latest_crid = r1
            java.util.List<java.lang.Integer> r1 = r3.material_type
            java.lang.String r2 = "material_type"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.material_type = r1
            java.lang.Integer r1 = r3.sdk_strategy_index
            r0.sdk_strategy_index = r1
            java.lang.Integer r1 = r3.api_strategy_index
            r0.api_strategy_index = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.sdk_cached_ads
            java.lang.String r2 = "sdk_cached_ads"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.sdk_cached_ads = r1
            java.util.List<java.lang.Integer> r1 = r3.creative_type
            java.lang.String r2 = "creative_type"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.creative_type = r1
            java.lang.Integer r1 = r3.algorithm_floor
            r0.algorithm_floor = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ext
            java.lang.String r2 = "ext"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ext = r1
            java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1 = r3.ad_caches
            java.lang.String r2 = "ad_caches"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ad_caches = r1
            com.czhj.sdk.common.models.Video r1 = r3.video
            r0.video = r1
            java.lang.Integer r1 = r3.expected_floor
            r0.expected_floor = r1
            java.lang.Integer r1 = r3.auto_click_mode
            r0.auto_click_mode = r1
            java.lang.Integer r1 = r3.settlement_mode
            r0.settlement_mode = r1
            java.lang.Integer r1 = r3.alg_bid_type
            r0.alg_bid_type = r1
            java.lang.Integer r1 = r3.ecpm_target
            r0.ecpm_target = r1
            java.lang.Integer r1 = r3.settlement_setting
            r0.settlement_setting = r1
            java.lang.Integer r1 = r3.commer_ecpm
            r0.commer_ecpm = r1
            java.lang.Integer r1 = r3.adx_ecpm
            r0.adx_ecpm = r1
            java.lang.Integer r1 = r3.commer_ecpm_state
            r0.commer_ecpm_state = r1
            java.util.List<java.lang.String> r1 = r3.b_seat
            java.lang.String r2 = "b_seat"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.b_seat = r1
            java.lang.Integer r1 = r3.ad_count
            r0.ad_count = r1
            java.util.List<java.lang.String> r1 = r3.vid_list
            java.lang.String r2 = "vid_list"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.vid_list = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.AdSlot$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.adslot_id
            if (r1 == 0) goto L13
            java.lang.String r1 = ", adslot_id="
            r0.append(r1)
            java.lang.String r1 = r4.adslot_id
            r0.append(r1)
        L13:
            com.czhj.sdk.common.models.Size r1 = r4.adslot_size
            if (r1 == 0) goto L21
            java.lang.String r1 = ", adslot_size="
            r0.append(r1)
            com.czhj.sdk.common.models.Size r1 = r4.adslot_size
            r0.append(r1)
        L21:
            java.util.List<java.lang.Integer> r1 = r4.adslot_type
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L33
            java.lang.String r1 = ", adslot_type="
            r0.append(r1)
            java.util.List<java.lang.Integer> r1 = r4.adslot_type
            r0.append(r1)
        L33:
            java.lang.Integer r1 = r4.bidfloor
            if (r1 == 0) goto L41
            java.lang.String r1 = ", bidfloor="
            r0.append(r1)
            java.lang.Integer r1 = r4.bidfloor
            r0.append(r1)
        L41:
            java.lang.String r1 = r4.vid
            if (r1 == 0) goto L4f
            java.lang.String r1 = ", vid="
            r0.append(r1)
            java.lang.String r1 = r4.vid
            r0.append(r1)
        L4f:
            java.lang.String r1 = r4.latest_camp_id
            if (r1 == 0) goto L5d
            java.lang.String r1 = ", latest_camp_id="
            r0.append(r1)
            java.lang.String r1 = r4.latest_camp_id
            r0.append(r1)
        L5d:
            java.lang.String r1 = r4.latest_crid
            if (r1 == 0) goto L6b
            java.lang.String r1 = ", latest_crid="
            r0.append(r1)
            java.lang.String r1 = r4.latest_crid
            r0.append(r1)
        L6b:
            java.util.List<java.lang.Integer> r1 = r4.material_type
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L7d
            java.lang.String r1 = ", material_type="
            r0.append(r1)
            java.util.List<java.lang.Integer> r1 = r4.material_type
            r0.append(r1)
        L7d:
            java.lang.Integer r1 = r4.sdk_strategy_index
            if (r1 == 0) goto L8b
            java.lang.String r1 = ", sdk_strategy_index="
            r0.append(r1)
            java.lang.Integer r1 = r4.sdk_strategy_index
            r0.append(r1)
        L8b:
            java.lang.Integer r1 = r4.api_strategy_index
            if (r1 == 0) goto L99
            java.lang.String r1 = ", api_strategy_index="
            r0.append(r1)
            java.lang.Integer r1 = r4.api_strategy_index
            r0.append(r1)
        L99:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.sdk_cached_ads
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lab
            java.lang.String r1 = ", sdk_cached_ads="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.sdk_cached_ads
            r0.append(r1)
        Lab:
            java.util.List<java.lang.Integer> r1 = r4.creative_type
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lbd
            java.lang.String r1 = ", creative_type="
            r0.append(r1)
            java.util.List<java.lang.Integer> r1 = r4.creative_type
            r0.append(r1)
        Lbd:
            java.lang.Integer r1 = r4.algorithm_floor
            if (r1 == 0) goto Lcb
            java.lang.String r1 = ", algorithm_floor="
            r0.append(r1)
            java.lang.Integer r1 = r4.algorithm_floor
            r0.append(r1)
        Lcb:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ext
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Ldd
            java.lang.String r1 = ", ext="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ext
            r0.append(r1)
        Ldd:
            java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1 = r4.ad_caches
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lef
            java.lang.String r1 = ", ad_caches="
            r0.append(r1)
            java.util.Map<java.lang.String, com.czhj.sdk.common.models.AdCache> r1 = r4.ad_caches
            r0.append(r1)
        Lef:
            com.czhj.sdk.common.models.Video r1 = r4.video
            if (r1 == 0) goto Lfd
            java.lang.String r1 = ", video="
            r0.append(r1)
            com.czhj.sdk.common.models.Video r1 = r4.video
            r0.append(r1)
        Lfd:
            java.lang.Integer r1 = r4.expected_floor
            if (r1 == 0) goto L10b
            java.lang.String r1 = ", expected_floor="
            r0.append(r1)
            java.lang.Integer r1 = r4.expected_floor
            r0.append(r1)
        L10b:
            java.lang.Integer r1 = r4.auto_click_mode
            if (r1 == 0) goto L119
            java.lang.String r1 = ", auto_click_mode="
            r0.append(r1)
            java.lang.Integer r1 = r4.auto_click_mode
            r0.append(r1)
        L119:
            java.lang.Integer r1 = r4.settlement_mode
            if (r1 == 0) goto L127
            java.lang.String r1 = ", settlement_mode="
            r0.append(r1)
            java.lang.Integer r1 = r4.settlement_mode
            r0.append(r1)
        L127:
            java.lang.Integer r1 = r4.alg_bid_type
            if (r1 == 0) goto L135
            java.lang.String r1 = ", alg_bid_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.alg_bid_type
            r0.append(r1)
        L135:
            java.lang.Integer r1 = r4.ecpm_target
            if (r1 == 0) goto L143
            java.lang.String r1 = ", ecpm_target="
            r0.append(r1)
            java.lang.Integer r1 = r4.ecpm_target
            r0.append(r1)
        L143:
            java.lang.Integer r1 = r4.settlement_setting
            if (r1 == 0) goto L151
            java.lang.String r1 = ", settlement_setting="
            r0.append(r1)
            java.lang.Integer r1 = r4.settlement_setting
            r0.append(r1)
        L151:
            java.lang.Integer r1 = r4.commer_ecpm
            if (r1 == 0) goto L15f
            java.lang.String r1 = ", commer_ecpm="
            r0.append(r1)
            java.lang.Integer r1 = r4.commer_ecpm
            r0.append(r1)
        L15f:
            java.lang.Integer r1 = r4.adx_ecpm
            if (r1 == 0) goto L16d
            java.lang.String r1 = ", adx_ecpm="
            r0.append(r1)
            java.lang.Integer r1 = r4.adx_ecpm
            r0.append(r1)
        L16d:
            java.lang.Integer r1 = r4.commer_ecpm_state
            if (r1 == 0) goto L17b
            java.lang.String r1 = ", commer_ecpm_state="
            r0.append(r1)
            java.lang.Integer r1 = r4.commer_ecpm_state
            r0.append(r1)
        L17b:
            java.util.List<java.lang.String> r1 = r4.b_seat
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L18d
            java.lang.String r1 = ", b_seat="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.b_seat
            r0.append(r1)
        L18d:
            java.lang.Integer r1 = r4.ad_count
            if (r1 == 0) goto L19b
            java.lang.String r1 = ", ad_count="
            r0.append(r1)
            java.lang.Integer r1 = r4.ad_count
            r0.append(r1)
        L19b:
            java.util.List<java.lang.String> r1 = r4.vid_list
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L1ad
            java.lang.String r1 = ", vid_list="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.vid_list
            r0.append(r1)
        L1ad:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "AdSlot{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
