package com.bianfeng.ymnsdk.sysfunc.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.alipay.sdk.m.q0.a;

public interface LenovoIDInterface extends IInterface {
    String a();

    String a(String str);

    String b();

    String b(String str);

    boolean c();

    public static abstract class len_up extends Binder implements LenovoIDInterface {

        public static class len_down implements LenovoIDInterface {
            private IBinder iBinder;

            @Override
            public IBinder asBinder() {
                return null;
            }

            public len_down(IBinder iBinder) {
                this.iBinder = iBinder;
            }

            @Override
            public String a() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.a.a);
                        this.iBinder.transact(1, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        e.printStackTrace();
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String a(String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.a.a);
                        this.iBinder.transact(4, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        e.printStackTrace();
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String b() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.a.a);
                        this.iBinder.transact(2, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        e.printStackTrace();
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public String b(String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.a.a);
                        this.iBinder.transact(5, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        e.printStackTrace();
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public boolean c() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(a.a.a);
                    this.iBinder.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    z = parcelObtain2.readInt() != 0;
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                } catch (Throwable unused) {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
                return z;
            }
        }

        @Override
        protected boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(a.a.a);
                String strA = a();
                parcel2.writeNoException();
                parcel2.writeString(strA);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(a.a.a);
                String strB = b();
                parcel2.writeNoException();
                parcel2.writeString(strB);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(a.a.a);
                boolean zC = c();
                parcel2.writeNoException();
                parcel2.writeInt(zC ? 1 : 0);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(a.a.a);
                String strA2 = a(parcel.readString());
                parcel2.writeNoException();
                parcel2.writeString(strA2);
                return true;
            }
            if (i != 5) {
                if (i == 1598968902) {
                    parcel2.writeString(a.a.a);
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface(a.a.a);
            String strB2 = b(parcel.readString());
            parcel2.writeNoException();
            parcel2.writeString(strB2);
            return true;
        }

        public static LenovoIDInterface getHelper(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(a.a.a);
            if (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof LenovoIDInterface)) {
                return new len_down(iBinder);
            }
            return (LenovoIDInterface) iInterfaceQueryLocalInterface;
        }
    }
}
