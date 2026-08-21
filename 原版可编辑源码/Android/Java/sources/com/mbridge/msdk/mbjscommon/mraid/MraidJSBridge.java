package com.mbridge.msdk.mbjscommon.mraid;

import android.content.Context;
import android.text.TextUtils;
import com.igexin.sdk.PushBuildConfig;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.mraid.a;
import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import org.json.JSONObject;

public class MraidJSBridge extends AbsMbridgeDownload {
    private b a;

    /* JADX WARN: Multi-variable type inference failed */
    @Override
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        super.initialize(context, windVaneWebView);
        try {
            if (context instanceof b) {
                this.a = (b) context;
                return;
            }
            if (windVaneWebView.getObject() != null && (windVaneWebView.getObject() instanceof b)) {
                this.a = (b) windVaneWebView.getObject();
            }
            if (windVaneWebView.getMraidObject() == null || !(windVaneWebView.getMraidObject() instanceof b)) {
                return;
            }
            this.a = (b) windVaneWebView.getMraidObject();
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public void open(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
            windVaneWebView = ((com.mbridge.msdk.mbjscommon.windvane.a) obj).a;
            a.a.a.a(windVaneWebView, PushBuildConfig.sdk_conf_channelid);
        } else {
            windVaneWebView = null;
        }
        try {
            String strOptString = new JSONObject(str).optString("url");
            z.d("MraidJSBridge", "MRAID Open " + strOptString);
            if (this.a == null || TextUtils.isEmpty(strOptString)) {
                return;
            }
            if (windVaneWebView == null || System.currentTimeMillis() - windVaneWebView.lastTouchTime <= com.mbridge.msdk.click.b.a.c || !com.mbridge.msdk.click.b.a.a(this.a.getMraidCampaign(), windVaneWebView.getUrl(), com.mbridge.msdk.click.b.a.a)) {
                this.a.open(strOptString);
            }
        } catch (Throwable th) {
            z.c("MraidJSBridge", "MRAID Open", th);
        }
    }

    public void close(Object obj, String str) {
        if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
            a.a.a.a(((com.mbridge.msdk.mbjscommon.windvane.a) obj).a, "close");
        }
        try {
            z.d("MraidJSBridge", "MRAID close");
            if (this.a != null) {
                this.a.close();
            }
        } catch (Throwable th) {
            z.c("MraidJSBridge", "MRAID close", th);
        }
    }

    public void unload(Object obj, String str) {
        if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
            a.a.a.a(((com.mbridge.msdk.mbjscommon.windvane.a) obj).a, "unload");
        }
        try {
            z.d("MraidJSBridge", "MRAID unload");
            if (this.a != null) {
                this.a.unload();
            }
        } catch (Throwable th) {
            z.c("MraidJSBridge", "MRAID unload", th);
        }
    }

    public void useCustomClose(Object obj, String str) {
        if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
            a.a.a.a(((com.mbridge.msdk.mbjscommon.windvane.a) obj).a, "useCustomClose");
        }
        try {
            String strOptString = new JSONObject(str).optString("shouldUseCustomClose");
            z.d("MraidJSBridge", "MRAID useCustomClose " + strOptString);
            if (TextUtils.isEmpty(strOptString) || this.a == null) {
                return;
            }
            this.a.useCustomClose(strOptString.toLowerCase().equals("true"));
        } catch (Throwable th) {
            z.c("MraidJSBridge", "MRAID useCustomClose", th);
        }
    }

    public void expand(Object obj, String str) {
        if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
            a.a.a.a(((com.mbridge.msdk.mbjscommon.windvane.a) obj).a, "expand");
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            String strOptString2 = jSONObject.optString("shouldUseCustomClose");
            z.d("MraidJSBridge", "MRAID expand " + strOptString + " " + strOptString2);
            if (TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strOptString2) || this.a == null) {
                return;
            }
            this.a.expand(strOptString, strOptString2.toLowerCase().equals("true"));
        } catch (Throwable th) {
            z.c("MraidJSBridge", "MRAID expand", th);
        }
    }

    public void setOrientationProperties(Object obj, String str) {
        String str2;
        if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
            a.a.a.a(((com.mbridge.msdk.mbjscommon.windvane.a) obj).a, "setOrientationProperties");
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("allowOrientationChange");
            String strOptString2 = jSONObject.optString("forceOrientation");
            z.d("MraidJSBridge", "MRAID setOrientationProperties");
            if (TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strOptString2) || this.a == null) {
                return;
            }
            strOptString.toLowerCase().equals("true");
            String lowerCase = strOptString2.toLowerCase();
            int iHashCode = lowerCase.hashCode();
            if (iHashCode == 729267099) {
                str2 = "portrait";
            } else if (iHashCode != 1430647483) {
                return;
            } else {
                str2 = "landscape";
            }
            lowerCase.equals(str2);
        } catch (Throwable th) {
            z.c("MraidJSBridge", "MRAID setOrientationProperties", th);
        }
    }

    @Override
    public void sendNoticeAndCallBackClick(Object obj, String str) {
        open(obj, str);
    }
}
