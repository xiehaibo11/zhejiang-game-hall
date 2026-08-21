package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;
import java.net.InetSocketAddress;

public final class ct {
    private int a;
    private String a;

    public ct(String str, int i) {
        this.a = str;
        this.a = i;
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

    public static InetSocketAddress a(String str, int i) {
        ct ctVarA = a(str, i);
        return new InetSocketAddress(ctVarA.a(), ctVarA.a());
    }

    public int a() {
        return this.a;
    }

    public String a() {
        return this.a;
    }

    public String toString() {
        if (this.a <= 0) {
            return this.a;
        }
        return this.a + Constants.COLON_SEPARATOR + this.a;
    }
}
