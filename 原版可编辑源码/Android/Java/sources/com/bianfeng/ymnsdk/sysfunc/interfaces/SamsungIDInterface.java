package com.bianfeng.ymnsdk.sysfunc.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.alipay.sdk.m.k0.a;

public interface SamsungIDInterface extends IInterface {
    String getID();

    public static class Proxy implements SamsungIDInterface {
        private IBinder mIBinder;

        public Proxy(IBinder iBinder) {
            this.mIBinder = iBinder;
        }

        @Override
        public IBinder asBinder() {
            return this.mIBinder;
        }

        @Override
        public String getID() {
            String string;
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(a.a.a);
                this.mIBinder.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
            } catch (Throwable th) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                th.printStackTrace();
                string = null;
            }
            parcelObtain2.recycle();
            parcelObtain.recycle();
            return string;
        }
    }

    public static abstract class Stub extends Binder implements SamsungIDInterface {
        public Stub() {
            attachInterface(this, a.a.a);
        }

        public SamsungIDInterface a(IBinder iBinder) {
            if (iBinder == null || iBinder.queryLocalInterface(a.a.a) == null) {
                return null;
            }
            return new Proxy(iBinder);
        }
    }
}
