package com.alipay.sdk.m.z;

public final class a {
    public static java.lang.String a(java.lang.Throwable r2) {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r2.printStackTrace(r1)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r0, java.lang.String r1, java.lang.String r2) {
            if (r0 != 0) goto L3
            return r2
        L3:
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 != 0) goto Lc
            return r2
        Lc:
            return r0
    }

    public static boolean a(java.lang.String r5) {
            r0 = 1
            if (r5 == 0) goto L1c
            int r1 = r5.length()
            if (r1 != 0) goto La
            goto L1c
        La:
            r2 = 0
            r3 = 0
        Lc:
            if (r3 >= r1) goto L1c
            char r4 = r5.charAt(r3)
            boolean r4 = java.lang.Character.isWhitespace(r4)
            if (r4 != 0) goto L19
            return r2
        L19:
            int r3 = r3 + 1
            goto Lc
        L1c:
            return r0
    }

    public static boolean a(java.lang.String r0, java.lang.String r1) {
            if (r0 != 0) goto L8
            if (r1 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
        L8:
            boolean r0 = r0.equals(r1)
            return r0
    }

    public static java.lang.String b(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L27
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L27
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L27
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L27
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L27
            r2[r5] = r7     // Catch: java.lang.Exception -> L27
            r2[r6] = r8     // Catch: java.lang.Exception -> L27
            java.lang.Object r7 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L27
            return r7
        L27:
            return r8
    }

    public static boolean b(java.lang.String r0) {
            boolean r0 = a(r0)
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean c(java.lang.String r5) {
            byte[] r5 = r5.getBytes()
            int r0 = r5.length
            r1 = 0
            r2 = 0
        L7:
            if (r2 >= r0) goto L19
            r3 = r5[r2]
            if (r3 < 0) goto L11
            r4 = 31
            if (r3 <= r4) goto L15
        L11:
            r4 = 127(0x7f, float:1.78E-43)
            if (r3 < r4) goto L16
        L15:
            return r1
        L16:
            int r2 = r2 + 1
            goto L7
        L19:
            r5 = 1
            return r5
    }

    public static java.lang.String d(java.lang.String r0) {
            if (r0 != 0) goto L4
            java.lang.String r0 = ""
        L4:
            return r0
    }

    public static java.lang.String e(java.lang.String r7) {
            r0 = 0
            boolean r1 = a(r7)     // Catch: java.lang.Exception -> L41
            if (r1 == 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "SHA-1"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "UTF-8"
            byte[] r7 = r7.getBytes(r2)     // Catch: java.lang.Exception -> L41
            r1.update(r7)     // Catch: java.lang.Exception -> L41
            byte[] r7 = r1.digest()     // Catch: java.lang.Exception -> L41
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r1.<init>()     // Catch: java.lang.Exception -> L41
            r2 = 0
            r3 = 0
        L22:
            int r4 = r7.length     // Catch: java.lang.Exception -> L41
            if (r3 >= r4) goto L3c
            java.lang.String r4 = "%02x"
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L41
            r6 = r7[r3]     // Catch: java.lang.Exception -> L41
            java.lang.Byte r6 = java.lang.Byte.valueOf(r6)     // Catch: java.lang.Exception -> L41
            r5[r2] = r6     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = java.lang.String.format(r4, r5)     // Catch: java.lang.Exception -> L41
            r1.append(r4)     // Catch: java.lang.Exception -> L41
            int r3 = r3 + 1
            goto L22
        L3c:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L41
            return r7
        L41:
            return r0
    }

    public static java.lang.String f(java.lang.String r5) {
            r0 = 4
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.allocate(r0)     // Catch: java.lang.Exception -> L53
            java.nio.ByteOrder r2 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Exception -> L53
            java.nio.ByteBuffer r1 = r1.order(r2)     // Catch: java.lang.Exception -> L53
            int r2 = r5.length()     // Catch: java.lang.Exception -> L53
            java.nio.ByteBuffer r1 = r1.putInt(r2)     // Catch: java.lang.Exception -> L53
            byte[] r1 = r1.array()     // Catch: java.lang.Exception -> L53
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L53
            int r3 = r5.length()     // Catch: java.lang.Exception -> L53
            r2.<init>(r3)     // Catch: java.lang.Exception -> L53
            java.util.zip.GZIPOutputStream r3 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Exception -> L53
            r3.<init>(r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = "UTF-8"
            byte[] r5 = r5.getBytes(r4)     // Catch: java.lang.Exception -> L53
            r3.write(r5)     // Catch: java.lang.Exception -> L53
            r3.close()     // Catch: java.lang.Exception -> L53
            r2.close()     // Catch: java.lang.Exception -> L53
            byte[] r5 = r2.toByteArray()     // Catch: java.lang.Exception -> L53
            int r5 = r5.length     // Catch: java.lang.Exception -> L53
            int r5 = r5 + r0
            byte[] r5 = new byte[r5]     // Catch: java.lang.Exception -> L53
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r5, r3, r0)     // Catch: java.lang.Exception -> L53
            byte[] r1 = r2.toByteArray()     // Catch: java.lang.Exception -> L53
            byte[] r2 = r2.toByteArray()     // Catch: java.lang.Exception -> L53
            int r2 = r2.length     // Catch: java.lang.Exception -> L53
            java.lang.System.arraycopy(r1, r3, r5, r0, r2)     // Catch: java.lang.Exception -> L53
            r0 = 8
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r0)     // Catch: java.lang.Exception -> L53
            return r5
        L53:
            java.lang.String r5 = ""
            return r5
    }

    public static java.lang.String g(java.lang.String r8) {
            boolean r0 = a(r8)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "utf-8"
            byte[] r8 = r8.getBytes(r2)     // Catch: java.lang.Exception -> L4c
            r0.<init>(r8)     // Catch: java.lang.Exception -> L4c
            java.io.ByteArrayOutputStream r8 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L4c
            r8.<init>()     // Catch: java.lang.Exception -> L4c
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Exception -> L4c
            r2.<init>(r8)     // Catch: java.lang.Exception -> L4c
            r3 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r3]     // Catch: java.lang.Exception -> L4c
        L22:
            r5 = 0
            int r6 = r0.read(r4, r5, r3)     // Catch: java.lang.Exception -> L4c
            r7 = -1
            if (r6 == r7) goto L2e
            r2.write(r4, r5, r6)     // Catch: java.lang.Exception -> L4c
            goto L22
        L2e:
            r2.flush()     // Catch: java.lang.Exception -> L4c
            r2.close()     // Catch: java.lang.Exception -> L4c
            byte[] r2 = r8.toByteArray()     // Catch: java.lang.Exception -> L4c
            r8.flush()     // Catch: java.lang.Exception -> L4c
            r8.close()     // Catch: java.lang.Exception -> L4c
            r0.close()     // Catch: java.lang.Exception -> L4c
            java.lang.String r8 = new java.lang.String     // Catch: java.lang.Exception -> L4c
            r0 = 2
            byte[] r0 = android.util.Base64.encode(r2, r0)     // Catch: java.lang.Exception -> L4c
            r8.<init>(r0)     // Catch: java.lang.Exception -> L4c
            r1 = r8
        L4c:
            return r1
    }
}
