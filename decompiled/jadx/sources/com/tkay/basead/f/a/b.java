package com.tkay.basead.f.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.c.c;
import com.tkay.core.c.d;
import com.tkay.core.c.e;
import com.tkay.core.common.f.r;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f5681a;
    private Context b;
    private ConcurrentHashMap<String, c> d = new ConcurrentHashMap<>();
    private SimpleDateFormat c = new SimpleDateFormat("yyyyMMdd");

    private b(Context context) {
        this.b = context.getApplicationContext();
    }

    public static b a(Context context) {
        if (f5681a == null) {
            f5681a = new b(context);
        }
        return f5681a;
    }

    public final void a(r rVar) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        String str = this.c.format(new Date(jCurrentTimeMillis));
        final c cVarD = d(rVar);
        if (cVarD.f.equals(str)) {
            cVarD.d++;
        } else {
            cVarD.d = 1;
            cVarD.f = str;
        }
        cVarD.e = jCurrentTimeMillis;
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.basead.f.a.b.1
            @Override // java.lang.Runnable
            public final void run() {
                com.tkay.basead.b.c.a(b.this.b).c(cVarD.f);
                com.tkay.basead.b.c.a(b.this.b).a(cVarD);
            }
        });
    }

    public final boolean b(r rVar) {
        return rVar.R != -1 && d(rVar).d >= rVar.R;
    }

    public final boolean c(r rVar) {
        return System.currentTimeMillis() - d(rVar).e <= rVar.S;
    }

    public final String a() {
        List<c> listB = com.tkay.basead.b.c.a(this.b).b(this.c.format(new Date(System.currentTimeMillis())));
        JSONArray jSONArray = new JSONArray();
        if (listB != null) {
            Iterator<c> it = listB.iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next().f5610a);
            }
        }
        return jSONArray.toString();
    }

    public final boolean a(String str) {
        List<r> listF;
        d dVarA = e.a(this.b).a(str);
        if (dVarA == null || (listF = dVarA.F()) == null || listF.size() <= 0) {
            return false;
        }
        Iterator<r> it = listF.iterator();
        while (it.hasNext()) {
            if (!b(it.next())) {
                return false;
            }
        }
        return true;
    }

    public final c d(r rVar) {
        String str = this.c.format(new Date(System.currentTimeMillis()));
        c cVarA = this.d.get(rVar.p());
        if (cVarA == null) {
            cVarA = com.tkay.basead.b.c.a(this.b).a(rVar.p());
            if (cVarA == null) {
                cVarA = new c();
                cVarA.f5610a = rVar.p();
                cVarA.b = rVar.R;
                cVarA.c = rVar.S;
                cVarA.e = 0L;
                cVarA.d = 0;
                cVarA.f = str;
            }
            this.d.put(rVar.p(), cVarA);
        }
        if (!TextUtils.equals(str, cVarA.f)) {
            cVarA.f = str;
            cVarA.d = 0;
        }
        return cVarA;
    }
}
