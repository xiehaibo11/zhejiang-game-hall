package com.kwad.sdk.core.videocache.a;

import com.kwad.sdk.core.threads.GlobalThreadPools;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: classes2.dex */
public abstract class e implements com.kwad.sdk.core.videocache.a.a {
    private final ExecutorService awY = GlobalThreadPools.CQ();

    class a implements Callable<Void> {
        private final File file;

        public a(File file) {
            this.file = file;
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // java.util.concurrent.Callable
        /* JADX INFO: renamed from: Ak, reason: merged with bridge method [inline-methods] */
        public Void call() throws Throwable {
            e.this.z(this.file);
            return null;
        }
    }

    private void x(List<File> list) {
        long jY = y(list);
        list.size();
        for (File file : list) {
            if (!aj(jY)) {
                long length = file.length();
                if (file.delete()) {
                    jY -= length;
                } else {
                    com.kwad.sdk.core.e.c.e("LruDiskUsage", "Error deleting file " + file + " for trimming cache");
                }
            }
        }
    }

    private static long y(List<File> list) {
        Iterator<File> it = list.iterator();
        long length = 0;
        while (it.hasNext()) {
            length += it.next().length();
        }
        return length;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void z(File file) throws Throwable {
        d.w(file);
        x(d.v(file.getParentFile()));
    }

    protected abstract boolean aj(long j);

    @Override // com.kwad.sdk.core.videocache.a.a
    public final void s(File file) {
        this.awY.submit(new a(file));
    }
}
