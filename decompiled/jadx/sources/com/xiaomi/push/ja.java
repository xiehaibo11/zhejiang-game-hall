package com.xiaomi.push;

import com.xiaomi.push.jb;
import java.io.ByteArrayOutputStream;

/* JADX INFO: loaded from: classes4.dex */
public class ja {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private jf f8245a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final jm f814a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final ByteArrayOutputStream f815a;

    public ja() {
        this(new jb.a());
    }

    public ja(jh jhVar) {
        this.f815a = new ByteArrayOutputStream();
        jm jmVar = new jm(this.f815a);
        this.f814a = jmVar;
        this.f8245a = jhVar.a(jmVar);
    }

    public byte[] a(iu iuVar) {
        this.f815a.reset();
        iuVar.b(this.f8245a);
        return this.f815a.toByteArray();
    }
}
