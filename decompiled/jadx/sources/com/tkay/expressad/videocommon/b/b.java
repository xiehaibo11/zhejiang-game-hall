package com.tkay.expressad.videocommon.b;

import android.text.TextUtils;
import com.tkay.expressad.videocommon.b.g;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes3.dex */
public final class b implements g.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f7457a = "DownLoadH5SourceListener";
    private ConcurrentMap<String, b> b;
    private k c;
    private CopyOnWriteArrayList<g.d> d;
    private String e;

    @Override // com.tkay.expressad.videocommon.b.g.c
    public final void a() {
    }

    public b(ConcurrentMap<String, b> concurrentMap, k kVar, g.d dVar, String str) {
        CopyOnWriteArrayList<g.d> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        this.d = copyOnWriteArrayList;
        this.b = concurrentMap;
        this.c = kVar;
        copyOnWriteArrayList.add(dVar);
        this.e = str;
    }

    public final void a(g.d dVar) {
        this.d.add(dVar);
    }

    @Override // com.tkay.expressad.videocommon.b.g.c
    public final void a(byte[] bArr, String str) {
        String message;
        try {
        } catch (Exception e) {
            if (com.tkay.expressad.b.f6449a) {
                e.printStackTrace();
            }
            try {
                message = e.getMessage();
            } catch (Throwable th) {
                th.getMessage();
                message = "";
            }
        }
        if (this.b == null) {
            for (g.d dVar : this.d) {
                if (dVar != null) {
                    dVar.a(str, "mResDownloadingMap  is null");
                    this.d.remove(dVar);
                }
            }
            return;
        }
        if (this.b.containsKey(str)) {
            this.b.remove(str);
        }
        if (bArr == null || bArr.length <= 0) {
            message = "response data is error";
        } else {
            String strA = this.c.a(str, bArr);
            if (TextUtils.isEmpty(strA)) {
                for (g.d dVar2 : this.d) {
                    if (dVar2 != null) {
                        dVar2.a(str);
                        this.d.remove(dVar2);
                    }
                }
                return;
            }
            message = "data save failed:".concat(String.valueOf(strA));
        }
        for (g.d dVar3 : this.d) {
            if (dVar3 != null) {
                dVar3.a(str, message);
            }
        }
    }

    @Override // com.tkay.expressad.videocommon.b.g.c
    public final void a(String str) {
        try {
        } catch (Exception e) {
            if (com.tkay.expressad.b.f6449a) {
                e.printStackTrace();
            }
            try {
                str = e.getMessage();
            } catch (Throwable th) {
                th.getMessage();
            }
        }
        if (this.b == null) {
            for (g.d dVar : this.d) {
                if (dVar != null) {
                    dVar.a(this.e, "mResDownloadingMap  is null");
                    this.d.remove(dVar);
                }
            }
            return;
        }
        if (this.b.containsKey(this.e)) {
            this.b.remove(this.e);
        }
        for (g.d dVar2 : this.d) {
            if (dVar2 != null) {
                dVar2.a(this.e, str);
                this.d.remove(dVar2);
            }
        }
    }
}
