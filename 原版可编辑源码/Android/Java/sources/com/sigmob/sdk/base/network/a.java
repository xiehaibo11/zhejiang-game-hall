package com.sigmob.sdk.base.network;

import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.models.AdCache;
import com.czhj.sdk.common.models.AdSlot;
import com.czhj.sdk.common.models.App;
import com.czhj.sdk.common.models.BidRequest;
import com.czhj.sdk.common.models.Device;
import com.czhj.sdk.common.models.DeviceId;
import com.czhj.sdk.common.models.HeaderBidding;
import com.czhj.sdk.common.models.ModelBuilderCreator;
import com.czhj.sdk.common.models.Network;
import com.czhj.sdk.common.models.Privacy;
import com.czhj.sdk.common.models.User;
import com.czhj.sdk.common.models.Version;
import com.czhj.sdk.common.network.SigmobRequest;
import com.czhj.sdk.common.utils.AESUtil;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.ParseError;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.HttpHeaderParser;
import com.sigmob.sdk.base.common.l;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.models.rtb.BidResponse;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.sigmob.sdk.base.network.d;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAds;
import java.util.ArrayList;
import java.util.Map;

public class a extends SigmobRequest<BidResponse> {
    private final d.a a;
    private final LoadAdRequest b;
    private Network.Builder c;
    private AdSlot.Builder d;
    private Device.Builder e;
    private App.Builder f;

    public a(String str, LoadAdRequest loadAdRequest, d.a aVar) {
        super(str, 1, null);
        Preconditions.NoThrow.checkNotNull(aVar);
        this.a = aVar;
        this.b = loadAdRequest;
        setRetryPolicy(new DefaultRetryPolicy(10000, 0, 0.0f));
        setShouldCache(false);
    }

    private void a(final int i, final String str, final String str2, int i2, String str3) {
        z.a(PointCategory.SERVER_ERROR, i2, str3, (BaseAdUnit) null, new z.a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmobError) {
                    PointEntitySigmobError pointEntitySigmobError = (PointEntitySigmobError) obj;
                    pointEntitySigmobError.setRequest_id(str2);
                    pointEntitySigmobError.setPlacement_id(str);
                    pointEntitySigmobError.setAdtype(String.valueOf(i));
                }
            }
        });
    }

    public static App.Builder b() {
        App.Builder builderCreateApp = ModelBuilderCreator.createApp();
        builderCreateApp.app_id(WindAds.sharedAds().getAppId());
        return builderCreateApp;
    }

    public static User.Builder c() {
        User.Builder builder = new User.Builder();
        builder.is_minor = Boolean.valueOf(!com.sigmob.sdk.base.c.a().d());
        builder.disable_personalized_recommendation = Boolean.valueOf(!com.sigmob.sdk.base.c.a().e());
        builder.change_recommendation_state = Boolean.valueOf(com.sigmob.sdk.base.c.a().f());
        return builder;
    }

    public static Privacy.Builder d() {
        int iG;
        Privacy.Builder builder = new Privacy.Builder();
        builder.age(Integer.valueOf(com.sigmob.sdk.base.c.a().b()));
        builder.child_protection(Integer.valueOf(com.sigmob.sdk.base.c.a().c()));
        try {
            iG = com.sigmob.sdk.base.c.a().g();
        } catch (Throwable unused) {
            iG = 0;
        }
        builder.gdpr_consent(Integer.valueOf(iG));
        return builder;
    }

    private void e() {
        this.f = b();
        this.e = ModelBuilderCreator.createDevice();
        DeviceId.Builder builderCreateDeviceId = ModelBuilderCreator.createDeviceId();
        builderCreateDeviceId.user_id(this.b.getUserId());
        this.e.did(builderCreateDeviceId.build());
        this.c = ModelBuilderCreator.createNetwork();
        AdSlot.Builder builderCreateAdSlot = ModelBuilderCreator.createAdSlot();
        this.d = builderCreateAdSlot;
        builderCreateAdSlot.adslot_type.add(Integer.valueOf(this.b.getAdType()));
        if (this.b.getAdType() == 2) {
            this.d.material_type.add(Integer.valueOf(com.sigmob.sdk.splash.a.b.a()));
            this.d.material_type.add(Integer.valueOf(com.sigmob.sdk.splash.a.c.a()));
            this.d.material_type.add(Integer.valueOf(com.sigmob.sdk.splash.a.d.a()));
            this.d.creative_type.add(Integer.valueOf(l.b.a()));
            this.d.creative_type.add(Integer.valueOf(l.g.a()));
        } else {
            if (this.b.getAdType() == 1 || this.b.getAdType() == 4) {
                this.d.creative_type.add(Integer.valueOf(l.a.a()));
                this.d.creative_type.add(Integer.valueOf(l.c.a()));
                this.d.creative_type.add(Integer.valueOf(l.e.a()));
                this.d.creative_type.add(Integer.valueOf(l.f.a()));
                this.d.creative_type.add(Integer.valueOf(l.h.a()));
            }
            Map<String, AdCache> mapA = com.sigmob.sdk.base.common.f.e().a(this.b.getAdType());
            if (mapA != null) {
                this.d.ad_caches(mapA);
            }
        }
        this.d.sdk_strategy_index(1);
        if (!TextUtils.isEmpty(this.b.getPlacementId())) {
            this.d.adslot_id(this.b.getPlacementId());
        }
        this.d.latest_crid(this.b.getLastCrid());
        this.d.latest_camp_id(this.b.getLastCampid());
        this.d.ad_count(Integer.valueOf(this.b.getAdCount()));
        this.d.bidfloor(Integer.valueOf(this.b.getBidFloor()));
    }

    private BidRequest.Builder f() {
        BidRequest.Builder builder = new BidRequest.Builder();
        try {
            builder.device(ModelBuilderCreator.createDevice().build());
            builder.user(c().build());
            builder.privacy(d().build());
            builder.app(this.f.build());
            builder.slots.add(this.d.build());
            builder.device(this.e.build());
            builder.network(this.c.build());
            if (this.b.getOptions() != null) {
                builder.options(this.b.getOptions());
            }
            builder.ad_is_expired = Boolean.valueOf(this.b.isExpired());
            builder.request_scene_type = Integer.valueOf(this.b.getRequest_scene_type());
            HeaderBidding.Builder builder2 = new HeaderBidding.Builder();
            if (!TextUtils.isEmpty(this.b.getBidToken())) {
                builder2.bid_token(this.b.getBidToken());
            }
            if (!TextUtils.isEmpty(this.b.getCurrency())) {
                builder2.cur(this.b.getCurrency());
            }
            builder.header_bidding(builder2.build());
            if (!TextUtils.isEmpty("4.9.0")) {
                Version.Builder builderCreateVersion = ModelBuilderCreator.createVersion("4.9.0");
                builderCreateVersion.version_str("4.9.0");
                builder.sdk_version(builderCreateVersion.build());
            }
            builder.disable_mediation = true;
            builder.wx_program_req(ModelBuilderCreator.createWXProgramReq().build());
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
        return builder;
    }

    public d.a a() {
        return this.a;
    }

    @Override
    protected void deliverResponse(BidResponse bidResponse) {
        if (bidResponse != null) {
            SigmobLog.d("ads Response: " + System.currentTimeMillis() + " [" + bidResponse + "]");
            String str = bidResponse.uid;
            if (!TextUtils.isEmpty(str)) {
                ClientMetadata.getInstance().setUid(AESUtil.DecryptString(str, "KGpfzbYsn4T9Jyuq"));
            }
            this.b.setRequestId(bidResponse.request_id);
            if (bidResponse.ads.size() <= 0) {
                a(this.b.getAdType(), this.b.getPlacementId(), bidResponse.request_id, bidResponse.error_code.intValue(), bidResponse.error_message);
                this.a.a(bidResponse.error_code.intValue(), bidResponse.error_message, bidResponse.request_id, this.b);
                return;
            }
            try {
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < bidResponse.ads.size(); i++) {
                    BaseAdUnit baseAdUnitAdUnit = BaseAdUnit.adUnit(bidResponse.ads.get(i), bidResponse.request_id, this.b, bidResponse.slot_ad_setting, bidResponse.scene, bidResponse.uid, bidResponse.expiration_time, bidResponse.bidding_response);
                    baseAdUnitAdUnit.setAd_type(this.b.getAdType());
                    baseAdUnitAdUnit.setHalfInterstitial(this.b.isHalfInterstitial());
                    arrayList.add(baseAdUnitAdUnit);
                }
                this.a.a(arrayList, this.b);
                return;
            } catch (Throwable th) {
                SigmobLog.e("ads Response: error ", th);
            }
        }
        this.a.a(WindAdError.ERROR_SIGMOB_INFORMATION_LOSE.getErrorCode(), "bidResponse is null", null, this.b);
    }

    @Override
    public void deliverError(VolleyError volleyError) {
        d.a aVar;
        WindAdError windAdError;
        if (volleyError instanceof ParseError) {
            aVar = this.a;
            windAdError = WindAdError.ERROR_SIGMOB_INFORMATION_LOSE;
        } else {
            SigmobLog.e(this.b.getPlacementId() + " ERROR_SIGMOB_NETWORK " + volleyError.getMessage());
            aVar = this.a;
            windAdError = WindAdError.ERROR_SIGMOB_NETWORK;
        }
        aVar.a(windAdError.getErrorCode(), volleyError.getMessage(), null, this.b);
    }

    @Override
    public byte[] getBody() {
        BidRequest bidRequestBuild;
        try {
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
        if (this.b != null) {
            e();
            bidRequestBuild = f().build();
        } else {
            bidRequestBuild = null;
        }
        if (bidRequestBuild == null) {
            SigmobLog.e("builder Ads Post entry fail ");
            return null;
        }
        SigmobLog.d(getUrl() + " send Bid request: " + bidRequestBuild.toString());
        try {
            return AESUtil.Encrypt(bidRequestBuild.encode(), "KGpfzbYsn4T9Jyuq");
        } catch (Exception e) {
            e.printStackTrace();
            return bidRequestBuild.encode();
        }
    }

    @Override
    public String getBodyContentType() {
        return "application/octet-stream";
    }

    @Override
    public Map<String, String> getHeaders() {
        Map<String, String> headers = super.getHeaders();
        headers.put("e", "1");
        return headers;
    }

    @Override
    protected Response<BidResponse> parseNetworkResponse(NetworkResponse networkResponse) {
        try {
            SigmobLog.d("ads Response start" + System.currentTimeMillis());
            BidResponse bidResponseDecode = BidResponse.ADAPTER.decode(networkResponse.data);
            return bidResponseDecode != null ? Response.success(bidResponseDecode, HttpHeaderParser.parseCacheHeaders(networkResponse)) : Response.error(new ParseError(networkResponse));
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return Response.error(new ParseError(th));
        }
    }
}
