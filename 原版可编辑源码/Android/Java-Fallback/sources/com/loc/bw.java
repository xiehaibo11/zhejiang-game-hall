package com.loc;

public final class bw {
    public static int a(com.loc.bv r10) {
            java.lang.String r0 = "code"
            r1 = -1
            r2 = 0
            com.loc.co r3 = r10.f     // Catch: java.lang.Throwable -> L96
            boolean r3 = r3.c()     // Catch: java.lang.Throwable -> L96
            if (r3 == 0) goto L8b
            com.loc.co r3 = r10.f     // Catch: java.lang.Throwable -> L96
            r4 = 1
            r3.a(r4)     // Catch: java.lang.Throwable -> L96
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = r10.a     // Catch: java.lang.Throwable -> L96
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L96
            long r5 = r10.b     // Catch: java.lang.Throwable -> L96
            com.loc.bl r3 = com.loc.bl.a(r3, r5)     // Catch: java.lang.Throwable -> L96
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L88
            r5.<init>()     // Catch: java.lang.Throwable -> L88
            byte[] r6 = a(r3, r10, r5)     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L7f
            int r7 = r6.length     // Catch: java.lang.Throwable -> L88
            if (r7 != 0) goto L2e
            goto L7f
        L2e:
            com.loc.au r7 = new com.loc.au     // Catch: java.lang.Throwable -> L88
            java.lang.String r8 = r10.c     // Catch: java.lang.Throwable -> L88
            r7.<init>(r6, r8)     // Catch: java.lang.Throwable -> L88
            com.loc.bo.a()     // Catch: java.lang.Throwable -> L88
            com.loc.bu r7 = com.loc.bo.a(r7)     // Catch: java.lang.Throwable -> L88
            byte[] r7 = r7.a     // Catch: java.lang.Throwable -> L88
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L88
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Throwable -> L88
            r9.<init>(r7)     // Catch: java.lang.Throwable -> L88
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L88
            boolean r7 = r8.has(r0)     // Catch: java.lang.Throwable -> L88
            if (r7 == 0) goto L7d
            int r0 = r8.getInt(r0)     // Catch: java.lang.Throwable -> L88
            if (r0 != r4) goto L7d
            com.loc.co r0 = r10.f     // Catch: java.lang.Throwable -> L88
            if (r0 == 0) goto L60
            if (r6 == 0) goto L60
            com.loc.co r0 = r10.f     // Catch: java.lang.Throwable -> L88
            int r4 = r6.length     // Catch: java.lang.Throwable -> L88
            r0.a(r4)     // Catch: java.lang.Throwable -> L88
        L60:
            com.loc.co r10 = r10.f     // Catch: java.lang.Throwable -> L88
            int r10 = r10.b()     // Catch: java.lang.Throwable -> L88
            r0 = 2147483647(0x7fffffff, float:NaN)
            if (r10 >= r0) goto L6f
            a(r3, r5)     // Catch: java.lang.Throwable -> L88
            goto L7b
        L6f:
            r3.d()     // Catch: java.lang.Throwable -> L73
            goto L7b
        L73:
            r10 = move-exception
            java.lang.String r0 = "ofm"
            java.lang.String r4 = "dlo"
            com.loc.av.b(r10, r0, r4)     // Catch: java.lang.Throwable -> L88
        L7b:
            int r10 = r6.length     // Catch: java.lang.Throwable -> L96
            return r10
        L7d:
            r2 = r3
            goto L8b
        L7f:
            r3.close()     // Catch: java.lang.Throwable -> L83
            goto L87
        L83:
            r10 = move-exception
            r10.printStackTrace()
        L87:
            return r1
        L88:
            r10 = move-exception
            r2 = r3
            goto L97
        L8b:
            if (r2 == 0) goto La3
            r2.close()     // Catch: java.lang.Throwable -> L91
            goto La3
        L91:
            r10 = move-exception
            r10.printStackTrace()
            goto La3
        L96:
            r10 = move-exception
        L97:
            java.lang.String r0 = "leg"
            java.lang.String r3 = "uts"
            com.loc.av.b(r10, r0, r3)     // Catch: java.lang.Throwable -> La4
            if (r2 == 0) goto La3
            r2.close()     // Catch: java.lang.Throwable -> L91
        La3:
            return r1
        La4:
            r10 = move-exception
            if (r2 == 0) goto Laf
            r2.close()     // Catch: java.lang.Throwable -> Lab
            goto Laf
        Lab:
            r0 = move-exception
            r0.printStackTrace()
        Laf:
            throw r10
    }

    private static void a(com.loc.bl r1, java.util.List<java.lang.String> r2) {
            if (r1 == 0) goto L22
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L1a
        L6:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L1a
            r1.c(r0)     // Catch: java.lang.Throwable -> L1a
            goto L6
        L16:
            r1.close()     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r1 = move-exception
            java.lang.String r2 = "ofm"
            java.lang.String r0 = "dlo"
            com.loc.av.b(r1, r2, r0)
        L22:
            return
    }

    public static void a(java.lang.String r4, byte[] r5, com.loc.bv r6) throws java.io.IOException, java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException, javax.crypto.NoSuchPaddingException, java.security.InvalidKeyException, java.security.spec.InvalidKeySpecException {
            r0 = 0
            java.lang.String r1 = r6.a     // Catch: java.lang.Throwable -> L51
            boolean r1 = a(r1, r4)     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto La
            return
        La:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = r6.a     // Catch: java.lang.Throwable -> L51
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L51
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L51
            if (r2 != 0) goto L1a
            r1.mkdirs()     // Catch: java.lang.Throwable -> L51
        L1a:
            long r2 = r6.b     // Catch: java.lang.Throwable -> L51
            com.loc.bl r1 = com.loc.bl.a(r1, r2)     // Catch: java.lang.Throwable -> L51
            int r2 = r6.d     // Catch: java.lang.Throwable -> L4f
            r1.a(r2)     // Catch: java.lang.Throwable -> L4f
            com.loc.bh r6 = r6.e     // Catch: java.lang.Throwable -> L4f
            byte[] r5 = r6.b(r5)     // Catch: java.lang.Throwable -> L4f
            com.loc.bl$a r4 = r1.b(r4)     // Catch: java.lang.Throwable -> L4f
            java.io.OutputStream r0 = r4.a()     // Catch: java.lang.Throwable -> L4f
            r0.write(r5)     // Catch: java.lang.Throwable -> L4f
            r4.b()     // Catch: java.lang.Throwable -> L4f
            r1.c()     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L46
            r0.close()     // Catch: java.lang.Throwable -> L42
            goto L46
        L42:
            r4 = move-exception
            r4.printStackTrace()
        L46:
            r1.close()     // Catch: java.lang.Throwable -> L4a
            return
        L4a:
            r4 = move-exception
            r4.printStackTrace()
            return
        L4f:
            r4 = move-exception
            goto L53
        L51:
            r4 = move-exception
            r1 = r0
        L53:
            if (r0 == 0) goto L5d
            r0.close()     // Catch: java.lang.Throwable -> L59
            goto L5d
        L59:
            r5 = move-exception
            r5.printStackTrace()
        L5d:
            if (r1 == 0) goto L67
            r1.close()     // Catch: java.lang.Throwable -> L63
            goto L67
        L63:
            r5 = move-exception
            r5.printStackTrace()
        L67:
            throw r4
    }

    private static boolean a(java.lang.String r2, java.lang.String r3) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L1b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b
            r1.<init>()     // Catch: java.lang.Throwable -> L1b
            r1.append(r3)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = ".0"
            r1.append(r3)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L1b
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1b
            boolean r2 = r0.exists()     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            r2 = move-exception
            java.lang.String r3 = "leg"
            java.lang.String r0 = "fet"
            com.loc.av.b(r2, r3, r0)
            r2 = 0
            return r2
    }

    private static byte[] a(com.loc.bl r8, com.loc.bv r9, java.util.List<java.lang.String> r10) {
            r0 = 0
            java.io.File r1 = r8.b()     // Catch: java.lang.Throwable -> L4c
            if (r1 == 0) goto L54
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L4c
            if (r2 == 0) goto L54
            java.lang.String[] r1 = r1.list()     // Catch: java.lang.Throwable -> L4c
            int r2 = r1.length     // Catch: java.lang.Throwable -> L4c
            r3 = 0
            r4 = 0
        L14:
            if (r3 >= r2) goto L41
            r5 = r1[r3]     // Catch: java.lang.Throwable -> L4c
            java.lang.String r6 = ".0"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> L4c
            if (r6 == 0) goto L3e
            java.lang.String r6 = "\\."
            java.lang.String[] r5 = r5.split(r6)     // Catch: java.lang.Throwable -> L4c
            r5 = r5[r0]     // Catch: java.lang.Throwable -> L4c
            byte[] r6 = com.loc.cb.a(r8, r5)     // Catch: java.lang.Throwable -> L4c
            int r7 = r6.length     // Catch: java.lang.Throwable -> L4c
            int r4 = r4 + r7
            r10.add(r5)     // Catch: java.lang.Throwable -> L4c
            com.loc.co r5 = r9.f     // Catch: java.lang.Throwable -> L4c
            int r5 = r5.b()     // Catch: java.lang.Throwable -> L4c
            if (r4 > r5) goto L41
            com.loc.ci r5 = r9.g     // Catch: java.lang.Throwable -> L4c
            r5.b(r6)     // Catch: java.lang.Throwable -> L4c
        L3e:
            int r3 = r3 + 1
            goto L14
        L41:
            if (r4 > 0) goto L45
            r8 = 0
            return r8
        L45:
            com.loc.ci r8 = r9.g     // Catch: java.lang.Throwable -> L4c
            byte[] r8 = r8.a()     // Catch: java.lang.Throwable -> L4c
            return r8
        L4c:
            r8 = move-exception
            java.lang.String r9 = "leg"
            java.lang.String r10 = "gCo"
            com.loc.av.b(r8, r9, r10)
        L54:
            byte[] r8 = new byte[r0]
            return r8
    }
}
