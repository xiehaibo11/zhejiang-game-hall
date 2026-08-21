package com.bytedance.pangle.res.a;

public final class c {


    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.bytedance.pangle.util.e<java.lang.Integer, byte[]> a(java.nio.MappedByteBuffer r3, int r4, java.lang.String r5) {
            int r0 = r3.getInt(r4)
            r1 = 67324752(0x4034b50, float:1.5433558E-36)
            if (r0 != r1) goto L63
            int r0 = r4 + 18
            int r0 = r3.getInt(r0)
            int r1 = r4 + 22
            int r1 = r3.getInt(r1)
            if (r0 != r1) goto L41
            byte[] r5 = new byte[r1]
            int r0 = r4 + 26
            short r0 = r3.getShort(r0)
            int r2 = r4 + 28
            short r2 = r3.getShort(r2)
            int r4 = r4 + 30
            int r4 = r4 + r0
            int r4 = r4 + r2
            r0 = 0
        L2a:
            if (r0 >= r1) goto L37
            int r2 = r4 + r0
            byte r2 = r3.get(r2)
            r5[r0] = r2
            int r0 = r0 + 1
            goto L2a
        L37:
            com.bytedance.pangle.util.e r3 = new com.bytedance.pangle.util.e
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3.<init>(r4, r5)
            return r3
        L41:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            java.lang.String r5 = " is compressed. compressSize:"
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = " size:"
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L63:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Expected: 0x04034b50, got: "
            r1.<init>(r2)
            int r3 = r3.getInt(r4)
            r1.append(r3)
            java.lang.String r3 = " FileName:"
            r1.append(r3)
            r1.append(r5)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private static java.nio.MappedByteBuffer a(java.io.File r11) {
            r0 = 0
            java.io.RandomAccessFile r1 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L43
            java.lang.String r2 = "rw"
            r1.<init>(r11, r2)     // Catch: java.lang.Throwable -> L43
            java.nio.channels.FileChannel r3 = r1.getChannel()     // Catch: java.lang.Throwable -> L40
            long r9 = r3.size()     // Catch: java.lang.Throwable -> L40
            java.nio.channels.FileChannel$MapMode r4 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Throwable -> L40
            r5 = 0
            r7 = r9
            java.nio.MappedByteBuffer r11 = r3.map(r4, r5, r7)     // Catch: java.lang.Throwable -> L40
            r0 = 4194304(0x400000, float:5.877472E-39)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L40
            r2 = 4194304(0x400000, double:2.0722615E-317)
            long r4 = r9 / r2
            long r9 = r9 % r2
            int r2 = (int) r9     // Catch: java.lang.Throwable -> L40
            r3 = 0
        L25:
            long r6 = (long) r3     // Catch: java.lang.Throwable -> L40
            int r6 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r6 >= 0) goto L30
            r11.get(r0)     // Catch: java.lang.Throwable -> L40
            int r3 = r3 + 1
            goto L25
        L30:
            if (r2 <= 0) goto L37
            byte[] r0 = new byte[r2]     // Catch: java.lang.Throwable -> L40
            r11.get(r0)     // Catch: java.lang.Throwable -> L40
        L37:
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L40
            r11.order(r0)     // Catch: java.lang.Throwable -> L40
            r1.close()
            return r11
        L40:
            r11 = move-exception
            r0 = r1
            goto L44
        L43:
            r11 = move-exception
        L44:
            if (r0 == 0) goto L49
            r0.close()
        L49:
            throw r11
    }

    private static void a(java.io.File r10, java.util.HashSet<java.lang.String> r11, com.bytedance.pangle.res.a.h r12) {
            java.lang.String r0 = "AndroidManifest.xml"
            java.nio.MappedByteBuffer r10 = a(r10)
            int r1 = r10.capacity()
            r2 = -1
            r3 = 22
            r4 = 0
            if (r1 < r3) goto L32
            int r1 = r1 - r3
            r3 = 65535(0xffff, float:9.1834E-41)
            int r3 = java.lang.Math.min(r1, r3)
            r5 = r4
        L19:
            if (r5 >= r3) goto L32
            int r6 = r1 - r5
            int r7 = r10.getInt(r6)
            r8 = 101010256(0x6054b50, float:2.506985E-35)
            if (r7 != r8) goto L2f
            int r7 = r6 + 20
            short r7 = r10.getShort(r7)
            if (r7 != r5) goto L2f
            goto L33
        L2f:
            int r5 = r5 + 1
            goto L19
        L32:
            r6 = r2
        L33:
            if (r6 == r2) goto L12b
            int r1 = r6 + 12
            int r1 = r10.getInt(r1)
            int r6 = r6 + 16
            int r2 = r10.getInt(r6)
            int r1 = r1 + r2
        L42:
            if (r2 >= r1) goto L12a
            int r3 = r10.getInt(r2)
            r5 = 33639248(0x2014b50, float:9.499037E-38)
            if (r3 != r5) goto L112
            int r3 = r2 + 28
            short r3 = r10.getShort(r3)
            int r5 = r2 + 30
            short r5 = r10.getShort(r5)
            byte[] r6 = new byte[r3]
            r7 = r4
        L5c:
            if (r7 >= r3) goto L6a
            int r8 = r2 + 46
            int r8 = r8 + r7
            byte r8 = r10.get(r8)
            r6[r7] = r8
            int r7 = r7 + 1
            goto L5c
        L6a:
            java.lang.String r7 = new java.lang.String
            r7.<init>(r6)
            int r6 = r2 + 20
            int r6 = r10.getInt(r6)
            int r8 = r2 + 24
            int r8 = r10.getInt(r8)
            boolean r9 = r11.contains(r7)
            if (r9 == 0) goto L10c
            if (r6 != r8) goto Lf5
            int r6 = r2 + 42
            int r6 = r10.getInt(r6)
            com.bytedance.pangle.util.e r6 = a(r10, r6, r7)
            U r8 = r6.b     // Catch: java.lang.Throwable -> Lee
            byte[] r8 = (byte[]) r8     // Catch: java.lang.Throwable -> Lee
            boolean r9 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lee
            if (r9 != 0) goto Ld1
            boolean r9 = r12.a(r7)     // Catch: java.lang.Throwable -> Lee
            if (r9 == 0) goto Ld1
            boolean r9 = r7.equals(r0)     // Catch: java.lang.Throwable -> Lee
            if (r9 == 0) goto La7
            com.bytedance.pangle.res.a.k.a(r8, r12)     // Catch: java.lang.Throwable -> Lee
            goto Ld1
        La7:
            java.lang.String r9 = ".xml"
            boolean r9 = r7.endsWith(r9)     // Catch: java.lang.Throwable -> Lee
            if (r9 == 0) goto Lb7
            java.lang.String r9 = "res/"
            boolean r9 = r7.startsWith(r9)     // Catch: java.lang.Throwable -> Lee
            if (r9 != 0) goto Lbd
        Lb7:
            boolean r9 = android.text.TextUtils.equals(r7, r0)     // Catch: java.lang.Throwable -> Lee
            if (r9 == 0) goto Lc1
        Lbd:
            com.bytedance.pangle.res.a.k.a(r8, r12)     // Catch: java.lang.Throwable -> Lee
            goto Ld1
        Lc1:
            java.lang.String r9 = "resources.arsc"
            boolean r7 = r7.equals(r9)     // Catch: java.lang.Throwable -> Lee
            if (r7 == 0) goto Ld1
            com.bytedance.pangle.res.a.a r7 = new com.bytedance.pangle.res.a.a     // Catch: java.lang.Throwable -> Lee
            r7.<init>(r8, r12)     // Catch: java.lang.Throwable -> Lee
            r7.a()     // Catch: java.lang.Throwable -> Lee
        Ld1:
            r7 = r4
        Ld2:
            U r8 = r6.b
            byte[] r8 = (byte[]) r8
            int r8 = r8.length
            if (r7 >= r8) goto L10c
            T r8 = r6.a
            java.lang.Integer r8 = (java.lang.Integer) r8
            int r8 = r8.intValue()
            int r8 = r8 + r7
            U r9 = r6.b
            byte[] r9 = (byte[]) r9
            r9 = r9[r7]
            r10.put(r8, r9)
            int r7 = r7 + 1
            goto Ld2
        Lee:
            r10 = move-exception
            java.lang.RuntimeException r11 = new java.lang.RuntimeException
            r11.<init>(r10)
            throw r11
        Lf5:
            java.lang.Throwable r10 = new java.lang.Throwable
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r7)
            java.lang.String r12 = " is compressed."
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            r10.<init>(r11)
            throw r10
        L10c:
            int r3 = r3 + 46
            int r3 = r3 + r5
            int r2 = r2 + r3
            goto L42
        L112:
            java.lang.RuntimeException r11 = new java.lang.RuntimeException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            java.lang.String r0 = "Expected: 0x02014b50, got: "
            r12.<init>(r0)
            int r10 = r10.getInt(r2)
            r12.append(r10)
            java.lang.String r10 = r12.toString()
            r11.<init>(r10)
            throw r11
        L12a:
            return
        L12b:
            java.lang.Throwable r10 = new java.lang.Throwable
            java.lang.String r11 = "endOfCentralPosition == -1"
            r10.<init>(r11)
            throw r10
    }

    public final int a(java.io.File r20, boolean r21, java.lang.StringBuilder r22) {
            r19 = this;
            r0 = r20
            r1 = r21
            r2 = r22
            java.lang.String r3 = "writeText failed."
            java.lang.String r4 = "resMapping"
            java.lang.String r5 = "resMappingBakFile is not exists. "
            java.lang.String r6 = "modifyRes failed. catch: "
            java.lang.String r7 = "Zeus/install_pangle"
            r8 = 300(0x12c, float:4.2E-43)
            r9 = 0
            java.util.zip.ZipFile r10 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L166
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L166
            java.lang.String r9 = "assets/ZeusResMapping"
            java.util.zip.ZipEntry r9 = r10.getEntry(r9)     // Catch: java.lang.Throwable -> L163
            if (r9 != 0) goto L26
            com.bytedance.pangle.util.g.a(r10)
            r0 = 200(0xc8, float:2.8E-43)
            return r0
        L26:
            java.lang.String r11 = "resMappingBak"
            if (r1 == 0) goto L8b
            java.io.File r9 = new java.io.File     // Catch: java.lang.Throwable -> L163
            java.io.File r12 = r20.getParentFile()     // Catch: java.lang.Throwable -> L163
            r9.<init>(r12, r11)     // Catch: java.lang.Throwable -> L163
            boolean r12 = r9.exists()     // Catch: java.lang.Throwable -> L163
            if (r12 == 0) goto L6a
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L163
            r5.<init>(r9)     // Catch: java.lang.Throwable -> L163
            java.nio.channels.FileChannel r9 = r5.getChannel()     // Catch: java.lang.Throwable -> L163
            java.nio.channels.FileChannel$MapMode r13 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Throwable -> L163
            r14 = 0
            long r16 = r9.size()     // Catch: java.lang.Throwable -> L163
            r12 = r9
            java.nio.MappedByteBuffer r12 = r12.map(r13, r14, r16)     // Catch: java.lang.Throwable -> L163
            java.nio.charset.Charset r13 = java.nio.charset.Charset.defaultCharset()     // Catch: java.lang.Throwable -> L163
            java.nio.charset.CharsetDecoder r13 = r13.newDecoder()     // Catch: java.lang.Throwable -> L163
            java.nio.ByteBuffer r12 = r12.asReadOnlyBuffer()     // Catch: java.lang.Throwable -> L163
            java.nio.CharBuffer r12 = r13.decode(r12)     // Catch: java.lang.Throwable -> L163
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L163
            r9.close()     // Catch: java.lang.Throwable -> L163
            r5.close()     // Catch: java.lang.Throwable -> L163
            goto Lab
        L6a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L163
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L163
            r0.append(r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.log.ZeusLogger.errReport(r7, r0)     // Catch: java.lang.Throwable -> L163
            r2.append(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L163
            r2.append(r0)     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.util.g.a(r10)
            return r8
        L8b:
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L163
            r5.<init>()     // Catch: java.lang.Throwable -> L163
            java.io.InputStream r9 = r10.getInputStream(r9)     // Catch: java.lang.Throwable -> L163
            if (r9 == 0) goto La7
            java.nio.channels.ReadableByteChannel r9 = java.nio.channels.Channels.newChannel(r9)     // Catch: java.lang.Throwable -> L163
            java.nio.channels.WritableByteChannel r12 = java.nio.channels.Channels.newChannel(r5)     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.util.h.a(r9, r12)     // Catch: java.lang.Throwable -> L163
            r9.close()     // Catch: java.lang.Throwable -> L163
            r12.close()     // Catch: java.lang.Throwable -> L163
        La7:
            java.lang.String r12 = r5.toString()     // Catch: java.lang.Throwable -> L163
        Lab:
            boolean r5 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L163
            if (r5 == 0) goto Lca
            java.lang.String r0 = "zeusResMappingContent empty, useBakFile:"
            java.lang.String r3 = java.lang.String.valueOf(r21)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.log.ZeusLogger.errReport(r7, r0)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = "zeusResMappingContent isEmpty. useBakFile:"
            r2.append(r0)     // Catch: java.lang.Throwable -> L163
            r2.append(r1)     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.util.g.a(r10)
            return r8
        Lca:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L163
            r1.<init>(r12)     // Catch: java.lang.Throwable -> L163
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L163
            r5.<init>(r12)     // Catch: java.lang.Throwable -> L163
            java.lang.String r9 = "fileNames"
            java.lang.Object r9 = r1.get(r9)     // Catch: java.lang.Throwable -> L163
            org.json.JSONArray r9 = (org.json.JSONArray) r9     // Catch: java.lang.Throwable -> L163
            java.util.HashSet r15 = new java.util.HashSet     // Catch: java.lang.Throwable -> L163
            r15.<init>()     // Catch: java.lang.Throwable -> L163
            r18 = 0
            r12 = r18
        Le5:
            int r13 = r9.length()     // Catch: java.lang.Throwable -> L163
            if (r12 >= r13) goto Lf7
            java.lang.Object r13 = r9.get(r12)     // Catch: java.lang.Throwable -> L163
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Throwable -> L163
            r15.add(r13)     // Catch: java.lang.Throwable -> L163
            int r12 = r12 + 1
            goto Le5
        Lf7:
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L163
            r14 = r1
            org.json.JSONObject r14 = (org.json.JSONObject) r14     // Catch: java.lang.Throwable -> L163
            java.lang.Object r1 = r5.get(r4)     // Catch: java.lang.Throwable -> L163
            org.json.JSONObject r1 = (org.json.JSONObject) r1     // Catch: java.lang.Throwable -> L163
            r4 = 1
            int[] r4 = new int[r4]     // Catch: java.lang.Throwable -> L163
            r4[r18] = r18     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.res.a.c$1 r9 = new com.bytedance.pangle.res.a.c$1     // Catch: java.lang.Throwable -> L163
            r12 = r9
            r13 = r19
            r21 = r15
            r15 = r1
            r16 = r4
            r17 = r21
            r12.<init>(r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L163
            r1 = r21
            a(r0, r1, r9)     // Catch: java.lang.Throwable -> L163
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L163
            java.lang.String r9 = "modifyRes count = "
            r1.<init>(r9)     // Catch: java.lang.Throwable -> L163
            r4 = r4[r18]     // Catch: java.lang.Throwable -> L163
            r1.append(r4)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.log.ZeusLogger.d(r7, r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> L163
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L163
            java.io.File r0 = r20.getParentFile()     // Catch: java.lang.Throwable -> L163
            r4.<init>(r0, r11)     // Catch: java.lang.Throwable -> L163
            boolean r0 = com.bytedance.pangle.util.h.a(r1, r4, r2)     // Catch: java.lang.Throwable -> L163
            if (r0 == 0) goto L149
            com.bytedance.pangle.util.g.a(r10)
            r0 = 100
            return r0
        L149:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L163
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r22.toString()     // Catch: java.lang.Throwable -> L163
            r0.append(r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.log.ZeusLogger.errReport(r7, r0)     // Catch: java.lang.Throwable -> L163
            r2.append(r3)     // Catch: java.lang.Throwable -> L163
            com.bytedance.pangle.util.g.a(r10)
            return r8
        L163:
            r0 = move-exception
            r9 = r10
            goto L167
        L166:
            r0 = move-exception
        L167:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18a
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Throwable -> L18a
            r1.append(r3)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L18a
            com.bytedance.pangle.log.ZeusLogger.errReport(r7, r1)     // Catch: java.lang.Throwable -> L18a
            r2.append(r6)     // Catch: java.lang.Throwable -> L18a
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L18a
            r2.append(r0)     // Catch: java.lang.Throwable -> L18a
            if (r9 == 0) goto L189
            com.bytedance.pangle.util.g.a(r9)
        L189:
            return r8
        L18a:
            r0 = move-exception
            if (r9 == 0) goto L190
            com.bytedance.pangle.util.g.a(r9)
        L190:
            throw r0
    }
}
