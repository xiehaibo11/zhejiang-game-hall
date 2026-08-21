package com.amap.api.location;

import android.app.Notification;
import android.content.Context;
import android.content.Intent;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebView;
import com.loc.bo;
import com.loc.d;
import com.loc.fr;
import com.loc.ft;
import com.loc.fx;
import com.loc.o;
import com.loc.t;
import com.loc.u;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class AMapLocationClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f1370a;
    d b;

    public AMapLocationClient(Context context) throws Exception {
        a(context);
        try {
            if (context == null) {
                throw new IllegalArgumentException("Context参数不能为null");
            }
            Context applicationContext = context.getApplicationContext();
            this.f1370a = applicationContext;
            ft.a(applicationContext);
            this.b = new d(context, null, null);
        } catch (Throwable th) {
            fr.a(th, "AMClt", "ne1");
        }
    }

    public AMapLocationClient(Context context, Intent intent) throws Exception {
        a(context);
        try {
            if (context == null) {
                throw new IllegalArgumentException("Context参数不能为null");
            }
            this.f1370a = context.getApplicationContext();
            this.b = new d(this.f1370a, intent, null);
        } catch (Throwable th) {
            fr.a(th, "AMClt", "ne2");
        }
    }

    public AMapLocationClient(Looper looper, Context context) throws Exception {
        a(context);
        try {
            if (context == null) {
                throw new IllegalArgumentException("Context参数不能为null");
            }
            this.f1370a = context.getApplicationContext();
            this.b = new d(this.f1370a, null, looper);
        } catch (Throwable th) {
            fr.a(th, "AMClt", "ne3");
        }
    }

    private static void a(Context context) throws Exception {
        u uVarA = t.a(context, fr.c());
        if (uVarA.f3036a == t.c.SuccessCode) {
            return;
        }
        Log.e("AMapLocationClient", uVarA.b);
        throw new Exception(uVarA.b);
    }

    public static String getDeviceId(Context context) {
        return o.q(context);
    }

    public static void setApiKey(String str) {
        try {
            AMapLocationClientOption.f1371a = str;
        } catch (Throwable th) {
            fr.a(th, "AMClt", "sKey");
        }
    }

    public static void setHost(String str) {
        if (TextUtils.isEmpty(str)) {
            bo.f2873a = -1;
            str = "";
        } else {
            bo.f2873a = 1;
        }
        bo.b = str;
    }

    public static void updatePrivacyAgree(Context context, boolean z) {
        t.a(context, z, fr.c());
    }

    public static void updatePrivacyShow(Context context, boolean z, boolean z2) {
        t.a(context, z, z2, fr.c());
    }

    public void disableBackgroundLocation(boolean z) {
        try {
            if (this.b != null) {
                this.b.a(z);
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "dBackL");
        }
    }

    public void enableBackgroundLocation(int i, Notification notification) {
        try {
            if (this.b != null) {
                this.b.a(i, notification);
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "eBackL");
        }
    }

    public AMapLocation getLastKnownLocation() {
        try {
            if (this.b != null) {
                return this.b.e();
            }
            return null;
        } catch (Throwable th) {
            fr.a(th, "AMClt", "gLastL");
            return null;
        }
    }

    public String getVersion() {
        return "6.4.0";
    }

    public boolean isStarted() {
        try {
            if (this.b != null) {
                return this.b.a();
            }
            return false;
        } catch (Throwable th) {
            fr.a(th, "AMClt", "isS");
            return false;
        }
    }

    public void onDestroy() {
        try {
            if (this.b != null) {
                this.b.d();
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "onDy");
        }
    }

    public void setLocationListener(AMapLocationListener aMapLocationListener) {
        try {
            if (aMapLocationListener == null) {
                throw new IllegalArgumentException("listener参数不能为null");
            }
            if (this.b != null) {
                this.b.a(aMapLocationListener);
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "sLocL");
        }
    }

    public void setLocationOption(AMapLocationClientOption aMapLocationClientOption) {
        try {
            if (aMapLocationClientOption == null) {
                throw new IllegalArgumentException("LocationManagerOption参数不能为null");
            }
            if (this.b != null) {
                this.b.a(aMapLocationClientOption);
            }
            if (aMapLocationClientOption.b) {
                aMapLocationClientOption.b = false;
                JSONObject jSONObject = new JSONObject();
                if (!TextUtils.isEmpty(aMapLocationClientOption.c)) {
                    jSONObject.put("amap_loc_scenes_type", aMapLocationClientOption.c);
                }
                fx.a(this.f1370a, "O019", jSONObject);
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "sLocnO");
        }
    }

    public void startAssistantLocation(WebView webView) {
        try {
            if (this.b != null) {
                this.b.a(webView);
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "sttAssL1");
        }
    }

    public void startLocation() {
        try {
            if (this.b != null) {
                this.b.b();
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "stl");
        }
    }

    public void stopAssistantLocation() {
        try {
            if (this.b != null) {
                this.b.f();
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "stAssL");
        }
    }

    public void stopLocation() {
        try {
            if (this.b != null) {
                this.b.c();
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "stl");
        }
    }

    public void unRegisterLocationListener(AMapLocationListener aMapLocationListener) {
        try {
            if (this.b != null) {
                this.b.b(aMapLocationListener);
            }
        } catch (Throwable th) {
            fr.a(th, "AMClt", "unRL");
        }
    }
}
