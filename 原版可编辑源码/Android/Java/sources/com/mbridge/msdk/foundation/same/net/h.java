package com.mbridge.msdk.foundation.same.net;

import android.content.Context;
import android.os.Process;
import com.mbridge.msdk.foundation.same.net.stack.OkHttpStack;
import com.mbridge.msdk.foundation.tools.z;
import javax.net.ssl.SSLSocketFactory;

public class h {
    private static final String a = h.class.getSimpleName();
    private com.mbridge.msdk.foundation.same.net.stack.a b = new OkHttpStack();
    private g c;
    private c d;

    public h(Context context, SSLSocketFactory sSLSocketFactory, c cVar) {
        this.c = new com.mbridge.msdk.foundation.same.net.e.a(this.b, cVar);
        this.d = cVar;
    }

    public final void a(i iVar) {
        Process.setThreadPriority(10);
        try {
            z.b(a, "network-queue-take request=" + iVar.b());
            this.d.c(iVar);
            if (iVar.c()) {
                iVar.a("network-discard-cancelled");
                this.d.b(iVar);
                this.d.a(iVar);
            } else {
                this.d.d(iVar);
                com.mbridge.msdk.foundation.same.net.e.c cVarA = this.c.a(iVar);
                z.b(a, "network-http-complete networkResponse=" + cVarA.a);
                k<?> kVarA = iVar.a(cVarA);
                z.b(a, "network-parse-complete response=" + kVarA.a);
                this.d.a((i<?>) iVar, kVarA);
            }
        } catch (com.mbridge.msdk.foundation.same.net.a.a e) {
            this.d.a((i<?>) iVar, e);
        } catch (Exception e2) {
            z.d(a, "Unhandled exception " + e2.getMessage());
            this.d.a((i<?>) iVar, new com.mbridge.msdk.foundation.same.net.a.a(4, null));
        }
    }
}
