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
import com.czhj.devicehelper.oaId.interfaces.d;
import com.czhj.sdk.logger.SigmobLog;
import java.security.MessageDigest;
import java.util.concurrent.LinkedBlockingQueue;
import kotlin.UByte;

public class f {
    com.czhj.devicehelper.oaId.interfaces.d b;
    private Context e;
    private String f;
    public String a = "OUID";
    public final LinkedBlockingQueue<IBinder> c = new LinkedBlockingQueue<>(1);
    ServiceConnection d = new ServiceConnection() {
        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                f.this.c.put(iBinder);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
            f.this.b = null;
        }
    };

    public f(Context context) {
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
                } catch (Throwable th) {
                    SigmobLog.e(th.getMessage());
                }
            }
            this.f = string;
        }
        return ((d.a.a) this.b).a(packageName, this.f, str);
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
                    com.czhj.devicehelper.oaId.interfaces.d dVarA = d.a.a(this.c.take());
                    this.b = dVarA;
                    if (dVarA != null) {
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
