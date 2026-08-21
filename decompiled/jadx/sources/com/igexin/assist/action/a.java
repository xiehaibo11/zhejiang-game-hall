package com.igexin.assist.action;

/* JADX INFO: loaded from: classes2.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f2412a;
    final /* synthetic */ boolean b;
    final /* synthetic */ MessageManger c;

    a(MessageManger messageManger, String str, boolean z) {
        this.c = messageManger;
        this.f2412a = str;
        this.b = z;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (com.igexin.push.core.d.h.get()) {
            this.c.a(this.f2412a, this.b);
        }
    }
}
