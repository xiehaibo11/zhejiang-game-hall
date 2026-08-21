package com.huawei.hms.framework.network.grs;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.Logger;
import com.huawei.hms.framework.network.grs.c.m;
import com.huawei.hms.framework.network.grs.c.n;
import java.util.Map;
import java.util.concurrent.Callable;

/* JADX INFO: loaded from: classes.dex */
class c implements Callable<Boolean> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f2059a;
    final /* synthetic */ GrsBaseInfo b;
    final /* synthetic */ Context c;
    final /* synthetic */ d d;

    c(d dVar, Context context, GrsBaseInfo grsBaseInfo, Context context2) {
        this.d = dVar;
        this.f2059a = context;
        this.b = grsBaseInfo;
        this.c = context2;
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // java.util.concurrent.Callable
    public Boolean call() {
        this.d.g = new m();
        this.d.i = new com.huawei.hms.framework.network.grs.a.c(this.f2059a, "share_pre_grs_conf_");
        this.d.j = new com.huawei.hms.framework.network.grs.a.c(this.f2059a, "share_pre_grs_services_");
        d dVar = this.d;
        dVar.h = new com.huawei.hms.framework.network.grs.a.a(dVar.i, this.d.j, this.d.g);
        d dVar2 = this.d;
        dVar2.k = new a(dVar2.c, this.d.h, this.d.g, this.d.j);
        new com.huawei.hms.framework.network.grs.b.b(this.f2059a, this.b, true).a(this.b);
        String strC = new com.huawei.hms.framework.network.grs.c.b.c(this.b, this.f2059a).c();
        Logger.v(d.f2074a, "scan serviceSet is:" + strC);
        String strA = this.d.j.a("services", "");
        String strA2 = n.a(strA, strC);
        if (!TextUtils.isEmpty(strA2)) {
            this.d.j.b("services", strA2);
            Logger.v(d.f2074a, "postList is:" + strA2 + " currentServices:" + strA);
            if (!strA2.equals(strA)) {
                this.d.g.a(this.d.c.getGrsParasKey(false, true, this.f2059a));
                this.d.g.a(new com.huawei.hms.framework.network.grs.c.b.c(this.b, this.c), null, null, this.d.j);
            }
        }
        d dVar3 = this.d;
        dVar3.a((Map<String, ?>) dVar3.i.a());
        this.d.h.b(this.b, this.f2059a);
        return Boolean.valueOf(this.d.d = true);
    }
}
