package com.alipay.sdk.util;

import android.app.Activity;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.net.Uri;
import android.os.Binder;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.alipay.android.app.IAlixPay;
import com.alipay.android.app.IRemoteServiceCallback;
import com.alipay.sdk.app.AlipayResultActivity;
import com.alipay.sdk.data.a;
import com.alipay.sdk.util.n;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.vivo.push.PushClientConstants;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import org.json.JSONObject;

public class e {
    public static final String a = "failed";
    public static final String b = "scheme_failed";
    private Activity c;
    private IAlixPay d;
    private boolean f;
    private a g;
    private final Object e = IAlixPay.class;
    private ServiceConnection h = new f(this);
    private String i = null;
    private IRemoteServiceCallback j = new h(this);

    public interface a {
        void a();

        void b();
    }

    public e(Activity activity, a aVar) {
        this.c = activity;
        this.g = aVar;
    }

    public String a(String str) {
        String strA = "";
        try {
            List<a.a> listF = com.alipay.sdk.data.a.g().f();
            if (!com.alipay.sdk.data.a.g().p || listF == null) {
                listF = com.alipay.sdk.app.i.a;
            }
            n.a aVarA = n.a(this.c, listF);
            if (aVarA == null || aVarA.a() || aVarA.b() || n.a(aVarA.a)) {
                return "failed";
            }
            if (aVarA.a == null || "com.eg.android.AlipayGphone".equals(aVarA.a.packageName)) {
                strA = n.a();
            } else {
                strA = aVarA.a.packageName;
            }
            i = aVarA.a != null ? aVarA.a.versionCode : 0;
            a(aVarA);
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("biz", "CheckClientSignEx", th);
        }
        return a(str, strA, i);
    }

    private void a(n.a aVar) throws InterruptedException {
        PackageInfo packageInfo;
        if (aVar == null || (packageInfo = aVar.a) == null) {
            return;
        }
        String str = packageInfo.packageName;
        Intent intent = new Intent();
        intent.setClassName(str, "com.alipay.android.app.TransProcessPayActivity");
        try {
            this.c.startActivity(intent);
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("biz", "StartLaunchAppTransEx", th);
        }
        Thread.sleep(200L);
    }

    /* JADX WARN: Unreachable blocks removed: 2, instructions: 4 */
    private String a(String str, String str2, int i) {
        String strA = a(str, str2);
        if (!"failed".equals(strA) || !"com.eg.android.AlipayGphone".equals(str2) || i <= 125 || !com.alipay.sdk.data.a.g().b()) {
            return strA;
        }
        CountDownLatch countDownLatch = new CountDownLatch(1);
        String strA2 = n.a(32);
        com.alipay.sdk.app.statistic.a.a("biz", "BSPStart", strA2);
        AlipayResultActivity.d.put(strA2, new WeakReference(new g(this, countDownLatch)));
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("sourcePid", Binder.getCallingPid());
            jSONObject.put("external_info", str);
            jSONObject.put(PushClientConstants.TAG_PKG_NAME, this.c.getPackageName());
            jSONObject.put(IUserFeature.LOGIN_SUC_RS_SESSION, strA2);
            String str3 = "alipays://platefromapi/startapp?appId=20000125&mqpSchemePay=" + Uri.encode(android.util.Base64.encodeToString(jSONObject.toString().getBytes("UTF-8"), 2));
            Intent intent = new Intent();
            intent.setPackage(str2);
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.setData(Uri.parse(str3));
            this.c.startActivity(intent);
            com.alipay.sdk.data.a.g().a(this.c.getApplicationContext());
            countDownLatch.await();
            String str4 = this.i;
            String str5 = EnvironmentCompat.MEDIA_UNKNOWN;
            try {
                String str6 = l.a(str4).get("resultStatus");
                if (str6 == null) {
                    str6 = "null";
                }
                str5 = str6;
            } catch (Throwable th) {
                com.alipay.sdk.app.statistic.a.a("biz", "BSPStatEx", th);
            }
            com.alipay.sdk.app.statistic.a.a("biz", "BSPDone-" + str5, "");
            if (!TextUtils.isEmpty(str4)) {
                return str4;
            }
            com.alipay.sdk.app.statistic.a.a("biz", "BSPEmpty", "");
            return "scheme_failed";
        } catch (InterruptedException e) {
            com.alipay.sdk.app.statistic.a.a("biz", "BSPWaiting", e);
            return com.alipay.sdk.app.j.a(com.alipay.sdk.app.k.g.a(), com.alipay.sdk.app.k.g.b(), "");
        } catch (Throwable th2) {
            com.alipay.sdk.app.statistic.a.a("biz", "BSPEx", th2);
            return "scheme_failed";
        }
    }

    private String a(String str, String str2) {
        Activity activity;
        String strC;
        Activity activity2;
        Activity activity3;
        Intent intent = new Intent();
        intent.setPackage(str2);
        intent.setAction(n.a(str2));
        String strA = n.a(this.c, str2);
        try {
            if (!this.c.getApplicationContext().bindService(intent, this.h, 1)) {
                throw new Throwable("bindService fail");
            }
            synchronized (this.e) {
                if (this.d == null) {
                    try {
                        this.e.wait(com.alipay.sdk.data.a.g().a());
                    } catch (InterruptedException e) {
                        com.alipay.sdk.app.statistic.a.a("biz", "BindWaitTimeoutEx", e);
                    }
                }
            }
            try {
            } catch (Throwable th) {
                try {
                    com.alipay.sdk.app.statistic.a.a("biz", "ClientBindException", th);
                    strC = com.alipay.sdk.app.j.c();
                    try {
                        this.d.unregisterCallback(this.j);
                    } catch (Throwable th2) {
                        c.a(th2);
                    }
                    try {
                        this.c.getApplicationContext().unbindService(this.h);
                    } catch (Throwable th3) {
                        c.a(th3);
                    }
                    this.g = null;
                    this.j = null;
                    this.h = null;
                    this.d = null;
                    if (this.f && (activity2 = this.c) != null) {
                    }
                } catch (Throwable th4) {
                    try {
                        this.d.unregisterCallback(this.j);
                    } catch (Throwable th5) {
                        c.a(th5);
                    }
                    try {
                        this.c.getApplicationContext().unbindService(this.h);
                    } catch (Throwable th6) {
                        c.a(th6);
                    }
                    this.g = null;
                    this.j = null;
                    this.h = null;
                    this.d = null;
                    if (!this.f || (activity = this.c) == null) {
                        throw th4;
                    }
                    activity.setRequestedOrientation(0);
                    this.f = false;
                    throw th4;
                }
            }
            if (this.d == null) {
                com.alipay.sdk.app.statistic.a.a("biz", "ClientBindFailed", strA + "|" + n.a(this.c, str2));
                try {
                    this.d.unregisterCallback(this.j);
                } catch (Throwable th7) {
                    c.a(th7);
                }
                try {
                    this.c.getApplicationContext().unbindService(this.h);
                } catch (Throwable th8) {
                    c.a(th8);
                }
                this.g = null;
                this.j = null;
                this.h = null;
                this.d = null;
                if (this.f && (activity3 = this.c) != null) {
                    activity3.setRequestedOrientation(0);
                    this.f = false;
                }
                return "failed";
            }
            if (this.g != null) {
                this.g.a();
            }
            if (this.c.getRequestedOrientation() == 0) {
                this.c.setRequestedOrientation(1);
                this.f = true;
            }
            this.d.registerCallback(this.j);
            strC = this.d.Pay(str);
            try {
                this.d.unregisterCallback(this.j);
            } catch (Throwable th9) {
                c.a(th9);
            }
            try {
                this.c.getApplicationContext().unbindService(this.h);
            } catch (Throwable th10) {
                c.a(th10);
            }
            this.g = null;
            this.j = null;
            this.h = null;
            this.d = null;
            if (this.f && (activity2 = this.c) != null) {
                activity2.setRequestedOrientation(0);
                this.f = false;
            }
            return strC;
        } catch (Throwable th11) {
            com.alipay.sdk.app.statistic.a.a("biz", "ClientBindServiceFailed", th11);
            return "failed";
        }
    }

    public void a() {
        this.c = null;
    }
}
