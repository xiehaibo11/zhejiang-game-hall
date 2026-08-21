package com.xiaomi.clientreport.processor;

public class a implements com.xiaomi.clientreport.processor.IEventProcessor {
    protected android.content.Context a;
    private java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> a;

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a(r1)
            return
    }

    public static java.lang.String a(com.xiaomi.clientreport.data.a r0) {
            int r0 = r0.production
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    private java.util.List<java.lang.String> a(java.lang.String r9) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 4
            byte[] r2 = new byte[r1]
            byte[] r3 = new byte[r1]
            r4 = 0
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r6.<init>(r9)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
        L15:
            int r9 = r5.read(r2)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            r4 = -1
            if (r9 != r4) goto L1d
            goto L66
        L1d:
            java.lang.String r6 = "eventData read from cache file failed because magicNumber error"
            if (r9 == r1) goto L25
        L21:
            com.xiaomi.channel.commonutils.logger.b.d(r6)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            goto L66
        L25:
            int r9 = com.xiaomi.push.af.a(r2)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            r7 = -573785174(0xffffffffddccbbaa, float:-1.8440715E18)
            if (r9 == r7) goto L2f
            goto L21
        L2f:
            int r9 = r5.read(r3)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            if (r9 != r4) goto L36
            goto L66
        L36:
            if (r9 == r1) goto L3e
            java.lang.String r9 = "eventData read from cache file failed cause lengthBuffer error"
        L3a:
            com.xiaomi.channel.commonutils.logger.b.d(r9)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            goto L66
        L3e:
            int r9 = com.xiaomi.push.af.a(r3)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            r4 = 1
            if (r9 < r4) goto L63
            r4 = 4096(0x1000, float:5.74E-42)
            if (r9 <= r4) goto L4a
            goto L63
        L4a:
            byte[] r4 = new byte[r9]     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            int r6 = r5.read(r4)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            if (r6 == r9) goto L55
            java.lang.String r9 = "eventData read from cache file failed cause buffer size not equal length"
            goto L3a
        L55:
            java.lang.String r9 = r8.bytesToString(r4)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            if (r4 != 0) goto L15
            r0.add(r9)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            goto L15
        L63:
            java.lang.String r9 = "eventData read from cache file failed cause lengthBuffer < 1 || lengthBuffer > 4K"
            goto L3a
        L66:
            com.xiaomi.push.ab.a(r5)
            goto L79
        L6a:
            r9 = move-exception
            r4 = r5
            goto L7a
        L6d:
            r9 = move-exception
            r4 = r5
            goto L73
        L70:
            r9 = move-exception
            goto L7a
        L72:
            r9 = move-exception
        L73:
            com.xiaomi.channel.commonutils.logger.b.a(r9)     // Catch: java.lang.Throwable -> L70
            com.xiaomi.push.ab.a(r4)
        L79:
            return r0
        L7a:
            com.xiaomi.push.ab.a(r4)
            throw r9
    }

    private void a(java.io.RandomAccessFile r2, java.nio.channels.FileLock r3) {
            r1 = this;
            if (r3 == 0) goto L10
            boolean r0 = r3.isValid()
            if (r0 == 0) goto L10
            r3.release()     // Catch: java.io.IOException -> Lc
            goto L10
        Lc:
            r3 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L10:
            com.xiaomi.push.ab.a(r2)
            return
    }

    private void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.content.Context r0 = r3.a
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "24:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ","
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r5 = 5001(0x1389, float:7.008E-42)
            com.xiaomi.clientreport.data.EventClientReport r4 = r0.a(r5, r4)
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            java.lang.String r4 = r4.toJsonString()
            r5.add(r4)
            r3.a(r5)
            return
    }

    private com.xiaomi.clientreport.data.a[] a(com.xiaomi.clientreport.data.a[] r14) {
            r13 = this;
            r0 = 0
            r1 = r14[r0]
            java.lang.String r1 = r13.b(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            r3 = 0
            if (r2 == 0) goto Lf
            return r3
        Lf:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            r4.<init>()     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            r4.append(r1)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            java.lang.String r5 = ".lock"
            r4.append(r5)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            r2.<init>(r4)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            com.xiaomi.push.ab.a(r2)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            java.lang.String r5 = "rw"
            r4.<init>(r2, r5)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Laf
            java.nio.channels.FileChannel r2 = r4.getChannel()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> La7
            java.nio.channels.FileLock r2 = r2.lock()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> La7
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            java.io.BufferedOutputStream r6 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            java.io.FileOutputStream r7 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            r8 = 1
            r7.<init>(r5, r8)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            int r5 = r14.length     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            r7 = r0
            r9 = r7
        L4a:
            if (r7 >= r5) goto Lb8
            r10 = r14[r7]     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            if (r10 != 0) goto L51
            goto L9a
        L51:
            java.lang.String r10 = r10.toJsonString()     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            byte[] r10 = r13.stringToBytes(r10)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            if (r10 == 0) goto L95
            int r11 = r10.length     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            if (r11 < r8) goto L95
            int r11 = r10.length     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            r12 = 4096(0x1000, float:5.74E-42)
            if (r11 <= r12) goto L64
            goto L95
        L64:
            android.content.Context r11 = r13.a     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            boolean r11 = com.xiaomi.push.bt.a(r11, r1)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            if (r11 != 0) goto L7a
            int r1 = r14.length     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            int r1 = r1 - r9
            com.xiaomi.clientreport.data.a[] r5 = new com.xiaomi.clientreport.data.a[r1]     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            java.lang.System.arraycopy(r14, r9, r5, r0, r1)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            com.xiaomi.push.ab.a(r6)
            r13.a(r4, r2)
            return r5
        L7a:
            r11 = -573785174(0xffffffffddccbbaa, float:-1.8440715E18)
            byte[] r11 = com.xiaomi.push.af.a(r11)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            r6.write(r11)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            int r11 = r10.length     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            byte[] r11 = com.xiaomi.push.af.a(r11)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            r6.write(r11)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            r6.write(r10)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            r6.flush()     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
            int r9 = r9 + 1
            goto L9a
        L95:
            java.lang.String r10 = "event data throw a invalid item "
            com.xiaomi.channel.commonutils.logger.b.d(r10)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lbf
        L9a:
            int r7 = r7 + 1
            goto L4a
        L9d:
            r14 = move-exception
            goto Lb3
        L9f:
            r14 = move-exception
            goto Lc1
        La1:
            r14 = move-exception
            r6 = r3
            goto Lb3
        La4:
            r14 = move-exception
            r2 = r3
            goto Lc1
        La7:
            r14 = move-exception
            r2 = r3
            r6 = r2
            goto Lb3
        Lab:
            r14 = move-exception
            r2 = r3
            r4 = r2
            goto Lc1
        Laf:
            r14 = move-exception
            r2 = r3
            r4 = r2
            r6 = r4
        Lb3:
            java.lang.String r0 = "event data write to cache file failed cause exception"
            com.xiaomi.channel.commonutils.logger.b.a(r0, r14)     // Catch: java.lang.Throwable -> Lbf
        Lb8:
            com.xiaomi.push.ab.a(r6)
            r13.a(r4, r2)
            return r3
        Lbf:
            r14 = move-exception
            r3 = r6
        Lc1:
            com.xiaomi.push.ab.a(r3)
            r13.a(r4, r2)
            throw r14
    }

    private java.lang.String b(com.xiaomi.clientreport.data.a r5) {
            r4 = this;
            android.content.Context r0 = r4.a
            java.lang.String r1 = "event"
            java.io.File r0 = r0.getExternalFilesDir(r1)
            java.lang.String r5 = a(r5)
            r1 = 0
            if (r0 != 0) goto L10
            return r1
        L10:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = r0.getAbsolutePath()
            r2.append(r0)
            java.lang.String r0 = java.io.File.separator
            r2.append(r0)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0 = 0
        L29:
            r2 = 100
            if (r0 >= r2) goto L49
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            android.content.Context r3 = r4.a
            boolean r3 = com.xiaomi.push.bt.a(r3, r2)
            if (r3 == 0) goto L46
            r1 = r2
            goto L49
        L46:
            int r0 = r0 + 1
            goto L29
        L49:
            return r1
    }

    @Override
    public void a() {
            r11 = this;
            android.content.Context r0 = r11.a
            java.lang.String r1 = "eventUploading"
            java.lang.String r2 = "event"
            com.xiaomi.push.bt.a(r0, r2, r1)
            android.content.Context r0 = r11.a
            java.io.File[] r0 = com.xiaomi.push.bt.a(r0, r1)
            if (r0 == 0) goto L129
            int r1 = r0.length
            if (r1 > 0) goto L16
            goto L129
        L16:
            int r1 = r0.length
            r2 = 0
            r3 = 0
            r4 = r3
            r5 = r4
        L1b:
            if (r2 >= r1) goto L129
            r6 = r0[r2]
            if (r6 != 0) goto L3b
            if (r3 == 0) goto L31
            boolean r6 = r3.isValid()
            if (r6 == 0) goto L31
            r3.release()     // Catch: java.io.IOException -> L2d
            goto L31
        L2d:
            r6 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L31:
            com.xiaomi.push.ab.a(r4)
            if (r5 == 0) goto L10c
        L36:
            r5.delete()
            goto L10c
        L3b:
            long r7 = r6.length()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r9 = 5242880(0x500000, double:2.590327E-317)
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 <= 0) goto L94
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r7.<init>()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r8 = "eventData read from cache file failed because "
            r7.append(r8)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r8 = r6.getName()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r7.append(r8)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r8 = " is too big, length "
            r7.append(r8)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            long r8 = r6.length()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r7.append(r8)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            com.xiaomi.channel.commonutils.logger.b.d(r7)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r7 = r6.getName()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            android.content.Context r8 = r11.a     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            long r9 = r6.length()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r8 = android.text.format.Formatter.formatFileSize(r8, r9)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r11.a(r7, r8)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r6.delete()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            if (r3 == 0) goto L8e
            boolean r6 = r3.isValid()
            if (r6 == 0) goto L8e
            r3.release()     // Catch: java.io.IOException -> L8a
            goto L8e
        L8a:
            r6 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L8e:
            com.xiaomi.push.ab.a(r4)
            if (r5 == 0) goto L10c
            goto L36
        L94:
            java.lang.String r7 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.io.File r8 = new java.io.File     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r9.<init>()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r9.append(r7)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r10 = ".lock"
            r9.append(r10)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> Lf1
            com.xiaomi.push.ab.a(r8)     // Catch: java.lang.Throwable -> Le9 java.lang.Exception -> Lec
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> Le9 java.lang.Exception -> Lec
            java.lang.String r9 = "rw"
            r5.<init>(r8, r9)     // Catch: java.lang.Throwable -> Le9 java.lang.Exception -> Lec
            java.nio.channels.FileChannel r4 = r5.getChannel()     // Catch: java.lang.Throwable -> Le3 java.lang.Exception -> Le6
            java.nio.channels.FileLock r3 = r4.lock()     // Catch: java.lang.Throwable -> Le3 java.lang.Exception -> Le6
            java.util.List r4 = r11.a(r7)     // Catch: java.lang.Throwable -> Le3 java.lang.Exception -> Le6
            r11.a(r4)     // Catch: java.lang.Throwable -> Le3 java.lang.Exception -> Le6
            r6.delete()     // Catch: java.lang.Throwable -> Le3 java.lang.Exception -> Le6
            if (r3 == 0) goto Lda
            boolean r4 = r3.isValid()
            if (r4 == 0) goto Lda
            r3.release()     // Catch: java.io.IOException -> Ld6
            goto Lda
        Ld6:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        Lda:
            com.xiaomi.push.ab.a(r5)
            r8.delete()
            r4 = r5
            r5 = r8
            goto L10c
        Le3:
            r0 = move-exception
            r4 = r5
            goto Lea
        Le6:
            r6 = move-exception
            r4 = r5
            goto Led
        Le9:
            r0 = move-exception
        Lea:
            r5 = r8
            goto L110
        Lec:
            r6 = move-exception
        Led:
            r5 = r8
            goto Lf2
        Lef:
            r0 = move-exception
            goto L110
        Lf1:
            r6 = move-exception
        Lf2:
            com.xiaomi.channel.commonutils.logger.b.a(r6)     // Catch: java.lang.Throwable -> Lef
            if (r3 == 0) goto L105
            boolean r6 = r3.isValid()
            if (r6 == 0) goto L105
            r3.release()     // Catch: java.io.IOException -> L101
            goto L105
        L101:
            r6 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L105:
            com.xiaomi.push.ab.a(r4)
            if (r5 == 0) goto L10c
            goto L36
        L10c:
            int r2 = r2 + 1
            goto L1b
        L110:
            if (r3 == 0) goto L120
            boolean r1 = r3.isValid()
            if (r1 == 0) goto L120
            r3.release()     // Catch: java.io.IOException -> L11c
            goto L120
        L11c:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L120:
            com.xiaomi.push.ab.a(r4)
            if (r5 == 0) goto L128
            r5.delete()
        L128:
            throw r0
        L129:
            return
    }

    public void a(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void a(com.xiaomi.clientreport.data.a r3) {
            r2 = this;
            boolean r0 = r3 instanceof com.xiaomi.clientreport.data.EventClientReport
            if (r0 != 0) goto L5
            return
        L5:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r0 = r2.a
            if (r0 != 0) goto La
            return
        La:
            com.xiaomi.clientreport.data.EventClientReport r3 = (com.xiaomi.clientreport.data.EventClientReport) r3
            java.lang.String r0 = a(r3)
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r1 = r2.a
            java.lang.Object r1 = r1.get(r0)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            if (r1 != 0) goto L1f
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        L1f:
            r1.add(r3)
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r3 = r2.a
            r3.put(r0, r1)
            return
    }

    public void a(java.util.List<java.lang.String> r2) {
            r1 = this;
            android.content.Context r0 = r1.a
            com.xiaomi.push.bt.a(r0, r2)
            return
    }

    public void a(com.xiaomi.clientreport.data.a[] r3) {
            r2 = this;
            if (r3 == 0) goto L19
            int r0 = r3.length
            if (r0 == 0) goto L19
            r0 = 0
            r1 = r3[r0]
            if (r1 != 0) goto Lb
            goto L19
        Lb:
            com.xiaomi.clientreport.data.a[] r3 = r2.a(r3)
            if (r3 == 0) goto L18
            int r1 = r3.length
            if (r1 <= 0) goto L18
            r1 = r3[r0]
            if (r1 != 0) goto Lb
        L18:
            return
        L19:
            java.lang.String r3 = "event data write to cache file failed because data null"
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return
    }

    @Override
    public void b() {
            r3 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r0 = r3.a
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r0.size()
            if (r0 <= 0) goto L3e
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r0 = r3.a
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L15:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r2 = r3.a
            java.lang.Object r1 = r2.get(r1)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            if (r1 == 0) goto L15
            int r2 = r1.size()
            if (r2 <= 0) goto L15
            int r2 = r1.size()
            com.xiaomi.clientreport.data.a[] r2 = new com.xiaomi.clientreport.data.a[r2]
            r1.toArray(r2)
            r3.a(r2)
            goto L15
        L3e:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r0 = r3.a
            r0.clear()
            return
    }

    @Override
    public java.lang.String bytesToString(byte[] r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L4f
            int r1 = r4.length
            r2 = 1
            if (r1 >= r2) goto L8
            goto L4f
        L8:
            android.content.Context r1 = r3.a
            com.xiaomi.clientreport.manager.a r1 = com.xiaomi.clientreport.manager.a.a(r1)
            com.xiaomi.clientreport.data.Config r1 = r1.a()
            boolean r1 = r1.isEventEncrypted()
            if (r1 != 0) goto L1d
            java.lang.String r4 = com.xiaomi.push.bp.b(r4)
            return r4
        L1d:
            android.content.Context r1 = r3.a
            java.lang.String r1 = com.xiaomi.push.bt.a(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L2a
            return r0
        L2a:
            byte[] r1 = com.xiaomi.push.bt.a(r1)
            if (r1 == 0) goto L4f
            int r2 = r1.length
            if (r2 <= 0) goto L4f
            byte[] r4 = com.xiaomi.push.i.a(r1, r4)     // Catch: javax.crypto.IllegalBlockSizeException -> L41 javax.crypto.BadPaddingException -> L43 javax.crypto.NoSuchPaddingException -> L45 java.security.InvalidKeyException -> L47 java.security.NoSuchAlgorithmException -> L49 java.security.InvalidAlgorithmParameterException -> L4b
            r1 = 2
            byte[] r4 = android.util.Base64.decode(r4, r1)     // Catch: javax.crypto.IllegalBlockSizeException -> L41 javax.crypto.BadPaddingException -> L43 javax.crypto.NoSuchPaddingException -> L45 java.security.InvalidKeyException -> L47 java.security.NoSuchAlgorithmException -> L49 java.security.InvalidAlgorithmParameterException -> L4b
            java.lang.String r4 = com.xiaomi.push.bp.b(r4)     // Catch: javax.crypto.IllegalBlockSizeException -> L41 javax.crypto.BadPaddingException -> L43 javax.crypto.NoSuchPaddingException -> L45 java.security.InvalidKeyException -> L47 java.security.NoSuchAlgorithmException -> L49 java.security.InvalidAlgorithmParameterException -> L4b
            return r4
        L41:
            r4 = move-exception
            goto L4c
        L43:
            r4 = move-exception
            goto L4c
        L45:
            r4 = move-exception
            goto L4c
        L47:
            r4 = move-exception
            goto L4c
        L49:
            r4 = move-exception
            goto L4c
        L4b:
            r4 = move-exception
        L4c:
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L4f:
            return r0
    }

    @Override
    public void setEventMap(java.util.HashMap<java.lang.String, java.util.ArrayList<com.xiaomi.clientreport.data.a>> r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public byte[] stringToBytes(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.Context r0 = r4.a
            com.xiaomi.clientreport.manager.a r0 = com.xiaomi.clientreport.manager.a.a(r0)
            com.xiaomi.clientreport.data.Config r0 = r0.a()
            boolean r0 = r0.isEventEncrypted()
            if (r0 != 0) goto L1d
            byte[] r5 = com.xiaomi.push.bp.a(r5)
            return r5
        L1d:
            android.content.Context r0 = r4.a
            java.lang.String r0 = com.xiaomi.push.bt.a(r0)
            byte[] r5 = com.xiaomi.push.bp.a(r5)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L4b
            if (r5 == 0) goto L4b
            int r2 = r5.length
            r3 = 1
            if (r2 > r3) goto L34
            goto L4b
        L34:
            byte[] r0 = com.xiaomi.push.bt.a(r0)
            if (r0 == 0) goto L4b
            int r2 = r0.length     // Catch: java.lang.Exception -> L47
            if (r2 <= r3) goto L4b
            r2 = 2
            byte[] r5 = android.util.Base64.encode(r5, r2)     // Catch: java.lang.Exception -> L47
            byte[] r5 = com.xiaomi.push.i.b(r0, r5)     // Catch: java.lang.Exception -> L47
            return r5
        L47:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)
        L4b:
            return r1
    }
}
