package com.czhj.sdk.common.utils;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.Parcel;
import android.os.RemoteException;
import com.czhj.sdk.logger.SigmobLog;
import java.io.IOException;
import java.util.concurrent.LinkedBlockingQueue;

public class PlayServicesUtil {

    private static final class AdvertisingConnection implements ServiceConnection {
        boolean a;
        private final LinkedBlockingQueue<IBinder> b;

        private AdvertisingConnection() {
            this.a = false;
            this.b = new LinkedBlockingQueue<>(1);
        }

        IBinder a() throws InterruptedException {
            if (this.a) {
                throw new IllegalStateException();
            }
            this.a = true;
            return this.b.take();
        }

        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                this.b.put(iBinder);
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
        }
    }

    public static class AdvertisingInfo {
        public final String advertisingId;
        public final boolean limitAdTracking;

        AdvertisingInfo(String str, boolean z) {
            this.advertisingId = str;
            this.limitAdTracking = z;
        }
    }

    private static final class AdvertisingInterface implements IInterface {
        private final IBinder a;

        AdvertisingInterface(IBinder iBinder) {
            this.a = iBinder;
        }

        String a() throws RemoteException {
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
        public IBinder asBinder() {
            return this.a;
        }

        boolean b() throws RemoteException {
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

    public static AdvertisingInfo getAdvertisingIdInfo(Context context) throws Exception {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            return null;
        }
        SigmobLog.d("private : getAdvertisingIdInfo");
        AdvertisingConnection advertisingConnection = new AdvertisingConnection();
        Intent intent = new Intent("com.google.android.gms.ads.identifier.service.START");
        intent.setPackage("com.google.android.gms");
        try {
            if (context.bindService(intent, advertisingConnection, 1)) {
                AdvertisingInterface advertisingInterface = new AdvertisingInterface(advertisingConnection.a());
                return new AdvertisingInfo(advertisingInterface.a(), advertisingInterface.b());
            }
            context.unbindService(advertisingConnection);
            throw new IOException("Google Play connection failed");
        } finally {
            context.unbindService(advertisingConnection);
        }
    }
}
