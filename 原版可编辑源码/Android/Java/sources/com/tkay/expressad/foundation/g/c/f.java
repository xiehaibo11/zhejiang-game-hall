package com.tkay.expressad.foundation.g.c;

import android.util.Log;
import com.tkay.expressad.foundation.h.r;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class f {
    private static final String a = "TkayDirManager";
    private static f d;
    private b b;
    private ArrayList<a> c = new ArrayList<>();

    private f(b bVar) {
        this.b = bVar;
    }

    public static synchronized void a(b bVar) {
        if (d == null) {
            d = new f(bVar);
        }
    }

    public static synchronized f a() {
        if (d == null && com.tkay.expressad.foundation.b.b.b().d() != null) {
            r.a(com.tkay.expressad.foundation.b.b.b().d());
        }
        if (d == null) {
            Log.e(a, "mDirectoryManager == null");
        }
        return d;
    }

    public static File a(c cVar) {
        try {
            if (a() == null || a().c == null || a().c.size() <= 0) {
                return null;
            }
            for (a aVar : a().c) {
                if (aVar.a.equals(cVar)) {
                    return aVar.b;
                }
            }
            return null;
        } catch (Throwable th) {
            th.getMessage();
            return null;
        }
    }

    public static String b(c cVar) {
        File fileA = a(cVar);
        if (fileA != null) {
            return fileA.getAbsolutePath();
        }
        return null;
    }

    public final boolean b() {
        return a(this.b.a());
    }

    private boolean a(com.tkay.expressad.foundation.g.c.a aVar) {
        String strB;
        com.tkay.expressad.foundation.g.c.a aVarC = aVar.c();
        if (aVarC == null) {
            strB = aVar.b();
        } else {
            File fileA = a(aVarC.a());
            if (fileA == null) {
                return false;
            }
            strB = fileA.getAbsolutePath() + File.separator + aVar.b();
        }
        File file = new File(strB);
        if (!(!file.exists() ? file.mkdirs() : true)) {
            return false;
        }
        this.c.add(new a(aVar.a(), file));
        List<com.tkay.expressad.foundation.g.c.a> listD = aVar.d();
        if (listD != null) {
            Iterator<com.tkay.expressad.foundation.g.c.a> it = listD.iterator();
            while (it.hasNext()) {
                if (!a(it.next())) {
                    return false;
                }
            }
        }
        return true;
    }

    private static final class a {
        public c a;
        public File b;

        public a(c cVar, File file) {
            this.a = cVar;
            this.b = file;
        }
    }
}
