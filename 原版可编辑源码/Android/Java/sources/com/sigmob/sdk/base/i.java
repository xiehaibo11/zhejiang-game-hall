package com.sigmob.sdk.base;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.models.Config;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.network.SigmobRequestQueue;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.czhj.wire.Wire;
import com.sigmob.sdk.base.models.config.Android;
import com.sigmob.sdk.base.models.config.Common;
import com.sigmob.sdk.base.models.config.CommonEndpointsConfig;
import com.sigmob.sdk.base.models.config.DialogSetting;
import com.sigmob.sdk.base.models.config.NativeConfig;
import com.sigmob.sdk.base.models.config.RvConfig;
import com.sigmob.sdk.base.models.config.SdkConfig;
import com.sigmob.sdk.base.models.config.SdkConfigResponse;
import com.sigmob.sdk.base.models.config.SplashConfig;
import com.sigmob.sdk.base.network.e;
import com.sigmob.windad.WindAdOptions;
import com.sigmob.windad.WindAds;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.List;

public class i {
    private static final String a = "sdkConfigVer";
    private static i b;
    private static boolean c;
    private a k;
    private final String f = "4.9.0";
    private long h = 0;
    private SdkConfig i = null;
    private SdkConfig j = null;
    private final Handler d = new Handler(Looper.getMainLooper());
    private final Runnable e = new Runnable() {
        @Override
        public void run() {
            i.this.S();
        }
    };
    private boolean g = true;

    public interface a {
        void a();
    }

    private i() {
        R();
    }

    private void R() {
        if (this.i == null) {
            SdkConfig.Builder builder = new SdkConfig.Builder();
            Common.Builder builder2 = new Common.Builder();
            Android.Builder builder3 = new Android.Builder();
            builder2.endpoints(new CommonEndpointsConfig.Builder().build());
            RvConfig.Builder builder4 = new RvConfig.Builder();
            builder4.cacheTop(4);
            builder2.rv_config(builder4.build());
            builder2.configRefresh(1000);
            builder2.disable_up_location(true);
            builder2.is_gdpr_region(false);
            builder2.enable_debug_level(false);
            builder3.disable_boot_mark(true);
            builder3.disableUpAppInfo(true);
            builder3.oaid_api_is_disable(true);
            builder3.enable_permission(false);
            builder3.enable_report_crash(false);
            builder.common_config(builder2.build());
            builder.android_config(builder3.build());
            this.i = builder.build();
        }
        SigmobLog.d("Default config: " + this.i.toString());
    }

    private void S() {
        if (com.sigmob.sdk.b.b() == null) {
            return;
        }
        if (ClientMetadata.getInstance().isNetworkConnected(c()) && c.a().i()) {
            T();
        } else {
            SigmobLog.d("Can't load an ad because there is no network connectivity.");
            V();
        }
    }

    private void T() {
        SigmobRequestQueue requestQueue = Networking.getRequestQueue();
        com.sigmob.sdk.base.network.e eVar = new com.sigmob.sdk.base.network.e(c(), new e.a() {
            @Override
            public void a(SdkConfigResponse sdkConfigResponse) throws Throwable {
                SigmobLog.d(sdkConfigResponse.toString());
                SdkConfig sdkConfig = sdkConfigResponse.config;
                if (sdkConfig != null) {
                    i.this.b(sdkConfig);
                    i.this.a(sdkConfig);
                } else {
                    SigmobLog.e(sdkConfigResponse.error_message);
                }
                i.this.V();
            }

            @Override
            public void onErrorResponse(VolleyError volleyError) {
                SigmobLog.e(volleyError.toString());
                i.this.V();
            }
        });
        if (requestQueue == null) {
            SigmobLog.e("queue is null");
            V();
        } else {
            requestQueue.add(eVar);
            SigmobLog.i("update sdk config");
        }
    }

    private void U() {
        this.d.removeCallbacks(this.e);
    }

    private void V() {
        U();
        if (this.g) {
            this.d.postDelayed(this.e, Math.max(30000L, this.h));
        }
    }

    private SplashConfig W() {
        if (i() != null) {
            return i().splash_config;
        }
        return null;
    }

    private NativeConfig X() {
        if (i() != null) {
            return i().native_config;
        }
        return null;
    }

    public static i a() {
        if (b == null) {
            synchronized (i.class) {
                if (b == null) {
                    b = new i();
                }
            }
        }
        return b;
    }

    private void a(SdkConfig sdkConfig) throws Throwable {
        ObjectOutputStream objectOutputStream;
        if (sdkConfig != null) {
            ObjectOutputStream objectOutputStream2 = null;
            File file = new File(com.sigmob.sdk.base.utils.b.a() + "/config");
            if (file.exists()) {
                file.delete();
            }
            file.getParentFile().mkdirs();
            try {
                try {
                    try {
                        objectOutputStream = new ObjectOutputStream(new FileOutputStream(file));
                    } catch (IOException e) {
                        e = e;
                    }
                } catch (Throwable th) {
                    th = th;
                }
                try {
                    sdkConfig.encode(objectOutputStream);
                    com.sigmob.sdk.base.utils.c.a().edit().putString(a, "4.9.0").apply();
                    objectOutputStream.close();
                } catch (IOException e2) {
                    e = e2;
                    objectOutputStream2 = objectOutputStream;
                    SigmobLog.e(e.getMessage());
                    if (objectOutputStream2 == null) {
                    } else {
                        objectOutputStream2.close();
                    }
                } catch (Throwable th2) {
                    th = th2;
                    objectOutputStream2 = objectOutputStream;
                    if (objectOutputStream2 != null) {
                        try {
                            objectOutputStream2.close();
                        } catch (IOException e3) {
                            SigmobLog.e(e3.getMessage());
                        }
                    }
                    throw th;
                }
            } catch (IOException e4) {
                SigmobLog.e(e4.getMessage());
            }
        }
    }

    public static String b() {
        return "appId=" + WindAds.sharedAds().getAppId() + "&sdkVersion=4.9.0";
    }

    private void b(SdkConfig sdkConfig) {
        if (sdkConfig == null || sdkConfig.common_config == null) {
            return;
        }
        this.j = sdkConfig;
        this.h = sdkConfig.common_config.configRefresh.intValue() * 1000;
        SigmobLog.d("config: " + sdkConfig.toString());
        a aVar = this.k;
        if (aVar != null) {
            aVar.a();
        }
        Config.sharedInstance().update(c, P(), O(), K(), k(), C(), B());
    }

    public static String c() {
        String str;
        WindAdOptions options = WindAds.sharedAds().getOptions();
        if (options == null || options.getExtData() == null || (str = options.getExtData().get(h.d)) == null || TextUtils.isEmpty(str)) {
            if (TextUtils.isEmpty(h.f)) {
                return "https://adservice.sigmob.cn/sigmob/config?" + b();
            }
            return h.f + "?" + b();
        }
        if (str.indexOf(63) == -1) {
            return str + "?" + b();
        }
        return str + "&" + b();
    }

    public static String d() {
        return "https://adservice.sigmob.cn/extconfig?" + b();
    }

    public static boolean g() {
        return c;
    }

    public int A() {
        int iIntValue = i() != null ? ((Integer) Wire.get(i().tracking_retry_interval, 180)).intValue() : 10;
        return (iIntValue >= 10 ? iIntValue : 10) * 1000;
    }

    public int B() {
        int iIntValue = Common.DEFAULT_MAX_SEND_LOG_RECORDS.intValue();
        if (i() != null) {
            iIntValue = ((Integer) Wire.get(i().max_send_log_records, Common.DEFAULT_MAX_SEND_LOG_RECORDS)).intValue();
        }
        return iIntValue < 10 ? Common.DEFAULT_MAX_SEND_LOG_RECORDS.intValue() : iIntValue;
    }

    public int C() {
        int iIntValue;
        if (i() == null || (iIntValue = ((Integer) Wire.get(i().send_log_interval, 3)).intValue()) < 3) {
            return 3;
        }
        return iIntValue;
    }

    public List<Integer> D() {
        if (i() != null) {
            return i().dclog_blacklist;
        }
        return null;
    }

    public boolean E() {
        if (i() != null) {
            return ((Boolean) Wire.get(i().enable_debug_level, false)).booleanValue();
        }
        return false;
    }

    public long F() {
        if (i() == null) {
            return 0L;
        }
        long jIntValue = ((Integer) Wire.get(i().load_interval, 0)).intValue();
        if (jIntValue < 1) {
            return 0L;
        }
        return jIntValue * 1000;
    }

    public boolean G() {
        if (i() != null) {
            return ((Boolean) Wire.get(i().disable_up_location, false)).booleanValue();
        }
        return true;
    }

    public boolean H() {
        if (j() != null) {
            return ((Boolean) Wire.get(j().disableUpAppInfo, false)).booleanValue();
        }
        return true;
    }

    public int I() {
        if (j() != null) {
            return ((Integer) Wire.get(j().report_log, 0)).intValue();
        }
        return 0;
    }

    public boolean J() {
        Android androidJ = j();
        return androidJ != null && ((Integer) Wire.get(androidJ.up_wifi_list_interval, 0)).intValue() >= 60;
    }

    public int K() {
        if (j() != null) {
            return ((Integer) Wire.get(j().disable_up_oaid, 0)).intValue();
        }
        return 0;
    }

    public boolean L() {
        if (j() != null) {
            return ((Boolean) Wire.get(j().enable_permission, false)).booleanValue();
        }
        return false;
    }

    public int M() {
        if (j() != null) {
            return ((Integer) Wire.get(j().apk_expired_time, 0)).intValue();
        }
        return 0;
    }

    public boolean N() {
        if (j() != null) {
            return ((Boolean) Wire.get(j().enable_report_crash, false)).booleanValue();
        }
        return false;
    }

    public boolean O() {
        if (j() != null) {
            return ((Boolean) Wire.get(j().oaid_api_is_disable, false)).booleanValue();
        }
        return true;
    }

    public boolean P() {
        if (j() != null) {
            return ((Boolean) Wire.get(j().disable_boot_mark, false)).booleanValue();
        }
        return true;
    }

    public int Q() {
        return 20;
    }

    public i a(a aVar) {
        this.k = aVar;
        return b;
    }

    public boolean a(String str) {
        if (!v() || i().anti_fraud_log.events == null) {
            return false;
        }
        return i().anti_fraud_log.events.contains(str);
    }

    public void e() {
        Throwable th;
        ObjectInputStream objectInputStream;
        String string = com.sigmob.sdk.base.utils.c.a().getString(a, null);
        File file = new File(com.sigmob.sdk.base.utils.b.a() + "/config");
        if ("4.9.0".equals(string)) {
            try {
                if (file.exists()) {
                    try {
                        objectInputStream = new ObjectInputStream(new FileInputStream(file));
                        try {
                            b(SdkConfig.ADAPTER.decode(objectInputStream));
                            objectInputStream.close();
                        } catch (Throwable th2) {
                            th = th2;
                            try {
                                b(this.i);
                                SigmobLog.e(th.getMessage());
                                if (objectInputStream == null) {
                                    return;
                                } else {
                                    objectInputStream.close();
                                }
                            } catch (Throwable th3) {
                                if (objectInputStream != null) {
                                    try {
                                        objectInputStream.close();
                                    } catch (Throwable th4) {
                                        SigmobLog.e(th4.getMessage());
                                    }
                                }
                                throw th3;
                            }
                        }
                    } catch (Throwable th5) {
                        th = th5;
                        objectInputStream = null;
                    }
                    return;
                }
            } catch (Throwable th6) {
                SigmobLog.e(th6.getMessage());
                return;
            }
        }
        b(this.i);
    }

    public void f() {
        U();
        this.d.post(this.e);
    }

    public SdkConfig h() {
        SdkConfig sdkConfig = this.j;
        return sdkConfig == null ? this.i : sdkConfig;
    }

    public Common i() {
        if (h() == null) {
            return null;
        }
        return h().common_config;
    }

    public Android j() {
        if (h() == null) {
            return null;
        }
        return h().android_config;
    }

    public String k() {
        StringBuilder sb;
        String str;
        String str2 = i().endpoints.log;
        if (TextUtils.isEmpty(str2)) {
            str2 = "https://dc.sigmob.cn/log";
        }
        if (str2.indexOf(63) == -1) {
            sb = new StringBuilder();
            sb.append(str2);
            str = "?";
        } else {
            sb = new StringBuilder();
            sb.append(str2);
            str = "&";
        }
        sb.append(str);
        sb.append(b());
        return sb.toString();
    }

    public String l() {
        StringBuilder sb;
        String str;
        String str2 = i().endpoints.ads;
        if (TextUtils.isEmpty(str2)) {
            str2 = "https://adservice.sigmob.cn/ad/v4";
        }
        if (str2.indexOf(63) == -1) {
            sb = new StringBuilder();
            sb.append(str2);
            str = "?";
        } else {
            sb = new StringBuilder();
            sb.append(str2);
            str = "&";
        }
        sb.append(str);
        sb.append(b());
        return sb.toString();
    }

    public String m() {
        StringBuilder sb;
        String str;
        String str2 = i().endpoints.hb_ads;
        if (TextUtils.isEmpty(str2)) {
            str2 = "https://adservice.sigmob.cn/hb/v2/ad";
        }
        if (str2.indexOf(63) == -1) {
            sb = new StringBuilder();
            sb.append(str2);
            str = "?";
        } else {
            sb = new StringBuilder();
            sb.append(str2);
            str = "&";
        }
        sb.append(str);
        sb.append(b());
        return sb.toString();
    }

    public RvConfig n() {
        if (i() != null) {
            return i().rv_config;
        }
        return null;
    }

    public int o() {
        if (n() != null) {
            return ((Integer) Wire.get(n().cacheTop, 5)).intValue();
        }
        return 5;
    }

    public long p() {
        if (n() == null) {
            return 45000L;
        }
        int iIntValue = ((Integer) Wire.get(n().ad_load_timeout, 45)).intValue();
        if (iIntValue < 10) {
            iIntValue = 10;
        }
        return iIntValue * 1000;
    }

    public DialogSetting q() {
        if (n() != null) {
            return n().close_dialog_setting;
        }
        return null;
    }

    public int r() {
        if (W() == null) {
            return 50;
        }
        return ((Integer) Wire.get(W().cacheTop, 50)).intValue();
    }

    public long s() {
        int iIntValue = W() != null ? ((Integer) Wire.get(W().material_expired_time, 2)).intValue() : 2;
        return iIntValue < 0 ? iIntValue : ((long) iIntValue) * 24 * 60 * 60 * 1000;
    }

    public int t() {
        if (X() != null) {
            return ((Integer) Wire.get(X().cacheTop, 50)).intValue();
        }
        return 50;
    }

    public long u() {
        if (X() == null) {
            return 45000L;
        }
        int iIntValue = X().ad_load_timeout.intValue();
        if (iIntValue < 10) {
            iIntValue = 10;
        }
        return iIntValue * 1000;
    }

    public boolean v() {
        return (i() == null || i().anti_fraud_log == null || i().anti_fraud_log.events == null) ? false : true;
    }

    public int w() {
        if (!v() || i().anti_fraud_log.motion_config == null) {
            return 0;
        }
        return i().anti_fraud_log.motion_config.interval.intValue();
    }

    public int x() {
        if (!v() || i().anti_fraud_log.motion_config == null) {
            return 0;
        }
        return i().anti_fraud_log.motion_config.count.intValue();
    }

    public int y() {
        if (!v() || i().anti_fraud_log.motion_config == null) {
            return 0;
        }
        return i().anti_fraud_log.motion_config.queue_max.intValue() + (-50) < i().anti_fraud_log.motion_config.count.intValue() * 2 ? (i().anti_fraud_log.motion_config.count.intValue() * 2) + 50 : i().anti_fraud_log.motion_config.queue_max.intValue();
    }

    public long z() {
        long jIntValue = i() != null ? ((Integer) Wire.get(i().tracking_expiration_time, 86400)).intValue() : 180L;
        return (jIntValue >= 180 ? jIntValue : 180L) * 1000;
    }
}
