package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;
import com.alipay.sdk.m.q0.a;

/* JADX INFO: loaded from: classes3.dex */
public class e implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IBinder f4722a;

    public e(IBinder iBinder) {
        this.f4722a = iBinder;
    }

    @Override // com.reyun.tracking.b.b.c
    public String a() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            try {
                parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                this.f4722a.transact(1, parcelObtain, parcelObtain2, 0);
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

    @Override // com.reyun.tracking.b.b.c
    public String a(String str) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            try {
                parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                this.f4722a.transact(4, parcelObtain, parcelObtain2, 0);
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

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return null;
    }

    @Override // com.reyun.tracking.b.b.c
    public String b() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            try {
                parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                this.f4722a.transact(2, parcelObtain, parcelObtain2, 0);
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

    @Override // com.reyun.tracking.b.b.c
    public String b(String str) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            try {
                parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                this.f4722a.transact(5, parcelObtain, parcelObtain2, 0);
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

    @Override // com.reyun.tracking.b.b.c
    public boolean c() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
            this.f4722a.transact(3, parcelObtain, parcelObtain2, 0);
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
