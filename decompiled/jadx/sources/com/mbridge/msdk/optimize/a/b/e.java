package com.mbridge.msdk.optimize.a.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.alipay.sdk.m.k0.a;

/* JADX INFO: compiled from: SamsungIDInterface.java */
/* JADX INFO: loaded from: classes2.dex */
public interface e extends IInterface {

    /* JADX INFO: compiled from: SamsungIDInterface.java */
    public static class a implements e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private IBinder f3875a;

        public a(IBinder iBinder) {
            this.f3875a = iBinder;
        }

        @Override // android.os.IInterface
        public final IBinder asBinder() {
            return this.f3875a;
        }

        public final String a() {
            String string;
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(a.AbstractBinderC0014a.f1206a);
                this.f3875a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
            } catch (Throwable th) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                th.printStackTrace();
                string = null;
            }
            parcelObtain2.recycle();
            parcelObtain.recycle();
            return string;
        }
    }
}
