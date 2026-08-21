package com.tkay.china.a.a;

import android.content.ContentProviderClient;
import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;

/* JADX INFO: loaded from: classes3.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f5874a;

    public f(Context context) {
        this.f5874a = context;
    }

    public final String a() {
        Bundle bundleCall;
        try {
            Uri uri = Uri.parse("content://cn.nubia.identity/identity");
            if (Build.VERSION.SDK_INT > 17) {
                ContentProviderClient contentProviderClientAcquireContentProviderClient = this.f5874a.getContentResolver().acquireContentProviderClient(uri);
                bundleCall = contentProviderClientAcquireContentProviderClient.call("getOAID", (String) null, (Bundle) null);
                if (contentProviderClientAcquireContentProviderClient != null) {
                    if (Build.VERSION.SDK_INT >= 24) {
                        contentProviderClientAcquireContentProviderClient.close();
                    } else {
                        contentProviderClientAcquireContentProviderClient.release();
                    }
                }
            } else {
                bundleCall = this.f5874a.getContentResolver().call(uri, "getOAID", (String) null, (Bundle) null);
            }
            return (bundleCall != null ? bundleCall.getInt("code", -1) : -1) == 0 ? bundleCall.getString("id") : "";
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        } catch (Throwable th) {
            th.printStackTrace();
            return "";
        }
    }
}
