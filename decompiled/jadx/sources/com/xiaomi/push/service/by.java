package com.xiaomi.push.service;

import com.xiaomi.push.service.bx;
import java.util.Iterator;

/* JADX INFO: loaded from: classes4.dex */
class by implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bx f8351a;

    by(bx bxVar) {
        this.f8351a = bxVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            Iterator it = this.f8351a.f972a.values().iterator();
            while (it.hasNext()) {
                ((bx.a) it.next()).run();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Sync job exception :" + e.getMessage());
        }
        this.f8351a.f973a = false;
    }
}
