package com.mbridge.msdk.widget.custom.b;

/* JADX INFO: compiled from: XmlUtils.java */
/* JADX INFO: loaded from: classes3.dex */
public final class e {
    public static boolean a(String str) {
        if (str != null && str.length() != 0) {
            try {
                try {
                    try {
                        Integer.parseInt(str);
                        return true;
                    } catch (NumberFormatException unused) {
                    }
                } catch (NumberFormatException unused2) {
                    Float.parseFloat(str);
                    return true;
                }
            } catch (NumberFormatException unused3) {
                Double.parseDouble(str);
                return true;
            }
        }
        return false;
    }
}
