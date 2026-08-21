package com.kwad.sdk.pngencrypt;

import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: classes2.dex */
public class a implements Closeable {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private int aDi;
    private boolean aDj;
    private long aDk;
    private byte[] buf;
    private boolean eof;
    private int offset;
    private InputStream stream;

    public a(InputStream inputStream) {
        this(inputStream, 16384);
    }

    private a(InputStream inputStream, int i) {
        this.eof = false;
        this.aDj = true;
        this.aDk = 0L;
        this.stream = inputStream;
        this.buf = new byte[16384];
    }

    private void Gl() {
        if (this.aDi > 0 || this.eof) {
            return;
        }
        try {
            this.offset = 0;
            int i = this.stream.read(this.buf);
            this.aDi = i;
            if (i == 0) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException("This should not happen: stream.read(buf) returned 0"));
            } else if (i < 0) {
                close();
            } else {
                this.aDk += (long) i;
            }
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException(e));
        }
    }

    private int a(f fVar, int i) {
        Gl();
        if (i <= 0 || i >= this.aDi) {
            i = this.aDi;
        }
        if (i <= 0) {
            if (!this.eof) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException("This should not happen"));
            }
            return fVar.isDone() ? -1 : 0;
        }
        int iB = fVar.b(this.buf, this.offset, i);
        if (iB > 0) {
            this.offset += iB;
            this.aDi -= iB;
        }
        if (iB > 0) {
            return iB;
        }
        if (!fVar.isDone()) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("This should not happen!"));
        }
        return -1;
    }

    public final int a(f fVar) {
        return a(fVar, Integer.MAX_VALUE);
    }

    public final int b(f fVar, int i) {
        int i2 = 36;
        while (i2 > 0) {
            int iA = a(fVar, i2);
            if (iA <= 0) {
                return iA;
            }
            i2 -= iA;
        }
        return 36;
    }

    public final void bt(boolean z) {
        this.aDj = z;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.eof = true;
        this.buf = null;
        this.aDi = 0;
        this.offset = 0;
        InputStream inputStream = this.stream;
        if (inputStream != null && this.aDj) {
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
        }
        this.stream = null;
    }
}
