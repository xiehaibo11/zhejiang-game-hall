package com.alipay.sdk.m.c;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.alipay.sdk.m.k0.a;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class g implements com.alipay.sdk.m.b.b {

    public static final class b implements ServiceConnection {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f1169a;
        public final LinkedBlockingQueue<IBinder> b;

        public b() {
            this.f1169a = false;
            this.b = new LinkedBlockingQueue<>();
        }

        public IBinder a() throws InterruptedException {
            if (this.f1169a) {
                throw new IllegalStateException();
            }
            this.f1169a = true;
            return this.b.poll(5L, TimeUnit.SECONDS);
        }

        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                this.b.put(iBinder);
            } catch (InterruptedException unused) {
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }
    }

    @Override // com.alipay.sdk.m.b.b
    public String a(Context context) {
        b bVar = new b();
        Intent intent = new Intent();
        intent.setClassName("com.samsung.android.deviceidservice", "com.samsung.android.deviceidservice.DeviceIdService");
        if (context.bindService(intent, bVar, 1)) {
            try {
                return a.AbstractBinderC0014a.a(bVar.a()).a();
            } catch (Exception unused) {
            } finally {
                context.unbindService(bVar);
            }
        }
        return null;
    }
}
