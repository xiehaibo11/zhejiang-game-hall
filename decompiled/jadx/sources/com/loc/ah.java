package com.loc;

import android.content.Context;

/* JADX INFO: compiled from: AdiuManager.java */
/* JADX INFO: loaded from: classes2.dex */
public class ah {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ah f2834a;
    private final Context b;
    private final String c = ao.a(x.c("RYW1hcF9kZXZpY2VfYWRpdQ"));

    private ah(Context context) {
        this.b = context.getApplicationContext();
    }

    public static ah a(Context context) {
        if (f2834a == null) {
            synchronized (ah.class) {
                if (f2834a == null) {
                    f2834a = new ah(context);
                }
            }
        }
        return f2834a;
    }

    public final synchronized void a() {
        try {
            if (o.c() == null) {
                o.a(al.a());
            }
        } catch (Throwable unused) {
        }
    }

    public final void a(String str) {
        ai.a(this.b).a(this.c);
        ai.a(this.b).b(str);
    }
}
