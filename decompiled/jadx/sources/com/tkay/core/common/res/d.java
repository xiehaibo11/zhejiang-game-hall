package com.tkay.core.common.res;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.j;
import com.tkay.core.common.res.a;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6304a = "about:blank";
    private static final String e = "tkay_internal_resouce";
    private static final String f = "tkay_custom_resouce";
    private static final String g = "tkay_internal_extra_resource";
    private static final String h = "tkay_internal_video_resource";
    private static final String i = "tkay_internal_html_resouce";
    private static volatile d j;
    private Context k;
    private File l;
    private final String d = getClass().getSimpleName();
    ConcurrentHashMap<Integer, a> b = new ConcurrentHashMap<>();
    final long c = 172800000;

    private d(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.k = applicationContext;
        this.l = j.a(applicationContext);
    }

    public static d a(Context context) {
        if (j == null) {
            synchronized (d.class) {
                if (j == null) {
                    j = new d(context);
                }
            }
        }
        return j;
    }

    public final String a() {
        return this.l.getAbsolutePath();
    }

    public final String a(String str, i iVar, h hVar) {
        File file = new File(this.l, i);
        if (!file.exists()) {
            file.mkdirs();
        }
        File file2 = new File(file, iVar.d + "_" + hVar.p() + ".html");
        FileOutputStream fileOutputStream = null;
        try {
            byte[] bytes = str.getBytes("utf-8");
            FileOutputStream fileOutputStream2 = new FileOutputStream(file2);
            try {
                fileOutputStream2.write(bytes, 0, bytes.length);
                String string = file2.toURL().toString();
                try {
                    fileOutputStream2.close();
                    return string;
                } catch (Throwable unused) {
                    return string;
                }
            } catch (Throwable unused2) {
                fileOutputStream = fileOutputStream2;
                if (fileOutputStream != null) {
                    try {
                        fileOutputStream.close();
                    } catch (Throwable unused3) {
                    }
                }
                return "";
            }
        } catch (Throwable unused4) {
        }
    }

    public final void a(i iVar, h hVar) {
        try {
            File file = new File(new File(this.l, i), iVar.d + "_" + hVar.p() + ".html");
            if (file.exists()) {
                file.delete();
            }
        } catch (Throwable unused) {
        }
    }

    public final void b() {
        File[] fileArrListFiles;
        try {
            File file = new File(this.l, i);
            if (!file.exists() || (fileArrListFiles = file.listFiles()) == null || fileArrListFiles.length <= 0) {
                return;
            }
            for (File file2 : fileArrListFiles) {
                try {
                    if (file2.isFile() && System.currentTimeMillis() - file2.lastModified() > 86400000) {
                        file2.delete();
                    }
                } catch (Throwable unused) {
                }
            }
        } catch (Throwable unused2) {
        }
    }

    public final void c() {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.res.d.1
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    long jD = m.a().d(1);
                    String strA = d.a(m.a().f()).a(1);
                    long jA = j.a(strA);
                    if (jA <= 0 || jA <= jD * 1.5d) {
                        return;
                    }
                    File[] fileArrListFiles = new File(strA).listFiles();
                    ArrayList arrayList = new ArrayList();
                    if (fileArrListFiles != null) {
                        Collections.addAll(arrayList, fileArrListFiles);
                    }
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    if (arrayList.size() > 0) {
                        for (int i2 = 0; i2 < arrayList.size(); i2++) {
                            File file = (File) arrayList.get(i2);
                            if (jCurrentTimeMillis - file.lastModified() > 172800000) {
                                try {
                                    file.delete();
                                } catch (Throwable unused) {
                                }
                            }
                        }
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    public final File b(i iVar, h hVar) {
        File file = new File(new File(this.l, i), iVar.d + "_" + hVar.p() + ".html");
        if (file.exists()) {
            return file;
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:59:0x0083 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean a(int r6, java.lang.String r7, java.io.InputStream r8) throws java.lang.Throwable {
        /*
            r5 = this;
            r0 = 0
            if (r7 == 0) goto L87
            if (r8 != 0) goto L7
            goto L87
        L7:
            java.lang.String r1 = r5.a(r6)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L12
            return r0
        L12:
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            boolean r1 = r2.exists()
            if (r1 != 0) goto L20
            r2.mkdirs()
        L20:
            com.tkay.core.common.res.a r6 = r5.a(r6, r2)
            if (r6 == 0) goto L87
            r1 = 0
            com.tkay.core.common.res.a$c r2 = r6.a(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r2 != 0) goto L52
            com.tkay.core.common.res.a$a r6 = r6.b(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r6 == 0) goto L59
            java.io.OutputStream r1 = r6.a(r0)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            r7 = 2048(0x800, float:2.87E-42)
            byte[] r7 = new byte[r7]     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
        L3b:
            int r2 = r8.read(r7)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            r3 = -1
            if (r2 == r3) goto L46
            r1.write(r7, r0, r2)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            goto L3b
        L46:
            r6.a()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            r1.close()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            goto L59
        L4d:
            r7 = move-exception
            r4 = r1
            r1 = r6
            r6 = r4
            goto L64
        L52:
            java.io.InputStream r6 = r2.a()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            r6.close()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
        L59:
            r0 = 1
            if (r1 == 0) goto L87
            r1.close()     // Catch: java.io.IOException -> L87
            goto L87
        L60:
            r6 = move-exception
            goto L81
        L62:
            r7 = move-exception
            r6 = r1
        L64:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            java.lang.String r2 = "writeToDiskLruCache - "
            r8.<init>(r2)     // Catch: java.lang.Throwable -> L7e
            r8.append(r7)     // Catch: java.lang.Throwable -> L7e
            if (r1 == 0) goto L78
            r1.b()     // Catch: java.lang.Exception -> L74 java.lang.Throwable -> L7e
            goto L78
        L74:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L7e
        L78:
            if (r6 == 0) goto L87
            r6.close()     // Catch: java.io.IOException -> L87
            goto L87
        L7e:
            r7 = move-exception
            r1 = r6
            r6 = r7
        L81:
            if (r1 == 0) goto L86
            r1.close()     // Catch: java.io.IOException -> L86
        L86:
            throw r6
        L87:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.res.d.a(int, java.lang.String, java.io.InputStream):boolean");
    }

    public final FileInputStream a(int i2, String str) {
        InputStream inputStreamA;
        if (i2 != 4) {
            String strA = a(i2);
            if (TextUtils.isEmpty(strA)) {
                return null;
            }
            File file = new File(strA);
            if (!file.exists()) {
                file.mkdirs();
            }
            a aVarA = a(i2, file);
            if (aVarA != null) {
                try {
                    a.c cVarA = aVarA.a(str);
                    if (cVarA != null && (inputStreamA = cVarA.a()) != null) {
                        return (FileInputStream) inputStreamA;
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            return null;
        }
        try {
            return new FileInputStream(new File(b(4, str)));
        } catch (Throwable unused) {
            return null;
        }
    }

    private synchronized a a(int i2, File file) {
        a aVarA;
        aVarA = this.b.get(Integer.valueOf(i2));
        if (aVarA == null) {
            try {
                aVarA = a.a(file, m.a().d(i2));
                this.b.put(Integer.valueOf(i2), aVarA);
            } catch (Throwable th) {
                if (m.a().z()) {
                    Log.e(this.d, "Create DiskCache error.");
                    th.printStackTrace();
                }
            }
        }
        return aVarA;
    }

    public final String a(int i2) {
        return new File(this.l, i2 != 1 ? i2 != 3 ? i2 != 4 ? f : h : g : e).getAbsolutePath();
    }

    private boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return new File(a(1) + File.separator + str + ".0").exists();
    }

    public final String b(int i2, String str) {
        if (i2 != 4) {
            return a(i2) + File.separator + str + ".0";
        }
        return a(i2) + File.separator + str;
    }
}
