package com.tkay.core.common.k;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.h.a.c;
import com.tkay.core.common.h.k;
import com.tkay.core.common.l.p;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes3.dex */
public class b {
    private static volatile b b;
    private Context h;
    private File i;
    private AtomicInteger j;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f6211a = "Agent";
    private int c = 5;
    private int d = 10;
    private long e = 1800000;
    private String f = "";
    private String g = "";
    private boolean k = false;
    private String l = "";
    private k m = new k() { // from class: com.tkay.core.common.k.b.1
        @Override // com.tkay.core.common.h.k
        public final void onLoadStart(int i) {
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadFinish(int i, Object obj) {
            try {
                b.this.a(((Integer) obj).intValue());
                b.this.k = false;
                p.a(b.this.h, f.o, "LOG_SEND_TIME", System.currentTimeMillis());
            } catch (Throwable unused) {
                b.this.k = false;
            }
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadError(int i, String str, AdError adError) {
            b.this.k = false;
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadCanceled(int i) {
            b.this.k = false;
        }
    };
    private c.a n = new c.a() { // from class: com.tkay.core.common.k.b.2
        @Override // com.tkay.core.common.h.a.c.a
        public final void a(Object obj) {
            if (obj instanceof com.tkay.core.common.h.a.a) {
                b.this.a(((com.tkay.core.common.h.a.a) obj).b());
                b.this.k = false;
                p.a(b.this.h, f.o, "LOG_SEND_TIME", System.currentTimeMillis());
            }
        }

        @Override // com.tkay.core.common.h.a.c.a
        public final void a(Throwable th) {
            b.this.k = false;
        }
    };
    private Object o = new Object();

    public static b a() {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b();
                }
            }
        }
        return b;
    }

    private b() {
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00fb A[Catch: all -> 0x0143, Error -> 0x0145, OutOfMemoryError | StackOverflowError -> 0x014f, OutOfMemoryError | StackOverflowError -> 0x014f, Exception -> 0x0168, TryCatch #3 {OutOfMemoryError | StackOverflowError -> 0x014f, blocks: (B:10:0x001c, B:12:0x0080, B:14:0x0093, B:15:0x009c, B:17:0x00a4, B:25:0x00e0, B:25:0x00e0, B:37:0x00f7, B:37:0x00f7, B:39:0x00fb, B:39:0x00fb, B:40:0x0102, B:40:0x0102, B:42:0x0114, B:42:0x0114, B:44:0x011b, B:44:0x011b, B:46:0x012b, B:46:0x012b, B:48:0x0132, B:48:0x0132, B:47:0x0130, B:47:0x0130, B:43:0x0119, B:43:0x0119, B:33:0x00ee, B:33:0x00ee, B:34:0x00f1, B:34:0x00f1, B:36:0x00f4, B:36:0x00f4), top: B:83:0x001c, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0114 A[Catch: all -> 0x0143, Error -> 0x0145, OutOfMemoryError | StackOverflowError -> 0x014f, OutOfMemoryError | StackOverflowError -> 0x014f, Exception -> 0x0168, TryCatch #3 {OutOfMemoryError | StackOverflowError -> 0x014f, blocks: (B:10:0x001c, B:12:0x0080, B:14:0x0093, B:15:0x009c, B:17:0x00a4, B:25:0x00e0, B:25:0x00e0, B:37:0x00f7, B:37:0x00f7, B:39:0x00fb, B:39:0x00fb, B:40:0x0102, B:40:0x0102, B:42:0x0114, B:42:0x0114, B:44:0x011b, B:44:0x011b, B:46:0x012b, B:46:0x012b, B:48:0x0132, B:48:0x0132, B:47:0x0130, B:47:0x0130, B:43:0x0119, B:43:0x0119, B:33:0x00ee, B:33:0x00ee, B:34:0x00f1, B:34:0x00f1, B:36:0x00f4, B:36:0x00f4), top: B:83:0x001c, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:43:0x0119 A[Catch: all -> 0x0143, Error -> 0x0145, OutOfMemoryError | StackOverflowError -> 0x014f, OutOfMemoryError | StackOverflowError -> 0x014f, Exception -> 0x0168, TryCatch #3 {OutOfMemoryError | StackOverflowError -> 0x014f, blocks: (B:10:0x001c, B:12:0x0080, B:14:0x0093, B:15:0x009c, B:17:0x00a4, B:25:0x00e0, B:25:0x00e0, B:37:0x00f7, B:37:0x00f7, B:39:0x00fb, B:39:0x00fb, B:40:0x0102, B:40:0x0102, B:42:0x0114, B:42:0x0114, B:44:0x011b, B:44:0x011b, B:46:0x012b, B:46:0x012b, B:48:0x0132, B:48:0x0132, B:47:0x0130, B:47:0x0130, B:43:0x0119, B:43:0x0119, B:33:0x00ee, B:33:0x00ee, B:34:0x00f1, B:34:0x00f1, B:36:0x00f4, B:36:0x00f4), top: B:83:0x001c, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x012b A[Catch: all -> 0x0143, Error -> 0x0145, OutOfMemoryError | StackOverflowError -> 0x014f, OutOfMemoryError | StackOverflowError -> 0x014f, Exception -> 0x0168, TryCatch #3 {OutOfMemoryError | StackOverflowError -> 0x014f, blocks: (B:10:0x001c, B:12:0x0080, B:14:0x0093, B:15:0x009c, B:17:0x00a4, B:25:0x00e0, B:25:0x00e0, B:37:0x00f7, B:37:0x00f7, B:39:0x00fb, B:39:0x00fb, B:40:0x0102, B:40:0x0102, B:42:0x0114, B:42:0x0114, B:44:0x011b, B:44:0x011b, B:46:0x012b, B:46:0x012b, B:48:0x0132, B:48:0x0132, B:47:0x0130, B:47:0x0130, B:43:0x0119, B:43:0x0119, B:33:0x00ee, B:33:0x00ee, B:34:0x00f1, B:34:0x00f1, B:36:0x00f4, B:36:0x00f4), top: B:83:0x001c, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0130 A[Catch: all -> 0x0143, Error -> 0x0145, OutOfMemoryError | StackOverflowError -> 0x014f, OutOfMemoryError | StackOverflowError -> 0x014f, Exception -> 0x0168, TryCatch #3 {OutOfMemoryError | StackOverflowError -> 0x014f, blocks: (B:10:0x001c, B:12:0x0080, B:14:0x0093, B:15:0x009c, B:17:0x00a4, B:25:0x00e0, B:25:0x00e0, B:37:0x00f7, B:37:0x00f7, B:39:0x00fb, B:39:0x00fb, B:40:0x0102, B:40:0x0102, B:42:0x0114, B:42:0x0114, B:44:0x011b, B:44:0x011b, B:46:0x012b, B:46:0x012b, B:48:0x0132, B:48:0x0132, B:47:0x0130, B:47:0x0130, B:43:0x0119, B:43:0x0119, B:33:0x00ee, B:33:0x00ee, B:34:0x00f1, B:34:0x00f1, B:36:0x00f4, B:36:0x00f4), top: B:83:0x001c, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x013b A[Catch: all -> 0x0176, TryCatch #4 {, blocks: (B:4:0x0003, B:8:0x000b, B:49:0x0137, B:51:0x013b, B:52:0x0140, B:70:0x0172, B:63:0x015c, B:65:0x0160, B:66:0x0167, B:55:0x0145, B:57:0x0149, B:60:0x0152, B:62:0x0156, B:67:0x0168, B:69:0x016c, B:72:0x0174, B:10:0x001c, B:12:0x0080, B:14:0x0093, B:15:0x009c, B:17:0x00a4, B:25:0x00e0, B:37:0x00f7, B:39:0x00fb, B:40:0x0102, B:42:0x0114, B:44:0x011b, B:46:0x012b, B:48:0x0132, B:47:0x0130, B:43:0x0119, B:33:0x00ee, B:34:0x00f1, B:36:0x00f4, B:59:0x014f), top: B:84:0x0003, inners: #1, #7, #9 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(android.content.Context r8) {
        /*
            Method dump skipped, instruction units count: 377
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.k.b.a(android.content.Context):void");
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x006c, code lost:
    
        if (r0 == null) goto L35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0075, code lost:
    
        if (r0 == null) goto L50;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final synchronized void a(com.tkay.core.common.f.g r5, boolean r6) {
        /*
            r4 = this;
            monitor-enter(r4)
            java.io.File r0 = r4.i     // Catch: java.lang.Throwable -> L86
            if (r0 == 0) goto L9
            java.util.concurrent.atomic.AtomicInteger r0 = r4.j     // Catch: java.lang.Throwable -> L86
            if (r0 != 0) goto L14
        L9:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L86
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L86
            r4.a(r0)     // Catch: java.lang.Throwable -> L86
        L14:
            android.content.Context r0 = r4.h     // Catch: java.lang.Throwable -> L86
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.String r1 = r4.l     // Catch: java.lang.Throwable -> L86
            com.tkay.core.c.a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L86
            int r1 = r0.ad()     // Catch: java.lang.Throwable -> L86
            if (r1 == 0) goto L2b
            int r1 = r0.ad()     // Catch: java.lang.Throwable -> L86
            goto L2d
        L2b:
            int r1 = r4.c     // Catch: java.lang.Throwable -> L86
        L2d:
            r4.c = r1     // Catch: java.lang.Throwable -> L86
            int r1 = r1 * 2
            r4.d = r1     // Catch: java.lang.Throwable -> L86
            long r0 = r0.af()     // Catch: java.lang.Throwable -> L86
            r4.e = r0     // Catch: java.lang.Throwable -> L86
            r0 = 0
            org.json.JSONObject r5 = r5.a()     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            java.io.FileWriter r1 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            java.io.File r2 = r4.i     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            r3 = 1
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            java.lang.String r5 = "\n"
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r1.flush()     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r1.close()     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            java.util.concurrent.atomic.AtomicInteger r5 = r4.j     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r5.incrementAndGet()     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r1.close()     // Catch: java.io.IOException -> L81 java.lang.Throwable -> L86
            goto L81
        L61:
            r5 = move-exception
            r0 = r1
            goto L78
        L64:
            r0 = r1
            goto L6c
        L66:
            r0 = r1
            goto L72
        L68:
            r0 = r1
            goto L7e
        L6a:
            r5 = move-exception
            goto L78
        L6c:
            if (r0 == 0) goto L81
        L6e:
            r0.close()     // Catch: java.io.IOException -> L81 java.lang.Throwable -> L86
            goto L81
        L72:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L81
            goto L6e
        L78:
            if (r0 == 0) goto L7d
            r0.close()     // Catch: java.io.IOException -> L7d java.lang.Throwable -> L86
        L7d:
            throw r5     // Catch: java.lang.Throwable -> L86
        L7e:
            if (r0 == 0) goto L81
            goto L6e
        L81:
            r4.a(r6)     // Catch: java.lang.Throwable -> L86
            monitor-exit(r4)
            return
        L86:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.k.b.a(com.tkay.core.common.f.g, boolean):void");
    }

    private synchronized void a(boolean z) {
        String line;
        if (this.h == null) {
            return;
        }
        if (this.k || (!z && (this.j == null || this.j.get() < this.c))) {
            return;
        }
        this.k = true;
        BufferedReader bufferedReader = null;
        try {
            try {
                BufferedReader bufferedReader2 = new BufferedReader(new FileReader(this.i));
                try {
                    ArrayList arrayList = new ArrayList();
                    for (int i = 0; i < this.d && (line = bufferedReader2.readLine()) != null; i++) {
                        arrayList.add(line);
                    }
                    com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
                    if (aVarB == null) {
                        new com.tkay.core.common.h.b(this.h, 0, arrayList).a(0, this.m);
                    } else if (aVarB.u() != 1) {
                        new com.tkay.core.common.h.b(this.h, aVarB.u(), arrayList).a(0, this.m);
                    } else {
                        com.tkay.core.common.h.a.a aVar = new com.tkay.core.common.h.a.a(arrayList);
                        aVar.a(1, aVarB.t());
                        aVar.a(this.n);
                    }
                    try {
                        bufferedReader2.close();
                    } catch (Exception unused) {
                    }
                } catch (Exception unused2) {
                    bufferedReader = bufferedReader2;
                    this.k = false;
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (Exception unused3) {
                        }
                    }
                } catch (OutOfMemoryError | StackOverflowError unused4) {
                    bufferedReader = bufferedReader2;
                    this.k = false;
                    System.gc();
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (Exception unused5) {
                        }
                    }
                } catch (Throwable unused6) {
                    bufferedReader = bufferedReader2;
                    this.k = false;
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (Exception unused7) {
                        }
                    }
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    try {
                        bufferedReader.close();
                    } catch (Exception unused8) {
                    }
                }
                throw th;
            }
        } catch (Exception unused9) {
        } catch (OutOfMemoryError | StackOverflowError unused10) {
        } catch (Throwable unused11) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(int i) {
        BufferedReader bufferedReader = null;
        try {
            File file = new File(this.g);
            if (!file.exists()) {
                file.createNewFile();
            }
            BufferedReader bufferedReader2 = new BufferedReader(new FileReader(this.i));
            try {
                FileWriter fileWriter = new FileWriter(file);
                int i2 = 0;
                int i3 = 0;
                while (true) {
                    String line = bufferedReader2.readLine();
                    if (line == null) {
                        break;
                    }
                    i3++;
                    if (i3 > i) {
                        fileWriter.append((CharSequence) line);
                        fileWriter.append((CharSequence) "\n");
                    }
                }
                fileWriter.flush();
                fileWriter.close();
                bufferedReader2.close();
                AtomicInteger atomicInteger = this.j;
                if (this.j.get() - i >= 0) {
                    i2 = this.j.get() - i;
                }
                atomicInteger.set(i2);
                this.i.delete();
                file.renameTo(this.i);
                try {
                    bufferedReader2.close();
                } catch (IOException unused) {
                }
            } catch (Error unused2) {
                bufferedReader = bufferedReader2;
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (IOException unused3) {
                    }
                }
            } catch (Exception unused4) {
                bufferedReader = bufferedReader2;
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (IOException unused5) {
                    }
                }
            } catch (OutOfMemoryError | StackOverflowError unused6) {
                bufferedReader = bufferedReader2;
                try {
                    System.gc();
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (IOException unused7) {
                        }
                    }
                } catch (Throwable th) {
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (IOException unused8) {
                        }
                    }
                    throw th;
                }
            } catch (Throwable unused9) {
                bufferedReader = bufferedReader2;
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (IOException unused10) {
                    }
                }
            }
        } catch (Exception unused11) {
        } catch (OutOfMemoryError | StackOverflowError unused12) {
        } catch (Error unused13) {
        } catch (Throwable unused14) {
        }
    }

    public final void b() {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.k.b.3
            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Removed duplicated region for block: B:51:0x0123 A[PHI: r0
              0x0123: PHI (r0v24 ??) = (r0v57 ??), (r0v58 ??), (r0v59 ??) binds: [B:56:0x0137, B:50:0x0121, B:54:0x0131] A[DONT_GENERATE, DONT_INLINE]] */
            /* JADX WARN: Type inference failed for: r0v18 */
            /* JADX WARN: Type inference failed for: r0v19 */
            /* JADX WARN: Type inference failed for: r0v22 */
            /* JADX WARN: Type inference failed for: r0v23 */
            /* JADX WARN: Type inference failed for: r0v24, types: [java.io.BufferedReader] */
            /* JADX WARN: Type inference failed for: r0v25 */
            /* JADX WARN: Type inference failed for: r0v26 */
            /* JADX WARN: Type inference failed for: r0v28 */
            /* JADX WARN: Type inference failed for: r0v29 */
            /* JADX WARN: Type inference failed for: r0v30 */
            /* JADX WARN: Type inference failed for: r0v46 */
            /* JADX WARN: Type inference failed for: r0v47 */
            /* JADX WARN: Type inference failed for: r0v48 */
            /* JADX WARN: Type inference failed for: r0v52 */
            /* JADX WARN: Type inference failed for: r0v53 */
            /* JADX WARN: Type inference failed for: r0v54 */
            /* JADX WARN: Type inference failed for: r0v55 */
            /* JADX WARN: Type inference failed for: r0v56 */
            /* JADX WARN: Type inference failed for: r0v57 */
            /* JADX WARN: Type inference failed for: r0v58 */
            /* JADX WARN: Type inference failed for: r0v59 */
            /* JADX WARN: Type inference failed for: r3v2 */
            /* JADX WARN: Type inference failed for: r3v3, types: [java.io.BufferedReader] */
            /* JADX WARN: Type inference failed for: r3v4, types: [java.io.BufferedReader] */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void run() throws java.io.IOException {
                /*
                    Method dump skipped, instruction units count: 325
                    To view this dump add '--comments-level debug' option
                */
                throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.k.b.AnonymousClass3.run():void");
            }
        });
    }
}
