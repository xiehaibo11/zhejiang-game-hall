package com.tkay.expressad.exoplayer.j;

import android.content.Context;
import com.tkay.expressad.exoplayer.j.h;

public final class o implements h.a {
    private final Context a;
    private final aa<? super h> b;
    private final h.a c;

    public o(Context context, String str) {
        this(context, str, (aa<? super h>) null);
    }

    private o(Context context, String str, aa<? super h> aaVar) {
        this(context, aaVar, new q(str, aaVar));
    }

    private o(Context context, aa<? super h> aaVar, h.a aVar) {
        this.a = context.getApplicationContext();
        this.b = aaVar;
        this.c = aVar;
    }

    private n b() {
        return new n(this.a, this.b, this.c.a());
    }

    @Override
    public final h a() {
        return new n(this.a, this.b, this.c.a());
    }
}
