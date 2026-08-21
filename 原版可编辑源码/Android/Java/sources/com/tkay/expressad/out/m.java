package com.tkay.expressad.out;

import android.content.Context;
import java.util.Map;

public abstract class m {
    protected Map<String, Object> a;
    protected Context b;

    public abstract boolean a();

    public abstract void b();

    public m() {
    }

    private m(Map<String, Object> map, Context context) {
        this.a = map;
        this.b = context;
    }
}
