package com.czhj.devicehelper.oaId.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.alipay.sdk.m.k0.a;

public interface f extends IInterface {

    public static class a implements f {
        private IBinder a;

        public a(IBinder iBinder) {
            this.a = iBinder;
        }

        @Override
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

    public static abstract class b extends Binder implements f {
        public b() {
            attachInterface(this, a.a.a);
        }

        public f a(IBinder iBinder) {
            if (iBinder == null || iBinder.queryLocalInterface(a.a.a) == null) {
                return null;
            }
            return new a(iBinder);
        }
    }

    String a();
}
