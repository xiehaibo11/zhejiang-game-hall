package com.tkay.china.a.a;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.alipay.sdk.m.q0.a;

/* JADX INFO: loaded from: classes3.dex */
public interface l extends IInterface {
    String a();

    String b();

    public static class a implements l {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private IBinder f5882a;

        @Override // android.os.IInterface
        public final IBinder asBinder() {
            return null;
        }

        public a(IBinder iBinder) {
            this.f5882a = iBinder;
        }

        @Override // com.tkay.china.a.a.l
        public final String a() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                try {
                    parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                    this.f5882a.transact(1, parcelObtain, parcelObtain2, 0);
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

        @Override // com.tkay.china.a.a.l
        public final String b() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                try {
                    parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                    this.f5882a.transact(4, parcelObtain, parcelObtain2, 0);
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
    }
}
