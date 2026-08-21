package com.czhj.devicehelper.oaId.interfaces;

import android.content.Context;
import android.os.Build;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.provider.Settings;
import android.text.TextUtils;

public interface b extends IInterface {

    public static final class a implements b {
        private IBinder a;
        private Context b;

        public a(IBinder iBinder, Context context) {
            this.a = iBinder;
            this.b = context;
        }

        @Override
        public String a() {
            String string;
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.a);
                this.a.transact(1, parcelObtain, parcelObtain2, 0);
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

        @Override
        public IBinder asBinder() {
            return this.a;
        }

        @Override
        public boolean b() {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            boolean z = true;
            try {
                parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.a);
                this.a.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                if (parcelObtain2.readInt() == 0) {
                    z = false;
                }
            } catch (Throwable unused) {
                parcelObtain.recycle();
                parcelObtain2.recycle();
            }
            parcelObtain.recycle();
            parcelObtain2.recycle();
            return z;
        }

        public String c() {
            if (Build.VERSION.SDK_INT < 24) {
                return null;
            }
            try {
                String string = Settings.Global.getString(this.b.getContentResolver(), "pps_oaid");
                String string2 = Settings.Global.getString(this.b.getContentResolver(), "pps_track_limit");
                if (!TextUtils.isEmpty(string)) {
                    if (!TextUtils.isEmpty(string2)) {
                        return "get oaid failed";
                    }
                }
                return string;
            } catch (Throwable th) {
                th.printStackTrace();
                return "get oaid failed";
            }
        }
    }

    String a();

    boolean b();
}
