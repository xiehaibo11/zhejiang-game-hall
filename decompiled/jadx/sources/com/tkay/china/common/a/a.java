package com.tkay.china.common.a;

import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Log;
import com.ss.android.download.api.constant.BaseConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.RandomAccessFile;
import java.net.HttpURLConnection;
import java.net.SocketTimeoutException;
import java.net.URL;
import org.apache.http.conn.ConnectTimeoutException;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a {
    public static final String e = ".temp";
    public static final String f = ".log";
    public static final String g = ".apk";
    public static final int h = 0;
    public static final int i = 1;
    public static final int j = 2;
    public static final int k = 3;
    public static final int l = 4;
    private static final String u = a.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected String f5921a;
    protected String b;
    protected boolean c;
    protected boolean d;
    public int m = 0;
    protected long n;
    protected long o;
    protected long p;
    protected long q;
    protected long r;
    protected long s;
    protected long t;
    private InterfaceC0405a v;
    private e w;
    private String x;

    /* JADX INFO: renamed from: com.tkay.china.common.a.a$a, reason: collision with other inner class name */
    public interface InterfaceC0405a {
        void a(e eVar, long j);

        void a(e eVar, long j, long j2);

        void a(e eVar, long j, long j2, int i);

        void a(e eVar, String str);

        void b(e eVar, long j, long j2);
    }

    private static int i() {
        return BaseConstants.Time.MINUTE;
    }

    private static int j() {
        return 20000;
    }

    protected boolean c() {
        return true;
    }

    public a(e eVar) {
        this.w = eVar;
        this.f5921a = eVar.b;
        this.b = eVar.n;
    }

    public final void a(InterfaceC0405a interfaceC0405a) {
        this.v = interfaceC0405a;
        this.c = false;
        com.tkay.china.common.a.a.a.a().a((com.tkay.core.common.l.b.b) new AnonymousClass1());
    }

    public final void a() {
        this.c = true;
    }

    public final void b() {
        this.d = true;
    }

    /* JADX INFO: renamed from: com.tkay.china.common.a.a$1, reason: invalid class name */
    final class AnonymousClass1 extends com.tkay.core.common.l.b.b {
        AnonymousClass1() {
        }

        /* JADX WARN: Removed duplicated region for block: B:145:0x0326  */
        @Override // com.tkay.core.common.l.b.b
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final void a() throws java.lang.Throwable {
            /*
                Method dump skipped, instruction units count: 820
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.china.common.a.a.AnonymousClass1.a():void");
        }

        private void b(String str) throws Throwable {
            HttpURLConnection httpURLConnection;
            a.this.o = System.currentTimeMillis();
            a.this.p = SystemClock.elapsedRealtime();
            HttpURLConnection httpURLConnection2 = null;
            try {
                try {
                    String unused = a.u;
                    httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                } catch (Throwable th) {
                    th = th;
                }
                try {
                    httpURLConnection.setInstanceFollowRedirects(false);
                    if (a.this.w.o) {
                        String strI = com.tkay.core.common.l.d.i();
                        if (!TextUtils.isEmpty(strI)) {
                            httpURLConnection.addRequestProperty("User-Agent", strI);
                        }
                    }
                    if (a.this.n > 0) {
                        String unused2 = a.u;
                        StringBuilder sb = new StringBuilder("Range: startPos -> ");
                        sb.append(a.this.n);
                        sb.append("  ,  endPos -> ");
                        sb.append(a.this.s);
                        httpURLConnection.setRequestProperty("Range", "bytes=" + a.this.n + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                    } else {
                        a.this.s = httpURLConnection.getContentLength();
                    }
                    if (a.this.s <= 0) {
                        String unused3 = a.u;
                        a.this.a(c.a("10000", "downloadSize <= 0"));
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                            return;
                        }
                        return;
                    }
                    if (a.this.c) {
                        if (a.this.w != null) {
                            a.this.w.j();
                        }
                        a.this.m = 3;
                        a.this.d();
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                            return;
                        }
                        return;
                    }
                    httpURLConnection.setConnectTimeout(BaseConstants.Time.MINUTE);
                    httpURLConnection.connect();
                    int responseCode = httpURLConnection.getResponseCode();
                    if (responseCode != 200 && responseCode != 206) {
                        String unused4 = a.u;
                        StringBuilder sb2 = new StringBuilder("http respond status code is ");
                        sb2.append(responseCode);
                        sb2.append(" ! url=");
                        sb2.append(str);
                        a.this.a(c.a("10001", httpURLConnection.getResponseMessage()));
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                            return;
                        }
                        return;
                    }
                    if (a.this.c) {
                        if (a.this.w != null) {
                            a.this.w.j();
                        }
                        a.this.m = 3;
                        a.this.d();
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                            return;
                        }
                        return;
                    }
                    InputStream inputStream = httpURLConnection.getInputStream();
                    if (a.this.w != null) {
                        a.this.w.i();
                    }
                    a.this.w.h = a.this.s;
                    if (a.this.v != null) {
                        a.this.v.a(a.this.w, a.this.n, a.this.s);
                    }
                    int iA = a.this.a(a.this.b, inputStream);
                    a.this.m = iA;
                    if (inputStream != null) {
                        inputStream.close();
                    }
                    a.this.q = System.currentTimeMillis();
                    a.this.r = SystemClock.elapsedRealtime();
                    a.this.w.i = a.this.r - a.this.p;
                    if (iA == 1) {
                        String unused5 = a.u;
                        new StringBuilder("download success --> ").append(a.this.f5921a);
                        a.this.e();
                    } else if (iA == 2 || iA == 3) {
                        a.this.d();
                    } else {
                        String unused6 = a.u;
                        new StringBuilder("download fail --> ").append(a.this.f5921a);
                        a.this.b(c.a("10000", "Save fail!(" + a.this.x + ")"));
                    }
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                } catch (OutOfMemoryError e) {
                    e = e;
                    httpURLConnection2 = httpURLConnection;
                    System.gc();
                    String unused7 = a.u;
                    e.getMessage();
                    a.this.a(c.a("10000", e.getMessage() != null ? e.getMessage() : "Http connect error!"));
                    if (httpURLConnection2 != null) {
                        httpURLConnection2.disconnect();
                    }
                } catch (StackOverflowError e2) {
                    e = e2;
                    httpURLConnection2 = httpURLConnection;
                    System.gc();
                    String unused8 = a.u;
                    e.getMessage();
                    a.this.a(c.a("10000", e.getMessage() != null ? e.getMessage() : "Http connect error!"));
                    if (httpURLConnection2 != null) {
                        httpURLConnection2.disconnect();
                    }
                } catch (Error e3) {
                    e = e3;
                    httpURLConnection2 = httpURLConnection;
                    System.gc();
                    String unused9 = a.u;
                    e.getMessage();
                    a.this.a(c.a("10000", e.getMessage() != null ? e.getMessage() : "Http connect error!"));
                    if (httpURLConnection2 != null) {
                        httpURLConnection2.disconnect();
                    }
                } catch (SocketTimeoutException e4) {
                    e = e4;
                    httpURLConnection2 = httpURLConnection;
                    a.this.a(c.a("20001", e.getMessage()));
                    String unused10 = a.u;
                    if (httpURLConnection2 != null) {
                        httpURLConnection2.disconnect();
                    }
                } catch (ConnectTimeoutException e5) {
                    e = e5;
                    httpURLConnection2 = httpURLConnection;
                    a.this.a(e);
                    if (httpURLConnection2 != null) {
                        httpURLConnection2.disconnect();
                    }
                } catch (Exception e6) {
                    e = e6;
                    httpURLConnection2 = httpURLConnection;
                    String unused11 = a.u;
                    e.getMessage();
                    a.this.a(c.a("10000", e.getMessage() != null ? e.getMessage() : "Http connect error!"));
                    if (httpURLConnection2 != null) {
                        httpURLConnection2.disconnect();
                    }
                } catch (Throwable th2) {
                    th = th2;
                    httpURLConnection2 = httpURLConnection;
                    if (httpURLConnection2 != null) {
                        httpURLConnection2.disconnect();
                    }
                    throw th;
                }
            } catch (OutOfMemoryError e7) {
                e = e7;
            } catch (StackOverflowError e8) {
                e = e8;
            } catch (Error e9) {
                e = e9;
            } catch (SocketTimeoutException e10) {
                e = e10;
            } catch (ConnectTimeoutException e11) {
                e = e11;
            } catch (Exception e12) {
                e = e12;
            }
        }
    }

    private void g() {
        com.tkay.china.common.a.a.a.a().a((com.tkay.core.common.l.b.b) new AnonymousClass1());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int a(String str, InputStream inputStream) {
        RandomAccessFile randomAccessFile;
        String strA = com.tkay.china.common.c.b.a(str);
        if (TextUtils.isEmpty(strA)) {
            return 4;
        }
        File file = new File(strA + e);
        File file2 = new File(strA + f);
        RandomAccessFile randomAccessFile2 = null;
        try {
            if (!file.exists()) {
                boolean zCreateNewFile = file.createNewFile();
                boolean zCreateNewFile2 = file2.createNewFile();
                if (!zCreateNewFile || !zCreateNewFile2) {
                    return 4;
                }
            }
            RandomAccessFile randomAccessFile3 = new RandomAccessFile(file, "rws");
            try {
                randomAccessFile = new RandomAccessFile(file2, "rws");
                try {
                    long j2 = 0;
                    if (this.n > 0) {
                        Log.i(u, "(" + this.w.c + ")  seek to -> " + this.n);
                        randomAccessFile3.seek(this.n);
                    } else {
                        Log.i(u, "(" + this.w.c + ")  set temp file size -> " + this.s);
                        randomAccessFile3.setLength(this.s);
                    }
                    byte[] bArr = new byte[1048576];
                    this.t = this.n;
                    while (true) {
                        int i2 = inputStream.read(bArr);
                        if (-1 == i2) {
                            File file3 = file2;
                            file.renameTo(new File(strA + g));
                            if (file3.exists()) {
                                file3.delete();
                            }
                            if (this.w != null) {
                                this.w.l();
                            }
                            try {
                                randomAccessFile3.close();
                            } catch (IOException e2) {
                                e2.printStackTrace();
                            }
                            try {
                                randomAccessFile.close();
                                return 1;
                            } catch (IOException e3) {
                                e3.printStackTrace();
                                return 1;
                            }
                        }
                        if (this.d) {
                            if (this.w != null) {
                                this.w.k();
                            }
                            try {
                                randomAccessFile3.close();
                            } catch (IOException e4) {
                                e4.printStackTrace();
                            }
                            try {
                                randomAccessFile.close();
                                return 2;
                            } catch (IOException e5) {
                                e5.printStackTrace();
                                return 2;
                            }
                        }
                        if (this.c) {
                            if (this.w != null) {
                                this.w.j();
                            }
                            try {
                                randomAccessFile3.close();
                            } catch (IOException e6) {
                                e6.printStackTrace();
                            }
                            try {
                                randomAccessFile.close();
                                return 3;
                            } catch (IOException e7) {
                                e7.printStackTrace();
                                return 3;
                            }
                        }
                        randomAccessFile3.write(bArr, 0, i2);
                        File file4 = file2;
                        long j3 = this.t + ((long) i2);
                        this.t = j3;
                        if (this.w != null) {
                            this.w.g = j3;
                        }
                        randomAccessFile.setLength(j2);
                        randomAccessFile.write(String.valueOf(this.t).getBytes());
                        if (this.v != null) {
                            this.v.b(this.w, this.t, this.s);
                            file2 = file4;
                            j2 = 0;
                        } else {
                            file2 = file4;
                        }
                    }
                } catch (Throwable th) {
                    th = th;
                    randomAccessFile2 = randomAccessFile3;
                    try {
                        th.printStackTrace();
                        this.x = th.getMessage();
                        if (randomAccessFile2 != null) {
                            try {
                                randomAccessFile2.close();
                            } catch (IOException e8) {
                                e8.printStackTrace();
                            }
                        }
                        if (randomAccessFile == null) {
                            return 4;
                        }
                        try {
                            randomAccessFile.close();
                            return 4;
                        } catch (IOException e9) {
                            e9.printStackTrace();
                            return 4;
                        }
                    } finally {
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                randomAccessFile = null;
            }
        } catch (Throwable th3) {
            th = th3;
            randomAccessFile = null;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.io.File] */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v10, types: [java.io.InputStreamReader, java.io.Reader] */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4, types: [java.io.InputStreamReader] */
    /* JADX WARN: Type inference failed for: r0v6, types: [java.io.InputStreamReader] */
    /* JADX WARN: Type inference failed for: r0v8 */
    /* JADX WARN: Type inference failed for: r0v9 */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r3v3 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v5 */
    /* JADX WARN: Type inference failed for: r3v6, types: [java.io.FileInputStream] */
    /* JADX WARN: Type inference failed for: r3v7, types: [java.io.FileInputStream] */
    /* JADX WARN: Type inference failed for: r3v8, types: [java.io.FileInputStream, java.io.InputStream] */
    private void h() throws Throwable {
        BufferedReader bufferedReader;
        ?? file = new File(com.tkay.china.common.c.b.a(this.b) + f);
        StringBuilder sb = new StringBuilder();
        sb.append(com.tkay.china.common.c.b.a(this.b));
        ?? fileInputStream = e;
        sb.append(e);
        File file2 = new File(sb.toString());
        if (!file.exists() || !file2.exists()) {
            try {
                file.delete();
                file2.delete();
                return;
            } catch (Throwable unused) {
                return;
            }
        }
        BufferedReader bufferedReader2 = null;
        try {
            try {
                fileInputStream = new FileInputStream((File) file);
                try {
                    file = new InputStreamReader(fileInputStream);
                    try {
                        bufferedReader = new BufferedReader(file);
                    } catch (Exception e2) {
                        e = e2;
                    }
                    try {
                        String line = bufferedReader.readLine();
                        if (!TextUtils.isEmpty(line)) {
                            long jLongValue = Long.valueOf(line).longValue();
                            this.n = jLongValue;
                            if (jLongValue > file2.length()) {
                                this.n = 0L;
                            } else {
                                this.s = file2.length();
                            }
                            StringBuilder sb2 = new StringBuilder("readLogFile: startPost -> ");
                            sb2.append(this.n);
                            sb2.append(", downloadSize -> ");
                            sb2.append(this.s);
                        }
                        try {
                            bufferedReader.close();
                            file.close();
                            fileInputStream.close();
                        } catch (IOException e3) {
                            e3.printStackTrace();
                        }
                    } catch (Exception e4) {
                        e = e4;
                        bufferedReader2 = bufferedReader;
                        e.printStackTrace();
                        if (bufferedReader2 != null) {
                            try {
                                bufferedReader2.close();
                            } catch (IOException e5) {
                                e5.printStackTrace();
                                return;
                            }
                        }
                        if (file != 0) {
                            file.close();
                        }
                        if (fileInputStream != 0) {
                            fileInputStream.close();
                        }
                    } catch (Throwable th) {
                        th = th;
                        bufferedReader2 = bufferedReader;
                        if (bufferedReader2 != null) {
                            try {
                                bufferedReader2.close();
                            } catch (IOException e6) {
                                e6.printStackTrace();
                                throw th;
                            }
                        }
                        if (file != 0) {
                            file.close();
                        }
                        if (fileInputStream != 0) {
                            fileInputStream.close();
                        }
                        throw th;
                    }
                } catch (Exception e7) {
                    e = e7;
                    file = 0;
                } catch (Throwable th2) {
                    th = th2;
                    file = 0;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Exception e8) {
            e = e8;
            file = 0;
            fileInputStream = 0;
        } catch (Throwable th4) {
            th = th4;
            file = 0;
            fileInputStream = 0;
        }
    }

    protected final void a(ConnectTimeoutException connectTimeoutException) {
        b(c.a("10000", connectTimeoutException.getMessage()));
    }

    protected final void a(b bVar) {
        new StringBuilder("url: ").append(this.f5921a);
        b(bVar);
    }

    protected final void d() {
        new StringBuilder("url: ").append(this.f5921a);
        InterfaceC0405a interfaceC0405a = this.v;
        if (interfaceC0405a != null) {
            interfaceC0405a.a(this.w, this.t, this.s, this.m);
        }
    }

    protected final void e() {
        new StringBuilder("url: ").append(this.f5921a);
        InterfaceC0405a interfaceC0405a = this.v;
        if (interfaceC0405a != null) {
            e eVar = this.w;
            interfaceC0405a.a(eVar, eVar.i);
        }
    }

    protected final void b(b bVar) {
        StringBuilder sb = new StringBuilder("download failed --> ");
        sb.append(this.f5921a);
        sb.append("(");
        sb.append(bVar.a());
        sb.append(")");
        this.w.n();
        InterfaceC0405a interfaceC0405a = this.v;
        if (interfaceC0405a != null) {
            interfaceC0405a.a(this.w, bVar.b());
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.io.File] */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4, types: [java.io.InputStreamReader] */
    /* JADX WARN: Type inference failed for: r0v6, types: [java.io.InputStreamReader] */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r0v8 */
    /* JADX WARN: Type inference failed for: r0v9, types: [java.io.InputStreamReader, java.io.Reader] */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r3v3 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v5 */
    /* JADX WARN: Type inference failed for: r3v6, types: [java.io.FileInputStream] */
    /* JADX WARN: Type inference failed for: r3v7, types: [java.io.FileInputStream] */
    /* JADX WARN: Type inference failed for: r3v8, types: [java.io.FileInputStream, java.io.InputStream] */
    static /* synthetic */ void a(a aVar) throws Throwable {
        BufferedReader bufferedReader;
        ?? file = new File(com.tkay.china.common.c.b.a(aVar.b) + f);
        StringBuilder sb = new StringBuilder();
        sb.append(com.tkay.china.common.c.b.a(aVar.b));
        ?? fileInputStream = e;
        sb.append(e);
        File file2 = new File(sb.toString());
        if (!file.exists() || !file2.exists()) {
            try {
                file.delete();
                file2.delete();
                return;
            } catch (Throwable unused) {
                return;
            }
        }
        BufferedReader bufferedReader2 = null;
        try {
            try {
                fileInputStream = new FileInputStream((File) file);
                try {
                    file = new InputStreamReader(fileInputStream);
                    try {
                        bufferedReader = new BufferedReader(file);
                    } catch (Exception e2) {
                        e = e2;
                    }
                    try {
                        String line = bufferedReader.readLine();
                        if (!TextUtils.isEmpty(line)) {
                            long jLongValue = Long.valueOf(line).longValue();
                            aVar.n = jLongValue;
                            if (jLongValue > file2.length()) {
                                aVar.n = 0L;
                            } else {
                                aVar.s = file2.length();
                            }
                            StringBuilder sb2 = new StringBuilder("readLogFile: startPost -> ");
                            sb2.append(aVar.n);
                            sb2.append(", downloadSize -> ");
                            sb2.append(aVar.s);
                        }
                        try {
                            bufferedReader.close();
                            file.close();
                            fileInputStream.close();
                        } catch (IOException e3) {
                            e3.printStackTrace();
                        }
                    } catch (Exception e4) {
                        e = e4;
                        bufferedReader2 = bufferedReader;
                        e.printStackTrace();
                        if (bufferedReader2 != null) {
                            try {
                                bufferedReader2.close();
                            } catch (IOException e5) {
                                e5.printStackTrace();
                                return;
                            }
                        }
                        if (file != 0) {
                            file.close();
                        }
                        if (fileInputStream != 0) {
                            fileInputStream.close();
                        }
                    } catch (Throwable th) {
                        th = th;
                        bufferedReader2 = bufferedReader;
                        if (bufferedReader2 != null) {
                            try {
                                bufferedReader2.close();
                            } catch (IOException e6) {
                                e6.printStackTrace();
                                throw th;
                            }
                        }
                        if (file != 0) {
                            file.close();
                        }
                        if (fileInputStream != 0) {
                            fileInputStream.close();
                        }
                        throw th;
                    }
                } catch (Exception e7) {
                    e = e7;
                    file = 0;
                } catch (Throwable th2) {
                    th = th2;
                    file = 0;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Exception e8) {
            e = e8;
            file = 0;
            fileInputStream = 0;
        } catch (Throwable th4) {
            th = th4;
            file = 0;
            fileInputStream = 0;
        }
    }
}
