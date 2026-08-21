package com.iab.omid.library.mmadbridge;

import android.content.Context;
import com.iab.omid.library.mmadbridge.internal.f;
import com.iab.omid.library.mmadbridge.internal.h;
import com.iab.omid.library.mmadbridge.utils.e;
import com.iab.omid.library.mmadbridge.utils.g;

/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f2373a;

    private void b(Context context) {
        g.a(context, "Application Context cannot be null");
    }

    String a() {
        return "1.4.2-Mmadbridge";
    }

    void a(Context context) {
        b(context);
        if (b()) {
            return;
        }
        a(true);
        h.c().a(context);
        com.iab.omid.library.mmadbridge.internal.b.g().a(context);
        com.iab.omid.library.mmadbridge.utils.a.a(context);
        com.iab.omid.library.mmadbridge.utils.c.a(context);
        e.a(context);
        f.b().a(context);
        com.iab.omid.library.mmadbridge.internal.a.a().a(context);
    }

    void a(boolean z) {
        this.f2373a = z;
    }

    boolean b() {
        return this.f2373a;
    }

    void c() {
        g.a();
        com.iab.omid.library.mmadbridge.internal.a.a().d();
    }
}
