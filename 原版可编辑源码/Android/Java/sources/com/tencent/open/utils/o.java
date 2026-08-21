package com.tencent.open.utils;

import android.support.v4.view.MotionEventCompat;
import kotlin.UByte;

public final class o implements Cloneable {
    private int a;

    public o(byte[] bArr) {
        this(bArr, 0);
    }

    public o(byte[] bArr, int i) {
        int i2 = (bArr[i + 1] << 8) & MotionEventCompat.ACTION_POINTER_INDEX_MASK;
        this.a = i2;
        this.a = i2 + (bArr[i] & UByte.MAX_VALUE);
    }

    public o(int i) {
        this.a = i;
    }

    public boolean equals(Object obj) {
        return obj != null && (obj instanceof o) && this.a == ((o) obj).b();
    }

    public byte[] a() {
        int i = this.a;
        return new byte[]{(byte) (i & 255), (byte) ((i & MotionEventCompat.ACTION_POINTER_INDEX_MASK) >> 8)};
    }

    public int b() {
        return this.a;
    }

    public int hashCode() {
        return this.a;
    }
}
