package com.alipay.sdk.m.c;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class b implements com.alipay.sdk.m.b.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f1163a = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService";
    public static final int b = 1;
    public static final int c = 2;

    /* JADX INFO: renamed from: com.alipay.sdk.m.c.b$b, reason: collision with other inner class name */
    public static final class ServiceConnectionC0010b implements ServiceConnection {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f1164a;
        public final LinkedBlockingQueue<IBinder> b;

        public ServiceConnectionC0010b() {
            this.f1164a = false;
            this.b = new LinkedBlockingQueue<>();
        }

        public IBinder a() throws InterruptedException {
            if (this.f1164a) {
                throw new IllegalStateException();
            }
            this.f1164a = true;
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

    public static final class c implements IInterface {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public IBinder f1165a;

        public c(IBinder iBinder) {
            this.f1165a = iBinder;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this.f1165a;
        }

        public String d() throws RemoteException {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(b.f1163a);
                this.f1165a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }

        public boolean e() throws RemoteException {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(b.f1163a);
                this.f1165a.transact(2, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readInt() != 0;
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }
    }

    @Override // com.alipay.sdk.m.b.b
    public String a(Context context) {
        ServiceConnectionC0010b serviceConnectionC0010b = new ServiceConnectionC0010b();
        Intent intent = new Intent("com.uodis.opendevice.OPENIDS_SERVICE");
        intent.setPackage("com.huawei.hwid");
        if (context.bindService(intent, serviceConnectionC0010b, 1)) {
            try {
                return new c(serviceConnectionC0010b.a()).d();
            } catch (Exception unused) {
            } finally {
                context.unbindService(serviceConnectionC0010b);
            }
        }
        return null;
    }
}
