package com.alipay.sdk.m.u;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.net.Uri;
import android.os.Binder;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.RemoteException;
import android.os.SystemClock;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Pair;
import com.alipay.android.app.IAlixPay;
import com.alipay.android.app.IRemoteServiceCallback;
import com.alipay.sdk.app.APayEntranceActivity;
import com.alipay.sdk.app.AlipayResultActivity;
import com.alipay.sdk.m.m.a;
import com.alipay.sdk.m.s.a;
import com.alipay.sdk.m.u.n;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.vivo.push.PushClientConstants;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import org.json.JSONObject;

public class h {
    public static final String j = "failed";
    public static final String k = "scheme_failed";
    public Activity a;
    public volatile IAlixPay b;
    public boolean d;
    public g e;
    public final com.alipay.sdk.m.s.a f;
    public final Object c = IAlixPay.class;
    public boolean g = false;
    public String h = null;
    public String i = null;

    public class a implements AlipayResultActivity.a {
        public final CountDownLatch a;

        public a(CountDownLatch countDownLatch) {
            this.a = countDownLatch;
        }

        @Override
        public void a(int i, String str, String str2) {
            h.this.h = com.alipay.sdk.m.j.b.a(i, str, str2);
            this.a.countDown();
        }
    }

    public class b implements APayEntranceActivity.a {
        public final Object a;

        public b(Object obj) {
            this.a = obj;
        }

        @Override
        public void a(String str) {
            h.this.i = str;
            synchronized (this.a) {
                try {
                    this.a.notify();
                } finally {
                }
            }
        }
    }

    public class c implements Runnable {
        public final APayEntranceActivity.a a;

        public c(APayEntranceActivity.a aVar) {
            this.a = aVar;
        }

        @Override
        public void run() {
            if (h.this.f == null || h.this.f.d()) {
                return;
            }
            com.alipay.sdk.m.k.a.b(h.this.f, "biz", com.alipay.sdk.m.k.b.e0, "");
            if (com.alipay.sdk.m.m.a.D().w()) {
                h.this.f.b(true);
                this.a.a(com.alipay.sdk.m.j.b.a());
            }
        }
    }

    public class d implements Runnable {
        public final Intent a;
        public final Object b;

        public d(Intent intent, Object obj) {
            this.a = intent;
            this.b = obj;
        }

        @Override
        public void run() {
            try {
                if (h.this.a != null) {
                    h.this.a.startActivity(this.a);
                } else {
                    com.alipay.sdk.m.k.a.b(h.this.f, "biz", com.alipay.sdk.m.k.b.c0, "");
                    Context contextA = h.this.f.a();
                    if (contextA != null) {
                        contextA.startActivity(this.a);
                    }
                }
            } finally {
            }
        }
    }

    public class e extends IRemoteServiceCallback.Stub {
        public e() {
        }

        @Override
        public int getVersion() throws RemoteException {
            return 4;
        }

        @Override
        public boolean isHideLoadingScreen() throws RemoteException {
            return false;
        }

        @Override
        public void payEnd(boolean z, String str) throws RemoteException {
        }

        @Override
        public void r03(String str, String str2, Map map) throws RemoteException {
            com.alipay.sdk.m.k.a.a(h.this.f, com.alipay.sdk.m.k.b.p, str, str2);
            if (TextUtils.equals(str2, "ActivityStartSuccess")) {
                if (h.this.e != null) {
                    h.this.e.a();
                }
                if (h.this.f != null) {
                    h.this.f.c(true);
                }
            }
        }

        @Override
        public void startActivity(String str, String str2, int i, Bundle bundle) throws RemoteException {
            Intent intent = new Intent("android.intent.action.MAIN", (Uri) null);
            if (bundle == null) {
                bundle = new Bundle();
            }
            try {
                bundle.putInt("CallingPid", i);
                intent.putExtras(bundle);
            } catch (Exception e) {
                com.alipay.sdk.m.k.a.a(h.this.f, "biz", com.alipay.sdk.m.k.b.Z, e);
            }
            intent.setClassName(str, str2);
            try {
                if (Build.VERSION.SDK_INT >= 16) {
                    ActivityManager.RunningAppProcessInfo runningAppProcessInfo = new ActivityManager.RunningAppProcessInfo();
                    ActivityManager.getMyMemoryState(runningAppProcessInfo);
                    com.alipay.sdk.m.k.a.a(h.this.f, "biz", "isFg", runningAppProcessInfo.processName + "|" + runningAppProcessInfo.importance + "|");
                }
            } catch (Throwable unused) {
            }
            try {
                if (h.this.a == null) {
                    com.alipay.sdk.m.k.a.b(h.this.f, "biz", com.alipay.sdk.m.k.b.a0, "");
                    Context contextA = h.this.f.a();
                    if (contextA != null) {
                        contextA.startActivity(intent);
                        return;
                    }
                    return;
                }
                long jElapsedRealtime = SystemClock.elapsedRealtime();
                h.this.a.startActivity(intent);
                com.alipay.sdk.m.k.a.a(h.this.f, "biz", "stAct2", "" + (SystemClock.elapsedRealtime() - jElapsedRealtime));
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(h.this.f, "biz", com.alipay.sdk.m.k.b.b0, th);
                throw th;
            }
        }

        public e(h hVar, a aVar) {
            this();
        }
    }

    public class f implements ServiceConnection {
        public f() {
        }

        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            com.alipay.sdk.m.k.a.a(h.this.f, "biz", "srvCon");
            synchronized (h.this.c) {
                h.this.b = IAlixPay.Stub.asInterface(iBinder);
                h.this.c.notify();
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
            com.alipay.sdk.m.k.a.a(h.this.f, "biz", "srvDis");
            h.this.b = null;
        }

        public f(h hVar, a aVar) {
            this();
        }
    }

    public interface g {
        void a();

        void b();
    }

    public h(Activity activity, com.alipay.sdk.m.s.a aVar, g gVar) {
        this.a = activity;
        this.f = aVar;
        this.e = gVar;
        com.alipay.sdk.m.u.e.d(com.alipay.sdk.m.l.a.A, "alipaySdk");
    }

    private String b(String str, String str2) {
        JSONObject jSONObject;
        String str3;
        Object obj = new Object();
        String strA = n.a(32);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        com.alipay.sdk.m.k.a.a(this.f, "biz", "BSAStart", strA + "|" + jElapsedRealtime);
        a.a.a(this.f, strA);
        b bVar = new b(obj);
        APayEntranceActivity.h.put(strA, bVar);
        try {
            HashMap<String, String> mapA = com.alipay.sdk.m.s.a.a(this.f);
            mapA.put("ts_intent", String.valueOf(jElapsedRealtime));
            jSONObject = new JSONObject((Map<String, Object>) mapA);
        } catch (Throwable th) {
            try {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSALocEx", th);
                jSONObject = null;
            } catch (InterruptedException e2) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSAWaiting", e2);
                return com.alipay.sdk.m.j.b.a(com.alipay.sdk.m.j.c.j.b(), com.alipay.sdk.m.j.c.j.a(), "");
            } catch (Throwable th2) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSAEx", th2);
                n.a("alipaySdk", com.alipay.sdk.m.l.b.q, this.a, this.f);
                return "scheme_failed";
            }
        }
        Intent intent = new Intent(this.a, (Class<?>) APayEntranceActivity.class);
        intent.putExtra(APayEntranceActivity.d, str);
        intent.putExtra(APayEntranceActivity.e, str2);
        intent.putExtra(APayEntranceActivity.f, strA);
        if (jSONObject != null) {
            intent.putExtra(APayEntranceActivity.g, jSONObject.toString());
        }
        new Handler(Looper.getMainLooper()).postDelayed(new c(bVar), com.alipay.sdk.m.m.a.D().k());
        com.alipay.sdk.m.k.a.a(this.a, this.f, str, this.f.d);
        if (com.alipay.sdk.m.m.a.D().z()) {
            new Handler(Looper.getMainLooper()).post(new d(intent, obj));
        } else {
            try {
                if (this.a != null) {
                    this.a.startActivity(intent);
                } else {
                    com.alipay.sdk.m.k.a.b(this.f, "biz", com.alipay.sdk.m.k.b.a0, "");
                    Context contextA = this.f.a();
                    if (contextA != null) {
                        contextA.startActivity(intent);
                    }
                }
            } catch (Throwable th3) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", com.alipay.sdk.m.k.b.b0, th3);
                throw th3;
            }
        }
        synchronized (obj) {
            obj.wait();
        }
        String str4 = this.i;
        try {
            str3 = l.a(this.f, str4).get("resultStatus");
            if (str3 == null) {
                str3 = "null";
            }
        } catch (Throwable th4) {
            com.alipay.sdk.m.k.a.a(this.f, "biz", "BSAStatEx", th4);
            str3 = EnvironmentCompat.MEDIA_UNKNOWN;
        }
        com.alipay.sdk.m.k.a.a(this.f, "biz", "BSADone-" + str3);
        if (!TextUtils.isEmpty(str4)) {
            return str4;
        }
        com.alipay.sdk.m.k.a.a(this.f, "biz", "BSAEmpty");
        return "scheme_failed";
    }

    public String a(String str, boolean z) {
        n.c cVarA;
        String strB = "";
        try {
            List<a.b> listL = com.alipay.sdk.m.m.a.D().l();
            if (!com.alipay.sdk.m.m.a.D().h || listL == null) {
                listL = com.alipay.sdk.m.j.a.d;
            }
            cVarA = n.a(this.f, this.a, listL);
        } catch (Throwable th) {
            th = th;
            cVarA = null;
        }
        if (cVarA != null) {
            try {
                if (cVarA.a(this.f) || cVarA.a() || n.a(cVarA.a)) {
                    return "failed";
                }
                if (cVarA.a != null && !"com.eg.android.AlipayGphone".equals(cVarA.a.packageName)) {
                    strB = cVarA.a.packageName;
                } else {
                    strB = n.b();
                }
                packageInfo = cVarA.a != null ? cVarA.a : null;
                String strC = com.alipay.sdk.m.m.a.D().c();
                if (strC != null) {
                    if (strC.length() > 0) {
                        try {
                            JSONObject jSONObjectOptJSONObject = new JSONObject(strC).optJSONObject(strB);
                            if (jSONObjectOptJSONObject != null && jSONObjectOptJSONObject.length() > 0) {
                                Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                                while (itKeys.hasNext()) {
                                    String next = itKeys.next();
                                    int i = Integer.parseInt(next);
                                    if (packageInfo != null && packageInfo.versionCode >= i) {
                                        try {
                                            boolean zA = com.alipay.sdk.m.m.a.D().a(this.a, Integer.parseInt(jSONObjectOptJSONObject.getString(next)));
                                            this.g = zA;
                                            if (zA) {
                                                break;
                                            }
                                        } catch (Exception unused) {
                                            continue;
                                        }
                                    }
                                }
                            }
                        } catch (Throwable unused2) {
                        }
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                com.alipay.sdk.m.k.a.a(this.f, "biz", "CheckClientSignEx", th);
            }
            boolean zB = n.b(this.f);
            if ((z || this.g) && !zB && b(strB, this.a, this.f)) {
                return a(str, strB, packageInfo);
            }
            return a(str, strB, packageInfo, cVarA);
        }
        return "failed";
    }

    private void a(n.c cVar) throws InterruptedException {
        PackageInfo packageInfo;
        if (cVar == null || (packageInfo = cVar.a) == null) {
            return;
        }
        String str = packageInfo.packageName;
        Intent intent = new Intent();
        intent.setClassName(str, "com.alipay.android.app.TransProcessPayActivity");
        try {
            this.a.startActivity(intent);
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(this.f, "biz", "StartLaunchAppTransEx", th);
        }
        Thread.sleep(200L);
    }

    private String a(String str, String str2, PackageInfo packageInfo) {
        String str3 = packageInfo != null ? packageInfo.versionName : "";
        com.alipay.sdk.m.u.e.d(com.alipay.sdk.m.l.a.A, "pay payInvokeAct");
        com.alipay.sdk.m.k.a.a(this.f, "biz", com.alipay.sdk.m.k.b.X, str2 + "|" + str3);
        Activity activity = this.a;
        com.alipay.sdk.m.s.a aVar = this.f;
        com.alipay.sdk.m.k.a.a(activity, aVar, str, aVar.d);
        return b(str, str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:48:0x00e3  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x018d A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String a(String str, String str2, PackageInfo packageInfo, n.c cVar) {
        String str3;
        com.alipay.sdk.m.s.a aVar;
        Activity activity;
        boolean zContains = false;
        int i = packageInfo != null ? packageInfo.versionCode : 0;
        if (packageInfo != null) {
            String str4 = packageInfo.versionName;
        }
        com.alipay.sdk.m.u.e.d(com.alipay.sdk.m.l.a.A, "pay bind or scheme");
        com.alipay.sdk.m.s.a aVar2 = this.f;
        if (aVar2 != null && !TextUtils.isEmpty(aVar2.g)) {
            zContains = this.f.g.toLowerCase().contains("auth");
        }
        if (!zContains && n.i()) {
            if (cVar != null) {
                try {
                    if (com.alipay.sdk.m.m.a.D().B()) {
                        a(cVar);
                    }
                } catch (Throwable unused) {
                }
            }
            com.alipay.sdk.m.k.a.a(this.f, "biz", "BindSkipByModel");
        } else if (!zContains && n.d(this.f, str2)) {
            if (cVar != null) {
                try {
                    if (com.alipay.sdk.m.m.a.D().B()) {
                        a(cVar);
                    }
                } catch (Throwable unused2) {
                }
            }
            com.alipay.sdk.m.k.a.a(this.f, "biz", "BindSkipByL");
        } else {
            if (cVar != null) {
                try {
                    if (!com.alipay.sdk.m.m.a.D().p()) {
                        a(cVar);
                    }
                } catch (Throwable unused3) {
                }
            }
            Pair<String, Boolean> pairA = a(str, str2, this.f);
            str3 = (String) pairA.first;
            try {
                if ("failed".equals(str3) && ((Boolean) pairA.second).booleanValue() && com.alipay.sdk.m.m.a.D().n()) {
                    com.alipay.sdk.m.k.a.a(this.f, "biz", "BindRetry");
                    str3 = (String) a(str, str2, this.f).first;
                }
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BindRetryEx", th);
            }
            com.alipay.sdk.m.u.e.d(com.alipay.sdk.m.l.a.A, "pay bind result: " + str3);
            Activity activity2 = this.a;
            com.alipay.sdk.m.s.a aVar3 = this.f;
            com.alipay.sdk.m.k.a.a(activity2, aVar3, str, aVar3.d);
            if ("failed".equals(str3)) {
                return str3;
            }
            if (!"com.eg.android.AlipayGphone".equals(str2)) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPNotStartByAlipay", str2 + "|" + i);
                return str3;
            }
            boolean zQ = com.alipay.sdk.m.m.a.D().q();
            if (i >= 460 && zQ && !zContains && (activity = this.a) != null && b(str2, activity, this.f)) {
                return a(str, str2, packageInfo);
            }
            if (!com.alipay.sdk.m.m.a.D().i()) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPNotStartByConfig", "");
                return str3;
            }
            if (i <= 125) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPNotStartByPkg", str2 + "|" + i);
                return str3;
            }
            if (com.alipay.sdk.m.m.a.D().m() && (aVar = this.f) != null && n.b(aVar.f) != 0) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPNotStartByUsr");
                return str3;
            }
            Activity activity3 = this.a;
            return (activity3 == null || !a(str2, activity3, this.f)) ? "scheme_failed" : a(str, str2);
        }
        str3 = "failed";
        com.alipay.sdk.m.u.e.d(com.alipay.sdk.m.l.a.A, "pay bind result: " + str3);
        Activity activity22 = this.a;
        com.alipay.sdk.m.s.a aVar32 = this.f;
        com.alipay.sdk.m.k.a.a(activity22, aVar32, str, aVar32.d);
        if ("failed".equals(str3)) {
        }
    }

    public static boolean b(String str, Context context, com.alipay.sdk.m.s.a aVar) {
        try {
            Intent intent = new Intent();
            intent.setClassName(str, "com.alipay.android.app.flybird.ui.window.FlyBirdWindowActivity");
            if (intent.resolveActivityInfo(context.getPackageManager(), 0) != null) {
                return true;
            }
            com.alipay.sdk.m.k.a.a(aVar, "biz", "BSADetectFail");
            return false;
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(aVar, "biz", "BSADetectFail", th);
            return false;
        }
    }

    private String a(String str, String str2) {
        String str3;
        CountDownLatch countDownLatch = new CountDownLatch(1);
        String strA = n.a(32);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPStart", strA + "|" + jElapsedRealtime);
        a.a.a(this.f, strA);
        AlipayResultActivity.a.put(strA, new a(countDownLatch));
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("sourcePid", Binder.getCallingPid());
            jSONObject.put("external_info", str);
            jSONObject.put(PushClientConstants.TAG_PKG_NAME, this.a.getPackageName());
            jSONObject.put(IUserFeature.LOGIN_SUC_RS_SESSION, strA);
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes("UTF-8"), 2);
            Uri.Builder builderAppendQueryParameter = new Uri.Builder().scheme("alipays").authority("platformapi").path("startapp").appendQueryParameter(com.tkay.expressad.videocommon.e.b.u, "20000125");
            builderAppendQueryParameter.appendQueryParameter("mqpSchemePay", strEncodeToString);
            try {
                HashMap<String, String> mapA = com.alipay.sdk.m.s.a.a(this.f);
                mapA.put("ts_scheme", String.valueOf(jElapsedRealtime));
                builderAppendQueryParameter.appendQueryParameter("mqpLoc", new JSONObject((Map<String, Object>) mapA).toString());
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPLocEx", th);
            }
            String string = builderAppendQueryParameter.build().toString();
            Intent intent = new Intent();
            intent.setPackage(str2);
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.setData(Uri.parse(string));
            com.alipay.sdk.m.k.a.a(this.a, this.f, str, this.f.d);
            this.a.startActivity(intent);
            com.alipay.sdk.m.u.e.d(com.alipay.sdk.m.l.a.A, "pay scheme waiting " + string);
            countDownLatch.await();
            String str4 = this.h;
            try {
                str3 = l.a(this.f, str4).get("resultStatus");
                if (str3 == null) {
                    str3 = "null";
                }
            } catch (Throwable th2) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPStatEx", th2);
                str3 = EnvironmentCompat.MEDIA_UNKNOWN;
            }
            com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPDone-" + str3);
            if (!TextUtils.isEmpty(str4)) {
                return str4;
            }
            com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPEmpty");
            return "scheme_failed";
        } catch (InterruptedException e2) {
            com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPWaiting", e2);
            return com.alipay.sdk.m.j.b.a(com.alipay.sdk.m.j.c.j.b(), com.alipay.sdk.m.j.c.j.a(), "");
        } catch (Throwable th3) {
            com.alipay.sdk.m.k.a.a(this.f, "biz", "BSPEx", th3);
            return "scheme_failed";
        }
    }

    public static boolean a(String str, Context context, com.alipay.sdk.m.s.a aVar) {
        try {
            Intent intent = new Intent("android.intent.action.MAIN", (Uri) null);
            intent.setClassName(str, "com.alipay.android.msp.ui.views.MspContainerActivity");
            if (intent.resolveActivityInfo(context.getPackageManager(), 0) != null) {
                return true;
            }
            com.alipay.sdk.m.k.a.a(aVar, "biz", "BSPDetectFail");
            return false;
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(aVar, "biz", "BSPDetectFail", th);
            return false;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private Pair<String, Boolean> a(String str, String str2, com.alipay.sdk.m.s.a aVar) {
        int i;
        f fVar;
        IRemoteServiceCallback iRemoteServiceCallback;
        Activity activity;
        int version;
        String strA;
        Activity activity2;
        Activity activity3;
        String strPay;
        Activity activity4;
        Intent intent = new Intent();
        intent.setPackage(str2);
        intent.setAction(n.c(str2));
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(jElapsedRealtime);
        sb.append("|");
        sb.append(str != null ? str.length() : 0);
        com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.R, sb.toString());
        com.alipay.sdk.m.k.a.a(this.a, aVar, str, aVar.d);
        try {
            try {
                if (!com.alipay.sdk.m.m.a.D().f()) {
                    ComponentName componentNameStartService = this.a.getApplication().startService(intent);
                    com.alipay.sdk.m.k.a.a(aVar, "biz", "stSrv", componentNameStartService != null ? componentNameStartService.getPackageName() : "null");
                } else {
                    com.alipay.sdk.m.k.a.a(aVar, "biz", "stSrv", "skipped");
                }
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(aVar, "biz", "ClientBindServiceFailed", th);
                n.a("alipaySdk", com.alipay.sdk.m.l.b.n, this.a, this.f);
                return new Pair<>("failed", true);
            }
        } catch (Throwable th2) {
            com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.K, th2);
        }
        if (com.alipay.sdk.m.m.a.D().b()) {
            i = 65;
            com.alipay.sdk.m.k.a.a(aVar, "biz", "bindFlg", "imp");
        } else {
            i = 1;
        }
        a aVar2 = null;
        f fVar2 = new f(this, aVar2);
        if (this.a.getApplicationContext().bindService(intent, fVar2, i)) {
            synchronized (this.c) {
                if (this.b == null) {
                    try {
                        this.c.wait(com.alipay.sdk.m.m.a.D().k());
                    } catch (InterruptedException e2) {
                        com.alipay.sdk.m.k.a.a(aVar, "biz", "BindWaitTimeoutEx", e2);
                    }
                }
            }
            IAlixPay iAlixPay = this.b;
            try {
                if (iAlixPay == null) {
                    com.alipay.sdk.m.k.a.b(aVar, "biz", "ClientBindFailed", "");
                    n.a("alipaySdk", com.alipay.sdk.m.l.b.o, this.a, this.f);
                    Pair<String, Boolean> pair = new Pair<>("failed", true);
                    try {
                        this.a.getApplicationContext().unbindService(fVar2);
                    } catch (Throwable th3) {
                        com.alipay.sdk.m.u.e.a(th3);
                    }
                    com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                    com.alipay.sdk.m.k.a.a(this.a, aVar, str, aVar.d);
                    this.b = null;
                    if (this.d && (activity4 = this.a) != null) {
                        activity4.setRequestedOrientation(0);
                        this.d = false;
                    }
                    return pair;
                }
                long jElapsedRealtime2 = SystemClock.elapsedRealtime();
                com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.S, "" + jElapsedRealtime2);
                if (this.e != null) {
                    this.e.b();
                }
                if (this.a.getRequestedOrientation() == 0) {
                    this.a.setRequestedOrientation(1);
                    this.d = true;
                }
                try {
                    version = iAlixPay.getVersion();
                } catch (Throwable th4) {
                    com.alipay.sdk.m.u.e.a(th4);
                    version = 0;
                }
                IRemoteServiceCallback eVar = new e(this, aVar2);
                try {
                    if (version >= 3) {
                        iAlixPay.registerCallback03(eVar, str, null);
                    } else {
                        iAlixPay.registerCallback(eVar);
                    }
                    try {
                        long jElapsedRealtime3 = SystemClock.elapsedRealtime();
                        StringBuilder sb2 = new StringBuilder();
                        try {
                            sb2.append("");
                            sb2.append(jElapsedRealtime3);
                            com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.U, sb2.toString());
                            if (version >= 3) {
                                iAlixPay.r03("biz", "bind_pay", null);
                            }
                            try {
                                if (version >= 2) {
                                    Map mapA = com.alipay.sdk.m.s.a.a(aVar);
                                    mapA.put("ts_bind", String.valueOf(jElapsedRealtime));
                                    mapA.put("ts_bend", String.valueOf(jElapsedRealtime2));
                                    mapA.put("ts_pay", String.valueOf(jElapsedRealtime3));
                                    strPay = iAlixPay.pay02(str, mapA);
                                } else {
                                    strPay = iAlixPay.Pay(str);
                                }
                                strA = strPay;
                                fVar = fVar2;
                                iRemoteServiceCallback = eVar;
                            } catch (Throwable th5) {
                                if (this.f != null && !this.f.f()) {
                                    com.alipay.sdk.m.k.a.a(aVar, "biz", "ClientBindException", th5);
                                    n.a("alipaySdk", com.alipay.sdk.m.l.b.p, this.a, this.f);
                                    if (com.alipay.sdk.m.m.a.D().u()) {
                                        Pair<String, Boolean> pair2 = new Pair<>("failed", false);
                                        try {
                                            iAlixPay.unregisterCallback(eVar);
                                        } catch (Throwable th6) {
                                            com.alipay.sdk.m.u.e.a(th6);
                                        }
                                        try {
                                            this.a.getApplicationContext().unbindService(fVar2);
                                        } catch (Throwable th7) {
                                            com.alipay.sdk.m.u.e.a(th7);
                                        }
                                        com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                                        com.alipay.sdk.m.k.a.a(this.a, aVar, str, aVar.d);
                                        this.b = null;
                                        if (this.d && (activity2 = this.a) != null) {
                                            activity2.setRequestedOrientation(0);
                                            this.d = false;
                                        }
                                        return pair2;
                                    }
                                }
                                fVar = fVar2;
                                iRemoteServiceCallback = eVar;
                                try {
                                    strA = com.alipay.sdk.m.j.b.a();
                                } catch (Throwable th8) {
                                    th = th8;
                                }
                            }
                            try {
                                iAlixPay.unregisterCallback(iRemoteServiceCallback);
                            } catch (Throwable th9) {
                                com.alipay.sdk.m.u.e.a(th9);
                            }
                            try {
                                this.a.getApplicationContext().unbindService(fVar);
                            } catch (Throwable th10) {
                                com.alipay.sdk.m.u.e.a(th10);
                            }
                            com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                            com.alipay.sdk.m.k.a.a(this.a, aVar, str, aVar.d);
                            this.b = null;
                            if (this.d && (activity3 = this.a) != null) {
                                activity3.setRequestedOrientation(0);
                                this.d = false;
                            }
                            return new Pair<>(strA, false);
                        } catch (Throwable th11) {
                            th = th11;
                            fVar = fVar2;
                            iRemoteServiceCallback = eVar;
                        }
                    } catch (Throwable th12) {
                        th = th12;
                        iRemoteServiceCallback = eVar;
                        fVar = fVar2;
                    }
                } catch (Throwable th13) {
                    th = th13;
                    iRemoteServiceCallback = eVar;
                    fVar = fVar2;
                }
            } catch (Throwable th14) {
                th = th14;
                fVar = fVar2;
                iRemoteServiceCallback = null;
            }
            try {
                com.alipay.sdk.m.k.a.a(aVar, "biz", "ClientBindFailed", th, "in_bind");
                Pair<String, Boolean> pair3 = new Pair<>("failed", true);
                if (iRemoteServiceCallback != null) {
                    try {
                        iAlixPay.unregisterCallback(iRemoteServiceCallback);
                    } catch (Throwable th15) {
                        com.alipay.sdk.m.u.e.a(th15);
                    }
                }
                try {
                    this.a.getApplicationContext().unbindService(fVar);
                } catch (Throwable th16) {
                    com.alipay.sdk.m.u.e.a(th16);
                }
                com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                com.alipay.sdk.m.k.a.a(this.a, aVar, str, aVar.d);
                this.b = null;
                if (this.d && (activity = this.a) != null) {
                    activity.setRequestedOrientation(0);
                    this.d = false;
                }
                return pair3;
            } finally {
            }
        } else {
            throw new Throwable("bindService fail");
        }
    }

    public void a() {
        this.a = null;
        this.e = null;
    }
}
