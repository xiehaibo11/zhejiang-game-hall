package com.mbridge.msdk.advanced.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.telephony.TelephonyManager;
import android.util.Base64;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class NetWorkStateReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3088a = NetWorkStateReceiver.class.getSimpleName();
    private WebView b;
    private int c;

    public NetWorkStateReceiver(WebView webView) {
        this.b = webView;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                a(this.b, 0);
                return;
            }
            if (com.mbridge.msdk.foundation.same.a.h) {
                NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                if (activeNetworkInfo == null) {
                    a(this.b, 0);
                    return;
                }
                if (activeNetworkInfo.getState() != NetworkInfo.State.CONNECTING && activeNetworkInfo.getState() != NetworkInfo.State.DISCONNECTING) {
                    if (activeNetworkInfo.getType() == 1) {
                        a(this.b, 9);
                        return;
                    }
                    TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                    if (telephonyManager == null) {
                        a(this.b, 0);
                        return;
                    }
                    int networkType = telephonyManager.getNetworkType();
                    this.c = networkType;
                    int iA = v.a(networkType);
                    this.c = iA;
                    a(this.b, iA);
                    return;
                }
                return;
            }
            a(this.b, 0);
        } catch (Throwable th) {
            z.a(f3088a, th.getMessage());
        }
    }

    public final void a() {
        this.b = null;
    }

    private void a(WebView webView, int i) {
        if (webView != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(NativeAdvancedJsUtils.m, i);
                h.a().a(webView, NativeAdvancedJsUtils.l, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Throwable th) {
                z.a(f3088a, th.getMessage());
            }
        }
    }
}
