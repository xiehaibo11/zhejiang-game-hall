package com.tkay.basead.a.b;

import android.text.TextUtils;
import com.tkay.basead.c.i;
import com.tkay.core.common.f.h;
import java.io.InputStream;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
final class e extends com.tkay.core.common.res.image.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f5572a;
    private boolean b;
    private boolean j;
    private String k;
    private int l;
    private h m;

    @Override // com.tkay.core.common.res.image.b
    protected final Map<String, String> a() {
        return null;
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void b() {
    }

    public e(String str, boolean z, h hVar, String str2) {
        super(str2);
        this.m = hVar;
        this.f5572a = str;
        this.b = z;
        this.j = TextUtils.equals(hVar.x(), str2);
        this.k = hVar.p();
        this.l = hVar.d();
    }

    @Override // com.tkay.core.common.res.image.b
    protected final boolean a(InputStream inputStream) {
        com.tkay.basead.a.f.a();
        return com.tkay.basead.a.f.a(this.c, inputStream);
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void a(com.tkay.core.common.l.b.b bVar) {
        if (this.b) {
            com.tkay.core.common.l.b.a.a().a(bVar, 6);
        } else {
            com.tkay.core.common.l.b.a.a().a(bVar, 5);
        }
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void c() {
        if (this.j) {
            com.tkay.basead.a.b.a(30, this.m, new i("", ""));
            com.tkay.core.common.k.c.a(this.f5572a, this.k, this.c, "1", this.i, (String) null, this.e, this.g, this.l, this.h - this.f);
        }
        d.a().a(this.c, 100);
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void a(String str, String str2) {
        if (this.j) {
            com.tkay.core.common.k.c.a(this.f5572a, this.k, this.c, "0", this.i, str2, this.e, 0L, this.l, this.h - this.f);
        }
        d.a().a(this.c, com.tkay.basead.c.f.a(str, str2));
    }
}
