package com.tkay.expressad.videocommon.b;

import android.net.Uri;
import android.text.TextUtils;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.videocommon.b.f;
import java.io.File;
import java.util.List;

public final class k {
    public static final String a = "foldername";
    public static final String b = "md5filename";
    public static final String c = "nc";
    public static final int d = 259200000;
    private static String e = "ResourceManager";
    private String f;

    k(byte b2) {
        this();
    }

    private static class a {
        public static k a = new k(0);

        private a() {
        }
    }

    private k() {
        this.f = com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.g);
    }

    public static k a() {
        return a.a;
    }

    private void c() {
        this.f = com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.g);
    }

    public final void b() {
        try {
            if (TextUtils.isEmpty(this.f)) {
                return;
            }
            f.a.a.a(new com.tkay.expressad.foundation.g.g.a() {
                @Override
                public final void b() {
                }

                @Override
                public final void c() {
                }

                @Override
                public final void a() {
                    com.tkay.expressad.foundation.h.m.c(k.this.f);
                }
            });
        } catch (Exception e2) {
            if (com.tkay.expressad.b.a) {
                e2.printStackTrace();
            }
        }
    }

    public final synchronized String a(String str, byte[] bArr) {
        String message;
        String strA = "unknow exception ";
        if (bArr != null) {
            try {
                if (bArr.length > 0) {
                    String str2 = this.f + "/" + p.a(x.a(str)) + ".zip";
                    File file = new File(str2);
                    if (com.tkay.expressad.foundation.h.m.a(bArr, file)) {
                        Uri uri = Uri.parse(str);
                        List<String> queryParameters = uri.getQueryParameters("nc");
                        if (queryParameters == null || queryParameters.size() == 0) {
                            List<String> queryParameters2 = uri.getQueryParameters("md5filename");
                            if (queryParameters2 != null && queryParameters2.size() > 0) {
                                String str3 = queryParameters2.get(0);
                                if (!TextUtils.isEmpty(str3) && str3.equals(com.tkay.expressad.foundation.h.l.a(file))) {
                                    strA = a(str, str2, file);
                                }
                            }
                        } else {
                            strA = a(str, str2, file);
                        }
                    }
                    if (!TextUtils.isEmpty(strA)) {
                        com.tkay.expressad.foundation.h.m.b(file);
                    }
                }
                message = strA;
            } catch (Exception e2) {
                if (com.tkay.expressad.b.a) {
                    e2.printStackTrace();
                }
                message = e2.getMessage();
            }
        } else {
            message = strA;
        }
        return message;
    }

    private String a(String str, String str2, File file) {
        String strA = com.tkay.expressad.foundation.h.m.a(str2, this.f + "/" + p.a(x.a(str)));
        return TextUtils.isEmpty(strA) ? com.tkay.expressad.foundation.h.m.b(file) : strA;
    }

    public final String a(String str) {
        String strSubstring;
        try {
            String str2 = this.f + "/" + p.a(x.a(str));
            List<String> queryParameters = Uri.parse(str).getQueryParameters("foldername");
            if (queryParameters == null || queryParameters.size() <= 0) {
                return null;
            }
            String str3 = queryParameters.get(0);
            if (TextUtils.isEmpty(str3)) {
                return null;
            }
            String str4 = str2 + "/" + str3 + "/" + str3 + ".html";
            if (!com.tkay.expressad.foundation.h.m.a(str4)) {
                return null;
            }
            try {
                strSubstring = str.substring(str.indexOf("?") + 1);
            } catch (Exception unused) {
                strSubstring = "";
            }
            return "file://" + str4 + (TextUtils.isEmpty(strSubstring) ? "" : "?".concat(String.valueOf(strSubstring)));
        } catch (Exception e2) {
            if (!com.tkay.expressad.b.a) {
                return null;
            }
            e2.printStackTrace();
            return null;
        }
    }
}
