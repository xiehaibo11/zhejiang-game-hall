package com.tkay.expressad.mbbanner.a.c;

import com.tkay.expressad.videocommon.b.g;

/* JADX INFO: loaded from: classes3.dex */
public class f implements g.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6986a = f.class.getSimpleName();
    private com.tkay.expressad.mbbanner.a.d.b b;
    private String c;

    public f(com.tkay.expressad.mbbanner.a.d.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override // com.tkay.expressad.videocommon.b.g.a
    public final void a(String str) {
        com.tkay.expressad.mbbanner.a.d.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, true);
        }
    }

    @Override // com.tkay.expressad.videocommon.b.g.a
    public final void a(String str, String str2) {
        com.tkay.expressad.mbbanner.a.d.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, false);
        }
    }
}
