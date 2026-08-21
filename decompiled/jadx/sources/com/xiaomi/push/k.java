package com.xiaomi.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.Parcel;
import java.io.IOException;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes4.dex */
final class k {

    final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f8260a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private final boolean f830a;

        a(String str, boolean z) {
            this.f8260a = str;
            this.f830a = z;
        }

        public String a() {
            return this.f8260a;
        }
    }

    final class b implements ServiceConnection {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final LinkedBlockingQueue<IBinder> f8261a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        boolean f831a;

        private b() {
            this.f831a = false;
            this.f8261a = new LinkedBlockingQueue<>(1);
        }

        public IBinder a() {
            if (this.f831a) {
                throw new IllegalStateException();
            }
            this.f831a = true;
            return this.f8261a.poll(30000L, TimeUnit.MILLISECONDS);
        }

        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                this.f8261a.put(iBinder);
            } catch (InterruptedException unused) {
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
        }
    }

    final class c implements IInterface {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private IBinder f8262a;

        public c(IBinder iBinder) {
            this.f8262a = iBinder;
        }

        public String a() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                this.f8262a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this.f8262a;
        }
    }

    public static a a(Context context) throws Exception {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            throw new IllegalStateException("Cannot be called from the main thread");
        }
        try {
            context.getPackageManager().getPackageInfo("com.android.vending", 0);
            b bVar = new b();
            Intent intent = new Intent("com.google.android.gms.ads.identifier.service.START");
            intent.setPackage("com.google.android.gms");
            if (context.bindService(intent, bVar, 1)) {
                try {
                    try {
                        IBinder iBinderA = bVar.a();
                        if (iBinderA != null) {
                            return new a(new c(iBinderA).a(), false);
                        }
                    } catch (Exception e) {
                        throw e;
                    }
                } finally {
                    context.unbindService(bVar);
                }
                context.unbindService(bVar);
            }
            throw new IOException("Google Play connection failed");
        } catch (Exception e2) {
            throw e2;
        }
    }
}
