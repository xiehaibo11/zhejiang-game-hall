package com.czhj.devicehelper.oaId.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

public interface g extends IInterface {

    public static abstract class a extends Binder implements g {

        public static class a implements g {
            private IBinder a;

            public a(IBinder iBinder) {
                this.a = iBinder;
            }

            @Override
            public boolean a() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.a.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    if (parcelObtain2.readInt() != 0) {
                        return false;
                    }
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                    return true;
                } catch (Throwable th) {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                    th.printStackTrace();
                    return false;
                }
            }

            @Override
            public IBinder asBinder() {
                return this.a;
            }

            @Override
            public String b() {
                String string;
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.a.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    string = parcelObtain2.readString();
                } catch (Throwable unused) {
                    parcelObtain.recycle();
                    parcelObtain2.recycle();
                    string = null;
                }
                parcelObtain.recycle();
                parcelObtain2.recycle();
                return string;
            }

            @Override
            public boolean c() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.a.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } catch (Exception unused) {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                    return false;
                }
            }

            @Override
            public void d() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.a.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } catch (Throwable unused) {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }
    }

    boolean a();

    String b();

    boolean c();

    void d();
}
