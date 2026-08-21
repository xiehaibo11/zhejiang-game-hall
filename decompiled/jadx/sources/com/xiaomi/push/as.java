package com.xiaomi.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.os.IBinder;
import android.os.Looper;
import android.os.Parcel;

/* JADX INFO: loaded from: classes4.dex */
class as implements au {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f8041a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f122a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ServiceConnection f123a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile int f121a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile String f125a = null;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private volatile boolean f126b = false;
    private volatile String b = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Object f124a = new Object();

    class a implements ServiceConnection {
        private a() {
        }

        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                as.this.f125a = b.a(iBinder);
                as.this.f126b = b.m128a(iBinder);
                as.this.b();
                as.this.f121a = 2;
                synchronized (as.this.f124a) {
                    try {
                        as.this.f124a.notifyAll();
                    } catch (Exception unused) {
                    }
                }
            } catch (Exception unused2) {
                as.this.b();
                as.this.f121a = 2;
                synchronized (as.this.f124a) {
                    try {
                        as.this.f124a.notifyAll();
                    } catch (Exception unused3) {
                    }
                }
            } catch (Throwable th) {
                as.this.b();
                as.this.f121a = 2;
                synchronized (as.this.f124a) {
                    try {
                        as.this.f124a.notifyAll();
                    } catch (Exception unused4) {
                    }
                    throw th;
                }
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }
    }

    class b {
        static String a(IBinder iBinder) {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
                iBinder.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        static boolean m128a(IBinder iBinder) {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
                iBinder.transact(2, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readInt() != 0;
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }
    }

    public as(Context context) {
        this.f122a = context;
        a();
    }

    private void a() {
        boolean zBindService;
        this.f123a = new a();
        Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
        intent.setPackage("com.huawei.hwid");
        try {
            zBindService = this.f122a.bindService(intent, this.f123a, 1);
        } catch (Exception unused) {
            zBindService = false;
        }
        this.f121a = zBindService ? 1 : 2;
    }

    private void a(String str) {
        if (this.f121a != 1 || Looper.myLooper() == Looper.getMainLooper()) {
            return;
        }
        synchronized (this.f124a) {
            try {
                com.xiaomi.channel.commonutils.logger.b.m43a("huawei's " + str + " wait...");
                this.f124a.wait(3000L);
            } catch (Exception unused) {
            }
        }
    }

    public static boolean a(Context context) {
        boolean z;
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo("com.huawei.hwid", 128);
            z = (packageInfo.applicationInfo.flags & 1) != 0;
            f8041a = packageInfo.versionCode >= 20602000;
        } catch (Exception unused) {
        }
        return z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        ServiceConnection serviceConnection = this.f123a;
        if (serviceConnection != null) {
            try {
                this.f122a.unbindService(serviceConnection);
            } catch (Exception unused) {
            }
        }
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String mo126a() {
        a("getOAID");
        return this.f125a;
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean mo127a() {
        return f8041a;
    }
}
