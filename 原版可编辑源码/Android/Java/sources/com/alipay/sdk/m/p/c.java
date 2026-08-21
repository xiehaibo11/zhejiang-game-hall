package com.alipay.sdk.m.p;

import com.alipay.sdk.m.u.n;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.util.Locale;

public final class c {
    public boolean a;
    public String b = n.a(24);

    public c(boolean z) {
        this.a = z;
    }

    public static byte[] b(String str, byte[] bArr, String str2) {
        return com.alipay.sdk.m.n.e.b(str, bArr, str2);
    }

    public d a(b bVar, boolean z, String str) {
        if (bVar == null) {
            return null;
        }
        byte[] bytes = bVar.b().getBytes();
        byte[] bytes2 = bVar.a().getBytes();
        if (z) {
            try {
                bytes2 = com.alipay.sdk.m.n.b.a(bytes2);
            } catch (Exception unused) {
                z = false;
            }
        }
        return new d(z, this.a ? a(bytes, a(this.b, com.alipay.sdk.m.l.a.f), b(this.b, bytes2, str)) : a(bytes, bytes2));
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x007b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b a(d dVar, String str) {
        ByteArrayInputStream byteArrayInputStream;
        String str2;
        String str3;
        ByteArrayInputStream byteArrayInputStream2 = null;
        try {
            byteArrayInputStream = new ByteArrayInputStream(dVar.a());
            try {
                try {
                    byte[] bArr = new byte[5];
                    byteArrayInputStream.read(bArr);
                    byte[] bArr2 = new byte[a(new String(bArr))];
                    byteArrayInputStream.read(bArr2);
                    str2 = new String(bArr2);
                } catch (Exception e) {
                    e = e;
                    str2 = null;
                }
                try {
                    byte[] bArr3 = new byte[5];
                    byteArrayInputStream.read(bArr3);
                    int iA = a(new String(bArr3));
                    if (iA > 0) {
                        byte[] bArrB = new byte[iA];
                        byteArrayInputStream.read(bArrB);
                        if (this.a) {
                            bArrB = a(this.b, bArrB, str);
                        }
                        if (dVar.b()) {
                            bArrB = com.alipay.sdk.m.n.b.b(bArrB);
                        }
                        str3 = new String(bArrB);
                    } else {
                        str3 = null;
                    }
                    try {
                        byteArrayInputStream.close();
                    } catch (Exception unused) {
                    }
                } catch (Exception e2) {
                    e = e2;
                    com.alipay.sdk.m.u.e.a(e);
                    if (byteArrayInputStream != null) {
                        try {
                            byteArrayInputStream.close();
                        } catch (Exception unused2) {
                        }
                    }
                    str3 = null;
                }
            } catch (Throwable th) {
                th = th;
                byteArrayInputStream2 = byteArrayInputStream;
                if (byteArrayInputStream2 != null) {
                    try {
                        byteArrayInputStream2.close();
                    } catch (Exception unused3) {
                    }
                }
                throw th;
            }
        } catch (Exception e3) {
            e = e3;
            byteArrayInputStream = null;
            str2 = null;
        } catch (Throwable th2) {
            th = th2;
            if (byteArrayInputStream2 != null) {
            }
            throw th;
        }
        if (str2 == null && str3 == null) {
            return null;
        }
        return new b(str2, str3);
    }

    public static byte[] a(String str, String str2) {
        return com.alipay.sdk.m.n.d.a(str, str2);
    }

    public static byte[] a(String str, byte[] bArr, String str2) {
        return com.alipay.sdk.m.n.e.a(str, bArr, str2);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0059 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0060 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:65:? A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r0v0 */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r1v0, types: [int] */
    /* JADX WARN: Type inference failed for: r1v1 */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r1v3, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r1v4, types: [java.io.ByteArrayOutputStream, java.io.OutputStream] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static byte[] a(byte[]... bArr) throws Throwable {
        DataOutputStream dataOutputStream;
        DataOutputStream dataOutputStream2;
        ?? r0 = 0;
        bArr = null;
        byte[] bArr2 = null;
        if (bArr != null) {
            ?? length = bArr.length;
            try {
                if (length != 0) {
                    try {
                        length = new ByteArrayOutputStream();
                        try {
                            dataOutputStream2 = new DataOutputStream(length);
                            try {
                                for (byte[] bArr3 : bArr) {
                                    dataOutputStream2.write(a(bArr3.length).getBytes());
                                    dataOutputStream2.write(bArr3);
                                }
                                dataOutputStream2.flush();
                                byte[] byteArray = length.toByteArray();
                                try {
                                    length.close();
                                } catch (Exception unused) {
                                }
                                bArr2 = byteArray;
                            } catch (Exception e) {
                                e = e;
                                com.alipay.sdk.m.u.e.a(e);
                                if (length != 0) {
                                    try {
                                        length.close();
                                    } catch (Exception unused2) {
                                    }
                                }
                                if (dataOutputStream2 != null) {
                                }
                                return bArr2;
                            }
                        } catch (Exception e2) {
                            e = e2;
                            dataOutputStream2 = null;
                        } catch (Throwable th) {
                            th = th;
                            dataOutputStream = null;
                            r0 = length;
                            if (r0 != 0) {
                                try {
                                    r0.close();
                                } catch (Exception unused3) {
                                }
                            }
                            if (dataOutputStream == null) {
                                try {
                                    dataOutputStream.close();
                                    throw th;
                                } catch (Exception unused4) {
                                    throw th;
                                }
                            }
                            throw th;
                        }
                    } catch (Exception e3) {
                        e = e3;
                        length = 0;
                        dataOutputStream2 = null;
                    } catch (Throwable th2) {
                        th = th2;
                        dataOutputStream = null;
                        if (r0 != 0) {
                        }
                        if (dataOutputStream == null) {
                        }
                    }
                    try {
                        dataOutputStream2.close();
                    } catch (Exception unused5) {
                    }
                    return bArr2;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        }
        return null;
    }

    public static String a(int i) {
        return String.format(Locale.getDefault(), "%05d", Integer.valueOf(i));
    }

    public static int a(String str) {
        return Integer.parseInt(str);
    }
}
