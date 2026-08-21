package com.kwad.sdk.core.f.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.alipay.sdk.m.q0.a;

/* JADX INFO: loaded from: classes2.dex */
public interface c extends IInterface {

    public static final class a implements c {
        private IBinder aqt;

        public a(IBinder iBinder) {
            this.aqt = iBinder;
        }

        @Override // android.os.IInterface
        public final IBinder asBinder() {
            return this.aqt;
        }

        @Override // com.kwad.sdk.core.f.b.c
        public final String getOaid() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(a.AbstractBinderC0019a.f1238a);
                this.aqt.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                String string = parcelObtain2.readString();
                parcelObtain2.recycle();
                parcelObtain.recycle();
                return string;
            } catch (Exception unused) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                return null;
            } catch (Throwable th) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                throw th;
            }
        }
    }

    String getOaid();
}
