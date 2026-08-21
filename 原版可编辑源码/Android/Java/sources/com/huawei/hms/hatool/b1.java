package com.huawei.hms.hatool;

import android.util.Pair;
import com.huawei.secure.android.common.encrypt.hash.SHA;
import java.util.List;
import java.util.Map;

public class b1 extends v {

    public static class a {
        public static final int[] a;

        static {
            int[] iArr = new int[w0.values().length];
            a = iArr;
            try {
                iArr[w0.c.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[w0.a.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[w0.b.ordinal()] = 3;
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
        int i = a.a[v0VarC.a().ordinal()];
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

    public static r a(List<q> list, String str, String str2, String str3, String str4) {
        y.c("hmsSdk", "generate UploadData");
        r rVarA = v.a();
        if (rVarA == null) {
            return null;
        }
        rVarA.a(a(x.f().a(), str, str2, str3));
        rVarA.a(a(str, str2));
        rVarA.a(a(str2, str, str4));
        rVarA.a(c.g(str, str2));
        rVarA.a(list);
        return rVarA;
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
