package com.czhj.devicehelper.oaId.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.alipay.sdk.m.q0.a;
import com.czhj.sdk.logger.SigmobLog;

/* JADX INFO: loaded from: classes.dex */
public interface c extends IInterface {

    public static abstract class a extends Binder implements c {

        /* JADX INFO: renamed from: com.czhj.devicehelper.oaId.interfaces.c$a$a, reason: collision with other inner class name */
        public static class C0068a implements c {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f1742a;

            public C0068a(IBinder iBinder) {
                this.f1742a = iBinder;
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.c
            public String a() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f1742a.transact(1, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        SigmobLog.e(e.getMessage());
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.c
            public String a(String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f1742a.transact(4, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        SigmobLog.e(e.getMessage());
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return null;
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.c
            public String b() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f1742a.transact(2, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        SigmobLog.e(e.getMessage());
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.c
            public String b(String str) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                        this.f1742a.transact(5, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        SigmobLog.e(e.getMessage());
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.c
            public boolean c() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                    this.f1742a.transact(3, parcelObtain, parcelObtain2, 0);
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

        public static c a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(a.AbstractBinderC0019a.f1238a);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof c)) ? new C0068a(iBinder) : (c) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.Binder
        protected boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            String strA;
            if (i == 1) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                strA = a();
            } else if (i == 2) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                strA = b();
            } else {
                if (i == 3) {
                    parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                    boolean zC = c();
                    parcel2.writeNoException();
                    parcel2.writeInt(zC ? 1 : 0);
                    return true;
                }
                if (i == 4) {
                    parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                    strA = a(parcel.readString());
                } else {
                    if (i != 5) {
                        if (i != 1598968902) {
                            return super.onTransact(i, parcel, parcel2, i2);
                        }
                        parcel2.writeString(a.AbstractBinderC0019a.f1238a);
                        return true;
                    }
                    parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                    strA = b(parcel.readString());
                }
            }
            parcel2.writeNoException();
            parcel2.writeString(strA);
            return true;
        }
    }

    String a();

    String a(String str);

    String b();

    String b(String str);

    boolean c();
}
