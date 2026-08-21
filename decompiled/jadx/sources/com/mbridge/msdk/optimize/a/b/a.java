package com.mbridge.msdk.optimize.a.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: compiled from: ASUSIDInterface.java */
/* JADX INFO: loaded from: classes2.dex */
public interface a extends IInterface {

    /* JADX INFO: renamed from: com.mbridge.msdk.optimize.a.b.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: ASUSIDInterface.java */
    public static final class C0279a implements a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private IBinder f3871a;

        public C0279a(IBinder iBinder) {
            this.f3871a = iBinder;
        }

        @Override // android.os.IInterface
        public final IBinder asBinder() {
            return this.f3871a;
        }

        public final String a() {
            String string;
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.f3871a.transact(3, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                th.printStackTrace();
                string = null;
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            return string;
        }
    }
}
