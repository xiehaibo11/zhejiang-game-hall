package com.igexin.a;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import java.io.File;
import java.io.IOException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final Set<String> f2409a;
    protected final f b;
    protected final e c;
    protected boolean d;
    protected boolean e;
    protected h f;

    protected i() {
        this(new k(), new a());
    }

    protected i(f fVar, e eVar) {
        this.f2409a = new HashSet();
        if (fVar == null) {
            throw new IllegalArgumentException("Cannot pass null library loader");
        }
        if (eVar == null) {
            throw new IllegalArgumentException("Cannot pass null library installer");
        }
        this.b = fVar;
        this.c = eVar;
    }

    private void c(Context context, String str, String str2) throws Throwable {
        if (this.f2409a.contains(str) && !this.d) {
            a("%s already loaded previously!", str);
            return;
        }
        try {
            this.b.a(str);
            this.f2409a.add(str);
            a("%s (%s) was loaded normally!", str, str2);
        } catch (UnsatisfiedLinkError e) {
            a("Loading the library normally failed: %s", Log.getStackTraceString(e));
            a("%s (%s) was not loaded normally, re-linking...", str, str2);
            File fileA = a(context, str, str2);
            if (!fileA.exists() || this.d) {
                if (this.d) {
                    a("Forcing a re-link of %s (%s)...", str, str2);
                }
                b(context, str, str2);
                this.c.a(context, this.b.a(), this.b.c(str), fileA, this);
            }
            try {
                if (this.e) {
                    com.igexin.a.a.j jVar = null;
                    try {
                        com.igexin.a.a.j jVar2 = new com.igexin.a.a.j(fileA);
                        try {
                            List<String> listB = jVar2.b();
                            jVar2.close();
                            Iterator<String> it = listB.iterator();
                            while (it.hasNext()) {
                                a(context, this.b.d(it.next()));
                            }
                        } catch (Throwable th) {
                            th = th;
                            jVar = jVar2;
                            jVar.close();
                            throw th;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                    }
                }
            } catch (IOException unused) {
            }
            this.b.b(fileA.getAbsolutePath());
            this.f2409a.add(str);
            a("%s (%s) was re-linked!", str, str2);
        }
    }

    public i a() {
        this.d = true;
        return this;
    }

    public i a(h hVar) {
        this.f = hVar;
        return this;
    }

    protected File a(Context context) {
        return context.getDir("lib", 0);
    }

    protected File a(Context context, String str, String str2) {
        String strC = this.b.c(str);
        if (TextUtils.isEmpty(str2)) {
            return new File(a(context), strC);
        }
        return new File(a(context), strC + "." + str2);
    }

    public void a(Context context, String str) {
        a(context, str, null, null);
    }

    public void a(Context context, String str, String str2, g gVar) {
        if (context == null) {
            throw new IllegalArgumentException("Given context is null");
        }
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Given library is either null or empty");
        }
        a("Beginning load of %s...", str);
        if (gVar == null) {
            c(context, str, str2);
            return;
        }
        try {
            c(context, str, str2);
            gVar.a();
        } catch (c | UnsatisfiedLinkError e) {
            gVar.a(e);
        }
    }

    public void a(String str) {
        h hVar = this.f;
        if (hVar != null) {
            hVar.a(str);
        }
    }

    public void a(String str, Object... objArr) {
        a(String.format(Locale.US, str, objArr));
    }

    public i b() {
        this.e = true;
        return this;
    }

    protected void b(Context context, String str, String str2) {
        File fileA = a(context);
        File fileA2 = a(context, str, str2);
        File[] fileArrListFiles = fileA.listFiles(new j(this, this.b.c(str)));
        if (fileArrListFiles == null) {
            return;
        }
        for (File file : fileArrListFiles) {
            if (this.d || !file.getAbsolutePath().equals(fileA2.getAbsolutePath())) {
                file.delete();
            }
        }
    }
}
