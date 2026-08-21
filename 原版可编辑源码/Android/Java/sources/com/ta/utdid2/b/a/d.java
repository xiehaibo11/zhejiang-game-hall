package com.ta.utdid2.b.a;

import com.ta.utdid2.b.a.b;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.WeakHashMap;
import org.xmlpull.v1.XmlPullParserException;

public class d {
    private static final Object b = new Object();
    private File a;
    private final Object a = new Object();
    private HashMap<File, a> a = new HashMap<>();

    public d(String str) {
        if (str != null && str.length() > 0) {
            this.a = new File(str);
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
        synchronized (this.a) {
            file = this.a;
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
    */
    public b a(String str, int i) throws Throwable {
        FileInputStream fileInputStream;
        FileInputStream fileInputStream2;
        FileInputStream fileInputStream3;
        File fileB = b(str);
        synchronized (b) {
            a aVar = this.a.get(fileB);
            if (aVar != null && !aVar.c()) {
                return aVar;
            }
            File fileA = a(fileB);
            if (fileA.exists()) {
                fileB.delete();
                fileA.renameTo(fileB);
            }
            HashMap mapA = null;
            mapA = null;
            mapA = null;
            mapA = null;
            mapA = null;
            mapA = null;
            FileInputStream fileInputStream4 = null;
            mapA = null;
            if (fileB.exists()) {
                try {
                    try {
                        if (fileB.canRead()) {
                            try {
                                fileInputStream = new FileInputStream(fileB);
                            } catch (XmlPullParserException unused) {
                                fileInputStream = null;
                            } catch (Exception unused2) {
                                fileInputStream = null;
                            }
                            try {
                                mapA = e.a(fileInputStream);
                                fileInputStream.close();
                            } catch (XmlPullParserException unused3) {
                                try {
                                    fileInputStream3 = new FileInputStream(fileB);
                                    try {
                                        fileInputStream3.read(new byte[fileInputStream3.available()]);
                                    } catch (Exception unused4) {
                                        if (fileInputStream3 != null) {
                                            fileInputStream3.close();
                                        }
                                        if (fileInputStream3 != null) {
                                            fileInputStream3.close();
                                        }
                                        synchronized (b) {
                                        }
                                    } catch (Throwable th) {
                                        th = th;
                                        fileInputStream2 = fileInputStream3;
                                        if (fileInputStream2 != null) {
                                            try {
                                                fileInputStream2.close();
                                            } catch (Throwable unused5) {
                                            }
                                        }
                                        throw th;
                                    }
                                } catch (Exception unused6) {
                                    fileInputStream3 = fileInputStream;
                                } catch (Throwable th2) {
                                    th = th2;
                                    fileInputStream2 = fileInputStream;
                                }
                                try {
                                    fileInputStream3.close();
                                } catch (Throwable unused7) {
                                }
                                if (fileInputStream3 != null) {
                                }
                                synchronized (b) {
                                }
                            } catch (Exception unused8) {
                            } catch (Throwable th3) {
                                th = th3;
                                fileInputStream4 = fileInputStream;
                                if (fileInputStream4 != null) {
                                    try {
                                        fileInputStream4.close();
                                    } catch (Throwable unused9) {
                                    }
                                }
                                throw th;
                            }
                            fileInputStream.close();
                        }
                    } catch (Throwable unused10) {
                    }
                } catch (Throwable th4) {
                    th = th4;
                }
            }
            synchronized (b) {
                if (aVar != null) {
                    aVar.a(mapA);
                } else {
                    aVar = this.a.get(fileB);
                    if (aVar == null) {
                        aVar = new a(fileB, i, mapA);
                        this.a.put(fileB, aVar);
                    }
                }
            }
            return aVar;
        }
    }

    private static File a(File file) {
        return new File(file.getPath() + ".bak");
    }

    private static final class a implements b {
        private static final Object c = new Object();
        private Map a;
        private WeakHashMap<b.b, Object> a;
        private final int b;
        private final File b;
        private final File c;
        private boolean g = false;

        a(File file, int i, Map map) {
            this.b = file;
            this.c = d.a(file);
            this.b = i;
            this.a = map == null ? new HashMap() : map;
            this.a = new WeakHashMap<>();
        }

        @Override
        public boolean a() {
            File file = this.b;
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
                    this.a = map;
                }
            }
        }

        @Override
        public Map<String, ?> getAll() {
            HashMap map;
            synchronized (this) {
                map = new HashMap(this.a);
            }
            return map;
        }

        @Override
        public String getString(String str, String str2) {
            String str3;
            synchronized (this) {
                str3 = (String) this.a.get(str);
                if (str3 == null) {
                    str3 = str2;
                }
            }
            return str3;
        }

        @Override
        public long getLong(String str, long j) {
            synchronized (this) {
                Long l = (Long) this.a.get(str);
                if (l != null) {
                    j = l.longValue();
                }
            }
            return j;
        }

        public final class a implements b.a {
            private final Map<String, Object> b = new HashMap();
            private boolean h = false;

            public a() {
            }

            @Override
            public b.a a(String str, String str2) {
                synchronized (this) {
                    this.b.put(str, str2);
                }
                return this;
            }

            @Override
            public b.a a(String str, int i) {
                synchronized (this) {
                    this.b.put(str, Integer.valueOf(i));
                }
                return this;
            }

            @Override
            public b.a a(String str, long j) {
                synchronized (this) {
                    this.b.put(str, Long.valueOf(j));
                }
                return this;
            }

            @Override
            public b.a a(String str, float f) {
                synchronized (this) {
                    this.b.put(str, Float.valueOf(f));
                }
                return this;
            }

            @Override
            public b.a a(String str, boolean z) {
                synchronized (this) {
                    this.b.put(str, Boolean.valueOf(z));
                }
                return this;
            }

            @Override
            public b.a a(String str) {
                synchronized (this) {
                    this.b.put(str, this);
                }
                return this;
            }

            @Override
            public b.a b() {
                synchronized (this) {
                    this.h = true;
                }
                return this;
            }

            @Override
            public boolean commit() {
                boolean z;
                ArrayList arrayList;
                HashSet<b.b> hashSet;
                boolean zD;
                synchronized (d.b) {
                    z = a.this.a.size() > 0;
                    arrayList = null;
                    if (z) {
                        arrayList = new ArrayList();
                        hashSet = new HashSet(a.this.a.keySet());
                    } else {
                        hashSet = null;
                    }
                    synchronized (this) {
                        if (this.h) {
                            a.this.a.clear();
                            this.h = false;
                        }
                        for (Map.Entry<String, Object> entry : this.b.entrySet()) {
                            String key = entry.getKey();
                            Object value = entry.getValue();
                            if (value == this) {
                                a.this.a.remove(key);
                            } else {
                                a.this.a.put(key, value);
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
                        for (b.b bVar : hashSet) {
                            if (bVar != null) {
                                bVar.a(a.this, str);
                            }
                        }
                    }
                }
                return zD;
            }
        }

        @Override
        public b.a a() {
            return new a();
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

        private boolean d() {
            if (this.b.exists()) {
                if (!this.c.exists()) {
                    if (!this.b.renameTo(this.c)) {
                        return false;
                    }
                } else {
                    this.b.delete();
                }
            }
            try {
                FileOutputStream fileOutputStreamA = a(this.b);
                if (fileOutputStreamA == null) {
                    return false;
                }
                e.a(this.a, fileOutputStreamA);
                fileOutputStreamA.close();
                this.c.delete();
                return true;
            } catch (Exception unused) {
                if (this.b.exists()) {
                    this.b.delete();
                }
                return false;
            }
        }
    }
}
