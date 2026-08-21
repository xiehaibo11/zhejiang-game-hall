package com.tkay.expressad.atsignalcommon.windvane;

import android.text.TextUtils;
import android.webkit.WebView;

/* JADX INFO: loaded from: classes3.dex */
public final class g implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static g f6441a = new g();

    private g() {
    }

    private static g a() {
        return f6441a;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.b
    public final void a(Object obj, String str, String str2) {
        String str3;
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str2)) {
                str3 = String.format("javascript:window.MvBridge.fireEvent('%s', '');", str);
            } else {
                str3 = String.format("javascript:window.MvBridge.fireEvent('%s','%s');", str, n.c(str2));
            }
            if (aVar.f6439a != null) {
                try {
                    aVar.f6439a.loadUrl(str3);
                } catch (Exception e) {
                    e.printStackTrace();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }

    private static void a(WebView webView, String str, String str2) {
        String str3;
        if (TextUtils.isEmpty(str2)) {
            str3 = String.format("javascript:window.MvBridge.fireEvent('%s', '');", str);
        } else {
            str3 = String.format("javascript:window.MvBridge.fireEvent('%s','%s');", str, n.c(str2));
        }
        if (webView != null) {
            try {
                webView.loadUrl(str3);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.b
    public final void a(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            String str2 = TextUtils.isEmpty(str) ? String.format("javascript:window.OW.onSuccess(%s,'');", aVar.g) : String.format("javascript:window.OW.onSuccess(%s,'%s');", aVar.g, n.c(str));
            if (aVar.f6439a != null) {
                try {
                    aVar.f6439a.loadUrl(str2);
                } catch (Exception e) {
                    e.printStackTrace();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.b
    public final void b(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str)) {
                String.format("javascript:window.MvBridge.onFailure(%s,'');", aVar.g);
            } else {
                str = n.c(str);
            }
            String str2 = String.format("javascript:window.MvBridge.onFailure(%s,'%s');", aVar.g, str);
            if (aVar.f6439a != null) {
                try {
                    aVar.f6439a.loadUrl(str2);
                } catch (Exception e) {
                    e.printStackTrace();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }
}
