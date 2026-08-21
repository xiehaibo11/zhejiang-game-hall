package com.sigmob.sdk.base.models.rtb;

public final class BidResponse extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.BidResponse, com.sigmob.sdk.base.models.rtb.BidResponse.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BidResponse> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.BidResponse> CREATOR = null;
    public static final java.lang.String DEFAULT_AD_UA = "";
    public static final java.lang.Long DEFAULT_ERROR_CODE = null;
    public static final java.lang.String DEFAULT_ERROR_MESSAGE = "";
    public static final java.lang.Integer DEFAULT_EXPIRATION_TIME = null;
    public static final java.lang.Integer DEFAULT_PCTR_VALID_CHECK = null;
    public static final java.lang.String DEFAULT_PCTR_VERSION = "";
    public static final java.lang.Long DEFAULT_PROCESS_TIME_MS_DSP = null;
    public static final java.lang.Long DEFAULT_PROCESS_TIME_MS_SSP = null;
    public static final java.lang.String DEFAULT_REQUEST_ID = "";
    public static final java.lang.String DEFAULT_UID = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 10)
    public final java.lang.String ad_ua;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.Ad#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 2)
    public final java.util.List<com.sigmob.sdk.base.models.rtb.Ad> ads;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.BiddingResponse#ADAPTER", tag = 14)
    public final com.sigmob.sdk.base.models.rtb.BiddingResponse bidding_response;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 3)
    public final java.lang.Long error_code;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 12)
    public final java.lang.String error_message;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 9)
    public final java.lang.Integer expiration_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 6)
    public final java.lang.Integer pctr_valid_check;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 7)
    public final java.lang.String pctr_version;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 4)
    public final java.lang.Long process_time_ms_dsp;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 5)
    public final java.lang.Long process_time_ms_ssp;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String request_id;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER", tag = 13)
    public final com.sigmob.sdk.base.models.rtb.Template scene;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.SlotAdSetting#ADAPTER", tag = 11)
    public final com.sigmob.sdk.base.models.rtb.SlotAdSetting slot_ad_setting;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String uid;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.BidResponse, com.sigmob.sdk.base.models.rtb.BidResponse.Builder> {
        public java.lang.String ad_ua;
        public java.util.List<com.sigmob.sdk.base.models.rtb.Ad> ads;
        public com.sigmob.sdk.base.models.rtb.BiddingResponse bidding_response;
        public java.lang.Long error_code;
        public java.lang.String error_message;
        public java.lang.Integer expiration_time;
        public java.lang.Integer pctr_valid_check;
        public java.lang.String pctr_version;
        public java.lang.Long process_time_ms_dsp;
        public java.lang.Long process_time_ms_ssp;
        public java.lang.String request_id;
        public com.sigmob.sdk.base.models.rtb.Template scene;
        public com.sigmob.sdk.base.models.rtb.SlotAdSetting slot_ad_setting;
        public java.lang.String uid;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.request_id = r0
                java.lang.Long r1 = com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_ERROR_CODE
                r2.error_code = r1
                java.lang.Long r1 = com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_PROCESS_TIME_MS_DSP
                r2.process_time_ms_dsp = r1
                java.lang.Long r1 = com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_PROCESS_TIME_MS_SSP
                r2.process_time_ms_ssp = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_PCTR_VALID_CHECK
                r2.pctr_valid_check = r1
                r2.pctr_version = r0
                r2.uid = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_EXPIRATION_TIME
                r2.expiration_time = r1
                r2.ad_ua = r0
                r2.error_message = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.ads = r0
                return
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder ad_ua(java.lang.String r1) {
                r0 = this;
                r0.ad_ua = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder ads(java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ads = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder bidding_response(com.sigmob.sdk.base.models.rtb.BiddingResponse r1) {
                r0 = this;
                r0.bidding_response = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.BidResponse r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.BidResponse build() {
                r18 = this;
                r0 = r18
                com.sigmob.sdk.base.models.rtb.BidResponse r17 = new com.sigmob.sdk.base.models.rtb.BidResponse
                java.lang.String r2 = r0.request_id
                java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r3 = r0.ads
                java.lang.Long r4 = r0.error_code
                java.lang.Long r5 = r0.process_time_ms_dsp
                java.lang.Long r6 = r0.process_time_ms_ssp
                java.lang.Integer r7 = r0.pctr_valid_check
                java.lang.String r8 = r0.pctr_version
                java.lang.String r9 = r0.uid
                java.lang.Integer r10 = r0.expiration_time
                java.lang.String r11 = r0.ad_ua
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r12 = r0.slot_ad_setting
                java.lang.String r13 = r0.error_message
                com.sigmob.sdk.base.models.rtb.Template r14 = r0.scene
                com.sigmob.sdk.base.models.rtb.BiddingResponse r15 = r0.bidding_response
                com.czhj.wire.okio.ByteString r16 = super.buildUnknownFields()
                r1 = r17
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
                return r17
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder error_code(java.lang.Long r1) {
                r0 = this;
                r0.error_code = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder error_message(java.lang.String r1) {
                r0 = this;
                r0.error_message = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder expiration_time(java.lang.Integer r1) {
                r0 = this;
                r0.expiration_time = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder pctr_valid_check(java.lang.Integer r1) {
                r0 = this;
                r0.pctr_valid_check = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder pctr_version(java.lang.String r1) {
                r0 = this;
                r0.pctr_version = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder process_time_ms_dsp(java.lang.Long r1) {
                r0 = this;
                r0.process_time_ms_dsp = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder process_time_ms_ssp(java.lang.Long r1) {
                r0 = this;
                r0.process_time_ms_ssp = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder request_id(java.lang.String r1) {
                r0 = this;
                r0.request_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder scene(com.sigmob.sdk.base.models.rtb.Template r1) {
                r0 = this;
                r0.scene = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder slot_ad_setting(com.sigmob.sdk.base.models.rtb.SlotAdSetting r1) {
                r0 = this;
                r0.slot_ad_setting = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse.Builder uid(java.lang.String r1) {
                r0 = this;
                r0.uid = r1
                return r0
        }
    }

    private static final class ProtoAdapter_BidResponse extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BidResponse> {
        public ProtoAdapter_BidResponse() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.BidResponse> r1 = com.sigmob.sdk.base.models.rtb.BidResponse.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.BidResponse decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.BidResponse$Builder r0 = new com.sigmob.sdk.base.models.rtb.BidResponse$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto Ld1
                switch(r3) {
                    case 1: goto Lc4;
                    case 2: goto Lb7;
                    case 3: goto Laa;
                    case 4: goto L9d;
                    case 5: goto L90;
                    case 6: goto L83;
                    case 7: goto L77;
                    case 8: goto L6b;
                    case 9: goto L5f;
                    case 10: goto L53;
                    case 11: goto L47;
                    case 12: goto L3b;
                    case 13: goto L2f;
                    case 14: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BiddingResponse> r3 = com.sigmob.sdk.base.models.rtb.BiddingResponse.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.BiddingResponse r3 = (com.sigmob.sdk.base.models.rtb.BiddingResponse) r3
                r0.bidding_response(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r3 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.Template r3 = (com.sigmob.sdk.base.models.rtb.Template) r3
                r0.scene(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.error_message(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SlotAdSetting> r3 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r3 = (com.sigmob.sdk.base.models.rtb.SlotAdSetting) r3
                r0.slot_ad_setting(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.ad_ua(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.expiration_time(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.uid(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.pctr_version(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.pctr_valid_check(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.process_time_ms_ssp(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.process_time_ms_dsp(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.error_code(r3)
                goto L9
            Lb7:
                java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r3 = r0.ads
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Ad> r4 = com.sigmob.sdk.base.models.rtb.Ad.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            Lc4:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.request_id(r3)
                goto L9
            Ld1:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.BidResponse r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.BidResponse decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.BidResponse r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.BidResponse r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.request_id
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Ad> r0 = com.sigmob.sdk.base.models.rtb.Ad.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r1 = r5.ads
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.error_code
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.process_time_ms_dsp
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.process_time_ms_ssp
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.pctr_valid_check
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.pctr_version
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.uid
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.expiration_time
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.ad_ua
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SlotAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r5.slot_ad_setting
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.error_message
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r0 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r1 = r5.scene
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BiddingResponse> r0 = com.sigmob.sdk.base.models.rtb.BiddingResponse.ADAPTER
                com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r5.bidding_response
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.BidResponse r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.BidResponse r2 = (com.sigmob.sdk.base.models.rtb.BidResponse) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.BidResponse r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.request_id
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Ad> r1 = com.sigmob.sdk.base.models.rtb.Ad.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r2 = r5.ads
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.error_code
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.process_time_ms_dsp
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.process_time_ms_ssp
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.pctr_valid_check
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.pctr_version
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.uid
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.expiration_time
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.ad_ua
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SlotAdSetting> r1 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r2 = r5.slot_ad_setting
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.error_message
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r1 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r2 = r5.scene
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BiddingResponse> r1 = com.sigmob.sdk.base.models.rtb.BiddingResponse.ADAPTER
                com.sigmob.sdk.base.models.rtb.BiddingResponse r2 = r5.bidding_response
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.BidResponse r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.BidResponse r1 = (com.sigmob.sdk.base.models.rtb.BidResponse) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.BidResponse redact(com.sigmob.sdk.base.models.rtb.BidResponse r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.BidResponse$Builder r3 = r3.newBuilder()
                java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r0 = r3.ads
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Ad> r1 = com.sigmob.sdk.base.models.rtb.Ad.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = r3.slot_ad_setting
                if (r0 == 0) goto L1b
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.SlotAdSetting> r0 = com.sigmob.sdk.base.models.rtb.SlotAdSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r3.slot_ad_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.SlotAdSetting r0 = (com.sigmob.sdk.base.models.rtb.SlotAdSetting) r0
                r3.slot_ad_setting = r0
            L1b:
                com.sigmob.sdk.base.models.rtb.Template r0 = r3.scene
                if (r0 == 0) goto L2b
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r0 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r1 = r3.scene
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.Template r0 = (com.sigmob.sdk.base.models.rtb.Template) r0
                r3.scene = r0
            L2b:
                com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r3.bidding_response
                if (r0 == 0) goto L3b
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BiddingResponse> r0 = com.sigmob.sdk.base.models.rtb.BiddingResponse.ADAPTER
                com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r3.bidding_response
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = (com.sigmob.sdk.base.models.rtb.BiddingResponse) r0
                r3.bidding_response = r0
            L3b:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.BidResponse r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.BidResponse redact(com.sigmob.sdk.base.models.rtb.BidResponse r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.BidResponse r1 = (com.sigmob.sdk.base.models.rtb.BidResponse) r1
                com.sigmob.sdk.base.models.rtb.BidResponse r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.BidResponse$ProtoAdapter_BidResponse r0 = new com.sigmob.sdk.base.models.rtb.BidResponse$ProtoAdapter_BidResponse
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.BidResponse.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.BidResponse.CREATOR = r0
            r0 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_ERROR_CODE = r0
            com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_PROCESS_TIME_MS_DSP = r0
            com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_PROCESS_TIME_MS_SSP = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_PCTR_VALID_CHECK = r0
            com.sigmob.sdk.base.models.rtb.BidResponse.DEFAULT_EXPIRATION_TIME = r0
            return
    }

    public BidResponse(java.lang.String r17, java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r18, java.lang.Long r19, java.lang.Long r20, java.lang.Long r21, java.lang.Integer r22, java.lang.String r23, java.lang.String r24, java.lang.Integer r25, java.lang.String r26, com.sigmob.sdk.base.models.rtb.SlotAdSetting r27, java.lang.String r28, com.sigmob.sdk.base.models.rtb.Template r29, com.sigmob.sdk.base.models.rtb.BiddingResponse r30) {
            r16 = this;
            com.czhj.wire.okio.ByteString r15 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r16
            r1 = r17
            r2 = r18
            r3 = r19
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r23
            r8 = r24
            r9 = r25
            r10 = r26
            r11 = r27
            r12 = r28
            r13 = r29
            r14 = r30
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            return
    }

    public BidResponse(java.lang.String r4, java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r5, java.lang.Long r6, java.lang.Long r7, java.lang.Long r8, java.lang.Integer r9, java.lang.String r10, java.lang.String r11, java.lang.Integer r12, java.lang.String r13, com.sigmob.sdk.base.models.rtb.SlotAdSetting r14, java.lang.String r15, com.sigmob.sdk.base.models.rtb.Template r16, com.sigmob.sdk.base.models.rtb.BiddingResponse r17, com.czhj.wire.okio.ByteString r18) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.BidResponse> r1 = com.sigmob.sdk.base.models.rtb.BidResponse.ADAPTER
            r2 = r18
            r3.<init>(r1, r2)
            r1 = r4
            r0.request_id = r1
            java.lang.String r1 = "ads"
            r2 = r5
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r5)
            r0.ads = r1
            r1 = r6
            r0.error_code = r1
            r1 = r7
            r0.process_time_ms_dsp = r1
            r1 = r8
            r0.process_time_ms_ssp = r1
            r1 = r9
            r0.pctr_valid_check = r1
            r1 = r10
            r0.pctr_version = r1
            r1 = r11
            r0.uid = r1
            r1 = r12
            r0.expiration_time = r1
            r1 = r13
            r0.ad_ua = r1
            r1 = r14
            r0.slot_ad_setting = r1
            r1 = r15
            r0.error_message = r1
            r1 = r16
            r0.scene = r1
            r1 = r17
            r0.bidding_response = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.BidResponse
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.BidResponse r5 = (com.sigmob.sdk.base.models.rtb.BidResponse) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto La7
            java.lang.String r1 = r4.request_id
            java.lang.String r3 = r5.request_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r1 = r4.ads
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r3 = r5.ads
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto La7
            java.lang.Long r1 = r4.error_code
            java.lang.Long r3 = r5.error_code
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.Long r1 = r4.process_time_ms_dsp
            java.lang.Long r3 = r5.process_time_ms_dsp
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.Long r1 = r4.process_time_ms_ssp
            java.lang.Long r3 = r5.process_time_ms_ssp
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.Integer r1 = r4.pctr_valid_check
            java.lang.Integer r3 = r5.pctr_valid_check
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.String r1 = r4.pctr_version
            java.lang.String r3 = r5.pctr_version
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.String r1 = r4.uid
            java.lang.String r3 = r5.uid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.Integer r1 = r4.expiration_time
            java.lang.Integer r3 = r5.expiration_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.String r1 = r4.ad_ua
            java.lang.String r3 = r5.ad_ua
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r4.slot_ad_setting
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r3 = r5.slot_ad_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            java.lang.String r1 = r4.error_message
            java.lang.String r3 = r5.error_message
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.scene
            com.sigmob.sdk.base.models.rtb.Template r3 = r5.scene
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto La7
            com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r4.bidding_response
            com.sigmob.sdk.base.models.rtb.BiddingResponse r5 = r5.bidding_response
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto La7
            goto La8
        La7:
            r0 = r2
        La8:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto Lbf
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
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r1 = r3.ads
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.error_code
            if (r1 == 0) goto L2e
            int r1 = r1.hashCode()
            goto L2f
        L2e:
            r1 = r2
        L2f:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.process_time_ms_dsp
            if (r1 == 0) goto L3b
            int r1 = r1.hashCode()
            goto L3c
        L3b:
            r1 = r2
        L3c:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.process_time_ms_ssp
            if (r1 == 0) goto L48
            int r1 = r1.hashCode()
            goto L49
        L48:
            r1 = r2
        L49:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.pctr_valid_check
            if (r1 == 0) goto L55
            int r1 = r1.hashCode()
            goto L56
        L55:
            r1 = r2
        L56:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.pctr_version
            if (r1 == 0) goto L62
            int r1 = r1.hashCode()
            goto L63
        L62:
            r1 = r2
        L63:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.uid
            if (r1 == 0) goto L6f
            int r1 = r1.hashCode()
            goto L70
        L6f:
            r1 = r2
        L70:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.expiration_time
            if (r1 == 0) goto L7c
            int r1 = r1.hashCode()
            goto L7d
        L7c:
            r1 = r2
        L7d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.ad_ua
            if (r1 == 0) goto L89
            int r1 = r1.hashCode()
            goto L8a
        L89:
            r1 = r2
        L8a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r3.slot_ad_setting
            if (r1 == 0) goto L96
            int r1 = r1.hashCode()
            goto L97
        L96:
            r1 = r2
        L97:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.error_message
            if (r1 == 0) goto La3
            int r1 = r1.hashCode()
            goto La4
        La3:
            r1 = r2
        La4:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.Template r1 = r3.scene
            if (r1 == 0) goto Lb0
            int r1 = r1.hashCode()
            goto Lb1
        Lb0:
            r1 = r2
        Lb1:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r3.bidding_response
            if (r1 == 0) goto Lbc
            int r2 = r1.hashCode()
        Lbc:
            int r0 = r0 + r2
            r3.hashCode = r0
        Lbf:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.BidResponse$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.BidResponse.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.BidResponse$Builder r0 = new com.sigmob.sdk.base.models.rtb.BidResponse$Builder
            r0.<init>()
            java.lang.String r1 = r3.request_id
            r0.request_id = r1
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r1 = r3.ads
            java.lang.String r2 = "ads"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ads = r1
            java.lang.Long r1 = r3.error_code
            r0.error_code = r1
            java.lang.Long r1 = r3.process_time_ms_dsp
            r0.process_time_ms_dsp = r1
            java.lang.Long r1 = r3.process_time_ms_ssp
            r0.process_time_ms_ssp = r1
            java.lang.Integer r1 = r3.pctr_valid_check
            r0.pctr_valid_check = r1
            java.lang.String r1 = r3.pctr_version
            r0.pctr_version = r1
            java.lang.String r1 = r3.uid
            r0.uid = r1
            java.lang.Integer r1 = r3.expiration_time
            r0.expiration_time = r1
            java.lang.String r1 = r3.ad_ua
            r0.ad_ua = r1
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r3.slot_ad_setting
            r0.slot_ad_setting = r1
            java.lang.String r1 = r3.error_message
            r0.error_message = r1
            com.sigmob.sdk.base.models.rtb.Template r1 = r3.scene
            r0.scene = r1
            com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r3.bidding_response
            r0.bidding_response = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
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
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r1 = r4.ads
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L25
            java.lang.String r1 = ", ads="
            r0.append(r1)
            java.util.List<com.sigmob.sdk.base.models.rtb.Ad> r1 = r4.ads
            r0.append(r1)
        L25:
            java.lang.Long r1 = r4.error_code
            if (r1 == 0) goto L33
            java.lang.String r1 = ", error_code="
            r0.append(r1)
            java.lang.Long r1 = r4.error_code
            r0.append(r1)
        L33:
            java.lang.Long r1 = r4.process_time_ms_dsp
            if (r1 == 0) goto L41
            java.lang.String r1 = ", process_time_ms_dsp="
            r0.append(r1)
            java.lang.Long r1 = r4.process_time_ms_dsp
            r0.append(r1)
        L41:
            java.lang.Long r1 = r4.process_time_ms_ssp
            if (r1 == 0) goto L4f
            java.lang.String r1 = ", process_time_ms_ssp="
            r0.append(r1)
            java.lang.Long r1 = r4.process_time_ms_ssp
            r0.append(r1)
        L4f:
            java.lang.Integer r1 = r4.pctr_valid_check
            if (r1 == 0) goto L5d
            java.lang.String r1 = ", pctr_valid_check="
            r0.append(r1)
            java.lang.Integer r1 = r4.pctr_valid_check
            r0.append(r1)
        L5d:
            java.lang.String r1 = r4.pctr_version
            if (r1 == 0) goto L6b
            java.lang.String r1 = ", pctr_version="
            r0.append(r1)
            java.lang.String r1 = r4.pctr_version
            r0.append(r1)
        L6b:
            java.lang.String r1 = r4.uid
            if (r1 == 0) goto L79
            java.lang.String r1 = ", uid="
            r0.append(r1)
            java.lang.String r1 = r4.uid
            r0.append(r1)
        L79:
            java.lang.Integer r1 = r4.expiration_time
            if (r1 == 0) goto L87
            java.lang.String r1 = ", expiration_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.expiration_time
            r0.append(r1)
        L87:
            java.lang.String r1 = r4.ad_ua
            if (r1 == 0) goto L95
            java.lang.String r1 = ", ad_ua="
            r0.append(r1)
            java.lang.String r1 = r4.ad_ua
            r0.append(r1)
        L95:
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r4.slot_ad_setting
            if (r1 == 0) goto La3
            java.lang.String r1 = ", slot_ad_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.SlotAdSetting r1 = r4.slot_ad_setting
            r0.append(r1)
        La3:
            java.lang.String r1 = r4.error_message
            if (r1 == 0) goto Lb1
            java.lang.String r1 = ", error_message="
            r0.append(r1)
            java.lang.String r1 = r4.error_message
            r0.append(r1)
        Lb1:
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.scene
            if (r1 == 0) goto Lbf
            java.lang.String r1 = ", scene="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.scene
            r0.append(r1)
        Lbf:
            com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r4.bidding_response
            if (r1 == 0) goto Lcd
            java.lang.String r1 = ", bidding_response="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r4.bidding_response
            r0.append(r1)
        Lcd:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "BidResponse{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
