package com.loc;

import android.content.Context;

public final class cp extends co {
    private Context a;
    private boolean b;

    public cp(Context context) {
        this.b = false;
        this.a = context;
        this.b = false;
    }

    @Override
    protected final boolean a() {
        return o.j(this.a) == 1 || this.b;
    }
}
