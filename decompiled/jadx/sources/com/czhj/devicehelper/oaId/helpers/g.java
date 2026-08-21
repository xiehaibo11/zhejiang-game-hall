package com.czhj.devicehelper.oaId.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.os.Build;
import android.os.IBinder;
import android.os.Looper;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.devicehelper.oaId.interfaces.e;
import com.czhj.sdk.logger.SigmobLog;
import java.security.MessageDigest;
import java.util.concurrent.LinkedBlockingQueue;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class g {
    com.czhj.devicehelper.oaId.interfaces.e b;
    private Context e;
    private String f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1731a = "OUID";
    public final LinkedBlockingQueue<IBinder> c = new LinkedBlockingQueue<>(1);
    ServiceConnection d = new ServiceConnection() { // from class: com.czhj.devicehelper.oaId.helpers.g.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                g.this.c.put(iBinder);
            } catch (Throwable unused) {
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
            g.this.b = null;
        }
    };

    public g(Context context) {
        this.e = context;
    }

    private String a(String str) {
        Signature[] signatureArr;
        String packageName = this.e.getPackageName();
        if (this.f == null) {
            String string = null;
            try {
                signatureArr = this.e.getPackageManager().getPackageInfo(packageName, 64).signatures;
            } catch (Exception e) {
                SigmobLog.e(e.getMessage());
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
                    SigmobLog.e(e2.getMessage());
                }
            }
            this.f = string;
        }
        return ((e.a.C0070a) this.b).a(packageName, this.f, str);
    }

    private boolean a() {
        try {
            PackageInfo packageInfo = this.e.getPackageManager().getPackageInfo("com.heytap.openid", 0);
            if (packageInfo == null) {
                return false;
            }
            return (Build.VERSION.SDK_INT >= 28 ? packageInfo.getLongVersionCode() : (long) packageInfo.versionCode) >= 1;
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
            return false;
        }
    }

    public void a(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (a() && Looper.myLooper() != Looper.getMainLooper()) {
            Intent intent = new Intent();
            intent.setComponent(new ComponentName("com.heytap.openid", "com.heytap.openid.IdentifyService"));
            intent.setAction("action.com.heytap.openid.OPEN_ID_SERVICE");
            if (this.e.bindService(intent, this.d, 1)) {
                try {
                    com.czhj.devicehelper.oaId.interfaces.e eVarA = e.a.a(this.c.take());
                    this.b = eVarA;
                    if (eVarA != null) {
                        String strA = a("OUID");
                        if (appIdsUpdater != null) {
                            appIdsUpdater.OnIdsAvalid(strA);
                        }
                    }
                } finally {
                    try {
                    } finally {
                    }
                }
            }
        }
    }
}
