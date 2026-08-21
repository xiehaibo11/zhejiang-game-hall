package com.tencent.bugly.proguard;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public final class u {
    public static final long a = System.currentTimeMillis();
    private static u b;
    private Context c;
    private SharedPreferences f;
    private Map<Integer, Map<String, t>> e = new HashMap();
    private String d = aa.b().d;

    private u(Context context) {
        this.c = context;
        this.f = context.getSharedPreferences("crashrecord", 0);
    }

    public static synchronized u a(Context context) {
        if (b == null) {
            b = new u(context);
        }
        return b;
    }

    public static synchronized u a() {
        return b;
    }

    private synchronized boolean c(int i) {
        try {
            List<t> listD = d(i);
            if (listD == null) {
                return false;
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = new ArrayList();
            for (t tVar : listD) {
                if (tVar.b != null && tVar.b.equalsIgnoreCase(this.d) && tVar.d > 0) {
                    arrayList.add(tVar);
                }
                if (tVar.c + 86400000 < jCurrentTimeMillis) {
                    arrayList2.add(tVar);
                }
            }
            Collections.sort(arrayList);
            if (arrayList.size() >= 2) {
                if (arrayList.size() <= 0 || ((t) arrayList.get(arrayList.size() - 1)).c + 86400000 >= jCurrentTimeMillis) {
                    return true;
                }
                listD.clear();
                a(i, listD);
                return false;
            }
            listD.removeAll(arrayList2);
            a(i, listD);
            return false;
        } catch (Exception unused) {
            al.e("isFrequentCrash failed", new Object[0]);
            return false;
        }
    }

    public final void a(final int i) {
        ak.a().a(new Runnable() {
            final int a = 1004;

            @Override
            public final void run() {
                t tVar;
                try {
                    if (TextUtils.isEmpty(u.this.d)) {
                        return;
                    }
                    List<t> listD = u.this.d(this.a);
                    if (listD == null) {
                        listD = new ArrayList();
                    }
                    if (u.this.e.get(Integer.valueOf(this.a)) == null) {
                        u.this.e.put(Integer.valueOf(this.a), new HashMap());
                    }
                    if (((Map) u.this.e.get(Integer.valueOf(this.a))).get(u.this.d) != null) {
                        tVar = (t) ((Map) u.this.e.get(Integer.valueOf(this.a))).get(u.this.d);
                        tVar.d = i;
                    } else {
                        tVar = new t();
                        tVar.a = this.a;
                        tVar.g = u.a;
                        tVar.b = u.this.d;
                        tVar.f = aa.b().o;
                        tVar.e = aa.b().h;
                        tVar.c = System.currentTimeMillis();
                        tVar.d = i;
                        ((Map) u.this.e.get(Integer.valueOf(this.a))).put(u.this.d, tVar);
                    }
                    ArrayList arrayList = new ArrayList();
                    boolean z = false;
                    for (t tVar2 : listD) {
                        if (u.a(tVar2, tVar)) {
                            z = true;
                            tVar2.d = tVar.d;
                        }
                        if (u.b(tVar2, tVar)) {
                            arrayList.add(tVar2);
                        }
                    }
                    listD.removeAll(arrayList);
                    if (!z) {
                        listD.add(tVar);
                    }
                    u.this.a(this.a, listD);
                } catch (Exception unused) {
                    al.e("saveCrashRecord failed", new Object[0]);
                }
            }
        });
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:18:0x003e A[Catch: all -> 0x0054, Exception -> 0x0056, PHI: r6
      0x003e: PHI (r6v10 java.io.ObjectInputStream) = (r6v9 java.io.ObjectInputStream), (r6v11 java.io.ObjectInputStream) binds: [B:17:0x003c, B:22:0x004a] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #6 {Exception -> 0x0056, blocks: (B:4:0x0003, B:10:0x002c, B:18:0x003e, B:26:0x0050, B:27:0x0053), top: B:37:0x0003, outer: #1 }] */
    /* JADX WARN: Type inference failed for: r6v4, types: [boolean] */
    /* JADX WARN: Type inference failed for: r6v5, types: [java.io.ObjectInputStream] */
    /* JADX WARN: Type inference failed for: r6v6 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized <T extends List<?>> T d(int i) {
        ObjectInputStream objectInputStream;
        try {
            File file = new File(this.c.getDir("crashrecord", 0), String.valueOf(i));
            ?? Exists = file.exists();
            try {
                if (Exists == 0) {
                    return null;
                }
                try {
                    objectInputStream = new ObjectInputStream(new FileInputStream(file));
                    try {
                        T t = (T) objectInputStream.readObject();
                        objectInputStream.close();
                        return t;
                    } catch (IOException unused) {
                        al.a("open record file error", new Object[0]);
                        if (objectInputStream != null) {
                            objectInputStream.close();
                        }
                        return null;
                    } catch (ClassNotFoundException unused2) {
                        al.a("get object error", new Object[0]);
                        if (objectInputStream != null) {
                        }
                        return null;
                    }
                } catch (IOException unused3) {
                    objectInputStream = null;
                } catch (ClassNotFoundException unused4) {
                    objectInputStream = null;
                } catch (Throwable th) {
                    th = th;
                    Exists = 0;
                    if (Exists != 0) {
                        Exists.close();
                    }
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception unused5) {
            al.e("readCrashRecord error", new Object[0]);
        }
    }

    private synchronized <T extends List<?>> void a(int i, T t) {
        ObjectOutputStream objectOutputStream;
        if (t == null) {
            return;
        }
        try {
            File file = new File(this.c.getDir("crashrecord", 0), String.valueOf(i));
            ObjectOutputStream objectOutputStream2 = null;
            try {
                try {
                    objectOutputStream = new ObjectOutputStream(new FileOutputStream(file));
                } catch (Throwable th) {
                    th = th;
                }
            } catch (IOException e) {
                e = e;
            }
            try {
                objectOutputStream.writeObject(t);
                objectOutputStream.close();
            } catch (IOException e2) {
                e = e2;
                objectOutputStream2 = objectOutputStream;
                e.printStackTrace();
                al.a("open record file error", new Object[0]);
                if (objectOutputStream2 != null) {
                    objectOutputStream2.close();
                }
            } catch (Throwable th2) {
                th = th2;
                objectOutputStream2 = objectOutputStream;
                if (objectOutputStream2 != null) {
                    objectOutputStream2.close();
                }
                throw th;
            }
        } catch (Exception unused) {
            al.e("writeCrashRecord error", new Object[0]);
        }
    }

    public final synchronized boolean b(final int i) {
        boolean z;
        z = true;
        try {
            z = this.f.getBoolean(i + "_" + this.d, true);
            ak.a().a(new Runnable() {
                @Override
                public final void run() {
                    boolean zC = u.this.c(i);
                    u.this.f.edit().putBoolean(i + "_" + u.this.d, !zC).commit();
                }
            });
        } catch (Exception unused) {
            al.e("canInit error", new Object[0]);
            return z;
        }
        return z;
    }

    static boolean a(t tVar, t tVar2) {
        return tVar.g == tVar2.g && tVar.b != null && tVar.b.equalsIgnoreCase(tVar2.b);
    }

    static boolean b(t tVar, t tVar2) {
        if (tVar.e == null || tVar.e.equalsIgnoreCase(tVar2.e)) {
            return !(tVar.f == null || tVar.f.equalsIgnoreCase(tVar2.f)) || tVar.d <= 0;
        }
        return true;
    }
}
