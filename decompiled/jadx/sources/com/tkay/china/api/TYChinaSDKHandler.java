package com.tkay.china.api;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.util.Log;
import com.bun.miitmdid.core.MdidSdkHelper;
import com.bun.miitmdid.interfaces.IIdentifierListener;
import com.bun.miitmdid.interfaces.IdSupplier;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.china.activity.TransparentActivity;
import java.util.Random;
import okhttp3.internal.http2.Http2Connection;

/* JADX INFO: loaded from: classes3.dex */
public class TYChinaSDKHandler {
    private static boolean allowUserOaidSDK = true;

    public static void requestPermissionIfNecessary(Context context) {
        String[] strArr = {"android.permission.READ_PHONE_STATE", "android.permission.WRITE_EXTERNAL_STORAGE"};
        if (context != null && Build.VERSION.SDK_INT >= 23) {
            int iNextInt = new Random().nextInt(Http2Connection.DEGRADED_PONG_TIMEOUT_NS);
            Intent intent = new Intent(context, (Class<?>) TransparentActivity.class);
            intent.putExtra("type", 1000);
            intent.putExtra(TransparentActivity.b, iNextInt);
            intent.putExtra(TransparentActivity.d, strArr);
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            context.startActivity(intent);
            return;
        }
        Log.i("PermissionManager", "Build.VERSION.SDK_INT below 23 does not require permission");
    }

    public static void handleInitOaidSDK(Context context, final OaidSDKCallbackListener oaidSDKCallbackListener) {
        try {
            if (allowUserOaidSDK) {
                MdidSdkHelper.InitSdk(context.getApplicationContext(), true, new IIdentifierListener() { // from class: com.tkay.china.api.TYChinaSDKHandler.1
                    public void OnSupport(boolean z, IdSupplier idSupplier) {
                        OaidSDKCallbackListener oaidSDKCallbackListener2 = oaidSDKCallbackListener;
                        if (oaidSDKCallbackListener2 != null) {
                            oaidSDKCallbackListener2.OnSupport(z, idSupplier);
                        }
                    }

                    public void onSupport(IdSupplier idSupplier) {
                        OaidSDKCallbackListener oaidSDKCallbackListener2 = oaidSDKCallbackListener;
                        if (oaidSDKCallbackListener2 != null) {
                            oaidSDKCallbackListener2.onSupport(idSupplier);
                        }
                    }
                });
            } else if (oaidSDKCallbackListener != null) {
                oaidSDKCallbackListener.OnSupport(false, null);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void setAllowUseMdidSDK(boolean z) {
        allowUserOaidSDK = z;
    }
}
