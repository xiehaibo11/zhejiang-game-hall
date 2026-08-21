package com.tkay.core.common.k;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.g;
import com.tkay.core.common.h.a.c;
import com.tkay.core.common.h.k;
import com.tkay.core.common.l.p;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.LineNumberReader;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicInteger;

public class b {
    private static volatile b b;
    private Context h;
    private File i;
    private AtomicInteger j;
    private final String a = "Agent";
    private int c = 5;
    private int d = 10;
    private long e = 1800000;
    private String f = "";
    private String g = "";
    private boolean k = false;
    private String l = "";
    private k m = new k() {
        @Override
        public final void onLoadStart(int i) {
        }

        @Override
        public final void onLoadFinish(int i, Object obj) {
            try {
                b.this.a(((Integer) obj).intValue());
                b.this.k = false;
                p.a(b.this.h, f.o, "LOG_SEND_TIME", System.currentTimeMillis());
            } catch (Throwable unused) {
                b.this.k = false;
            }
        }

        @Override
        public final void onLoadError(int i, String str, AdError adError) {
            b.this.k = false;
        }

        @Override
        public final void onLoadCanceled(int i) {
            b.this.k = false;
        }
    };
    private c.a n = new c.a() {
        @Override
        public final void a(Object obj) {
            if (obj instanceof com.tkay.core.common.h.a.a) {
                b.this.a(((com.tkay.core.common.h.a.a) obj).b());
                b.this.k = false;
                p.a(b.this.h, f.o, "LOG_SEND_TIME", System.currentTimeMillis());
            }
        }

        @Override
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
    */
    public final void a(Context context) {
        AtomicInteger atomicInteger;
        LineNumberReader lineNumberReader;
        Throwable th;
        synchronized (this.o) {
            if (this.h == null && context != null) {
                this.l = m.a().o();
                this.h = context.getApplicationContext();
                try {
                    try {
                        try {
                            try {
                                this.f = this.h.getApplicationContext().getFilesDir().getAbsolutePath() + File.separator + "log" + File.separator + "tkay_agent_log";
                                this.g = this.h.getApplicationContext().getFilesDir().getAbsolutePath() + File.separator + "log" + File.separator + "tkay_temp_log";
                                if (this.i == null) {
                                    File file = new File(this.f);
                                    this.i = file;
                                    if (!file.getParentFile().exists()) {
                                        this.i.getParentFile().mkdirs();
                                    }
                                    if (!this.i.exists()) {
                                        this.i.createNewFile();
                                    }
                                }
                                LineNumberReader lineNumberReader2 = null;
                                try {
                                    try {
                                        lineNumberReader = new LineNumberReader(new FileReader(this.i));
                                    } catch (IOException unused) {
                                    }
                                    try {
                                        lineNumberReader.skip(Long.MAX_VALUE);
                                        int lineNumber = lineNumberReader.getLineNumber();
                                        if (this.j == null) {
                                            this.j = new AtomicInteger(lineNumber);
                                        }
                                        lineNumberReader.close();
                                        new StringBuilder("init file log count:").append(this.j.get());
                                        lineNumberReader.close();
                                    } catch (Exception unused2) {
                                        lineNumberReader2 = lineNumberReader;
                                        if (lineNumberReader2 != null) {
                                            lineNumberReader2.close();
                                        }
                                        if (this.j == null) {
                                        }
                                        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.h).b(this.l);
                                        if (aVarB.ad() == 0) {
                                        }
                                        this.c = iAd;
                                        this.d = iAd * 2;
                                        this.e = aVarB.af() == 0 ? aVarB.af() : this.e;
                                        b();
                                        if (this.j == null) {
                                        }
                                    } catch (Throwable th2) {
                                        th = th2;
                                        if (lineNumberReader != null) {
                                            try {
                                                lineNumberReader.close();
                                            } catch (IOException unused3) {
                                            }
                                        }
                                        throw th;
                                    }
                                } catch (Exception unused4) {
                                } catch (Throwable th3) {
                                    lineNumberReader = null;
                                    th = th3;
                                }
                                if (this.j == null) {
                                    this.j = new AtomicInteger(0);
                                }
                                com.tkay.core.c.a aVarB2 = com.tkay.core.c.b.a(this.h).b(this.l);
                                int iAd = aVarB2.ad() == 0 ? aVarB2.ad() : this.c;
                                this.c = iAd;
                                this.d = iAd * 2;
                                this.e = aVarB2.af() == 0 ? aVarB2.af() : this.e;
                                b();
                            } catch (OutOfMemoryError | StackOverflowError unused5) {
                                System.gc();
                                if (this.j == null) {
                                    atomicInteger = new AtomicInteger(0);
                                }
                            }
                        } catch (Throwable th4) {
                            if (this.j == null) {
                                this.j = new AtomicInteger(0);
                            }
                            throw th4;
                        }
                    } catch (Exception unused6) {
                        if (this.j == null) {
                            atomicInteger = new AtomicInteger(0);
                        }
                    }
                } catch (Error unused7) {
                    if (this.j == null) {
                        atomicInteger = new AtomicInteger(0);
                    }
                }
                if (this.j == null) {
                    atomicInteger = new AtomicInteger(0);
                    this.j = atomicInteger;
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x006c, code lost:
    
        if (r0 == null) goto L35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0075, code lost:
    
        if (r0 == null) goto L50;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final synchronized void a(g gVar, boolean z) {
        String string;
        FileWriter fileWriter;
        if (this.i == null || this.j == null) {
            a(m.a().f());
        }
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.h).b(this.l);
        int iAd = aVarB.ad() != 0 ? aVarB.ad() : this.c;
        this.c = iAd;
        this.d = iAd * 2;
        this.e = aVarB.af();
        FileWriter fileWriter2 = null;
        try {
            try {
                try {
                    string = gVar.a().toString();
                    fileWriter = new FileWriter(this.i, true);
                } catch (IOException unused) {
                }
            } catch (Exception unused2) {
            } catch (OutOfMemoryError | StackOverflowError unused3) {
            } catch (Error unused4) {
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            fileWriter.append((CharSequence) string);
            fileWriter.append((CharSequence) "\n");
            fileWriter.flush();
            fileWriter.close();
            this.j.incrementAndGet();
            fileWriter.close();
        } catch (OutOfMemoryError | StackOverflowError unused5) {
            fileWriter2 = fileWriter;
            System.gc();
        } catch (Error unused6) {
            fileWriter2 = fileWriter;
        } catch (Exception unused7) {
            fileWriter2 = fileWriter;
            if (fileWriter2 != null) {
                fileWriter2.close();
            }
            a(z);
        } catch (Throwable th2) {
            th = th2;
            fileWriter2 = fileWriter;
            if (fileWriter2 != null) {
                try {
                    fileWriter2.close();
                } catch (IOException unused8) {
                }
            }
            throw th;
        }
        a(z);
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

    private synchronized void a(int i) {
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
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
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
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public final void run() throws IOException {
                ?? bufferedReader;
                Throwable th;
                ?? r0;
                ArrayList arrayList;
                int i;
                Object obj;
                String line;
                synchronized (this) {
                    if (b.this.h == null) {
                        return;
                    }
                    if ((System.currentTimeMillis() - p.a(b.this.h, f.o, "LOG_SEND_TIME", (Long) 0L).longValue() > b.this.e || (b.this.j != null && b.this.j.get() >= b.this.c)) && !b.this.k && b.this.j != null && b.this.j.get() > 0) {
                        b.this.k = true;
                        ?? r02 = 0;
                        ?? r03 = 0;
                        ?? r04 = 0;
                        ?? r05 = 0;
                        try {
                            try {
                                bufferedReader = new BufferedReader(new FileReader(b.this.i));
                            } catch (Throwable th2) {
                                bufferedReader = r02;
                                th = th2;
                            }
                            try {
                                try {
                                    arrayList = new ArrayList();
                                    i = 0;
                                    while (i < b.this.d && (line = bufferedReader.readLine()) != null) {
                                        arrayList.add(line);
                                        i++;
                                    }
                                    bufferedReader.close();
                                } catch (OutOfMemoryError | StackOverflowError unused) {
                                    r03 = bufferedReader;
                                    b.this.k = false;
                                    System.gc();
                                    r02 = r03;
                                    if (r03 != 0) {
                                        r0 = r03;
                                        r0.close();
                                        r02 = r0;
                                    }
                                }
                            } catch (Error unused2) {
                                r04 = bufferedReader;
                                b.this.k = false;
                                r02 = r04;
                                r0 = r04;
                                if (r04 != 0) {
                                    r0.close();
                                    r02 = r0;
                                }
                            } catch (Exception unused3) {
                                r05 = bufferedReader;
                                b.this.k = false;
                                r02 = r05;
                                r0 = r05;
                                if (r05 != 0) {
                                }
                            } catch (Throwable th3) {
                                th = th3;
                                if (bufferedReader != 0) {
                                    try {
                                        bufferedReader.close();
                                    } catch (Exception unused4) {
                                    }
                                }
                                throw th;
                            }
                        } catch (OutOfMemoryError | StackOverflowError unused5) {
                        } catch (Error unused6) {
                        } catch (Exception unused7) {
                        }
                        if (i == 0) {
                            b.this.k = false;
                            try {
                                bufferedReader.close();
                            } catch (Exception unused8) {
                            }
                            return;
                        }
                        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
                        if (aVarB == null) {
                            com.tkay.core.common.h.b bVar = new com.tkay.core.common.h.b(b.this.h, 0, arrayList);
                            k kVar = b.this.m;
                            bVar.a(0, kVar);
                            obj = kVar;
                        } else if (aVarB.u() != 1) {
                            com.tkay.core.common.h.b bVar2 = new com.tkay.core.common.h.b(b.this.h, aVarB.u(), arrayList);
                            k kVar2 = b.this.m;
                            bVar2.a(0, kVar2);
                            obj = kVar2;
                        } else {
                            com.tkay.core.common.h.a.a aVar = new com.tkay.core.common.h.a.a(arrayList);
                            aVar.a(1, aVarB.t());
                            c.a aVar2 = b.this.n;
                            aVar.a(aVar2);
                            obj = aVar2;
                        }
                        bufferedReader.close();
                        r02 = obj;
                    }
                }
            }
        });
    }
}
