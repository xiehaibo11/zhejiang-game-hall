package com.mbridge.msdk.foundation.same.net.f;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.download.core.DownloadCommon;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.z;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.regex.Pattern;

/* JADX INFO: compiled from: RequestUrlUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d {
    public String A;
    public String B;
    public String C;
    public int D;
    public int E;
    public boolean F;
    public ArrayList<String> G;
    public ArrayList<String> H;
    private final String I;
    private boolean J;
    private int K;
    private String L;
    private String M;
    private String N;
    private String O;
    private String P;
    private String Q;
    private String R;
    private String S;
    private String T;
    private String U;
    private String V;
    private String W;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f3453a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    public int g;
    public int h;
    public boolean i;
    public int j;
    public String k;
    public String l;
    public String m;
    public String n;
    public String o;
    public String p;
    public String q;
    public String r;
    public String s;
    public String t;
    public String u;
    public String v;
    public String w;
    public String x;
    public String y;
    public String z;

    /* JADX INFO: compiled from: RequestUrlUtil.java */
    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final d f3454a = new d();
    }

    private d() {
        this.I = "RequestUrlUtil";
        this.J = true;
        this.K = 0;
        this.L = "https://{}hb.rayjump.com";
        this.f3453a = "https://analytics.rayjump.com";
        this.b = "https://net.rayjump.com";
        this.c = "https://configure.rayjump.com";
        this.d = "configure-tcp.rayjump.com";
        this.e = "https://cn-magnet.rayjump.com/mini/scheme";
        this.f = t.b("DkPtYdQTLkfAW+xUhoPwLkPTHkJBDkM/Yr5T");
        this.g = 9377;
        this.h = 9377;
        this.i = false;
        this.j = 1;
        this.M = "/bid";
        this.N = "/load";
        this.O = "/openapi/ad/v3";
        this.P = "/openapi/ad/v4";
        this.Q = "/openapi/ad/v5";
        this.R = "/image";
        this.S = "/mapping";
        this.T = "/setting";
        this.U = "/sdk/customid";
        this.V = "/rewardsetting";
        this.W = "/appwall/setting";
        this.k = this.L + this.M;
        this.l = this.L + this.N;
        this.m = this.b + this.O;
        this.n = this.b + this.P;
        this.o = this.b + this.Q;
        this.p = this.b + this.R;
        this.q = this.c + this.T;
        this.r = this.c + this.U;
        this.s = this.c + this.V;
        this.t = this.c + this.S;
        this.u = this.c + this.W;
        this.v = this.d + this.T;
        this.w = this.d + this.U;
        this.x = this.d + this.V;
        this.y = this.d + this.S;
        this.z = this.d + this.W;
        this.A = "https://detect.rayjump.com/mapi/find";
        this.B = "https://detect.rayjump.com/mapi/result";
        this.C = "https://d1tru86qrby720.cloudfront.net/hostsetting";
        this.D = 0;
        this.E = 0;
        this.F = false;
        this.G = new ArrayList<>(Arrays.asList("https://configure.rayjump.com", "https://policy.rayjump.com", "https://lazy.rayjump.com", "https://check.rayjump.com"));
        this.H = new ArrayList<>(Arrays.asList("configure-tcp.rayjump.com", "policy-tcp.rayjump.com", "lazy-tcp.rayjump.com", "check-tcp.rayjump.com"));
    }

    public static d a() {
        return a.f3454a;
    }

    public final int b() {
        return this.K;
    }

    public final void a(int i) {
        this.K = i;
    }

    public final String a(String str, int i) {
        try {
            if (!TextUtils.isEmpty(str)) {
                String[] strArrSplit = str.split("_");
                if (strArrSplit.length > 1) {
                    return a(true, strArrSplit[1]);
                }
                return a(true, "");
            }
        } catch (Exception e) {
            z.d("RequestUrlUtil", e.getMessage());
        }
        return i % 2 == 0 ? this.o : this.m;
    }

    public final String a(boolean z, String str) {
        if (z) {
            if (this.l.contains("{}") && !TextUtils.isEmpty(str)) {
                return this.l.replace("{}", str + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
            }
            return this.l.replace("{}", "");
        }
        return this.k.replace("{}", "");
    }

    public final void c() {
        HashMap<String, String> mapAW;
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            this.i = aVarB.bb() == 2;
            this.j = aVarB.bb();
            this.J = !aVarB.l(2);
            if (aVarB.aW() != null && aVarB.aW().size() > 0 && (mapAW = aVarB.aW()) != null && mapAW.size() > 0) {
                if (mapAW.containsKey("v") && !TextUtils.isEmpty(mapAW.get("v")) && a(mapAW.get("v"))) {
                    this.b = mapAW.get("v");
                    this.m = this.b + this.O;
                    this.n = this.b + this.P;
                    this.o = this.b + this.Q;
                    this.p = this.b + this.R;
                }
                if (mapAW.containsKey("hb") && !TextUtils.isEmpty(mapAW.get("hb")) && a(mapAW.get("hb"))) {
                    this.L = mapAW.get("hb");
                    this.k = this.L + this.M;
                    this.l = this.L + this.N;
                }
                if (mapAW.containsKey("lg") && !TextUtils.isEmpty(mapAW.get("lg"))) {
                    String str = mapAW.get("lg");
                    if (a(str)) {
                        this.f3453a = str;
                    } else {
                        this.f = str;
                    }
                }
                if (mapAW.containsKey(DownloadCommon.DOWNLOAD_REPORT_DOWNLOAD_RATE) && !TextUtils.isEmpty(mapAW.get(DownloadCommon.DOWNLOAD_REPORT_DOWNLOAD_RATE)) && a(mapAW.get(DownloadCommon.DOWNLOAD_REPORT_DOWNLOAD_RATE))) {
                    this.B = mapAW.get(DownloadCommon.DOWNLOAD_REPORT_DOWNLOAD_RATE);
                }
                if (mapAW.containsKey("df") && !TextUtils.isEmpty(mapAW.get("df")) && a(mapAW.get("df"))) {
                    this.A = mapAW.get("df");
                }
            }
            String strAl = aVarB.al();
            if (!TextUtils.isEmpty(strAl)) {
                this.c = strAl;
                e();
                this.G.add(0, strAl);
            }
            String strAm = aVarB.am();
            if (TextUtils.isEmpty(strAm)) {
                return;
            }
            this.d = strAm;
            f();
            this.H.add(0, strAm);
        }
    }

    public final boolean d() {
        try {
            if (!this.i) {
                if (this.G != null && this.D <= this.G.size() - 1) {
                    this.c = this.G.get(this.D);
                    e();
                    return true;
                }
            } else if (this.H != null && this.E <= this.H.size() - 1) {
                if (!a(this.H.get(this.E))) {
                    this.d = this.H.get(this.E);
                    f();
                }
                return true;
            }
            if (this.F) {
                this.D = 0;
                this.E = 0;
            }
            return false;
        } catch (Throwable th) {
            z.a("RequestUrlUtil", th.getMessage());
            return false;
        }
    }

    private boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return Pattern.compile("(https|http)://[-A-Za-z0-9{}+&@#/%?=~_|!:,.;]+[-A-Za-z0-9+&@#/%=~_|]".trim()).matcher(str.trim()).matches();
    }

    public final void e() {
        this.q = this.c + this.T;
        this.r = this.c + this.U;
        this.s = this.c + this.V;
        this.t = this.c + this.S;
        this.u = this.c + this.W;
    }

    public final void f() {
        this.v = this.d + this.T;
        this.w = this.d + this.U;
        this.x = this.d + this.V;
        this.y = this.d + this.S;
        this.z = this.d + this.W;
    }
}
