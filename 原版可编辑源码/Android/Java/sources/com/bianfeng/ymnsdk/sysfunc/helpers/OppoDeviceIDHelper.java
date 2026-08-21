package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.os.Build;
import android.os.IBinder;
import android.os.Looper;
import com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper;
import com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface;
import java.security.MessageDigest;
import kotlin.UByte;

public class OppoDeviceIDHelper {
    private Context mContext;
    OppoIDInterface oppoIDInterface;
    private String sign;
    public String oaid = "OUID";
    ServiceConnection serviceConnection = new ServiceConnection() {
        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            OppoDeviceIDHelper.this.oppoIDInterface = OppoIDInterface.up.genInterface(iBinder);
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
            OppoDeviceIDHelper.this.oppoIDInterface = null;
        }
    };

    public OppoDeviceIDHelper(Context context) {
        this.mContext = context;
    }

    public String getID(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            throw new IllegalStateException("Cannot run on MainThread");
        }
        Intent intent = new Intent();
        intent.setComponent(new ComponentName("com.heytap.openid", "com.heytap.openid.IdentifyService"));
        intent.setAction("android.intent.action.OPEN_ID");
        if (this.mContext.bindService(intent, this.serviceConnection, 1)) {
            if (this.oppoIDInterface != null) {
                String strRealoGetIds = realoGetIds("OUID");
                realoGetIds("DUID");
                realoGetIds("AUID");
                if (appIdsUpdater == null) {
                    return strRealoGetIds;
                }
                appIdsUpdater.OnIdsAvalid(strRealoGetIds);
                return strRealoGetIds;
            }
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
            }
        } else if (appIdsUpdater != null) {
            appIdsUpdater.OnIdsAvalid("");
        }
        return null;
    }

    private String realoGetIds(String str) {
        Signature[] signatureArr;
        String packageName = this.mContext.getPackageName();
        if (this.sign == null) {
            String string = null;
            try {
                signatureArr = this.mContext.getPackageManager().getPackageInfo(packageName, 64).signatures;
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
            this.sign = string;
        }
        return ((OppoIDInterface.up.down) this.oppoIDInterface).getSerID(packageName, this.sign, str);
    }

    private boolean isSupportOppo() {
        long longVersionCode;
        try {
            PackageInfo packageInfo = this.mContext.getPackageManager().getPackageInfo("com.heytap.openid", 0);
            if (packageInfo == null) {
                return false;
            }
            if (Build.VERSION.SDK_INT >= 28) {
                longVersionCode = packageInfo.getLongVersionCode();
            } else {
                longVersionCode = packageInfo.versionCode;
            }
            return longVersionCode >= 1;
        } catch (Exception e) {
            e.printStackTrace();
            return true;
        }
    }
}
