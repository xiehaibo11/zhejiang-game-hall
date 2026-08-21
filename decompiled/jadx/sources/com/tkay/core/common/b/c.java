package com.tkay.core.common.b;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.ResolveInfo;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.Parcel;
import java.io.IOException;
import java.util.List;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    public final class a {
        private final String b;
        private final boolean c;

        a(String str, boolean z) {
            this.b = str;
            this.c = z;
        }

        public final String a() {
            return this.b;
        }

        private boolean b() {
            return this.c;
        }
    }

    public final a a(Context context) throws Exception {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            throw new IllegalStateException("Cannot be called from the main thread");
        }
        try {
            byte b2 = 0;
            context.getPackageManager().getPackageInfo("com.android.vending", 0);
            b bVar = new b(this, b2);
            Intent intent = new Intent("com.google.android.gms.ads.identifier.service.START");
            intent.setPackage("com.google.android.gms");
            List<ResolveInfo> listQueryIntentServices = context.getPackageManager().queryIntentServices(intent, 0);
            if (listQueryIntentServices != null && listQueryIntentServices.size() > 0 && context.bindService(intent, bVar, 1)) {
                try {
                    C0414c c0414c = new C0414c(bVar.a());
                    return new a(c0414c.a(), c0414c.b());
                } finally {
                }
            } else {
                throw new IOException("Google Play connection failed");
            }
        } catch (Exception e) {
            throw e;
        }
    }

    private final class b implements ServiceConnection {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        boolean f6041a;
        private final LinkedBlockingQueue<IBinder> c;

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }

        private b() {
            this.f6041a = false;
            this.c = new LinkedBlockingQueue<>(1);
        }

        /* synthetic */ b(c cVar, byte b) {
            this();
        }

        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                this.c.put(iBinder);
            } catch (InterruptedException unused) {
            }
        }

        public final IBinder a() {
            if (this.f6041a) {
                throw new IllegalStateException();
            }
            this.f6041a = true;
            return this.c.take();
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.common.b.c$c, reason: collision with other inner class name */
    private final class C0414c implements IInterface {
        private IBinder b;

        public C0414c(IBinder iBinder) {
            this.b = iBinder;
        }

        @Override // android.os.IInterface
        public final IBinder asBinder() {
            return this.b;
        }

        public final String a() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                this.b.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }

        public final boolean b() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                parcelObtain.writeInt(1);
                this.b.transact(2, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readInt() != 0;
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }
    }
}
