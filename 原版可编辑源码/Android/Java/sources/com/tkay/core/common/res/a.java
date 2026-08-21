package com.tkay.core.common.res;

import com.kuaishou.weapon.p0.bh;
import cz.msebera.android.httpclient.message.TokenParser;
import java.io.BufferedInputStream;
import java.io.BufferedWriter;
import java.io.Closeable;
import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.FilterOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Reader;
import java.io.StringWriter;
import java.io.Writer;
import java.lang.reflect.Array;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public final class a implements Closeable {
    static final String a = "journal";
    static final String b = "journal.tmp";
    static final String c = "libcore.io.DiskLruCache";
    static final String d = "1";
    static final long e = -1;
    private static final String f = "CLEAN";
    private static final String g = "DIRTY";
    private static final String h = "REMOVE";
    private static final String i = "READ";
    private static final Charset j = Charset.forName("UTF-8");
    private static final int k = 8192;
    private final File l;
    private final File m;
    private final File n;
    private final long p;
    private Writer s;
    private int u;
    private long r = 0;
    private final LinkedHashMap<String, b> t = new LinkedHashMap<>(0, 0.75f, true);
    private long v = 0;
    private final ExecutorService w = new ThreadPoolExecutor(0, 1, 60, TimeUnit.SECONDS, new LinkedBlockingQueue());
    private final Callable<Void> x = new Callable<Void>() {
        @Override
        private Void call() {
            synchronized (a.this) {
                if (a.this.s == null) {
                    return null;
                }
                a.this.l();
                if (a.this.h()) {
                    a.this.d();
                    a.e(a.this);
                }
                return null;
            }
        }
    };
    private final int o = 1;
    private final int q = 1;

    static int e(a aVar) {
        aVar.u = 0;
        return 0;
    }

    private static <T> T[] a(T[] tArr, int i2) {
        int length = tArr.length;
        if (2 > i2) {
            throw new IllegalArgumentException();
        }
        if (2 > length) {
            throw new ArrayIndexOutOfBoundsException();
        }
        int i3 = i2 - 2;
        int iMin = Math.min(i3, length - 2);
        T[] tArr2 = (T[]) ((Object[]) Array.newInstance(tArr.getClass().getComponentType(), i3));
        System.arraycopy(tArr, 2, tArr2, 0, iMin);
        return tArr2;
    }

    private static String a(Reader reader) throws IOException {
        try {
            StringWriter stringWriter = new StringWriter();
            char[] cArr = new char[1024];
            while (true) {
                int i2 = reader.read(cArr);
                if (i2 != -1) {
                    stringWriter.write(cArr, 0, i2);
                } else {
                    return stringWriter.toString();
                }
            }
        } finally {
            reader.close();
        }
    }

    private static String b(InputStream inputStream) throws IOException {
        StringBuilder sb = new StringBuilder(80);
        while (true) {
            int i2 = inputStream.read();
            if (i2 == -1) {
                throw new EOFException();
            }
            if (i2 != 10) {
                sb.append((char) i2);
            } else {
                int length = sb.length();
                if (length > 0) {
                    int i3 = length - 1;
                    if (sb.charAt(i3) == '\r') {
                        sb.setLength(i3);
                    }
                }
                return sb.toString();
            }
        }
    }

    public static void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (RuntimeException e2) {
                throw e2;
            } catch (Exception unused) {
            }
        }
    }

    private static void a(File file) throws IOException {
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null) {
            throw new IllegalArgumentException("not a directory: ".concat(String.valueOf(file)));
        }
        for (File file2 : fileArrListFiles) {
            if (file2.isDirectory()) {
                a(file2);
            }
            if (!file2.delete()) {
                throw new IOException("failed to delete file: ".concat(String.valueOf(file2)));
            }
        }
    }

    private a(File file, long j2) {
        this.l = file;
        this.m = new File(file, a);
        this.n = new File(file, b);
        this.p = j2;
    }

    public static a a(File file, long j2) throws IOException {
        if (j2 <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        a aVar = new a(file, j2);
        if (aVar.m.exists()) {
            try {
                aVar.b();
                aVar.c();
                aVar.s = new BufferedWriter(new FileWriter(aVar.m, true), 8192);
                return aVar;
            } catch (IOException unused) {
                aVar.close();
                a(aVar.l);
            }
        }
        file.mkdirs();
        a aVar2 = new a(file, j2);
        aVar2.d();
        return aVar2;
    }

    private void b() {
        String strB;
        BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(this.m), 8192);
        try {
            String strB2 = b(bufferedInputStream);
            String strB3 = b(bufferedInputStream);
            String strB4 = b(bufferedInputStream);
            String strB5 = b(bufferedInputStream);
            String strB6 = b(bufferedInputStream);
            if (!c.equals(strB2) || !"1".equals(strB3) || !Integer.toString(this.o).equals(strB4) || !Integer.toString(this.q).equals(strB5) || !"".equals(strB6)) {
                throw new IOException("unexpected journal header: [" + strB2 + ", " + strB3 + ", " + strB5 + ", " + strB6 + "]");
            }
            while (true) {
                try {
                    strB = b(bufferedInputStream);
                    String[] strArrSplit = strB.split(" ");
                    if (strArrSplit.length < 2) {
                        throw new IOException("unexpected journal line: ".concat(String.valueOf(strB)));
                    }
                    String str = strArrSplit[1];
                    byte b2 = 0;
                    if (strArrSplit[0].equals(h) && strArrSplit.length == 2) {
                        this.t.remove(str);
                    } else {
                        b bVar = this.t.get(str);
                        if (bVar == null) {
                            bVar = new b(this, str, b2);
                            this.t.put(str, bVar);
                        }
                        if (strArrSplit[0].equals(f) && strArrSplit.length == this.q + 2) {
                            b.a(bVar);
                            bVar.e = null;
                            int length = strArrSplit.length;
                            int length2 = strArrSplit.length;
                            if (2 > length) {
                                throw new IllegalArgumentException();
                            }
                            if (2 > length2) {
                                throw new ArrayIndexOutOfBoundsException();
                            }
                            int i2 = length - 2;
                            int iMin = Math.min(i2, length2 - 2);
                            Object[] objArr = (Object[]) Array.newInstance(strArrSplit.getClass().getComponentType(), i2);
                            System.arraycopy(strArrSplit, 2, objArr, 0, iMin);
                            b.a(bVar, (String[]) objArr);
                        } else if (strArrSplit[0].equals(g) && strArrSplit.length == 2) {
                            bVar.e = new a(this, bVar, b2);
                        } else if (!strArrSplit[0].equals(i) || strArrSplit.length != 2) {
                            break;
                        }
                    }
                } catch (EOFException unused) {
                    return;
                }
            }
            throw new IOException("unexpected journal line: ".concat(String.valueOf(strB)));
        } finally {
            a((Closeable) bufferedInputStream);
        }
    }

    private void d(String str) throws IOException {
        String[] strArrSplit = str.split(" ");
        if (strArrSplit.length < 2) {
            throw new IOException("unexpected journal line: ".concat(String.valueOf(str)));
        }
        String str2 = strArrSplit[1];
        byte b2 = 0;
        if (strArrSplit[0].equals(h) && strArrSplit.length == 2) {
            this.t.remove(str2);
            return;
        }
        b bVar = this.t.get(str2);
        if (bVar == null) {
            bVar = new b(this, str2, b2);
            this.t.put(str2, bVar);
        }
        if (strArrSplit[0].equals(f) && strArrSplit.length == this.q + 2) {
            b.a(bVar);
            bVar.e = null;
            int length = strArrSplit.length;
            int length2 = strArrSplit.length;
            if (2 > length) {
                throw new IllegalArgumentException();
            }
            if (2 > length2) {
                throw new ArrayIndexOutOfBoundsException();
            }
            int i2 = length - 2;
            int iMin = Math.min(i2, length2 - 2);
            Object[] objArr = (Object[]) Array.newInstance(strArrSplit.getClass().getComponentType(), i2);
            System.arraycopy(strArrSplit, 2, objArr, 0, iMin);
            b.a(bVar, (String[]) objArr);
            return;
        }
        if (!strArrSplit[0].equals(g) || strArrSplit.length != 2) {
            if (!strArrSplit[0].equals(i) || strArrSplit.length != 2) {
                throw new IOException("unexpected journal line: ".concat(String.valueOf(str)));
            }
            return;
        }
        bVar.e = new a(this, bVar, b2);
    }

    private void c() throws IOException {
        b(this.n);
        Iterator<b> it = this.t.values().iterator();
        while (it.hasNext()) {
            b next = it.next();
            int i2 = 0;
            if (next.e == null) {
                while (i2 < this.q) {
                    this.r += next.c[i2];
                    i2++;
                }
            } else {
                next.e = null;
                while (i2 < this.q) {
                    b(next.a(i2));
                    b(next.b(i2));
                    i2++;
                }
                it.remove();
            }
        }
    }

    private synchronized void d() {
        if (this.s != null) {
            this.s.close();
        }
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(this.n), 8192);
        bufferedWriter.write(c);
        bufferedWriter.write("\n");
        bufferedWriter.write("1");
        bufferedWriter.write("\n");
        bufferedWriter.write(Integer.toString(this.o));
        bufferedWriter.write("\n");
        bufferedWriter.write(Integer.toString(this.q));
        bufferedWriter.write("\n");
        bufferedWriter.write("\n");
        for (b bVar : this.t.values()) {
            if (bVar.e != null) {
                bufferedWriter.write("DIRTY " + bVar.b + '\n');
            } else {
                bufferedWriter.write("CLEAN " + bVar.b + bVar.a() + '\n');
            }
        }
        bufferedWriter.close();
        this.n.renameTo(this.m);
        this.s = new BufferedWriter(new FileWriter(this.m, true), 8192);
    }

    private static void b(File file) throws IOException {
        if (file.exists() && !file.delete()) {
            throw new IOException();
        }
    }

    public final synchronized c a(String str) {
        j();
        e(str);
        b bVar = this.t.get(str);
        if (bVar == null) {
            return null;
        }
        if (!bVar.d) {
            return null;
        }
        InputStream[] inputStreamArr = new InputStream[this.q];
        for (int i2 = 0; i2 < this.q; i2++) {
            try {
                inputStreamArr[i2] = new FileInputStream(bVar.a(i2));
            } catch (FileNotFoundException unused) {
                return null;
            }
        }
        this.u++;
        this.s.append((CharSequence) ("READ " + str + '\n'));
        if (h()) {
            this.w.submit(this.x);
        }
        this.s.flush();
        return new c(this, str, bVar.f, inputStreamArr, (byte) 0);
    }

    public final a b(String str) {
        return a(str, -1L);
    }

    private synchronized a a(String str, long j2) {
        j();
        e(str);
        b bVar = this.t.get(str);
        if (j2 != -1 && (bVar == null || bVar.f != j2)) {
            return null;
        }
        byte b2 = 0;
        if (bVar == null) {
            bVar = new b(this, str, b2);
            this.t.put(str, bVar);
        } else if (bVar.e != null) {
            return null;
        }
        a aVar = new a(this, bVar, b2);
        bVar.e = aVar;
        this.s.write("DIRTY " + str + '\n');
        this.s.flush();
        return aVar;
    }

    private File e() {
        return this.l;
    }

    private long f() {
        return this.p;
    }

    private synchronized long g() {
        return this.r;
    }

    private synchronized void a(a aVar, boolean z) {
        b bVar = aVar.b;
        if (bVar.e != aVar) {
            throw new IllegalStateException();
        }
        if (z && !bVar.d) {
            for (int i2 = 0; i2 < this.q; i2++) {
                if (!bVar.b(i2).exists()) {
                    aVar.b();
                    throw new IllegalStateException("edit didn't create file ".concat(String.valueOf(i2)));
                }
            }
        }
        for (int i3 = 0; i3 < this.q; i3++) {
            File fileB = bVar.b(i3);
            if (z) {
                if (fileB.exists()) {
                    File fileA = bVar.a(i3);
                    fileB.renameTo(fileA);
                    long j2 = bVar.c[i3];
                    long length = fileA.length();
                    bVar.c[i3] = length;
                    this.r = (this.r - j2) + length;
                }
            } else {
                b(fileB);
            }
        }
        this.u++;
        bVar.e = null;
        if (bVar.d | z) {
            b.a(bVar);
            this.s.write("CLEAN " + bVar.b + bVar.a() + '\n');
            if (z) {
                long j3 = this.v;
                this.v = 1 + j3;
                bVar.f = j3;
            }
        } else {
            this.t.remove(bVar.b);
            this.s.write("REMOVE " + bVar.b + '\n');
        }
        this.s.flush();
        if (this.r > this.p || h()) {
            this.w.submit(this.x);
        }
    }

    private boolean h() {
        int i2 = this.u;
        return i2 >= 2000 && i2 >= this.t.size();
    }

    public final synchronized boolean c(String str) {
        j();
        e(str);
        b bVar = this.t.get(str);
        if (bVar != null && bVar.e == null) {
            for (int i2 = 0; i2 < this.q; i2++) {
                File fileA = bVar.a(i2);
                if (!fileA.delete()) {
                    throw new IOException("failed to delete ".concat(String.valueOf(fileA)));
                }
                this.r -= bVar.c[i2];
                bVar.c[i2] = 0;
            }
            this.u++;
            this.s.append((CharSequence) ("REMOVE " + str + '\n'));
            this.t.remove(str);
            if (h()) {
                this.w.submit(this.x);
            }
            return true;
        }
        return false;
    }

    private boolean i() {
        return this.s == null;
    }

    private void j() {
        if (this.s == null) {
            throw new IllegalStateException("cache is closed");
        }
    }

    private synchronized void k() {
        j();
        l();
        this.s.flush();
    }

    @Override
    public final synchronized void close() {
        if (this.s == null) {
            return;
        }
        for (b bVar : new ArrayList(this.t.values())) {
            if (bVar.e != null) {
                bVar.e.b();
            }
        }
        l();
        this.s.close();
        this.s = null;
    }

    private void l() {
        while (this.r > this.p) {
            c(this.t.entrySet().iterator().next().getKey());
        }
    }

    private void m() throws IOException {
        close();
        a(this.l);
    }

    private static void e(String str) {
        if (str.contains(" ") || str.contains("\n") || str.contains("\r")) {
            throw new IllegalArgumentException("keys must not contain spaces or newlines: \"" + str + "\"");
        }
    }

    private static String c(InputStream inputStream) {
        return a((Reader) new InputStreamReader(inputStream, j));
    }

    public final class c implements Closeable {
        private final String b;
        private final long c;
        private final InputStream[] d;

        c(a aVar, String str, long j, InputStream[] inputStreamArr, byte b) {
            this(str, j, inputStreamArr);
        }

        private c(String str, long j, InputStream[] inputStreamArr) {
            this.b = str;
            this.c = j;
            this.d = inputStreamArr;
        }

        private a b() {
            return a.this.a(this.b, this.c);
        }

        public final InputStream a() {
            return this.d[0];
        }

        @Override
        public final void close() {
            for (InputStream inputStream : this.d) {
                a.a((Closeable) inputStream);
            }
        }

        private String a(int i) {
            return a.a(this.d[i]);
        }
    }

    public final class a {
        private final b b;
        private boolean c;

        a(a aVar, b bVar, byte b) {
            this(bVar);
        }

        static boolean b(a aVar) {
            aVar.c = true;
            return true;
        }

        private a(b bVar) {
            this.b = bVar;
        }

        private InputStream b(int i) {
            synchronized (a.this) {
                if (this.b.e != this) {
                    throw new IllegalStateException();
                }
                if (!this.b.d) {
                    return null;
                }
                return new FileInputStream(this.b.a(i));
            }
        }

        private String c(int i) {
            InputStream inputStreamB = b(i);
            if (inputStreamB != null) {
                return a.a(inputStreamB);
            }
            return null;
        }

        public final OutputStream a(int i) {
            a aVar;
            synchronized (a.this) {
                if (this.b.e != this) {
                    throw new IllegalStateException();
                }
                aVar = new a(this, new FileOutputStream(this.b.b(i)), (byte) 0);
            }
            return aVar;
        }

        private void a(int i, String str) throws Throwable {
            OutputStreamWriter outputStreamWriter = null;
            try {
                OutputStreamWriter outputStreamWriter2 = new OutputStreamWriter(a(i), a.j);
                try {
                    outputStreamWriter2.write(str);
                    a.a(outputStreamWriter2);
                } catch (Throwable th) {
                    th = th;
                    outputStreamWriter = outputStreamWriter2;
                    a.a(outputStreamWriter);
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }

        public final void a() {
            if (this.c) {
                a.this.a(this, false);
                a.this.c(this.b.b);
            } else {
                a.this.a(this, true);
            }
        }

        public final void b() {
            a.this.a(this, false);
        }

        private class a extends FilterOutputStream {
            a(a aVar, OutputStream outputStream, byte b) {
                this(outputStream);
            }

            private a(OutputStream outputStream) {
                super(outputStream);
            }

            @Override
            public final void write(int i) {
                try {
                    this.out.write(i);
                } catch (IOException unused) {
                    a.b(a.this);
                }
            }

            @Override
            public final void write(byte[] bArr, int i, int i2) {
                try {
                    this.out.write(bArr, i, i2);
                } catch (IOException unused) {
                    a.b(a.this);
                }
            }

            @Override
            public final void close() {
                try {
                    this.out.close();
                } catch (IOException unused) {
                    a.b(a.this);
                }
            }

            @Override
            public final void flush() {
                try {
                    this.out.flush();
                } catch (IOException unused) {
                    a.b(a.this);
                }
            }
        }
    }

    private final class b {
        private final String b;
        private final long[] c;
        private boolean d;
        private a e;
        private long f;

        b(a aVar, String str, byte b) {
            this(str);
        }

        static boolean a(b bVar) {
            bVar.d = true;
            return true;
        }

        private b(String str) {
            this.b = str;
            this.c = new long[a.this.q];
        }

        public final String a() {
            StringBuilder sb = new StringBuilder();
            for (long j : this.c) {
                sb.append(TokenParser.SP);
                sb.append(j);
            }
            return sb.toString();
        }

        private void a(String[] strArr) throws IOException {
            if (strArr.length != a.this.q) {
                throw b(strArr);
            }
            for (int i = 0; i < strArr.length; i++) {
                try {
                    this.c[i] = Long.parseLong(strArr[i]);
                } catch (NumberFormatException unused) {
                    throw b(strArr);
                }
            }
        }

        private static IOException b(String[] strArr) throws IOException {
            throw new IOException("unexpected journal line: " + Arrays.toString(strArr));
        }

        public final File a(int i) {
            return new File(a.this.l, this.b + "." + i);
        }

        public final File b(int i) {
            return new File(a.this.l, this.b + "." + i + bh.k);
        }

        static void a(b bVar, String[] strArr) throws IOException {
            if (strArr.length != a.this.q) {
                throw b(strArr);
            }
            for (int i = 0; i < strArr.length; i++) {
                try {
                    bVar.c[i] = Long.parseLong(strArr[i]);
                } catch (NumberFormatException unused) {
                    throw b(strArr);
                }
            }
        }
    }

    static String a(InputStream inputStream) {
        return a((Reader) new InputStreamReader(inputStream, j));
    }
}
