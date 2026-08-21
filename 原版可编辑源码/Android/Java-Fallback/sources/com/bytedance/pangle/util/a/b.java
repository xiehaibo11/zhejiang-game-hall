package com.bytedance.pangle.util.a;

public final class b {
    private static java.lang.String a = "";

    static {
            return
    }

    private static java.nio.ByteBuffer a(java.nio.ByteBuffer r4, int r5) {
            r0 = 8
            if (r5 < r0) goto L5c
            int r1 = r4.capacity()
            int r2 = r4.capacity()
            if (r5 > r2) goto L40
            int r1 = r4.limit()
            int r2 = r4.position()
            r3 = 0
            r4.position(r3)     // Catch: java.lang.Throwable -> L35
            r4.limit(r5)     // Catch: java.lang.Throwable -> L35
            r4.position(r0)     // Catch: java.lang.Throwable -> L35
            java.nio.ByteBuffer r5 = r4.slice()     // Catch: java.lang.Throwable -> L35
            java.nio.ByteOrder r0 = r4.order()     // Catch: java.lang.Throwable -> L35
            r5.order(r0)     // Catch: java.lang.Throwable -> L35
            r4.position(r3)
            r4.limit(r1)
            r4.position(r2)
            return r5
        L35:
            r5 = move-exception
            r4.position(r3)
            r4.limit(r1)
            r4.position(r2)
            throw r5
        L40:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "end > capacity: "
            r0.<init>(r2)
            r0.append(r5)
            java.lang.String r5 = " > "
            r0.append(r5)
            r0.append(r1)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
        L5c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "end < start: "
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r5 = " < 8"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
    }

    public static java.lang.String[] a(java.io.File r13) {
            java.lang.String r0 = ""
            r1 = 0
            r2 = 1
            java.nio.ByteBuffer r13 = b(r13)     // Catch: java.lang.Exception -> Lce
            java.nio.ByteOrder r3 = r13.order()     // Catch: java.lang.Exception -> Lce
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Exception -> Lce
            if (r3 != r4) goto Lc6
            int r3 = r13.capacity()     // Catch: java.lang.Exception -> Lce
            int r3 = r3 + (-24)
            java.nio.ByteBuffer r3 = a(r13, r3)     // Catch: java.lang.Exception -> Lce
            r4 = r1
        L1b:
            boolean r5 = r3.hasRemaining()     // Catch: java.lang.Exception -> Lce
            if (r5 == 0) goto Lb4
            int r4 = r4 + r2
            int r5 = r3.remaining()     // Catch: java.lang.Exception -> Lce
            r6 = 8
            if (r5 < r6) goto La4
            long r5 = r3.getLong()     // Catch: java.lang.Exception -> Lce
            r7 = 4
            int r7 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            java.lang.String r8 = " size out of range: "
            java.lang.String r9 = "APK Signing Block entry #"
            if (r7 < 0) goto L8c
            r10 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r7 = (r5 > r10 ? 1 : (r5 == r10 ? 0 : -1))
            if (r7 > 0) goto L8c
            int r5 = (int) r5
            int r6 = r3.position()     // Catch: java.lang.Exception -> Lce
            int r6 = r6 + r5
            int r7 = r3.remaining()     // Catch: java.lang.Exception -> Lce
            if (r5 > r7) goto L68
            int r5 = r3.getInt()     // Catch: java.lang.Exception -> Lce
            r7 = -262969152(0xfffffffff05368c0, float:-2.6171189E29)
            if (r5 != r7) goto L5a
            java.lang.String r3 = "V3"
            com.bytedance.pangle.util.a.b.a = r3     // Catch: java.lang.Exception -> Lce
        L58:
            r3 = r2
            goto Lb5
        L5a:
            r7 = 1896449818(0x7109871a, float:6.810044E29)
            if (r5 != r7) goto L64
            java.lang.String r3 = "V2"
            com.bytedance.pangle.util.a.b.a = r3     // Catch: java.lang.Exception -> Lce
            goto L58
        L64:
            r3.position(r6)     // Catch: java.lang.Exception -> Lce
            goto L1b
        L68:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Exception -> Lce
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lce
            r6.<init>(r9)     // Catch: java.lang.Exception -> Lce
            r6.append(r4)     // Catch: java.lang.Exception -> Lce
            r6.append(r8)     // Catch: java.lang.Exception -> Lce
            r6.append(r5)     // Catch: java.lang.Exception -> Lce
            java.lang.String r4 = ", available: "
            r6.append(r4)     // Catch: java.lang.Exception -> Lce
            int r3 = r3.remaining()     // Catch: java.lang.Exception -> Lce
            r6.append(r3)     // Catch: java.lang.Exception -> Lce
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Exception -> Lce
            r13.<init>(r3)     // Catch: java.lang.Exception -> Lce
            throw r13     // Catch: java.lang.Exception -> Lce
        L8c:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Exception -> Lce
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lce
            r3.<init>(r9)     // Catch: java.lang.Exception -> Lce
            r3.append(r4)     // Catch: java.lang.Exception -> Lce
            r3.append(r8)     // Catch: java.lang.Exception -> Lce
            r3.append(r5)     // Catch: java.lang.Exception -> Lce
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lce
            r13.<init>(r3)     // Catch: java.lang.Exception -> Lce
            throw r13     // Catch: java.lang.Exception -> Lce
        La4:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Exception -> Lce
            java.lang.String r3 = "Insufficient data to read size of APK Signing Block entry #"
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> Lce
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> Lce
            r13.<init>(r3)     // Catch: java.lang.Exception -> Lce
            throw r13     // Catch: java.lang.Exception -> Lce
        Lb4:
            r3 = r1
        Lb5:
            if (r3 == 0) goto Lc3
            byte[] r13 = r13.array()     // Catch: java.lang.Exception -> Lce
            java.lang.String r13 = com.bytedance.pangle.util.f.a(r13)     // Catch: java.lang.Exception -> Lce
            r12 = r0
            r0 = r13
            r13 = r12
            goto Lcf
        Lc3:
            java.lang.String r13 = "without v2 & v3 signature."
            goto Lcf
        Lc6:
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException     // Catch: java.lang.Exception -> Lce
            java.lang.String r3 = "ByteBuffer byte order must be little endian"
            r13.<init>(r3)     // Catch: java.lang.Exception -> Lce
            throw r13     // Catch: java.lang.Exception -> Lce
        Lce:
            r13 = r0
        Lcf:
            r3 = 3
            java.lang.String[] r3 = new java.lang.String[r3]
            r3[r1] = r0
            java.lang.String r0 = com.bytedance.pangle.util.a.b.a
            r3[r2] = r0
            r0 = 2
            r3[r0] = r13
            return r3
    }

    private static java.nio.ByteBuffer b(java.io.File r13) {
            r0 = 0
            java.io.RandomAccessFile r1 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L191
            java.lang.String r2 = "r"
            r1.<init>(r13, r2)     // Catch: java.lang.Throwable -> L191
            long r2 = r1.length()     // Catch: java.lang.Throwable -> L18e
            r4 = 22
            int r13 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r2 = 0
            if (r13 >= 0) goto L14
            goto L22
        L14:
            android.util.Pair r0 = com.bytedance.pangle.util.a.c.a(r1, r2)     // Catch: java.lang.Throwable -> L18e
            if (r0 == 0) goto L1b
            goto L22
        L1b:
            r13 = 65535(0xffff, float:9.1834E-41)
            android.util.Pair r0 = com.bytedance.pangle.util.a.c.a(r1, r13)     // Catch: java.lang.Throwable -> L18e
        L22:
            if (r0 == 0) goto L186
            java.lang.Object r13 = r0.first     // Catch: java.lang.Throwable -> L18e
            java.nio.ByteBuffer r13 = (java.nio.ByteBuffer) r13     // Catch: java.lang.Throwable -> L18e
            java.lang.Object r0 = r0.second     // Catch: java.lang.Throwable -> L18e
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Throwable -> L18e
            long r3 = r0.longValue()     // Catch: java.lang.Throwable -> L18e
            r5 = 20
            long r5 = r3 - r5
            r7 = 0
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 < 0) goto L48
            r1.seek(r5)     // Catch: java.lang.Throwable -> L18e
            int r0 = r1.readInt()     // Catch: java.lang.Throwable -> L18e
            r5 = 1347094023(0x504b0607, float:1.3624679E10)
            if (r0 != r5) goto L48
            r0 = 1
            goto L49
        L48:
            r0 = r2
        L49:
            if (r0 != 0) goto L17e
            com.bytedance.pangle.util.a.c.a(r13)     // Catch: java.lang.Throwable -> L18e
            int r0 = r13.position()     // Catch: java.lang.Throwable -> L18e
            r5 = 16
            int r0 = r0 + r5
            long r9 = com.bytedance.pangle.util.a.c.a(r13, r0)     // Catch: java.lang.Throwable -> L18e
            int r0 = (r9 > r3 ? 1 : (r9 == r3 ? 0 : -1))
            if (r0 > 0) goto L162
            com.bytedance.pangle.util.a.c.a(r13)     // Catch: java.lang.Throwable -> L18e
            int r0 = r13.position()     // Catch: java.lang.Throwable -> L18e
            int r0 = r0 + 12
            long r11 = com.bytedance.pangle.util.a.c.a(r13, r0)     // Catch: java.lang.Throwable -> L18e
            long r11 = r11 + r9
            int r13 = (r11 > r3 ? 1 : (r11 == r3 ? 0 : -1))
            if (r13 != 0) goto L15a
            r3 = 32
            int r13 = (r9 > r3 ? 1 : (r9 == r3 ? 0 : -1))
            if (r13 < 0) goto L14a
            r13 = 24
            java.nio.ByteBuffer r13 = java.nio.ByteBuffer.allocate(r13)     // Catch: java.lang.Throwable -> L18e
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L18e
            r13.order(r0)     // Catch: java.lang.Throwable -> L18e
            int r0 = r13.capacity()     // Catch: java.lang.Throwable -> L18e
            long r3 = (long) r0     // Catch: java.lang.Throwable -> L18e
            long r3 = r9 - r3
            r1.seek(r3)     // Catch: java.lang.Throwable -> L18e
            byte[] r0 = r13.array()     // Catch: java.lang.Throwable -> L18e
            int r3 = r13.arrayOffset()     // Catch: java.lang.Throwable -> L18e
            int r4 = r13.capacity()     // Catch: java.lang.Throwable -> L18e
            r1.readFully(r0, r3, r4)     // Catch: java.lang.Throwable -> L18e
            r0 = 8
            long r3 = r13.getLong(r0)     // Catch: java.lang.Throwable -> L18e
            r11 = 2334950737559900225(0x20676953204b5041, double:1.3968830566012645E-152)
            int r0 = (r3 > r11 ? 1 : (r3 == r11 ? 0 : -1))
            if (r0 != 0) goto L142
            long r3 = r13.getLong(r5)     // Catch: java.lang.Throwable -> L18e
            r5 = 3617552046287187010(0x3234206b636f6c42, double:7.465385175170059E-67)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto L142
            long r3 = r13.getLong(r2)     // Catch: java.lang.Throwable -> L18e
            int r13 = r13.capacity()     // Catch: java.lang.Throwable -> L18e
            long r5 = (long) r13     // Catch: java.lang.Throwable -> L18e
            int r13 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r13 < 0) goto L132
            r5 = 2147483639(0x7ffffff7, double:1.060997891E-314)
            int r13 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r13 > 0) goto L132
            r5 = 8
            long r5 = r5 + r3
            int r13 = (int) r5     // Catch: java.lang.Throwable -> L18e
            long r5 = (long) r13     // Catch: java.lang.Throwable -> L18e
            long r9 = r9 - r5
            int r0 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r0 < 0) goto L122
            java.nio.ByteBuffer r13 = java.nio.ByteBuffer.allocate(r13)     // Catch: java.lang.Throwable -> L18e
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L18e
            r13.order(r0)     // Catch: java.lang.Throwable -> L18e
            r1.seek(r9)     // Catch: java.lang.Throwable -> L18e
            byte[] r0 = r13.array()     // Catch: java.lang.Throwable -> L18e
            int r5 = r13.arrayOffset()     // Catch: java.lang.Throwable -> L18e
            int r6 = r13.capacity()     // Catch: java.lang.Throwable -> L18e
            r1.readFully(r0, r5, r6)     // Catch: java.lang.Throwable -> L18e
            long r5 = r13.getLong(r2)     // Catch: java.lang.Throwable -> L18e
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 != 0) goto L106
            java.lang.Long r0 = java.lang.Long.valueOf(r9)     // Catch: java.lang.Throwable -> L18e
            android.util.Pair r13 = android.util.Pair.create(r13, r0)     // Catch: java.lang.Throwable -> L18e
            java.lang.Object r13 = r13.first     // Catch: java.lang.Throwable -> L18e
            java.nio.ByteBuffer r13 = (java.nio.ByteBuffer) r13     // Catch: java.lang.Throwable -> L18e
            r1.close()
            return r13
        L106:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = "APK Signing Block sizes in header and footer do not match: "
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L18e
            r0.append(r5)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = " vs "
            r0.append(r2)     // Catch: java.lang.Throwable -> L18e
            r0.append(r3)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L18e
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L122:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = "APK Signing Block offset out of range: "
            java.lang.String r2 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = r0.concat(r2)     // Catch: java.lang.Throwable -> L18e
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L132:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = "APK Signing Block size out of range: "
            java.lang.String r2 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = r0.concat(r2)     // Catch: java.lang.Throwable -> L18e
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L142:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = "No APK Signing Block before ZIP Central Directory"
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L14a:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = "APK too small for APK Signing Block. ZIP Central Directory offset: "
            java.lang.String r2 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = r0.concat(r2)     // Catch: java.lang.Throwable -> L18e
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L15a:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = "ZIP Central Directory is not immediately followed by End of Central Directory"
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L162:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = "ZIP Central Directory offset out of range: "
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L18e
            r0.append(r9)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = ". ZIP End of Central Directory offset: "
            r0.append(r2)     // Catch: java.lang.Throwable -> L18e
            r0.append(r3)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L18e
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L17e:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = "ZIP64 APK not supported"
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L186:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Throwable -> L18e
            java.lang.String r0 = "Not an APK file: ZIP End of Central Directory record not found"
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L18e
            throw r13     // Catch: java.lang.Throwable -> L18e
        L18e:
            r13 = move-exception
            r0 = r1
            goto L192
        L191:
            r13 = move-exception
        L192:
            if (r0 == 0) goto L197
            r0.close()
        L197:
            throw r13
    }
}
