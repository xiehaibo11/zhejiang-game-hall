package com.kwad.framework.filedownloader;

import android.os.Handler;
import android.util.SparseArray;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
final class ab implements w {
    private final SparseArray<Handler> abE = new SparseArray<>();

    ab() {
    }

    private static void a(Handler handler) {
        handler.sendEmptyMessage(2);
    }

    private static void b(Handler handler) {
        handler.sendEmptyMessage(3);
    }

    @Override // com.kwad.framework.filedownloader.w
    public final boolean bc(int i) {
        return this.abE.get(i) != null;
    }

    @Override // com.kwad.framework.filedownloader.w
    public final void m(List<Integer> list) {
        Iterator<Integer> it = list.iterator();
        while (it.hasNext()) {
            b(this.abE.get(it.next().intValue()));
        }
    }

    @Override // com.kwad.framework.filedownloader.w
    public final void uc() {
        for (int i = 0; i < this.abE.size(); i++) {
            a(this.abE.get(this.abE.keyAt(i)));
        }
    }

    @Override // com.kwad.framework.filedownloader.w
    public final int ud() {
        return this.abE.size();
    }
}
