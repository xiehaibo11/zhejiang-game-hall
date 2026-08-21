package com.bianfeng.ymnsdk.sysfunc.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

public interface OppoIDInterface extends IInterface {

    public static abstract class up extends Binder implements OppoIDInterface {

        public static class down implements OppoIDInterface {
            public IBinder iBinder;

            public down(IBinder iBinder) {
                this.iBinder = iBinder;
            }

            public String getSerID(String str, String str2, String str3) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken("com.heytap.openid.IOpenID");
                        parcelObtain.writeString(str);
                        parcelObtain.writeString(str2);
                        parcelObtain.writeString(str3);
                        this.iBinder.transact(1, parcelObtain, parcelObtain2, 0);
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
                return this.iBinder;
            }
        }

        public static OppoIDInterface genInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.heytap.openid.IOpenID");
            if (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof OppoIDInterface)) {
                return new down(iBinder);
            }
            return (OppoIDInterface) iInterfaceQueryLocalInterface;
        }
    }
}
