package com.loc;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.Parcel;
import android.os.RemoteException;
import java.io.IOException;
import java.util.concurrent.LinkedBlockingQueue;

public final class ae {

    private static final class a {
        private final String a;
        private final boolean b;

        a(String str, boolean z) {
            this.a = str;
            this.b = z;
        }

        public final boolean a() {
            return this.b;
        }
    }

    private static final class b implements ServiceConnection {
        boolean a;
        private final LinkedBlockingQueue<IBinder> b;

        private b() {
            this.a = false;
            this.b = new LinkedBlockingQueue<>(1);
        }

        b(byte b) {
            this();
        }

        public final IBinder a() throws InterruptedException {
            if (this.a) {
                throw new IllegalStateException();
            }
            this.a = true;
            return this.b.take();
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                this.b.put(iBinder);
            } catch (InterruptedException unused) {
            }
        }

        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    }

    private static final class c implements IInterface {
        private IBinder a;

        public c(IBinder iBinder) {
            this.a = iBinder;
        }

        public final String a() throws RemoteException {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                this.a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }

        @Override
        public final IBinder asBinder() {
            return this.a;
        }

        public final boolean b() throws RemoteException {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                parcelObtain.writeInt(1);
                this.a.transact(2, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readInt() != 0;
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }
    }

    public static String a(Context context) {
        try {
            a aVarB = b(context);
            if (aVarB != null && !aVarB.a()) {
                return aVarB.a;
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    private static a b(Context context) throws Exception {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            return null;
        }
        try {
            byte b2 = 0;
            context.getPackageManager().getPackageInfo("com.android.vending", 0);
            b bVar = new b(b2);
            Intent intent = new Intent("com.google.android.gms.ads.identifier.service.START");
            intent.setPackage("com.google.android.gms");
            if (!context.bindService(intent, bVar, 1)) {
                throw new IOException("Google Play connection failed");
            }
            try {
                try {
                    c cVar = new c(bVar.a());
                    boolean zB = cVar.b();
                    return new a(zB ? "" : cVar.a(), zB);
                } catch (Exception e) {
                    throw e;
                }
            } finally {
                context.unbindService(bVar);
            }
        } catch (Exception e2) {
            throw e2;
        }
    }
}
