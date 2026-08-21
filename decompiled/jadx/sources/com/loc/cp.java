package com.loc;

import android.content.Context;

/* JADX INFO: compiled from: WiFiUplateStrategy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cp extends co {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2909a;
    private boolean b;

    public cp(Context context) {
        this.b = false;
        this.f2909a = context;
        this.b = false;
    }

    @Override // com.loc.co
    protected final boolean a() {
        return o.j(this.f2909a) == 1 || this.b;
    }
}
