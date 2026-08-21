package com.vivo.push.c;

import android.content.Context;
import com.vivo.push.util.ContextDelegate;

/* JADX INFO: loaded from: classes4.dex */
public class d {
    private static volatile d d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f7899a;
    private c b;
    private Context c;

    private d(Context context) {
        if (this.f7899a == null) {
            this.c = ContextDelegate.getContext(context.getApplicationContext());
            this.f7899a = new e(this.c);
        }
        if (this.b == null) {
            this.b = new a();
        }
    }

    public static d a(Context context) {
        if (d == null) {
            synchronized (d.class) {
                if (d == null && context != null) {
                    d = new d(context);
                }
            }
        }
        return d;
    }

    public final b a() {
        return this.f7899a;
    }
}
