package com.kwad.sdk.core.f.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes2.dex */
public interface a extends IInterface {

    /* JADX INFO: renamed from: com.kwad.sdk.core.f.b.a$a, reason: collision with other inner class name */
    public static final class C0211a implements a {
        private final IBinder aqt;

        public C0211a(IBinder iBinder) {
            this.aqt = iBinder;
        }

        @Override // android.os.IInterface
        public final IBinder asBinder() {
            return this.aqt;
        }

        public final String getID() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.aqt.transact(3, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                String string = parcelObtain2.readString();
                parcelObtain.recycle();
                parcelObtain2.recycle();
                return string;
            } catch (Exception unused) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                return null;
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                throw th;
            }
        }
    }
}
