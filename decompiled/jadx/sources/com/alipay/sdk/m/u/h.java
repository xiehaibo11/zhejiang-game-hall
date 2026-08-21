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

/* JADX INFO: loaded from: classes.dex */
public class h {
    public static final String j = "failed";
    public static final String k = "scheme_failed";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Activity f1255a;
    public volatile IAlixPay b;
    public boolean d;
    public g e;
    public final com.alipay.sdk.m.s.a f;
    public final Object c = IAlixPay.class;
    public boolean g = false;
    public String h = null;
    public String i = null;

    public class a implements AlipayResultActivity.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ CountDownLatch f1256a;

        public a(CountDownLatch countDownLatch) {
            this.f1256a = countDownLatch;
        }

        @Override // com.alipay.sdk.app.AlipayResultActivity.a
        public void a(int i, String str, String str2) {
            h.this.h = com.alipay.sdk.m.j.b.a(i, str, str2);
            this.f1256a.countDown();
        }
    }

    public class b implements APayEntranceActivity.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Object f1257a;

        public b(Object obj) {
            this.f1257a = obj;
        }

        @Override // com.alipay.sdk.app.APayEntranceActivity.a
        public void a(String str) {
            h.this.i = str;
            synchronized (this.f1257a) {
                try {
                    this.f1257a.notify();
                } finally {
                }
            }
        }
    }

    public class c implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ APayEntranceActivity.a f1258a;

        public c(APayEntranceActivity.a aVar) {
            this.f1258a = aVar;
        }

        @Override // java.lang.Runnable
        public void run() {
            if (h.this.f == null || h.this.f.d()) {
                return;
            }
            com.alipay.sdk.m.k.a.b(h.this.f, "biz", com.alipay.sdk.m.k.b.e0, "");
            if (com.alipay.sdk.m.m.a.D().w()) {
                h.this.f.b(true);
                this.f1258a.a(com.alipay.sdk.m.j.b.a());
            }
        }
    }

    public class d implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Intent f1259a;
        public final /* synthetic */ Object b;

        public d(Intent intent, Object obj) {
            this.f1259a = intent;
            this.b = obj;
        }

        @Override // java.lang.Runnable
        public void run() {
            try {
                if (h.this.f1255a != null) {
                    h.this.f1255a.startActivity(this.f1259a);
                } else {
                    com.alipay.sdk.m.k.a.b(h.this.f, "biz", com.alipay.sdk.m.k.b.c0, "");
                    Context contextA = h.this.f.a();
                    if (contextA != null) {
                        contextA.startActivity(this.f1259a);
                    }
                }
            } finally {
            }
        }
    }

    public class e extends IRemoteServiceCallback.Stub {
        public e() {
        }

        @Override // com.alipay.android.app.IRemoteServiceCallback
        public int getVersion() throws RemoteException {
            return 4;
        }

        @Override // com.alipay.android.app.IRemoteServiceCallback
        public boolean isHideLoadingScreen() throws RemoteException {
            return false;
        }

        @Override // com.alipay.android.app.IRemoteServiceCallback
        public void payEnd(boolean z, String str) throws RemoteException {
        }

        @Override // com.alipay.android.app.IRemoteServiceCallback
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

        @Override // com.alipay.android.app.IRemoteServiceCallback
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
                if (h.this.f1255a == null) {
                    com.alipay.sdk.m.k.a.b(h.this.f, "biz", com.alipay.sdk.m.k.b.a0, "");
                    Context contextA = h.this.f.a();
                    if (contextA != null) {
                        contextA.startActivity(intent);
                        return;
                    }
                    return;
                }
                long jElapsedRealtime = SystemClock.elapsedRealtime();
                h.this.f1255a.startActivity(intent);
                com.alipay.sdk.m.k.a.a(h.this.f, "biz", "stAct2", "" + (SystemClock.elapsedRealtime() - jElapsedRealtime));
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(h.this.f, "biz", com.alipay.sdk.m.k.b.b0, th);
                throw th;
            }
        }

        public /* synthetic */ e(h hVar, a aVar) {
            this();
        }
    }

    public class f implements ServiceConnection {
        public f() {
        }

        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            com.alipay.sdk.m.k.a.a(h.this.f, "biz", "srvCon");
            synchronized (h.this.c) {
                h.this.b = IAlixPay.Stub.asInterface(iBinder);
                h.this.c.notify();
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
            com.alipay.sdk.m.k.a.a(h.this.f, "biz", "srvDis");
            h.this.b = null;
        }

        public /* synthetic */ f(h hVar, a aVar) {
            this();
        }
    }

    public interface g {
        void a();

        void b();
    }

    public h(Activity activity, com.alipay.sdk.m.s.a aVar, g gVar) {
        this.f1255a = activity;
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
        a.C0022a.a(this.f, strA);
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
                return com.alipay.sdk.m.j.b.a(com.alipay.sdk.m.j.c.PAY_WAITTING.b(), com.alipay.sdk.m.j.c.PAY_WAITTING.a(), "");
            } catch (Throwable th2) {
                com.alipay.sdk.m.k.a.a(this.f, "biz", "BSAEx", th2);
                n.a("alipaySdk", com.alipay.sdk.m.l.b.q, this.f1255a, this.f);
                return "scheme_failed";
            }
        }
        Intent intent = new Intent(this.f1255a, (Class<?>) APayEntranceActivity.class);
        intent.putExtra(APayEntranceActivity.d, str);
        intent.putExtra(APayEntranceActivity.e, str2);
        intent.putExtra(APayEntranceActivity.f, strA);
        if (jSONObject != null) {
            intent.putExtra(APayEntranceActivity.g, jSONObject.toString());
        }
        new Handler(Looper.getMainLooper()).postDelayed(new c(bVar), com.alipay.sdk.m.m.a.D().k());
        com.alipay.sdk.m.k.a.a(this.f1255a, this.f, str, this.f.d);
        if (com.alipay.sdk.m.m.a.D().z()) {
            new Handler(Looper.getMainLooper()).post(new d(intent, obj));
        } else {
            try {
                if (this.f1255a != null) {
                    this.f1255a.startActivity(intent);
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
            cVarA = n.a(this.f, this.f1255a, listL);
        } catch (Throwable th) {
            th = th;
            cVarA = null;
        }
        if (cVarA != null) {
            try {
                if (cVarA.a(this.f) || cVarA.a() || n.a(cVarA.f1270a)) {
                    return "failed";
                }
                if (cVarA.f1270a != null && !"com.eg.android.AlipayGphone".equals(cVarA.f1270a.packageName)) {
                    strB = cVarA.f1270a.packageName;
                } else {
                    strB = n.b();
                }
                packageInfo = cVarA.f1270a != null ? cVarA.f1270a : null;
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
                                            boolean zA = com.alipay.sdk.m.m.a.D().a(this.f1255a, Integer.parseInt(jSONObjectOptJSONObject.getString(next)));
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
            if ((z || this.g) && !zB && b(strB, this.f1255a, this.f)) {
                return a(str, strB, packageInfo);
            }
            return a(str, strB, packageInfo, cVarA);
        }
        return "failed";
    }

    private void a(n.c cVar) throws InterruptedException {
        PackageInfo packageInfo;
        if (cVar == null || (packageInfo = cVar.f1270a) == null) {
            return;
        }
        String str = packageInfo.packageName;
        Intent intent = new Intent();
        intent.setClassName(str, "com.alipay.android.app.TransProcessPayActivity");
        try {
            this.f1255a.startActivity(intent);
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(this.f, "biz", "StartLaunchAppTransEx", th);
        }
        Thread.sleep(200L);
    }

    private String a(String str, String str2, PackageInfo packageInfo) {
        String str3 = packageInfo != null ? packageInfo.versionName : "";
        com.alipay.sdk.m.u.e.d(com.alipay.sdk.m.l.a.A, "pay payInvokeAct");
        com.alipay.sdk.m.k.a.a(this.f, "biz", com.alipay.sdk.m.k.b.X, str2 + "|" + str3);
        Activity activity = this.f1255a;
        com.alipay.sdk.m.s.a aVar = this.f;
        com.alipay.sdk.m.k.a.a(activity, aVar, str, aVar.d);
        return b(str, str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:48:0x00e3  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x018d A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String a(java.lang.String r9, java.lang.String r10, android.content.pm.PackageInfo r11, com.alipay.sdk.m.u.n.c r12) {
        /*
            Method dump skipped, instruction units count: 398
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.sdk.m.u.h.a(java.lang.String, java.lang.String, android.content.pm.PackageInfo, com.alipay.sdk.m.u.n$c):java.lang.String");
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
        a.C0022a.a(this.f, strA);
        AlipayResultActivity.f1089a.put(strA, new a(countDownLatch));
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("sourcePid", Binder.getCallingPid());
            jSONObject.put("external_info", str);
            jSONObject.put(PushClientConstants.TAG_PKG_NAME, this.f1255a.getPackageName());
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
            com.alipay.sdk.m.k.a.a(this.f1255a, this.f, str, this.f.d);
            this.f1255a.startActivity(intent);
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
            return com.alipay.sdk.m.j.b.a(com.alipay.sdk.m.j.c.PAY_WAITTING.b(), com.alipay.sdk.m.j.c.PAY_WAITTING.a(), "");
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
        com.alipay.sdk.m.k.a.a(this.f1255a, aVar, str, aVar.d);
        try {
            try {
                if (!com.alipay.sdk.m.m.a.D().f()) {
                    ComponentName componentNameStartService = this.f1255a.getApplication().startService(intent);
                    com.alipay.sdk.m.k.a.a(aVar, "biz", "stSrv", componentNameStartService != null ? componentNameStartService.getPackageName() : "null");
                } else {
                    com.alipay.sdk.m.k.a.a(aVar, "biz", "stSrv", "skipped");
                }
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(aVar, "biz", "ClientBindServiceFailed", th);
                n.a("alipaySdk", com.alipay.sdk.m.l.b.n, this.f1255a, this.f);
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
        if (this.f1255a.getApplicationContext().bindService(intent, fVar2, i)) {
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
                    n.a("alipaySdk", com.alipay.sdk.m.l.b.o, this.f1255a, this.f);
                    Pair<String, Boolean> pair = new Pair<>("failed", true);
                    try {
                        this.f1255a.getApplicationContext().unbindService(fVar2);
                    } catch (Throwable th3) {
                        com.alipay.sdk.m.u.e.a(th3);
                    }
                    com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                    com.alipay.sdk.m.k.a.a(this.f1255a, aVar, str, aVar.d);
                    this.b = null;
                    if (this.d && (activity4 = this.f1255a) != null) {
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
                if (this.f1255a.getRequestedOrientation() == 0) {
                    this.f1255a.setRequestedOrientation(1);
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
                                    n.a("alipaySdk", com.alipay.sdk.m.l.b.p, this.f1255a, this.f);
                                    if (com.alipay.sdk.m.m.a.D().u()) {
                                        Pair<String, Boolean> pair2 = new Pair<>("failed", false);
                                        try {
                                            iAlixPay.unregisterCallback(eVar);
                                        } catch (Throwable th6) {
                                            com.alipay.sdk.m.u.e.a(th6);
                                        }
                                        try {
                                            this.f1255a.getApplicationContext().unbindService(fVar2);
                                        } catch (Throwable th7) {
                                            com.alipay.sdk.m.u.e.a(th7);
                                        }
                                        com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                                        com.alipay.sdk.m.k.a.a(this.f1255a, aVar, str, aVar.d);
                                        this.b = null;
                                        if (this.d && (activity2 = this.f1255a) != null) {
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
                                this.f1255a.getApplicationContext().unbindService(fVar);
                            } catch (Throwable th10) {
                                com.alipay.sdk.m.u.e.a(th10);
                            }
                            com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                            com.alipay.sdk.m.k.a.a(this.f1255a, aVar, str, aVar.d);
                            this.b = null;
                            if (this.d && (activity3 = this.f1255a) != null) {
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
                    this.f1255a.getApplicationContext().unbindService(fVar);
                } catch (Throwable th16) {
                    com.alipay.sdk.m.u.e.a(th16);
                }
                com.alipay.sdk.m.k.a.a(aVar, "biz", com.alipay.sdk.m.k.b.T, "" + SystemClock.elapsedRealtime());
                com.alipay.sdk.m.k.a.a(this.f1255a, aVar, str, aVar.d);
                this.b = null;
                if (this.d && (activity = this.f1255a) != null) {
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
        this.f1255a = null;
        this.e = null;
    }
}
