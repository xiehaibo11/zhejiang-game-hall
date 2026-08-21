package com.czhj.devicehelper.oaId.interfaces;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.czhj.sdk.logger.SigmobLog;

/* JADX INFO: loaded from: classes.dex */
public interface a extends IInterface {

    /* JADX INFO: renamed from: com.czhj.devicehelper.oaId.interfaces.a$a, reason: collision with other inner class name */
    public static final class C0067a implements a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private IBinder f1740a;

        public C0067a(IBinder iBinder) {
            this.f1740a = iBinder;
        }

        @Override // com.czhj.devicehelper.oaId.interfaces.a
        public String a() {
            String string;
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.f1740a.transact(3, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                string = parcelObtain2.readString();
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                SigmobLog.e(th.getMessage());
                string = null;
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            return string;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this.f1740a;
        }

        public boolean b() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
                this.f1740a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readInt() != 0;
            } catch (Exception unused) {
                parcelObtain2.recycle();
                parcelObtain.recycle();
                return false;
            }
        }
    }

    String a();
}
