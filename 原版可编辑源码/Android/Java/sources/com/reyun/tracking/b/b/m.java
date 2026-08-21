package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;
import com.alipay.sdk.m.k0.a;

public class m implements l {
    private IBinder a;

    public m(IBinder iBinder) {
        this.a = iBinder;
    }

    public String a() {
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

    @Override
    public IBinder asBinder() {
        return this.a;
    }
}
