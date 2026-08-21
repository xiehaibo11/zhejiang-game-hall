package com.vivo.push;

import android.text.TextUtils;
import com.vivo.push.util.z;

/* JADX INFO: loaded from: classes4.dex */
final class f implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f7922a;
    final /* synthetic */ e b;

    f(e eVar, String str) {
        this.b = eVar;
        this.f7922a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.b.h == null || TextUtils.isEmpty(this.f7922a) || !z.b(this.b.h, this.b.h.getPackageName(), this.f7922a)) {
            return;
        }
        this.b.i();
    }
}
