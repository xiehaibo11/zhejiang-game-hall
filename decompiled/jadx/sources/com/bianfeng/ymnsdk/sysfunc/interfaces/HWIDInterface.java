package com.bianfeng.ymnsdk.sysfunc.interfaces;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.util.Log;
import com.alipay.sdk.m.c.b;

/* JADX INFO: loaded from: classes.dex */
public interface HWIDInterface extends IInterface {
    boolean getBoos();

    String getIDs();

    public static final class HWID implements HWIDInterface {
        private IBinder iBinder;

        public HWID(IBinder iBinder) {
            this.iBinder = iBinder;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this.iBinder;
        }

        @Override // com.bianfeng.ymnsdk.sysfunc.interfaces.HWIDInterface
        public String getIDs() {
            Log.i("Wooo", "HWIDInterface getIDs IN ");
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            String string = null;
            try {
                parcelObtain.writeInterfaceToken(b.f1163a);
                this.iBinder.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
                Log.i("Wooo", "HWDeviceIDHelper getIDs IN res -> " + string);
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                th.printStackTrace();
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            Log.i("Wooo", "HWDeviceIDHelper getIDs IN res2 -> " + string);
            return string;
        }

        @Override // com.bianfeng.ymnsdk.sysfunc.interfaces.HWIDInterface
        public boolean getBoos() {
            Log.i("Wooo", "HWDeviceIDHelper getBoos IN ");
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            boolean z = false;
            try {
                parcelObtain.writeInterfaceToken(b.f1163a);
                this.iBinder.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                int i = parcelObtain2.readInt();
                Log.i("Wooo", "HWDeviceIDHelper getBoos IN read -> " + i);
                if (i == 0) {
                    z = true;
                }
            } catch (Throwable unused) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            Log.i("Wooo", "HWDeviceIDHelper getBoos IN read2 -> " + z);
            return z;
        }
    }
}
