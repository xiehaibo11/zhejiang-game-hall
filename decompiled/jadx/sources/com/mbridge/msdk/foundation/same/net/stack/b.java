package com.mbridge.msdk.foundation.same.net.stack;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.thrid.okhttp.ConnectionPool;
import com.mbridge.msdk.thrid.okhttp.Dispatcher;
import com.mbridge.msdk.thrid.okhttp.EventListener;
import com.mbridge.msdk.thrid.okhttp.OkHttpClient;
import java.io.Serializable;
import java.net.URLEncoder;
import java.util.concurrent.TimeUnit;

/* JADX INFO: compiled from: OKHTTPClientManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private OkHttpClient f3468a;
    private com.mbridge.msdk.c.a b;
    private String c;

    private b() {
        this.f3468a = null;
        this.c = "";
    }

    public static b a() {
        return a.f3472a;
    }

    public final synchronized OkHttpClient b() {
        if (this.f3468a == null) {
            Dispatcher dispatcher = new Dispatcher();
            dispatcher.setMaxRequestsPerHost(10);
            OkHttpClient.Builder builder = new OkHttpClient.Builder();
            builder.readTimeout(100L, TimeUnit.SECONDS);
            builder.connectTimeout(60L, TimeUnit.SECONDS);
            builder.writeTimeout(60L, TimeUnit.SECONDS);
            builder.connectionPool(new ConnectionPool(32, 5L, TimeUnit.MINUTES));
            builder.dispatcher(dispatcher);
            builder.eventListener(new EventListener() { // from class: com.mbridge.msdk.foundation.same.net.stack.b.1
            });
            this.f3468a = builder.build();
        }
        return this.f3468a;
    }

    public final C0261b c() {
        C0261b c0261b = new C0261b();
        c0261b.f = this.c;
        return c0261b;
    }

    public final boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            if (this.b == null) {
                this.b = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
            }
            if (this.b == null) {
                return false;
            }
            String strV = this.b.v();
            String str2 = d.a().f3453a;
            if (TextUtils.isEmpty(strV) || !str.startsWith(strV) || TextUtils.equals(strV, str2)) {
                return false;
            }
            this.c = strV;
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public final void a(C0261b c0261b) {
        if (c0261b == null) {
            return;
        }
        final C0261b c0261bA = C0261b.a(c0261b);
        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.net.stack.b.2
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    StringBuilder sb = new StringBuilder("key=2000102&");
                    sb.append("app_id=");
                    sb.append(com.mbridge.msdk.foundation.controller.a.f().k());
                    sb.append("&");
                    sb.append("status=");
                    sb.append(c0261bA.f3473a);
                    sb.append("&");
                    sb.append("domain=");
                    sb.append(c0261bA.f);
                    sb.append("&");
                    sb.append("method=");
                    sb.append(c0261bA.d);
                    sb.append("&");
                    if (TextUtils.isEmpty(c0261bA.h)) {
                        if (!TextUtils.isEmpty(c0261bA.c)) {
                            sb.append("connect_e=");
                            sb.append(c0261bA.c);
                        } else if (!TextUtils.isEmpty(c0261bA.j)) {
                            sb.append("connect_e=");
                            sb.append(c0261bA.j);
                        }
                    } else {
                        sb.append("dns_r=");
                        sb.append(c0261bA.h);
                        sb.append("&");
                        sb.append("dns_d=");
                        sb.append(c0261bA.g);
                        sb.append("&");
                        sb.append("host=");
                        sb.append(c0261bA.e);
                        sb.append("&");
                        if (TextUtils.isEmpty(c0261bA.j)) {
                            if (TextUtils.isEmpty(c0261bA.c)) {
                                sb.append("call_d=");
                                sb.append(c0261bA.b);
                                sb.append("&");
                                sb.append("connect_d=");
                                sb.append(c0261bA.i);
                                sb.append("&");
                                sb.append("connection_d=");
                                sb.append(c0261bA.k);
                            } else {
                                sb.append("connect_d=");
                                sb.append(c0261bA.i);
                                sb.append("&");
                                sb.append("connection_e=");
                                sb.append(c0261bA.c);
                            }
                        } else if (!TextUtils.isEmpty(c0261bA.j)) {
                            sb.append("connect_e=");
                            sb.append(c0261bA.j);
                        } else if (!TextUtils.isEmpty(c0261bA.c)) {
                            sb.append("connect_e=");
                            sb.append(c0261bA.c);
                        }
                    }
                    if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                        com.mbridge.msdk.foundation.same.report.b.a().a(sb.toString());
                        return;
                    }
                    final b bVar = b.this;
                    String string = sb.toString();
                    Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                    com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(contextJ);
                    com.mbridge.msdk.foundation.same.net.g.d dVarA = e.a(contextJ);
                    dVarA.a("data", URLEncoder.encode(string, "utf-8"));
                    dVarA.a(com.tkay.expressad.foundation.g.a.C, com.tkay.expressad.foundation.g.a.D);
                    aVar.post(0, d.a().f3453a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.net.stack.b.3
                        @Override // com.mbridge.msdk.foundation.same.report.d.b
                        public final void onSuccess(String str) {
                            z.a("OKHTTPClientManager", "report success");
                        }

                        @Override // com.mbridge.msdk.foundation.same.report.d.b
                        public final void onFailed(String str) {
                            z.a("OKHTTPClientManager", "report failed");
                        }
                    });
                } catch (Exception e) {
                    z.d("OKHTTPClientManager", e.getMessage());
                }
            }
        });
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.foundation.same.net.stack.b$b, reason: collision with other inner class name */
    /* JADX INFO: compiled from: OKHTTPClientManager.java */
    public static class C0261b implements Serializable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f3473a;
        public long b = 0;
        public String c = "";
        public String d = "";
        public String e = "";
        public String f = "";
        public long g = 0;
        public String h = "";
        public long i = 0;
        public String j = "";
        public long k = 0;

        public static C0261b a(C0261b c0261b) {
            C0261b c0261b2 = new C0261b();
            c0261b2.f3473a = c0261b.f3473a;
            c0261b2.d = c0261b.d;
            c0261b2.f = c0261b.f;
            c0261b2.b = c0261b.b;
            c0261b2.i = c0261b.i;
            c0261b2.c = c0261b.c;
            c0261b2.h = c0261b.h;
            c0261b2.g = c0261b.g;
            c0261b2.e = c0261b.e;
            c0261b2.j = c0261b.j;
            c0261b2.k = c0261b.k;
            return c0261b2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: compiled from: OKHTTPClientManager.java */
    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final b f3472a = new b();
    }
}
