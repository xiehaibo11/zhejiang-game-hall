package com.bytedance.pangle.g;

public final class e {
    public static boolean a(java.lang.String r11, java.lang.String r12) {
            java.lang.String r0 = "ApkSignatureVerify verify plugin signature error : "
            java.lang.String r1 = "Zeus/install_pangle"
            boolean r2 = android.text.TextUtils.isEmpty(r11)
            r3 = 0
            if (r2 == 0) goto Lc
            return r3
        Lc:
            r2 = 0
            boolean r4 = com.bytedance.pangle.util.i.a()     // Catch: com.bytedance.pangle.g.q -> L7e
            if (r4 == 0) goto L18
            com.bytedance.pangle.g.o r4 = com.bytedance.pangle.g.d.a(r11)     // Catch: com.bytedance.pangle.g.q -> L7e
            goto L1c
        L18:
            com.bytedance.pangle.g.o r4 = com.bytedance.pangle.g.a.a(r11)     // Catch: com.bytedance.pangle.g.q -> L7e
        L1c:
            if (r4 == 0) goto L20
            android.content.pm.Signature[] r2 = r4.b     // Catch: com.bytedance.pangle.g.q -> L7e
        L20:
            com.bytedance.pangle.plugin.Plugin r12 = com.bytedance.pangle.Zeus.getPlugin(r12)
            java.lang.String r12 = r12.mSignature
            byte[] r12 = android.util.Base64.decode(r12, r3)
            if (r12 == 0) goto L70
            int r4 = r12.length
            if (r4 != 0) goto L30
            goto L70
        L30:
            int r4 = r2.length
            r5 = r3
            r6 = r5
        L33:
            if (r5 >= r4) goto L40
            r7 = r2[r5]
            byte[] r7 = r7.toByteArray()
            int r7 = r7.length
            int r6 = r6 + r7
            int r5 = r5 + 1
            goto L33
        L40:
            byte[] r4 = new byte[r6]
            int r5 = r2.length
            r6 = r3
            r7 = r6
        L45:
            if (r6 >= r5) goto L5e
            r8 = r2[r6]
            byte[] r9 = r8.toByteArray()
            byte[] r10 = r8.toByteArray()
            int r10 = r10.length
            java.lang.System.arraycopy(r9, r3, r4, r7, r10)
            byte[] r8 = r8.toByteArray()
            int r8 = r8.length
            int r7 = r7 + r8
            int r6 = r6 + 1
            goto L45
        L5e:
            boolean r12 = com.bytedance.pangle.g.o.a(r4, r12)
            if (r12 != 0) goto L6f
            java.lang.String r11 = java.lang.String.valueOf(r11)
            java.lang.String r11 = r0.concat(r11)
            com.bytedance.pangle.log.ZeusLogger.w(r1, r11)
        L6f:
            return r12
        L70:
            java.lang.String r11 = java.lang.String.valueOf(r11)
            java.lang.String r12 = "ApkSignatureVerify get hostSignature error : "
            java.lang.String r11 = r12.concat(r11)
            com.bytedance.pangle.log.ZeusLogger.w(r1, r11)
            return r3
        L7e:
            java.lang.String r11 = java.lang.String.valueOf(r11)
            java.lang.String r11 = r0.concat(r11)
            com.bytedance.pangle.log.ZeusLogger.w(r1, r11)
            return r3
    }
}
