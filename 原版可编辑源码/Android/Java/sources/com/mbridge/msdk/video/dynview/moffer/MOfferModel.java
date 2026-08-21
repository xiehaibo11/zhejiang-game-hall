package com.mbridge.msdk.video.dynview.moffer;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Rect;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.system.NoProGuard;
import com.mbridge.msdk.video.dynview.e.f;
import com.mbridge.msdk.video.dynview.endcard.expose.OnItemExposeListener;
import com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout;
import com.mbridge.msdk.video.dynview.widget.ObservableScrollView;
import com.mbridge.msdk.videocommon.view.RoundImageView;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.json.JSONObject;

public class MOfferModel implements NoProGuard {
    private static final String TAG = "MOfferModel";
    private int admf;
    private int admftm;
    private List<Integer> cacheImpressionReportList;
    private List<Integer> cacheOnlyImpressionReportList;
    private boolean isShowMoreOffer;
    private CampaignUnit mCampaignUnit;
    private Context mContext;
    private LinearLayout mLinearLayout;
    private CampaignEx mMainOfferCampaignEx;
    private f mMoreOfferLayoutListener;
    private com.mbridge.msdk.video.module.a.a mNotifyListener;
    private ObservableScrollView mObservableScrollView;
    private com.mbridge.msdk.foundation.same.net.g.d mParam;
    private String mRid;
    private String mUnitId;
    private MBridgeRelativeLayout viewMofferLayout;
    private final String VALUE_MOF_TYPE = "1";
    private final String VALUE_H5_TYPE = "1";
    private final String VALUE_MOF = "1";
    private final String VALUE_COUNTRY_CODE = "CN";
    private final String VALUE_MOF_VER = "1";
    private final String VALUE_OFF_SET = "0";
    private final String VALUE_CATEGORY = "0";
    private final String VALUE_ONLY_IMPRESSION = "1";
    private final String VALUE_PING_MODE = "1";
    private final String VALUE_HTTP_REQ = "2";
    private final String VALUE_AD_NUM = "20";
    private final String VALUE_TNUM = "20";
    private final String VALUE_API_VERSION = "2.3";
    private final String VALUE_DEFAULT_VIDEO_TEMP_ID = "404";
    private final String K = "k";
    private final String MOF_TEST_UID = "mof_testuid";
    private final String MCC = "mcc";
    private final String MOF_UID = "mof_uid";
    private final String MNC = "mnc";
    private final String RV_TID = "rv_tid";
    private final String EC_ID = "ec_id";
    private final String TP_LGP = "tplgp";
    private final String V_FMD5 = "v_fmd5";
    private final String I_FMD5 = "i_fmd5";
    private final String APP_ID = "app_id";
    private final String SIGN = "sign";
    private final String PARENT_UNIT = "parent_unit";
    private final String E = "e";
    private final String MOF_TYPE = "mof_type";
    private final String H5_TYPE = "h5_type";
    private final String MOF = "mof";
    private final String COUNTRY_CODE = com.tkay.expressad.foundation.g.a.bD;
    private final String MOF_VER = "mof_ver";
    private final String CRT_CID = "crt_cid";
    private final String CRT_RID = "crt_rid";
    private final String H5_T = "h5_t";
    private final String MOF_T = "mof_t";
    private final String MOF_DATA = "mof_data";
    private final String IMEI = "imei";
    private final String OFFER_ID = "offer_id";
    private final String OFF_SET = "offset";
    private final String CATEGORY = "category";
    private final String ONLY_IMPRESSION = "only_impression";
    private final String PING_MODE = "ping_mode";
    private final String HTTP_REQ = "http_req";
    private final String AD_NUM = "ad_num";
    private final String TNUM = "tnum";
    private final String API_VERSION = "api_version";
    private final String MOF_DOMAIN = "mof_domain";
    private final String PARENT_ID = "parent_id";
    private final String MOF_PARENT_ID = "mof_parent_id";
    private final String UC_PARENT_UNIT = "uc_parent_unit";
    private final String DEFAULT_PATH_V3 = "/openapi/ad/v3";
    private final String PARENT_EXCHANGE = "parent_exchange";
    private final String PARENT_AD_TYPE = "parent_ad_type";
    private final String PARENT_TEMPLATE_ID = "parent_template_id";
    private final String ONE_ID = "oneId";
    private final String MORE_OFFER_DEFAULT_UNIT_ID = "117361";
    private final String MORE_OFFER_DEFAULT_APP_ID = "92762";
    private final String MORE_OFFER_DEFAULT_APP_KEY = "936dcbdd57fe235fd7cf61c2e93da3c4";
    private final String MORE_OFFER_LOAD_SUCCESS = "more offer load success";
    private final String MORE_OFFER_LOAD_FAILED = "more offer load failed";
    private final String MORE_OFFER_SHOW = "more offer show";
    private final String MORE_OFFER_CLICK = "more offer click";
    private final String MORE_OFFER_SHOW_FAILED = "more offer show fail";
    private final String UNIT_ID = "unit_id";
    private final String R_ID = "r_id";
    private final int DO_ACTION_IMPRESSION = 0;
    private final int DO_ACTION_ONLY_IMPRESSION = 1;
    private volatile boolean hasReportMoreOfferLoad = false;
    private volatile boolean hasReportMoreOfferShow = false;
    private int bitmapSuccessCount = 0;
    private List<Integer> mImpressionId = new ArrayList();
    private int mControlShowSize = 0;
    private boolean isOnlyImpShow = false;
    private int mFromType = 0;
    private OnItemExposeListener onItemExposeListener = new OnItemExposeListener() {
        @Override
        public final void onItemViewVisible(boolean z, int i) {
            if (MOfferModel.this.viewMofferLayout == null) {
                return;
            }
            if (MOfferModel.this.viewMofferLayout.getVisibility() == 0) {
                if (!MOfferModel.this.hasReportMoreOfferShow) {
                    com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mMainOfferCampaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "more offer show", MOfferModel.this.mUnitId, MOfferModel.this.mRid);
                    MOfferModel.this.hasReportMoreOfferShow = true;
                }
                try {
                    com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mCampaignUnit, i, 0, "117361");
                    return;
                } catch (Exception e) {
                    e.printStackTrace();
                    return;
                }
            }
            if (MOfferModel.this.cacheImpressionReportList == null) {
                MOfferModel.this.cacheImpressionReportList = new ArrayList();
            }
            if (MOfferModel.this.cacheImpressionReportList.contains(Integer.valueOf(i))) {
                return;
            }
            MOfferModel.this.cacheImpressionReportList.add(Integer.valueOf(i));
        }

        @Override
        public final void onItemViewFirstVisible() {
            if (MOfferModel.this.viewMofferLayout == null || !MOfferModel.this.isOnlyImpShow) {
                return;
            }
            if (MOfferModel.this.viewMofferLayout.getVisibility() == 0) {
                try {
                    com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mCampaignUnit, 0, 1, "117361");
                    return;
                } catch (Exception e) {
                    e.printStackTrace();
                    return;
                }
            }
            if (MOfferModel.this.cacheOnlyImpressionReportList == null) {
                MOfferModel.this.cacheOnlyImpressionReportList = new ArrayList();
            }
            MOfferModel.this.cacheOnlyImpressionReportList.add(0);
        }
    };
    private c mMoreOfferShowCallBack = new c() {
        @Override
        public final void a(List<View> list) {
            TextView textView;
            if (MOfferModel.this.viewMofferLayout == null || (textView = (TextView) MOfferModel.this.viewMofferLayout.findViewById(MOfferModel.this.findID("mbridge_reward_end_card_like_tv"))) == null) {
                return;
            }
            textView.setVisibility(0);
        }
    };

    static int access$2108(MOfferModel mOfferModel) {
        int i = mOfferModel.bitmapSuccessCount;
        mOfferModel.bitmapSuccessCount = i + 1;
        return i;
    }

    public void setFromType(int i) {
        this.mFromType = i;
    }

    public void setMoreOfferListener(f fVar, com.mbridge.msdk.video.module.a.a aVar) {
        this.mMoreOfferLayoutListener = fVar;
        this.mNotifyListener = aVar;
    }

    public void buildMofferAd(CampaignEx campaignEx) {
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        this.mContext = contextJ;
        if (contextJ == null) {
            return;
        }
        this.mMainOfferCampaignEx = campaignEx;
        initView();
        initData();
    }

    private void initData() {
        String str;
        CampaignEx campaignEx = this.mMainOfferCampaignEx;
        if (campaignEx == null || this.mContext == null) {
            return;
        }
        buildRequestParams(campaignEx);
        if (this.mParam == null) {
            return;
        }
        com.mbridge.msdk.video.dynview.f.b bVar = new com.mbridge.msdk.video.dynview.f.b(this.mContext);
        com.mbridge.msdk.video.dynview.f.a.a aVar = new com.mbridge.msdk.video.dynview.f.a.a() {
            @Override
            public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit) {
                if (MOfferModel.this.mParam == null || campaignUnit == null) {
                    a.a().b();
                    return;
                }
                try {
                    MOfferModel.this.mUnitId = MOfferModel.this.mParam.b().get("unit_id");
                    MOfferModel.this.mRid = MOfferModel.this.mParam.b().get("r_id");
                    if (campaignUnit.getAds() == null || campaignUnit.getAds().size() < 5) {
                        if (!MOfferModel.this.hasReportMoreOfferLoad) {
                            com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mMainOfferCampaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "more offer load failed errorCode: -999 errorMsg: The campaign quantity less than 5.", MOfferModel.this.mUnitId, MOfferModel.this.mRid);
                            MOfferModel.this.hasReportMoreOfferLoad = true;
                        }
                        a.a().b();
                        return;
                    }
                    MOfferModel.this.mCampaignUnit = campaignUnit;
                    if (MOfferModel.this.admf > 0 && MOfferModel.this.admftm == 1) {
                        MOfferModel.this.doControllableImpOnRequest();
                    }
                    if (!MOfferModel.this.hasReportMoreOfferLoad) {
                        com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mMainOfferCampaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "more offer load success", MOfferModel.this.mUnitId, MOfferModel.this.mRid);
                        MOfferModel.this.hasReportMoreOfferLoad = true;
                    }
                    MOfferModel.this.createMoreOfferView();
                } catch (Exception e) {
                    z.d(MOfferModel.TAG, e.getMessage());
                    a.a().b();
                }
            }

            @Override
            public final void a(int i, String str2) {
                if (MOfferModel.this.mParam == null) {
                    a.a().b();
                    return;
                }
                try {
                    MOfferModel.this.mUnitId = MOfferModel.this.mParam.b().get("unit_id");
                    MOfferModel.this.mRid = MOfferModel.this.mParam.b().get("r_id");
                    if (!MOfferModel.this.hasReportMoreOfferLoad) {
                        com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mMainOfferCampaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "more offer load failed errorCode:" + i + "errorMsg:" + str2, MOfferModel.this.mUnitId, MOfferModel.this.mRid);
                        MOfferModel.this.hasReportMoreOfferLoad = true;
                    }
                    a.a().b();
                } catch (Exception e) {
                    z.d(MOfferModel.TAG, e.getMessage());
                    a.a().b();
                }
            }
        };
        String str2 = com.mbridge.msdk.foundation.same.net.f.d.a().m;
        if (TextUtils.isEmpty(this.mMainOfferCampaignEx.getReq_ext_data())) {
            str = str2;
        } else {
            try {
                JSONObject jSONObject = new JSONObject(this.mMainOfferCampaignEx.getReq_ext_data());
                String strOptString = jSONObject.optString("mof_domain");
                if (!TextUtils.isEmpty(strOptString)) {
                    str2 = strOptString + "/openapi/ad/v3";
                }
                String strOptString2 = jSONObject.optString("parent_id");
                if (!TextUtils.isEmpty(strOptString2)) {
                    com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "mof_parent_id", strOptString2);
                }
                String strOptString3 = jSONObject.optString("oneId");
                if (!TextUtils.isEmpty(strOptString3)) {
                    com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "oneId", strOptString3);
                }
                aVar.setUnitId(this.mMainOfferCampaignEx.getCampaignUnitId());
                str = str2;
            } catch (Exception e) {
                z.d(TAG, e.getMessage());
                str = com.mbridge.msdk.foundation.same.net.f.d.a().m;
            }
        }
        bVar.getLoadOrSetting(1, str, this.mParam, new com.mbridge.msdk.foundation.same.net.b(), aVar, true);
        doAdmfContorl();
    }

    private void doAdmfContorl() {
        try {
            if (this.mMainOfferCampaignEx != null && !TextUtils.isEmpty(this.mMainOfferCampaignEx.getMoreOfferJsonData())) {
                JSONObject jSONObject = new JSONObject(this.mMainOfferCampaignEx.getMoreOfferJsonData());
                JSONObject jSONObject2 = null;
                int i = this.mFromType;
                if (i == 1) {
                    jSONObject2 = jSONObject.getJSONObject("template_url");
                } else if (i == 2) {
                    jSONObject2 = jSONObject.getJSONObject("endcard_url");
                }
                if (jSONObject2 == null) {
                    return;
                }
                if (jSONObject2.has(MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMFTM)) {
                    this.admftm = jSONObject2.getInt(MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMFTM);
                }
                if (jSONObject2.has(MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMF)) {
                    this.admf = jSONObject2.getInt(MBridgeConstans.DYNAMIC_VIEW_MORE_OFFER_ADMF);
                }
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    private void doControllableImpOnRequest() {
        CampaignUnit campaignUnit = this.mCampaignUnit;
        if (campaignUnit == null) {
            return;
        }
        try {
            com.mbridge.msdk.video.dynview.f.a.a(campaignUnit, 0, 1, "117361");
            this.isOnlyImpShow = true;
            if (this.mCampaignUnit.getAds() == null) {
                return;
            }
            int size = this.mCampaignUnit.getAds().size();
            if (this.admf >= size) {
                this.admf = size;
            }
            if (this.mImpressionId == null) {
                this.mImpressionId = new ArrayList();
            }
            for (int i = 0; i < this.admf; i++) {
                if (!this.mImpressionId.contains(Integer.valueOf(i))) {
                    com.mbridge.msdk.video.dynview.f.a.a(this.mCampaignUnit, i, 0, "117361");
                    this.mImpressionId.add(Integer.valueOf(i));
                }
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    private void doControllableImpOnShow(int i) {
        CampaignUnit campaignUnit = this.mCampaignUnit;
        if (campaignUnit == null || campaignUnit.getAds() == null) {
            return;
        }
        try {
            int size = this.mCampaignUnit.getAds().size();
            if (this.mControlShowSize == 0) {
                this.mControlShowSize = this.admf + i;
            }
            if (this.mControlShowSize >= size) {
                this.mControlShowSize = size;
            }
            while (i < this.mControlShowSize) {
                if (!this.mImpressionId.contains(Integer.valueOf(i))) {
                    com.mbridge.msdk.video.dynview.f.a.a(this.mCampaignUnit, i, 0, "117361");
                    this.mImpressionId.add(Integer.valueOf(i));
                }
                i++;
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    private void buildRequestParams(CampaignEx campaignEx) {
        if (campaignEx == null) {
            return;
        }
        this.mParam = new com.mbridge.msdk.foundation.same.net.g.d();
        String campaignUnitId = campaignEx.getCampaignUnitId();
        String id = campaignEx.getId();
        String strA = ak.a(campaignEx.getNoticeUrl(), "k");
        String strA2 = ak.a(campaignEx.getendcard_url(), "mof_testuid");
        if (TextUtils.isEmpty(strA2)) {
            strA2 = ak.a(campaignEx.getendcard_url(), "mof_uid");
        }
        String strK = com.mbridge.msdk.foundation.controller.a.f().k();
        String strAh = (TextUtils.isEmpty(strK) || com.mbridge.msdk.c.b.a().b(strK) == null) ? "CN" : com.mbridge.msdk.c.b.a().b(strK).ah();
        String strA3 = ak.a(campaignEx.getendcard_url(), "mcc");
        String strA4 = ak.a(campaignEx.getendcard_url(), "mnc");
        String strA5 = ak.a(campaignEx.getendcard_url(), "rv_tid");
        String strA6 = ak.a(campaignEx.getendcard_url(), "ec_id");
        String strA7 = ak.a(campaignEx.getendcard_url(), "tplgp");
        String strA8 = ak.a(campaignEx.getendcard_url(), "v_fmd5");
        String strA9 = ak.a(campaignEx.getendcard_url(), "i_fmd5");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "app_id", com.mbridge.msdk.foundation.controller.a.f().k());
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "sign", SameMD5.getMD5(strK + com.mbridge.msdk.foundation.controller.a.f().l()));
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "r_id", strA);
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "e", Arrays.toString(new String[]{id}));
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "mof_type", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "h5_type", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "mof", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, com.tkay.expressad.foundation.g.a.bD, TextUtils.isEmpty(strAh) ? "CN" : strAh);
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "mof_ver", "1");
        this.mParam.a("parent_exchange", "");
        int adType = campaignEx.getAdType();
        this.mParam.a("parent_ad_type", adType != 94 ? adType != 287 ? "" : "interstitial_video" : "rewarded_video");
        this.mParam.a("oneId", campaignEx.getReq_ext_data());
        if (!TextUtils.isEmpty(strA6)) {
            this.mParam.a("parent_template_id", strA6);
        } else {
            this.mParam.a("parent_template_id", "404");
        }
        if (TextUtils.isEmpty(strA2)) {
            com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "uc_parent_unit", campaignUnitId);
        } else {
            com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "parent_unit", campaignUnitId);
        }
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "mnc", strA4);
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "mcc", strA3);
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("crt_cid", id);
            jSONObject.put("crt_rid", strA);
            jSONObject.put("rv_tid", strA5);
            jSONObject.put("ec_id", strA6);
            jSONObject.put("tplgp", strA7);
            jSONObject.put("v_fmd5", strA8);
            jSONObject.put("i_fmd5", strA9);
            jSONObject.put("h5_t", 1);
            jSONObject.put("mof_t", 1);
        } catch (Exception e) {
            e.printStackTrace();
        }
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "mof_data", jSONObject.toString());
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "imei", "");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "offer_id", id);
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "offset", "0");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "category", "0");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "only_impression", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "ping_mode", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "http_req", "2");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "ad_num", "20");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "tnum", "20");
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "api_version", "2.3");
        if (TextUtils.isEmpty(strA2)) {
            com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "app_id", "92762");
            com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "sign", SameMD5.getMD5("92762936dcbdd57fe235fd7cf61c2e93da3c4"));
            strA2 = "117361";
        }
        com.mbridge.msdk.foundation.same.net.f.b.a(this.mParam, "unit_id", strA2);
    }

    private void createMoreOfferView() {
        CampaignUnit campaignUnit = this.mCampaignUnit;
        if (campaignUnit == null || this.mContext == null || campaignUnit.getAds() == null || this.mCampaignUnit.getAds().size() == 0) {
            return;
        }
        setMoreOfferLayoutCallBack();
        createMoreOfferList();
    }

    private void createMoreOfferList() {
        MBridgeRelativeLayout mBridgeRelativeLayout = this.viewMofferLayout;
        if (mBridgeRelativeLayout == null) {
            return;
        }
        this.mObservableScrollView = (ObservableScrollView) mBridgeRelativeLayout.findViewById(findID("mbridge_moreoffer_hls"));
        buildScrollViewGroup();
        addLikeTextView();
        showView();
    }

    private void setMoreOfferLayoutCallBack() {
        MBridgeRelativeLayout mBridgeRelativeLayout = this.viewMofferLayout;
        if (mBridgeRelativeLayout == null) {
            return;
        }
        mBridgeRelativeLayout.setMoreOfferCacheReportCallBack(new b() {
            @Override
            public final void a() {
                try {
                    if (MOfferModel.this.cacheImpressionReportList != null) {
                        for (int i = 0; i < MOfferModel.this.cacheImpressionReportList.size(); i++) {
                            if (!MOfferModel.this.hasReportMoreOfferShow) {
                                com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mMainOfferCampaignEx, MOfferModel.this.mContext, "more offer show", MOfferModel.this.mUnitId, MOfferModel.this.mRid);
                                MOfferModel.this.hasReportMoreOfferShow = true;
                            }
                            com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mCampaignUnit, ((Integer) MOfferModel.this.cacheImpressionReportList.get(i)).intValue(), 0, "117361");
                        }
                    }
                    if (MOfferModel.this.cacheOnlyImpressionReportList != null || !MOfferModel.this.isOnlyImpShow) {
                        for (int i2 = 0; i2 < MOfferModel.this.cacheOnlyImpressionReportList.size(); i2++) {
                            com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mCampaignUnit, ((Integer) MOfferModel.this.cacheOnlyImpressionReportList.get(i2)).intValue(), 1, "117361");
                        }
                    }
                    MOfferModel.this.release();
                } catch (Exception e) {
                    z.d(MOfferModel.TAG, e.getMessage());
                }
            }
        });
        this.viewMofferLayout.setMoreOfferShowFailedCallBack(new d() {
            @Override
            public final void a() {
                if (MOfferModel.this.viewMofferLayout != null && MOfferModel.this.viewMofferLayout.getVisibility() != 0) {
                    com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mMainOfferCampaignEx, MOfferModel.this.mContext, "more offer show fail", MOfferModel.this.mUnitId, MOfferModel.this.mRid);
                }
                MOfferModel.this.release();
            }
        });
    }

    private void buildScrollViewGroup() {
        if (this.mContext == null || this.viewMofferLayout == null || this.mMainOfferCampaignEx == null) {
            return;
        }
        this.mLinearLayout = new LinearLayout(this.mContext);
        this.mLinearLayout.setLayoutParams(new FrameLayout.LayoutParams(-2, -1));
        this.mLinearLayout.setOrientation(0);
        this.mLinearLayout.setGravity(17);
        for (int i = 0; i < this.mCampaignUnit.ads.size(); i++) {
            View viewBuildItemView = buildItemView(i);
            if (viewBuildItemView != null) {
                this.mLinearLayout.addView(viewBuildItemView);
            }
        }
        this.mObservableScrollView.addView(this.mLinearLayout);
        this.mObservableScrollView.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() != 1) {
                    return false;
                }
                MOfferModel.this.checkViewVisiableState();
                return false;
            }
        });
    }

    private View buildItemView(final int i) {
        Context context = this.mContext;
        if (context == null) {
            return null;
        }
        final View viewInflate = LayoutInflater.from(this.mContext).inflate(s.a(context, "mbridge_reward_end_card_more_offer_item", "layout"), (ViewGroup) null, false);
        int iA = s.a(this.mContext, "mbridge_reward_end_card_item_iv", "id");
        if (viewInflate == null) {
            return null;
        }
        setOfferData(this.mCampaignUnit.getAds(), i, (RoundImageView) viewInflate.findViewById(iA), (TextView) viewInflate.findViewById(s.a(this.mContext, "mbridge_reward_end_card_item_title_tv", "id")));
        viewInflate.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                CampaignEx campaignEx;
                try {
                    if (MOfferModel.this.mCampaignUnit == null || MOfferModel.this.mCampaignUnit.ads == null || MOfferModel.this.mCampaignUnit.ads.size() <= 0 || (campaignEx = MOfferModel.this.mCampaignUnit.ads.get(i)) == null) {
                        return;
                    }
                    if (MOfferModel.this.mNotifyListener != null) {
                        MOfferModel.this.callBackClick(MOfferModel.this.mNotifyListener);
                    }
                    com.mbridge.msdk.video.dynview.f.a.a(MOfferModel.this.mMainOfferCampaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "more offer click", MOfferModel.this.mUnitId, MOfferModel.this.mRid);
                    com.mbridge.msdk.video.dynview.f.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, MOfferModel.this.mUnitId, viewInflate);
                } catch (Exception e) {
                    z.d(MOfferModel.TAG, e.getMessage());
                }
            }
        });
        return viewInflate;
    }

    private void setOfferData(List<CampaignEx> list, int i, final RoundImageView roundImageView, TextView textView) {
        CampaignEx campaignEx;
        if (roundImageView == null || textView == null || list == null || this.mContext == null || this.mMainOfferCampaignEx == null || list.size() <= 0 || (campaignEx = list.get(i)) == null) {
            return;
        }
        roundImageView.setImageDrawable(null);
        com.mbridge.msdk.foundation.same.c.b.a(this.mContext).a(campaignEx.getIconUrl(), new com.mbridge.msdk.foundation.same.c.c() {
            @Override
            public final void onFailedLoad(String str, String str2) {
            }

            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str) {
                try {
                    if (roundImageView != null && bitmap != null && !bitmap.isRecycled()) {
                        roundImageView.setBorderRadius(13);
                        roundImageView.setImageBitmap(bitmap);
                    }
                    MOfferModel.access$2108(MOfferModel.this);
                    if (MOfferModel.this.isShowMoreOffer || MOfferModel.this.bitmapSuccessCount < 5 || MOfferModel.this.mMoreOfferShowCallBack == null) {
                        return;
                    }
                    MOfferModel.this.isShowMoreOffer = true;
                    MOfferModel.this.mMoreOfferShowCallBack.a(null);
                } catch (Exception e) {
                    z.d(MOfferModel.TAG, e.getMessage());
                }
            }
        });
        if (TextUtils.isEmpty(campaignEx.getAppName())) {
            return;
        }
        String strA = ak.a(this.mMainOfferCampaignEx.getendcard_url(), "mof_textmod");
        if (TextUtils.isEmpty(strA) || !strA.equals("1")) {
            if (textView != null) {
                textView.setVisibility(8);
            }
        } else if (textView != null) {
            textView.setText(campaignEx.getAppName());
        }
    }

    public void showView() {
        CampaignUnit campaignUnit;
        f fVar = this.mMoreOfferLayoutListener;
        if (fVar == null) {
            return;
        }
        MBridgeRelativeLayout mBridgeRelativeLayout = this.viewMofferLayout;
        if (mBridgeRelativeLayout == null || (campaignUnit = this.mCampaignUnit) == null) {
            this.mMoreOfferLayoutListener.a(-1, "more Offer create fail");
            return;
        }
        fVar.a(mBridgeRelativeLayout, campaignUnit);
        if (this.isOnlyImpShow) {
            return;
        }
        com.mbridge.msdk.video.dynview.f.a.a(this.mCampaignUnit, 0, 1, "117361");
    }

    private void initView() {
        Context context = this.mContext;
        if (context == null) {
            return;
        }
        this.viewMofferLayout = (MBridgeRelativeLayout) LayoutInflater.from(this.mContext).inflate(s.a(context, "mbridge_reward_more_offer_view", "layout"), (ViewGroup) null, false);
    }

    private void addLikeTextView() {
        TextView textView;
        MBridgeRelativeLayout mBridgeRelativeLayout = this.viewMofferLayout;
        if (mBridgeRelativeLayout == null || (textView = (TextView) mBridgeRelativeLayout.findViewById(findID("mbridge_reward_end_card_like_tv"))) == null) {
            return;
        }
        textView.setTextColor(Color.parseColor("#FF000000"));
        textView.setTextSize(10.0f);
        if (v.s(com.mbridge.msdk.foundation.controller.a.f().j()).contains(com.tkay.expressad.video.dynview.a.a.Q)) {
            textView.setEms(1);
            textView.getLayoutParams().width = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 30.0f);
            textView.setText("猜你喜欢");
        } else {
            textView.setText("Just\nfor\nYou");
        }
        textView.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MOfferModel.this.mObservableScrollView != null) {
                    if (MOfferModel.this.mObservableScrollView.getVisibility() == 0) {
                        MOfferModel.this.mObservableScrollView.setVisibility(8);
                    } else {
                        MOfferModel.this.mObservableScrollView.setVisibility(0);
                    }
                }
                try {
                    new com.mbridge.msdk.video.dynview.h.b().a(MOfferModel.this.mLinearLayout, 300L);
                } catch (Exception e) {
                    z.d(MOfferModel.TAG, e.getMessage());
                }
            }
        });
    }

    public void checkViewVisiableState() {
        if (this.mLinearLayout == null) {
            return;
        }
        for (int i = 0; i < this.mLinearLayout.getChildCount(); i++) {
            try {
                setCallbackForLogicVisibleView(this.mLinearLayout.getChildAt(i), i);
            } catch (Exception e) {
                z.d(TAG, e.getMessage());
                return;
            }
        }
    }

    private void setCallbackForLogicVisibleView(View view, int i) {
        if (view == null) {
            return;
        }
        try {
            Rect rect = new Rect();
            boolean globalVisibleRect = view.getGlobalVisibleRect(rect);
            boolean z = rect.width() > view.getMeasuredWidth() / 5;
            if (globalVisibleRect && z) {
                if (this.mImpressionId != null && this.onItemExposeListener != null) {
                    if (this.mImpressionId.contains(Integer.valueOf(i))) {
                        return;
                    }
                    this.mImpressionId.add(Integer.valueOf(i));
                    this.onItemExposeListener.onItemViewVisible(true, i);
                }
            } else if (this.admf != 0) {
                doControllableImpOnShow(i);
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    private void callBackClick(com.mbridge.msdk.video.module.a.a aVar) {
        if (aVar == null) {
            return;
        }
        aVar.a(128, "");
    }

    private int findID(String str) {
        return s.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, "id");
    }

    private void release() {
        List<Integer> list = this.cacheImpressionReportList;
        if (list != null) {
            list.clear();
            this.cacheImpressionReportList = null;
        }
        List<Integer> list2 = this.cacheOnlyImpressionReportList;
        if (list2 != null) {
            list2.clear();
            this.cacheOnlyImpressionReportList = null;
        }
    }

    public void mofDestroy() {
        if (this.mMoreOfferLayoutListener != null) {
            this.mMoreOfferLayoutListener = null;
        }
        if (this.onItemExposeListener != null) {
            this.onItemExposeListener = null;
        }
        if (this.mMoreOfferShowCallBack != null) {
            this.mMoreOfferShowCallBack = null;
        }
    }
}
