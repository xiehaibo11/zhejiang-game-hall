package com.ss.android.socialbase.appdownloader.c.rg;

import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;

public class pt {
    private boolean df;
    private int q;
    private InputStream rg;

    public pt() {
    }

    public pt(InputStream inputStream, boolean z) {
        rg(inputStream, z);
    }

    public final void rg(InputStream inputStream, boolean z) {
        this.rg = inputStream;
        this.df = z;
        this.q = 0;
    }

    public final void rg() {
        InputStream inputStream = this.rg;
        if (inputStream != null) {
            try {
                inputStream.close();
            } catch (IOException unused) {
            }
            rg((InputStream) null, false);
        }
    }

    public final int df() throws IOException {
        return rg(4);
    }

    public final int rg(int i) throws IOException {
        if (i >= 0 && i <= 4) {
            int i2 = 0;
            if (this.df) {
                for (int i3 = (i - 1) * 8; i3 >= 0; i3 -= 8) {
                    int i4 = this.rg.read();
                    if (i4 == -1) {
                        throw new EOFException();
                    }
                    this.q++;
                    i2 |= i4 << i3;
                }
                return i2;
            }
            int i5 = i * 8;
            int i6 = 0;
            while (i2 != i5) {
                int i7 = this.rg.read();
                if (i7 == -1) {
                    throw new EOFException();
                }
                this.q++;
                i6 |= i7 << i2;
                i2 += 8;
            }
            return i6;
        }
        throw new IllegalArgumentException();
    }

    public final int[] df(int i) throws IOException {
        int[] iArr = new int[i];
        rg(iArr, 0, i);
        return iArr;
    }

    public final void rg(int[] iArr, int i, int i2) throws IOException {
        while (i2 > 0) {
            iArr[i] = df();
            i2--;
            i++;
        }
    }

    public final void q(int i) throws IOException {
        if (i > 0) {
            long j = i;
            long jSkip = this.rg.skip(j);
            this.q = (int) (((long) this.q) + jSkip);
            if (jSkip != j) {
                throw new EOFException();
            }
        }
    }

    public final void q() throws IOException {
        q(4);
    }
}
