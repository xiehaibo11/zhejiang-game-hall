package com.tkay.expressad.atsignalcommon.mraid;

import android.content.Context;
import android.text.TextUtils;
import com.igexin.sdk.PushBuildConfig;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.a;
import com.tkay.expressad.atsignalcommon.windvane.l;
import com.tkay.expressad.b;
import com.tkay.expressad.foundation.d.c;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MraidJSBridge extends l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f6430a = "MraidJSBridge";
    private IMraidJSBridge b;

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.tkay.expressad.atsignalcommon.windvane.l
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        super.initialize(context, windVaneWebView);
        try {
            if (context instanceof IMraidJSBridge) {
                this.b = (IMraidJSBridge) context;
                return;
            }
            if (windVaneWebView.getObject() != null && (windVaneWebView.getObject() instanceof IMraidJSBridge)) {
                this.b = (IMraidJSBridge) windVaneWebView.getObject();
            }
            if (windVaneWebView.getMraidObject() == null || !(windVaneWebView.getMraidObject() instanceof IMraidJSBridge)) {
                return;
            }
            this.b = (IMraidJSBridge) windVaneWebView.getMraidObject();
        } catch (Exception e) {
            if (b.f6449a) {
                e.printStackTrace();
            }
        }
    }

    public void open(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        if (obj instanceof a) {
            windVaneWebView = ((a) obj).f6439a;
            CallMraidJS.getInstance().fireNativeMethodCompleteEvent(windVaneWebView, PushBuildConfig.sdk_conf_channelid);
        } else {
            windVaneWebView = null;
        }
        try {
            String strOptString = new JSONObject(str).optString("url");
            if (this.b == null || TextUtils.isEmpty(strOptString)) {
                return;
            }
            if (windVaneWebView != null && System.currentTimeMillis() - windVaneWebView.lastTouchTime > com.tkay.expressad.a.b.a.c) {
                c mraidCampaign = this.b.getMraidCampaign();
                windVaneWebView.getUrl();
                int i = com.tkay.expressad.a.b.a.f6333a;
                if (com.tkay.expressad.a.b.a.a(mraidCampaign)) {
                    return;
                }
            }
            this.b.open(strOptString);
        } catch (Throwable unused) {
        }
    }

    public void close(Object obj, String str) {
        if (obj instanceof a) {
            CallMraidJS.getInstance().fireNativeMethodCompleteEvent(((a) obj).f6439a, "close");
        }
        try {
            if (this.b != null) {
                this.b.close();
            }
        } catch (Throwable unused) {
        }
    }

    public void unload(Object obj, String str) {
        if (obj instanceof a) {
            CallMraidJS.getInstance().fireNativeMethodCompleteEvent(((a) obj).f6439a, "unload");
        }
        try {
            if (this.b != null) {
                this.b.unload();
            }
        } catch (Throwable unused) {
        }
    }

    public void useCustomClose(Object obj, String str) {
        if (obj instanceof a) {
            CallMraidJS.getInstance().fireNativeMethodCompleteEvent(((a) obj).f6439a, "useCustomClose");
        }
        try {
            String strOptString = new JSONObject(str).optString("shouldUseCustomClose");
            if (TextUtils.isEmpty(strOptString) || this.b == null) {
                return;
            }
            this.b.useCustomClose(strOptString.toLowerCase().equals("true"));
        } catch (Throwable unused) {
        }
    }

    public void expand(Object obj, String str) {
        if (obj instanceof a) {
            CallMraidJS.getInstance().fireNativeMethodCompleteEvent(((a) obj).f6439a, "expand");
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            String strOptString2 = jSONObject.optString("shouldUseCustomClose");
            StringBuilder sb = new StringBuilder("MRAID expand ");
            sb.append(strOptString);
            sb.append(" ");
            sb.append(strOptString2);
            if (TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strOptString2) || this.b == null) {
                return;
            }
            this.b.expand(strOptString, strOptString2.toLowerCase().equals("true"));
        } catch (Throwable unused) {
        }
    }

    public void setOrientationProperties(Object obj, String str) {
        if (obj instanceof a) {
            CallMraidJS.getInstance().fireNativeMethodCompleteEvent(((a) obj).f6439a, "setOrientationProperties");
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("allowOrientationChange");
            String strOptString2 = jSONObject.optString("forceOrientation");
            if (TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strOptString2) || this.b == null) {
                return;
            }
            strOptString.toLowerCase().equals("true");
            String lowerCase = strOptString2.toLowerCase();
            int iHashCode = lowerCase.hashCode();
            if (iHashCode == 729267099) {
                if (lowerCase.equals("portrait")) {
                }
            } else {
                if (iHashCode != 1430647483) {
                    return;
                }
                lowerCase.equals("landscape");
            }
        } catch (Throwable unused) {
        }
    }
}
