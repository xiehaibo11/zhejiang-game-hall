package com.tkay.expressad.atsignalcommon.windvane;

import android.text.TextUtils;
import android.webkit.WebView;

public final class g implements b {
    private static g a = new g();

    private g() {
    }

    private static g a() {
        return a;
    }

    @Override
    public final void a(Object obj, String str, String str2) {
        String str3;
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str2)) {
                str3 = String.format("javascript:window.MvBridge.fireEvent('%s', '');", str);
            } else {
                str3 = String.format("javascript:window.MvBridge.fireEvent('%s','%s');", str, n.c(str2));
            }
            if (aVar.a != null) {
                try {
                    aVar.a.loadUrl(str3);
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

    @Override
    public final void a(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            String str2 = TextUtils.isEmpty(str) ? String.format("javascript:window.OW.onSuccess(%s,'');", aVar.g) : String.format("javascript:window.OW.onSuccess(%s,'%s');", aVar.g, n.c(str));
            if (aVar.a != null) {
                try {
                    aVar.a.loadUrl(str2);
                } catch (Exception e) {
                    e.printStackTrace();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }

    @Override
    public final void b(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str)) {
                String.format("javascript:window.MvBridge.onFailure(%s,'');", aVar.g);
            } else {
                str = n.c(str);
            }
            String str2 = String.format("javascript:window.MvBridge.onFailure(%s,'%s');", aVar.g, str);
            if (aVar.a != null) {
                try {
                    aVar.a.loadUrl(str2);
                } catch (Exception e) {
                    e.printStackTrace();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }
    }
}
