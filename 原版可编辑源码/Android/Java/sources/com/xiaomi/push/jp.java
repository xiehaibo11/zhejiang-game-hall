package com.xiaomi.push;

public abstract class jp {
    public int a() {
        return 0;
    }

    public abstract int a(byte[] bArr, int i, int i2);

    public void a(int i) {
    }

    public abstract void a(byte[] bArr, int i, int i2);

    public byte[] a() {
        return null;
    }

    public int b() {
        return -1;
    }

    public int b(byte[] bArr, int i, int i2) throws jq {
        int i3 = 0;
        while (i3 < i2) {
            int iA = a(bArr, i + i3, i2 - i3);
            if (iA <= 0) {
                throw new jq("Cannot read. Remote side has closed. Tried to read " + i2 + " bytes, but only got " + i3 + " bytes.");
            }
            i3 += iA;
        }
        return i3;
    }
}
