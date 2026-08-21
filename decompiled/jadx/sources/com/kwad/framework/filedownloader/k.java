package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.message.MessageSnapshot;
import com.kwad.framework.filedownloader.x;
import java.util.Queue;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes2.dex */
final class k implements t {
    private a.InterfaceC0181a abi;
    private a.c abj;
    private Queue<MessageSnapshot> abk;
    private boolean abl = false;

    k(a.InterfaceC0181a interfaceC0181a, a.c cVar) {
        a(interfaceC0181a, cVar);
    }

    private void a(a.InterfaceC0181a interfaceC0181a, a.c cVar) {
        this.abi = interfaceC0181a;
        this.abj = cVar;
        this.abk = new LinkedBlockingQueue();
    }

    private void aX(int i) {
        if (com.kwad.framework.filedownloader.d.d.bA(i)) {
            if (!this.abk.isEmpty()) {
                MessageSnapshot messageSnapshotPeek = this.abk.peek();
                com.kwad.framework.filedownloader.f.d.d(this, "the messenger[%s](with id[%d]) has already accomplished all his job, but there still are some messages in parcel queue[%d] queue-top-status[%d]", this, Integer.valueOf(messageSnapshotPeek.getId()), Integer.valueOf(this.abk.size()), Byte.valueOf(messageSnapshotPeek.sX()));
            }
            this.abi = null;
        }
    }

    private void o(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify completed %s", this.abi);
        }
        this.abj.to();
        p(messageSnapshot);
    }

    private void p(MessageSnapshot messageSnapshot) {
        a.InterfaceC0181a interfaceC0181a = this.abi;
        if (interfaceC0181a == null) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "occur this case, it would be the host task of this messenger has been over(paused/warn/completed/error) on the other thread before receiving the snapshot(id[%d], status[%d])", Integer.valueOf(messageSnapshot.getId()), Byte.valueOf(messageSnapshot.sX()));
            }
        } else {
            if (!this.abl && interfaceC0181a.tf().sU() != null) {
                this.abk.offer(messageSnapshot);
                j.tF().a(this);
                return;
            }
            if ((l.isValid() || this.abi.tm()) && messageSnapshot.sX() == 4) {
                this.abj.to();
            }
            aX(messageSnapshot.sX());
        }
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void b(a.InterfaceC0181a interfaceC0181a, a.c cVar) {
        if (this.abi != null) {
            throw new IllegalStateException(com.kwad.framework.filedownloader.f.f.b("the messenger is working, can't re-appointment for %s", interfaceC0181a));
        }
        a(interfaceC0181a, cVar);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void f(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify pending %s", this.abi);
        }
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void g(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify started %s", this.abi);
        }
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void h(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify connected %s", this.abi);
        }
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void i(MessageSnapshot messageSnapshot) {
        a aVarTf = this.abi.tf();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify progress %s %d %d", aVarTf, Long.valueOf(aVarTf.sV()), Long.valueOf(aVarTf.sW()));
        }
        if (aVarTf.sR() > 0) {
            p(messageSnapshot);
        } else if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify progress but client not request notify %s", this.abi);
        }
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void j(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify block completed %s %s", this.abi, Thread.currentThread().getName());
        }
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void k(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            a aVarTf = this.abi.tf();
            com.kwad.framework.filedownloader.f.d.c(this, "notify retry %s %d %d %s", this.abi, Integer.valueOf(aVarTf.ta()), Integer.valueOf(aVarTf.tb()), aVarTf.sZ());
        }
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void l(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify warn %s", this.abi);
        }
        this.abj.to();
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void m(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            a.InterfaceC0181a interfaceC0181a = this.abi;
            com.kwad.framework.filedownloader.f.d.c(this, "notify error %s %s", interfaceC0181a, interfaceC0181a.tf().sZ());
        }
        this.abj.to();
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void n(MessageSnapshot messageSnapshot) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify paused %s", this.abi);
        }
        this.abj.to();
        p(messageSnapshot);
    }

    @Override // com.kwad.framework.filedownloader.t
    public final boolean tI() {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "notify begin %s", this.abi);
        }
        if (this.abi == null) {
            com.kwad.framework.filedownloader.f.d.d(this, "can't begin the task, the holder fo the messenger is nil, %d", Integer.valueOf(this.abk.size()));
            return false;
        }
        this.abj.onBegin();
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.kwad.framework.filedownloader.t
    public final void tJ() {
        if (this.abl) {
            return;
        }
        MessageSnapshot messageSnapshotPoll = this.abk.poll();
        byte bSX = messageSnapshotPoll.sX();
        a.InterfaceC0181a interfaceC0181a = this.abi;
        if (interfaceC0181a == null) {
            return;
        }
        a aVarTf = interfaceC0181a.tf();
        i iVarSU = aVarTf.sU();
        x.a aVarTg = interfaceC0181a.tg();
        aX(bSX);
        if (iVarSU == null) {
            return;
        }
        if (bSX == 4) {
            try {
                iVarSU.b(aVarTf);
                o(((com.kwad.framework.filedownloader.message.a) messageSnapshotPoll).uY());
                return;
            } catch (Throwable th) {
                m(aVarTg.g(th));
                return;
            }
        }
        g gVar = iVarSU instanceof g ? (g) iVarSU : null;
        if (bSX == -4) {
            iVarSU.d(aVarTf);
            return;
        }
        if (bSX == -3) {
            iVarSU.c(aVarTf);
            return;
        }
        if (bSX == -2) {
            if (gVar == null) {
                iVarSU.c(aVarTf, messageSnapshotPoll.uZ(), messageSnapshotPoll.va());
                return;
            } else {
                messageSnapshotPoll.vd();
                messageSnapshotPoll.vb();
                return;
            }
        }
        if (bSX == -1) {
            iVarSU.a(aVarTf, messageSnapshotPoll.ve());
            return;
        }
        if (bSX == 1) {
            if (gVar == null) {
                iVarSU.a(aVarTf, messageSnapshotPoll.uZ(), messageSnapshotPoll.va());
                return;
            } else {
                messageSnapshotPoll.vd();
                messageSnapshotPoll.vb();
                return;
            }
        }
        if (bSX == 2) {
            if (gVar == null) {
                iVarSU.a(aVarTf, messageSnapshotPoll.getEtag(), messageSnapshotPoll.uR(), aVarTf.getSmallFileSoFarBytes(), messageSnapshotPoll.va());
                return;
            }
            messageSnapshotPoll.getEtag();
            messageSnapshotPoll.uR();
            messageSnapshotPoll.vb();
            return;
        }
        if (bSX == 3) {
            if (gVar != null) {
                messageSnapshotPoll.vd();
                return;
            } else {
                iVarSU.b(aVarTf, messageSnapshotPoll.uZ(), aVarTf.getSmallFileTotalBytes());
                return;
            }
        }
        if (bSX != 5) {
            if (bSX != 6) {
                return;
            }
            iVarSU.a(aVarTf);
        } else {
            messageSnapshotPoll.ve();
            messageSnapshotPoll.tb();
            if (gVar != null) {
                messageSnapshotPoll.vd();
            } else {
                messageSnapshotPoll.uZ();
            }
        }
    }

    @Override // com.kwad.framework.filedownloader.t
    public final boolean tK() {
        return this.abi.tf().tc();
    }

    @Override // com.kwad.framework.filedownloader.t
    public final boolean tL() {
        return this.abk.peek().sX() == 4;
    }

    @Override // com.kwad.framework.filedownloader.t
    public final void tM() {
        this.abl = true;
    }

    public final String toString() {
        Object[] objArr = new Object[2];
        a.InterfaceC0181a interfaceC0181a = this.abi;
        objArr[0] = Integer.valueOf(interfaceC0181a == null ? -1 : interfaceC0181a.tf().getId());
        objArr[1] = super.toString();
        return com.kwad.framework.filedownloader.f.f.b("%d:%s", objArr);
    }
}
