package com.alipay.sdk.packet;

import com.alipay.sdk.util.n;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.util.Locale;

public final class c {
    private boolean a;
    private String b = n.a(24);

    public c(boolean z) {
        this.a = z;
    }

    public d a(b bVar, boolean z) {
        byte[] bArrA;
        if (bVar == null) {
            return null;
        }
        byte[] bytes = bVar.a().getBytes();
        byte[] bytes2 = bVar.b().getBytes();
        if (z) {
            try {
                bytes2 = com.alipay.sdk.encrypt.c.a(bytes2);
            } catch (Exception unused) {
                z = false;
            }
        }
        if (this.a) {
            bArrA = a(bytes, a(this.b, com.alipay.sdk.cons.a.c), a(this.b, bytes2));
        } else {
            bArrA = a(bytes, bytes2);
        }
        return new d(z, bArrA);
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x007b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b a(d dVar) {
        ByteArrayInputStream byteArrayInputStream;
        String str;
        String str2;
        try {
            byteArrayInputStream = new ByteArrayInputStream(dVar.b());
            try {
                try {
                    byte[] bArr = new byte[5];
                    byteArrayInputStream.read(bArr);
                    byte[] bArr2 = new byte[a(new String(bArr))];
                    byteArrayInputStream.read(bArr2);
                    str = new String(bArr2);
                } catch (Exception e) {
                    e = e;
                    str = null;
                }
                try {
                    byte[] bArr3 = new byte[5];
                    byteArrayInputStream.read(bArr3);
                    int iA = a(new String(bArr3));
                    if (iA > 0) {
                        byte[] bArrB = new byte[iA];
                        byteArrayInputStream.read(bArrB);
                        if (this.a) {
                            bArrB = b(this.b, bArrB);
                        }
                        if (dVar.a()) {
                            bArrB = com.alipay.sdk.encrypt.c.b(bArrB);
                        }
                        str2 = new String(bArrB);
                    } else {
                        str2 = null;
                    }
                    try {
                        byteArrayInputStream.close();
                    } catch (Exception unused) {
                    }
                } catch (Exception e2) {
                    e = e2;
                    com.alipay.sdk.util.c.a(e);
                    if (byteArrayInputStream != null) {
                        try {
                            byteArrayInputStream.close();
                        } catch (Exception unused2) {
                        }
                    }
                    str2 = null;
                }
            } catch (Throwable th) {
                th = th;
                if (byteArrayInputStream != null) {
                    try {
                        byteArrayInputStream.close();
                    } catch (Exception unused3) {
                    }
                }
                throw th;
            }
        } catch (Exception e3) {
            e = e3;
            byteArrayInputStream = null;
            str = null;
        } catch (Throwable th2) {
            th = th2;
            byteArrayInputStream = null;
            if (byteArrayInputStream != null) {
            }
            throw th;
        }
        if (str == null && str2 == null) {
            return null;
        }
        return new b(str, str2);
    }

    private static byte[] a(String str, String str2) {
        return com.alipay.sdk.encrypt.d.a(str, str2);
    }

    private static byte[] a(String str, byte[] bArr) {
        return com.alipay.sdk.encrypt.e.a(str, bArr);
    }

    private static byte[] b(String str, byte[] bArr) {
        return com.alipay.sdk.encrypt.e.b(str, bArr);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v0, types: [int] */
    /* JADX WARN: Type inference failed for: r1v1, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r1v3 */
    /* JADX WARN: Type inference failed for: r1v4, types: [java.io.ByteArrayOutputStream] */
    /* JADX WARN: Type inference failed for: r1v5, types: [java.io.ByteArrayOutputStream, java.io.OutputStream] */
    private static byte[] a(byte[]... bArr) throws Throwable {
        DataOutputStream dataOutputStream;
        DataOutputStream dataOutputStream2;
        byte[] byteArray = null;
        if (bArr != null) {
            ?? length = bArr.length;
            try {
                if (length != 0) {
                    try {
                        length = new ByteArrayOutputStream();
                    } catch (Exception e) {
                        e = e;
                        length = 0;
                        dataOutputStream2 = null;
                    } catch (Throwable th) {
                        th = th;
                        length = 0;
                        dataOutputStream = null;
                    }
                    try {
                        dataOutputStream2 = new DataOutputStream(length);
                        try {
                            for (byte[] bArr2 : bArr) {
                                dataOutputStream2.write(a(bArr2.length).getBytes());
                                dataOutputStream2.write(bArr2);
                            }
                            dataOutputStream2.flush();
                            byteArray = length.toByteArray();
                            try {
                                length.close();
                            } catch (Exception unused) {
                            }
                        } catch (Exception e2) {
                            e = e2;
                            com.alipay.sdk.util.c.a(e);
                            if (length != 0) {
                                try {
                                    length.close();
                                } catch (Exception unused2) {
                                }
                            }
                            if (dataOutputStream2 != null) {
                            }
                            return byteArray;
                        }
                    } catch (Exception e3) {
                        e = e3;
                        dataOutputStream2 = null;
                    } catch (Throwable th2) {
                        th = th2;
                        dataOutputStream = null;
                        if (length != 0) {
                            try {
                                length.close();
                            } catch (Exception unused3) {
                            }
                        }
                        if (dataOutputStream != null) {
                            try {
                                dataOutputStream.close();
                                throw th;
                            } catch (Exception unused4) {
                                throw th;
                            }
                        }
                        throw th;
                    }
                    try {
                        dataOutputStream2.close();
                    } catch (Exception unused5) {
                    }
                    return byteArray;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        }
        return null;
    }

    private static String a(int i) {
        return String.format(Locale.getDefault(), "%05d", Integer.valueOf(i));
    }

    private static int a(String str) {
        return Integer.parseInt(str);
    }
}
