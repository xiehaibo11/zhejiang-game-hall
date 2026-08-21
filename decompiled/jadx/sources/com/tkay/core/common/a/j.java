package com.tkay.core.common.a;

import android.text.TextUtils;
import com.tkay.core.common.c.m;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class j {
    private static volatile j b;
    private long e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f6025a = j.class.getSimpleName();
    private long f = 0;
    private m c = m.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f()));
    private Map<String, Integer> d = new HashMap();

    private j() {
        this.e = 209715200L;
        this.e = com.tkay.core.common.b.m.a().d(4);
    }

    public static j a() {
        if (b == null) {
            synchronized (j.class) {
                if (b == null) {
                    b = new j();
                }
            }
        }
        return b;
    }

    public final void b() {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.a.j.1
            @Override // java.lang.Runnable
            public final void run() {
                new ArrayList();
                j jVar = j.this;
                jVar.f = jVar.c.c();
                StringBuilder sb = new StringBuilder("recycleSpace check curDownloadedVideoFileSize:");
                sb.append(j.this.f);
                sb.append(",MAX_VIDEO_CACHE_SIZE:");
                sb.append(j.this.e);
                if (j.this.f > j.this.e) {
                    List<i> listD = j.this.c.d();
                    new StringBuilder("recycleSpace start to delete video file,file list size:").append(listD.size());
                    for (i iVar : listD) {
                        try {
                            File file = new File(iVar.b());
                            if (file.exists()) {
                                file.delete();
                            }
                        } catch (Throwable unused) {
                        }
                        try {
                            if (!TextUtils.isEmpty(iVar.a())) {
                                String strA = iVar.a();
                                j.this.d.remove(strA);
                                com.tkay.core.common.res.a.c.a().b(strA);
                            }
                        } catch (Throwable unused2) {
                        }
                    }
                }
            }
        });
    }

    /* JADX INFO: renamed from: com.tkay.core.common.a.j$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ i f6027a;

        AnonymousClass2(i iVar) {
            this.f6027a = iVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                File file = new File(this.f6027a.b());
                if (file.exists()) {
                    file.delete();
                }
            } catch (Throwable unused) {
            }
            j.this.c.c(this.f6027a.a());
        }
    }

    private void a(i iVar) {
        if (iVar == null) {
            return;
        }
        com.tkay.core.common.l.b.a.a().a(new AnonymousClass2(iVar));
    }

    public final void a(final String str, final String str2, final long j, final long j2, final int i, boolean z) {
        this.d.put(str, Integer.valueOf(i));
        if (z) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.a.j.3
                @Override // java.lang.Runnable
                public final void run() {
                    j.this.c.a(str, str2, j, j2, i);
                }
            });
        }
    }

    public final i a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return this.c.a(str);
    }

    public final synchronized boolean a(String str, int i) {
        return b(str) >= i;
    }

    public final synchronized int b(String str) {
        if (this.d.containsKey(str) && this.d.get(str) != null) {
            return this.d.get(str).intValue();
        }
        i iVarA = this.c.a(str);
        if (iVarA == null || iVarA.c() <= 0) {
            return 0;
        }
        File file = new File(iVarA.b());
        if (!file.exists() || file.length() < iVarA.e()) {
            if (iVarA != null) {
                com.tkay.core.common.l.b.a.a().a(new AnonymousClass2(iVarA));
            }
            return 0;
        }
        this.d.put(str, Integer.valueOf(iVarA.c()));
        this.c.b(str);
        return iVarA.c();
    }

    public final long c() {
        return this.e;
    }

    public final long d() {
        return this.f;
    }
}
