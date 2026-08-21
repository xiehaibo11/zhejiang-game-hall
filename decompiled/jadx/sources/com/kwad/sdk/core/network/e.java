package com.kwad.sdk.core.network;

import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.av;
import com.kwad.sdk.utils.bc;
import java.io.File;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: classes2.dex */
public class e {
    private static volatile e aoN;
    private String aoO = Bg();

    private e() {
    }

    public static e Be() {
        if (aoN == null) {
            synchronized (e.class) {
                if (aoN == null) {
                    aoN = new e();
                }
            }
        }
        return aoN;
    }

    private static String Bg() {
        try {
            return com.kwad.sdk.utils.q.a(new File(av.cO(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext())), Charset.forName("UTF-8"));
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return null;
        }
    }

    private static void cY(String str) {
        try {
            com.kwad.sdk.utils.q.a(new File(av.cO(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext())), str, Charset.forName("UTF-8"), false);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    public final String Bf() {
        return this.aoO;
    }

    public final void cX(String str) {
        if (bc.isEquals(this.aoO, str)) {
            return;
        }
        this.aoO = str;
        cY(str);
    }
}
