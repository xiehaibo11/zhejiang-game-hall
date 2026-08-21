package com.igexin.push.core.a;

import com.igexin.push.core.bean.PushTaskBean;

/* JADX INFO: loaded from: classes2.dex */
class h implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PushTaskBean f2508a;
    final /* synthetic */ String b;
    final /* synthetic */ e c;

    h(e eVar, PushTaskBean pushTaskBean, String str) {
        this.c = eVar;
        this.f2508a = pushTaskBean;
        this.b = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.c.b(this.f2508a, this.b);
    }
}
