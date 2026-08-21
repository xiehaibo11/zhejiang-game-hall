package com.kwad.sdk.core.diskcache.b;

import com.kwad.sdk.core.diskcache.a.a;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.utils.g;
import java.io.File;
import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes2.dex */
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
        g.execute(new Runnable() { // from class: com.kwad.sdk.core.diskcache.b.b.1
            @Override // java.lang.Runnable
            public final void run() {
                OutputStream outputStreamBT = null;
                try {
                    a.C0205a c0205aCB = aVar.cB(str2);
                    if (c0205aCB != null) {
                        outputStreamBT = c0205aCB.bT(0);
                        if (b.a(str, outputStreamBT, new a.C0212a())) {
                            c0205aCB.commit();
                        } else {
                            c0205aCB.abort();
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

    static boolean a(com.kwad.sdk.core.diskcache.a.a aVar, String str, String str2, a.C0212a c0212a) {
        boolean z = false;
        OutputStream outputStreamBT = null;
        try {
            try {
                a.C0205a c0205aCB = aVar.cB(str2);
                if (c0205aCB != null) {
                    outputStreamBT = c0205aCB.bT(0);
                    if (a(str, outputStreamBT, c0212a)) {
                        c0205aCB.commit();
                        z = true;
                    } else {
                        c0205aCB.abort();
                    }
                    aVar.flush();
                }
            } catch (IOException e) {
                c0212a.msg = e.getMessage();
            }
            return z;
        } finally {
            com.kwad.sdk.crash.utils.b.closeQuietly(outputStreamBT);
        }
    }

    public static boolean a(String str, OutputStream outputStream, a.C0212a c0212a) {
        return com.kwad.sdk.core.network.a.a.a(str, outputStream, c0212a, -1);
    }
}
