package com.mbridge.msdk.optimize.a.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

public interface a extends IInterface {

    public static final class a implements a {
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
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.a.transact(3, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                th.printStackTrace();
                string = null;
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            return string;
        }
    }
}
