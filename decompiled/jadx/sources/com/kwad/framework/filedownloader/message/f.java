package com.kwad.framework.filedownloader.message;

import com.kwad.framework.filedownloader.download.d;
import com.kwad.framework.filedownloader.message.MessageSnapshot;
import com.kwad.framework.filedownloader.message.a;
import com.kwad.framework.filedownloader.message.d;
import com.kwad.framework.filedownloader.message.h;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public class f {
    public static MessageSnapshot a(byte b, com.kwad.framework.filedownloader.d.c cVar, d.a aVar) {
        MessageSnapshot c0189d;
        int id = cVar.getId();
        if (b == -4) {
            throw new IllegalStateException(com.kwad.framework.filedownloader.f.f.b("please use #catchWarn instead %d", Integer.valueOf(id)));
        }
        if (b == -3) {
            return cVar.td() ? new d.b(id, false, cVar.getTotal()) : new h.b(id, false, (int) cVar.getTotal());
        }
        if (b == -1) {
            c0189d = cVar.td() ? new d.C0189d(id, cVar.vm(), aVar.getException()) : new h.d(id, (int) cVar.vm(), aVar.getException());
        } else {
            if (b == 1) {
                return cVar.td() ? new d.f(id, cVar.vm(), cVar.getTotal()) : new h.f(id, (int) cVar.vm(), (int) cVar.getTotal());
            }
            if (b == 2) {
                String filename = cVar.sT() ? cVar.getFilename() : null;
                return cVar.td() ? new d.c(id, aVar.uR(), cVar.getTotal(), cVar.vn(), filename) : new h.c(id, aVar.uR(), (int) cVar.getTotal(), cVar.vn(), filename);
            }
            if (b == 3) {
                return cVar.td() ? new d.g(id, cVar.vm()) : new h.g(id, (int) cVar.vm());
            }
            if (b != 5) {
                if (b == 6) {
                    return new MessageSnapshot.b(id);
                }
                String strB = com.kwad.framework.filedownloader.f.f.b("it can't takes a snapshot for the task(%s) when its status is %d,", cVar, Byte.valueOf(b));
                com.kwad.framework.filedownloader.f.d.d(f.class, "it can't takes a snapshot for the task(%s) when its status is %d,", cVar, Byte.valueOf(b));
                IllegalStateException illegalStateException = aVar.getException() != null ? new IllegalStateException(strB, aVar.getException()) : new IllegalStateException(strB);
                return cVar.td() ? new d.C0189d(id, cVar.vm(), illegalStateException) : new h.d(id, (int) cVar.vm(), illegalStateException);
            }
            c0189d = cVar.td() ? new d.h(id, cVar.vm(), aVar.getException(), aVar.tb()) : new h.C0190h(id, (int) cVar.vm(), aVar.getException(), aVar.tb());
        }
        return c0189d;
    }

    public static MessageSnapshot a(int i, long j, long j2, boolean z) {
        return j2 > 2147483647L ? z ? new d.i(i, j, j2) : new d.j(i, j, j2) : z ? new h.i(i, (int) j, (int) j2) : new h.j(i, (int) j, (int) j2);
    }

    public static MessageSnapshot a(int i, long j, Throwable th) {
        return j > 2147483647L ? new d.C0189d(i, j, th) : new h.d(i, (int) j, th);
    }

    public static MessageSnapshot a(int i, File file, boolean z) {
        long length = file.length();
        return length > 2147483647L ? z ? new d.a(i, true, length) : new d.b(i, true, length) : z ? new h.a(i, true, (int) length) : new h.b(i, true, (int) length);
    }

    public static MessageSnapshot e(com.kwad.framework.filedownloader.a aVar) {
        return aVar.td() ? new d.e(aVar.getId(), aVar.sV(), aVar.sW()) : new h.e(aVar.getId(), aVar.getSmallFileSoFarBytes(), aVar.getSmallFileTotalBytes());
    }

    public static MessageSnapshot t(MessageSnapshot messageSnapshot) {
        if (messageSnapshot.sX() == -3) {
            return new a.C0188a(messageSnapshot);
        }
        throw new IllegalStateException(com.kwad.framework.filedownloader.f.f.b("take block completed snapshot, must has already be completed. %d %d", Integer.valueOf(messageSnapshot.getId()), Byte.valueOf(messageSnapshot.sX())));
    }
}
