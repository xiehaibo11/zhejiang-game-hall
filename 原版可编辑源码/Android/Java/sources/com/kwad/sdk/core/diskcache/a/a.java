package com.kwad.sdk.core.diskcache.a;

import com.kuaishou.weapon.p0.bh;
import com.kwad.sdk.utils.q;
import cz.msebera.android.httpclient.message.TokenParser;
import java.io.BufferedWriter;
import java.io.Closeable;
import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FilterOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.concurrent.Callable;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.regex.Pattern;

public final class a implements Closeable {
    static final Pattern amU = Pattern.compile("[a-z0-9_-]{1,64}");
    private static final OutputStream anj = new OutputStream() {
        @Override
        public final void write(int i) {
        }
    };
    private final File amV;
    private final File amW;
    private final File amX;
    private final File amY;
    private final int amZ;
    private int ana;
    private final int anb;
    private Writer and;
    private int anf;
    private long maxSize;
    private long size = 0;
    private int anc = 0;
    private final LinkedHashMap<String, b> ane = new LinkedHashMap<>(0, 0.75f, true);
    private long ang = 0;
    final ThreadPoolExecutor anh = new ThreadPoolExecutor(0, 1, 60, TimeUnit.SECONDS, new LinkedBlockingQueue(), new ThreadFactory() {
        private final AtomicInteger poolNumber = new AtomicInteger(1);

        @Override
        public final Thread newThread(Runnable runnable) {
            return new Thread(runnable, "ksad-DiskLruCache-" + this.poolNumber.getAndIncrement());
        }
    });
    private final Callable<Void> ani = new Callable<Void>() {
        @Override
        private Void call() {
            synchronized (a.this) {
                if (a.this.and == null) {
                    return null;
                }
                a.this.trimToSize();
                a.this.Aq();
                if (a.this.Ap()) {
                    a.this.An();
                    a.a(a.this, 0);
                }
                return null;
            }
        }
    };

    public final class a {
        private final b anl;
        private final boolean[] anm;
        private boolean ann;
        private boolean ano;

        class a extends FilterOutputStream {
            private a(OutputStream outputStream) {
                super(outputStream);
            }

            a(a aVar, OutputStream outputStream, byte b) {
                this(outputStream);
            }

            @Override
            public final void close() {
                try {
                    this.out.close();
                } catch (IOException unused) {
                    a.b(a.this, true);
                }
            }

            @Override
            public final void flush() {
                try {
                    this.out.flush();
                } catch (IOException unused) {
                    a.b(a.this, true);
                }
            }

            @Override
            public final void write(int i) {
                try {
                    this.out.write(i);
                } catch (IOException unused) {
                    a.b(a.this, true);
                }
            }

            @Override
            public final void write(byte[] bArr, int i, int i2) {
                try {
                    this.out.write(bArr, i, i2);
                } catch (IOException unused) {
                    a.b(a.this, true);
                }
            }
        }

        private a(b bVar) {
            this.anl = bVar;
            this.anm = bVar.anr ? null : new boolean[a.this.anb];
        }

        a(a aVar, b bVar, byte b) {
            this(bVar);
        }

        static boolean b(a aVar, boolean z) {
            aVar.ann = true;
            return true;
        }

        public final void abort() {
            a.this.a(this, false);
        }

        public final OutputStream bT(int i) {
            FileOutputStream fileOutputStream;
            a aVar;
            synchronized (a.this) {
                if (this.anl.ans != this) {
                    throw new IllegalStateException();
                }
                byte b = 0;
                if (!this.anl.anr) {
                    this.anm[0] = true;
                }
                File fileBV = this.anl.bV(0);
                try {
                    fileOutputStream = new FileOutputStream(fileBV);
                } catch (FileNotFoundException unused) {
                    a.this.amV.mkdirs();
                    try {
                        fileOutputStream = new FileOutputStream(fileBV);
                    } catch (FileNotFoundException unused2) {
                        return a.anj;
                    }
                }
                aVar = new a(this, fileOutputStream, b);
            }
            return aVar;
        }

        public final void commit() {
            if (this.ann) {
                a.this.a(this, false);
                a.this.remove(this.anl.key);
            } else {
                a.this.a(this, true);
            }
            this.ano = true;
        }
    }

    final class b {
        private final long[] anq;
        private boolean anr;
        private a ans;
        private long ant;
        private final String key;

        private b(String str) {
            this.key = str;
            this.anq = new long[a.this.anb];
        }

        b(a aVar, String str, byte b) {
            this(str);
        }

        static boolean a(b bVar, boolean z) {
            bVar.anr = true;
            return true;
        }

        private void b(String[] strArr) throws IOException {
            if (strArr.length != a.this.anb) {
                throw c(strArr);
            }
            for (int i = 0; i < strArr.length; i++) {
                try {
                    this.anq[i] = Long.parseLong(strArr[i]);
                } catch (NumberFormatException unused) {
                    throw c(strArr);
                }
            }
        }

        private static IOException c(String[] strArr) throws IOException {
            throw new IOException("unexpected journal line: " + Arrays.toString(strArr));
        }

        public final String As() {
            StringBuilder sb = new StringBuilder();
            for (long j : this.anq) {
                sb.append(TokenParser.SP);
                sb.append(j);
            }
            return sb.toString();
        }

        public final File bU(int i) {
            return new File(a.this.amV, this.key + i);
        }

        public final File bV(int i) {
            return new File(a.this.amV, this.key + i + bh.k);
        }
    }

    public final class c implements Closeable {
        private final long[] anq;
        private final long ant;
        private File[] anu;
        private final InputStream[] anv;
        private final String key;

        private c(String str, long j, File[] fileArr, InputStream[] inputStreamArr, long[] jArr) {
            this.key = str;
            this.ant = j;
            this.anu = fileArr;
            this.anv = inputStreamArr;
            this.anq = jArr;
        }

        c(a aVar, String str, long j, File[] fileArr, InputStream[] inputStreamArr, long[] jArr, byte b) {
            this(str, j, fileArr, inputStreamArr, jArr);
        }

        public final File bW(int i) {
            return this.anu[0];
        }

        @Override
        public final void close() {
            for (InputStream inputStream : this.anv) {
                com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
            }
        }
    }

    private a(File file, int i, int i2, long j, int i3) {
        this.amV = file;
        this.amZ = i;
        this.amW = new File(file, "journal");
        this.amX = new File(file, "journal.tmp");
        this.amY = new File(file, "journal.bkp");
        this.anb = i2;
        this.maxSize = j;
        this.ana = i3;
    }

    private void Al() {
        com.kwad.sdk.core.diskcache.a.b bVar = new com.kwad.sdk.core.diskcache.a.b(new FileInputStream(this.amW), com.kwad.sdk.crash.utils.a.US_ASCII);
        try {
            String line = bVar.readLine();
            String line2 = bVar.readLine();
            String line3 = bVar.readLine();
            String line4 = bVar.readLine();
            String line5 = bVar.readLine();
            if (!"libcore.io.DiskLruCache".equals(line) || !"1".equals(line2) || !Integer.toString(this.amZ).equals(line3) || !Integer.toString(this.anb).equals(line4) || !"".equals(line5)) {
                throw new IOException("unexpected journal header: [" + line + ", " + line2 + ", " + line4 + ", " + line5 + "]");
            }
            int i = 0;
            while (true) {
                try {
                    cz(bVar.readLine());
                    i++;
                } catch (EOFException unused) {
                    this.anf = i - this.ane.size();
                    com.kwad.sdk.crash.utils.b.closeQuietly(bVar);
                    return;
                }
            }
        } catch (Throwable th) {
            com.kwad.sdk.crash.utils.b.closeQuietly(bVar);
            throw th;
        }
    }

    private void Am() throws IOException {
        p(this.amX);
        Iterator<b> it = this.ane.values().iterator();
        while (it.hasNext()) {
            b next = it.next();
            int i = 0;
            if (next.ans == null) {
                while (i < this.anb) {
                    this.size += next.anq[i];
                    this.anc++;
                    i++;
                }
            } else {
                next.ans = null;
                while (i < this.anb) {
                    p(next.bU(i));
                    p(next.bV(i));
                    i++;
                }
                it.remove();
            }
        }
    }

    private synchronized void An() {
        if (this.and != null) {
            com.kwad.sdk.crash.utils.b.closeQuietly(this.and);
        }
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(this.amX), com.kwad.sdk.crash.utils.a.US_ASCII));
        try {
            bufferedWriter.write("libcore.io.DiskLruCache");
            bufferedWriter.write("\n");
            bufferedWriter.write("1");
            bufferedWriter.write("\n");
            bufferedWriter.write(Integer.toString(this.amZ));
            bufferedWriter.write("\n");
            bufferedWriter.write(Integer.toString(this.anb));
            bufferedWriter.write("\n");
            bufferedWriter.write("\n");
            for (b bVar : this.ane.values()) {
                bufferedWriter.write(bVar.ans != null ? "DIRTY " + bVar.key + '\n' : "CLEAN " + bVar.key + bVar.As() + '\n');
            }
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedWriter);
            if (this.amW.exists()) {
                a(this.amW, this.amY, true);
            }
            a(this.amX, this.amW, false);
            this.amY.delete();
            this.and = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(this.amW, true), com.kwad.sdk.crash.utils.a.US_ASCII));
        } catch (Throwable th) {
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedWriter);
            throw th;
        }
    }

    private boolean Ap() {
        int i = this.anf;
        return i >= 2000 && i >= this.ane.size();
    }

    private void Aq() {
        while (this.anc > this.ana) {
            remove(this.ane.entrySet().iterator().next().getKey());
        }
    }

    static int a(a aVar, int i) {
        aVar.anf = 0;
        return 0;
    }

    public static a a(File file, int i, int i2, long j) {
        return a(file, 1, 1, 209715200L, Integer.MAX_VALUE);
    }

    public static a a(File file, int i, int i2, long j, int i3) throws IOException {
        if (j <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        if (i3 <= 0) {
            throw new IllegalArgumentException("maxFileCount <= 0");
        }
        if (i2 <= 0) {
            throw new IllegalArgumentException("valueCount <= 0");
        }
        File file2 = new File(file, "journal.bkp");
        if (file2.exists()) {
            File file3 = new File(file, "journal");
            if (file3.exists()) {
                file2.delete();
            } else {
                a(file2, file3, false);
            }
        }
        a aVar = new a(file, i, i2, j, i3);
        if (aVar.amW.exists()) {
            try {
                aVar.Al();
                aVar.Am();
                aVar.and = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(aVar.amW, true), com.kwad.sdk.crash.utils.a.US_ASCII));
                return aVar;
            } catch (IOException e) {
                System.out.println("DiskLruCache " + file + " is corrupt: " + e.getMessage() + ", removing");
                aVar.delete();
            }
        }
        file.mkdirs();
        a aVar2 = new a(file, i, i2, j, i3);
        aVar2.An();
        return aVar2;
    }

    private synchronized void a(a aVar, boolean z) {
        b bVar = aVar.anl;
        if (bVar.ans != aVar) {
            throw new IllegalStateException();
        }
        if (z && !bVar.anr) {
            for (int i = 0; i < this.anb; i++) {
                if (!aVar.anm[i]) {
                    aVar.abort();
                    throw new IllegalStateException("Newly created entry didn't create value for index " + i);
                }
                if (!bVar.bV(i).exists()) {
                    aVar.abort();
                    return;
                }
            }
        }
        for (int i2 = 0; i2 < this.anb; i2++) {
            File fileBV = bVar.bV(i2);
            if (!z) {
                p(fileBV);
            } else if (fileBV.exists()) {
                File fileBU = bVar.bU(i2);
                fileBV.renameTo(fileBU);
                long j = bVar.anq[i2];
                long length = fileBU.length();
                bVar.anq[i2] = length;
                this.size = (this.size - j) + length;
                this.anc++;
            }
        }
        this.anf++;
        bVar.ans = null;
        if (bVar.anr || z) {
            b.a(bVar, true);
            this.and.write("CLEAN " + bVar.key + bVar.As() + '\n');
            if (z) {
                long j2 = this.ang;
                this.ang = 1 + j2;
                bVar.ant = j2;
            }
        } else {
            this.ane.remove(bVar.key);
            this.and.write("REMOVE " + bVar.key + '\n');
        }
        this.and.flush();
        if (this.size > this.maxSize || this.anc > this.ana || Ap()) {
            this.anh.submit(this.ani);
        }
    }

    private static void a(File file, File file2, boolean z) throws IOException {
        if (z) {
            p(file2);
        }
        if (!file.renameTo(file2)) {
            throw new IOException();
        }
    }

    private static void cC(String str) {
        if (amU.matcher(str).matches()) {
            return;
        }
        throw new IllegalArgumentException("keys must match regex [a-z0-9_-]{1,64}: \"" + str + "\"");
    }

    private void checkNotClosed() {
        if (this.and == null) {
            throw new IllegalStateException("cache is closed");
        }
    }

    private void cz(String str) throws IOException {
        String strSubstring;
        int iIndexOf = str.indexOf(32);
        if (iIndexOf == -1) {
            throw new IOException("unexpected journal line: " + str);
        }
        int i = iIndexOf + 1;
        int iIndexOf2 = str.indexOf(32, i);
        if (iIndexOf2 == -1) {
            strSubstring = str.substring(i);
            if (iIndexOf == 6 && str.startsWith("REMOVE")) {
                this.ane.remove(strSubstring);
                return;
            }
        } else {
            strSubstring = str.substring(i, iIndexOf2);
        }
        b bVar = this.ane.get(strSubstring);
        byte b2 = 0;
        if (bVar == null) {
            bVar = new b(this, strSubstring, b2);
            this.ane.put(strSubstring, bVar);
        }
        if (iIndexOf2 != -1 && iIndexOf == 5 && str.startsWith("CLEAN")) {
            String[] strArrSplit = str.substring(iIndexOf2 + 1).split(" ");
            b.a(bVar, true);
            bVar.ans = null;
            bVar.b(strArrSplit);
            return;
        }
        if (iIndexOf2 == -1 && iIndexOf == 5 && str.startsWith("DIRTY")) {
            bVar.ans = new a(this, bVar, b2);
        } else {
            if (iIndexOf2 == -1 && iIndexOf == 4 && str.startsWith("READ")) {
                return;
            }
            throw new IOException("unexpected journal line: " + str);
        }
    }

    private synchronized a e(String str, long j) {
        checkNotClosed();
        cC(str);
        b bVar = this.ane.get(str);
        byte b2 = 0;
        if (bVar == null) {
            bVar = new b(this, str, b2);
            this.ane.put(str, bVar);
        } else if (bVar.ans != null) {
            return null;
        }
        a aVar = new a(this, bVar, b2);
        bVar.ans = aVar;
        this.and.write("DIRTY " + str + '\n');
        this.and.flush();
        return aVar;
    }

    private static void p(File file) throws IOException {
        if (file.exists() && !file.delete()) {
            throw new IOException();
        }
    }

    private void trimToSize() {
        while (this.size > this.maxSize) {
            remove(this.ane.entrySet().iterator().next().getKey());
        }
    }

    public final synchronized int Ao() {
        return this.ana;
    }

    public final synchronized c cA(String str) {
        checkNotClosed();
        cC(str);
        b bVar = this.ane.get(str);
        if (bVar == null) {
            return null;
        }
        if (!bVar.anr) {
            return null;
        }
        File[] fileArr = new File[this.anb];
        InputStream[] inputStreamArr = new InputStream[this.anb];
        for (int i = 0; i < this.anb; i++) {
            try {
                File fileBU = bVar.bU(i);
                fileArr[i] = fileBU;
                inputStreamArr[i] = new FileInputStream(fileBU);
            } catch (FileNotFoundException unused) {
                for (int i2 = 0; i2 < this.anb && inputStreamArr[i2] != null; i2++) {
                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamArr[i2]);
                }
                return null;
            }
        }
        this.anf++;
        this.and.append((CharSequence) ("READ " + str + '\n'));
        if (Ap()) {
            this.anh.submit(this.ani);
        }
        return new c(this, str, bVar.ant, fileArr, inputStreamArr, bVar.anq, (byte) 0);
    }

    public final a cB(String str) {
        return e(str, -1L);
    }

    @Override
    public final synchronized void close() {
        if (this.and == null) {
            return;
        }
        for (b bVar : new ArrayList(this.ane.values())) {
            if (bVar.ans != null) {
                bVar.ans.abort();
            }
        }
        trimToSize();
        Aq();
        com.kwad.sdk.crash.utils.b.closeQuietly(this.and);
        this.and = null;
    }

    public final void delete() {
        close();
        q.deleteContents(this.amV);
    }

    public final synchronized void flush() {
        checkNotClosed();
        trimToSize();
        Aq();
        this.and.flush();
    }

    public final File getDirectory() {
        return this.amV;
    }

    public final synchronized long getMaxSize() {
        return this.maxSize;
    }

    public final synchronized boolean remove(String str) {
        checkNotClosed();
        cC(str);
        b bVar = this.ane.get(str);
        if (bVar != null && bVar.ans == null) {
            for (int i = 0; i < this.anb; i++) {
                File fileBU = bVar.bU(i);
                if (fileBU.exists() && !fileBU.delete()) {
                    throw new IOException("failed to delete " + fileBU);
                }
                this.size -= bVar.anq[i];
                this.anc--;
                bVar.anq[i] = 0;
            }
            this.anf++;
            this.and.append((CharSequence) ("REMOVE " + str + '\n'));
            this.ane.remove(str);
            if (Ap()) {
                this.anh.submit(this.ani);
            }
            return true;
        }
        return false;
    }
}
