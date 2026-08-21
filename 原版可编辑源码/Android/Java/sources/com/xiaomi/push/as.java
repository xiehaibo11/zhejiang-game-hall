package com.xiaomi.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.os.IBinder;
import android.os.Looper;
import android.os.Parcel;

class as implements au {
    private static boolean a;
    private Context a;
    private ServiceConnection a;
    private volatile int a = 0;
    private volatile String a = null;
    private volatile boolean b = false;
    private volatile String b = null;
    private final Object a = new Object();

    class a implements ServiceConnection {
        private a() {
        }

        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                as.this.a = b.a(iBinder);
                as.this.b = b.a(iBinder);
                as.this.b();
                as.this.a = 2;
                synchronized (as.this.a) {
                    try {
                        as.this.a.notifyAll();
                    } catch (Exception unused) {
                    }
                }
            } catch (Exception unused2) {
                as.this.b();
                as.this.a = 2;
                synchronized (as.this.a) {
                    try {
                        as.this.a.notifyAll();
                    } catch (Exception unused3) {
                    }
                }
            } catch (Throwable th) {
                as.this.b();
                as.this.a = 2;
                synchronized (as.this.a) {
                    try {
                        as.this.a.notifyAll();
                    } catch (Exception unused4) {
                    }
                    throw th;
                }
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
        }
    }

    class b {
        static String a(IBinder iBinder) {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.a);
                iBinder.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }

        static boolean a(IBinder iBinder) {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.a);
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
        this.a = context;
        a();
    }

    private void a() {
        boolean zBindService;
        this.a = new a();
        Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
        intent.setPackage("com.huawei.hwid");
        try {
            zBindService = this.a.bindService(intent, this.a, 1);
        } catch (Exception unused) {
            zBindService = false;
        }
        this.a = zBindService ? 1 : 2;
    }

    private void a(String str) {
        if (this.a != 1 || Looper.myLooper() == Looper.getMainLooper()) {
            return;
        }
        synchronized (this.a) {
            try {
                com.xiaomi.channel.commonutils.logger.b.a("huawei's " + str + " wait...");
                this.a.wait(3000L);
            } catch (Exception unused) {
            }
        }
    }

    public static boolean a(Context context) {
        boolean z;
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo("com.huawei.hwid", 128);
            z = (packageInfo.applicationInfo.flags & 1) != 0;
            a = packageInfo.versionCode >= 20602000;
        } catch (Exception unused) {
        }
        return z;
    }

    private void b() {
        ServiceConnection serviceConnection = this.a;
        if (serviceConnection != null) {
            try {
                this.a.unbindService(serviceConnection);
            } catch (Exception unused) {
            }
        }
    }

    @Override
    public String a() {
        a("getOAID");
        return this.a;
    }

    @Override
    public boolean a() {
        return a;
    }
}
