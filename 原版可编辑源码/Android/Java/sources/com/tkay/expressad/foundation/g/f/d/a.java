package com.tkay.expressad.foundation.g.f.d;

import android.text.TextUtils;
import com.kuaishou.weapon.p0.bh;
import com.tkay.expressad.foundation.g.f.i;
import com.tkay.expressad.foundation.g.f.k;
import java.io.File;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.util.zip.GZIPInputStream;

public class a extends i<Void> {
    private static final String c = a.class.getSimpleName();
    private File d;
    private File e;

    @Override
    public final int j() {
        return 1;
    }

    public a(File file, String str) {
        super(str);
        this.d = file;
        this.e = new File(file + bh.k);
    }

    @Override
    protected final k<Void> a(com.tkay.expressad.foundation.g.f.f.c cVar) {
        if (!f()) {
            if (this.e.canRead() && this.e.length() > 0) {
                if (this.e.renameTo(this.d)) {
                    return k.a(null, cVar);
                }
                return k.a(new com.tkay.expressad.foundation.g.f.a.a(4, cVar));
            }
            return k.a(new com.tkay.expressad.foundation.g.f.a.a(4, cVar));
        }
        return k.a(new com.tkay.expressad.foundation.g.f.a.a(-2, cVar));
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x0081, code lost:
    
        r15.b(r13);
     */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final byte[] a(com.tkay.expressad.foundation.g.f.f.b bVar, com.tkay.expressad.foundation.g.f.c cVar) throws Throwable {
        String strA = com.tkay.expressad.foundation.g.f.g.e.a(bVar.b(), "Content-Length");
        long j = 0;
        long jLongValue = !TextUtils.isEmpty(strA) ? Long.valueOf(strA).longValue() : 0L;
        InputStream inputStream = null;
        if (jLongValue > 0 && this.d.length() == jLongValue) {
            this.d.renameTo(this.e);
            cVar.a(this, jLongValue, jLongValue);
            return null;
        }
        RandomAccessFile randomAccessFile = new RandomAccessFile(this.e.getAbsolutePath(), "rw");
        randomAccessFile.setLength(0L);
        try {
            InputStream inputStreamC = bVar.c();
            try {
                InputStream gZIPInputStream = (!com.tkay.expressad.foundation.g.f.g.e.b(bVar.b()) || (inputStreamC instanceof GZIPInputStream)) ? inputStreamC : new GZIPInputStream(inputStreamC);
                try {
                    byte[] bArr = new byte[6144];
                    while (true) {
                        int i = gZIPInputStream.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        randomAccessFile.write(bArr, 0, i);
                        j += (long) i;
                        cVar.a(this, jLongValue, j);
                        if (f()) {
                            break;
                        }
                    }
                    if (gZIPInputStream != null) {
                        try {
                            gZIPInputStream.close();
                        } catch (Exception e) {
                            e.getMessage();
                        }
                    }
                    randomAccessFile.close();
                    return null;
                } catch (Throwable th) {
                    inputStream = gZIPInputStream;
                    th = th;
                    if (inputStream != null) {
                        try {
                            inputStream.close();
                        } catch (Exception e2) {
                            e2.getMessage();
                        }
                    }
                    randomAccessFile.close();
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                inputStream = inputStreamC;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }
}
