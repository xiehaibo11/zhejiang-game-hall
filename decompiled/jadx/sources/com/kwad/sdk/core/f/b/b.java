package com.kwad.sdk.core.f.b;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes2.dex */
public interface b extends IInterface {

    public static final class a implements b {
        private IBinder aqt;

        public a(IBinder iBinder) {
            this.aqt = iBinder;
        }

        public final String BM() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
                this.aqt.transact(1, parcelObtain, parcelObtain2, 0);
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

        public final boolean BN() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            boolean z = false;
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
                this.aqt.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                if (parcelObtain2.readInt() == 0) {
                    z = true;
                }
            } catch (Exception unused) {
            } catch (Throwable th) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
                throw th;
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            return z;
        }

        @Override // android.os.IInterface
        public final IBinder asBinder() {
            return this.aqt;
        }
    }
}
