package com.sigmob.sdk.base.services;

import android.content.Context;
import android.content.IntentFilter;
import com.sigmob.sdk.base.services.j;

public class d implements j.a {
    c a;
    k b = k.b;

    public d() {
        if (this.a == null) {
            this.a = new c();
        }
    }

    public void a(Context context) {
        context.registerReceiver(this.a, new IntentFilter("android.intent.action.DOWNLOAD_COMPLETE"));
    }

    public void b(Context context) {
        context.unregisterReceiver(this.a);
    }

    @Override
    public boolean b() {
        a(com.sigmob.sdk.b.b());
        this.b = k.a;
        return false;
    }

    @Override
    public k c() {
        return null;
    }

    @Override
    public void d() {
        b(com.sigmob.sdk.b.b());
        this.b = k.b;
    }

    @Override
    public Error e() {
        return null;
    }
}
