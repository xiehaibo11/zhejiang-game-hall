package com.kwad.sdk.core.f.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

public interface f extends IInterface {

    public static final class a implements f {
        private IBinder aqt;

        public a(IBinder iBinder) {
            this.aqt = iBinder;
        }

        @Override
        public final IBinder asBinder() {
            return this.aqt;
        }

        @Override
        public final String getOAID() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                this.aqt.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                String string = parcelObtain2.readString();
                parcelObtain.recycle();
                parcelObtain2.recycle();
                return string;
            } catch (Exception unused) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                return null;
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                throw th;
            }
        }
    }

    String getOAID();
}
