package com.sigmob.sdk.base.models.rtb;

public final class Ad extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.Ad, com.sigmob.sdk.base.models.rtb.Ad.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Ad> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.Ad> CREATOR = null;
    public static final java.lang.String DEFAULT_ADSLOT_ID = "";
    public static final java.lang.String DEFAULT_AD_SOURCE_CHANNEL = "";
    public static final java.lang.String DEFAULT_AD_SOURCE_LOGO = "";
    public static final java.lang.Integer DEFAULT_AD_TYPE = null;
    public static final java.lang.String DEFAULT_ATTRIBUTION_ID = "";
    public static final java.lang.Integer DEFAULT_BID_PRICE = null;
    public static final java.lang.Integer DEFAULT_BID_TYPE = null;
    public static final java.lang.String DEFAULT_CAMP_ID = "";
    public static final java.lang.String DEFAULT_CRID = "";
    public static final java.lang.String DEFAULT_CUST_ID = "";
    public static final java.lang.Integer DEFAULT_DISPLAY_ORIENTATION = null;
    public static final java.lang.Integer DEFAULT_EXPIRED_TIME = null;
    public static final java.lang.Boolean DEFAULT_FORBIDEN_PARSE_LANDINGPAGE = null;
    public static final java.lang.Integer DEFAULT_IS_OVERRIDE = null;
    public static final java.lang.String DEFAULT_PRODUCT_ID = "";
    public static final java.lang.String DEFAULT_SETTLEMENT_PRICE_ENC = "";
    public static final java.lang.String DEFAULT_VID = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.AdSetting#ADAPTER", tag = 19)
    public final com.sigmob.sdk.base.models.rtb.AdSetting ad_setting;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 13)
    public final java.lang.String ad_source_channel;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 12)
    public final java.lang.String ad_source_logo;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 24)
    public final java.util.Map<java.lang.String, java.lang.String> ad_track_macro;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.Tracking#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 7)
    public final java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> ad_tracking;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 14)
    public final java.lang.Integer ad_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String adslot_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 21)
    public final java.lang.String attribution_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 8)
    public final java.lang.Integer bid_price;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 20)
    public final java.lang.Integer bid_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String camp_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 5)
    public final java.lang.String crid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String cust_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 18)
    public final java.lang.Integer display_orientation;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 16)
    public final java.lang.Integer expired_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 17)
    public final java.lang.Boolean forbiden_parse_landingpage;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 11)
    public final java.lang.Integer is_override;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.MaterialMeta#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 6)
    public final java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> materials;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 15)
    public final java.util.Map<java.lang.String, java.lang.String> options;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 9)
    public final java.lang.String product_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 10)
    public final java.lang.String settlement_price_enc;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String vid;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.WXProgramRes#ADAPTER", tag = 27)
    public final com.sigmob.sdk.base.models.rtb.WXProgramRes wx_program_res;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.Ad, com.sigmob.sdk.base.models.rtb.Ad.Builder> {
        public com.sigmob.sdk.base.models.rtb.AdSetting ad_setting;
        public java.lang.String ad_source_channel;
        public java.lang.String ad_source_logo;
        public java.util.Map<java.lang.String, java.lang.String> ad_track_macro;
        public java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> ad_tracking;
        public java.lang.Integer ad_type;
        public java.lang.String adslot_id;
        public java.lang.String attribution_id;
        public java.lang.Integer bid_price;
        public java.lang.Integer bid_type;
        public java.lang.String camp_id;
        public java.lang.String crid;
        public java.lang.String cust_id;
        public java.lang.Integer display_orientation;
        public java.lang.Integer expired_time;
        public java.lang.Boolean forbiden_parse_landingpage;
        public java.lang.Integer is_override;
        public java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> materials;
        public java.util.Map<java.lang.String, java.lang.String> options;
        public java.lang.String product_id;
        public java.lang.String settlement_price_enc;
        public java.lang.String vid;
        public com.sigmob.sdk.base.models.rtb.WXProgramRes wx_program_res;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.adslot_id = r0
                r2.vid = r0
                r2.cust_id = r0
                r2.camp_id = r0
                r2.crid = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_BID_PRICE
                r2.bid_price = r1
                r2.product_id = r0
                r2.settlement_price_enc = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_IS_OVERRIDE
                r2.is_override = r1
                r2.ad_source_logo = r0
                r2.ad_source_channel = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_AD_TYPE
                r2.ad_type = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_EXPIRED_TIME
                r2.expired_time = r1
                java.lang.Boolean r1 = com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_FORBIDEN_PARSE_LANDINGPAGE
                r2.forbiden_parse_landingpage = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_DISPLAY_ORIENTATION
                r2.display_orientation = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_BID_TYPE
                r2.bid_type = r1
                r2.attribution_id = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.materials = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.ad_tracking = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r2.options = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r2.ad_track_macro = r0
                return
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder ad_setting(com.sigmob.sdk.base.models.rtb.AdSetting r1) {
                r0 = this;
                r0.ad_setting = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder ad_source_channel(java.lang.String r1) {
                r0 = this;
                r0.ad_source_channel = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder ad_source_logo(java.lang.String r1) {
                r0 = this;
                r0.ad_source_logo = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder ad_track_macro(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ad_track_macro = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder ad_tracking(java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ad_tracking = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder ad_type(java.lang.Integer r1) {
                r0 = this;
                r0.ad_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder adslot_id(java.lang.String r1) {
                r0 = this;
                r0.adslot_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder attribution_id(java.lang.String r1) {
                r0 = this;
                r0.attribution_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder bid_price(java.lang.Integer r1) {
                r0 = this;
                r0.bid_price = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder bid_type(java.lang.Integer r1) {
                r0 = this;
                r0.bid_type = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.Ad r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Ad build() {
                r28 = this;
                r0 = r28
                com.sigmob.sdk.base.models.rtb.Ad r26 = new com.sigmob.sdk.base.models.rtb.Ad
                r1 = r26
                java.lang.String r2 = r0.adslot_id
                java.lang.String r3 = r0.vid
                java.lang.String r4 = r0.cust_id
                java.lang.String r5 = r0.camp_id
                java.lang.String r6 = r0.crid
                java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r7 = r0.materials
                java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r8 = r0.ad_tracking
                java.lang.Integer r9 = r0.bid_price
                java.lang.String r10 = r0.product_id
                java.lang.String r11 = r0.settlement_price_enc
                java.lang.Integer r12 = r0.is_override
                java.lang.String r13 = r0.ad_source_logo
                java.lang.String r14 = r0.ad_source_channel
                java.lang.Integer r15 = r0.ad_type
                r27 = r1
                java.util.Map<java.lang.String, java.lang.String> r1 = r0.options
                r16 = r1
                java.lang.Integer r1 = r0.expired_time
                r17 = r1
                java.lang.Boolean r1 = r0.forbiden_parse_landingpage
                r18 = r1
                java.lang.Integer r1 = r0.display_orientation
                r19 = r1
                com.sigmob.sdk.base.models.rtb.AdSetting r1 = r0.ad_setting
                r20 = r1
                java.lang.Integer r1 = r0.bid_type
                r21 = r1
                java.lang.String r1 = r0.attribution_id
                r22 = r1
                java.util.Map<java.lang.String, java.lang.String> r1 = r0.ad_track_macro
                r23 = r1
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r0.wx_program_res
                r24 = r1
                com.czhj.wire.okio.ByteString r25 = super.buildUnknownFields()
                r1 = r27
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25)
                return r26
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder camp_id(java.lang.String r1) {
                r0 = this;
                r0.camp_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder crid(java.lang.String r1) {
                r0 = this;
                r0.crid = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder cust_id(java.lang.String r1) {
                r0 = this;
                r0.cust_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder display_orientation(java.lang.Integer r1) {
                r0 = this;
                r0.display_orientation = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder expired_time(java.lang.Integer r1) {
                r0 = this;
                r0.expired_time = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder forbiden_parse_landingpage(java.lang.Boolean r1) {
                r0 = this;
                r0.forbiden_parse_landingpage = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder is_override(java.lang.Integer r1) {
                r0 = this;
                r0.is_override = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder materials(java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.materials = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder options(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.options = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder product_id(java.lang.String r1) {
                r0 = this;
                r0.product_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder settlement_price_enc(java.lang.String r1) {
                r0 = this;
                r0.settlement_price_enc = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder vid(java.lang.String r1) {
                r0 = this;
                r0.vid = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Ad.Builder wx_program_res(com.sigmob.sdk.base.models.rtb.WXProgramRes r1) {
                r0 = this;
                r0.wx_program_res = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Ad extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Ad> {
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> ad_track_macro;
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> options;

        public ProtoAdapter_Ad() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.Ad> r1 = com.sigmob.sdk.base.models.rtb.Ad.class
                r2.<init>(r0, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.options = r0
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.ad_track_macro = r0
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Ad decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.Ad$Builder r0 = new com.sigmob.sdk.base.models.rtb.Ad$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L142
                r4 = 24
                if (r3 == r4) goto L13c
                r4 = 27
                if (r3 == r4) goto L12f
                switch(r3) {
                    case 1: goto L122;
                    case 2: goto L115;
                    case 3: goto L108;
                    case 4: goto Lfb;
                    case 5: goto Lee;
                    case 6: goto Le1;
                    case 7: goto Ldc;
                    case 8: goto Lcf;
                    case 9: goto Lc2;
                    case 10: goto Lb5;
                    case 11: goto La8;
                    case 12: goto L9b;
                    case 13: goto L8e;
                    case 14: goto L81;
                    case 15: goto L73;
                    case 16: goto L67;
                    case 17: goto L5b;
                    case 18: goto L4f;
                    case 19: goto L43;
                    case 20: goto L37;
                    case 21: goto L2b;
                    default: goto L1b;
                }
            L1b:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L2b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.attribution_id(r3)
                goto L9
            L37:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.bid_type(r3)
                goto L9
            L43:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdSetting> r3 = com.sigmob.sdk.base.models.rtb.AdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.AdSetting r3 = (com.sigmob.sdk.base.models.rtb.AdSetting) r3
                r0.ad_setting(r3)
                goto L9
            L4f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.display_orientation(r3)
                goto L9
            L5b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.forbiden_parse_landingpage(r3)
                goto L9
            L67:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.expired_time(r3)
                goto L9
            L73:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.options
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.options
            L77:
                java.lang.Object r4 = r4.decode(r7)
                java.util.Map r4 = (java.util.Map) r4
                r3.putAll(r4)
                goto L9
            L81:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.ad_type(r3)
                goto L9
            L8e:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.ad_source_channel(r3)
                goto L9
            L9b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.ad_source_logo(r3)
                goto L9
            La8:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.is_override(r3)
                goto L9
            Lb5:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.settlement_price_enc(r3)
                goto L9
            Lc2:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.product_id(r3)
                goto L9
            Lcf:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.bid_price(r3)
                goto L9
            Ldc:
                java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r3 = r0.ad_tracking
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Tracking> r4 = com.sigmob.sdk.base.models.rtb.Tracking.ADAPTER
                goto Le5
            Le1:
                java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r0.materials
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.MaterialMeta> r4 = com.sigmob.sdk.base.models.rtb.MaterialMeta.ADAPTER
            Le5:
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            Lee:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.crid(r3)
                goto L9
            Lfb:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.camp_id(r3)
                goto L9
            L108:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.cust_id(r3)
                goto L9
            L115:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.vid(r3)
                goto L9
            L122:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.adslot_id(r3)
                goto L9
            L12f:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.WXProgramRes> r3 = com.sigmob.sdk.base.models.rtb.WXProgramRes.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.WXProgramRes r3 = (com.sigmob.sdk.base.models.rtb.WXProgramRes) r3
                r0.wx_program_res(r3)
                goto L9
            L13c:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.ad_track_macro
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.ad_track_macro
                goto L77
            L142:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.Ad r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Ad decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Ad r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.Ad r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.adslot_id
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.vid
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.cust_id
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.camp_id
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.crid
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = com.sigmob.sdk.base.models.rtb.MaterialMeta.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = r5.materials
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Tracking> r0 = com.sigmob.sdk.base.models.rtb.Tracking.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r1 = r5.ad_tracking
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.bid_price
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.product_id
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.settlement_price_enc
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.is_override
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.ad_source_logo
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.ad_source_channel
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.ad_type
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.options
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.options
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.expired_time
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.forbiden_parse_landingpage
                r2 = 17
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.display_orientation
                r2 = 18
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdSetting> r0 = com.sigmob.sdk.base.models.rtb.AdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.AdSetting r1 = r5.ad_setting
                r2 = 19
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.bid_type
                r2 = 20
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.attribution_id
                r2 = 21
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.ad_track_macro
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.ad_track_macro
                r2 = 24
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.WXProgramRes> r0 = com.sigmob.sdk.base.models.rtb.WXProgramRes.ADAPTER
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r5.wx_program_res
                r2 = 27
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.Ad r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Ad r2 = (com.sigmob.sdk.base.models.rtb.Ad) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.Ad r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.adslot_id
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.vid
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.cust_id
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.camp_id
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.crid
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r2 = r5.materials
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Tracking> r1 = com.sigmob.sdk.base.models.rtb.Tracking.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r2 = r5.ad_tracking
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.bid_price
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.product_id
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.settlement_price_enc
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.is_override
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.ad_source_logo
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.ad_source_channel
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.ad_type
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.options
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.options
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.expired_time
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.forbiden_parse_landingpage
                r3 = 17
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.display_orientation
                r3 = 18
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdSetting> r1 = com.sigmob.sdk.base.models.rtb.AdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.AdSetting r2 = r5.ad_setting
                r3 = 19
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.bid_type
                r3 = 20
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.attribution_id
                r3 = 21
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.ad_track_macro
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.ad_track_macro
                r3 = 24
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.WXProgramRes> r1 = com.sigmob.sdk.base.models.rtb.WXProgramRes.ADAPTER
                com.sigmob.sdk.base.models.rtb.WXProgramRes r2 = r5.wx_program_res
                r3 = 27
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.Ad r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Ad r1 = (com.sigmob.sdk.base.models.rtb.Ad) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.Ad redact(com.sigmob.sdk.base.models.rtb.Ad r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.Ad$Builder r3 = r3.newBuilder()
                java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r0 = r3.materials
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r0 = r3.ad_tracking
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Tracking> r1 = com.sigmob.sdk.base.models.rtb.Tracking.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.sigmob.sdk.base.models.rtb.AdSetting r0 = r3.ad_setting
                if (r0 == 0) goto L22
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdSetting> r0 = com.sigmob.sdk.base.models.rtb.AdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.AdSetting r1 = r3.ad_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.AdSetting r0 = (com.sigmob.sdk.base.models.rtb.AdSetting) r0
                r3.ad_setting = r0
            L22:
                com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r3.wx_program_res
                if (r0 == 0) goto L32
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.WXProgramRes> r0 = com.sigmob.sdk.base.models.rtb.WXProgramRes.ADAPTER
                com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r3.wx_program_res
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = (com.sigmob.sdk.base.models.rtb.WXProgramRes) r0
                r3.wx_program_res = r0
            L32:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.Ad r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Ad redact(com.sigmob.sdk.base.models.rtb.Ad r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Ad r1 = (com.sigmob.sdk.base.models.rtb.Ad) r1
                com.sigmob.sdk.base.models.rtb.Ad r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.Ad$ProtoAdapter_Ad r0 = new com.sigmob.sdk.base.models.rtb.Ad$ProtoAdapter_Ad
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.Ad.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.Ad.CREATOR = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_BID_PRICE = r1
            com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_IS_OVERRIDE = r1
            com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_AD_TYPE = r1
            com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_EXPIRED_TIME = r1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_FORBIDEN_PARSE_LANDINGPAGE = r0
            com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_DISPLAY_ORIENTATION = r1
            com.sigmob.sdk.base.models.rtb.Ad.DEFAULT_BID_TYPE = r1
            return
    }

    public Ad(java.lang.String r26, java.lang.String r27, java.lang.String r28, java.lang.String r29, java.lang.String r30, java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r31, java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r32, java.lang.Integer r33, java.lang.String r34, java.lang.String r35, java.lang.Integer r36, java.lang.String r37, java.lang.String r38, java.lang.Integer r39, java.util.Map<java.lang.String, java.lang.String> r40, java.lang.Integer r41, java.lang.Boolean r42, java.lang.Integer r43, com.sigmob.sdk.base.models.rtb.AdSetting r44, java.lang.Integer r45, java.lang.String r46, java.util.Map<java.lang.String, java.lang.String> r47, com.sigmob.sdk.base.models.rtb.WXProgramRes r48) {
            r25 = this;
            r0 = r25
            r1 = r26
            r2 = r27
            r3 = r28
            r4 = r29
            r5 = r30
            r6 = r31
            r7 = r32
            r8 = r33
            r9 = r34
            r10 = r35
            r11 = r36
            r12 = r37
            r13 = r38
            r14 = r39
            r15 = r40
            r16 = r41
            r17 = r42
            r18 = r43
            r19 = r44
            r20 = r45
            r21 = r46
            r22 = r47
            r23 = r48
            com.czhj.wire.okio.ByteString r24 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24)
            return
    }

    public Ad(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r9, java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r10, java.lang.Integer r11, java.lang.String r12, java.lang.String r13, java.lang.Integer r14, java.lang.String r15, java.lang.String r16, java.lang.Integer r17, java.util.Map<java.lang.String, java.lang.String> r18, java.lang.Integer r19, java.lang.Boolean r20, java.lang.Integer r21, com.sigmob.sdk.base.models.rtb.AdSetting r22, java.lang.Integer r23, java.lang.String r24, java.util.Map<java.lang.String, java.lang.String> r25, com.sigmob.sdk.base.models.rtb.WXProgramRes r26, com.czhj.wire.okio.ByteString r27) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Ad> r1 = com.sigmob.sdk.base.models.rtb.Ad.ADAPTER
            r2 = r27
            r3.<init>(r1, r2)
            r1 = r4
            r0.adslot_id = r1
            r1 = r5
            r0.vid = r1
            r1 = r6
            r0.cust_id = r1
            r1 = r7
            r0.camp_id = r1
            r1 = r8
            r0.crid = r1
            java.lang.String r1 = "materials"
            r2 = r9
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r9)
            r0.materials = r1
            java.lang.String r1 = "ad_tracking"
            r2 = r10
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r10)
            r0.ad_tracking = r1
            r1 = r11
            r0.bid_price = r1
            r1 = r12
            r0.product_id = r1
            r1 = r13
            r0.settlement_price_enc = r1
            r1 = r14
            r0.is_override = r1
            r1 = r15
            r0.ad_source_logo = r1
            r1 = r16
            r0.ad_source_channel = r1
            r1 = r17
            r0.ad_type = r1
            java.lang.String r1 = "options"
            r2 = r18
            java.util.Map r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.options = r1
            r1 = r19
            r0.expired_time = r1
            r1 = r20
            r0.forbiden_parse_landingpage = r1
            r1 = r21
            r0.display_orientation = r1
            r1 = r22
            r0.ad_setting = r1
            r1 = r23
            r0.bid_type = r1
            r1 = r24
            r0.attribution_id = r1
            java.lang.String r1 = "ad_track_macro"
            r2 = r25
            java.util.Map r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.ad_track_macro = r1
            r1 = r26
            r0.wx_program_res = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.Ad
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.Ad r5 = (com.sigmob.sdk.base.models.rtb.Ad) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.adslot_id
            java.lang.String r3 = r5.adslot_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.vid
            java.lang.String r3 = r5.vid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.cust_id
            java.lang.String r3 = r5.cust_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.camp_id
            java.lang.String r3 = r5.camp_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.crid
            java.lang.String r3 = r5.crid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = r4.materials
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r3 = r5.materials
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L101
            java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r1 = r4.ad_tracking
            java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r3 = r5.ad_tracking
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L101
            java.lang.Integer r1 = r4.bid_price
            java.lang.Integer r3 = r5.bid_price
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.product_id
            java.lang.String r3 = r5.product_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.settlement_price_enc
            java.lang.String r3 = r5.settlement_price_enc
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.Integer r1 = r4.is_override
            java.lang.Integer r3 = r5.is_override
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.ad_source_logo
            java.lang.String r3 = r5.ad_source_logo
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.ad_source_channel
            java.lang.String r3 = r5.ad_source_channel
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.Integer r1 = r4.ad_type
            java.lang.Integer r3 = r5.ad_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.options
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L101
            java.lang.Integer r1 = r4.expired_time
            java.lang.Integer r3 = r5.expired_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.Boolean r1 = r4.forbiden_parse_landingpage
            java.lang.Boolean r3 = r5.forbiden_parse_landingpage
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.Integer r1 = r4.display_orientation
            java.lang.Integer r3 = r5.display_orientation
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            com.sigmob.sdk.base.models.rtb.AdSetting r1 = r4.ad_setting
            com.sigmob.sdk.base.models.rtb.AdSetting r3 = r5.ad_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.Integer r1 = r4.bid_type
            java.lang.Integer r3 = r5.bid_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.lang.String r1 = r4.attribution_id
            java.lang.String r3 = r5.attribution_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L101
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ad_track_macro
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.ad_track_macro
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L101
            com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r4.wx_program_res
            com.sigmob.sdk.base.models.rtb.WXProgramRes r5 = r5.wx_program_res
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L101
            goto L102
        L101:
            r0 = r2
        L102:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L128
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
            java.lang.String r1 = r3.vid
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.cust_id
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.camp_id
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.crid
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = r3.materials
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r1 = r3.ad_tracking
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.bid_price
            if (r1 == 0) goto L6b
            int r1 = r1.hashCode()
            goto L6c
        L6b:
            r1 = r2
        L6c:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.product_id
            if (r1 == 0) goto L78
            int r1 = r1.hashCode()
            goto L79
        L78:
            r1 = r2
        L79:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.settlement_price_enc
            if (r1 == 0) goto L85
            int r1 = r1.hashCode()
            goto L86
        L85:
            r1 = r2
        L86:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.is_override
            if (r1 == 0) goto L92
            int r1 = r1.hashCode()
            goto L93
        L92:
            r1 = r2
        L93:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.ad_source_logo
            if (r1 == 0) goto L9f
            int r1 = r1.hashCode()
            goto La0
        L9f:
            r1 = r2
        La0:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.ad_source_channel
            if (r1 == 0) goto Lac
            int r1 = r1.hashCode()
            goto Lad
        Lac:
            r1 = r2
        Lad:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.ad_type
            if (r1 == 0) goto Lb9
            int r1 = r1.hashCode()
            goto Lba
        Lb9:
            r1 = r2
        Lba:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.options
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.expired_time
            if (r1 == 0) goto Lcf
            int r1 = r1.hashCode()
            goto Ld0
        Lcf:
            r1 = r2
        Ld0:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.forbiden_parse_landingpage
            if (r1 == 0) goto Ldc
            int r1 = r1.hashCode()
            goto Ldd
        Ldc:
            r1 = r2
        Ldd:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.display_orientation
            if (r1 == 0) goto Le9
            int r1 = r1.hashCode()
            goto Lea
        Le9:
            r1 = r2
        Lea:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.AdSetting r1 = r3.ad_setting
            if (r1 == 0) goto Lf6
            int r1 = r1.hashCode()
            goto Lf7
        Lf6:
            r1 = r2
        Lf7:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.bid_type
            if (r1 == 0) goto L103
            int r1 = r1.hashCode()
            goto L104
        L103:
            r1 = r2
        L104:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.attribution_id
            if (r1 == 0) goto L110
            int r1 = r1.hashCode()
            goto L111
        L110:
            r1 = r2
        L111:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ad_track_macro
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r3.wx_program_res
            if (r1 == 0) goto L125
            int r2 = r1.hashCode()
        L125:
            int r0 = r0 + r2
            r3.hashCode = r0
        L128:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Ad$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.Ad.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.Ad$Builder r0 = new com.sigmob.sdk.base.models.rtb.Ad$Builder
            r0.<init>()
            java.lang.String r1 = r3.adslot_id
            r0.adslot_id = r1
            java.lang.String r1 = r3.vid
            r0.vid = r1
            java.lang.String r1 = r3.cust_id
            r0.cust_id = r1
            java.lang.String r1 = r3.camp_id
            r0.camp_id = r1
            java.lang.String r1 = r3.crid
            r0.crid = r1
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = r3.materials
            java.lang.String r2 = "materials"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.materials = r1
            java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r1 = r3.ad_tracking
            java.lang.String r2 = "ad_tracking"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ad_tracking = r1
            java.lang.Integer r1 = r3.bid_price
            r0.bid_price = r1
            java.lang.String r1 = r3.product_id
            r0.product_id = r1
            java.lang.String r1 = r3.settlement_price_enc
            r0.settlement_price_enc = r1
            java.lang.Integer r1 = r3.is_override
            r0.is_override = r1
            java.lang.String r1 = r3.ad_source_logo
            r0.ad_source_logo = r1
            java.lang.String r1 = r3.ad_source_channel
            r0.ad_source_channel = r1
            java.lang.Integer r1 = r3.ad_type
            r0.ad_type = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.options
            java.lang.String r2 = "options"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.options = r1
            java.lang.Integer r1 = r3.expired_time
            r0.expired_time = r1
            java.lang.Boolean r1 = r3.forbiden_parse_landingpage
            r0.forbiden_parse_landingpage = r1
            java.lang.Integer r1 = r3.display_orientation
            r0.display_orientation = r1
            com.sigmob.sdk.base.models.rtb.AdSetting r1 = r3.ad_setting
            r0.ad_setting = r1
            java.lang.Integer r1 = r3.bid_type
            r0.bid_type = r1
            java.lang.String r1 = r3.attribution_id
            r0.attribution_id = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ad_track_macro
            java.lang.String r2 = "ad_track_macro"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ad_track_macro = r1
            com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r3.wx_program_res
            r0.wx_program_res = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
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
            java.lang.String r1 = r4.vid
            if (r1 == 0) goto L21
            java.lang.String r1 = ", vid="
            r0.append(r1)
            java.lang.String r1 = r4.vid
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.cust_id
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", cust_id="
            r0.append(r1)
            java.lang.String r1 = r4.cust_id
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.camp_id
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", camp_id="
            r0.append(r1)
            java.lang.String r1 = r4.camp_id
            r0.append(r1)
        L3d:
            java.lang.String r1 = r4.crid
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", crid="
            r0.append(r1)
            java.lang.String r1 = r4.crid
            r0.append(r1)
        L4b:
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = r4.materials
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L5d
            java.lang.String r1 = ", materials="
            r0.append(r1)
            java.util.List<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = r4.materials
            r0.append(r1)
        L5d:
            java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r1 = r4.ad_tracking
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L6f
            java.lang.String r1 = ", ad_tracking="
            r0.append(r1)
            java.util.List<com.sigmob.sdk.base.models.rtb.Tracking> r1 = r4.ad_tracking
            r0.append(r1)
        L6f:
            java.lang.Integer r1 = r4.bid_price
            if (r1 == 0) goto L7d
            java.lang.String r1 = ", bid_price="
            r0.append(r1)
            java.lang.Integer r1 = r4.bid_price
            r0.append(r1)
        L7d:
            java.lang.String r1 = r4.product_id
            if (r1 == 0) goto L8b
            java.lang.String r1 = ", product_id="
            r0.append(r1)
            java.lang.String r1 = r4.product_id
            r0.append(r1)
        L8b:
            java.lang.String r1 = r4.settlement_price_enc
            if (r1 == 0) goto L99
            java.lang.String r1 = ", settlement_price_enc="
            r0.append(r1)
            java.lang.String r1 = r4.settlement_price_enc
            r0.append(r1)
        L99:
            java.lang.Integer r1 = r4.is_override
            if (r1 == 0) goto La7
            java.lang.String r1 = ", is_override="
            r0.append(r1)
            java.lang.Integer r1 = r4.is_override
            r0.append(r1)
        La7:
            java.lang.String r1 = r4.ad_source_logo
            if (r1 == 0) goto Lb5
            java.lang.String r1 = ", ad_source_logo="
            r0.append(r1)
            java.lang.String r1 = r4.ad_source_logo
            r0.append(r1)
        Lb5:
            java.lang.String r1 = r4.ad_source_channel
            if (r1 == 0) goto Lc3
            java.lang.String r1 = ", ad_source_channel="
            r0.append(r1)
            java.lang.String r1 = r4.ad_source_channel
            r0.append(r1)
        Lc3:
            java.lang.Integer r1 = r4.ad_type
            if (r1 == 0) goto Ld1
            java.lang.String r1 = ", ad_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.ad_type
            r0.append(r1)
        Ld1:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Le3
            java.lang.String r1 = ", options="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            r0.append(r1)
        Le3:
            java.lang.Integer r1 = r4.expired_time
            if (r1 == 0) goto Lf1
            java.lang.String r1 = ", expired_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.expired_time
            r0.append(r1)
        Lf1:
            java.lang.Boolean r1 = r4.forbiden_parse_landingpage
            if (r1 == 0) goto Lff
            java.lang.String r1 = ", forbiden_parse_landingpage="
            r0.append(r1)
            java.lang.Boolean r1 = r4.forbiden_parse_landingpage
            r0.append(r1)
        Lff:
            java.lang.Integer r1 = r4.display_orientation
            if (r1 == 0) goto L10d
            java.lang.String r1 = ", display_orientation="
            r0.append(r1)
            java.lang.Integer r1 = r4.display_orientation
            r0.append(r1)
        L10d:
            com.sigmob.sdk.base.models.rtb.AdSetting r1 = r4.ad_setting
            if (r1 == 0) goto L11b
            java.lang.String r1 = ", ad_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.AdSetting r1 = r4.ad_setting
            r0.append(r1)
        L11b:
            java.lang.Integer r1 = r4.bid_type
            if (r1 == 0) goto L129
            java.lang.String r1 = ", bid_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.bid_type
            r0.append(r1)
        L129:
            java.lang.String r1 = r4.attribution_id
            if (r1 == 0) goto L137
            java.lang.String r1 = ", attribution_id="
            r0.append(r1)
            java.lang.String r1 = r4.attribution_id
            r0.append(r1)
        L137:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ad_track_macro
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L149
            java.lang.String r1 = ", ad_track_macro="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ad_track_macro
            r0.append(r1)
        L149:
            com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r4.wx_program_res
            if (r1 == 0) goto L157
            java.lang.String r1 = ", wx_program_res="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.WXProgramRes r1 = r4.wx_program_res
            r0.append(r1)
        L157:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Ad{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
