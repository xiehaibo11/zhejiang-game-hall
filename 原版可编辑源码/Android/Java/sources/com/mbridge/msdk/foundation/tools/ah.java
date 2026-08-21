package com.mbridge.msdk.foundation.tools;

import com.mbridge.msdk.foundation.tools.FastKV;
import java.util.LinkedHashSet;
import java.util.Set;

final class ah implements FastKV.a<Set<String>> {
    static final ah a = new ah();

    @Override
    public final String a() {
        return "StringSet";
    }

    @Override
    public final byte[] a(Set<String> set) {
        Set<String> set2 = set;
        if (set2.isEmpty()) {
            return new byte[0];
        }
        int size = set2.size();
        int[] iArr = new int[size];
        String[] strArr = new String[size];
        int i = 0;
        int i2 = 0;
        for (String str : set2) {
            if (str == null) {
                i += 5;
                iArr[i2] = -1;
            } else {
                int iB = j.b(str);
                strArr[i2] = str;
                iArr[i2] = iB;
                i += ((iB >> 7) == 0 ? 1 : (iB >> 14) == 0 ? 2 : (iB >> 21) == 0 ? 3 : (iB >> 28) == 0 ? 4 : 5) + iB;
            }
            i2++;
        }
        j jVar = new j(i);
        for (int i3 = 0; i3 < size; i3++) {
            int i4 = iArr[i3];
            int i5 = jVar.b;
            int i6 = i4;
            while ((i6 & com.alipay.sdk.m.n.a.g) != 0) {
                jVar.a[i5] = (byte) ((i6 & 127) | 128);
                i6 >>>= 7;
                i5++;
            }
            jVar.a[i5] = (byte) i6;
            jVar.b = i5 + 1;
            if (i4 >= 0) {
                jVar.a(strArr[i3]);
            }
        }
        return jVar.a;
    }

    private ah() {
    }

    @Override
    public final Set<String> a(byte[] bArr, int i, int i2) {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        if (i2 > 0) {
            j jVar = new j(bArr, i);
            int i3 = i + i2;
            while (jVar.b < i3) {
                byte[] bArr2 = jVar.a;
                int i4 = jVar.b;
                jVar.b = i4 + 1;
                int i5 = bArr2[i4];
                if ((i5 >> 7) != 0) {
                    byte[] bArr3 = jVar.a;
                    int i6 = jVar.b;
                    jVar.b = i6 + 1;
                    i5 = (i5 & 127) | (bArr3[i6] << 7);
                    if ((i5 >> 14) != 0) {
                        byte[] bArr4 = jVar.a;
                        int i7 = jVar.b;
                        jVar.b = i7 + 1;
                        i5 = (i5 & 16383) | (bArr4[i7] << 14);
                        if ((i5 >> 21) != 0) {
                            byte[] bArr5 = jVar.a;
                            int i8 = jVar.b;
                            jVar.b = i8 + 1;
                            i5 = (i5 & 2097151) | (bArr5[i8] << 21);
                            if ((i5 >> 28) != 0) {
                                byte[] bArr6 = jVar.a;
                                int i9 = jVar.b;
                                jVar.b = i9 + 1;
                                i5 = (i5 & 268435455) | (bArr6[i9] << 28);
                            }
                        }
                    }
                }
                linkedHashSet.add(jVar.b(i5));
            }
            if (jVar.b != i3) {
                throw new IllegalArgumentException("Invalid String set");
            }
        }
        return linkedHashSet;
    }
}
