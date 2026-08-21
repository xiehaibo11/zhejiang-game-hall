package com.alipay.sdk.m.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.os.Binder;
import android.os.Build;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.Parcel;
import android.os.RemoteException;
import android.text.TextUtils;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import kotlin.UByte;

public interface a extends IInterface {

    public static abstract class a extends Binder implements a {

        public static class a implements a {
            public IBinder a;

            public a(IBinder iBinder) {
                this.a = iBinder;
            }

            public String a(String str, String str2, String str3) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.heytap.openid.IOpenID");
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    this.a.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override
            public IBinder asBinder() {
                return this.a;
            }
        }

        public static a a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.heytap.openid.IOpenID");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof a)) ? new a(iBinder) : (a) iInterfaceQueryLocalInterface;
        }
    }

    public class b {
        public static boolean a;
        public static boolean b;
    }

    public class c {
        public a a = null;
        public String b = null;
        public String c = null;
        public final Object d = new Object();
        public ServiceConnection e = new a();

        public class a implements ServiceConnection {
            public a() {
            }

            @Override
            public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
                c.this.a = a.a(iBinder);
                synchronized (c.this.d) {
                    c.this.d.notify();
                }
            }

            @Override
            public void onServiceDisconnected(ComponentName componentName) {
                c.this.a = null;
            }
        }

        public static class b {
            public static final c a = new c(null);
        }

        public c(a aVar) {
        }

        public boolean a(Context context) {
            try {
                PackageInfo packageInfo = context.getPackageManager().getPackageInfo("com.heytap.openid", 0);
                return Build.VERSION.SDK_INT >= 28 ? packageInfo != null && packageInfo.getLongVersionCode() >= 1 : packageInfo != null && packageInfo.versionCode >= 1;
            } catch (PackageManager.NameNotFoundException e) {
                e.printStackTrace();
                return false;
            }
        }

        public final String b(Context context, String str) {
            Signature[] signatureArr;
            if (TextUtils.isEmpty(this.b)) {
                this.b = context.getPackageName();
            }
            if (TextUtils.isEmpty(this.c)) {
                String string = null;
                try {
                    signatureArr = context.getPackageManager().getPackageInfo(this.b, 64).signatures;
                } catch (PackageManager.NameNotFoundException e) {
                    e.printStackTrace();
                    signatureArr = null;
                }
                if (signatureArr != null && signatureArr.length > 0) {
                    byte[] byteArray = signatureArr[0].toByteArray();
                    try {
                        MessageDigest messageDigest = MessageDigest.getInstance("SHA1");
                        if (messageDigest != null) {
                            byte[] bArrDigest = messageDigest.digest(byteArray);
                            StringBuilder sb = new StringBuilder();
                            for (byte b2 : bArrDigest) {
                                sb.append(Integer.toHexString((b2 & UByte.MAX_VALUE) | 256).substring(1, 3));
                            }
                            string = sb.toString();
                        }
                    } catch (NoSuchAlgorithmException e2) {
                        e2.printStackTrace();
                    }
                }
                this.c = string;
            }
            String strA = ((a.a) this.a).a(this.b, this.c, str);
            return TextUtils.isEmpty(strA) ? "" : strA;
        }

        /* JADX WARN: Removed duplicated region for block: B:23:0x0047  */
        /* JADX WARN: Removed duplicated region for block: B:45:0x004b A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public synchronized String a(Context context, String str) {
            if (Looper.myLooper() != Looper.getMainLooper()) {
                if (this.a == null) {
                    Intent intent = new Intent();
                    intent.setComponent(new ComponentName("com.heytap.openid", "com.heytap.openid.IdentifyService"));
                    intent.setAction("action.com.heytap.openid.OPEN_ID_SERVICE");
                    if (context.bindService(intent, this.e, 1)) {
                        synchronized (this.d) {
                            try {
                                this.d.wait(3000L);
                            } catch (InterruptedException e) {
                                e.printStackTrace();
                            }
                        }
                        if (this.a != null) {
                            return "";
                        }
                        try {
                            return b(context, str);
                        } catch (RemoteException e2) {
                            e2.printStackTrace();
                            return "";
                        }
                    }
                    if (this.a != null) {
                    }
                } else {
                    try {
                        return b(context, str);
                    } catch (RemoteException e3) {
                        e3.printStackTrace();
                        return "";
                    }
                }
            }
            throw new IllegalStateException("Cannot run on MainThread");
        }
    }
}
