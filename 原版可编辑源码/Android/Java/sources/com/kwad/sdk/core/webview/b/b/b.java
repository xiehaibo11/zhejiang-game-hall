package com.kwad.sdk.core.webview.b.b;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.utils.bc;
import com.kwad.sdk.utils.q;
import java.io.File;

public final class b {
    public static synchronized boolean a(Context context, com.kwad.sdk.h.a.b bVar) {
        String str = bVar.aCd;
        File file = new File(str);
        if (!q.L(file)) {
            return false;
        }
        if (!TextUtils.isEmpty(bVar.agi)) {
            String fileMD5 = com.kwad.sdk.utils.a.getFileMD5(file);
            if (fileMD5 != null && fileMD5.length() > 10) {
                fileMD5 = fileMD5.substring(0, 10);
            }
            if (!bc.isEquals(fileMD5, bVar.agi)) {
                q.aa(file);
                return false;
            }
        }
        com.kwad.sdk.core.webview.b.c.b.a(bVar, 2);
        try {
            com.kwad.sdk.core.webview.b.c.a.e(context, str, com.kwad.sdk.core.webview.b.c.a.B(context, bVar.aCc));
            q.aa(file);
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            com.kwad.sdk.core.webview.b.c.b.a(bVar, 0, 2, e.getMessage());
            return false;
        }
    }
}
