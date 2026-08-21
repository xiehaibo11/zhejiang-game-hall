package org.bouncycastle.util;

import com.xiaomi.mipush.sdk.Constants;
import java.math.BigInteger;
import okhttp3.internal.ws.WebSocketProtocol;

/* JADX INFO: loaded from: classes4.dex */
public class IPAddress {
    private static final BigInteger ZERO = BigInteger.valueOf(0);

    public static boolean isValid(String str) {
        return isValidIPv4(str) || isValidIPv6(str);
    }

    private static boolean isValidIPv4(String str) {
        int iIndexOf;
        BigInteger bigInteger;
        if (str.length() == 0) {
            return false;
        }
        String str2 = str + ".";
        int i = 0;
        int i2 = 0;
        while (i < str2.length() && (iIndexOf = str2.indexOf(46, i)) > i) {
            if (i2 == 4) {
                return false;
            }
            try {
                bigInteger = new BigInteger(str2.substring(i, iIndexOf));
            } catch (NumberFormatException unused) {
            }
            if (bigInteger.compareTo(ZERO) == -1 || bigInteger.compareTo(BigInteger.valueOf(255L)) == 1) {
                return false;
            }
            i = iIndexOf + 1;
            i2++;
        }
        return i2 == 4;
    }

    private static boolean isValidIPv6(String str) {
        int iIndexOf;
        BigInteger bigInteger;
        if (str.length() == 0) {
            return false;
        }
        String str2 = str + Constants.COLON_SEPARATOR;
        int i = 0;
        int i2 = 0;
        while (i < str2.length() && (iIndexOf = str2.indexOf(58, i)) > i) {
            if (i2 == 8) {
                return false;
            }
            try {
                bigInteger = new BigInteger(str2.substring(i, iIndexOf), 16);
            } catch (NumberFormatException unused) {
            }
            if (bigInteger.compareTo(ZERO) == -1 || bigInteger.compareTo(BigInteger.valueOf(WebSocketProtocol.PAYLOAD_SHORT_MAX)) == 1) {
                return false;
            }
            i = iIndexOf + 1;
            i2++;
        }
        return i2 == 8;
    }
}
