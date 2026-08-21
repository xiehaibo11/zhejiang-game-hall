package com.kwad.sdk.core.f.a;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.os.IBinder;
import com.kwad.sdk.core.f.b.d;
import java.security.MessageDigest;
import java.util.concurrent.LinkedBlockingQueue;
import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public final class f {
    private Context mContext;
    private final LinkedBlockingQueue<IBinder> aqn = new LinkedBlockingQueue<>(1);
    private ServiceConnection aql = new ServiceConnection() { // from class: com.kwad.sdk.core.f.a.f.1
        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                f.this.aqn.put(iBinder);
            } catch (InterruptedException unused) {
            }
        }

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    };

    public f(Context context) {
        this.mContext = context;
    }

    private String BL() {
        Signature[] signatureArr;
        try {
            PackageInfo packageInfo = this.mContext.getPackageManager().getPackageInfo(this.mContext.getPackageName(), 64);
            if (packageInfo == null || (signatureArr = packageInfo.signatures) == null || signatureArr.length <= 0) {
                return null;
            }
            byte[] bArrDigest = MessageDigest.getInstance("SHA1").digest(signatureArr[0].toByteArray());
            StringBuilder sb = new StringBuilder();
            for (byte b : bArrDigest) {
                sb.append(Integer.toHexString((b & UByte.MAX_VALUE) | 256).substring(1, 3));
            }
            return sb.toString();
        } catch (Exception unused) {
            return null;
        }
    }

    public final String getOAID() {
        Context context;
        String serID = "";
        try {
            Intent intent = new Intent();
            intent.setComponent(new ComponentName("com.heytap.openid", "com.heytap.openid.IdentifyService"));
            intent.setAction("action.com.heytap.openid.OPEN_ID_SERVICE");
            boolean zBindService = this.mContext.bindService(intent, this.aql, 1);
            new StringBuilder("getOAID isBin=").append(zBindService);
            if (zBindService) {
                try {
                    try {
                        serID = new d.a(this.aqn.take()).getSerID(this.mContext.getPackageName(), BL(), "OUID");
                        new StringBuilder("getOAID oaid").append(serID);
                        context = this.mContext;
                    } catch (Exception unused) {
                        context = this.mContext;
                    }
                    context.unbindService(this.aql);
                } catch (Throwable th) {
                    this.mContext.unbindService(this.aql);
                    throw th;
                }
            }
        } catch (Exception unused2) {
        }
        return serID;
    }
}
