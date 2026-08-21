package com.alipay.sdk.m.w;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.ConditionVariable;
import android.text.TextUtils;
import com.alipay.apmobilesecuritysdk.face.APSecuritySdk;
import com.alipay.sdk.m.w.a;
import java.util.HashMap;
import java.util.concurrent.Callable;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class b {

    public static class a implements a.InterfaceC0024a<Object, Boolean> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.alipay.sdk.m.w.a.InterfaceC0024a
        public Boolean a(Object obj) {
            return Boolean.valueOf((obj instanceof String) || obj == null);
        }
    }

    /* JADX INFO: renamed from: com.alipay.sdk.m.w.b$b, reason: collision with other inner class name */
    public static class CallableC0025b implements Callable<String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Context f1272a;

        public CallableC0025b(Context context) {
            this.f1272a = context;
        }

        @Override // java.util.concurrent.Callable
        public String call() {
            return com.alipay.sdk.m.b.c.a(this.f1272a);
        }
    }

    public static class c implements a.InterfaceC0024a<Object, Boolean> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.alipay.sdk.m.w.a.InterfaceC0024a
        public Boolean a(Object obj) {
            return Boolean.valueOf((obj instanceof NetworkInfo) || obj == null);
        }
    }

    public static class d implements Callable<NetworkInfo> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Context f1273a;

        public d(Context context) {
            this.f1273a = context;
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // java.util.concurrent.Callable
        public NetworkInfo call() {
            return ((ConnectivityManager) this.f1273a.getApplicationContext().getSystemService("connectivity")).getActiveNetworkInfo();
        }
    }

    public static class e implements a.InterfaceC0024a<Object, Boolean> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.alipay.sdk.m.w.a.InterfaceC0024a
        public Boolean a(Object obj) {
            return Boolean.valueOf((obj instanceof String) || obj == null);
        }
    }

    public static class f implements Callable<String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Context f1274a;
        public final /* synthetic */ com.alipay.sdk.m.s.a b;

        public f(Context context, com.alipay.sdk.m.s.a aVar) {
            this.f1274a = context;
            this.b = aVar;
        }

        @Override // java.util.concurrent.Callable
        public String call() {
            try {
                return com.alipay.sdk.m.n0.a.c(this.f1274a);
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.b(this.b, "third", "GetUtdidEx", th.getClass().getName());
                return "";
            }
        }
    }

    public static class g implements a.InterfaceC0024a<Object, Boolean> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.alipay.sdk.m.w.a.InterfaceC0024a
        public Boolean a(Object obj) {
            return Boolean.valueOf((obj instanceof String) || obj == null);
        }
    }

    public static class h implements Callable<String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ String f1275a;
        public final /* synthetic */ String b;
        public final /* synthetic */ Context c;
        public final /* synthetic */ com.alipay.sdk.m.s.a d;

        public class a implements APSecuritySdk.InitResultListener {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ String[] f1276a;
            public final /* synthetic */ ConditionVariable b;

            public a(String[] strArr, ConditionVariable conditionVariable) {
                this.f1276a = strArr;
                this.b = conditionVariable;
            }

            @Override // com.alipay.apmobilesecuritysdk.face.APSecuritySdk.InitResultListener
            public void onResult(APSecuritySdk.TokenResult tokenResult) {
                if (tokenResult != null) {
                    this.f1276a[0] = tokenResult.apdidToken;
                }
                this.b.open();
            }
        }

        public h(String str, String str2, Context context, com.alipay.sdk.m.s.a aVar) {
            this.f1275a = str;
            this.b = str2;
            this.c = context;
            this.d = aVar;
        }

        @Override // java.util.concurrent.Callable
        public String call() {
            HashMap map = new HashMap();
            map.put("tid", this.f1275a);
            map.put("utdid", this.b);
            String[] strArr = {""};
            try {
                APSecuritySdk aPSecuritySdk = APSecuritySdk.getInstance(this.c);
                ConditionVariable conditionVariable = new ConditionVariable();
                aPSecuritySdk.initToken(0, map, new a(strArr, conditionVariable));
                conditionVariable.block(3000L);
            } catch (Throwable th) {
                com.alipay.sdk.m.u.e.a(th);
                com.alipay.sdk.m.k.a.b(this.d, "third", "GetApdidEx", th.getClass().getName());
            }
            if (TextUtils.isEmpty(strArr[0])) {
                com.alipay.sdk.m.k.a.b(this.d, "third", "GetApdidNull", "missing token");
            }
            return strArr[0];
        }
    }

    public static NetworkInfo a(com.alipay.sdk.m.s.a aVar, Context context) {
        return (NetworkInfo) com.alipay.sdk.m.w.a.a(2, 10L, TimeUnit.SECONDS, new c(), new d(com.alipay.sdk.m.w.a.a(context)), false, 10L, TimeUnit.SECONDS, aVar, false);
    }

    public static String b(com.alipay.sdk.m.s.a aVar, Context context) {
        if (!com.alipay.sdk.m.m.a.D().x()) {
            return "";
        }
        return (String) com.alipay.sdk.m.w.a.a(1, 1L, TimeUnit.DAYS, new a(), new CallableC0025b(com.alipay.sdk.m.w.a.a(context)), true, 200L, TimeUnit.MILLISECONDS, aVar, true);
    }

    public static String c(com.alipay.sdk.m.s.a aVar, Context context) {
        return (String) com.alipay.sdk.m.w.a.a(3, 1L, TimeUnit.DAYS, new e(), new f(com.alipay.sdk.m.w.a.a(context), aVar), true, 3L, TimeUnit.SECONDS, aVar, false);
    }

    public static String a(com.alipay.sdk.m.s.a aVar, Context context, String str, String str2) {
        return (String) com.alipay.sdk.m.w.a.a(4, 10L, TimeUnit.SECONDS, new g(), new h(str, str2, com.alipay.sdk.m.w.a.a(context), aVar), true, 3L, TimeUnit.SECONDS, aVar, true);
    }
}
