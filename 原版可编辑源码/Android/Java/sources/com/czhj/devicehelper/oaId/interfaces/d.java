package com.czhj.devicehelper.oaId.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.util.Log;
import com.czhj.sdk.logger.SigmobLog;

public interface d extends IInterface {

    public static abstract class a extends Binder implements d {

        public static class a implements d {
            public IBinder a;

            public a(IBinder iBinder) {
                this.a = iBinder;
            }

            public String a(String str, String str2, String str3) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                String string = null;
                try {
                    try {
                        parcelObtain.writeInterfaceToken("com.heytap.openid.IOpenID");
                        parcelObtain.writeString(str);
                        parcelObtain.writeString(str2);
                        parcelObtain.writeString(str3);
                        this.a.transact(1, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        string = parcelObtain2.readString();
                        Log.d("oaid", "getSerID() called with: res = [" + string + "]");
                    } catch (Exception e) {
                        Log.d("oaid", "getSerID() called with: Exception = [" + e.getMessage() + "]");
                        SigmobLog.e(e.getMessage());
                    }
                    return string;
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

        public static d a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.heytap.openid.IOpenID");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof d)) ? new a(iBinder) : (d) iInterfaceQueryLocalInterface;
        }
    }
}
