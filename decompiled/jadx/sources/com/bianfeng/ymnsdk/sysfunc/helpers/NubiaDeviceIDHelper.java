package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.ContentProviderClient;
import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;

/* JADX INFO: loaded from: classes.dex */
public class NubiaDeviceIDHelper {
    private Context mConetxt;

    public NubiaDeviceIDHelper(Context context) {
        this.mConetxt = context;
    }

    public String getNubiaID() {
        Bundle bundleCall;
        Uri uri = Uri.parse("content://cn.nubia.identity/identity");
        try {
            if (Build.VERSION.SDK_INT > 17) {
                ContentProviderClient contentProviderClientAcquireContentProviderClient = this.mConetxt.getContentResolver().acquireContentProviderClient(uri);
                bundleCall = contentProviderClientAcquireContentProviderClient.call("getOAID", null, null);
                if (contentProviderClientAcquireContentProviderClient != null) {
                    if (Build.VERSION.SDK_INT >= 24) {
                        contentProviderClientAcquireContentProviderClient.close();
                    } else {
                        contentProviderClientAcquireContentProviderClient.release();
                    }
                }
            } else {
                bundleCall = this.mConetxt.getContentResolver().call(uri, "getOAID", (String) null, (Bundle) null);
            }
            if (bundleCall.getInt("code", -1) == 0) {
                return bundleCall.getString("id");
            }
            bundleCall.getString("message");
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
