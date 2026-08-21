package com.czhj.volley.toolbox;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class ByteArrayPool {
    protected static final Comparator<byte[]> BUF_COMPARATOR = new Comparator<byte[]>() {
        @Override
        public int compare(byte[] bArr, byte[] bArr2) {
            return bArr.length - bArr2.length;
        }
    };
    private final int c;
    private final List<byte[]> a = new ArrayList();
    private final List<byte[]> b = new ArrayList(64);
    private int d = 0;

    public ByteArrayPool(int i) {
        this.c = i;
    }

    private synchronized void a() {
        while (this.d > this.c) {
            byte[] bArrRemove = this.a.remove(0);
            this.b.remove(bArrRemove);
            this.d -= bArrRemove.length;
        }
    }

    public synchronized byte[] getBuf(int i) {
        for (int i2 = 0; i2 < this.b.size(); i2++) {
            byte[] bArr = this.b.get(i2);
            if (bArr.length >= i) {
                this.d -= bArr.length;
                this.b.remove(i2);
                this.a.remove(bArr);
                return bArr;
            }
        }
        return new byte[i];
    }

    public synchronized void returnBuf(byte[] bArr) {
        if (bArr != null) {
            if (bArr.length <= this.c) {
                this.a.add(bArr);
                int iBinarySearch = Collections.binarySearch(this.b, bArr, BUF_COMPARATOR);
                if (iBinarySearch < 0) {
                    iBinarySearch = (-iBinarySearch) - 1;
                }
                this.b.add(iBinarySearch, bArr);
                this.d += bArr.length;
                a();
            }
        }
    }
}
