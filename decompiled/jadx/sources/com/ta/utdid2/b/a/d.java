package com.ta.utdid2.b.a;

import com.ta.utdid2.b.a.b;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class d {
    private static final Object b = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private File f5292a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Object f14a = new Object();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private HashMap<File, a> f15a = new HashMap<>();

    public d(String str) {
        if (str != null && str.length() > 0) {
            this.f5292a = new File(str);
            return;
        }
        throw new RuntimeException("Directory can not be empty");
    }

    private File a(File file, String str) {
        if (str.indexOf(File.separatorChar) < 0) {
            return new File(file, str);
        }
        throw new IllegalArgumentException("File " + str + " contains a path separator");
    }

    private File a() {
        File file;
        synchronized (this.f14a) {
            file = this.f5292a;
        }
        return file;
    }

    private File b(String str) {
        return a(a(), str + ".xml");
    }

    /* JADX WARN: Code restructure failed: missing block: B:28:0x004f, code lost:
    
        if (r0 == null) goto L52;
     */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0080 A[Catch: all -> 0x0083, TRY_ENTER, TRY_LEAVE, TryCatch #2 {all -> 0x0083, blocks: (B:20:0x0043, B:51:0x0080), top: B:76:0x0035 }] */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0086 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public com.ta.utdid2.b.a.b a(java.lang.String r5, int r6) throws java.lang.Throwable {
        /*
            r4 = this;
            java.io.File r5 = r4.b(r5)
            java.lang.Object r0 = com.ta.utdid2.b.a.d.b
            monitor-enter(r0)
            java.util.HashMap<java.io.File, com.ta.utdid2.b.a.d$a> r1 = r4.f15a     // Catch: java.lang.Throwable -> La6
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> La6
            com.ta.utdid2.b.a.d$a r1 = (com.ta.utdid2.b.a.d.a) r1     // Catch: java.lang.Throwable -> La6
            if (r1 == 0) goto L19
            boolean r2 = r1.c()     // Catch: java.lang.Throwable -> La6
            if (r2 != 0) goto L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            return r1
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            java.io.File r0 = a(r5)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L2a
            r5.delete()
            r0.renameTo(r5)
        L2a:
            boolean r0 = r5.exists()
            r2 = 0
            if (r0 == 0) goto L83
            boolean r0 = r5.canRead()
            if (r0 == 0) goto L83
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e org.xmlpull.v1.XmlPullParserException -> L52
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e org.xmlpull.v1.XmlPullParserException -> L52
            java.util.HashMap r2 = com.ta.utdid2.b.a.e.a(r0)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L4a org.xmlpull.v1.XmlPullParserException -> L53
            r0.close()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L4a org.xmlpull.v1.XmlPullParserException -> L53
        L43:
            r0.close()     // Catch: java.lang.Throwable -> L83
            goto L83
        L47:
            r5 = move-exception
            r2 = r0
            goto L74
        L4a:
            goto L4f
        L4c:
            r5 = move-exception
            goto L74
        L4e:
            r0 = r2
        L4f:
            if (r0 == 0) goto L83
            goto L43
        L52:
            r0 = r2
        L53:
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L6c java.lang.Exception -> L7a
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L6c java.lang.Exception -> L7a
            int r0 = r3.available()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            r3.read(r0)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
        L61:
            r3.close()     // Catch: java.lang.Throwable -> L65
            goto L7e
        L65:
            goto L7e
        L67:
            r5 = move-exception
            r2 = r3
            goto L6e
        L6a:
            goto L7b
        L6c:
            r5 = move-exception
            r2 = r0
        L6e:
            if (r2 == 0) goto L73
            r2.close()     // Catch: java.lang.Throwable -> L73
        L73:
            throw r5     // Catch: java.lang.Throwable -> L4c
        L74:
            if (r2 == 0) goto L79
            r2.close()     // Catch: java.lang.Throwable -> L79
        L79:
            throw r5
        L7a:
            r3 = r0
        L7b:
            if (r3 == 0) goto L7e
            goto L61
        L7e:
            if (r3 == 0) goto L83
            r3.close()     // Catch: java.lang.Throwable -> L83
        L83:
            java.lang.Object r3 = com.ta.utdid2.b.a.d.b
            monitor-enter(r3)
            if (r1 == 0) goto L8c
            r1.a(r2)     // Catch: java.lang.Throwable -> La3
            goto La1
        L8c:
            java.util.HashMap<java.io.File, com.ta.utdid2.b.a.d$a> r0 = r4.f15a     // Catch: java.lang.Throwable -> La3
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> La3
            r1 = r0
            com.ta.utdid2.b.a.d$a r1 = (com.ta.utdid2.b.a.d.a) r1     // Catch: java.lang.Throwable -> La3
            if (r1 != 0) goto La1
            com.ta.utdid2.b.a.d$a r1 = new com.ta.utdid2.b.a.d$a     // Catch: java.lang.Throwable -> La3
            r1.<init>(r5, r6, r2)     // Catch: java.lang.Throwable -> La3
            java.util.HashMap<java.io.File, com.ta.utdid2.b.a.d$a> r6 = r4.f15a     // Catch: java.lang.Throwable -> La3
            r6.put(r5, r1)     // Catch: java.lang.Throwable -> La3
        La1:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> La3
            return r1
        La3:
            r5 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> La3
            throw r5
        La6:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            goto Laa
        La9:
            throw r5
        Laa:
            goto La9
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ta.utdid2.b.a.d.a(java.lang.String, int):com.ta.utdid2.b.a.b");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static File a(File file) {
        return new File(file.getPath() + ".bak");
    }

    private static final class a implements b {
        private static final Object c = new Object();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Map f5293a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private WeakHashMap<b.InterfaceC0368b, Object> f16a;
        private final int b;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private final File f17b;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private final File f18c;
        private boolean g = false;

        a(File file, int i, Map map) {
            this.f17b = file;
            this.f18c = d.a(file);
            this.b = i;
            this.f5293a = map == null ? new HashMap() : map;
            this.f16a = new WeakHashMap<>();
        }

        @Override // com.ta.utdid2.b.a.b
        /* JADX INFO: renamed from: a */
        public boolean mo28a() {
            File file = this.f17b;
            return file != null && new File(file.getAbsolutePath()).exists();
        }

        public void a(boolean z) {
            synchronized (this) {
                this.g = z;
            }
        }

        public boolean c() {
            boolean z;
            synchronized (this) {
                z = this.g;
            }
            return z;
        }

        public void a(Map map) {
            if (map != null) {
                synchronized (this) {
                    this.f5293a = map;
                }
            }
        }

        @Override // com.ta.utdid2.b.a.b
        public Map<String, ?> getAll() {
            HashMap map;
            synchronized (this) {
                map = new HashMap(this.f5293a);
            }
            return map;
        }

        @Override // com.ta.utdid2.b.a.b
        public String getString(String str, String str2) {
            String str3;
            synchronized (this) {
                str3 = (String) this.f5293a.get(str);
                if (str3 == null) {
                    str3 = str2;
                }
            }
            return str3;
        }

        @Override // com.ta.utdid2.b.a.b
        public long getLong(String str, long j) {
            synchronized (this) {
                Long l = (Long) this.f5293a.get(str);
                if (l != null) {
                    j = l.longValue();
                }
            }
            return j;
        }

        /* JADX INFO: renamed from: com.ta.utdid2.b.a.d$a$a, reason: collision with other inner class name */
        public final class C0369a implements b.a {
            private final Map<String, Object> b = new HashMap();
            private boolean h = false;

            public C0369a() {
            }

            @Override // com.ta.utdid2.b.a.b.a
            public b.a a(String str, String str2) {
                synchronized (this) {
                    this.b.put(str, str2);
                }
                return this;
            }

            @Override // com.ta.utdid2.b.a.b.a
            public b.a a(String str, int i) {
                synchronized (this) {
                    this.b.put(str, Integer.valueOf(i));
                }
                return this;
            }

            @Override // com.ta.utdid2.b.a.b.a
            public b.a a(String str, long j) {
                synchronized (this) {
                    this.b.put(str, Long.valueOf(j));
                }
                return this;
            }

            @Override // com.ta.utdid2.b.a.b.a
            public b.a a(String str, float f) {
                synchronized (this) {
                    this.b.put(str, Float.valueOf(f));
                }
                return this;
            }

            @Override // com.ta.utdid2.b.a.b.a
            public b.a a(String str, boolean z) {
                synchronized (this) {
                    this.b.put(str, Boolean.valueOf(z));
                }
                return this;
            }

            @Override // com.ta.utdid2.b.a.b.a
            public b.a a(String str) {
                synchronized (this) {
                    this.b.put(str, this);
                }
                return this;
            }

            @Override // com.ta.utdid2.b.a.b.a
            public b.a b() {
                synchronized (this) {
                    this.h = true;
                }
                return this;
            }

            @Override // com.ta.utdid2.b.a.b.a
            public boolean commit() {
                boolean z;
                ArrayList arrayList;
                HashSet<b.InterfaceC0368b> hashSet;
                boolean zD;
                synchronized (d.b) {
                    z = a.this.f16a.size() > 0;
                    arrayList = null;
                    if (z) {
                        arrayList = new ArrayList();
                        hashSet = new HashSet(a.this.f16a.keySet());
                    } else {
                        hashSet = null;
                    }
                    synchronized (this) {
                        if (this.h) {
                            a.this.f5293a.clear();
                            this.h = false;
                        }
                        for (Map.Entry<String, Object> entry : this.b.entrySet()) {
                            String key = entry.getKey();
                            Object value = entry.getValue();
                            if (value == this) {
                                a.this.f5293a.remove(key);
                            } else {
                                a.this.f5293a.put(key, value);
                            }
                            if (z) {
                                arrayList.add(key);
                            }
                        }
                        this.b.clear();
                    }
                    zD = a.this.d();
                    if (zD) {
                        a.this.a(true);
                    }
                }
                if (z) {
                    for (int size = arrayList.size() - 1; size >= 0; size--) {
                        String str = (String) arrayList.get(size);
                        for (b.InterfaceC0368b interfaceC0368b : hashSet) {
                            if (interfaceC0368b != null) {
                                interfaceC0368b.a(a.this, str);
                            }
                        }
                    }
                }
                return zD;
            }
        }

        @Override // com.ta.utdid2.b.a.b
        public b.a a() {
            return new C0369a();
        }

        private FileOutputStream a(File file) {
            try {
                return new FileOutputStream(file);
            } catch (FileNotFoundException unused) {
                if (!file.getParentFile().mkdir()) {
                    return null;
                }
                try {
                    return new FileOutputStream(file);
                } catch (FileNotFoundException unused2) {
                    return null;
                }
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean d() {
            if (this.f17b.exists()) {
                if (!this.f18c.exists()) {
                    if (!this.f17b.renameTo(this.f18c)) {
                        return false;
                    }
                } else {
                    this.f17b.delete();
                }
            }
            try {
                FileOutputStream fileOutputStreamA = a(this.f17b);
                if (fileOutputStreamA == null) {
                    return false;
                }
                e.a(this.f5293a, fileOutputStreamA);
                fileOutputStreamA.close();
                this.f18c.delete();
                return true;
            } catch (Exception unused) {
                if (this.f17b.exists()) {
                    this.f17b.delete();
                }
                return false;
            }
        }
    }
}
