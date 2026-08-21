package com.tkay.expressad.exoplayer.e.a;

import android.util.Log;
import com.tkay.expressad.exoplayer.e.m;

/* JADX INFO: loaded from: classes3.dex */
public final class k {
    private static final String f = "TrackEncryptionBox";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6566a;
    public final String b;
    public final m.a c;
    public final int d;
    public final byte[] e;

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public k(boolean z, String str, int i, byte[] bArr, int i2, int i3, byte[] bArr2) {
        byte b = 0;
        int i4 = 1;
        com.tkay.expressad.exoplayer.k.a.a((i == 0) ^ (bArr2 == null));
        this.f6566a = z;
        this.b = str;
        this.d = i;
        this.e = bArr2;
        if (str != null) {
            switch (str.hashCode()) {
                case 3046605:
                    b = !str.equals("cbc1") ? (byte) -1 : (byte) 2;
                    break;
                case 3046671:
                    b = !str.equals("cbcs") ? (byte) -1 : (byte) 3;
                    break;
                case 3049879:
                    if (!str.equals("cenc")) {
                        b = -1;
                    }
                    break;
                case 3049895:
                    b = !str.equals("cens") ? (byte) -1 : (byte) 1;
                    break;
                default:
                    b = -1;
                    break;
            }
            if (b != 0 && b != 1) {
                if (b == 2 || b == 3) {
                    i4 = 2;
                } else {
                    Log.w(f, "Unsupported protection scheme type '" + str + "'. Assuming AES-CTR crypto mode.");
                }
            }
        }
        this.c = new m.a(i4, bArr, i2, i3);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static int a(String str) {
        if (str == null) {
            return 1;
        }
        byte b = -1;
        switch (str.hashCode()) {
            case 3046605:
                if (str.equals("cbc1")) {
                    b = 2;
                }
                break;
            case 3046671:
                if (str.equals("cbcs")) {
                    b = 3;
                }
                break;
            case 3049879:
                if (str.equals("cenc")) {
                    b = 0;
                }
                break;
            case 3049895:
                if (str.equals("cens")) {
                    b = 1;
                }
                break;
        }
        if (b == 0 || b == 1) {
            return 1;
        }
        if (b == 2 || b == 3) {
            return 2;
        }
        Log.w(f, "Unsupported protection scheme type '" + str + "'. Assuming AES-CTR crypto mode.");
        return 1;
    }
}
