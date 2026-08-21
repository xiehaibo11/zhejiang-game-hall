package com.tkay.china.a.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.Signature;
import android.os.IBinder;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import com.tkay.china.a.a.h;
import java.security.MessageDigest;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    h f5875a;
    ServiceConnection b = new ServiceConnection() { // from class: com.tkay.china.a.a.g.1
        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            g.this.f5875a = h.a.a(iBinder);
        }

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
            g.this.f5875a = null;
        }
    };
    private Context c;

    public g(Context context) {
        this.c = context;
    }

    public final String a(com.tkay.china.a.a aVar) {
        String strA = "";
        if (Looper.myLooper() == Looper.getMainLooper()) {
            return "";
        }
        Intent intent = new Intent();
        intent.setComponent(new ComponentName("com.heytap.openid", "com.heytap.openid.IdentifyService"));
        intent.setAction("action.com.heytap.openid.OPEN_ID_SERVICE");
        if (this.c.bindService(intent, this.b, 1)) {
            try {
                SystemClock.sleep(3000L);
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (this.f5875a != null) {
                strA = a("OUID");
                aVar.a(strA, false);
            }
        }
        if (TextUtils.isEmpty(strA)) {
            aVar.a();
        }
        return strA;
    }

    private String a(String str) {
        Signature[] signatureArr;
        String packageName = this.c.getPackageName();
        String string = null;
        try {
            signatureArr = this.c.getPackageManager().getPackageInfo(packageName, 64).signatures;
        } catch (Exception e) {
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
                    for (byte b : bArrDigest) {
                        sb.append(Integer.toHexString((b & UByte.MAX_VALUE) | 256).substring(1, 3));
                    }
                    string = sb.toString();
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return ((h.a.C0401a) this.f5875a).a(packageName, string, str);
    }
}
