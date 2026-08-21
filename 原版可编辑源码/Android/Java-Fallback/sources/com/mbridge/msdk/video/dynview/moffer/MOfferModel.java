package com.mbridge.msdk.video.dynview.moffer;

public class MOfferModel implements com.mbridge.msdk.system.NoProGuard {
    private static final java.lang.String TAG = "MOfferModel";
    private final java.lang.String AD_NUM;
    private final java.lang.String API_VERSION;
    private final java.lang.String APP_ID;
    private final java.lang.String CATEGORY;
    private final java.lang.String COUNTRY_CODE;
    private final java.lang.String CRT_CID;
    private final java.lang.String CRT_RID;
    private final java.lang.String DEFAULT_PATH_V3;
    private final int DO_ACTION_IMPRESSION;
    private final int DO_ACTION_ONLY_IMPRESSION;
    private final java.lang.String E;
    private final java.lang.String EC_ID;
    private final java.lang.String H5_T;
    private final java.lang.String H5_TYPE;
    private final java.lang.String HTTP_REQ;
    private final java.lang.String IMEI;
    private final java.lang.String I_FMD5;
    private final java.lang.String K;
    private final java.lang.String MCC;
    private final java.lang.String MNC;
    private final java.lang.String MOF;
    private final java.lang.String MOF_DATA;
    private final java.lang.String MOF_DOMAIN;
    private final java.lang.String MOF_PARENT_ID;
    private final java.lang.String MOF_T;
    private final java.lang.String MOF_TEST_UID;
    private final java.lang.String MOF_TYPE;
    private final java.lang.String MOF_UID;
    private final java.lang.String MOF_VER;
    private final java.lang.String MORE_OFFER_CLICK;
    private final java.lang.String MORE_OFFER_DEFAULT_APP_ID;
    private final java.lang.String MORE_OFFER_DEFAULT_APP_KEY;
    private final java.lang.String MORE_OFFER_DEFAULT_UNIT_ID;
    private final java.lang.String MORE_OFFER_LOAD_FAILED;
    private final java.lang.String MORE_OFFER_LOAD_SUCCESS;
    private final java.lang.String MORE_OFFER_SHOW;
    private final java.lang.String MORE_OFFER_SHOW_FAILED;
    private final java.lang.String OFFER_ID;
    private final java.lang.String OFF_SET;
    private final java.lang.String ONE_ID;
    private final java.lang.String ONLY_IMPRESSION;
    private final java.lang.String PARENT_AD_TYPE;
    private final java.lang.String PARENT_EXCHANGE;
    private final java.lang.String PARENT_ID;
    private final java.lang.String PARENT_TEMPLATE_ID;
    private final java.lang.String PARENT_UNIT;
    private final java.lang.String PING_MODE;
    private final java.lang.String RV_TID;
    private final java.lang.String R_ID;
    private final java.lang.String SIGN;
    private final java.lang.String TNUM;
    private final java.lang.String TP_LGP;
    private final java.lang.String UC_PARENT_UNIT;
    private final java.lang.String UNIT_ID;
    private final java.lang.String VALUE_AD_NUM;
    private final java.lang.String VALUE_API_VERSION;
    private final java.lang.String VALUE_CATEGORY;
    private final java.lang.String VALUE_COUNTRY_CODE;
    private final java.lang.String VALUE_DEFAULT_VIDEO_TEMP_ID;
    private final java.lang.String VALUE_H5_TYPE;
    private final java.lang.String VALUE_HTTP_REQ;
    private final java.lang.String VALUE_MOF;
    private final java.lang.String VALUE_MOF_TYPE;
    private final java.lang.String VALUE_MOF_VER;
    private final java.lang.String VALUE_OFF_SET;
    private final java.lang.String VALUE_ONLY_IMPRESSION;
    private final java.lang.String VALUE_PING_MODE;
    private final java.lang.String VALUE_TNUM;
    private final java.lang.String V_FMD5;
    private int admf;
    private int admftm;
    private int bitmapSuccessCount;
    private java.util.List<java.lang.Integer> cacheImpressionReportList;
    private java.util.List<java.lang.Integer> cacheOnlyImpressionReportList;
    private volatile boolean hasReportMoreOfferLoad;
    private volatile boolean hasReportMoreOfferShow;
    private boolean isOnlyImpShow;
    private boolean isShowMoreOffer;
    private com.mbridge.msdk.foundation.entity.CampaignUnit mCampaignUnit;
    private android.content.Context mContext;
    private int mControlShowSize;
    private int mFromType;
    private java.util.List<java.lang.Integer> mImpressionId;
    private android.widget.LinearLayout mLinearLayout;
    private com.mbridge.msdk.foundation.entity.CampaignEx mMainOfferCampaignEx;
    private com.mbridge.msdk.video.dynview.e.f mMoreOfferLayoutListener;
    private com.mbridge.msdk.video.dynview.moffer.c mMoreOfferShowCallBack;
    private com.mbridge.msdk.video.module.a.a mNotifyListener;
    private com.mbridge.msdk.video.dynview.widget.ObservableScrollView mObservableScrollView;
    private com.mbridge.msdk.foundation.same.net.g.d mParam;
    private java.lang.String mRid;
    private java.lang.String mUnitId;
    private com.mbridge.msdk.video.dynview.endcard.expose.OnItemExposeListener onItemExposeListener;
    private com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout viewMofferLayout;










    public MOfferModel() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "1"
            r2.VALUE_MOF_TYPE = r0
            r2.VALUE_H5_TYPE = r0
            r2.VALUE_MOF = r0
            java.lang.String r1 = "CN"
            r2.VALUE_COUNTRY_CODE = r1
            r2.VALUE_MOF_VER = r0
            java.lang.String r1 = "0"
            r2.VALUE_OFF_SET = r1
            r2.VALUE_CATEGORY = r1
            r2.VALUE_ONLY_IMPRESSION = r0
            r2.VALUE_PING_MODE = r0
            java.lang.String r0 = "2"
            r2.VALUE_HTTP_REQ = r0
            java.lang.String r0 = "20"
            r2.VALUE_AD_NUM = r0
            r2.VALUE_TNUM = r0
            java.lang.String r0 = "2.3"
            r2.VALUE_API_VERSION = r0
            java.lang.String r0 = "404"
            r2.VALUE_DEFAULT_VIDEO_TEMP_ID = r0
            java.lang.String r0 = "k"
            r2.K = r0
            java.lang.String r0 = "mof_testuid"
            r2.MOF_TEST_UID = r0
            java.lang.String r0 = "mcc"
            r2.MCC = r0
            java.lang.String r0 = "mof_uid"
            r2.MOF_UID = r0
            java.lang.String r0 = "mnc"
            r2.MNC = r0
            java.lang.String r0 = "rv_tid"
            r2.RV_TID = r0
            java.lang.String r0 = "ec_id"
            r2.EC_ID = r0
            java.lang.String r0 = "tplgp"
            r2.TP_LGP = r0
            java.lang.String r0 = "v_fmd5"
            r2.V_FMD5 = r0
            java.lang.String r0 = "i_fmd5"
            r2.I_FMD5 = r0
            java.lang.String r0 = "app_id"
            r2.APP_ID = r0
            java.lang.String r0 = "sign"
            r2.SIGN = r0
            java.lang.String r0 = "parent_unit"
            r2.PARENT_UNIT = r0
            java.lang.String r0 = "e"
            r2.E = r0
            java.lang.String r0 = "mof_type"
            r2.MOF_TYPE = r0
            java.lang.String r0 = "h5_type"
            r2.H5_TYPE = r0
            java.lang.String r0 = "mof"
            r2.MOF = r0
            java.lang.String r0 = "country_code"
            r2.COUNTRY_CODE = r0
            java.lang.String r0 = "mof_ver"
            r2.MOF_VER = r0
            java.lang.String r0 = "crt_cid"
            r2.CRT_CID = r0
            java.lang.String r0 = "crt_rid"
            r2.CRT_RID = r0
            java.lang.String r0 = "h5_t"
            r2.H5_T = r0
            java.lang.String r0 = "mof_t"
            r2.MOF_T = r0
            java.lang.String r0 = "mof_data"
            r2.MOF_DATA = r0
            java.lang.String r0 = "imei"
            r2.IMEI = r0
            java.lang.String r0 = "offer_id"
            r2.OFFER_ID = r0
            java.lang.String r0 = "offset"
            r2.OFF_SET = r0
            java.lang.String r0 = "category"
            r2.CATEGORY = r0
            java.lang.String r0 = "only_impression"
            r2.ONLY_IMPRESSION = r0
            java.lang.String r0 = "ping_mode"
            r2.PING_MODE = r0
            java.lang.String r0 = "http_req"
            r2.HTTP_REQ = r0
            java.lang.String r0 = "ad_num"
            r2.AD_NUM = r0
            java.lang.String r0 = "tnum"
            r2.TNUM = r0
            java.lang.String r0 = "api_version"
            r2.API_VERSION = r0
            java.lang.String r0 = "mof_domain"
            r2.MOF_DOMAIN = r0
            java.lang.String r0 = "parent_id"
            r2.PARENT_ID = r0
            java.lang.String r0 = "mof_parent_id"
            r2.MOF_PARENT_ID = r0
            java.lang.String r0 = "uc_parent_unit"
            r2.UC_PARENT_UNIT = r0
            java.lang.String r0 = "/openapi/ad/v3"
            r2.DEFAULT_PATH_V3 = r0
            java.lang.String r0 = "parent_exchange"
            r2.PARENT_EXCHANGE = r0
            java.lang.String r0 = "parent_ad_type"
            r2.PARENT_AD_TYPE = r0
            java.lang.String r0 = "parent_template_id"
            r2.PARENT_TEMPLATE_ID = r0
            java.lang.String r0 = "oneId"
            r2.ONE_ID = r0
            java.lang.String r0 = "117361"
            r2.MORE_OFFER_DEFAULT_UNIT_ID = r0
            java.lang.String r0 = "92762"
            r2.MORE_OFFER_DEFAULT_APP_ID = r0
            java.lang.String r0 = "936dcbdd57fe235fd7cf61c2e93da3c4"
            r2.MORE_OFFER_DEFAULT_APP_KEY = r0
            java.lang.String r0 = "more offer load success"
            r2.MORE_OFFER_LOAD_SUCCESS = r0
            java.lang.String r0 = "more offer load failed"
            r2.MORE_OFFER_LOAD_FAILED = r0
            java.lang.String r0 = "more offer show"
            r2.MORE_OFFER_SHOW = r0
            java.lang.String r0 = "more offer click"
            r2.MORE_OFFER_CLICK = r0
            java.lang.String r0 = "more offer show fail"
            r2.MORE_OFFER_SHOW_FAILED = r0
            java.lang.String r0 = "unit_id"
            r2.UNIT_ID = r0
            java.lang.String r0 = "r_id"
            r2.R_ID = r0
            r0 = 0
            r2.DO_ACTION_IMPRESSION = r0
            r1 = 1
            r2.DO_ACTION_ONLY_IMPRESSION = r1
            r2.hasReportMoreOfferLoad = r0
            r2.hasReportMoreOfferShow = r0
            r2.bitmapSuccessCount = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.mImpressionId = r1
            r2.mControlShowSize = r0
            r2.isOnlyImpShow = r0
            r2.mFromType = r0
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$1 r0 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$1
            r0.<init>(r2)
            r2.onItemExposeListener = r0
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$2 r0 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$2
            r0.<init>(r2)
            r2.mMoreOfferShowCallBack = r0
            return
    }

    static com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout access$000(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r0 = r0.viewMofferLayout
            return r0
    }

    static boolean access$100(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            boolean r0 = r0.hasReportMoreOfferShow
            return r0
    }

    static com.mbridge.msdk.video.dynview.e.f access$1000(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.video.dynview.e.f r0 = r0.mMoreOfferLayoutListener
            return r0
    }

    static boolean access$102(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, boolean r1) {
            r0.hasReportMoreOfferShow = r1
            return r1
    }

    static com.mbridge.msdk.foundation.same.net.g.d access$1100(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.foundation.same.net.g.d r0 = r0.mParam
            return r0
    }

    static int access$1200(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            int r0 = r0.admf
            return r0
    }

    static int access$1300(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            int r0 = r0.admftm
            return r0
    }

    static void access$1400(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            r0.doControllableImpOnRequest()
            return
    }

    static boolean access$1500(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            boolean r0 = r0.hasReportMoreOfferLoad
            return r0
    }

    static boolean access$1502(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, boolean r1) {
            r0.hasReportMoreOfferLoad = r1
            return r1
    }

    static void access$1600(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            r0.createMoreOfferView()
            return
    }

    static android.content.Context access$1700(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static void access$1800(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            r0.release()
            return
    }

    static com.mbridge.msdk.video.module.a.a access$1900(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.video.module.a.a r0 = r0.mNotifyListener
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx access$200(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.mMainOfferCampaignEx
            return r0
    }

    static void access$2000(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, com.mbridge.msdk.video.module.a.a r1) {
            r0.callBackClick(r1)
            return
    }

    static int access$2100(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            int r0 = r0.bitmapSuccessCount
            return r0
    }

    static int access$2108(com.mbridge.msdk.video.dynview.moffer.MOfferModel r2) {
            int r0 = r2.bitmapSuccessCount
            int r1 = r0 + 1
            r2.bitmapSuccessCount = r1
            return r0
    }

    static boolean access$2200(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            boolean r0 = r0.isShowMoreOffer
            return r0
    }

    static boolean access$2202(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, boolean r1) {
            r0.isShowMoreOffer = r1
            return r1
    }

    static com.mbridge.msdk.video.dynview.moffer.c access$2300(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.video.dynview.moffer.c r0 = r0.mMoreOfferShowCallBack
            return r0
    }

    static com.mbridge.msdk.video.dynview.widget.ObservableScrollView access$2400(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.video.dynview.widget.ObservableScrollView r0 = r0.mObservableScrollView
            return r0
    }

    static android.widget.LinearLayout access$2500(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            android.widget.LinearLayout r0 = r0.mLinearLayout
            return r0
    }

    static java.lang.String access$300(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            java.lang.String r0 = r0.mUnitId
            return r0
    }

    static java.lang.String access$302(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, java.lang.String r1) {
            r0.mUnitId = r1
            return r1
    }

    static java.lang.String access$400(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            java.lang.String r0 = r0.mRid
            return r0
    }

    static java.lang.String access$402(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, java.lang.String r1) {
            r0.mRid = r1
            return r1
    }

    static com.mbridge.msdk.foundation.entity.CampaignUnit access$500(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r0.mCampaignUnit
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignUnit access$502(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, com.mbridge.msdk.foundation.entity.CampaignUnit r1) {
            r0.mCampaignUnit = r1
            return r1
    }

    static java.util.List access$600(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            java.util.List<java.lang.Integer> r0 = r0.cacheImpressionReportList
            return r0
    }

    static java.util.List access$602(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, java.util.List r1) {
            r0.cacheImpressionReportList = r1
            return r1
    }

    static boolean access$700(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            boolean r0 = r0.isOnlyImpShow
            return r0
    }

    static java.util.List access$800(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0) {
            java.util.List<java.lang.Integer> r0 = r0.cacheOnlyImpressionReportList
            return r0
    }

    static java.util.List access$802(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, java.util.List r1) {
            r0.cacheOnlyImpressionReportList = r1
            return r1
    }

    static int access$900(com.mbridge.msdk.video.dynview.moffer.MOfferModel r0, java.lang.String r1) {
            int r0 = r0.findID(r1)
            return r0
    }

    private void addLikeTextView() {
            r4 = this;
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r0 = r4.viewMofferLayout
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r1 = "mbridge_reward_end_card_like_tv"
            int r1 = r4.findID(r1)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            if (r0 != 0) goto L14
            return
        L14:
            java.lang.String r1 = "#FF000000"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setTextColor(r1)
            r1 = 1092616192(0x41200000, float:10.0)
            r0.setTextSize(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.s(r1)
            java.lang.String r2 = "zh"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L54
            r1 = 1
            r0.setEms(r1)
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            r3 = 1106247680(0x41f00000, float:30.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            r1.width = r2
            java.lang.String r1 = "猜你喜欢"
            r0.setText(r1)
            goto L59
        L54:
            java.lang.String r1 = "Just\nfor\nYou"
            r0.setText(r1)
        L59:
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$9 r1 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$9
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            return
    }

    private android.view.View buildItemView(int r6) {
            r5 = this;
            android.content.Context r0 = r5.mContext
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r2 = "mbridge_reward_end_card_more_offer_item"
            java.lang.String r3 = "layout"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r3)
            android.content.Context r2 = r5.mContext
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            r3 = 0
            android.view.View r0 = r2.inflate(r0, r1, r3)
            android.content.Context r2 = r5.mContext
            java.lang.String r3 = "id"
            java.lang.String r4 = "mbridge_reward_end_card_item_iv"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r4, r3)
            if (r0 != 0) goto L26
            return r1
        L26:
            android.view.View r1 = r0.findViewById(r2)
            com.mbridge.msdk.videocommon.view.RoundImageView r1 = (com.mbridge.msdk.videocommon.view.RoundImageView) r1
            android.content.Context r2 = r5.mContext
            java.lang.String r4 = "mbridge_reward_end_card_item_title_tv"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r4, r3)
            android.view.View r2 = r0.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            com.mbridge.msdk.foundation.entity.CampaignUnit r3 = r5.mCampaignUnit
            java.util.ArrayList r3 = r3.getAds()
            r5.setOfferData(r3, r6, r1, r2)
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$7 r1 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$7
            r1.<init>(r5, r6, r0)
            r0.setOnClickListener(r1)
            return r0
    }

    private void buildRequestParams(com.mbridge.msdk.foundation.entity.CampaignEx r28) {
            r27 = this;
            r1 = r27
            java.lang.String r0 = "CN"
            if (r28 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.foundation.same.net.g.d r2 = new com.mbridge.msdk.foundation.same.net.g.d
            r2.<init>()
            r1.mParam = r2
            java.lang.String r2 = r28.getCampaignUnitId()
            java.lang.String r3 = r28.getId()
            java.lang.String r4 = r28.getNoticeUrl()
            java.lang.String r5 = "k"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ak.a(r4, r5)
            java.lang.String r5 = r28.getendcard_url()
            java.lang.String r6 = "mof_testuid"
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ak.a(r5, r6)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L3a
            java.lang.String r5 = r28.getendcard_url()
            java.lang.String r6 = "mof_uid"
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ak.a(r5, r6)
        L3a:
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.k()
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L5f
            if (r7 != 0) goto L5f
            com.mbridge.msdk.c.b r7 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.c.a r7 = r7.b(r6)     // Catch: java.lang.Exception -> L5f
            if (r7 == 0) goto L5f
            com.mbridge.msdk.c.b r7 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.c.a r7 = r7.b(r6)     // Catch: java.lang.Exception -> L5f
            java.lang.String r7 = r7.ah()     // Catch: java.lang.Exception -> L5f
            goto L60
        L5f:
            r7 = r0
        L60:
            java.lang.String r8 = r28.getendcard_url()
            java.lang.String r9 = "mcc"
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.ak.a(r8, r9)
            java.lang.String r10 = r28.getendcard_url()
            java.lang.String r11 = "mnc"
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.ak.a(r10, r11)
            java.lang.String r12 = r28.getendcard_url()
            java.lang.String r13 = "rv_tid"
            java.lang.String r12 = com.mbridge.msdk.foundation.tools.ak.a(r12, r13)
            java.lang.String r14 = r28.getendcard_url()
            java.lang.String r15 = "ec_id"
            java.lang.String r14 = com.mbridge.msdk.foundation.tools.ak.a(r14, r15)
            r16 = r0
            java.lang.String r0 = r28.getendcard_url()
            r17 = r15
            java.lang.String r15 = "tplgp"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r15)
            r18 = r0
            java.lang.String r0 = r28.getendcard_url()
            r19 = r15
            java.lang.String r15 = "v_fmd5"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r15)
            r20 = r0
            java.lang.String r0 = r28.getendcard_url()
            r21 = r15
            java.lang.String r15 = "i_fmd5"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r0, r15)
            r22 = r0
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            com.mbridge.msdk.foundation.controller.a r23 = com.mbridge.msdk.foundation.controller.a.f()
            r24 = r15
            java.lang.String r15 = r23.k()
            r23 = r12
            java.lang.String r12 = "app_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r12, r15)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            r15.append(r6)
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.l()
            r15.append(r6)
            java.lang.String r6 = r15.toString()
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r6)
            java.lang.String r15 = "sign"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r15, r6)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r6 = "r_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r6, r4)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            r6 = 1
            r25 = r15
            java.lang.String[] r15 = new java.lang.String[r6]
            r26 = 0
            r15[r26] = r3
            java.lang.String r15 = java.util.Arrays.toString(r15)
            java.lang.String r6 = "e"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r6, r15)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r6 = "1"
            java.lang.String r15 = "mof_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r15, r6)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r15 = "h5_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r15, r6)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r15 = "mof"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r15, r6)
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L124
            r0 = r16
            goto L125
        L124:
            r0 = r7
        L125:
            com.mbridge.msdk.foundation.same.net.g.d r7 = r1.mParam
            java.lang.String r15 = "country_code"
            com.mbridge.msdk.foundation.same.net.f.b.a(r7, r15, r0)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r7 = "mof_ver"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r7, r6)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r7 = ""
            java.lang.String r15 = "parent_exchange"
            r0.a(r15, r7)
            int r0 = r28.getAdType()
            r15 = 94
            if (r0 == r15) goto L14d
            r15 = 287(0x11f, float:4.02E-43)
            if (r0 == r15) goto L14a
            r0 = r7
            goto L14f
        L14a:
            java.lang.String r0 = "interstitial_video"
            goto L14f
        L14d:
            java.lang.String r0 = "rewarded_video"
        L14f:
            com.mbridge.msdk.foundation.same.net.g.d r15 = r1.mParam
            r16 = r12
            java.lang.String r12 = "parent_ad_type"
            r15.a(r12, r0)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r12 = r28.getReq_ext_data()
            java.lang.String r15 = "oneId"
            r0.a(r15, r12)
            boolean r0 = android.text.TextUtils.isEmpty(r14)
            java.lang.String r12 = "parent_template_id"
            if (r0 != 0) goto L171
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            r0.a(r12, r14)
            goto L178
        L171:
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r15 = "404"
            r0.a(r12, r15)
        L178:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L186
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r12 = "uc_parent_unit"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r12, r2)
            goto L18d
        L186:
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r12 = "parent_unit"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r12, r2)
        L18d:
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r11, r10)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r9, r8)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r0 = "crt_cid"
            r2.put(r0, r3)     // Catch: java.lang.Exception -> L1d1
            java.lang.String r0 = "crt_rid"
            r2.put(r0, r4)     // Catch: java.lang.Exception -> L1d1
            r0 = r23
            r2.put(r13, r0)     // Catch: java.lang.Exception -> L1d1
            r0 = r17
            r2.put(r0, r14)     // Catch: java.lang.Exception -> L1d1
            r0 = r18
            r4 = r19
            r2.put(r4, r0)     // Catch: java.lang.Exception -> L1d1
            r0 = r20
            r4 = r21
            r2.put(r4, r0)     // Catch: java.lang.Exception -> L1d1
            r0 = r22
            r4 = r24
            r2.put(r4, r0)     // Catch: java.lang.Exception -> L1d1
            java.lang.String r0 = "h5_t"
            r4 = 1
            r2.put(r0, r4)     // Catch: java.lang.Exception -> L1d1
            java.lang.String r0 = "mof_t"
            r2.put(r0, r4)     // Catch: java.lang.Exception -> L1d1
            goto L1d5
        L1d1:
            r0 = move-exception
            r0.printStackTrace()
        L1d5:
            java.lang.String r0 = r2.toString()
            com.mbridge.msdk.foundation.same.net.g.d r2 = r1.mParam
            java.lang.String r4 = "mof_data"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r4, r0)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "imei"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r2, r7)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "offer_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r2, r3)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "0"
            java.lang.String r3 = "offset"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r3, r2)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r3 = "category"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r3, r2)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "only_impression"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r2, r6)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "ping_mode"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r2, r6)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "http_req"
            java.lang.String r3 = "2"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r2, r3)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "20"
            java.lang.String r3 = "ad_num"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r3, r2)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r3 = "tnum"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r3, r2)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "api_version"
            java.lang.String r3 = "2.3"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r2, r3)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L24c
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "92762"
            r3 = r16
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r3, r2)
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "92762936dcbdd57fe235fd7cf61c2e93da3c4"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r2)
            r3 = r25
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r3, r2)
            java.lang.String r5 = "117361"
        L24c:
            com.mbridge.msdk.foundation.same.net.g.d r0 = r1.mParam
            java.lang.String r2 = "unit_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r0, r2, r5)
            return
    }

    private void buildScrollViewGroup() {
            r3 = this;
            android.content.Context r0 = r3.mContext
            if (r0 == 0) goto L58
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r0 = r3.viewMofferLayout
            if (r0 == 0) goto L58
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.mMainOfferCampaignEx
            if (r0 != 0) goto Ld
            goto L58
        Ld:
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            android.content.Context r1 = r3.mContext
            r0.<init>(r1)
            r3.mLinearLayout = r0
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r2 = -1
            r0.<init>(r1, r2)
            android.widget.LinearLayout r1 = r3.mLinearLayout
            r1.setLayoutParams(r0)
            android.widget.LinearLayout r0 = r3.mLinearLayout
            r1 = 0
            r0.setOrientation(r1)
            android.widget.LinearLayout r0 = r3.mLinearLayout
            r2 = 17
            r0.setGravity(r2)
        L2f:
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r3.mCampaignUnit
            java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.ads
            int r0 = r0.size()
            if (r1 >= r0) goto L47
            android.view.View r0 = r3.buildItemView(r1)
            if (r0 == 0) goto L44
            android.widget.LinearLayout r2 = r3.mLinearLayout
            r2.addView(r0)
        L44:
            int r1 = r1 + 1
            goto L2f
        L47:
            com.mbridge.msdk.video.dynview.widget.ObservableScrollView r0 = r3.mObservableScrollView
            android.widget.LinearLayout r1 = r3.mLinearLayout
            r0.addView(r1)
            com.mbridge.msdk.video.dynview.widget.ObservableScrollView r0 = r3.mObservableScrollView
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$6 r1 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$6
            r1.<init>(r3)
            r0.setOnTouchListener(r1)
        L58:
            return
    }

    private void callBackClick(com.mbridge.msdk.video.module.a.a r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            r0 = 128(0x80, float:1.8E-43)
            java.lang.String r1 = ""
            r3.a(r0, r1)
            return
    }

    private void createMoreOfferList() {
            r2 = this;
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r0 = r2.viewMofferLayout
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r1 = "mbridge_moreoffer_hls"
            int r1 = r2.findID(r1)
            android.view.View r0 = r0.findViewById(r1)
            com.mbridge.msdk.video.dynview.widget.ObservableScrollView r0 = (com.mbridge.msdk.video.dynview.widget.ObservableScrollView) r0
            r2.mObservableScrollView = r0
            r2.buildScrollViewGroup()
            r2.addLikeTextView()
            r2.showView()
            return
    }

    private void createMoreOfferView() {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r2.mCampaignUnit
            if (r0 == 0) goto L23
            android.content.Context r1 = r2.mContext
            if (r1 != 0) goto L9
            goto L23
        L9:
            java.util.ArrayList r0 = r0.getAds()
            if (r0 != 0) goto L10
            return
        L10:
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r2.mCampaignUnit
            java.util.ArrayList r0 = r0.getAds()
            int r0 = r0.size()
            if (r0 != 0) goto L1d
            return
        L1d:
            r2.setMoreOfferLayoutCallBack()
            r2.createMoreOfferList()
        L23:
            return
    }

    private void doAdmfContorl() {
            r6 = this;
            java.lang.String r0 = "admf"
            java.lang.String r1 = "admftm"
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.mMainOfferCampaignEx     // Catch: java.lang.Exception -> L54
            if (r2 == 0) goto L53
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.mMainOfferCampaignEx     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = r2.getMoreOfferJsonData()     // Catch: java.lang.Exception -> L54
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L54
            if (r2 == 0) goto L15
            goto L53
        L15:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L54
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r6.mMainOfferCampaignEx     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = r3.getMoreOfferJsonData()     // Catch: java.lang.Exception -> L54
            r2.<init>(r3)     // Catch: java.lang.Exception -> L54
            r3 = 0
            int r4 = r6.mFromType     // Catch: java.lang.Exception -> L54
            r5 = 1
            if (r4 == r5) goto L31
            r5 = 2
            if (r4 == r5) goto L2a
            goto L37
        L2a:
            java.lang.String r3 = "endcard_url"
            org.json.JSONObject r3 = r2.getJSONObject(r3)     // Catch: java.lang.Exception -> L54
            goto L37
        L31:
            java.lang.String r3 = "template_url"
            org.json.JSONObject r3 = r2.getJSONObject(r3)     // Catch: java.lang.Exception -> L54
        L37:
            if (r3 != 0) goto L3a
            return
        L3a:
            boolean r2 = r3.has(r1)     // Catch: java.lang.Exception -> L54
            if (r2 == 0) goto L46
            int r1 = r3.getInt(r1)     // Catch: java.lang.Exception -> L54
            r6.admftm = r1     // Catch: java.lang.Exception -> L54
        L46:
            boolean r1 = r3.has(r0)     // Catch: java.lang.Exception -> L54
            if (r1 == 0) goto L5e
            int r0 = r3.getInt(r0)     // Catch: java.lang.Exception -> L54
            r6.admf = r0     // Catch: java.lang.Exception -> L54
            goto L5e
        L53:
            return
        L54:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MOfferModel"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L5e:
            return
    }

    private void doControllableImpOnRequest() {
            r5 = this;
            java.lang.String r0 = "117361"
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = r5.mCampaignUnit
            if (r1 != 0) goto L7
            return
        L7:
            r2 = 1
            r3 = 0
            com.mbridge.msdk.video.dynview.f.a.a(r1, r3, r2, r0)     // Catch: java.lang.Exception -> L55
            r5.isOnlyImpShow = r2     // Catch: java.lang.Exception -> L55
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = r5.mCampaignUnit     // Catch: java.lang.Exception -> L55
            java.util.ArrayList r1 = r1.getAds()     // Catch: java.lang.Exception -> L55
            if (r1 != 0) goto L17
            return
        L17:
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = r5.mCampaignUnit     // Catch: java.lang.Exception -> L55
            java.util.ArrayList r1 = r1.getAds()     // Catch: java.lang.Exception -> L55
            int r1 = r1.size()     // Catch: java.lang.Exception -> L55
            int r2 = r5.admf     // Catch: java.lang.Exception -> L55
            if (r2 < r1) goto L27
            r5.admf = r1     // Catch: java.lang.Exception -> L55
        L27:
            java.util.List<java.lang.Integer> r1 = r5.mImpressionId     // Catch: java.lang.Exception -> L55
            if (r1 != 0) goto L32
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L55
            r1.<init>()     // Catch: java.lang.Exception -> L55
            r5.mImpressionId = r1     // Catch: java.lang.Exception -> L55
        L32:
            r1 = r3
        L33:
            int r2 = r5.admf     // Catch: java.lang.Exception -> L55
            if (r1 >= r2) goto L5f
            java.util.List<java.lang.Integer> r2 = r5.mImpressionId     // Catch: java.lang.Exception -> L55
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L55
            boolean r2 = r2.contains(r4)     // Catch: java.lang.Exception -> L55
            if (r2 == 0) goto L44
            goto L52
        L44:
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = r5.mCampaignUnit     // Catch: java.lang.Exception -> L55
            com.mbridge.msdk.video.dynview.f.a.a(r2, r1, r3, r0)     // Catch: java.lang.Exception -> L55
            java.util.List<java.lang.Integer> r2 = r5.mImpressionId     // Catch: java.lang.Exception -> L55
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L55
            r2.add(r4)     // Catch: java.lang.Exception -> L55
        L52:
            int r1 = r1 + 1
            goto L33
        L55:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MOfferModel"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L5f:
            return
    }

    private void doControllableImpOnShow(int r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r3.mCampaignUnit
            if (r0 != 0) goto L5
            return
        L5:
            java.util.ArrayList r0 = r0.getAds()
            if (r0 != 0) goto Lc
            return
        Lc:
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r3.mCampaignUnit     // Catch: java.lang.Exception -> L4a
            java.util.ArrayList r0 = r0.getAds()     // Catch: java.lang.Exception -> L4a
            int r0 = r0.size()     // Catch: java.lang.Exception -> L4a
            int r1 = r3.mControlShowSize     // Catch: java.lang.Exception -> L4a
            if (r1 != 0) goto L1f
            int r1 = r3.admf     // Catch: java.lang.Exception -> L4a
            int r1 = r1 + r4
            r3.mControlShowSize = r1     // Catch: java.lang.Exception -> L4a
        L1f:
            int r1 = r3.mControlShowSize     // Catch: java.lang.Exception -> L4a
            if (r1 < r0) goto L25
            r3.mControlShowSize = r0     // Catch: java.lang.Exception -> L4a
        L25:
            int r0 = r3.mControlShowSize     // Catch: java.lang.Exception -> L4a
            if (r4 >= r0) goto L54
            java.util.List<java.lang.Integer> r0 = r3.mImpressionId     // Catch: java.lang.Exception -> L4a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L4a
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Exception -> L4a
            if (r0 == 0) goto L36
            goto L47
        L36:
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r3.mCampaignUnit     // Catch: java.lang.Exception -> L4a
            r1 = 0
            java.lang.String r2 = "117361"
            com.mbridge.msdk.video.dynview.f.a.a(r0, r4, r1, r2)     // Catch: java.lang.Exception -> L4a
            java.util.List<java.lang.Integer> r0 = r3.mImpressionId     // Catch: java.lang.Exception -> L4a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L4a
            r0.add(r1)     // Catch: java.lang.Exception -> L4a
        L47:
            int r4 = r4 + 1
            goto L25
        L4a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "MOfferModel"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L54:
            return
    }

    private int findID(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    private void initData() {
            r9 = this;
            java.lang.String r0 = "oneId"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.mMainOfferCampaignEx
            if (r1 == 0) goto La8
            android.content.Context r2 = r9.mContext
            if (r2 != 0) goto Lc
            goto La8
        Lc:
            r9.buildRequestParams(r1)
            com.mbridge.msdk.foundation.same.net.g.d r1 = r9.mParam
            if (r1 != 0) goto L14
            return
        L14:
            com.mbridge.msdk.video.dynview.f.b r2 = new com.mbridge.msdk.video.dynview.f.b
            android.content.Context r1 = r9.mContext
            r2.<init>(r1)
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$3 r7 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$3
            r7.<init>(r9)
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r1 = r1.m
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.mMainOfferCampaignEx
            java.lang.String r3 = r3.getReq_ext_data()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L98
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L86
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.mMainOfferCampaignEx     // Catch: java.lang.Exception -> L86
            java.lang.String r4 = r4.getReq_ext_data()     // Catch: java.lang.Exception -> L86
            r3.<init>(r4)     // Catch: java.lang.Exception -> L86
            java.lang.String r4 = "mof_domain"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Exception -> L86
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L86
            if (r5 != 0) goto L5a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L86
            r1.<init>()     // Catch: java.lang.Exception -> L86
            r1.append(r4)     // Catch: java.lang.Exception -> L86
            java.lang.String r4 = "/openapi/ad/v3"
            r1.append(r4)     // Catch: java.lang.Exception -> L86
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L86
        L5a:
            java.lang.String r4 = "parent_id"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Exception -> L86
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L86
            if (r5 != 0) goto L6d
            com.mbridge.msdk.foundation.same.net.g.d r5 = r9.mParam     // Catch: java.lang.Exception -> L86
            java.lang.String r6 = "mof_parent_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r5, r6, r4)     // Catch: java.lang.Exception -> L86
        L6d:
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Exception -> L86
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L86
            if (r4 != 0) goto L7c
            com.mbridge.msdk.foundation.same.net.g.d r4 = r9.mParam     // Catch: java.lang.Exception -> L86
            com.mbridge.msdk.foundation.same.net.f.b.a(r4, r0, r3)     // Catch: java.lang.Exception -> L86
        L7c:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.mMainOfferCampaignEx     // Catch: java.lang.Exception -> L86
            java.lang.String r0 = r0.getCampaignUnitId()     // Catch: java.lang.Exception -> L86
            r7.setUnitId(r0)     // Catch: java.lang.Exception -> L86
            goto L98
        L86:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MOfferModel"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.m
            r4 = r0
            goto L99
        L98:
            r4 = r1
        L99:
            r3 = 1
            com.mbridge.msdk.foundation.same.net.g.d r5 = r9.mParam
            com.mbridge.msdk.foundation.same.net.b r6 = new com.mbridge.msdk.foundation.same.net.b
            r6.<init>()
            r8 = 1
            r2.getLoadOrSetting(r3, r4, r5, r6, r7, r8)
            r9.doAdmfContorl()
        La8:
            return
    }

    private void initView() {
            r4 = this;
            android.content.Context r0 = r4.mContext
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r1 = "mbridge_reward_more_offer_view"
            java.lang.String r2 = "layout"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)
            android.content.Context r1 = r4.mContext
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r2 = 0
            r3 = 0
            android.view.View r0 = r1.inflate(r0, r2, r3)
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r0 = (com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout) r0
            r4.viewMofferLayout = r0
            return
    }

    private void release() {
            r2 = this;
            java.util.List<java.lang.Integer> r0 = r2.cacheImpressionReportList
            r1 = 0
            if (r0 == 0) goto La
            r0.clear()
            r2.cacheImpressionReportList = r1
        La:
            java.util.List<java.lang.Integer> r0 = r2.cacheOnlyImpressionReportList
            if (r0 == 0) goto L13
            r0.clear()
            r2.cacheOnlyImpressionReportList = r1
        L13:
            return
    }

    private void setCallbackForLogicVisibleView(android.view.View r4, int r5) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            android.graphics.Rect r0 = new android.graphics.Rect     // Catch: java.lang.Exception -> L4c
            r0.<init>()     // Catch: java.lang.Exception -> L4c
            boolean r1 = r4.getGlobalVisibleRect(r0)     // Catch: java.lang.Exception -> L4c
            int r0 = r0.width()     // Catch: java.lang.Exception -> L4c
            int r4 = r4.getMeasuredWidth()     // Catch: java.lang.Exception -> L4c
            int r4 = r4 / 5
            r2 = 1
            if (r0 <= r4) goto L1b
            r4 = r2
            goto L1c
        L1b:
            r4 = 0
        L1c:
            if (r1 == 0) goto L44
            if (r4 == 0) goto L44
            java.util.List<java.lang.Integer> r4 = r3.mImpressionId     // Catch: java.lang.Exception -> L4c
            if (r4 == 0) goto L56
            com.mbridge.msdk.video.dynview.endcard.expose.OnItemExposeListener r4 = r3.onItemExposeListener     // Catch: java.lang.Exception -> L4c
            if (r4 == 0) goto L56
            java.util.List<java.lang.Integer> r4 = r3.mImpressionId     // Catch: java.lang.Exception -> L4c
            java.lang.Integer r0 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L4c
            boolean r4 = r4.contains(r0)     // Catch: java.lang.Exception -> L4c
            if (r4 == 0) goto L35
            return
        L35:
            java.util.List<java.lang.Integer> r4 = r3.mImpressionId     // Catch: java.lang.Exception -> L4c
            java.lang.Integer r0 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L4c
            r4.add(r0)     // Catch: java.lang.Exception -> L4c
            com.mbridge.msdk.video.dynview.endcard.expose.OnItemExposeListener r4 = r3.onItemExposeListener     // Catch: java.lang.Exception -> L4c
            r4.onItemViewVisible(r2, r5)     // Catch: java.lang.Exception -> L4c
            goto L56
        L44:
            int r4 = r3.admf     // Catch: java.lang.Exception -> L4c
            if (r4 == 0) goto L56
            r3.doControllableImpOnShow(r5)     // Catch: java.lang.Exception -> L4c
            goto L56
        L4c:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "MOfferModel"
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L56:
            return
    }

    private void setMoreOfferLayoutCallBack() {
            r2 = this;
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r0 = r2.viewMofferLayout
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$4 r1 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$4
            r1.<init>(r2)
            r0.setMoreOfferCacheReportCallBack(r1)
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r0 = r2.viewMofferLayout
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$5 r1 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$5
            r1.<init>(r2)
            r0.setMoreOfferShowFailedCallBack(r1)
            return
    }

    private void setOfferData(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3, int r4, com.mbridge.msdk.videocommon.view.RoundImageView r5, android.widget.TextView r6) {
            r2 = this;
            if (r5 == 0) goto L6a
            if (r6 == 0) goto L6a
            if (r3 != 0) goto L7
            goto L6a
        L7:
            android.content.Context r0 = r2.mContext
            if (r0 == 0) goto L6a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.mMainOfferCampaignEx
            if (r0 != 0) goto L10
            goto L6a
        L10:
            int r0 = r3.size()
            if (r0 <= 0) goto L6a
            java.lang.Object r3 = r3.get(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            if (r3 != 0) goto L1f
            return
        L1f:
            r4 = 0
            r5.setImageDrawable(r4)
            android.content.Context r4 = r2.mContext
            com.mbridge.msdk.foundation.same.c.b r4 = com.mbridge.msdk.foundation.same.c.b.a(r4)
            java.lang.String r0 = r3.getIconUrl()
            com.mbridge.msdk.video.dynview.moffer.MOfferModel$8 r1 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel$8
            r1.<init>(r2, r5)
            r4.a(r0, r1)
            java.lang.String r4 = r3.getAppName()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L6a
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.mMainOfferCampaignEx
            java.lang.String r4 = r4.getendcard_url()
            java.lang.String r5 = "mof_textmod"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ak.a(r4, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L63
            java.lang.String r5 = "1"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L63
            if (r6 == 0) goto L6a
            java.lang.String r3 = r3.getAppName()
            r6.setText(r3)
            goto L6a
        L63:
            if (r6 == 0) goto L6a
            r3 = 8
            r6.setVisibility(r3)
        L6a:
            return
    }

    public void buildMofferAd(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r1 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1.mContext = r0
            if (r0 != 0) goto Ld
            return
        Ld:
            r1.mMainOfferCampaignEx = r2
            r1.initView()
            r1.initData()
            return
    }

    public void checkViewVisiableState() {
            r2 = this;
            android.widget.LinearLayout r0 = r2.mLinearLayout
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
        L6:
            android.widget.LinearLayout r1 = r2.mLinearLayout     // Catch: java.lang.Exception -> L1a
            int r1 = r1.getChildCount()     // Catch: java.lang.Exception -> L1a
            if (r0 >= r1) goto L24
            android.widget.LinearLayout r1 = r2.mLinearLayout     // Catch: java.lang.Exception -> L1a
            android.view.View r1 = r1.getChildAt(r0)     // Catch: java.lang.Exception -> L1a
            r2.setCallbackForLogicVisibleView(r1, r0)     // Catch: java.lang.Exception -> L1a
            int r0 = r0 + 1
            goto L6
        L1a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MOfferModel"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L24:
            return
    }

    public void mofDestroy() {
            r2 = this;
            com.mbridge.msdk.video.dynview.e.f r0 = r2.mMoreOfferLayoutListener
            r1 = 0
            if (r0 == 0) goto L7
            r2.mMoreOfferLayoutListener = r1
        L7:
            com.mbridge.msdk.video.dynview.endcard.expose.OnItemExposeListener r0 = r2.onItemExposeListener
            if (r0 == 0) goto Ld
            r2.onItemExposeListener = r1
        Ld:
            com.mbridge.msdk.video.dynview.moffer.c r0 = r2.mMoreOfferShowCallBack
            if (r0 == 0) goto L13
            r2.mMoreOfferShowCallBack = r1
        L13:
            return
    }

    public void setFromType(int r1) {
            r0 = this;
            r0.mFromType = r1
            return
    }

    public void setMoreOfferListener(com.mbridge.msdk.video.dynview.e.f r1, com.mbridge.msdk.video.module.a.a r2) {
            r0 = this;
            r0.mMoreOfferLayoutListener = r1
            r0.mNotifyListener = r2
            return
    }

    public void showView() {
            r4 = this;
            com.mbridge.msdk.video.dynview.e.f r0 = r4.mMoreOfferLayoutListener
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r1 = r4.viewMofferLayout
            if (r1 == 0) goto L1f
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = r4.mCampaignUnit
            if (r2 != 0) goto Le
            goto L1f
        Le:
            r0.a(r1, r2)
            boolean r0 = r4.isOnlyImpShow
            if (r0 != 0) goto L1e
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r4.mCampaignUnit
            r1 = 0
            r2 = 1
            java.lang.String r3 = "117361"
            com.mbridge.msdk.video.dynview.f.a.a(r0, r1, r2, r3)
        L1e:
            return
        L1f:
            com.mbridge.msdk.video.dynview.e.f r0 = r4.mMoreOfferLayoutListener
            r1 = -1
            java.lang.String r2 = "more Offer create fail"
            r0.a(r1, r2)
            return
    }
}
