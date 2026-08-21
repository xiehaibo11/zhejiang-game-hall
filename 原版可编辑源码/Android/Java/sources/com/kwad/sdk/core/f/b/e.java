package com.kwad.sdk.core.f.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.alipay.sdk.m.k0.a;

public interface e extends IInterface {

    public static class a implements e {
        private IBinder aqu;

        public a(IBinder iBinder) {
            this.aqu = iBinder;
        }

        @Override
        public final IBinder asBinder() {
            return this.aqu;
        }

        public final String getID() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(a.a.a);
                this.aqu.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                String string = parcelObtain2.readString();
                parcelObtain2.recycle();
                parcelObtain.recycle();
                return string;
            } catch (Exception unused) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                return null;
            } catch (Throwable th) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                throw th;
            }
        }
    }
}
