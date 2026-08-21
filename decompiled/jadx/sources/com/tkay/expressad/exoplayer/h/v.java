package com.tkay.expressad.exoplayer.h;

import com.tkay.expressad.exoplayer.h.s;
import java.io.IOException;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

/* JADX INFO: loaded from: classes3.dex */
public final class v extends f<Integer> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f6682a = -1;
    private final s[] b;
    private final ArrayList<s> c;
    private final h d;
    private com.tkay.expressad.exoplayer.ae e;
    private Object f;
    private int g;
    private a h;

    public static final class a extends IOException {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f6683a = 0;
        public final int b = 0;

        /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.h.v$a$a, reason: collision with other inner class name */
        @Retention(RetentionPolicy.SOURCE)
        public @interface InterfaceC0451a {
        }
    }

    private v(s... sVarArr) {
        this(new j(), sVarArr);
    }

    private v(h hVar, s... sVarArr) {
        this.b = sVarArr;
        this.d = hVar;
        this.c = new ArrayList<>(Arrays.asList(sVarArr));
        this.g = -1;
    }

    @Override // com.tkay.expressad.exoplayer.h.f, com.tkay.expressad.exoplayer.h.c
    public final void a(com.tkay.expressad.exoplayer.h hVar, boolean z) {
        super.a(hVar, z);
        for (int i = 0; i < this.b.length; i++) {
            a(Integer.valueOf(i), this.b[i]);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.f, com.tkay.expressad.exoplayer.h.s
    public final void b() throws a {
        a aVar = this.h;
        if (aVar != null) {
            throw aVar;
        }
        super.b();
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final r a(s.a aVar, com.tkay.expressad.exoplayer.j.b bVar) {
        int length = this.b.length;
        r[] rVarArr = new r[length];
        for (int i = 0; i < length; i++) {
            rVarArr[i] = this.b[i].a(aVar, bVar);
        }
        return new u(this.d, rVarArr);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(r rVar) {
        u uVar = (u) rVar;
        int i = 0;
        while (true) {
            s[] sVarArr = this.b;
            if (i >= sVarArr.length) {
                return;
            }
            sVarArr[i].a(uVar.f6681a[i]);
            i++;
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.f, com.tkay.expressad.exoplayer.h.c
    public final void a() {
        super.a();
        this.e = null;
        this.f = null;
        this.g = -1;
        this.h = null;
        this.c.clear();
        Collections.addAll(this.c, this.b);
    }

    private void a(s sVar, com.tkay.expressad.exoplayer.ae aeVar, Object obj) {
        if (this.h == null) {
            if (this.g == -1) {
                this.g = aeVar.c();
            } else {
                a aVar = aeVar.c() != this.g ? new a() : null;
                this.h = aVar;
            }
            this.h = aVar;
        }
        if (this.h != null) {
            return;
        }
        this.c.remove(sVar);
        if (sVar == this.b[0]) {
            this.e = aeVar;
            this.f = obj;
        }
        if (this.c.isEmpty()) {
            a(this.e, this.f);
        }
    }

    private a a(com.tkay.expressad.exoplayer.ae aeVar) {
        if (this.g == -1) {
            this.g = aeVar.c();
            return null;
        }
        if (aeVar.c() != this.g) {
            return new a();
        }
        return null;
    }

    @Override // com.tkay.expressad.exoplayer.h.f
    protected final /* synthetic */ void a(Integer num, s sVar, com.tkay.expressad.exoplayer.ae aeVar, Object obj) {
        if (this.h == null) {
            if (this.g == -1) {
                this.g = aeVar.c();
            } else {
                a aVar = aeVar.c() != this.g ? new a() : null;
                this.h = aVar;
            }
            this.h = aVar;
        }
        if (this.h == null) {
            this.c.remove(sVar);
            if (sVar == this.b[0]) {
                this.e = aeVar;
                this.f = obj;
            }
            if (this.c.isEmpty()) {
                a(this.e, this.f);
            }
        }
    }
}
