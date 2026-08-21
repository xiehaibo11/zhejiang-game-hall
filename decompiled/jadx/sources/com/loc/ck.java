package com.loc;

import java.io.File;

/* JADX INFO: compiled from: FileNumUpdateStrategy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ck extends co {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f2905a;
    private String b;

    public ck(String str, co coVar) {
        super(coVar);
        this.f2905a = 30;
        this.b = str;
    }

    private static int a(String str) {
        try {
            File file = new File(str);
            if (file.exists()) {
                return file.list().length;
            }
            return 0;
        } catch (Throwable th) {
            av.b(th, "fus", "gfn");
            return 0;
        }
    }

    @Override // com.loc.co
    protected final boolean a() {
        return a(this.b) >= this.f2905a;
    }
}
