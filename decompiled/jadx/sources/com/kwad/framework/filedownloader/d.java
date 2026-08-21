package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.message.MessageSnapshot;
import com.kwad.framework.filedownloader.s;
import com.kwad.framework.filedownloader.x;
import java.io.File;
import java.io.IOException;
import java.security.InvalidParameterException;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class d implements a.c, x, x.a, x.b {
    private final Object aaD;
    private t aaH;
    private final a aaI;
    private volatile long aaK;
    private final s.b aaM;
    private final s.a aaN;
    private long aaO;
    private long aaP;
    private int aaQ;
    private boolean aaR;
    private boolean aaS;
    private String aaT;
    private volatile byte aaJ = 0;
    private Throwable aaL = null;
    private boolean aaU = false;

    interface a {
        void aW(String str);

        com.kwad.framework.filedownloader.d.b ts();

        a.InterfaceC0181a tt();

        ArrayList<Object> tu();
    }

    d(a aVar, Object obj) {
        this.aaD = obj;
        this.aaI = aVar;
        b bVar = new b();
        this.aaM = bVar;
        this.aaN = bVar;
        this.aaH = new k(aVar.tt(), this);
    }

    private void b(byte b) {
        this.aaJ = b;
        this.aaK = System.currentTimeMillis();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void e(MessageSnapshot messageSnapshot) {
        com.kwad.framework.filedownloader.a aVarTf = this.aaI.tt().tf();
        byte bSX = messageSnapshot.sX();
        b(bSX);
        this.aaR = messageSnapshot.td();
        if (bSX == -4) {
            this.aaM.reset();
            int iAU = h.tD().aU(aVarTf.getId());
            if (iAU + ((iAU > 1 || !aVarTf.sT()) ? 0 : h.tD().aU(com.kwad.framework.filedownloader.f.f.r(aVarTf.getUrl(), aVarTf.getTargetFilePath()))) <= 1) {
                byte bAZ = n.tO().aZ(aVarTf.getId());
                com.kwad.framework.filedownloader.f.d.d(this, "warn, but no mListener to receive, switch to pending %d %d", Integer.valueOf(aVarTf.getId()), Integer.valueOf(bAZ));
                if (com.kwad.framework.filedownloader.d.d.bB(bAZ)) {
                    b((byte) 1);
                    this.aaP = messageSnapshot.vb();
                    long jVd = messageSnapshot.vd();
                    this.aaO = jVd;
                    this.aaM.start(jVd);
                    this.aaH.f(((MessageSnapshot.a) messageSnapshot).vf());
                    return;
                }
            }
            h.tD().a(this.aaI.tt(), messageSnapshot);
            return;
        }
        if (bSX == -3) {
            this.aaU = messageSnapshot.vc();
            this.aaO = messageSnapshot.vb();
            this.aaP = messageSnapshot.vb();
            h.tD().a(this.aaI.tt(), messageSnapshot);
            return;
        }
        if (bSX == -1) {
            this.aaL = messageSnapshot.ve();
            this.aaO = messageSnapshot.vd();
            h.tD().a(this.aaI.tt(), messageSnapshot);
            return;
        }
        if (bSX == 1) {
            this.aaO = messageSnapshot.vd();
            this.aaP = messageSnapshot.vb();
            this.aaH.f(messageSnapshot);
            return;
        }
        if (bSX == 2) {
            this.aaP = messageSnapshot.vb();
            this.aaS = messageSnapshot.uR();
            this.aaT = messageSnapshot.getEtag();
            String fileName = messageSnapshot.getFileName();
            if (fileName != null) {
                if (aVarTf.getFilename() != null) {
                    com.kwad.framework.filedownloader.f.d.d(this, "already has mFilename[%s], but assign mFilename[%s] again", aVarTf.getFilename(), fileName);
                }
                this.aaI.aW(fileName);
            }
            this.aaM.start(this.aaO);
            this.aaH.h(messageSnapshot);
            return;
        }
        if (bSX == 3) {
            this.aaO = messageSnapshot.vd();
            this.aaM.G(messageSnapshot.vd());
            this.aaH.i(messageSnapshot);
        } else if (bSX != 5) {
            if (bSX != 6) {
                return;
            }
            this.aaH.g(messageSnapshot);
        } else {
            this.aaO = messageSnapshot.vd();
            this.aaL = messageSnapshot.ve();
            this.aaQ = messageSnapshot.tb();
            this.aaM.reset();
            this.aaH.k(messageSnapshot);
        }
    }

    private int getId() {
        return this.aaI.tt().tf().getId();
    }

    private void prepare() throws IOException {
        File file;
        com.kwad.framework.filedownloader.a aVarTf = this.aaI.tt().tf();
        if (aVarTf.getPath() == null) {
            aVarTf.aU(com.kwad.framework.filedownloader.f.f.bm(aVarTf.getUrl()));
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "save Path is null to %s", aVarTf.getPath());
            }
        }
        if (aVarTf.sT()) {
            file = new File(aVarTf.getPath());
        } else {
            String strBr = com.kwad.framework.filedownloader.f.f.br(aVarTf.getPath());
            if (strBr == null) {
                throw new InvalidParameterException(com.kwad.framework.filedownloader.f.f.b("the provided mPath[%s] is invalid, can't find its directory", aVarTf.getPath()));
            }
            file = new File(strBr);
        }
        if (!file.exists() && !file.mkdirs() && !file.exists()) {
            throw new IOException(com.kwad.framework.filedownloader.f.f.b("Create parent directory failed, please make sure you have permission to create file or directory on the path: %s", file.getAbsolutePath()));
        }
    }

    @Override // com.kwad.framework.filedownloader.x.a
    public final boolean a(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.d.d.r(sX(), messageSnapshot.sX())) {
            e(messageSnapshot);
            return true;
        }
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "can't update mStatus change by keep ahead, %d, but the current mStatus is %d, %d", Byte.valueOf(this.aaJ), Byte.valueOf(sX()), Integer.valueOf(getId()));
        }
        return false;
    }

    @Override // com.kwad.framework.filedownloader.x.a
    public final boolean b(MessageSnapshot messageSnapshot) {
        byte bSX = sX();
        byte bSX2 = messageSnapshot.sX();
        if (-2 == bSX && com.kwad.framework.filedownloader.d.d.bB(bSX2)) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "High concurrent cause, callback pending, but has already be paused %d", Integer.valueOf(getId()));
            }
            return true;
        }
        if (com.kwad.framework.filedownloader.d.d.s(bSX, bSX2)) {
            e(messageSnapshot);
            return true;
        }
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "can't update mStatus change by keep flow, %d, but the current mStatus is %d, %d", Byte.valueOf(this.aaJ), Byte.valueOf(sX()), Integer.valueOf(getId()));
        }
        return false;
    }

    @Override // com.kwad.framework.filedownloader.x.a
    public final boolean c(MessageSnapshot messageSnapshot) {
        if (!com.kwad.framework.filedownloader.d.d.f(this.aaI.tt().tf())) {
            return false;
        }
        e(messageSnapshot);
        return true;
    }

    @Override // com.kwad.framework.filedownloader.x.a
    public final boolean d(MessageSnapshot messageSnapshot) {
        if (!this.aaI.tt().tf().sT() || messageSnapshot.sX() != -4 || sX() != 2) {
            return false;
        }
        e(messageSnapshot);
        return true;
    }

    @Override // com.kwad.framework.filedownloader.x
    public final void free() {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "free the task %d, when the status is %d", Integer.valueOf(getId()), Byte.valueOf(this.aaJ));
        }
        b((byte) 0);
    }

    @Override // com.kwad.framework.filedownloader.x.a
    public final MessageSnapshot g(Throwable th) {
        b((byte) -1);
        this.aaL = th;
        return com.kwad.framework.filedownloader.message.f.a(getId(), tx(), th);
    }

    @Override // com.kwad.framework.filedownloader.s.a
    public final int getSpeed() {
        return this.aaN.getSpeed();
    }

    @Override // com.kwad.framework.filedownloader.x
    public final long getStatusUpdateTime() {
        return this.aaK;
    }

    @Override // com.kwad.framework.filedownloader.x
    public final long getTotalBytes() {
        return this.aaP;
    }

    @Override // com.kwad.framework.filedownloader.a.c
    public final void onBegin() {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.e(this, "filedownloader:lifecycle:start %s by %d ", toString(), Byte.valueOf(sX()));
        }
    }

    @Override // com.kwad.framework.filedownloader.x
    public final boolean pause() {
        if (com.kwad.framework.filedownloader.d.d.bA(sX())) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "High concurrent cause, Already is over, can't pause again, %d %d", Byte.valueOf(sX()), Integer.valueOf(this.aaI.tt().tf().getId()));
            }
            return false;
        }
        b((byte) -2);
        a.InterfaceC0181a interfaceC0181aTt = this.aaI.tt();
        com.kwad.framework.filedownloader.a aVarTf = interfaceC0181aTt.tf();
        q.tU().b(this);
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.e(this, "the task[%d] has been expired from the launch pool.", Integer.valueOf(getId()));
        }
        r.tW();
        if (r.tY()) {
            n.tO().aY(aVarTf.getId());
        } else if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "request pause the task[%d] to the download service, but the download service isn't connected yet.", Integer.valueOf(aVarTf.getId()));
        }
        h.tD().b(interfaceC0181aTt);
        h.tD().a(interfaceC0181aTt, com.kwad.framework.filedownloader.message.f.e(aVarTf));
        r.tW().ua().e(interfaceC0181aTt);
        return true;
    }

    @Override // com.kwad.framework.filedownloader.x
    public final void reset() {
        this.aaL = null;
        this.aaT = null;
        this.aaS = false;
        this.aaQ = 0;
        this.aaU = false;
        this.aaR = false;
        this.aaO = 0L;
        this.aaP = 0L;
        this.aaM.reset();
        if (com.kwad.framework.filedownloader.d.d.bA(this.aaJ)) {
            this.aaH.tM();
            this.aaH = new k(this.aaI.tt(), this);
        } else {
            this.aaH.b(this.aaI.tt(), this);
        }
        b((byte) 0);
    }

    @Override // com.kwad.framework.filedownloader.x
    public final byte sX() {
        return this.aaJ;
    }

    @Override // com.kwad.framework.filedownloader.x
    public final Throwable sZ() {
        return this.aaL;
    }

    @Override // com.kwad.framework.filedownloader.x.b
    public final void start() {
        if (this.aaJ != 10) {
            com.kwad.framework.filedownloader.f.d.d(this, "High concurrent cause, this task %d will not start, because the of status isn't toLaunchPool: %d", Integer.valueOf(getId()), Byte.valueOf(this.aaJ));
            return;
        }
        a.InterfaceC0181a interfaceC0181aTt = this.aaI.tt();
        com.kwad.framework.filedownloader.a aVarTf = interfaceC0181aTt.tf();
        v vVarUa = r.tW().ua();
        try {
            if (vVarUa.f(interfaceC0181aTt)) {
                return;
            }
            synchronized (this.aaD) {
                if (this.aaJ != 10) {
                    com.kwad.framework.filedownloader.f.d.d(this, "High concurrent cause, this task %d will not start, the status can't assign to toFileDownloadService, because the status isn't toLaunchPool: %d", Integer.valueOf(getId()), Byte.valueOf(this.aaJ));
                    return;
                }
                b((byte) 11);
                h.tD().b(interfaceC0181aTt);
                if (com.kwad.framework.filedownloader.f.c.a(aVarTf.getId(), aVarTf.getTargetFilePath(), aVarTf.sY(), true)) {
                    return;
                }
                boolean zA = n.tO().a(aVarTf.getUrl(), aVarTf.getPath(), aVarTf.sT(), aVarTf.sR(), aVarTf.sS(), aVarTf.ta(), aVarTf.sY(), this.aaI.ts(), aVarTf.te());
                if (this.aaJ == -2) {
                    com.kwad.framework.filedownloader.f.d.d(this, "High concurrent cause, this task %d will be paused,because of the status is paused, so the pause action must be applied", Integer.valueOf(getId()));
                    if (zA) {
                        n.tO().aY(getId());
                        return;
                    }
                    return;
                }
                if (zA) {
                    vVarUa.e(interfaceC0181aTt);
                    return;
                }
                if (vVarUa.f(interfaceC0181aTt)) {
                    return;
                }
                MessageSnapshot messageSnapshotG = g(new RuntimeException("Occur Unknown Error, when request to start maybe some problem in binder, maybe the process was killed in unexpected."));
                if (h.tD().a(interfaceC0181aTt)) {
                    vVarUa.e(interfaceC0181aTt);
                    h.tD().b(interfaceC0181aTt);
                }
                h.tD().a(interfaceC0181aTt, messageSnapshotG);
            }
        } catch (Throwable th) {
            th.printStackTrace();
            h.tD().a(interfaceC0181aTt, g(th));
        }
    }

    @Override // com.kwad.framework.filedownloader.x
    public final int tb() {
        return this.aaQ;
    }

    @Override // com.kwad.framework.filedownloader.x
    public final boolean td() {
        return this.aaR;
    }

    @Override // com.kwad.framework.filedownloader.a.c
    public final void to() {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.e(this, "filedownloader:lifecycle:over %s by %d ", toString(), Byte.valueOf(sX()));
        }
        this.aaM.end(this.aaO);
        if (this.aaI.tu() != null) {
            ArrayList arrayList = (ArrayList) this.aaI.tu().clone();
            int size = arrayList.size();
            for (int i = 0; i < size; i++) {
                arrayList.get(i);
            }
        }
        r.tW().ua().e(this.aaI.tt());
    }

    @Override // com.kwad.framework.filedownloader.x.a
    public final t tv() {
        return this.aaH;
    }

    @Override // com.kwad.framework.filedownloader.x
    public final void tw() {
        boolean z;
        synchronized (this.aaD) {
            if (this.aaJ != 0) {
                com.kwad.framework.filedownloader.f.d.d(this, "High concurrent cause, this task %d will not input to launch pool, because of the status isn't idle : %d", Integer.valueOf(getId()), Byte.valueOf(this.aaJ));
                return;
            }
            b((byte) 10);
            a.InterfaceC0181a interfaceC0181aTt = this.aaI.tt();
            com.kwad.framework.filedownloader.a aVarTf = interfaceC0181aTt.tf();
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.e(this, "call start Url[%s], Path[%s] Listener[%s], Tag[%s]", aVarTf.getUrl(), aVarTf.getPath(), aVarTf.sU(), aVarTf.getTag());
            }
            try {
                prepare();
                z = true;
            } catch (Throwable th) {
                h.tD().b(interfaceC0181aTt);
                h.tD().a(interfaceC0181aTt, g(th));
                z = false;
            }
            if (z) {
                q.tU().a(this);
            }
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.e(this, "the task[%d] has been into the launch pool.", Integer.valueOf(getId()));
            }
        }
    }

    @Override // com.kwad.framework.filedownloader.x
    public final long tx() {
        return this.aaO;
    }
}
