package com.kwad.sdk.core.f.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

public interface a extends IInterface {

    public static final class a implements a {
        private final IBinder aqt;

        public a(IBinder iBinder) {
            this.aqt = iBinder;
        }

        @Override
        public final IBinder asBinder() {
            return this.aqt;
        }

        public final String getID() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.aqt.transact(3, parcelObtain, parcelObtain2, 0);
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
}
