package com.loc;

import android.content.Context;
import android.text.TextUtils;

public final class cn extends co {
    protected int a;
    protected long b;
    private String d;
    private Context e;

    public cn(Context context, int i, String str, co coVar) {
        super(coVar);
        this.a = i;
        this.d = str;
        this.e = context;
    }

    @Override
    public final void a(boolean z) {
        super.a(z);
        if (z) {
            String str = this.d;
            long jCurrentTimeMillis = System.currentTimeMillis();
            this.b = jCurrentTimeMillis;
            at.a(this.e, str, String.valueOf(jCurrentTimeMillis));
        }
    }

    @Override
    protected final boolean a() {
        if (this.b == 0) {
            String strA = at.a(this.e, this.d);
            this.b = TextUtils.isEmpty(strA) ? 0L : Long.parseLong(strA);
        }
        return System.currentTimeMillis() - this.b >= ((long) this.a);
    }
}
