package com.tkay.expressad.e;

import android.content.Context;
import com.tkay.expressad.c;
import com.tkay.expressad.foundation.g.f.m;
import java.util.Map;

public final class b implements c {
    public static Map<String, String> a;
    private Context b;
    private boolean c = false;

    private void a() {
        this.c = false;
        try {
            m.a(this.b);
            com.tkay.expressad.foundation.b.a.a().a(a, this.b);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public final void a(Map<String, String> map, Context context) {
        Context applicationContext = context.getApplicationContext();
        this.b = applicationContext;
        a = map;
        this.c = false;
        try {
            m.a(applicationContext);
            com.tkay.expressad.foundation.b.a.a().a(a, this.b);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
