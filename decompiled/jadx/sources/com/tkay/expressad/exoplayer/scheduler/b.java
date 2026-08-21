package com.tkay.expressad.exoplayer.scheduler;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkRequest;
import android.os.Handler;
import android.os.Looper;
import com.tkay.expressad.exoplayer.k.af;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6808a = "RequirementsWatcher";
    private final Context b;
    private final c c;
    private final com.tkay.expressad.exoplayer.scheduler.a d;
    private C0458b e;
    private boolean f;
    private a g;

    public interface c {
        void a();

        void b();
    }

    private static void f() {
    }

    private static /* synthetic */ void g() {
    }

    private b(Context context, c cVar, com.tkay.expressad.exoplayer.scheduler.a aVar) {
        this.d = aVar;
        this.c = cVar;
        this.b = context.getApplicationContext();
        StringBuilder sb = new StringBuilder();
        sb.append(this);
        sb.append(" created");
    }

    private void a() {
        com.tkay.expressad.exoplayer.k.a.a(Looper.myLooper());
        a(true);
        IntentFilter intentFilter = new IntentFilter();
        byte b = 0;
        if (this.d.a() != 0) {
            if (af.f6754a < 23) {
                intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            } else {
                ConnectivityManager connectivityManager = (ConnectivityManager) this.b.getSystemService("connectivity");
                NetworkRequest networkRequestBuild = new NetworkRequest.Builder().addCapability(16).build();
                a aVar = new a(this, b);
                this.g = aVar;
                connectivityManager.registerNetworkCallback(networkRequestBuild, aVar);
            }
        }
        if (this.d.b()) {
            intentFilter.addAction("android.intent.action.ACTION_POWER_CONNECTED");
            intentFilter.addAction("android.intent.action.ACTION_POWER_DISCONNECTED");
        }
        if (this.d.c()) {
            if (af.f6754a >= 23) {
                intentFilter.addAction("android.os.action.DEVICE_IDLE_MODE_CHANGED");
            } else {
                intentFilter.addAction("android.intent.action.SCREEN_ON");
                intentFilter.addAction("android.intent.action.SCREEN_OFF");
            }
        }
        C0458b c0458b = new C0458b(this, b);
        this.e = c0458b;
        this.b.registerReceiver(c0458b, intentFilter, null, new Handler());
        StringBuilder sb = new StringBuilder();
        sb.append(this);
        sb.append(" started");
    }

    private void b() {
        this.b.unregisterReceiver(this.e);
        this.e = null;
        if (this.g != null && af.f6754a >= 21) {
            ((ConnectivityManager) this.b.getSystemService("connectivity")).unregisterNetworkCallback(this.g);
            this.g = null;
        }
        StringBuilder sb = new StringBuilder();
        sb.append(this);
        sb.append(" stopped");
    }

    private com.tkay.expressad.exoplayer.scheduler.a c() {
        return this.d;
    }

    public final String toString() {
        return super.toString();
    }

    private void d() {
        ConnectivityManager connectivityManager = (ConnectivityManager) this.b.getSystemService("connectivity");
        NetworkRequest networkRequestBuild = new NetworkRequest.Builder().addCapability(16).build();
        a aVar = new a(this, (byte) 0);
        this.g = aVar;
        connectivityManager.registerNetworkCallback(networkRequestBuild, aVar);
    }

    private void e() {
        if (af.f6754a >= 21) {
            ((ConnectivityManager) this.b.getSystemService("connectivity")).unregisterNetworkCallback(this.g);
            this.g = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(boolean z) {
        boolean zA = this.d.a(this.b);
        if (z || zA != this.f) {
            this.f = zA;
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.scheduler.b$b, reason: collision with other inner class name */
    private class C0458b extends BroadcastReceiver {
        private C0458b() {
        }

        /* synthetic */ C0458b(b bVar, byte b) {
            this();
        }

        @Override // android.content.BroadcastReceiver
        public final void onReceive(Context context, Intent intent) {
            if (isInitialStickyBroadcast()) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.append(b.this);
            sb.append(" received ");
            sb.append(intent.getAction());
            b.this.a(false);
        }
    }

    private final class a extends ConnectivityManager.NetworkCallback {
        private a() {
        }

        /* synthetic */ a(b bVar, byte b) {
            this();
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public final void onAvailable(Network network) {
            super.onAvailable(network);
            StringBuilder sb = new StringBuilder();
            sb.append(b.this);
            sb.append(" NetworkCallback.onAvailable");
            b.this.a(false);
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public final void onLost(Network network) {
            super.onLost(network);
            StringBuilder sb = new StringBuilder();
            sb.append(b.this);
            sb.append(" NetworkCallback.onLost");
            b.this.a(false);
        }
    }
}
