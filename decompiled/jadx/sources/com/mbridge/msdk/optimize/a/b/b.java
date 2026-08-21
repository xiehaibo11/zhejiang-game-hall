package com.mbridge.msdk.optimize.a.b;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.alipay.sdk.m.q0.a;

/* JADX INFO: compiled from: LenovoIDInterface.java */
/* JADX INFO: loaded from: classes2.dex */
public interface b extends IInterface {
    String a();

    String a(String str);

    String b();

    String b(String str);

    boolean c();

    /* JADX INFO: compiled from: LenovoIDInterface.java */
    public static abstract class a extends Binder implements b {

        /* JADX INFO: renamed from: com.mbridge.msdk.optimize.a.b.b$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: LenovoIDInterface.java */
        public static class C0280a implements b {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f3872a;

            @Override // android.os.IInterface
            public final IBinder asBinder() {
                return null;
            }

            public C0280a(IBinder iBinder) {
                this.f3872a = iBinder;
            }

            @Override // com.mbridge.msdk.optimize.a.b.b
            public final String a() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f3872a.transact(1, parcelObtain, parcelObtain2, 0);
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

            @Override // com.mbridge.msdk.optimize.a.b.b
            public final String a(String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f3872a.transact(4, parcelObtain, parcelObtain2, 0);
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

            @Override // com.mbridge.msdk.optimize.a.b.b
            public final String b() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f3872a.transact(2, parcelObtain, parcelObtain2, 0);
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

            @Override // com.mbridge.msdk.optimize.a.b.b
            public final String b(String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f3872a.transact(5, parcelObtain, parcelObtain2, 0);
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

            @Override // com.mbridge.msdk.optimize.a.b.b
            public final boolean c() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                    this.f3872a.transact(3, parcelObtain, parcelObtain2, 0);
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

        @Override // android.os.Binder
        protected boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                String strA = a();
                parcel2.writeNoException();
                parcel2.writeString(strA);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                String strB = b();
                parcel2.writeNoException();
                parcel2.writeString(strB);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                boolean zC = c();
                parcel2.writeNoException();
                parcel2.writeInt(zC ? 1 : 0);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                String strA2 = a(parcel.readString());
                parcel2.writeNoException();
                parcel2.writeString(strA2);
                return true;
            }
            if (i != 5) {
                if (i == 1598968902) {
                    parcel2.writeString(a.AbstractBinderC0019a.f1238a);
                    return true;
                }
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
            String strB2 = b(parcel.readString());
            parcel2.writeNoException();
            parcel2.writeString(strB2);
            return true;
        }
    }
}
