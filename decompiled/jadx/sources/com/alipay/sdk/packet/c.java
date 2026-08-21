package com.alipay.sdk.packet;

import com.alipay.sdk.util.n;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f1304a;
    private String b = n.a(24);

    public c(boolean z) {
        this.f1304a = z;
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
        if (this.f1304a) {
            bArrA = a(bytes, a(this.b, com.alipay.sdk.cons.a.c), a(this.b, bytes2));
        } else {
            bArrA = a(bytes, bytes2);
        }
        return new d(z, bArrA);
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x007b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public com.alipay.sdk.packet.b a(com.alipay.sdk.packet.d r6) {
        /*
            r5 = this;
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            byte[] r2 = r6.b()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            r2 = 5
            byte[] r3 = new byte[r2]     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r1.read(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r4.<init>(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            int r3 = a(r4)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            byte[] r3 = new byte[r3]     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r1.read(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r4.<init>(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            byte[] r2 = new byte[r2]     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r1.read(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r3.<init>(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            int r2 = a(r3)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            if (r2 <= 0) goto L52
            byte[] r2 = new byte[r2]     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r1.read(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            boolean r3 = r5.f1304a     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            if (r3 == 0) goto L42
            java.lang.String r3 = r5.b     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            byte[] r2 = b(r3, r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
        L42:
            boolean r6 = r6.a()     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            if (r6 == 0) goto L4c
            byte[] r2 = com.alipay.sdk.encrypt.c.b(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
        L4c:
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r6.<init>(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            goto L53
        L52:
            r6 = r0
        L53:
            r1.close()     // Catch: java.lang.Exception -> L57
            goto L6d
        L57:
            goto L6d
        L59:
            r6 = move-exception
            goto L64
        L5b:
            r6 = move-exception
            r4 = r0
            goto L64
        L5e:
            r6 = move-exception
            r1 = r0
            goto L79
        L61:
            r6 = move-exception
            r1 = r0
            r4 = r1
        L64:
            com.alipay.sdk.util.c.a(r6)     // Catch: java.lang.Throwable -> L78
            if (r1 == 0) goto L6c
            r1.close()     // Catch: java.lang.Exception -> L6c
        L6c:
            r6 = r0
        L6d:
            if (r4 != 0) goto L72
            if (r6 != 0) goto L72
            return r0
        L72:
            com.alipay.sdk.packet.b r0 = new com.alipay.sdk.packet.b
            r0.<init>(r4, r6)
            return r0
        L78:
            r6 = move-exception
        L79:
            if (r1 == 0) goto L7e
            r1.close()     // Catch: java.lang.Exception -> L7e
        L7e:
            throw r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.sdk.packet.c.a(com.alipay.sdk.packet.d):com.alipay.sdk.packet.b");
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
