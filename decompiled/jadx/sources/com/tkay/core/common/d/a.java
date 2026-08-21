package com.tkay.core.common.d;

import android.content.Context;
import com.tkay.core.common.c.j;
import com.tkay.core.common.f.w;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    j f6113a;
    protected int b;

    protected a(Context context) {
        this.f6113a = j.a(com.tkay.core.common.c.c.a(context));
    }

    public final void a(String str, int i, int i2) {
        this.f6113a.a(this.b, str, i, i2);
    }

    public final void a(String str, long j) {
        this.f6113a.a(this.b, str, j);
    }

    public final void a(String str, String str2) {
        this.f6113a.a(str, this.b, str2);
    }

    private List<w> a() {
        return this.f6113a.a(this.b);
    }

    public final List<w> a(List<String> list) {
        return this.f6113a.a(list, this.b);
    }
}
