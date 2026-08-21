package com.kwad.framework.filedownloader.services;

import com.kwad.framework.filedownloader.y;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
final class g implements y {
    private final com.kwad.framework.filedownloader.b.a aew;
    private final h aex;

    g() {
        com.kwad.framework.filedownloader.download.b bVarUp = com.kwad.framework.filedownloader.download.b.up();
        this.aew = bVarUp.ur();
        this.aex = new h(bVarUp.us());
    }

    private boolean bD(int i) {
        return a(this.aew.bf(i));
    }

    @Override // com.kwad.framework.filedownloader.y
    public final boolean a(com.kwad.framework.filedownloader.d.c cVar) {
        if (cVar == null) {
            return false;
        }
        boolean zBF = this.aex.bF(cVar.getId());
        if (com.kwad.framework.filedownloader.d.d.bA(cVar.sX())) {
            if (!zBF) {
                return false;
            }
        } else if (!zBF) {
            com.kwad.framework.filedownloader.f.d.a(this, "%d status is[%s](not finish) & but not in the pool", Integer.valueOf(cVar.getId()), Byte.valueOf(cVar.sX()));
            return false;
        }
        return true;
    }

    public final boolean aY(int i) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "request pause the task %d", Integer.valueOf(i));
        }
        com.kwad.framework.filedownloader.d.c cVarBf = this.aew.bf(i);
        if (cVarBf == null) {
            return false;
        }
        cVarBf.d((byte) -2);
        this.aex.cancel(i);
        return true;
    }

    public final byte aZ(int i) {
        com.kwad.framework.filedownloader.d.c cVarBf = this.aew.bf(i);
        if (cVarBf == null) {
            return (byte) 0;
        }
        return cVarBf.sX();
    }

    /* JADX WARN: Removed duplicated region for block: B:81:0x0180 A[Catch: all -> 0x01cb, TryCatch #0 {, blocks: (B:4:0x0009, B:6:0x0010, B:7:0x0022, B:10:0x0031, B:12:0x0041, B:14:0x004b, B:16:0x004f, B:17:0x0062, B:21:0x006f, B:23:0x0075, B:25:0x0079, B:29:0x008a, B:31:0x0093, B:33:0x009c, B:35:0x00a0, B:40:0x00b3, B:43:0x00bc, B:45:0x00c5, B:47:0x00d4, B:49:0x00d8, B:51:0x00e9, B:55:0x00f7, B:57:0x00fe, B:59:0x0105, B:61:0x010b, B:63:0x0112, B:65:0x0118, B:67:0x011e, B:69:0x0138, B:70:0x013c, B:72:0x0142, B:81:0x0180, B:82:0x0185, B:73:0x0151, B:75:0x015b, B:77:0x0161, B:78:0x0166, B:44:0x00c1, B:30:0x008f), top: B:88:0x0009 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized void b(java.lang.String r19, java.lang.String r20, boolean r21, int r22, int r23, int r24, boolean r25, com.kwad.framework.filedownloader.d.b r26, boolean r27) {
        /*
            Method dump skipped, instruction units count: 462
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.framework.filedownloader.services.g.b(java.lang.String, java.lang.String, boolean, int, int, int, boolean, com.kwad.framework.filedownloader.d.b, boolean):void");
    }

    public final long bE(int i) {
        com.kwad.framework.filedownloader.d.c cVarBf = this.aew.bf(i);
        if (cVarBf == null) {
            return 0L;
        }
        int iVp = cVarBf.vp();
        if (iVp <= 1) {
            return cVarBf.vm();
        }
        List<com.kwad.framework.filedownloader.d.a> listBg = this.aew.bg(i);
        if (listBg == null || listBg.size() != iVp) {
            return 0L;
        }
        return com.kwad.framework.filedownloader.d.a.o(listBg);
    }

    public final boolean ba(int i) {
        if (i == 0) {
            com.kwad.framework.filedownloader.f.d.d(this, "The task[%d] id is invalid, can't clear it.", Integer.valueOf(i));
            return false;
        }
        if (bD(i)) {
            com.kwad.framework.filedownloader.f.d.d(this, "The task[%d] is downloading, can't clear it.", Integer.valueOf(i));
            return false;
        }
        this.aew.bi(i);
        this.aew.bh(i);
        return true;
    }

    public final synchronized boolean bs(int i) {
        return this.aex.bs(i);
    }

    public final long bu(int i) {
        com.kwad.framework.filedownloader.d.c cVarBf = this.aew.bf(i);
        if (cVarBf == null) {
            return 0L;
        }
        return cVarBf.getTotal();
    }

    public final boolean isIdle() {
        return this.aex.vH() <= 0;
    }

    @Override // com.kwad.framework.filedownloader.y
    public final int l(String str, int i) {
        return this.aex.l(str, i);
    }

    public final boolean p(String str, String str2) {
        return bD(com.kwad.framework.filedownloader.f.f.r(str, str2));
    }

    public final void uW() {
        this.aew.clear();
    }

    public final void vF() {
        List<Integer> listVI = this.aex.vI();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "pause all tasks %d", Integer.valueOf(listVI.size()));
        }
        Iterator<Integer> it = listVI.iterator();
        while (it.hasNext()) {
            aY(it.next().intValue());
        }
    }
}
