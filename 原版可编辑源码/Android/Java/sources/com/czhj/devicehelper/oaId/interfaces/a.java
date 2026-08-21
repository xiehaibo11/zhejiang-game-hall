package com.czhj.devicehelper.oaId.interfaces;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.czhj.sdk.logger.SigmobLog;

public interface a extends IInterface {

    public static final class a implements a {
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
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.a.transact(3, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                SigmobLog.e(th.getMessage());
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

        public boolean b() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readInt() != 0;
            } catch (Exception unused) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                return false;
            }
        }
    }

    String a();
}
