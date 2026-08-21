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

public final class b {
    private OkHttpClient a;
    private com.mbridge.msdk.c.a b;
    private String c;

    private b() {
        this.a = null;
        this.c = "";
    }

    public static b a() {
        return a.a;
    }

    public final synchronized OkHttpClient b() {
        if (this.a == null) {
            Dispatcher dispatcher = new Dispatcher();
            dispatcher.setMaxRequestsPerHost(10);
            OkHttpClient.Builder builder = new OkHttpClient.Builder();
            builder.readTimeout(100L, TimeUnit.SECONDS);
            builder.connectTimeout(60L, TimeUnit.SECONDS);
            builder.writeTimeout(60L, TimeUnit.SECONDS);
            builder.connectionPool(new ConnectionPool(32, 5L, TimeUnit.MINUTES));
            builder.dispatcher(dispatcher);
            builder.eventListener(new EventListener() {
            });
            this.a = builder.build();
        }
        return this.a;
    }

    public final b c() {
        b bVar = new b();
        bVar.f = this.c;
        return bVar;
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
            String str2 = d.a().a;
            if (TextUtils.isEmpty(strV) || !str.startsWith(strV) || TextUtils.equals(strV, str2)) {
                return false;
            }
            this.c = strV;
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public final void a(b bVar) {
        if (bVar == null) {
            return;
        }
        final b bVarA = b.a(bVar);
        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
            @Override
            public final void run() {
                try {
                    StringBuilder sb = new StringBuilder("key=2000102&");
                    sb.append("app_id=");
                    sb.append(com.mbridge.msdk.foundation.controller.a.f().k());
                    sb.append("&");
                    sb.append("status=");
                    sb.append(bVarA.a);
                    sb.append("&");
                    sb.append("domain=");
                    sb.append(bVarA.f);
                    sb.append("&");
                    sb.append("method=");
                    sb.append(bVarA.d);
                    sb.append("&");
                    if (TextUtils.isEmpty(bVarA.h)) {
                        if (!TextUtils.isEmpty(bVarA.c)) {
                            sb.append("connect_e=");
                            sb.append(bVarA.c);
                        } else if (!TextUtils.isEmpty(bVarA.j)) {
                            sb.append("connect_e=");
                            sb.append(bVarA.j);
                        }
                    } else {
                        sb.append("dns_r=");
                        sb.append(bVarA.h);
                        sb.append("&");
                        sb.append("dns_d=");
                        sb.append(bVarA.g);
                        sb.append("&");
                        sb.append("host=");
                        sb.append(bVarA.e);
                        sb.append("&");
                        if (TextUtils.isEmpty(bVarA.j)) {
                            if (TextUtils.isEmpty(bVarA.c)) {
                                sb.append("call_d=");
                                sb.append(bVarA.b);
                                sb.append("&");
                                sb.append("connect_d=");
                                sb.append(bVarA.i);
                                sb.append("&");
                                sb.append("connection_d=");
                                sb.append(bVarA.k);
                            } else {
                                sb.append("connect_d=");
                                sb.append(bVarA.i);
                                sb.append("&");
                                sb.append("connection_e=");
                                sb.append(bVarA.c);
                            }
                        } else if (!TextUtils.isEmpty(bVarA.j)) {
                            sb.append("connect_e=");
                            sb.append(bVarA.j);
                        } else if (!TextUtils.isEmpty(bVarA.c)) {
                            sb.append("connect_e=");
                            sb.append(bVarA.c);
                        }
                    }
                    if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                        com.mbridge.msdk.foundation.same.report.b.a().a(sb.toString());
                        return;
                    }
                    final b bVar2 = b.this;
                    String string = sb.toString();
                    Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                    com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(contextJ);
                    com.mbridge.msdk.foundation.same.net.g.d dVarA = e.a(contextJ);
                    dVarA.a("data", URLEncoder.encode(string, "utf-8"));
                    dVarA.a(com.tkay.expressad.foundation.g.a.C, com.tkay.expressad.foundation.g.a.D);
                    aVar.post(0, d.a().a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() {
                        @Override
                        public final void onSuccess(String str) {
                            z.a("OKHTTPClientManager", "report success");
                        }

                        @Override
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

    public static class b implements Serializable {
        public int a;
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

        public static b a(b bVar) {
            b bVar2 = new b();
            bVar2.a = bVar.a;
            bVar2.d = bVar.d;
            bVar2.f = bVar.f;
            bVar2.b = bVar.b;
            bVar2.i = bVar.i;
            bVar2.c = bVar.c;
            bVar2.h = bVar.h;
            bVar2.g = bVar.g;
            bVar2.e = bVar.e;
            bVar2.j = bVar.j;
            bVar2.k = bVar.k;
            return bVar2;
        }
    }

    private static final class a {
        private static final b a = new b();
    }
}
