package com.loc;

import android.content.Context;

public class ah {
    private static ah a;
    private final Context b;
    private final String c = ao.a(x.c("RYW1hcF9kZXZpY2VfYWRpdQ"));

    private ah(Context context) {
        this.b = context.getApplicationContext();
    }

    public static ah a(Context context) {
        if (a == null) {
            synchronized (ah.class) {
                if (a == null) {
                    a = new ah(context);
                }
            }
        }
        return a;
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
