package com.loc;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: compiled from: TimeUpdateStrategy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cn extends co {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f2908a;
    protected long b;
    private String d;
    private Context e;

    public cn(Context context, int i, String str, co coVar) {
        super(coVar);
        this.f2908a = i;
        this.d = str;
        this.e = context;
    }

    @Override // com.loc.co
    public final void a(boolean z) {
        super.a(z);
        if (z) {
            String str = this.d;
            long jCurrentTimeMillis = System.currentTimeMillis();
            this.b = jCurrentTimeMillis;
            at.a(this.e, str, String.valueOf(jCurrentTimeMillis));
        }
    }

    @Override // com.loc.co
    protected final boolean a() {
        if (this.b == 0) {
            String strA = at.a(this.e, this.d);
            this.b = TextUtils.isEmpty(strA) ? 0L : Long.parseLong(strA);
        }
        return System.currentTimeMillis() - this.b >= ((long) this.f2908a);
    }
}
