package com.mbridge.msdk.foundation.same.report.a;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.m;
import com.mbridge.msdk.foundation.entity.j;
import com.mbridge.msdk.foundation.tools.v;

/* JADX INFO: compiled from: CampaignRequestTimeUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private j f3476a;
    private i b;
    private Context c;

    public a(j jVar) {
        Context context;
        this.b = null;
        this.f3476a = jVar;
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        this.c = contextJ;
        this.b = i.a(contextJ);
        if (this.f3476a == null || (context = this.c) == null) {
            return;
        }
        int iD = v.D(context);
        this.f3476a.e(iD);
        this.f3476a.c(v.a(this.c, iD));
        this.f3476a.d(2);
    }

    public final void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.f3476a.a(str);
    }

    public final void a(int i) {
        j jVar = this.f3476a;
        if (jVar != null) {
            jVar.b(i);
        }
    }

    public final void b(int i) {
        j jVar = this.f3476a;
        if (jVar != null) {
            jVar.c(i);
        }
    }

    public final void a() {
        if (this.f3476a != null) {
            m.a(this.b).a(this.f3476a);
        }
    }

    public final void b(String str) {
        j jVar = this.f3476a;
        if (jVar != null) {
            jVar.b(str);
        }
    }

    public final void c(int i) {
        j jVar = this.f3476a;
        if (jVar != null) {
            jVar.a(i);
        }
    }
}
