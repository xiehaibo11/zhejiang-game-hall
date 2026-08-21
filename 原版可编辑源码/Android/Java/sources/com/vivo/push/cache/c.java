package com.vivo.push.cache;

import android.content.Context;
import android.text.TextUtils;
import com.vivo.push.util.ContextDelegate;
import com.vivo.push.util.g;
import com.vivo.push.util.p;
import com.vivo.push.util.w;
import com.vivo.push.util.y;
import java.util.ArrayList;
import java.util.List;

public abstract class c<T> {
    protected static final Object a = new Object();
    protected List<T> b = new ArrayList();
    protected Context c;
    private byte[] d;
    private byte[] e;

    protected c(Context context) {
        this.c = ContextDelegate.getContext(context);
        w wVarB = w.b();
        wVarB.a(this.c);
        this.d = wVarB.c();
        this.e = wVarB.d();
        c();
    }

    private String b() {
        return y.b(this.c).a(a(), null);
    }

    private void c(String str) {
        if (TextUtils.isEmpty(str)) {
            p.d("CacheSettings", "ClientManager init " + a() + " strApps empty.");
            return;
        }
        if (str.length() > 10000) {
            p.d("CacheSettings", "sync " + a() + " strApps lenght too large");
            d();
            return;
        }
        try {
            p.d("CacheSettings", "ClientManager init " + a() + " strApps : " + str);
            List<T> listA = a(b(str));
            if (listA != null) {
                this.b.addAll(listA);
            }
        } catch (Exception e) {
            d();
            p.d("CacheSettings", p.a(e));
        }
    }

    private void d(String str) {
        y.b(this.c).b(a(), str);
    }

    protected abstract String a();

    protected abstract List<T> a(String str);

    abstract String b(String str);

    public final void c() {
        synchronized (a) {
            g.a(a());
            this.b.clear();
            c(b());
        }
    }

    public final void d() {
        synchronized (a) {
            this.b.clear();
            d("");
            p.d("CacheSettings", "clear " + a() + " strApps");
        }
    }

    protected final byte[] e() {
        byte[] bArr = this.d;
        return (bArr == null || bArr.length <= 0) ? w.b().c() : bArr;
    }

    protected final byte[] f() {
        byte[] bArr = this.e;
        return (bArr == null || bArr.length <= 0) ? w.b().d() : bArr;
    }
}
