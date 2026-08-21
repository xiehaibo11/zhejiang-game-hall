package com.tkay.expressad.out;

import android.content.Context;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public abstract class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Map<String, Object> f7027a;
    protected Context b;

    public abstract boolean a();

    public abstract void b();

    public m() {
    }

    private m(Map<String, Object> map, Context context) {
        this.f7027a = map;
        this.b = context;
    }
}
