package com.sigmob.sdk.base.common;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.text.TextUtils;
import android.util.Base64;
import android.view.MotionEvent;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.utils.AppPackageUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.DownloadItem;
import com.qihoo360.replugin.RePlugin;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntityClick;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.sigmob.sdk.base.mta.PointEntitySigmobRequest;
import com.sigmob.sdk.base.mta.PointEntitySigmobSuper;
import com.sigmob.sdk.base.mta.PointType;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAdOptions;
import com.sigmob.windad.WindAdRequest;
import com.sigmob.windad.WindAds;
import com.sigmob.windad.WindCustomController;
import com.xiaomi.mipush.sdk.Constants;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class z {

    public interface a {
        void a(Object obj);
    }

    public static void a(PackageInfo packageInfo) {
        PointEntitySigmobSuper pointEntitySigmobSuper = new PointEntitySigmobSuper();
        pointEntitySigmobSuper.setAc_type("10");
        pointEntitySigmobSuper.setCategory("app");
        HashMap map = new HashMap();
        try {
            map.put("app_name", String.valueOf(AppPackageUtil.getPackageManager(com.sigmob.sdk.b.b()).getApplicationLabel(packageInfo.applicationInfo)));
        } catch (Throwable unused) {
        }
        map.put("package_name", packageInfo.packageName);
        map.put(com.sigmob.sdk.base.h.o, String.valueOf(packageInfo.lastUpdateTime));
        map.put("app_version", packageInfo.versionName);
        pointEntitySigmobSuper.setOptions(map);
        pointEntitySigmobSuper.commit();
    }

    public static void a(DownloadItem downloadItem, BaseAdUnit baseAdUnit, String str, boolean z) {
        PointEntitySigmob pointEntitySigmob = new PointEntitySigmob();
        pointEntitySigmob.setAc_type(PointType.DOWNLOAD_TRACKING);
        pointEntitySigmob.setIssuccess(String.valueOf(downloadItem.status));
        pointEntitySigmob.setIscached(z ? "1" : "0");
        pointEntitySigmob.setDuration(String.valueOf(downloadItem.networkMs));
        pointEntitySigmob.setFile_size(String.valueOf(downloadItem.size));
        pointEntitySigmob.setFile_name(Base64.encodeToString(downloadItem.url.getBytes(), 2));
        pointEntitySigmob.setError_message(str);
        pointEntitySigmob.setCategory(String.valueOf(downloadItem.type.getType()));
        a(pointEntitySigmob.getCategory(), pointEntitySigmob.getSub_category(), baseAdUnit, pointEntitySigmob);
        pointEntitySigmob.commit();
    }

    public static void a(com.sigmob.sdk.base.a aVar, String str, BaseAdUnit baseAdUnit, String str2, String str3, String str4) {
        a(aVar, str, baseAdUnit, str2, str3, str4, 0L);
    }

    public static void a(com.sigmob.sdk.base.a aVar, final String str, final BaseAdUnit baseAdUnit, final String str2, final String str3, final String str4, final long j) {
        a(aVar == null ? str : aVar.name().toLowerCase(), str, baseAdUnit, new a() {
            @Override
            public void a(Object obj) {
                String str5;
                if (obj instanceof PointEntitySigmob) {
                    if (baseAdUnit != null && (str5 = str) != null && str5.equalsIgnoreCase("click")) {
                        PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                        pointEntitySigmob.setScene_id(baseAdUnit.getAd_scene_id());
                        pointEntitySigmob.setScene_desc(baseAdUnit.getAd_scene_desc());
                    }
                    PointEntitySigmob pointEntitySigmob2 = (PointEntitySigmob) obj;
                    pointEntitySigmob2.setIs_deeplink(str2);
                    pointEntitySigmob2.setFinal_url(str3);
                    pointEntitySigmob2.setCoordinate(str4);
                    pointEntitySigmob2.setVtime(String.format("%.2f", Float.valueOf(j / 1000.0f)));
                }
            }
        });
    }

    public static void a(final g gVar, final String str, BaseAdUnit baseAdUnit, final NetworkResponse networkResponse, final a aVar) {
        ae.a(gVar.n()).c("13").a(baseAdUnit).a(new a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                    pointEntitySigmob.setAc_type("13");
                    pointEntitySigmob.setUrl(str);
                    g gVar2 = gVar;
                    if (gVar2 != null) {
                        pointEntitySigmob.setRetry(gVar2.f() != null ? "1" : "0");
                        pointEntitySigmob.setCategory(gVar.n());
                        pointEntitySigmob.setRequest_id(gVar.o());
                        if (gVar.h() != 0) {
                            pointEntitySigmob.setTimestamp(String.valueOf(gVar.h()));
                        }
                        pointEntitySigmob.setSource(gVar.b());
                        NetworkResponse networkResponse2 = networkResponse;
                        if (networkResponse2 != null) {
                            pointEntitySigmob.setResponse(networkResponse2.data != null ? Base64.encodeToString(networkResponse.data, 2) : null);
                            pointEntitySigmob.setHttp_code(String.valueOf(networkResponse.statusCode));
                            pointEntitySigmob.setTime_spend(String.valueOf(networkResponse.networkTimeMs));
                            pointEntitySigmob.setContent_type(networkResponse.headers.get("Content-Type"));
                            pointEntitySigmob.setContent_length(networkResponse.headers.get("Content-Length"));
                        }
                    }
                }
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a(obj);
                }
            }
        }).a();
    }

    public static void a(g gVar, String str, BaseAdUnit baseAdUnit, final VolleyError volleyError) {
        NetworkResponse networkResponse = volleyError != null ? volleyError.networkResponse : null;
        a(gVar, str, baseAdUnit, networkResponse, networkResponse == null ? new a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                    pointEntitySigmob.setHttp_code(RePlugin.PROCESS_UI);
                    VolleyError volleyError2 = volleyError;
                    pointEntitySigmob.setTime_spend(volleyError2 != null ? String.valueOf(volleyError2.getNetworkTimeMs()) : "0");
                }
            }
        } : null);
    }

    public static void a(BaseAdUnit baseAdUnit, MotionEvent motionEvent, String str, boolean z) {
        long eventTime = motionEvent.getEventTime() - motionEvent.getDownTime();
        PointEntityClick pointEntityClick = new PointEntityClick();
        pointEntityClick.setAc_type("102");
        pointEntityClick.setCategory(str);
        pointEntityClick.setLocation(String.format("{x:%f,y:%f}", Float.valueOf(motionEvent.getRawX()), Float.valueOf(motionEvent.getRawY())));
        pointEntityClick.setClick_duration(String.valueOf(eventTime));
        pointEntityClick.setPressure(String.valueOf(motionEvent.getPressure()));
        pointEntityClick.setTouchSize(String.valueOf(motionEvent.getSize()));
        pointEntityClick.setTouchType(String.valueOf(motionEvent.getToolType(0)));
        pointEntityClick.setIs_valid_click(z ? "1" : "0");
        if (baseAdUnit != null) {
            pointEntityClick.setLoad_id(baseAdUnit.getLoad_id());
        }
        pointEntityClick.commit();
    }

    public static void a(final BaseAdUnit baseAdUnit, final String str, final PackageInfo packageInfo, final String str2) {
        ThreadPoolFactory.BackgroundThreadPool.getInstance().submit(new Runnable() {
            @Override
            public void run() {
                z.a(str, str2, baseAdUnit, new a() {
                    @Override
                    public void a(Object obj) {
                        Context contextB = com.sigmob.sdk.b.b();
                        if (obj instanceof PointEntitySigmob) {
                            PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                            HashMap map = new HashMap();
                            if (Build.VERSION.SDK_INT >= 26) {
                                try {
                                    map.put(com.sigmob.sdk.base.h.q, contextB.getPackageManager().canRequestPackageInstalls() ? "1" : "0");
                                } catch (Throwable th) {
                                    SigmobLog.e(th.getMessage());
                                }
                            }
                            if (packageInfo != null) {
                                try {
                                    map.put("app_name", contextB.getPackageManager().getApplicationLabel(packageInfo.applicationInfo).toString());
                                } catch (Throwable unused) {
                                }
                                map.put("package_name", packageInfo.packageName);
                                map.put(com.sigmob.sdk.base.h.o, String.valueOf(packageInfo.lastUpdateTime));
                                map.put("app_version", packageInfo.versionName);
                            }
                            pointEntitySigmob.setOptions(map);
                        }
                    }
                });
            }
        });
    }

    public static void a(BaseAdUnit baseAdUnit, String str, final String str2) {
        a(PointCategory.TARGET_URL, (String) null, baseAdUnit, new a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    ((PointEntitySigmob) obj).setFinal_url(str2);
                }
            }
        });
    }

    protected static void a(PointEntitySigmob pointEntitySigmob) {
        WindAdOptions options = WindAds.sharedAds().getOptions();
        String str = "0";
        if (options == null || WindAds.sharedAds().getOptions().getCustomController() == null) {
            pointEntitySigmob.setIs_custom_imei("0");
            pointEntitySigmob.setIs_custom_android_id("0");
        } else {
            WindCustomController customController = options.getCustomController();
            pointEntitySigmob.setIs_custom_imei(customController.isCanUsePhoneState() ? "0" : "1");
            pointEntitySigmob.setIs_custom_android_id(customController.isCanUseAndroidId() ? "0" : "1");
            if (!TextUtils.isEmpty(customController.getDevOaid())) {
                str = "1";
            }
        }
        pointEntitySigmob.setIs_custom_oaid(str);
    }

    public static void a(String str) {
        PointEntitySigmobSuper pointEntitySigmobSuper = new PointEntitySigmobSuper();
        pointEntitySigmobSuper.setAc_type("102");
        pointEntitySigmobSuper.setCategory(str);
        pointEntitySigmobSuper.setSha1(ClientMetadata.getInstance().getApkSha1());
        pointEntitySigmobSuper.setMd5(ClientMetadata.getInstance().getApkMd5());
        pointEntitySigmobSuper.commit();
    }

    public static void a(String str, int i, String str2, BaseAdUnit baseAdUnit) {
        a(str, i, str2, baseAdUnit, (a) null);
    }

    public static void a(String str, int i, String str2, BaseAdUnit baseAdUnit, a aVar) {
        PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError(str, i, str2);
        if (aVar != null) {
            aVar.a(pointEntitySigmobErrorSigmobError);
        }
        a(str, str, baseAdUnit, pointEntitySigmobErrorSigmobError);
        pointEntitySigmobErrorSigmobError.commit();
    }

    public static void a(String str, a aVar) {
        y yVar = new y();
        yVar.setAc_type("1");
        yVar.setCategory(str);
        yVar.setAppinfo_switch(!com.sigmob.sdk.base.i.a().H() ? "1,1" : "0,0");
        int i = 1;
        int i2 = 0;
        int i3 = ClientMetadata.getInstance().getLocation() != null ? 1 : 0;
        if (com.sigmob.sdk.base.i.a().G()) {
            i = 0;
        } else {
            i2 = i3;
        }
        yVar.setLocation_switch(i + Constants.ACCEPT_TIME_SEPARATOR_SP + i2);
        if (aVar != null) {
            aVar.a(yVar);
        }
        WindAdOptions options = WindAds.sharedAds().getOptions();
        if (options == null || WindAds.sharedAds().getOptions().getCustomController() == null) {
            yVar.a("0");
            yVar.b("0");
            yVar.c("0");
        } else {
            WindCustomController customController = options.getCustomController();
            yVar.a(customController.isCanUsePhoneState() ? "0" : "1");
            yVar.b(customController.isCanUseAndroidId() ? "0" : "1");
            yVar.c(TextUtils.isEmpty(customController.getDevOaid()) ? "0" : "1");
        }
        yVar.commit();
    }

    public static void a(String str, BaseAdUnit baseAdUnit, LoadAdRequest loadAdRequest, a aVar) {
        PointEntitySigmob pointEntitySigmob = new PointEntitySigmob();
        pointEntitySigmob.setAc_type(str);
        if (aVar != null) {
            aVar.a(pointEntitySigmob);
        }
        a(pointEntitySigmob.getCategory(), pointEntitySigmob.getSub_category(), baseAdUnit, pointEntitySigmob);
        if (loadAdRequest != null) {
            pointEntitySigmob.setLoad_id(loadAdRequest.getLoadId());
            pointEntitySigmob.setAdtype(String.valueOf(loadAdRequest.getAdType()));
            pointEntitySigmob.setScene_id(loadAdRequest.getAdSceneId());
            pointEntitySigmob.setScene_desc(loadAdRequest.getAdSceneDesc());
            pointEntitySigmob.setPlacement_id(loadAdRequest.getPlacementId());
        }
        pointEntitySigmob.commit();
    }

    public static void a(String str, BaseAdUnit baseAdUnit, String str2, String str3, String str4) {
        a(null, str, baseAdUnit, str2, str3, str4, 0L);
    }

    public static void a(String str, WindAdError windAdError, BaseAdUnit baseAdUnit) {
        a(str, null, windAdError.getErrorCode(), windAdError.getMessage(), null, null, baseAdUnit, null);
    }

    public static void a(String str, WindAdError windAdError, BaseAdUnit baseAdUnit, a aVar) {
        PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError(str, windAdError.getErrorCode(), windAdError.getMessage());
        a(str, str, baseAdUnit, pointEntitySigmobErrorSigmobError);
        if (aVar != null) {
            aVar.a(pointEntitySigmobErrorSigmobError);
        }
        pointEntitySigmobErrorSigmobError.commit();
    }

    public static void a(String str, WindAdError windAdError, BaseAdUnit baseAdUnit, LoadAdRequest loadAdRequest) {
        a(str, null, windAdError.getErrorCode(), windAdError.getMessage(), null, loadAdRequest, baseAdUnit, null);
    }

    public static void a(String str, WindAdError windAdError, WindAdRequest windAdRequest) {
        a(str, null, windAdError.getErrorCode(), windAdError.getMessage(), windAdRequest, null, null, null);
    }

    public static void a(String str, String str2, int i, String str3, LoadAdRequest loadAdRequest) {
        a(str, str2, i, str3, null, loadAdRequest, null, null);
    }

    public static void a(String str, String str2, int i, String str3, WindAdRequest windAdRequest, LoadAdRequest loadAdRequest, BaseAdUnit baseAdUnit, a aVar) {
        PointEntitySigmobError pointEntitySigmobErrorSigmobError = PointEntitySigmobError.SigmobError(str, i, str3);
        pointEntitySigmobErrorSigmobError.setSub_category(str2);
        a(str, str, pointEntitySigmobErrorSigmobError, windAdRequest);
        a(str, str, pointEntitySigmobErrorSigmobError, loadAdRequest);
        a(str, str, baseAdUnit, pointEntitySigmobErrorSigmobError);
        if (aVar != null) {
            aVar.a(pointEntitySigmobErrorSigmobError);
        }
        pointEntitySigmobErrorSigmobError.commit();
    }

    public static void a(String str, String str2, BaseAdUnit baseAdUnit) {
        a(str, str2, baseAdUnit, (a) null);
    }

    public static void a(String str, String str2, BaseAdUnit baseAdUnit, a aVar) {
        a(str, str2, baseAdUnit, (WindAdRequest) null, (LoadAdRequest) null, aVar);
    }

    public static void a(String str, String str2, BaseAdUnit baseAdUnit, LoadAdRequest loadAdRequest, a aVar) {
        a(str, str2, baseAdUnit, (WindAdRequest) null, loadAdRequest, aVar);
    }

    protected static void a(String str, String str2, BaseAdUnit baseAdUnit, PointEntitySigmob pointEntitySigmob) {
        if (baseAdUnit != null) {
            try {
                pointEntitySigmob.setAdtype(String.valueOf(baseAdUnit.getAd_type()));
                pointEntitySigmob.setCampaign_id(baseAdUnit.getCamp_id());
                pointEntitySigmob.setCreative_id(baseAdUnit.getCrid());
                pointEntitySigmob.setRequest_id(baseAdUnit.getRequestId());
                pointEntitySigmob.setPlacement_id(baseAdUnit.getadslot_id());
                pointEntitySigmob.setLoad_id(baseAdUnit.getLoad_id());
                pointEntitySigmob.setVid(baseAdUnit.getVid());
                pointEntitySigmob.setScene_id(baseAdUnit.getAd_scene_id());
                pointEntitySigmob.setScene_desc(baseAdUnit.getAd_scene_desc());
                pointEntitySigmob.setPlay_mode(String.valueOf(baseAdUnit.getPlayMode()));
                pointEntitySigmob.setCreative_type(String.valueOf(baseAdUnit.getCreativeType()));
                pointEntitySigmob.setBid_token(baseAdUnit.getBid_token());
                pointEntitySigmob.setPrice(baseAdUnit.getAd().settlement_price_enc);
                if (!TextUtils.isEmpty(baseAdUnit.getAd().product_id)) {
                    pointEntitySigmob.setProduct_id(baseAdUnit.getAd().product_id);
                }
                if (baseAdUnit.getMaterial() != null) {
                    pointEntitySigmob.setTemplate_type(baseAdUnit.getMaterial().template_type.intValue());
                }
                if (TextUtils.isEmpty(pointEntitySigmob.getTarget_url())) {
                    pointEntitySigmob.setTarget_url(baseAdUnit.getLanding_page());
                }
                if (baseAdUnit.getWXProgramRes() != null) {
                    if (!TextUtils.isEmpty(baseAdUnit.getWXProgramRes().wx_app_path)) {
                        pointEntitySigmob.setWx_app_path(URLEncoder.encode(baseAdUnit.getWXProgramRes().wx_app_path, "UTF-8"));
                    }
                    if (!TextUtils.isEmpty(baseAdUnit.getWXProgramRes().wx_app_username)) {
                        pointEntitySigmob.setWx_app_username(baseAdUnit.getWXProgramRes().wx_app_username);
                    }
                }
                pointEntitySigmob.setAd_source_channel(baseAdUnit.getAd_source_channel());
                if (!TextUtils.isEmpty(pointEntitySigmob.getShow_type()) || TextUtils.isEmpty(str)) {
                    return;
                }
                if ((str.equals("request") || str.equals(PointCategory.READY) || str.equals("start") || str.equals("endcard") || (!TextUtils.isEmpty(str2) && str2.equals("click"))) && baseAdUnit.getAd_type() == 4) {
                    pointEntitySigmob.setShow_type(baseAdUnit.isHalfInterstitial() ? "2" : "1");
                }
            } catch (Throwable unused) {
            }
        }
    }

    public static void a(String str, String str2, BaseAdUnit baseAdUnit, WindAdRequest windAdRequest, a aVar) {
        a(str, str2, baseAdUnit, windAdRequest, (LoadAdRequest) null, aVar);
    }

    public static void a(String str, String str2, BaseAdUnit baseAdUnit, WindAdRequest windAdRequest, LoadAdRequest loadAdRequest, final a aVar) {
        ae.a(str).d(str2).a(baseAdUnit).a(windAdRequest).a(loadAdRequest).a(new a() {
            @Override
            public void a(Object obj) {
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a(obj);
                }
            }
        }).a();
    }

    public static void a(String str, String str2, LoadAdRequest loadAdRequest) {
        a(str, str2, (BaseAdUnit) null, (WindAdRequest) null, loadAdRequest, (a) null);
    }

    protected static void a(String str, String str2, PointEntitySigmob pointEntitySigmob, LoadAdRequest loadAdRequest) {
        if (pointEntitySigmob == null || loadAdRequest == null) {
            return;
        }
        pointEntitySigmob.setPlacement_id(loadAdRequest.getPlacementId());
        if (!TextUtils.isEmpty(loadAdRequest.getBidToken())) {
            pointEntitySigmob.setBid_token(loadAdRequest.getBidToken());
        }
        if (!TextUtils.isEmpty(loadAdRequest.getLoadId())) {
            pointEntitySigmob.setLoad_id(loadAdRequest.getLoadId());
        }
        pointEntitySigmob.setAdtype(String.valueOf(loadAdRequest.getAdType()));
        if (!TextUtils.isEmpty(loadAdRequest.getRequestId())) {
            pointEntitySigmob.setRequest_id(loadAdRequest.getRequestId());
        }
        if (loadAdRequest.getOptions() != null) {
            pointEntitySigmob.setExtinfo(new JSONObject((Map<String, Object>) loadAdRequest.getOptions()).toString());
        }
        if ((!(TextUtils.isEmpty(pointEntitySigmob.getShow_type()) && !TextUtils.isEmpty(str) && (str.equals("request") || str.equals(PointCategory.READY) || str.equals("start") || str.equals("endcard"))) && (TextUtils.isEmpty(str2) || !str2.equals("click"))) || loadAdRequest.getAdType() != 4) {
            return;
        }
        pointEntitySigmob.setShow_type(loadAdRequest.isHalfInterstitial() ? "2" : "1");
    }

    protected static void a(String str, String str2, PointEntitySigmob pointEntitySigmob, WindAdRequest windAdRequest) {
        if (pointEntitySigmob == null || windAdRequest == null) {
            return;
        }
        pointEntitySigmob.setPlacement_id(windAdRequest.getPlacementId());
        pointEntitySigmob.setLoad_id(windAdRequest.getLoadId());
        pointEntitySigmob.setAdtype(String.valueOf(windAdRequest.getAdType()));
        if (windAdRequest.hasOptions()) {
            try {
                pointEntitySigmob.setExtinfo(new JSONObject(windAdRequest.getOptions()).toString());
            } catch (Throwable unused) {
            }
        }
        if ((!(TextUtils.isEmpty(pointEntitySigmob.getShow_type()) && !TextUtils.isEmpty(str) && (str.equals("request") || str.equals(PointCategory.READY) || str.equals("start") || str.equals("endcard"))) && (TextUtils.isEmpty(str2) || !str2.equals("click"))) || windAdRequest.getAdType() != 4) {
            return;
        }
        pointEntitySigmob.setShow_type(windAdRequest.isHalfInterstitial() ? "2" : "1");
    }

    public static void a(String str, String str2, WindAdRequest windAdRequest, a aVar) {
        PointEntitySigmobRequest pointEntitySigmobRequest = new PointEntitySigmobRequest();
        pointEntitySigmobRequest.setAc_type("5");
        pointEntitySigmobRequest.setCategory(str);
        pointEntitySigmobRequest.setSub_category(str2);
        a(str, str, pointEntitySigmobRequest, windAdRequest);
        if (aVar != null) {
            aVar.a(pointEntitySigmobRequest);
        }
        a(pointEntitySigmobRequest);
        pointEntitySigmobRequest.commit();
    }

    public static void b(String str, String str2, BaseAdUnit baseAdUnit) {
        a(str, str2, baseAdUnit, (a) null);
    }
}
