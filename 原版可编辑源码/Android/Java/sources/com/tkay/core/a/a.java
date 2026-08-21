package com.tkay.core.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.c.d;
import com.tkay.core.common.c.l;
import com.tkay.core.common.f.ad;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.v;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Map;

public final class a {
    private static a e;
    l a;
    SimpleDateFormat b = new SimpleDateFormat("yyyyMMdd");
    SimpleDateFormat c = new SimpleDateFormat("yyyyMMddHH");
    Context d;

    public static a a(Context context) {
        if (e == null) {
            e = new a(context);
        }
        return e;
    }

    private a(Context context) {
        this.a = l.a(com.tkay.core.common.c.c.a(context));
        this.d = context;
    }

    public final void a() {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                a.this.a.a(a.this.b.format(new Date(System.currentTimeMillis())));
            }
        });
    }

    public final boolean a(d dVar, String str) {
        if (dVar.ac() == -1 && dVar.ad() == -1) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        ad adVarA = this.a.a(str, this.b.format(new Date(jCurrentTimeMillis)), this.c.format(new Date(jCurrentTimeMillis)));
        int i = adVarA != null ? adVarA.c : 0;
        int i2 = adVarA != null ? adVarA.d : 0;
        if (dVar.ac() == -1 || i < dVar.ac()) {
            return dVar.ad() != -1 && ((long) i2) >= dVar.ad();
        }
        return true;
    }

    public final boolean a(String str, aj ajVar) {
        if (ajVar.f() == -1 && ajVar.e() == -1) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        ad.a aVarA = this.a.a(str, ajVar.t(), this.b.format(new Date(jCurrentTimeMillis)), this.c.format(new Date(jCurrentTimeMillis)));
        if (aVarA == null) {
            aVarA = new ad.a();
        }
        if (ajVar.f() == -1 || aVarA.e < ajVar.f()) {
            return ajVar.e() != -1 && aVarA.d >= ajVar.e();
        }
        return true;
    }

    public final ad a(String str) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        return this.a.a(str, this.b.format(new Date(jCurrentTimeMillis)), this.c.format(new Date(jCurrentTimeMillis)));
    }

    public final ad.a a(String str, String str2) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        return this.a.a(str, str2, this.b.format(new Date(jCurrentTimeMillis)), this.c.format(new Date(jCurrentTimeMillis)));
    }

    public final Map<String, ad> a(int i) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        return this.a.a(i, this.b.format(new Date(jCurrentTimeMillis)), this.c.format(new Date(jCurrentTimeMillis)));
    }

    public final void a(String str, String str2, String str3) {
        synchronized (v.a().a(str2)) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            String str4 = this.b.format(new Date(jCurrentTimeMillis));
            String str5 = this.c.format(new Date(jCurrentTimeMillis));
            int i = Integer.parseInt(str);
            ad.a aVarA = a(str2, str3);
            if (aVarA == null) {
                aVarA = new ad.a();
                aVarA.a = str3;
            }
            if (!TextUtils.equals(str4, aVarA.c)) {
                aVarA.d = 1;
                aVarA.c = str4;
            } else {
                aVarA.d++;
            }
            if (!TextUtils.equals(str5, aVarA.b)) {
                aVarA.e = 1;
                aVarA.b = str5;
            } else {
                aVarA.e++;
            }
            aVarA.f = jCurrentTimeMillis;
            this.a.a(i, str2, aVarA);
        }
    }
}
