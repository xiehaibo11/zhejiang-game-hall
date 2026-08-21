package com.tkay.core.common.d;

import android.content.Context;
import com.tkay.core.common.c.j;
import com.tkay.core.common.f.w;
import java.util.List;

public class a {
    j a;
    protected int b;

    protected a(Context context) {
        this.a = j.a(com.tkay.core.common.c.c.a(context));
    }

    public final void a(String str, int i, int i2) {
        this.a.a(this.b, str, i, i2);
    }

    public final void a(String str, long j) {
        this.a.a(this.b, str, j);
    }

    public final void a(String str, String str2) {
        this.a.a(str, this.b, str2);
    }

    private List<w> a() {
        return this.a.a(this.b);
    }

    public final List<w> a(List<String> list) {
        return this.a.a(list, this.b);
    }
}
