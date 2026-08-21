package com.xiaomi.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.os.Build;
import android.os.IBinder;
import android.os.Looper;
import android.os.Parcel;
import java.security.MessageDigest;
import kotlin.UByte;

class bb implements au {
    private static boolean a;
    private Context a;
    private ServiceConnection a;
    private volatile int a = 0;
    private volatile a a = null;
    private final Object a = new Object();

    class a {
        String a;
        String b;
        String c;
        String d;

        private a() {
            this.a = null;
            this.b = null;
            this.c = null;
            this.d = null;
        }
    }

    class b implements ServiceConnection {
        private b() {
        }

        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            if (bb.this.a != null) {
                return;
            }
            new Thread(new bd(this, iBinder)).start();
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
        }
    }

    class c {
        static String a(IBinder iBinder, String str, String str2, String str3) {
            Parcel parcelObtain = Parcel.obtain();
            Parcel parcelObtain2 = Parcel.obtain();
            try {
                parcelObtain.writeInterfaceToken("com.heytap.openid.IOpenID");
                parcelObtain.writeString(str);
                parcelObtain.writeString(str2);
                parcelObtain.writeString(str3);
                iBinder.transact(1, parcelObtain, parcelObtain2, 0);
                parcelObtain2.readException();
                return parcelObtain2.readString();
            } finally {
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }
    }

    public bb(Context context) {
        this.a = context;
        a();
    }

    private void a() {
        boolean zBindService;
        this.a = new b();
        Intent intent = new Intent();
        intent.setClassName("com.heytap.openid", "com.heytap.openid.IdentifyService");
        intent.setAction("action.com.heytap.openid.OPEN_ID_SERVICE");
        try {
            zBindService = this.a.bindService(intent, this.a, 1);
        } catch (Exception unused) {
            zBindService = false;
        }
        this.a = zBindService ? 1 : 2;
    }

    private void a(String str) {
        if (this.a != 1 || Looper.myLooper() == Looper.getMainLooper()) {
            return;
        }
        synchronized (this.a) {
            try {
                com.xiaomi.channel.commonutils.logger.b.a("oppo's " + str + " wait...");
                this.a.wait(3000L);
            } catch (Exception unused) {
            }
        }
    }

    public static boolean a(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo("com.heytap.openid", 128);
            if (packageInfo != null) {
                long longVersionCode = Build.VERSION.SDK_INT >= 28 ? packageInfo.getLongVersionCode() : packageInfo.versionCode;
                boolean z = (packageInfo.applicationInfo.flags & 1) != 0;
                a = longVersionCode >= 1;
                if (z) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    private String b() {
        try {
            Signature[] signatureArr = this.a.getPackageManager().getPackageInfo(this.a.getPackageName(), 64).signatures;
            MessageDigest messageDigest = MessageDigest.getInstance("SHA1");
            StringBuilder sb = new StringBuilder();
            for (byte b2 : messageDigest.digest(signatureArr[0].toByteArray())) {
                sb.append(Integer.toHexString((b2 & UByte.MAX_VALUE) | 256).substring(1, 3));
            }
            return sb.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    private void b() {
        ServiceConnection serviceConnection = this.a;
        if (serviceConnection != null) {
            try {
                this.a.unbindService(serviceConnection);
            } catch (Exception unused) {
            }
        }
    }

    @Override
    public String a() {
        a("getOAID");
        if (this.a == null) {
            return null;
        }
        return this.a.b;
    }

    @Override
    public boolean a() {
        return a;
    }
}
