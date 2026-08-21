package com.loc;

import android.content.Context;
import java.io.ByteArrayOutputStream;
import java.util.HashMap;
import java.util.Map;

public abstract class bp extends r {
    protected Context a;
    protected w b;
    protected byte[] c;

    public bp(Context context, w wVar) {
        if (context != null) {
            this.a = context.getApplicationContext();
        }
        this.b = wVar;
        r();
    }

    private static byte[] A() {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            byteArrayOutputStream.write(x.a("PANDORA$"));
            byteArrayOutputStream.write(new byte[]{1});
            byteArrayOutputStream.write(new byte[]{0});
            return byteArrayOutputStream.toByteArray();
        } catch (Throwable th) {
            try {
                as.a(th, "bre", "gbh");
                try {
                    byteArrayOutputStream.close();
                    return null;
                } catch (Throwable th2) {
                    as.a(th2, "bre", "gbh");
                    return null;
                }
            } finally {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th3) {
                    as.a(th3, "bre", "gbh");
                }
            }
        }
    }

    private byte[] B() {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            byteArrayOutputStream.write(new byte[]{3});
            if (i()) {
                byte[] bArrA = n.a(this.a, k(), this.b != null && "navi".equals(this.b.a()));
                byteArrayOutputStream.write(a(bArrA));
                byteArrayOutputStream.write(bArrA);
            } else {
                byteArrayOutputStream.write(new byte[]{0, 0});
            }
            byte[] bArrA2 = x.a(f());
            if (bArrA2 == null || bArrA2.length <= 0) {
                byteArrayOutputStream.write(new byte[]{0, 0});
            } else {
                byteArrayOutputStream.write(a(bArrA2));
                byteArrayOutputStream.write(bArrA2);
            }
            byte[] bArrA3 = x.a(j());
            if (bArrA3 == null || bArrA3.length <= 0) {
                byteArrayOutputStream.write(new byte[]{0, 0});
            } else {
                byteArrayOutputStream.write(a(bArrA3));
                byteArrayOutputStream.write(bArrA3);
            }
            return byteArrayOutputStream.toByteArray();
        } catch (Throwable th) {
            try {
                as.a(th, "bre", "gpd");
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th2) {
                    as.a(th2, "bre", "gred");
                }
                return new byte[]{0};
            } finally {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th3) {
                    as.a(th3, "bre", "gred");
                }
            }
        }
    }

    private byte[] C() {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            byte[] bArrA_ = a_();
            if (bArrA_ != null && bArrA_.length != 0) {
                byteArrayOutputStream.write(new byte[]{1});
                byteArrayOutputStream.write(a(bArrA_));
                byteArrayOutputStream.write(bArrA_);
                return byteArrayOutputStream.toByteArray();
            }
            byteArrayOutputStream.write(new byte[]{0});
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            try {
                byteArrayOutputStream.close();
            } catch (Throwable th) {
                as.a(th, "bre", "grrd");
            }
            return byteArray;
        } catch (Throwable th2) {
            try {
                as.a(th2, "bre", "grrd");
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th3) {
                    as.a(th3, "bre", "grrd");
                }
                return new byte[]{0};
            } finally {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th4) {
                    as.a(th4, "bre", "grrd");
                }
            }
        }
    }

    private byte[] D() {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            byte[] bArrB_ = b_();
            if (bArrB_ != null && bArrB_.length != 0) {
                byteArrayOutputStream.write(new byte[]{1});
                byte[] bArrA = n.a(bArrB_);
                byteArrayOutputStream.write(a(bArrA));
                byteArrayOutputStream.write(bArrA);
                return byteArrayOutputStream.toByteArray();
            }
            byteArrayOutputStream.write(new byte[]{0});
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            try {
                byteArrayOutputStream.close();
            } catch (Throwable th) {
                as.a(th, "bre", "gred");
            }
            return byteArray;
        } catch (Throwable th2) {
            try {
                as.a(th2, "bre", "gred");
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th3) {
                    as.a(th3, "bre", "gred");
                }
                return new byte[]{0};
            } finally {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th4) {
                    as.a(th4, "bre", "gred");
                }
            }
        }
    }

    protected static byte[] a(byte[] bArr) {
        return x.a(bArr.length);
    }

    public abstract byte[] a_();

    public abstract byte[] b_();

    @Override
    public final byte[] d() {
        byte[] bArr = this.c;
        if (bArr != null) {
            return bArr;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            byteArrayOutputStream.write(A());
            byteArrayOutputStream.write(B());
            byteArrayOutputStream.write(C());
            byteArrayOutputStream.write(D());
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            this.c = byteArray;
            return byteArray;
        } catch (Throwable th) {
            try {
                as.a(th, "bre", "geb");
                try {
                    byteArrayOutputStream.close();
                    return null;
                } catch (Throwable th2) {
                    as.a(th2, "bre", "geb");
                    return null;
                }
            } finally {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th3) {
                    as.a(th3, "bre", "geb");
                }
            }
        }
    }

    @Override
    public Map<String, String> e() {
        String strF = l.f(this.a);
        String strA = n.a();
        String strA2 = n.a(this.a, strA, "key=".concat(String.valueOf(strF)));
        HashMap map = new HashMap();
        map.put("ts", strA);
        map.put("key", strF);
        map.put("scode", strA2);
        return map;
    }

    protected String f() {
        return "2.1";
    }

    public boolean i() {
        return true;
    }

    public String j() {
        return String.format("platform=Android&sdkversion=%s&product=%s", this.b.c(), this.b.a());
    }

    protected boolean k() {
        return false;
    }
}
