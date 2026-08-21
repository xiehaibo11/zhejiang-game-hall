package com.igexin.push.f;

import android.text.TextUtils;
import com.igexin.b.a.b.c;
import com.igexin.b.a.d.e;
import com.igexin.push.core.d;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.Locale;
import javax.crypto.spec.SecretKeySpec;
import org.json.HTTP;

public class a extends e {
    private static a e;
    private ArrayList<String> a;
    private ArrayList<String> b;
    private long c;
    private String d;

    private a() {
        super(-2147483637);
        this.a = new ArrayList<>();
        this.b = new ArrayList<>();
        this.c = System.currentTimeMillis();
    }

    public static a i() {
        if (e == null) {
            synchronized (a.class) {
                if (e == null) {
                    e = new a();
                    c.b().a(e, true, true);
                }
            }
        }
        return e;
    }

    public static void k() {
        a aVar = e;
        if (aVar != null) {
            aVar.j();
        }
    }

    private long u() {
        long jCurrentTimeMillis = System.currentTimeMillis() - this.c;
        if ((jCurrentTimeMillis >= 60000 && this.a.size() > 0) || this.a.size() >= 10) {
            return 0L;
        }
        if (this.a.size() <= 0) {
            return Long.MAX_VALUE;
        }
        return 60000 - jCurrentTimeMillis;
    }

    /* JADX WARN: Removed duplicated region for block: B:58:0x00e0 A[EXC_TOP_SPLITTER, PHI: r2
      0x00e0: PHI (r2v4 java.io.OutputStream) = (r2v3 java.io.OutputStream), (r2v5 java.io.OutputStream) binds: [B:42:0x00eb, B:35:0x00de] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void v() {
        OutputStream fileOutputStream;
        if (d.g == null || d.E == null) {
            return;
        }
        synchronized (this) {
            this.b.addAll(this.a);
            this.a.clear();
        }
        w();
        File file = new File(this.d);
        if (file.exists() || file.mkdirs()) {
            String str = new SimpleDateFormat("yyyy-MM-dd", Locale.getDefault()).format(new Date());
            OutputStream outputStream = null;
            try {
                File file2 = new File(this.d + "/" + d.e + "." + str + com.tkay.china.common.a.a.f);
                if (!file2.exists()) {
                    if (!file2.createNewFile()) {
                        return;
                    } else {
                        com.igexin.b.a.c.a.a();
                    }
                }
                if (com.igexin.b.a.c.a.b() == null) {
                    com.igexin.b.a.c.a.a();
                    file2.delete();
                }
                try {
                    fileOutputStream = com.igexin.b.a.c.a.a(file2, new SecretKeySpec(d.ao, "AES"));
                } catch (Throwable unused) {
                    fileOutputStream = new FileOutputStream(file2, true);
                }
                outputStream = fileOutputStream;
                StringBuilder sb = new StringBuilder();
                Iterator<String> it = this.b.iterator();
                while (it.hasNext()) {
                    sb.append(it.next() + HTTP.CRLF);
                }
                if (sb.length() > 0) {
                    outputStream.write(sb.toString().getBytes("UTF-8"));
                }
            } catch (Exception unused2) {
                if (outputStream != null) {
                }
            } catch (Throwable th) {
                if (outputStream != null) {
                    try {
                        outputStream.close();
                    } catch (IOException unused3) {
                    }
                }
                throw th;
            }
            if (outputStream != null) {
                try {
                    outputStream.close();
                } catch (IOException unused4) {
                }
            }
            this.c = System.currentTimeMillis();
            this.b.clear();
        }
    }

    private void w() {
        if (TextUtils.isEmpty(this.d)) {
            this.d = com.igexin.push.util.c.c(d.g);
        }
    }

    public synchronized void a(String str) {
        this.a.add(str);
        try {
            if (this.a.size() <= 1 || this.a.size() >= 10) {
                notify();
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void b() {
        super.b();
        while (true) {
            try {
                synchronized (this) {
                    while (true) {
                        long jU = u();
                        if (jU == 0) {
                            break;
                        } else {
                            wait(jU);
                        }
                    }
                }
                v();
            } catch (Throwable unused) {
                v();
                return;
            }
        }
    }

    @Override
    public int b_() {
        return -2147483637;
    }

    @Override
    public void d() {
        super.d();
        this.n = true;
    }

    @Override
    protected void e() {
    }

    @Override
    protected void e_() {
        super.e_();
        e = null;
    }

    public void j() {
        if (s() != null) {
            s().interrupt();
        }
    }
}
