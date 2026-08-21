package com.sigmob.sdk.base.services;

import android.content.Context;
import android.content.IntentFilter;
import com.sigmob.sdk.base.services.j;

/* JADX INFO: loaded from: classes3.dex */
public class d implements j.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    c f4928a;
    k b = k.STOP;

    public d() {
        if (this.f4928a == null) {
            this.f4928a = new c();
        }
    }

    public void a(Context context) {
        context.registerReceiver(this.f4928a, new IntentFilter("android.intent.action.DOWNLOAD_COMPLETE"));
    }

    public void b(Context context) {
        context.unregisterReceiver(this.f4928a);
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public boolean b() {
        a(com.sigmob.sdk.b.b());
        this.b = k.RUNNING;
        return false;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public k c() {
        return null;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public void d() {
        b(com.sigmob.sdk.b.b());
        this.b = k.STOP;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public Error e() {
        return null;
    }
}
