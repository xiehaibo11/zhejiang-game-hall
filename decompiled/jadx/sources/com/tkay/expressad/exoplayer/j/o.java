package com.tkay.expressad.exoplayer.j;

import android.content.Context;
import com.tkay.expressad.exoplayer.j.h;

/* JADX INFO: loaded from: classes3.dex */
public final class o implements h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f6730a;
    private final aa<? super h> b;
    private final h.a c;

    public o(Context context, String str) {
        this(context, str, (aa<? super h>) null);
    }

    private o(Context context, String str, aa<? super h> aaVar) {
        this(context, aaVar, new q(str, aaVar));
    }

    private o(Context context, aa<? super h> aaVar, h.a aVar) {
        this.f6730a = context.getApplicationContext();
        this.b = aaVar;
        this.c = aVar;
    }

    private n b() {
        return new n(this.f6730a, this.b, this.c.a());
    }

    @Override // com.tkay.expressad.exoplayer.j.h.a
    public final /* synthetic */ h a() {
        return new n(this.f6730a, this.b, this.c.a());
    }
}
