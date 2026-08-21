package com.tkay.core.api;

import android.content.Context;
import android.location.Location;
import android.util.Log;
import com.tkay.core.common.b.m;
import com.tkay.core.common.b.p;
import com.tkay.core.common.h.e;
import com.tkay.core.common.h.k;
import com.tkay.core.common.l.b.a;
import com.tkay.core.common.l.g;
import com.tkay.core.common.u;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

public class TYSDK {
    private static boolean HAS_INIT = false;
    public static final int NONPERSONALIZED = 1;
    public static final int PERSONALIZED = 0;
    public static final int UNKNOWN = 2;

    private TYSDK() {
    }

    public static void init(Context context, String str, String str2) {
        init(context, str, str2, null);
    }

    public static void init(Context context, String str, String str2, TYNetworkConfig tYNetworkConfig) {
        init(context, str, str2, tYNetworkConfig, null);
    }

    @Deprecated
    public static void init(Context context, String str, String str2, TYNetworkConfig tYNetworkConfig, TYSDKInitListener tYSDKInitListener) {
        try {
            if (context == null) {
                if (tYSDKInitListener != null) {
                    tYSDKInitListener.onFail("init: Context is null!");
                }
                Log.e("tkay", "init: Context is null!");
            } else {
                m.a().a(context, str, str2, tYNetworkConfig);
                if (tYSDKInitListener != null) {
                    tYSDKInitListener.onSuccess();
                }
                a.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        u.a().b();
                    }
                });
            }
        } catch (Error | Exception unused) {
        }
    }

    public static boolean isCnSDK() {
        return m.a().b() != null;
    }

    public static void setWXAppId(String str) {
        m.a().a(str);
    }

    public static void setChannel(String str) {
        if (g.a(str)) {
            m.a().e(str);
        }
    }

    public static void setSubChannel(String str) {
        if (g.b(str)) {
            m.a().f(str);
        }
    }

    public static void initCustomMap(Map<String, Object> map) {
        m.a().a(map);
    }

    public static void initPlacementCustomMap(String str, Map<String, Object> map) {
        m.a().a(str, map);
    }

    public static void setExcludePackageList(List<String> list) {
        m.a().a(list);
    }

    public static void setGDPRUploadDataLevel(Context context, int i) {
        if (context == null) {
            Log.e("tkay", "setGDPRUploadDataLevel: context should not be null");
        } else if (i == 0 || i == 1) {
            p.a(context).a(i);
        } else {
            Log.e("tkay", "GDPR level setting error!!! Level must be PERSONALIZED or NONPERSONALIZED.");
        }
    }

    public static void deniedUploadDeviceInfo(String... strArr) {
        m.a().a(strArr);
    }

    public static int getGDPRDataLevel(Context context) {
        return p.a(context).a();
    }

    public static boolean isEUTraffic(Context context) {
        return p.a(context).d();
    }

    public static void checkIsEuTraffic(Context context, NetTrafficeCallback netTrafficeCallback) {
        p.a(context).a(netTrafficeCallback);
    }

    public static void showGdprAuth(Context context) {
        p.a(context).a(context, null);
    }

    public static void showGdprAuth(Context context, TYGDPRAuthCallback tYGDPRAuthCallback) {
        p.a(context).a(context, tYGDPRAuthCallback);
    }

    public static String getSDKVersionName() {
        return g.a();
    }

    public static void setNetworkLogDebug(boolean z) {
        m.a().b(z);
    }

    public static boolean isNetworkLogDebug() {
        return m.a().z();
    }

    public static void integrationChecking(Context context) {
        m.a().b(context);
    }

    public static void setAdLogoVisible(boolean z) {
        m.a().c(z);
    }

    public static void setLocation(Location location) {
        m.a().a(location);
    }

    public static void setWXStatus(boolean z) {
        m.a().a(z);
    }

    public static void setFilterAdSourceIdList(String str, List<String> list) {
        m.a().a(str, list);
    }

    public static void setFilterNetworkFirmIdList(String str, List<String> list) {
        m.a().b(str, list);
    }

    public static void addCustomAdapterConfig(String str, TYCustomAdapterConfig tYCustomAdapterConfig) {
        m.a().a(str, tYCustomAdapterConfig);
    }

    public static void getArea(final TYAreaCallback tYAreaCallback) {
        if (tYAreaCallback == null) {
            return;
        }
        new e().a(0, new k() {
            @Override
            public final void onLoadStart(int i) {
            }

            @Override
            public final void onLoadFinish(int i, Object obj) {
                try {
                    if (obj == null) {
                        tYAreaCallback.onErrorCallback("There is no result.");
                        return;
                    }
                    JSONObject jSONObject = new JSONObject((String) obj);
                    if (!jSONObject.has("area")) {
                        tYAreaCallback.onErrorCallback("There is no result.");
                    } else {
                        tYAreaCallback.onResultCallback(jSONObject.optString("area"));
                    }
                } catch (Throwable unused) {
                    tYAreaCallback.onErrorCallback("Internal error");
                }
            }

            @Override
            public final void onLoadError(int i, String str, AdError adError) {
                tYAreaCallback.onErrorCallback(adError.printStackTrace());
            }

            @Override
            public final void onLoadCanceled(int i) {
                tYAreaCallback.onErrorCallback("Request cancel");
            }
        });
    }

    public static void testModeDeviceInfo(Context context, DeviceInfoCallback deviceInfoCallback) {
        m.a().a(context, deviceInfoCallback);
    }

    public static void setInitType(int i) {
        m.a().b(i);
    }

    public static void setDebuggerConfig(Context context, String str, ATDebuggerConfig aTDebuggerConfig) {
        m.a().a(context, str, aTDebuggerConfig);
    }

    public static void setPersonalizedAdStatus(int i) {
        m.a().a(i);
    }

    public static int getPersionalizedAdStatus() {
        return m.a().d();
    }

    public static void setUseHTTP(boolean z) {
        m.a().d(z);
    }

    public static void setSystemDevFragmentType(String str) {
        m.a().p(str);
    }

    public static void setTYAdFilter(String[] strArr, ITYAdFilter iTYAdFilter) {
        m.a().a(strArr, iTYAdFilter);
    }

    public static void setATPrivacyConfig(ATPrivacyConfig aTPrivacyConfig) {
        m.a().a(aTPrivacyConfig);
    }
}
