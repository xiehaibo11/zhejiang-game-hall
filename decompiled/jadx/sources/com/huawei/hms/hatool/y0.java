package com.huawei.hms.hatool;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public abstract class y0 {
    public final v0 a(int i, Context context) {
        String strB;
        if (i != 0) {
            strB = f();
            if (!TextUtils.isEmpty(strB)) {
                return new v0(w0.UDID, strB);
            }
        } else {
            strB = "";
        }
        if ((i & 2) != 0) {
            strB = b(context);
            if (!TextUtils.isEmpty(strB)) {
                return new v0(w0.IMEI, strB);
            }
        }
        if ((i & 1) == 0) {
            return new v0(w0.EMPTY, strB);
        }
        return new v0(w0.SN, c(context));
    }

    public v0 a(Context context) {
        String strC = c();
        if (!TextUtils.isEmpty(strC)) {
            return new v0(w0.UDID, strC);
        }
        String strA = a();
        if (!TextUtils.isEmpty(strA)) {
            return new v0(w0.IMEI, strA);
        }
        boolean zE = e();
        String strB = b();
        return !TextUtils.isEmpty(strB) ? zE ? new v0(w0.SN, strB) : new v0(w0.UDID, a(strB)) : zE ? a(d(), context) : b(d(), context);
    }

    public abstract String a();

    public abstract String a(String str);

    public final v0 b(int i, Context context) {
        String strC;
        if ((i & 4) != 0 && (i & 1) != 0) {
            return new v0(w0.UDID, a(c(context)));
        }
        if ((i & 1) != 0) {
            strC = c(context);
            if (!TextUtils.isEmpty(strC)) {
                return new v0(w0.SN, strC);
            }
        } else {
            strC = "";
        }
        if ((i & 2) == 0) {
            return new v0(w0.EMPTY, strC);
        }
        return new v0(w0.IMEI, b(context));
    }

    public abstract String b();

    public final String b(Context context) {
        l lVarB = i.c().b();
        if (TextUtils.isEmpty(lVarB.m())) {
            lVarB.h(z0.f(context));
        }
        return lVarB.m();
    }

    public abstract String c();

    public final String c(Context context) {
        l lVarB = i.c().b();
        if (TextUtils.isEmpty(lVarB.a())) {
            lVarB.l(z0.h(context));
        }
        return lVarB.a();
    }

    public abstract int d();

    public final boolean e() {
        l lVarB = i.c().b();
        if (TextUtils.isEmpty(lVarB.i())) {
            lVarB.e(f.a());
        }
        return !TextUtils.isEmpty(lVarB.i());
    }

    public final String f() {
        l lVarB = i.c().b();
        if (TextUtils.isEmpty(lVarB.c())) {
            lVarB.m(z0.c());
        }
        return lVarB.c();
    }
}
