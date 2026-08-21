package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;

public class h implements f {
    public IBinder a;

    public h(IBinder iBinder) {
        this.a = iBinder;
    }

    public String a(String str, String str2, String str3) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            try {
                parcelObtain.writeInterfaceToken("com.heytap.openid.IOpenID");
                parcelObtain.writeString(str);
                parcelObtain.writeString(str2);
                parcelObtain.writeString(str3);
                this.a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } catch (Exception e) {
                e.printStackTrace();
                parcelObtain.recycle();
                parcelObtain2.recycle();
                return null;
            }
        } finally {
            parcelObtain.recycle();
            parcelObtain2.recycle();
        }
    }

    @Override
    public IBinder asBinder() {
        return this.a;
    }
}
