package com.tkay.expressad.advanced.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.telephony.TelephonyManager;
import android.util.Base64;
import android.webkit.WebView;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.k;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class b extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6358a = b.class.getSimpleName();
    private WebView b;
    private int c;

    public b(WebView webView) {
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
            if (com.tkay.expressad.foundation.g.a.bW) {
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
                    int iA = k.a(networkType);
                    this.c = iA;
                    a(this.b, iA);
                    return;
                }
                return;
            }
            a(this.b, 0);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public final void a() {
        this.b = null;
    }

    private static void a(WebView webView, int i) {
        if (webView != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(NativeAdvancedJsUtils.m, i);
                j.a();
                j.a(webView, NativeAdvancedJsUtils.l, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }
}
