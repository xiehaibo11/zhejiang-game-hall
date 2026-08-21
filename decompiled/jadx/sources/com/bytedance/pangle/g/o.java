package com.bytedance.pangle.g;

import android.content.pm.Signature;
import android.util.ArraySet;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.security.PublicKey;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
final class o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final o f1546a = new o(null, 0, null, null, null);
    public final Signature[] b;
    public final int c;
    public final ArraySet<PublicKey> d;
    public final Signature[] e;
    public final int[] f;

    private static ArraySet<PublicKey> a(Signature[] signatureArr) {
        ArraySet<PublicKey> arraySet = new ArraySet<>(signatureArr.length);
        for (Signature signature : signatureArr) {
            Method methodA = com.bytedance.pangle.b.a.a.a(Signature.class, "getPublicKey", new Class[0]);
            if (methodA != null && methodA.isAccessible()) {
                try {
                    arraySet.add((PublicKey) methodA.invoke(signature, new Object[0]));
                } catch (IllegalAccessException e) {
                    e.printStackTrace();
                } catch (InvocationTargetException e2) {
                    e2.printStackTrace();
                } catch (Exception e3) {
                    e3.printStackTrace();
                }
            }
        }
        return arraySet;
    }

    public static boolean a(Signature[] signatureArr, Signature[] signatureArr2) {
        return signatureArr.length == signatureArr2.length && com.bytedance.pangle.util.d.a((Object[]) signatureArr, (Object[]) signatureArr2) && com.bytedance.pangle.util.d.a((Object[]) signatureArr2, (Object[]) signatureArr);
    }

    public static boolean a(byte[] bArr, byte[] bArr2) {
        if (bArr.length != bArr2.length) {
            return false;
        }
        for (int i = 0; i < bArr.length; i++) {
            if (bArr[i] != bArr2[i]) {
                return false;
            }
        }
        return true;
    }

    public o(Signature[] signatureArr, int i, ArraySet<PublicKey> arraySet, Signature[] signatureArr2, int[] iArr) {
        this.b = signatureArr;
        this.c = i;
        this.d = arraySet;
        this.e = signatureArr2;
        this.f = iArr;
    }

    public o(Signature[] signatureArr, int i, Signature[] signatureArr2, int[] iArr) {
        this(signatureArr, i, a(signatureArr), signatureArr2, iArr);
    }

    public o(Signature[] signatureArr) {
        this(signatureArr, 2, null, null);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof o)) {
            return false;
        }
        o oVar = (o) obj;
        if (this.c != oVar.c || !a(this.b, oVar.b)) {
            return false;
        }
        ArraySet<PublicKey> arraySet = this.d;
        if (arraySet != null) {
            if (!arraySet.equals(oVar.d)) {
                return false;
            }
        } else if (oVar.d != null) {
            return false;
        }
        return Arrays.equals(this.e, oVar.e) && Arrays.equals(this.f, oVar.f);
    }

    public final int hashCode() {
        int iHashCode = ((Arrays.hashCode(this.b) * 31) + this.c) * 31;
        ArraySet<PublicKey> arraySet = this.d;
        return ((((iHashCode + (arraySet != null ? arraySet.hashCode() : 0)) * 31) + Arrays.hashCode(this.e)) * 31) + Arrays.hashCode(this.f);
    }
}
