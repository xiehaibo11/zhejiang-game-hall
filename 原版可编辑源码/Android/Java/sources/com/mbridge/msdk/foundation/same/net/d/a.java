package com.mbridge.msdk.foundation.same.net.d;

import android.text.TextUtils;
import com.kuaishou.weapon.p0.bh;
import com.mbridge.msdk.foundation.same.net.i;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.util.zip.GZIPInputStream;

public class a extends i<Void> {
    private static final String c = a.class.getSimpleName();
    private File d;
    private File e;

    @Override
    public final int g() {
        return 1;
    }

    public a(File file, String str) {
        super(0, str);
        this.d = file;
        this.e = new File(file + bh.k);
    }

    @Override
    protected final k<Void> a(com.mbridge.msdk.foundation.same.net.e.c cVar) {
        if (!c()) {
            if (this.e.canRead() && this.e.length() > 0) {
                if (this.e.renameTo(this.d)) {
                    return k.a(null, cVar);
                }
                z.b(c, "Can't rename the download temporary file!");
                return k.a(new com.mbridge.msdk.foundation.same.net.a.a(4, cVar));
            }
            z.b(c, "Download temporary file was invalid!");
            return k.a(new com.mbridge.msdk.foundation.same.net.a.a(4, cVar));
        }
        return k.a(new com.mbridge.msdk.foundation.same.net.a.a(-2, cVar));
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x0095, code lost:
    
        r18.b(r16);
     */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final byte[] a(com.mbridge.msdk.foundation.same.net.e.b bVar, com.mbridge.msdk.foundation.same.net.c cVar) throws Throwable {
        InputStream gZIPInputStream;
        String strA = com.mbridge.msdk.foundation.same.net.f.b.a(bVar.b(), "Content-Length");
        long j = 0;
        long jLongValue = !TextUtils.isEmpty(strA) ? Long.valueOf(strA).longValue() : 0L;
        if (jLongValue <= 0) {
            z.b(c, "Response doesn't present Content-Length!");
        }
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
                gZIPInputStream = (!com.mbridge.msdk.foundation.same.net.f.b.b(bVar.b()) || (inputStreamC instanceof GZIPInputStream)) ? inputStreamC : new GZIPInputStream(inputStreamC);
            } catch (Throwable th) {
                th = th;
                inputStream = inputStreamC;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            byte[] bArr = new byte[6144];
            while (true) {
                int i = gZIPInputStream.read(bArr);
                if (i == -1) {
                    break;
                }
                randomAccessFile.write(bArr, 0, i);
                long j2 = j + ((long) i);
                cVar.a(this, jLongValue, j2);
                if (c()) {
                    break;
                }
                j = j2;
            }
            if (gZIPInputStream != null) {
                try {
                    gZIPInputStream.close();
                } catch (Exception unused) {
                    z.d(c, "Error occured when calling InputStream.close");
                }
            }
            randomAccessFile.close();
            return null;
        } catch (Throwable th3) {
            th = th3;
            inputStream = gZIPInputStream;
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (Exception unused2) {
                    z.d(c, "Error occured when calling InputStream.close");
                }
            }
            randomAccessFile.close();
            throw th;
        }
    }
}
