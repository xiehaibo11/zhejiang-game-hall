package com.kwad.framework.filedownloader;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.services.c;
import java.io.File;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class r {
    private volatile v abB;
    private w abz;
    private static final Object aby = new Object();
    private static final Object abA = new Object();

    static final class a {
        private static final r abC = new r();
    }

    public static void a(Context context, c.b bVar) {
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(r.class, "init Downloader with params: %s %s", context, bVar);
        }
        if (context == null) {
            throw new IllegalArgumentException("the provided context must not be null!");
        }
        com.kwad.framework.filedownloader.f.c.ap(context.getApplicationContext());
        com.kwad.framework.filedownloader.download.b.up().a(bVar);
    }

    private static void a(e eVar) {
        f.tB().a("event.service.connect.changed", eVar);
    }

    public static com.kwad.framework.filedownloader.a aX(String str) {
        return new c(str);
    }

    public static void ao(Context context) {
        com.kwad.framework.filedownloader.f.c.ap(context.getApplicationContext());
    }

    private int bb(int i) {
        List<a.InterfaceC0181a> listAW = h.tD().aW(i);
        if (listAW.isEmpty()) {
            com.kwad.framework.filedownloader.f.d.d(this, "request pause but not exist %d", Integer.valueOf(i));
            return 0;
        }
        Iterator<a.InterfaceC0181a> it = listAW.iterator();
        while (it.hasNext()) {
            it.next().tf().pause();
        }
        return listAW.size();
    }

    public static r tW() {
        return a.abC;
    }

    public static boolean tY() {
        return n.tO().isConnected();
    }

    public final boolean i(int i, String str) {
        bb(i);
        if (!n.tO().ba(i)) {
            return false;
        }
        if (TextUtils.isEmpty(str)) {
            return true;
        }
        File file = new File(com.kwad.framework.filedownloader.f.f.bo(str));
        if (file.exists()) {
            file.delete();
        }
        File file2 = new File(str);
        if (file2.exists()) {
            file2.delete();
        }
        return true;
    }

    public final void tX() {
        if (tY()) {
            return;
        }
        n.tO().an(com.kwad.framework.filedownloader.f.c.vM());
    }

    final w tZ() {
        if (this.abz == null) {
            synchronized (aby) {
                if (this.abz == null) {
                    this.abz = new ab();
                }
            }
        }
        return this.abz;
    }

    final v ua() {
        if (this.abB == null) {
            synchronized (abA) {
                if (this.abB == null) {
                    this.abB = new z();
                    a((e) this.abB);
                }
            }
        }
        return this.abB;
    }
}
