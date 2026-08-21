package com.tkay.expressad.mbbanner.a.c;

import com.tkay.expressad.videocommon.b.g;

public class f implements g.b {
    private static final String a = f.class.getSimpleName();
    private com.tkay.expressad.mbbanner.a.d.b b;
    private String c;

    public f(com.tkay.expressad.mbbanner.a.d.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override
    public final void a(String str) {
        com.tkay.expressad.mbbanner.a.d.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, true);
        }
    }

    @Override
    public final void a(String str, String str2) {
        com.tkay.expressad.mbbanner.a.d.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, 3, str, false);
        }
    }
}
