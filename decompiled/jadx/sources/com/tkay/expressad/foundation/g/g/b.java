package com.tkay.expressad.foundation.g.g;

import android.content.Context;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6933a = b.class.getSimpleName();
    private static WeakHashMap<Context, c> b = new WeakHashMap<>();
    private c c;
    private Context d;

    private b(Context context) {
        this.d = context;
        if (b.get(context) != null) {
            this.c = b.get(this.d);
            return;
        }
        c cVar = new c(this.d, 5);
        this.c = cVar;
        b.put(this.d, cVar);
    }

    private void a(a aVar) {
        this.c.a(aVar);
    }
}
