package com.xiaomi.push.service;

import com.xiaomi.push.fj;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
final class aq implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ List f8313a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ boolean f920a;

    aq(List list, boolean z) {
        this.f8313a = list;
        this.f920a = z;
    }

    @Override // java.lang.Runnable
    public void run() {
        boolean zB = ap.b("www.baidu.com:80");
        Iterator it = this.f8313a.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            zB = zB || ap.b((String) it.next());
            if (zB && !this.f920a) {
                break;
            }
        }
        fj.a(zB ? 1 : 2);
    }
}
