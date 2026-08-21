package com.huawei.hms.hatool;

import android.content.Context;
import android.text.TextUtils;
import android.util.Pair;
import com.huawei.secure.android.common.encrypt.hash.SHA;
import com.xiaomi.mipush.sdk.Constants;
import java.util.UUID;

/* JADX INFO: loaded from: classes.dex */
public class x0 {
    public static x0 b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Context f2127a;

    public static class a extends y0 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f2128a;
        public String b;

        public a(String str, String str2) {
            this.f2128a = str;
            this.b = str2;
        }

        @Override // com.huawei.hms.hatool.y0
        public String a() {
            return com.huawei.hms.hatool.a.d(this.f2128a, this.b);
        }

        @Override // com.huawei.hms.hatool.y0
        public String a(String str) {
            return SHA.sha256Encrypt(str);
        }

        @Override // com.huawei.hms.hatool.y0
        public String b() {
            return com.huawei.hms.hatool.a.g(this.f2128a, this.b);
        }

        @Override // com.huawei.hms.hatool.y0
        public String c() {
            return com.huawei.hms.hatool.a.j(this.f2128a, this.b);
        }

        @Override // com.huawei.hms.hatool.y0
        public int d() {
            return (com.huawei.hms.hatool.a.k(this.f2128a, this.b) ? 4 : 0) | 0 | (com.huawei.hms.hatool.a.e(this.f2128a, this.b) ? 2 : 0) | (com.huawei.hms.hatool.a.h(this.f2128a, this.b) ? 1 : 0);
        }
    }

    public static x0 a() {
        x0 x0Var;
        synchronized (x0.class) {
            if (b == null) {
                b = new x0();
            }
            x0Var = b;
        }
        return x0Var;
    }

    public String a(String str, String str2) {
        return g.a(this.f2127a, str, str2);
    }

    public String a(boolean z) {
        if (!z) {
            return "";
        }
        String strJ = b.j();
        if (TextUtils.isEmpty(strJ)) {
            strJ = g0.a(this.f2127a, "global_v2", "uuid", "");
            if (TextUtils.isEmpty(strJ)) {
                strJ = UUID.randomUUID().toString().replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
                g0.b(this.f2127a, "global_v2", "uuid", strJ);
            }
            b.c(strJ);
        }
        return strJ;
    }

    public void a(Context context) {
        if (this.f2127a == null) {
            this.f2127a = context;
        }
    }

    public String b(String str, String str2) {
        return g.b(this.f2127a, str, str2);
    }

    public v0 c(String str, String str2) {
        return new a(str, str2).a(this.f2127a);
    }

    public String d(String str, String str2) {
        return a1.b(str, str2);
    }

    public Pair<String, String> e(String str, String str2) {
        if (!com.huawei.hms.hatool.a.f(str, str2)) {
            return new Pair<>("", "");
        }
        String strN = i.c().b().n();
        String strO = i.c().b().o();
        if (!TextUtils.isEmpty(strN) && !TextUtils.isEmpty(strO)) {
            return new Pair<>(strN, strO);
        }
        Pair<String, String> pairE = z0.e(this.f2127a);
        i.c().b().i((String) pairE.first);
        i.c().b().j((String) pairE.second);
        return pairE;
    }

    public String f(String str, String str2) {
        return a1.a(str, str2);
    }
}
