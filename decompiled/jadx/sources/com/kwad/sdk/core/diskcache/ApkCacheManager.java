package com.kwad.sdk.core.diskcache;

import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.utils.av;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Future;

/* JADX INFO: loaded from: classes2.dex */
public class ApkCacheManager {
    private Future afI;
    private File amQ;
    private final ExecutorService amR;
    private final Callable<Void> amS;

    enum Holder {
        INSTANCE;

        private ApkCacheManager mInstance = new ApkCacheManager(0);

        Holder() {
        }

        final ApkCacheManager getInstance() {
            return this.mInstance;
        }
    }

    private ApkCacheManager() {
        this.amR = GlobalThreadPools.CZ();
        this.amS = new Callable<Void>() { // from class: com.kwad.sdk.core.diskcache.ApkCacheManager.1
            /* JADX INFO: Access modifiers changed from: private */
            @Override // java.util.concurrent.Callable
            /* JADX INFO: renamed from: Ak, reason: merged with bridge method [inline-methods] */
            public Void call() {
                synchronized (ApkCacheManager.class) {
                    if (ApkCacheManager.this.amQ != null && ApkCacheManager.this.amQ.exists() && !ApkCacheManager.this.Ai()) {
                        for (File file : ApkCacheManager.this.n(ApkCacheManager.this.amQ)) {
                            if (file.getName().endsWith(com.tkay.china.common.a.a.g)) {
                                ApkCacheManager.this.h(file);
                                if (ApkCacheManager.this.Ai()) {
                                    return null;
                                }
                            }
                        }
                        return null;
                    }
                    return null;
                }
            }
        };
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return;
        }
        try {
            this.amQ = av.cK(((e) ServiceProvider.get(e.class)).getContext());
        } catch (Throwable unused) {
        }
    }

    /* synthetic */ ApkCacheManager(byte b) {
        this();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean Ai() {
        File file = this.amQ;
        if (file == null || !file.exists()) {
            return false;
        }
        File[] fileArrListFiles = this.amQ.listFiles();
        if (fileArrListFiles.length > 5) {
            return fileArrListFiles.length <= 10 && l(this.amQ) <= 400;
        }
        return true;
    }

    public static ApkCacheManager getInstance() {
        return Holder.INSTANCE.getInstance();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void h(File file) {
        if (file == null || !file.exists()) {
            return;
        }
        try {
            if (!file.isDirectory()) {
                if (file.exists()) {
                    file.delete();
                    return;
                }
                return;
            }
            for (File file2 : file.listFiles()) {
                h(file2);
            }
            file.delete();
        } catch (Exception unused) {
        }
    }

    private int l(File file) {
        return (int) ((m(file) / 1000.0f) / 1000.0f);
    }

    private long m(File file) {
        File[] fileArrListFiles = file.listFiles();
        long jM = 0;
        if (fileArrListFiles != null) {
            int length = fileArrListFiles.length;
            for (int i = 0; i < length; i++) {
                jM += fileArrListFiles[i].isDirectory() ? m(fileArrListFiles[i]) : fileArrListFiles[i].length();
            }
        }
        return jM;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<File> n(File file) {
        ArrayList arrayList = new ArrayList();
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null) {
            return arrayList;
        }
        arrayList.addAll(Arrays.asList(fileArrListFiles));
        r(arrayList);
        return arrayList;
    }

    private void r(List<File> list) {
        Collections.sort(list, new Comparator<File>() { // from class: com.kwad.sdk.core.diskcache.ApkCacheManager.2
            private static int c(File file, File file2) {
                if (file.lastModified() >= file2.lastModified()) {
                    return file.lastModified() == file2.lastModified() ? 0 : 1;
                }
                return -1;
            }

            @Override // java.util.Comparator
            public final /* synthetic */ int compare(File file, File file2) {
                return c(file, file2);
            }
        });
    }

    public final void Aj() {
        File file = this.amQ;
        if (file == null || !file.exists()) {
            return;
        }
        Future future = this.afI;
        if (future == null || future.isDone()) {
            this.afI = this.amR.submit(this.amS);
        }
    }
}
