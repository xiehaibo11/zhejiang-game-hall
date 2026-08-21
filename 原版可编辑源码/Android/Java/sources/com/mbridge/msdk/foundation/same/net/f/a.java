package com.mbridge.msdk.foundation.same.net.f;

public final class a {
    public static String a(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        if (aVar == null) {
            return "Network error,Load failed";
        }
        try {
            int i = aVar.a;
            int i2 = aVar.b != null ? aVar.b.a : 0;
            if (i == -2) {
                return "Network is canceled";
            }
            switch (i) {
                case 6:
                    if (i2 == 0) {
                    }
                    break;
                case 7:
                    if (i2 == 0) {
                    }
                    break;
                case 13:
                    if (aVar.b != null) {
                        byte[] bArr = aVar.b.b;
                        if (bArr == null) {
                        }
                    }
                    break;
            }
            return "Network error,Load failed";
        } catch (Exception e) {
            e.printStackTrace();
            return "Network error,Load failed";
        }
    }
}
