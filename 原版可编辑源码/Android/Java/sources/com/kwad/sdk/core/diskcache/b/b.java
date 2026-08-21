package com.kwad.sdk.core.diskcache.b;

import com.kwad.sdk.core.diskcache.a.a;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.utils.g;
import java.io.File;
import java.io.IOException;
import java.io.OutputStream;

public final class b {
    static File a(com.kwad.sdk.core.diskcache.a.a aVar, String str) {
        try {
            a.c cVarCA = aVar.cA(str);
            if (cVarCA != null) {
                return cVarCA.bW(0);
            }
            return null;
        } catch (IOException unused) {
            return null;
        }
    }

    static void a(final com.kwad.sdk.core.diskcache.a.a aVar, final String str, final String str2) {
        g.execute(new Runnable() {
            @Override
            public final void run() {
                OutputStream outputStreamBT = null;
                try {
                    a.a aVarCB = aVar.cB(str2);
                    if (aVarCB != null) {
                        outputStreamBT = aVarCB.bT(0);
                        if (b.a(str, outputStreamBT, new a.a())) {
                            aVarCB.commit();
                        } else {
                            aVarCB.abort();
                        }
                        aVar.flush();
                    }
                } catch (IOException unused) {
                } finally {
                    com.kwad.sdk.crash.utils.b.closeQuietly(outputStreamBT);
                }
            }
        });
    }

    static boolean a(com.kwad.sdk.core.diskcache.a.a aVar, String str, String str2, a.a aVar2) {
        boolean z = false;
        OutputStream outputStreamBT = null;
        try {
            try {
                a.a aVarCB = aVar.cB(str2);
                if (aVarCB != null) {
                    outputStreamBT = aVarCB.bT(0);
                    if (a(str, outputStreamBT, aVar2)) {
                        aVarCB.commit();
                        z = true;
                    } else {
                        aVarCB.abort();
                    }
                    aVar.flush();
                }
            } catch (IOException e) {
                aVar2.msg = e.getMessage();
            }
            return z;
        } finally {
            com.kwad.sdk.crash.utils.b.closeQuietly(outputStreamBT);
        }
    }

    public static boolean a(String str, OutputStream outputStream, a.a aVar) {
        return com.kwad.sdk.core.network.a.a.a(str, outputStream, aVar, -1);
    }
}
