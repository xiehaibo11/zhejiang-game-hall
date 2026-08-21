package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;
import java.net.InetSocketAddress;

/* JADX INFO: loaded from: classes4.dex */
public final class ct {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8091a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f199a;

    public ct(String str, int i) {
        this.f199a = str;
        this.f8091a = i;
    }

    public static ct a(String str, int i) {
        int iLastIndexOf = str.lastIndexOf(Constants.COLON_SEPARATOR);
        if (iLastIndexOf != -1) {
            String strSubstring = str.substring(0, iLastIndexOf);
            try {
                int i2 = Integer.parseInt(str.substring(iLastIndexOf + 1));
                if (i2 > 0) {
                    i = i2;
                }
            } catch (NumberFormatException unused) {
            }
            str = strSubstring;
        }
        return new ct(str, i);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static InetSocketAddress m204a(String str, int i) {
        ct ctVarA = a(str, i);
        return new InetSocketAddress(ctVarA.m205a(), ctVarA.a());
    }

    public int a() {
        return this.f8091a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m205a() {
        return this.f199a;
    }

    public String toString() {
        if (this.f8091a <= 0) {
            return this.f199a;
        }
        return this.f199a + Constants.COLON_SEPARATOR + this.f8091a;
    }
}
