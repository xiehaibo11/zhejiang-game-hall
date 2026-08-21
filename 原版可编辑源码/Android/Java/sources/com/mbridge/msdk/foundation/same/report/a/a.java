package com.mbridge.msdk.foundation.same.report.a;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.m;
import com.mbridge.msdk.foundation.entity.j;
import com.mbridge.msdk.foundation.tools.v;

public final class a {
    private j a;
    private i b;
    private Context c;

    public a(j jVar) {
        Context context;
        this.b = null;
        this.a = jVar;
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        this.c = contextJ;
        this.b = i.a(contextJ);
        if (this.a == null || (context = this.c) == null) {
            return;
        }
        int iD = v.D(context);
        this.a.e(iD);
        this.a.c(v.a(this.c, iD));
        this.a.d(2);
    }

    public final void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.a.a(str);
    }

    public final void a(int i) {
        j jVar = this.a;
        if (jVar != null) {
            jVar.b(i);
        }
    }

    public final void b(int i) {
        j jVar = this.a;
        if (jVar != null) {
            jVar.c(i);
        }
    }

    public final void a() {
        if (this.a != null) {
            m.a(this.b).a(this.a);
        }
    }

    public final void b(String str) {
        j jVar = this.a;
        if (jVar != null) {
            jVar.b(str);
        }
    }

    public final void c(int i) {
        j jVar = this.a;
        if (jVar != null) {
            jVar.a(i);
        }
    }
}
