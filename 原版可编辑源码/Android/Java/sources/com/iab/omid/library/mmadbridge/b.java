package com.iab.omid.library.mmadbridge;

import android.content.Context;
import com.iab.omid.library.mmadbridge.internal.f;
import com.iab.omid.library.mmadbridge.internal.h;
import com.iab.omid.library.mmadbridge.utils.e;
import com.iab.omid.library.mmadbridge.utils.g;

public class b {
    private boolean a;

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
        this.a = z;
    }

    boolean b() {
        return this.a;
    }

    void c() {
        g.a();
        com.iab.omid.library.mmadbridge.internal.a.a().d();
    }
}
