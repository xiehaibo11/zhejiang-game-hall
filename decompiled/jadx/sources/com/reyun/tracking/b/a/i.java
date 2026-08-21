package com.reyun.tracking.b.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.Signature;
import android.os.Looper;
import android.os.SystemClock;
import java.security.MessageDigest;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public class i {
    com.reyun.tracking.b.b.i b;
    private Context d;
    private String e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f4714a = "OUID";
    ServiceConnection c = new j(this);

    public i(Context context) {
        this.d = context;
    }

    private String a(String str) {
        Signature[] signatureArr;
        String packageName = this.d.getPackageName();
        if (this.e == null) {
            String string = null;
            try {
                signatureArr = this.d.getPackageManager().getPackageInfo(packageName, 64).signatures;
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
            this.e = string;
        }
        return ((com.reyun.tracking.b.b.k) this.b).a(packageName, this.e, str);
    }

    public String a(com.reyun.tracking.b.d dVar) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            throw new IllegalStateException("Cannot run on MainThread");
        }
        Intent intent = new Intent();
        intent.setComponent(new ComponentName("com.heytap.openid", "com.heytap.openid.IdentifyService"));
        intent.setAction("action.com.heytap.openid.OPEN_ID_SERVICE");
        if (this.d.bindService(intent, this.c, 1)) {
            try {
                SystemClock.sleep(3000L);
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (this.b != null) {
                String strA = a("OUID");
                a("DUID");
                a("AUID");
                if (dVar == null) {
                    return strA;
                }
                dVar.a(strA, false);
                return strA;
            }
        }
        return null;
    }
}
