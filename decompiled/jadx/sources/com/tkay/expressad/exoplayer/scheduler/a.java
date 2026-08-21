package com.tkay.expressad.exoplayer.scheduler;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.os.PowerManager;
import com.tkay.expressad.exoplayer.k.af;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6807a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 3;
    public static final int e = 4;
    private static final int f = 8;
    private static final int g = 16;
    private static final int h = 7;
    private static final String i = "Requirements";
    private static final String[] j = null;
    private final int k;

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.scheduler.a$a, reason: collision with other inner class name */
    @Retention(RetentionPolicy.SOURCE)
    public @interface InterfaceC0457a {
    }

    private static void e() {
    }

    private a(int i2, boolean z, boolean z2) {
        this(i2 | (z ? 16 : 0) | (z2 ? 8 : 0));
    }

    public a(int i2) {
        this.k = i2;
    }

    public final int a() {
        return this.k & 7;
    }

    public final boolean b() {
        return (this.k & 16) != 0;
    }

    public final boolean c() {
        return (this.k & 8) != 0;
    }

    public final int d() {
        return this.k;
    }

    private boolean c(Context context) {
        if (!b()) {
            return true;
        }
        Intent intentRegisterReceiver = context.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
        if (intentRegisterReceiver == null) {
            return false;
        }
        int intExtra = intentRegisterReceiver.getIntExtra("status", -1);
        return intExtra == 2 || intExtra == 5;
    }

    private boolean d(Context context) {
        if (!c()) {
            return true;
        }
        PowerManager powerManager = (PowerManager) context.getSystemService("power");
        return af.f6754a >= 23 ? !powerManager.isDeviceIdleMode() : af.f6754a >= 20 ? !powerManager.isInteractive() : !powerManager.isScreenOn();
    }

    private static boolean a(ConnectivityManager connectivityManager) {
        if (af.f6754a < 23) {
            return true;
        }
        Network activeNetwork = connectivityManager.getActiveNetwork();
        if (activeNetwork == null) {
            return false;
        }
        NetworkCapabilities networkCapabilities = connectivityManager.getNetworkCapabilities(activeNetwork);
        return !(networkCapabilities == null || !networkCapabilities.hasCapability(16));
    }

    private static boolean a(ConnectivityManager connectivityManager, NetworkInfo networkInfo) {
        if (af.f6754a >= 16) {
            return connectivityManager.isActiveNetworkMetered();
        }
        int type = networkInfo.getType();
        return (type == 1 || type == 7 || type == 9) ? false : true;
    }

    public final String toString() {
        return super.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x002a  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0049  */
    /* JADX WARN: Removed duplicated region for block: B:4:0x000b  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x007d  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x00ac  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x00d9 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean a(android.content.Context r11) {
        /*
            Method dump skipped, instruction units count: 219
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.scheduler.a.a(android.content.Context):boolean");
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0027  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean b(android.content.Context r9) {
        /*
            r8 = this;
            int r0 = r8.k
            r1 = 7
            r0 = r0 & r1
            r2 = 1
            if (r0 != 0) goto L8
            return r2
        L8:
            java.lang.String r3 = "connectivity"
            java.lang.Object r9 = r9.getSystemService(r3)
            android.net.ConnectivityManager r9 = (android.net.ConnectivityManager) r9
            android.net.NetworkInfo r3 = r9.getActiveNetworkInfo()
            r4 = 0
            if (r3 == 0) goto L7d
            boolean r5 = r3.isConnected()
            if (r5 != 0) goto L1f
            goto L7d
        L1f:
            int r5 = com.tkay.expressad.exoplayer.k.af.f6754a
            r6 = 23
            r7 = 16
            if (r5 >= r6) goto L29
        L27:
            r5 = r2
            goto L43
        L29:
            android.net.Network r5 = r9.getActiveNetwork()
            if (r5 == 0) goto L42
            android.net.NetworkCapabilities r5 = r9.getNetworkCapabilities(r5)
            if (r5 == 0) goto L3e
            boolean r5 = r5.hasCapability(r7)
            if (r5 != 0) goto L3c
            goto L3e
        L3c:
            r5 = r4
            goto L3f
        L3e:
            r5 = r2
        L3f:
            if (r5 != 0) goto L42
            goto L27
        L42:
            r5 = r4
        L43:
            if (r5 != 0) goto L46
            return r4
        L46:
            if (r0 != r2) goto L49
            return r2
        L49:
            r5 = 3
            if (r0 != r5) goto L54
            boolean r9 = r3.isRoaming()
            if (r9 != 0) goto L53
            return r2
        L53:
            return r4
        L54:
            int r5 = com.tkay.expressad.exoplayer.k.af.f6754a
            if (r5 < r7) goto L5d
            boolean r9 = r9.isActiveNetworkMetered()
            goto L6c
        L5d:
            int r9 = r3.getType()
            if (r9 == r2) goto L6b
            if (r9 == r1) goto L6b
            r1 = 9
            if (r9 == r1) goto L6b
            r9 = r2
            goto L6c
        L6b:
            r9 = r4
        L6c:
            r1 = 2
            if (r0 != r1) goto L73
            if (r9 != 0) goto L72
            return r2
        L72:
            return r4
        L73:
            r1 = 4
            if (r0 != r1) goto L77
            return r9
        L77:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            r9.<init>()
            throw r9
        L7d:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.scheduler.a.b(android.content.Context):boolean");
    }
}
