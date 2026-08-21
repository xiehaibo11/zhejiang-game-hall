package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;

public final class b implements a {
    private IBinder a;

    public b(IBinder iBinder) {
        this.a = iBinder;
    }

    public String a() {
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

    @Override
    public IBinder asBinder() {
        return this.a;
    }
}
