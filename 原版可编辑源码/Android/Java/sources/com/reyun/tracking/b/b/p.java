package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;

public class p implements n {
    private IBinder a;

    public p(IBinder iBinder) {
        this.a = iBinder;
    }

    @Override
    public String a() {
        String string;
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
            this.a.transact(3, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            string = parcelObtain2.readString();
        } catch (Throwable unused) {
            parcelObtain2.recycle();
            parcelObtain.recycle();
            string = null;
        }
        parcelObtain2.recycle();
        parcelObtain.recycle();
        return string;
    }

    @Override
    public IBinder asBinder() {
        return this.a;
    }
}
