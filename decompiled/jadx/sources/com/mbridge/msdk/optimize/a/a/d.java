package com.mbridge.msdk.optimize.a.a;

import android.content.ContentProviderClient;
import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;

/* JADX INFO: compiled from: NubiaDeviceHelper.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3861a;

    public d(Context context) {
        this.f3861a = context;
    }

    public final String a() {
        Bundle bundleCall;
        try {
            Uri uri = Uri.parse("content://cn.nubia.identity/identity");
            if (Build.VERSION.SDK_INT > 17) {
                ContentProviderClient contentProviderClientAcquireContentProviderClient = this.f3861a.getContentResolver().acquireContentProviderClient(uri);
                bundleCall = contentProviderClientAcquireContentProviderClient.call("getOAID", null, null);
                if (contentProviderClientAcquireContentProviderClient != null) {
                    if (Build.VERSION.SDK_INT >= 24) {
                        contentProviderClientAcquireContentProviderClient.close();
                    } else {
                        contentProviderClientAcquireContentProviderClient.release();
                    }
                }
            } else {
                bundleCall = this.f3861a.getContentResolver().call(uri, "getOAID", (String) null, (Bundle) null);
            }
            if ((bundleCall != null ? bundleCall.getInt("code", -1) : -1) == 0) {
                return bundleCall.getString("id");
            }
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }
}
