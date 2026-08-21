package com.kwad.framework.filedownloader.message;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    private volatile g adO;
    private volatile b adP;

    public static final class a {
        private static final e adQ = new e();
    }

    public interface b {
        void r(MessageSnapshot messageSnapshot);
    }

    public static e vg() {
        return a.adQ;
    }

    public final void a(b bVar) {
        this.adP = bVar;
        if (bVar == null) {
            this.adO = null;
        } else {
            this.adO = new g(5, bVar);
        }
    }

    public final void s(MessageSnapshot messageSnapshot) {
        if (messageSnapshot instanceof com.kwad.framework.filedownloader.message.b) {
            if (this.adP != null) {
                this.adP.r(messageSnapshot);
            }
        } else if (this.adO != null) {
            this.adO.u(messageSnapshot);
        }
    }
}
