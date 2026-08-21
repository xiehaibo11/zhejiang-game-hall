package com.huawei.hms.hatool;

import android.util.Pair;
import com.huawei.secure.android.common.encrypt.hash.SHA;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class b1 extends v {

    public static /* synthetic */ class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final /* synthetic */ int[] f2087a;

        static {
            int[] iArr = new int[w0.values().length];
            f2087a = iArr;
            try {
                iArr[w0.SN.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f2087a[w0.IMEI.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f2087a[w0.UDID.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    public static c1 a(String str, String str2) {
        c1 c1VarA = v.a(str, str2);
        v0 v0VarC = x0.a().c(str, str2);
        c1VarA.g(x0.a().a(c.c(str, str2)));
        c1VarA.f(c.o(str, str2));
        c1VarA.c(x0.a().f(str, str2));
        int i = a.f2087a[v0VarC.a().ordinal()];
        if (i == 1) {
            c1VarA.d(v0VarC.b());
        } else if (i == 2) {
            c1VarA.b(v0VarC.b());
        } else if (i == 3) {
            c1VarA.e(v0VarC.b());
        }
        return c1VarA;
    }

    public static d1 a(String str, String str2, String str3, String str4) {
        d1 d1VarA = v.a(str, str2, str3, str4);
        String strA = x0.a().a(c.c(str2, str3));
        long jCurrentTimeMillis = System.currentTimeMillis();
        String strSha256Encrypt = SHA.sha256Encrypt(b.c() + strA + jCurrentTimeMillis);
        d1VarA.f(String.valueOf(jCurrentTimeMillis));
        d1VarA.g(strSha256Encrypt);
        return d1VarA;
    }

    public static e1 a(String str, String str2, String str3) {
        e1 e1VarA = v.a(str, str2, str3);
        Pair<String, String> pairE = x0.a().e(str2, str);
        e1VarA.f((String) pairE.first);
        e1VarA.g((String) pairE.second);
        e1VarA.h(f.b());
        e1VarA.d(x0.a().d(str2, str));
        return e1VarA;
    }

    public static C0534r a(List<q> list, String str, String str2, String str3, String str4) {
        y.c("hmsSdk", "generate UploadData");
        C0534r c0534rA = v.a();
        if (c0534rA == null) {
            return null;
        }
        c0534rA.a(a(x.f().a(), str, str2, str3));
        c0534rA.a(a(str, str2));
        c0534rA.a(a(str2, str, str4));
        c0534rA.a(c.g(str, str2));
        c0534rA.a(list);
        return c0534rA;
    }

    public static Map<String, String> b(String str, String str2, String str3) {
        Map<String, String> mapB = v.b(str, str3);
        Map<String, String> mapI = c.i(str, str2);
        if (mapI == null) {
            return mapB;
        }
        mapB.putAll(mapI);
        return mapB;
    }
}
