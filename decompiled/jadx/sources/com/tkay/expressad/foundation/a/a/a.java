package com.tkay.expressad.foundation.a.a;

import android.content.Context;
import android.content.SharedPreferences;
import com.tkay.expressad.foundation.b.b;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6818a = a.class.getSimpleName();
    private static volatile a c;
    SharedPreferences b;

    private a() {
    }

    public static a a() {
        if (c == null) {
            synchronized (a.class) {
                if (c == null) {
                    c = new a();
                }
            }
        }
        return c;
    }

    public final void a(String str, String str2) {
        try {
            Context contextD = b.b().d();
            if (contextD == null) {
                return;
            }
            if (this.b == null && contextD != null) {
                this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
            }
            SharedPreferences.Editor editorEdit = this.b.edit();
            editorEdit.putString(str, str2);
            editorEdit.apply();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void a(String str, int i) {
        try {
            Context contextD = b.b().d();
            if (contextD == null) {
                return;
            }
            if (this.b == null && contextD != null) {
                this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
            }
            SharedPreferences.Editor editorEdit = this.b.edit();
            editorEdit.putInt(str, i);
            editorEdit.apply();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private int c(String str) {
        try {
            Context contextD = b.b().d();
            if (contextD == null) {
                return 0;
            }
            if (this.b == null && contextD != null) {
                this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
            }
            return this.b.getInt(str, 0);
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private void a(String str, long j) {
        try {
            Context contextD = b.b().d();
            if (contextD == null) {
                return;
            }
            if (this.b == null && contextD != null) {
                this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
            }
            SharedPreferences.Editor editorEdit = this.b.edit();
            editorEdit.putLong(str, j);
            editorEdit.apply();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private Long d(String str) {
        try {
            Context contextD = b.b().d();
            if (contextD == null) {
                return 0L;
            }
            if (this.b == null && contextD != null) {
                this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
            }
            return Long.valueOf(this.b.getLong(str, 0L));
        } catch (Exception e) {
            e.printStackTrace();
            return 0L;
        }
    }

    private int b(String str, int i) {
        try {
            Context contextD = b.b().d();
            if (contextD == null) {
                return i;
            }
            if (this.b == null) {
                this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
            }
            return this.b.getInt(str, i);
        } catch (Exception e) {
            e.printStackTrace();
            return i;
        }
    }

    public final String a(String str) {
        try {
            Context contextD = b.b().d();
            if (contextD == null) {
                return null;
            }
            if (this.b == null && contextD != null) {
                this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
            }
            return this.b.getString(str, "");
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private List<String> b() {
        ArrayList arrayList = new ArrayList();
        Context contextD = b.b().d();
        if (contextD == null) {
            return null;
        }
        if (this.b == null && contextD != null) {
            this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
        }
        Iterator<Map.Entry<String, ?>> it = this.b.getAll().entrySet().iterator();
        while (it.hasNext()) {
            arrayList.add(it.next().getKey());
        }
        return arrayList;
    }

    public final void b(String str) {
        Context contextD = b.b().d();
        if (contextD == null) {
            return;
        }
        if (this.b == null && contextD != null) {
            this.b = contextD.getSharedPreferences(com.tkay.expressad.foundation.g.a.o, 0);
        }
        this.b.edit().remove(str).apply();
    }
}
