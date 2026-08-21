package com.alipay.sdk.app;

import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Base64;
import com.alipay.sdk.m.m.a;
import com.alipay.sdk.m.s.a;
import com.alipay.sdk.m.u.n;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.nio.charset.Charset;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class OpenAuthTask {
    public static final int Duplex = 5000;
    public static final int NOT_INSTALLED = 4001;
    public static final int OK = 9000;
    public static final int SYS_ERR = 4000;
    public static final Map<String, Callback> e = new ConcurrentHashMap();
    public static long f = -1;
    public static final int g = 122;
    public final Activity b;
    public Callback c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile boolean f1093a = false;
    public final Handler d = new Handler(Looper.getMainLooper());

    public enum BizType {
        Invoice("20000920"),
        AccountAuth("20000067"),
        Deduct("60000157");

        public String appId;

        BizType(String str) {
            this.appId = str;
        }
    }

    public interface Callback {
        void onResult(int i, String str, Bundle bundle);
    }

    public static /* synthetic */ class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final /* synthetic */ int[] f1094a;

        static {
            int[] iArr = new int[BizType.values().length];
            f1094a = iArr;
            try {
                iArr[BizType.Deduct.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f1094a[BizType.AccountAuth.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f1094a[BizType.Invoice.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    public final class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f1095a;
        public final String b;
        public final Bundle c;

        public /* synthetic */ b(OpenAuthTask openAuthTask, int i, String str, Bundle bundle, a aVar) {
            this(i, str, bundle);
        }

        @Override // java.lang.Runnable
        public void run() {
            if (OpenAuthTask.this.c != null) {
                OpenAuthTask.this.c.onResult(this.f1095a, this.b, this.c);
            }
        }

        public b(int i, String str, Bundle bundle) {
            this.f1095a = i;
            this.b = str;
            this.c = bundle;
        }
    }

    public OpenAuthTask(Activity activity) {
        this.b = activity;
        com.alipay.sdk.m.s.b.d().a(activity);
    }

    public void execute(String str, BizType bizType, Map<String, String> map, Callback callback, boolean z) {
        com.alipay.sdk.m.s.a aVar = new com.alipay.sdk.m.s.a(this.b, String.valueOf(map), "oa-" + bizType);
        this.c = callback;
        if (a(aVar, str, bizType, map, z)) {
            com.alipay.sdk.m.k.a.b(this.b, aVar, "", aVar.d);
        }
    }

    private boolean a(com.alipay.sdk.m.s.a aVar, String str, BizType bizType, Map<String, String> map, boolean z) {
        PackageInfo packageInfo;
        if (this.f1093a) {
            this.d.post(new b(this, SYS_ERR, "该 OpenAuthTask 已在执行", null, null));
            return true;
        }
        this.f1093a = true;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (jElapsedRealtime - f <= 3000) {
            this.d.post(new b(this, 5000, "3s 内重复支付", null, null));
            return true;
        }
        f = jElapsedRealtime;
        com.alipay.sdk.m.j.a.a("");
        String strA = n.a(32);
        HashMap map2 = new HashMap(map);
        map2.put("mqpPkgName", this.b.getPackageName());
        map2.put("mqpScene", "sdk");
        List<a.b> listL = com.alipay.sdk.m.m.a.D().l();
        if (!com.alipay.sdk.m.m.a.D().h || listL == null) {
            listL = com.alipay.sdk.m.j.a.d;
        }
        n.c cVarA = n.a(aVar, this.b, listL);
        if (cVarA == null || cVarA.a(aVar) || cVarA.a() || (packageInfo = cVarA.f1270a) == null || packageInfo.versionCode < 122) {
            if (!z) {
                this.d.post(new b(this, 4001, "支付宝未安装或签名错误", null, null));
                return true;
            }
            map2.put("mqpScheme", String.valueOf(str));
            map2.put("mqpNotifyName", strA);
            map2.put("mqpScene", "landing");
            String strA2 = a(bizType, map2);
            Intent intent = new Intent(this.b, (Class<?>) H5OpenAuthActivity.class);
            intent.putExtra("url", String.format("https://render.alipay.com/p/s/i?scheme=%s", Uri.encode(strA2)));
            a.C0022a.a(aVar, intent);
            this.b.startActivity(intent);
            return false;
        }
        try {
            try {
                HashMap<String, String> mapA = com.alipay.sdk.m.s.a.a(aVar);
                mapA.put("ts_scheme", String.valueOf(SystemClock.elapsedRealtime()));
                map2.put("mqpLoc", new JSONObject((Map<String, Object>) mapA).toString());
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(aVar, "biz", "OpenAuthLocEx", th);
            }
            String strA3 = a(bizType, map2);
            e.put(strA, this.c);
            String strA4 = null;
            try {
                strA4 = a(jElapsedRealtime, strA, bizType, strA3);
            } catch (JSONException e2) {
                com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.q0, e2);
            }
            String str2 = strA4;
            if (TextUtils.isEmpty(str2)) {
                this.d.post(new b(this, SYS_ERR, "参数错误", null, null));
                return true;
            }
            Intent intent2 = new Intent("android.intent.action.VIEW", new Uri.Builder().scheme("alipays").authority("platformapi").path("startapp").appendQueryParameter(com.tkay.expressad.videocommon.e.b.u, "20001129").appendQueryParameter("payload", str2).build());
            intent2.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent2.setPackage(cVarA.f1270a.packageName);
            try {
                com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.Y, "" + jElapsedRealtime);
                a.C0022a.a(aVar, strA);
                this.b.startActivity(intent2);
            } catch (Throwable th2) {
                com.alipay.sdk.m.k.a.a(aVar, "biz", "StartWalletEx", th2);
            }
            return false;
        } catch (Throwable unused) {
            this.d.post(new b(this, SYS_ERR, "业务参数错误", null, null));
            return true;
        }
    }

    private String a(BizType bizType, Map<String, String> map) {
        if (bizType != null) {
            Uri.Builder builderAppendQueryParameter = new Uri.Builder().scheme("alipays").authority("platformapi").path("startapp").appendQueryParameter(com.tkay.expressad.videocommon.e.b.u, bizType.appId);
            if (a.f1094a[bizType.ordinal()] == 1) {
                builderAppendQueryParameter.appendQueryParameter("appClearTop", "false").appendQueryParameter("startMultApp", "YES");
            }
            for (Map.Entry<String, String> entry : map.entrySet()) {
                builderAppendQueryParameter.appendQueryParameter(entry.getKey(), entry.getValue());
            }
            return builderAppendQueryParameter.build().toString();
        }
        throw new RuntimeException("missing bizType");
    }

    private String a(long j, String str, BizType bizType, String str2) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("startTime", String.valueOf(j));
        jSONObject.put(IUserFeature.LOGIN_SUC_RS_SESSION, str);
        jSONObject.put("package", this.b.getPackageName());
        if (bizType != null) {
            jSONObject.put(com.tkay.expressad.videocommon.e.b.u, bizType.appId);
        }
        jSONObject.put(com.heytap.mcssdk.constant.b.C, "h.a.3.8.15");
        jSONObject.put("mqpURL", str2);
        return Base64.encodeToString(jSONObject.toString().getBytes(Charset.forName("UTF-8")), 2);
    }

    public static void a(String str, int i, String str2, Bundle bundle) {
        Callback callbackRemove = e.remove(str);
        if (callbackRemove != null) {
            try {
                callbackRemove.onResult(i, str2, bundle);
            } catch (Throwable th) {
                com.alipay.sdk.m.u.e.a(th);
            }
        }
    }
}
