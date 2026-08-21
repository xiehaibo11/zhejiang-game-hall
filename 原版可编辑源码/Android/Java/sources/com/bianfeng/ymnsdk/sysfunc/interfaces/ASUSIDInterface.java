package com.bianfeng.ymnsdk.sysfunc.interfaces;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.util.Log;

public interface ASUSIDInterface extends IInterface {
    String getID();

    public static final class ASUSID implements ASUSIDInterface {
        private IBinder iBinder;

        public ASUSID(IBinder iBinder) {
            this.iBinder = iBinder;
        }

        @Override
        public IBinder asBinder() {
            return this.iBinder;
        }

        @Override
        public String getID() {
            Log.i("Wooo", " ASUSDeviceIDHelper getID IN ");
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            String string = null;
            try {
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.iBinder.transact(3, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
                Log.i("Wooo", "ASUSIDInterface getID IN res -> " + string);
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                th.printStackTrace();
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            Log.i("Wooo", "ASUSIDInterface getID IN res2 -> " + string);
            return string;
        }
    }
}
