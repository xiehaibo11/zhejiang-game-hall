package com.kwad.sdk.pngencrypt.chunk;

import com.kwad.sdk.pngencrypt.PngjException;
import java.io.ByteArrayInputStream;
import java.util.zip.CRC32;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    public final byte[] aFt;
    private CRC32 aFw;
    public final String adE;
    public final int len;
    public byte[] data = null;
    private long aFu = 0;
    public byte[] aFv = new byte[4];

    public d(int i, String str, boolean z) {
        this.len = i;
        this.adE = str;
        this.aFt = b.fg(str);
        for (int i2 = 0; i2 < 4; i2++) {
            byte[] bArr = this.aFt;
            if (bArr[i2] < 65 || bArr[i2] > 122 || (bArr[i2] > 90 && bArr[i2] < 97)) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad id chunk: must be ascii letters " + str));
            }
        }
        if (z) {
            GX();
        }
    }

    private void GX() {
        byte[] bArr = this.data;
        if (bArr == null || bArr.length < this.len) {
            this.data = new byte[this.len];
        }
    }

    final ByteArrayInputStream GY() {
        return new ByteArrayInputStream(this.data);
    }

    public final long GZ() {
        return this.aFu;
    }

    public final void ar(long j) {
        this.aFu = j;
    }

    public final void bw(boolean z) {
        int value = (int) this.aFw.getValue();
        int iG = com.kwad.sdk.pngencrypt.n.g(this.aFv, 0);
        if (value != iG) {
            String str = String.format("Bad CRC in chunk: %s (offset:%d). Expected:%x Got:%x", this.adE, Long.valueOf(this.aFu), Integer.valueOf(iG), Integer.valueOf(value));
            if (z) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException(str));
            } else {
                com.kwad.sdk.core.e.c.d("PNG_ENCRYPT", str);
            }
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        d dVar = (d) obj;
        String str = this.adE;
        if (str == null) {
            if (dVar.adE != null) {
                return false;
            }
        } else if (!str.equals(dVar.adE)) {
            return false;
        }
        return this.aFu == dVar.aFu;
    }

    public final void f(byte[] bArr, int i, int i2) {
        if (this.aFw == null) {
            this.aFw = new CRC32();
        }
        this.aFw.update(bArr, i, i2);
    }

    public final int hashCode() {
        String str = this.adE;
        int iHashCode = str == null ? 0 : str.hashCode();
        long j = this.aFu;
        return ((iHashCode + 31) * 31) + ((int) (j ^ (j >>> 32)));
    }

    public final String toString() {
        return "chunkid=" + b.i(this.aFt) + " len=" + this.len;
    }
}
