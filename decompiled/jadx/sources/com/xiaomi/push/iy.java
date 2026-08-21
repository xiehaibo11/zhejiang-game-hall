package com.xiaomi.push;

import com.xiaomi.push.jb;

/* JADX INFO: loaded from: classes4.dex */
public class iy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final jf f8243a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final jo f810a;

    public iy() {
        this(new jb.a());
    }

    public iy(jh jhVar) {
        jo joVar = new jo();
        this.f810a = joVar;
        this.f8243a = jhVar.a(joVar);
    }

    public void a(iu iuVar, byte[] bArr) {
        try {
            this.f810a.a(bArr);
            iuVar.a(this.f8243a);
        } finally {
            this.f8243a.k();
        }
    }
}
