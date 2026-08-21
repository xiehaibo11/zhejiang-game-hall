package com.mbridge.msdk.video.js.bridge;

import android.content.Context;
import android.content.SharedPreferences;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.Base64;
import android.webkit.WebView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.d;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.a;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.video.bt.module.a.b;
import com.mbridge.msdk.video.js.a.j;
import com.mbridge.msdk.video.js.c;
import com.mbridge.msdk.video.js.factory.IJSFactory;
import com.meizu.cloud.pushsdk.notification.model.AdvertisementOption;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.d.f;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class BaseVideoBridge extends AbsMbridgeDownload implements IVideoBridge {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected IJSFactory f4204a;
    private FastKV b;

    private String a(int i) {
        switch (i) {
            case 1:
                return TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO;
            case 2:
                return "unit_id";
            case 3:
                return "appSetting";
            case 4:
                return "unitSetting";
            case 5:
                return "device";
            case 6:
                return "sdkSetting";
            default:
                return "";
        }
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.j
    public void initialize(Object obj, WindVaneWebView windVaneWebView) {
        super.initialize(obj, windVaneWebView);
        if (obj instanceof IJSFactory) {
            this.f4204a = (IJSFactory) obj;
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void init(Object obj, String str) {
        z.b("JS-Video-Brigde", PointCategory.INIT);
        try {
            int i = 1;
            if (this.f4204a != null) {
                String strD = this.f4204a.getJSCommon().d();
                if (!TextUtils.isEmpty(strD)) {
                    strD = Base64.encodeToString(strD.getBytes(), 2);
                }
                h.a().a(obj, strD);
                this.f4204a.getJSCommon().b(true);
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("showTransparent");
                int iOptInt2 = jSONObject.optInt("mute");
                int iOptInt3 = jSONObject.optInt("closeType");
                int iOptInt4 = jSONObject.optInt("orientationType");
                int iOptInt5 = jSONObject.optInt("h5cbp");
                int iOptInt6 = jSONObject.optInt("webfront");
                int iOptInt7 = jSONObject.optInt("showAlertRole");
                this.f4204a.getJSCommon().a(iOptInt == 1);
                this.f4204a.getJSCommon().b(iOptInt2);
                this.f4204a.getJSCommon().c(iOptInt3);
                this.f4204a.getJSCommon().d(iOptInt4);
                this.f4204a.getJSCommon().e(iOptInt5);
                this.f4204a.getJSCommon().f(iOptInt6);
                c jSCommon = this.f4204a.getJSCommon();
                if (iOptInt7 != 0) {
                    i = iOptInt7;
                }
                jSCommon.i(i);
                return;
            }
            if (obj != null) {
                a aVar = (a) obj;
                if (aVar.f3733a.getObject() instanceof j) {
                    j jVar = (j) aVar.f3733a.getObject();
                    String strD2 = jVar.d();
                    if (!TextUtils.isEmpty(str)) {
                        JSONObject jSONObject2 = new JSONObject(str);
                        int iOptInt8 = jSONObject2.optInt("showTransparent");
                        int iOptInt9 = jSONObject2.optInt("mute");
                        int iOptInt10 = jSONObject2.optInt("closeType");
                        int iOptInt11 = jSONObject2.optInt("orientationType");
                        int iOptInt12 = jSONObject2.optInt("h5cbp");
                        int iOptInt13 = jSONObject2.optInt("webfront");
                        int iOptInt14 = jSONObject2.optInt("showAlertRole");
                        jVar.a(iOptInt8 == 1);
                        jVar.b(iOptInt9);
                        jVar.c(iOptInt10);
                        jVar.d(iOptInt11);
                        jVar.e(iOptInt12);
                        jVar.f(iOptInt13);
                        if (iOptInt14 != 0) {
                            i = iOptInt14;
                        }
                        jVar.i(i);
                        z.b("JS-Video-Brigde", "init jsCommon.setIsShowingTransparent = " + iOptInt8);
                    }
                    h.a().a(obj, Base64.encodeToString(strD2.getBytes(), 2));
                }
            }
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "init error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void click(final Object obj, String str) {
        int iOptInt;
        String strOptString;
        j jVar;
        Context context;
        z.b("JS-Video-Brigde", "click");
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObject = new JSONObject(str);
                iOptInt = jSONObject.optInt("type");
                strOptString = jSONObject.optString(AdvertisementOption.PRIORITY_VALID_TIME);
            } catch (JSONException e) {
                e.printStackTrace();
                iOptInt = 1;
                strOptString = "";
            }
            b bVar = new b() { // from class: com.mbridge.msdk.video.js.bridge.BaseVideoBridge.1
                @Override // com.mbridge.msdk.video.bt.module.a.b
                public final void a() {
                    Object obj2 = obj;
                    if (obj2 != null) {
                        z.a("========", "============onInstallAlertShow");
                        h.a().a((WebView) ((a) obj2).f3733a, "onInstallAlertShow", "");
                        BaseVideoBridge.this.f4204a.getJSVideoModule().videoOperate(5);
                    }
                }

                @Override // com.mbridge.msdk.video.bt.module.a.b
                public final void b() {
                    Object obj2 = obj;
                    if (obj2 != null) {
                        z.a("========", "============onInstallAlertHide");
                        h.a().a((WebView) ((a) obj2).f3733a, "onInstallAlertHide", "");
                        BaseVideoBridge.this.f4204a.getJSVideoModule().videoOperate(4);
                    }
                }
            };
            if (this.f4204a != null) {
                if (obj != null) {
                    a aVar = (a) obj;
                    if (aVar.f3733a != null && aVar.f3733a.getContext() != null && (context = aVar.f3733a.getContext()) != null && context != context.getApplicationContext()) {
                        this.f4204a.getJSCommon().a(context);
                    }
                }
                this.f4204a.getJSCommon().a(bVar);
                this.f4204a.getJSCommon().click(iOptInt, strOptString);
                return;
            }
            if (obj != null) {
                a aVar2 = (a) obj;
                if (!(aVar2.f3733a.getObject() instanceof j) || (jVar = (j) aVar2.f3733a.getObject()) == null) {
                    return;
                }
                Context context2 = aVar2.f3733a.getContext();
                if (context2 != null && context2 != context2.getApplicationContext()) {
                    jVar.a(context2);
                }
                jVar.a(bVar);
                jVar.click(iOptInt, strOptString);
            }
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "click error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void statistics(Object obj, String str) {
        z.b("JS-Video-Brigde", "statistics,params:" + str);
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(str);
            this.f4204a.getJSCommon().a(jSONObject.optInt("type"), jSONObject.optString("data"));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "statistics error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void triggerCloseBtn(Object obj, String str) {
        z.b("JS-Video-Brigde", "triggerCloseBtn");
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str) || !new JSONObject(str).optString(CallMraidJS.b).equals("click")) {
                return;
            }
            this.f4204a.getJSVideoModule().closeVideoOperate(1, -1);
            h.a().a(obj, b(0));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "triggerCloseBtn error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void showVideoLocation(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(str);
            int iOptInt = jSONObject.optInt("margin_top", 0);
            int iOptInt2 = jSONObject.optInt("margin_left", 0);
            int iOptInt3 = jSONObject.optInt("view_width", 0);
            int iOptInt4 = jSONObject.optInt("view_height", 0);
            int iOptInt5 = jSONObject.optInt("radius", 0);
            int iOptInt6 = jSONObject.optInt("border_top", 0);
            int iOptInt7 = jSONObject.optInt("border_left", 0);
            int iOptInt8 = jSONObject.optInt("border_width", 0);
            int iOptInt9 = jSONObject.optInt("border_height", 0);
            z.b("JS-Video-Brigde", "showVideoLocation,margin_top:" + iOptInt + ",marginLeft:" + iOptInt2 + ",viewWidth:" + iOptInt3 + ",viewHeight:" + iOptInt4 + ",radius:" + iOptInt5 + ",borderTop: " + iOptInt6 + ",borderLeft: " + iOptInt7 + ",borderWidth: " + iOptInt8 + ",borderHeight: " + iOptInt9);
            this.f4204a.getJSVideoModule().showVideoLocation(iOptInt, iOptInt2, iOptInt3, iOptInt4, iOptInt5, iOptInt6, iOptInt7, iOptInt8, iOptInt9);
            this.f4204a.getJSCommon().g();
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "showVideoLocation error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void soundOperate(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(str);
            int iOptInt = jSONObject.optInt("mute");
            int iOptInt2 = jSONObject.optInt("view_visible");
            String strOptString = jSONObject.optString(AdvertisementOption.PRIORITY_VALID_TIME, "");
            z.b("JS-Video-Brigde", "soundOperate,mute:" + iOptInt + ",viewVisible:" + iOptInt2 + ",pt:" + strOptString);
            if (TextUtils.isEmpty(strOptString)) {
                this.f4204a.getJSVideoModule().soundOperate(iOptInt, iOptInt2);
            } else {
                this.f4204a.getJSVideoModule().soundOperate(iOptInt, iOptInt2, strOptString);
            }
            h.a().a(obj, b(0));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "soundOperate error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void videoOperate(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt("pause_or_resume");
            z.b("JS-Video-Brigde", "videoOperate,pauseOrResume:" + iOptInt);
            this.f4204a.getJSVideoModule().videoOperate(iOptInt);
            h.a().a(obj, b(0));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "videoOperate error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void closeVideoOperte(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(str);
            int iOptInt = jSONObject.optInt("close");
            int iOptInt2 = jSONObject.optInt("view_visible");
            z.b("JS-Video-Brigde", "closeVideoOperte,close:" + iOptInt + ",viewVisible:" + iOptInt2);
            this.f4204a.getJSVideoModule().closeVideoOperate(iOptInt, iOptInt2);
            h.a().a(obj, b(0));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "closeOperte error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void progressOperate(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(str);
            int iOptInt = jSONObject.optInt(NotificationCompat.CATEGORY_PROGRESS);
            int iOptInt2 = jSONObject.optInt("view_visible");
            z.b("JS-Video-Brigde", "progressOperate,progress:" + iOptInt + ",viewVisible:" + iOptInt2);
            this.f4204a.getJSVideoModule().progressOperate(iOptInt, iOptInt2);
            h.a().a(obj, b(0));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "progressOperate error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void progressBarOperate(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.f4204a.getJSVideoModule().progressBarOperate(new JSONObject(str).optInt("view_visible"));
            h.a().a(obj, b(0));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "progressOperate error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getCurrentProgress(Object obj, String str) {
        try {
            if (this.f4204a != null) {
                String currentProgress = this.f4204a.getJSVideoModule().getCurrentProgress();
                z.b("JS-Video-Brigde", "getCurrentProgress:" + currentProgress);
                if (!TextUtils.isEmpty(currentProgress)) {
                    currentProgress = Base64.encodeToString(currentProgress.getBytes(), 2);
                }
                h.a().a(obj, currentProgress);
            }
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "getCurrentProgress error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void showVideoClickView(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt("type");
            z.b("JS-Video-Brigde", "showVideoClickView,type:" + iOptInt);
            this.f4204a.getJSContainerModule().showVideoClickView(iOptInt);
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "showVideoClickView error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void setScaleFitXY(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt("fitxy");
            z.b("JS-Video-Brigde", "setScaleFitXY,type:" + iOptInt);
            this.f4204a.getJSVideoModule().setScaleFitXY(iOptInt);
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "showVideoClickView error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void notifyCloseBtn(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt(CallMraidJS.b);
            z.b("JS-Video-Brigde", "notifyCloseBtn,result:" + iOptInt);
            this.f4204a.getJSVideoModule().notifyCloseBtn(iOptInt);
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "notifyCloseBtn", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void openURL(Object obj, String str) {
        z.d("JS-Video-Brigde", "openURL:" + str);
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            int iOptInt = jSONObject.optInt("type");
            if (iOptInt == 1) {
                com.mbridge.msdk.click.c.a(this.mContext, strOptString);
            } else if (iOptInt == 2) {
                com.mbridge.msdk.click.c.b(this.mContext, strOptString);
            }
        } catch (JSONException e) {
            z.d("JS-Video-Brigde", e.getMessage());
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void cai(Object obj, String str) {
        z.a("JS-Video-Brigde", "cai:" + str);
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString(DBDefinition.PACKAGE_NAME);
            if (TextUtils.isEmpty(strOptString)) {
                com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "packageName is empty");
            }
            int i = ae.c(com.mbridge.msdk.foundation.controller.a.f().j(), strOptString) ? 1 : 2;
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", com.mbridge.msdk.mbjscommon.bridge.b.b);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("result", i);
                jSONObject.put("data", jSONObject2);
                h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception e) {
                com.mbridge.msdk.mbjscommon.bridge.b.a(obj, e.getMessage());
                z.a("JS-Video-Brigde", e.getMessage());
            }
        } catch (JSONException e2) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "exception: " + e2.getLocalizedMessage());
            z.c("JS-Video-Brigde", "cai", e2);
        } catch (Throwable th) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "exception: " + th.getLocalizedMessage());
            z.c("JS-Video-Brigde", "cai", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void gial(Object obj, String str) {
        z.a("JS-Video-Brigde", "gial:" + str);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", com.mbridge.msdk.mbjscommon.bridge.b.b);
            JSONObject jSONObject2 = new JSONObject();
            List<String> list = com.mbridge.msdk.foundation.controller.a.c;
            JSONArray jSONArray = new JSONArray();
            if (list != null && list.size() > 0) {
                int size = list.size();
                for (int i = 0; i < size; i++) {
                    jSONArray.put(list.get(i));
                }
            }
            jSONObject2.put("packageNameList", jSONArray);
            jSONObject.put("data", jSONObject2);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, e.getMessage());
            z.a("JS-Video-Brigde", e.getMessage());
        } catch (Throwable th) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, th.getMessage());
            z.a("JS-Video-Brigde", th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void showAlertView(Object obj, String str) {
        z.b("JS-Video-Brigde", "showAlertView");
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.f4204a.getJSVideoModule().showIVRewardAlertView(str);
            h.a().a(obj, "showAlertView", "");
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "showAlertView", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void toggleCloseBtn(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt(CallMraidJS.b);
            z.b("JS-Video-Brigde", "toggleCloseBtn,result:" + iOptInt);
            int i = 2;
            if (iOptInt != 1) {
                i = iOptInt == 2 ? 1 : 0;
            }
            this.f4204a.getJSVideoModule().closeVideoOperate(0, i);
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "toggleCloseBtn", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void handlerH5Exception(Object obj, String str) {
        try {
            if (this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(str);
            z.b("JS-Video-Brigde", "handlerH5Exception,params:" + str);
            this.f4204a.getJSCommon().handlerH5Exception(jSONObject.optInt("code", com.tkay.expressad.video.bt.a.c.f7167a), jSONObject.optString("message", "h5 error"));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "handlerH5Exception", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void isSystemResume(Object obj, String str) {
        try {
            if (this.f4204a != null) {
                z.b("JS-Video-Brigde", "isSystemResume,params:" + str);
                h.a().a(obj, b(this.f4204a.getActivityProxy().h()));
            }
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "isSystemResume", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void readyStatus(Object obj, String str) {
        if (obj != null) {
            try {
                a aVar = (a) obj;
                int iOptInt = new JSONObject(str).optInt("isReady", 1);
                if (aVar.f3733a.getObject() instanceof j) {
                    ((j) aVar.f3733a.getObject()).j(iOptInt);
                }
                if (aVar.f3733a != null) {
                    WindVaneWebView windVaneWebView = aVar.f3733a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        windVaneWebView.getWebViewListener().a(windVaneWebView, iOptInt);
                    }
                }
            } catch (Throwable th) {
                z.c("JS-Video-Brigde", "readyStatus", th);
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playVideoFinishOperate(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str) || this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt("type");
            z.b("JS-Video-Brigde", "playVideoFinishOperate,type: " + iOptInt);
            this.f4204a.getJSCommon().g(iOptInt);
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "playVideoFinishOperate error", th);
        }
    }

    private String b(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            z.d("JS-Video-Brigde", "code to string is error");
            return "";
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void reactDeveloper(Object obj, String str) {
        z.a("JS-Video-Brigde", "reactDeveloper");
        try {
            if (this.f4204a != null && !TextUtils.isEmpty(str)) {
                this.f4204a.getJSBTModule().reactDeveloper(obj, str);
            } else {
                h.a().b(obj, b(1));
            }
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "reactDeveloper error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void reportUrls(Object obj, String str) {
        z.a("JS-Video-Brigde", "reportUrls");
        try {
            if (!TextUtils.isEmpty(str)) {
                com.mbridge.msdk.video.bt.a.c.a().b(obj, str);
            } else {
                h.a().b(obj, b(1));
            }
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "reportUrls error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getFileInfo(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().O(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "getFileInfo error", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getSDKInfo(Object obj, String str) {
        z.b("JS-Video-Brigde", "getSDKInfo");
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONArray jSONArray = new JSONObject(str).getJSONArray("type");
                JSONObject jSONObject = new JSONObject();
                int i = 0;
                if (this.f4204a != null) {
                    while (i < jSONArray.length()) {
                        int i2 = jSONArray.getInt(i);
                        jSONObject.put(a(i2), this.f4204a.getJSCommon().h(i2));
                        i++;
                    }
                } else if (obj != null) {
                    while (i < jSONArray.length()) {
                        int i3 = jSONArray.getInt(i);
                        a aVar = (a) obj;
                        if (aVar.f3733a.getObject() instanceof j) {
                            jSONObject.put(a(i3), ((j) aVar.f3733a.getObject()).h(i3));
                        }
                        i++;
                    }
                }
                h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                return;
            }
            h.a().b(obj, "params is null");
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "getSDKInfo error", th);
            h.a().b(obj, f.i);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void loadads(Object obj, String str) {
        int i;
        int iOptInt;
        String str2;
        String str3;
        z.b("JS-Video-Brigde", "loadads");
        try {
            if (TextUtils.isEmpty(str)) {
                i = 1;
                iOptInt = 1;
                str2 = "";
                str3 = str2;
            } else {
                JSONObject jSONObject = new JSONObject(str);
                String strOptString = jSONObject.optString(MBridgeConstans.PLACEMENT_ID);
                String strOptString2 = jSONObject.optString("unitId");
                int iOptInt2 = jSONObject.optInt("type", 1);
                if (iOptInt2 > 2) {
                    iOptInt2 = 1;
                }
                str3 = strOptString2;
                iOptInt = jSONObject.optInt("adtype", 1);
                i = iOptInt2;
                str2 = strOptString;
            }
            if (TextUtils.isEmpty(str3)) {
                h.a().a(obj, b(1));
                return;
            }
            if (obj != null) {
                a aVar = (a) obj;
                if (aVar.f3733a instanceof WindVaneWebView) {
                    WindVaneWebView windVaneWebView = aVar.f3733a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        ((com.mbridge.msdk.mbjscommon.c.a) windVaneWebView.getWebViewListener()).a(windVaneWebView, str2, str3, i, iOptInt);
                    }
                }
            }
            h.a().a(obj, b(0));
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "loadads error", th);
            h.a().a(obj, b(1));
        }
    }

    private void a(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", 1);
                jSONObject.put("message", "params is null");
                h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            }
        } catch (Exception e) {
            z.a("JS-Video-Brigde", e.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void createWebview(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().b(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "createWebview error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void createView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().a(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "createWebview error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void createPlayerView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().c(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "createPlayerView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void createSubPlayTemplateView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().d(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "createSubPlayTemplateView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void destroyComponent(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().e(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "destroyComponent error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getComponentOptions(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().f(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "getComponentOptions error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void setViewRect(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().g(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "setViewRect error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void removeFromSuperView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().h(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "removeFromSuperView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void appendSubView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().i(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "appendSubView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void appendViewTo(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().j(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "appendViewTo error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void onlyAppendSubView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().k(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "appendSubView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void onlyAppendViewTo(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().l(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "appendViewTo error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void bringViewToFront(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().m(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "bringViewToFront error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void hideView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().n(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "hideView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void showView(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().o(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "showView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void setViewBgColor(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().p(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "setViewBgColor error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void setViewAlpha(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().q(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "setViewAlpha error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void setViewScale(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().r(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "setViewScale error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void insertViewAbove(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().a(obj, new JSONObject(str), true);
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "insertViewAbove error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void insertViewBelow(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().b(obj, new JSONObject(str), true);
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "insertViewBelow error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void onlyInsertViewAbove(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().s(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "insertViewAbove error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void onlyInsertViewBelow(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().t(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "insertViewBelow error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void webviewLoad(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().u(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "webviewLoad error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void webviewReload(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().v(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "webviewReload error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void webviewGoBack(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().w(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "webviewGoBack error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void webviewGoForward(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().x(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "webviewGoForward error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerPlay(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().y(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerPlay error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerPause(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().z(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerPause error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerResume(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().A(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerResume error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerStop(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().B(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerStop error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerUpdateFrame(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().C(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerUpdateFrame error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerMute(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().D(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerMute error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerUnmute(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().E(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerUnmute error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerGetMuteState(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().F(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerGetMuteState error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerSetSource(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().G(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerSetSource error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void playerSetRenderType(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().H(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "playerSetRenderType error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void preloadSubPlayTemplateView(Object obj, String str) {
        a(obj, str);
        try {
            if (this.f4204a != null) {
                com.mbridge.msdk.video.bt.a.c.a().I(obj, new JSONObject(str));
            } else {
                a aVar = (a) obj;
                if (aVar.f3733a instanceof WindVaneWebView) {
                    WindVaneWebView windVaneWebView = aVar.f3733a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        ((com.mbridge.msdk.mbjscommon.c.a) windVaneWebView.getWebViewListener()).a(obj, str);
                        z.a("JS-Video-Brigde", "preloadSubPlayTemplateView: RVWebViewListener");
                    } else {
                        z.a("JS-Video-Brigde", "preloadSubPlayTemplateView: failed");
                    }
                }
            }
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "preloadSubPlayTemplateView error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void closeAd(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().J(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "closeAd error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void broadcast(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().K(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "broadcast error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void closeWeb(Object obj, String str) {
        z.d("JS-Video-Brigde", "type" + str);
        try {
            if (TextUtils.isEmpty(str) || this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt("status");
            this.f4204a.getJSContainerModule().hideAlertWebview();
            this.f4204a.getJSVideoModule().hideAlertView(iOptInt);
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "closeWeb", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void ivRewardAdsWithoutVideo(Object obj, String str) {
        z.d("JS-Video-Brigde", "ivRewardAdsWithoutVideo ： params" + str);
        try {
            if (TextUtils.isEmpty(str) || this.f4204a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.f4204a.getJSContainerModule().ivRewardAdsWithoutVideo(str);
        } catch (Throwable th) {
            z.c("JS-Video-Brigde", "ivRewardAdsWithoutVideo", th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void setSubPlayTemplateInfo(Object obj, String str) {
        z.d("JS-Video-Brigde", "setSubPlayTemplateInfo : " + str);
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().L(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "setSubPlayTemplateInfo error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void webviewFireEvent(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().M(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "setSubPlayTemplateInfo error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void increaseOfferFrequence(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().N(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "increaseOfferFrequence error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void handleNativeObject(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.b.a().a(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "handleNativeObject error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void loadingResourceStatus(Object obj, String str) {
        a(obj, str);
        if (obj != null) {
            try {
                a aVar = (a) obj;
                int iOptInt = new JSONObject(str).optInt("isReady", 1);
                if (aVar.f3733a != null) {
                    WindVaneWebView windVaneWebView = aVar.f3733a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        windVaneWebView.getWebViewListener().c(windVaneWebView, iOptInt);
                    }
                }
            } catch (Throwable th) {
                z.d("JS-Video-Brigde", "loadingResourceStatus error " + th);
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void createNativeEC(Object obj, String str) {
        a(obj, str);
        try {
            com.mbridge.msdk.video.bt.a.c.a().P(obj, new JSONObject(str));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "createNativeEC error " + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void setCacheItem(Object obj, String str) {
        boolean z;
        if (com.mbridge.msdk.foundation.controller.b.a().d() && this.b == null) {
            try {
                this.b = new FastKV.Builder(e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "MBridgeH5CacheSP").build();
            } catch (Exception unused) {
                this.b = null;
            }
        }
        String str2 = "Save Success";
        if (this.b != null) {
            try {
                if (!TextUtils.isEmpty(str)) {
                    JSONObject jSONObject = new JSONObject(str);
                    String string = jSONObject.getString("key");
                    String string2 = jSONObject.getString("value");
                    if (!TextUtils.isEmpty(string) && !TextUtils.isEmpty(string2)) {
                        try {
                            this.b.putString(string, string2);
                        } catch (Exception unused2) {
                        }
                    }
                    z = true;
                }
                z = false;
                str2 = "";
            } catch (Throwable th) {
                z.d("JS-Video-Brigde", "setCacheItem error " + th);
                str2 = "Save Error, reason is : " + th.getMessage();
                z = false;
            }
        } else {
            try {
                SharedPreferences sharedPreferences = com.mbridge.msdk.foundation.controller.a.f().j().getSharedPreferences("MBridgeH5CacheSP", 0);
                if (!TextUtils.isEmpty(str)) {
                    JSONObject jSONObject2 = new JSONObject(str);
                    String string3 = jSONObject2.getString("key");
                    String string4 = jSONObject2.getString("value");
                    if (!TextUtils.isEmpty(string3) && !TextUtils.isEmpty(string4)) {
                        sharedPreferences.edit().putString(string3, string4).apply();
                    }
                    z = true;
                }
                z = false;
                str2 = "";
            } catch (Throwable th2) {
                z.d("JS-Video-Brigde", "setCacheItem error " + th2);
                str2 = "Save Error, reason is : " + th2.getMessage();
                z = false;
            }
        }
        try {
            JSONObject jSONObject3 = new JSONObject();
            jSONObject3.put("code", z ? 0 : 1);
            jSONObject3.put("message", str2);
            if (obj != null && z) {
                h.a().a(obj, Base64.encodeToString(jSONObject3.toString().getBytes(), 2));
            } else {
                h.a().b(obj, Base64.encodeToString(jSONObject3.toString().getBytes(), 2));
            }
        } catch (Throwable unused3) {
            z.d("JS-Video-Brigde", "setCacheItem error ");
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void removeCacheItem(Object obj, String str) {
        boolean z;
        if (com.mbridge.msdk.foundation.controller.b.a().d() && this.b == null) {
            try {
                this.b = new FastKV.Builder(e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "MBridgeH5CacheSP").build();
            } catch (Exception unused) {
                this.b = null;
            }
        }
        String str2 = "Delete Success";
        if (this.b != null) {
            try {
                if (!TextUtils.isEmpty(str)) {
                    String string = new JSONObject(str).getString("key");
                    if (!TextUtils.isEmpty(string)) {
                        this.b.remove(string);
                    }
                    z = true;
                }
                z = false;
                str2 = "";
            } catch (Throwable th) {
                z.d("JS-Video-Brigde", "removeCacheItem error " + th);
                str2 = "Delete Error, reason is : " + th.getMessage();
                z = false;
            }
        } else {
            try {
                SharedPreferences sharedPreferences = com.mbridge.msdk.foundation.controller.a.f().j().getSharedPreferences("MBridgeH5CacheSP", 0);
                if (!TextUtils.isEmpty(str)) {
                    String string2 = new JSONObject(str).getString("key");
                    if (!TextUtils.isEmpty(string2)) {
                        sharedPreferences.edit().remove(string2).apply();
                    }
                    z = true;
                }
                z = false;
                str2 = "";
            } catch (Throwable th2) {
                z.d("JS-Video-Brigde", "removeCacheItem error " + th2);
                str2 = "Delete Error, reason is : " + th2.getMessage();
                z = false;
            }
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", z ? 0 : 1);
            jSONObject.put("message", str2);
            if (obj != null && z) {
                h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } else {
                h.a().b(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            }
        } catch (Throwable unused2) {
            z.d("JS-Video-Brigde", "removeCacheItem error ");
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getAllCache(Object obj, String str) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = null;
        Map<String, Object> all = null;
        jSONObject2 = null;
        if (com.mbridge.msdk.foundation.controller.b.a().d() && this.b == null) {
            try {
                this.b = new FastKV.Builder(e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "MBridgeH5CacheSP").build();
            } catch (Exception unused) {
                this.b = null;
            }
        }
        String str2 = "getAllCache Success";
        if (this.b != null) {
            try {
                jSONObject = new JSONObject();
                try {
                    try {
                        all = this.b.getAll();
                    } catch (Throwable th) {
                        th = th;
                        jSONObject2 = jSONObject;
                        z.d("JS-Video-Brigde", "getAllCache error " + th);
                        str2 = "getAllCache Error, reason is : " + th.getMessage();
                        jSONObject = jSONObject2;
                    }
                } catch (Exception unused2) {
                }
                if (all != null) {
                    for (Map.Entry<String, Object> entry : all.entrySet()) {
                        jSONObject.put(entry.getKey(), entry.getValue());
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } else {
            try {
                SharedPreferences sharedPreferences = com.mbridge.msdk.foundation.controller.a.f().j().getSharedPreferences("MBridgeH5CacheSP", 0);
                JSONObject jSONObject3 = new JSONObject();
                try {
                    for (Map.Entry<String, ?> entry2 : sharedPreferences.getAll().entrySet()) {
                        jSONObject3.put(entry2.getKey(), entry2.getValue());
                    }
                    jSONObject = jSONObject3;
                } catch (Throwable th3) {
                    th = th3;
                    jSONObject2 = jSONObject3;
                    z.d("JS-Video-Brigde", "getAllCache error " + th);
                    str2 = "getAllCache Error, reason is : " + th.getMessage();
                    jSONObject = jSONObject2;
                }
            } catch (Throwable th4) {
                th = th4;
            }
        }
        try {
            JSONObject jSONObject4 = new JSONObject();
            jSONObject4.put("code", 0);
            jSONObject4.put("message", str2);
            if (jSONObject != null) {
                jSONObject4.put("data", jSONObject);
            } else {
                jSONObject4.put("data", "{}");
            }
            if (obj != null) {
                h.a().a(obj, Base64.encodeToString(jSONObject4.toString().getBytes(), 2));
            }
        } catch (Throwable th5) {
            z.d("JS-Video-Brigde", "getAllCache error " + th5);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void clearAllCache(Object obj, String str) {
        if (com.mbridge.msdk.foundation.controller.b.a().d() && this.b == null) {
            try {
                this.b = new FastKV.Builder(e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "MBridgeH5CacheSP").build();
            } catch (Exception unused) {
                this.b = null;
            }
        }
        FastKV fastKV = this.b;
        if (fastKV != null) {
            try {
                fastKV.clear();
                if (obj != null) {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("code", 0);
                    jSONObject.put("message", "Success");
                    h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    return;
                }
                return;
            } catch (Throwable th) {
                z.d("JS-Video-Brigde", "getAllCache error " + th);
                return;
            }
        }
        try {
            com.mbridge.msdk.foundation.controller.a.f().j().getSharedPreferences("MBridgeH5CacheSP", 0).edit().clear().apply();
            if (obj != null) {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", 0);
                jSONObject2.put("message", "Success");
                h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            }
        } catch (Throwable th2) {
            z.d("JS-Video-Brigde", "getAllCache error " + th2);
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getCutout(Object obj, String str) {
        try {
            String strJ = this.f4204a.getJSCommon().j();
            z.d("JS-Video-Brigde", strJ);
            if (obj != null && !TextUtils.isEmpty(strJ)) {
                h.a().a(obj, Base64.encodeToString(strJ.getBytes(), 2));
            } else {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", 1);
                jSONObject.put("message", "No notch data, plz try again later.");
                h.a().b(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            }
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "getCutout error : " + th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getAppSetting(Object obj, String str) {
        JSONObject jSONObject;
        try {
            String strOptString = new JSONObject(str).optString("appid", "");
            JSONObject jSONObject2 = new JSONObject();
            if (!TextUtils.isEmpty(strOptString)) {
                String strC = com.mbridge.msdk.c.b.a().c(strOptString);
                if (TextUtils.isEmpty(strC)) {
                    jSONObject = new JSONObject(com.mbridge.msdk.c.b.a().b().bd());
                } else {
                    jSONObject = new JSONObject(strC);
                    jSONObject.put("isDefault", 0);
                }
                if (obj != null) {
                    jSONObject2.put("code", 0);
                    jSONObject2.put("message", "Success");
                    jSONObject2.put("data", jSONObject);
                } else {
                    jSONObject2.put("code", 1);
                    jSONObject2.put("message", "Get App Setting error, plz try again later.");
                }
            } else {
                jSONObject2.put("code", 1);
                jSONObject2.put("message", "Get App Setting error, because must give a appId.");
            }
            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "getAppSetting error : " + th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getRewardSetting(Object obj, String str) {
        try {
            JSONObject jSONObjectK = com.mbridge.msdk.videocommon.d.b.a().b().k();
            JSONObject jSONObject = new JSONObject();
            if (obj != null && jSONObjectK != null) {
                jSONObject.put("code", 0);
                jSONObject.put("message", "Success");
                jSONObject.put("data", jSONObjectK);
            } else {
                jSONObject.put("code", 1);
                jSONObject.put("message", "Get Reward Setting error, plz try again later.");
            }
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "getRewardSetting error : " + th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getRewardUnitSetting(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("appid", "");
            String strOptString2 = jSONObject.optString("unitid", "");
            JSONObject jSONObject2 = new JSONObject();
            if (!TextUtils.isEmpty(strOptString) && !TextUtils.isEmpty(strOptString2)) {
                JSONObject jSONObjectG = com.mbridge.msdk.videocommon.d.b.a().a(strOptString, strOptString2).G();
                if (obj != null && jSONObjectG != null) {
                    jSONObject2.put("code", 0);
                    jSONObject2.put("message", "Success");
                    jSONObject2.put("data", jSONObjectG);
                } else {
                    jSONObject2.put("code", 1);
                    jSONObject2.put("message", "Get Reward Unit Setting error, plz try again later.");
                }
            } else {
                jSONObject2.put("code", 1);
                jSONObject2.put("message", "Get reward unit Setting error, because must give appId and unitId.");
            }
            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "getRewardUnitSetting error : " + th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getUnitSetting(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", 1);
            jSONObject.put("message", "Get Unit Setting error, RV/IV can not support this method.");
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "getUnitSetting error : " + th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload
    public void sendNoticeAndCallBackClick(Object obj, String str) {
        click(obj, "{ \"type\":1,\"pt\":" + str + "}");
    }

    @Override // com.mbridge.msdk.video.js.bridge.IVideoBridge
    public void getEncryptPrice(Object obj, String str) {
        String str2;
        try {
            String str3 = "not replaced";
            JSONObject jSONObject = new JSONObject();
            JSONObject jSONObject2 = new JSONObject();
            int i = 1;
            if (TextUtils.isEmpty(str)) {
                str2 = "params is null";
            } else {
                JSONObject jSONObject3 = new JSONObject(str);
                String strOptString = jSONObject3.optString("unitid", "");
                String strOptString2 = jSONObject3.optString("requestId", "");
                if (TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strOptString2)) {
                    str2 = "params parsing exception";
                } else {
                    d dVarB = com.mbridge.msdk.foundation.same.a.d.b(strOptString, strOptString2);
                    if (dVarB != null && dVarB.d() == 1) {
                        str3 = "success";
                        jSONObject2.put("encrypt_p", dVarB.b());
                        jSONObject2.put("irlfa", 1);
                        i = 0;
                    }
                    str2 = str3;
                }
            }
            jSONObject.put("code", i);
            jSONObject.put("message", str2);
            jSONObject.put("data", jSONObject2);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable th) {
            z.d("JS-Video-Brigde", "getEncryptPrice error : " + th.getMessage());
        }
    }
}
