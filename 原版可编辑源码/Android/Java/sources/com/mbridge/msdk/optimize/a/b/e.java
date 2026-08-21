package com.mbridge.msdk.optimize.a.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.alipay.sdk.m.k0.a;

public interface e extends IInterface {

    public static class a implements e {
        private IBinder a;

        public a(IBinder iBinder) {
            this.a = iBinder;
        }

        @Override
        public final IBinder asBinder() {
            return this.a;
        }

        public final String a() {
            String string;
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(a.a.a);
                this.a.transact(1, parcelObtain, parcelObtain2, 0);
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
}
