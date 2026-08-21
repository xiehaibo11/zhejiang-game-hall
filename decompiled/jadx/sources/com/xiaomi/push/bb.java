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

/* JADX INFO: loaded from: classes4.dex */
class bb implements au {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f8050a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f145a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ServiceConnection f146a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile int f144a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile a f147a = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Object f148a = new Object();

    class a {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        String f149a;
        String b;
        String c;
        String d;

        private a() {
            this.f149a = null;
            this.b = null;
            this.c = null;
            this.d = null;
        }
    }

    class b implements ServiceConnection {
        private b() {
        }

        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            if (bb.this.f147a != null) {
                return;
            }
            new Thread(new bd(this, iBinder)).start();
        }

        @Override // android.content.ServiceConnection
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
        this.f145a = context;
        a();
    }

    private void a() {
        boolean zBindService;
        this.f146a = new b();
        Intent intent = new Intent();
        intent.setClassName("com.heytap.openid", "com.heytap.openid.IdentifyService");
        intent.setAction("action.com.heytap.openid.OPEN_ID_SERVICE");
        try {
            zBindService = this.f145a.bindService(intent, this.f146a, 1);
        } catch (Exception unused) {
            zBindService = false;
        }
        this.f144a = zBindService ? 1 : 2;
    }

    private void a(String str) {
        if (this.f144a != 1 || Looper.myLooper() == Looper.getMainLooper()) {
            return;
        }
        synchronized (this.f148a) {
            try {
                com.xiaomi.channel.commonutils.logger.b.m43a("oppo's " + str + " wait...");
                this.f148a.wait(3000L);
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
                f8050a = longVersionCode >= 1;
                if (z) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String b() {
        try {
            Signature[] signatureArr = this.f145a.getPackageManager().getPackageInfo(this.f145a.getPackageName(), 64).signatures;
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

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m147b() {
        ServiceConnection serviceConnection = this.f146a;
        if (serviceConnection != null) {
            try {
                this.f145a.unbindService(serviceConnection);
            } catch (Exception unused) {
            }
        }
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public String mo126a() {
        a("getOAID");
        if (this.f147a == null) {
            return null;
        }
        return this.f147a.b;
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public boolean mo127a() {
        return f8050a;
    }
}
