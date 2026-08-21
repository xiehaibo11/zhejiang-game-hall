package com.czhj.devicehelper.oaId.helpers;

import android.content.ContentProviderClient;
import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import com.czhj.sdk.logger.SigmobLog;

public class e {
    private Context a;

    public e(Context context) {
        this.a = context;
    }

    public String a() {
        Bundle bundleCall;
        Uri uri = Uri.parse("content://cn.nubia.identity/identity");
        try {
            if (Build.VERSION.SDK_INT > 17) {
                ContentProviderClient contentProviderClientAcquireContentProviderClient = this.a.getContentResolver().acquireContentProviderClient(uri);
                bundleCall = contentProviderClientAcquireContentProviderClient.call("getOAID", null, null);
                if (contentProviderClientAcquireContentProviderClient != null) {
                    if (Build.VERSION.SDK_INT >= 24) {
                        contentProviderClientAcquireContentProviderClient.close();
                    } else {
                        contentProviderClientAcquireContentProviderClient.release();
                    }
                }
            } else {
                bundleCall = this.a.getContentResolver().call(uri, "getOAID", (String) null, (Bundle) null);
            }
            if (bundleCall.getInt("code", -1) == 0) {
                return bundleCall.getString("id");
            }
            bundleCall.getString("message");
            return null;
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
            return null;
        }
    }
}
