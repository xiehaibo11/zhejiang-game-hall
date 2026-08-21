package com.tkay.basead.a.b;

import com.tkay.basead.c.i;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.j;
import com.tkay.core.common.res.a.a;
import com.xiaomi.mipush.sdk.Constants;

public class f {
    final String a = f.class.getSimpleName();
    private String b;
    private String c;
    private String d;
    private int e;
    private h f;
    private j g;
    private com.tkay.core.common.res.a.a h;

    public f(String str, final h hVar, j jVar) {
        this.b = hVar.x();
        this.f = hVar;
        this.g = jVar;
        this.c = str;
        this.d = hVar.p();
        this.e = hVar.d();
        com.tkay.core.common.res.a.a aVarA = com.tkay.core.common.res.a.c.a().a(this.b);
        this.h = aVarA;
        aVarA.a(new com.tkay.core.common.res.a.b(this.g.S(), this.g.U()));
        this.h.a(new a.a() {
            @Override
            public final void a(String str2, String str3) {
            }

            @Override
            public final boolean a(int i, long j, long j2) {
                if (i < f.this.g.S()) {
                    return false;
                }
                d.a().a(f.this.b, i);
                return true;
            }
        });
        this.h.k = new a.b() {
            @Override
            public final void a(long j, long j2, long j3, long j4, long j5) {
                com.tkay.basead.a.b.a(30, hVar, new i("", ""));
                com.tkay.core.common.k.c.a(f.this.c, f.this.d, f.this.b, "1", j, (String) null, j2, j3, f.this.e, j5 - j4);
            }

            @Override
            public final void a(String str2, String str3, long j, long j2, long j3, long j4) {
                com.tkay.core.common.k.c.a(f.this.c, f.this.d, f.this.b, "0", j, str3, j2, 0L, f.this.e, j4 - j3);
                d.a().a(f.this.b, com.tkay.basead.c.f.a(str2, str3));
            }
        };
    }

    public final void a() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.d);
        sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        sb.append(this.b);
        sb.append(" startRequest");
        this.h.e();
    }

    public final void b() {
        int iB = com.tkay.core.common.a.j.a().b(this.b);
        StringBuilder sb = new StringBuilder();
        sb.append(this.d);
        sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        sb.append(this.b);
        sb.append(" resumeRequest: readyRate:");
        sb.append(iB);
        sb.append(",cdRate:");
        sb.append(this.g.T());
        if (iB == 100) {
            return;
        }
        this.h.f();
    }
}
