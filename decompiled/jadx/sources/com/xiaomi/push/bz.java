package com.xiaomi.push;

import com.xiaomi.push.al;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes4.dex */
class bz extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bx f8071a;

    bz(bx bxVar) {
        this.f8071a = bxVar;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "10054";
    }

    @Override // java.lang.Runnable
    public void run() {
        com.xiaomi.channel.commonutils.logger.b.c("exec== DbSizeControlJob");
        cj.a(this.f8071a.f163a).a(new cc(this.f8071a.c(), new WeakReference(this.f8071a.f163a)));
        this.f8071a.b("check_time");
    }
}
