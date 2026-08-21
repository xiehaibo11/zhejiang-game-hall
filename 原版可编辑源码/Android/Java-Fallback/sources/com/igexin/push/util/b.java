package com.igexin.push.util;

public class b {
    private static volatile java.lang.Boolean a;

    static {
            return
    }

    public static android.content.Intent a(java.lang.String r17, int r18) {
            r1 = r17
            java.lang.String r0 = "android-app:"
            r2 = 0
            boolean r3 = r1.startsWith(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fc
            r4 = r18 & 3
            java.lang.String r5 = "intent:"
            java.lang.String r6 = "android.intent.action.VIEW"
            if (r4 == 0) goto L31
            boolean r4 = r1.startsWith(r5)     // Catch: java.lang.IndexOutOfBoundsException -> L2fd
            if (r4 != 0) goto L31
            if (r3 != 0) goto L31
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.IndexOutOfBoundsException -> L2fd
            r0.<init>(r6)     // Catch: java.lang.IndexOutOfBoundsException -> L2fd
            android.net.Uri r3 = android.net.Uri.parse(r17)     // Catch: java.lang.IllegalArgumentException -> L26 java.lang.IndexOutOfBoundsException -> L2fd
            r0.setData(r3)     // Catch: java.lang.IllegalArgumentException -> L26 java.lang.IndexOutOfBoundsException -> L2fd
            return r0
        L26:
            r0 = move-exception
            java.net.URISyntaxException r3 = new java.net.URISyntaxException     // Catch: java.lang.IndexOutOfBoundsException -> L2fd
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.IndexOutOfBoundsException -> L2fd
            r3.<init>(r1, r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fd
            throw r3     // Catch: java.lang.IndexOutOfBoundsException -> L2fd
        L31:
            java.lang.String r4 = "#"
            int r4 = r1.lastIndexOf(r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fc
            r7 = -1
            if (r4 != r7) goto L46
            if (r3 != 0) goto L56
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            android.net.Uri r2 = android.net.Uri.parse(r17)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.<init>(r6, r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            return r0
        L46:
            java.lang.String r8 = "#Intent;"
            boolean r8 = r1.startsWith(r8, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r8 != 0) goto L56
            if (r3 != 0) goto L55
            android.content.Intent r0 = b(r17, r18)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            return r0
        L55:
            r4 = r7
        L56:
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r3.<init>(r6)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r4 < 0) goto L64
            java.lang.String r6 = r1.substring(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            int r4 = r4 + 8
            goto L65
        L64:
            r6 = r1
        L65:
            android.os.Bundle r7 = r3.getExtras()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r7 != 0) goto L73
            android.os.Bundle r7 = new android.os.Bundle     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r3.putExtras(r7)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
        L73:
            android.os.Bundle r7 = r3.getExtras()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r10 = r2
            r12 = r10
            r9 = r3
            r11 = 0
        L7b:
            java.lang.String r13 = ":"
            java.lang.String r14 = ""
            if (r4 < 0) goto L212
            java.lang.String r15 = "end"
            boolean r15 = r1.startsWith(r15, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 != 0) goto L212
            r15 = 61
            int r15 = r1.indexOf(r15, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 >= 0) goto L93
            int r15 = r4 + (-1)
        L93:
            r8 = 59
            int r8 = r1.indexOf(r8, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 >= r8) goto La5
            int r14 = r15 + 1
            java.lang.String r14 = r1.substring(r14, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r14 = android.net.Uri.decode(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
        La5:
            java.lang.String r2 = "action="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r16 = 1
            if (r2 == 0) goto Lb9
            r9.setAction(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r10 != 0) goto Lb6
            r12 = r16
        Lb6:
            r13 = 0
            goto L205
        Lb9:
            java.lang.String r2 = "category="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto Lc5
            r9.addCategory(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        Lc5:
            java.lang.String r2 = "type="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto Ld1
            r9.setType(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        Ld1:
            java.lang.String r2 = "launchFlags="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto L104
            java.lang.Integer r2 = java.lang.Integer.decode(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            int r2 = r2.intValue()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r9.setFlags(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2 = r18 & 4
            if (r2 != 0) goto Lb6
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r13 = 19
            if (r2 < r13) goto Lf1
            r2 = 67
            goto Lf2
        Lf1:
            r2 = 3
        Lf2:
            int r13 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r14 = 21
            if (r13 < r14) goto Lfa
            r2 = r2 | 128(0x80, float:1.8E-43)
        Lfa:
            int r13 = r9.getFlags()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            int r2 = ~r2     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2 = r2 & r13
            r9.setFlags(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L104:
            java.lang.String r2 = "package="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto L110
            r9.setPackage(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L110:
            java.lang.String r2 = "component="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto L120
            android.content.ComponentName r2 = android.content.ComponentName.unflattenFromString(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r9.setComponent(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L120:
            java.lang.String r2 = "scheme="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto L145
            if (r10 == 0) goto L142
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2.append(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2.append(r13)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r2 = r2.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r9.setData(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L142:
            r11 = r14
            goto Lb6
        L145:
            java.lang.String r2 = "sourceBounds="
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto L156
            android.graphics.Rect r2 = android.graphics.Rect.unflattenFromString(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r9.setSourceBounds(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L156:
            int r2 = r4 + 3
            if (r8 != r2) goto L16b
            java.lang.String r2 = "SEL"
            boolean r2 = r1.startsWith(r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto L16b
            android.content.Intent r9 = new android.content.Intent     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r9.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r10 = r16
            goto Lb6
        L16b:
            int r2 = r4 + 2
            java.lang.String r2 = r1.substring(r2, r15)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r2 = android.net.Uri.decode(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r13 = "S."
            boolean r13 = r1.startsWith(r13, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r13 == 0) goto L182
            r7.putString(r2, r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L182:
            java.lang.String r13 = "B."
            boolean r13 = r1.startsWith(r13, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r13 == 0) goto L193
            boolean r13 = java.lang.Boolean.parseBoolean(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putBoolean(r2, r13)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L193:
            java.lang.String r13 = "b."
            boolean r13 = r1.startsWith(r13, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r13 == 0) goto L1a4
            byte r13 = java.lang.Byte.parseByte(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putByte(r2, r13)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto Lb6
        L1a4:
            java.lang.String r13 = "c."
            boolean r13 = r1.startsWith(r13, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r13 == 0) goto L1b5
            r13 = 0
            char r14 = r14.charAt(r13)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putChar(r2, r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L205
        L1b5:
            r13 = 0
            java.lang.String r15 = "d."
            boolean r15 = r1.startsWith(r15, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 == 0) goto L1c6
            double r14 = java.lang.Double.parseDouble(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putDouble(r2, r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L205
        L1c6:
            java.lang.String r15 = "f."
            boolean r15 = r1.startsWith(r15, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 == 0) goto L1d6
            float r14 = java.lang.Float.parseFloat(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putFloat(r2, r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L205
        L1d6:
            java.lang.String r15 = "i."
            boolean r15 = r1.startsWith(r15, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 == 0) goto L1e6
            int r14 = java.lang.Integer.parseInt(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putInt(r2, r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L205
        L1e6:
            java.lang.String r15 = "l."
            boolean r15 = r1.startsWith(r15, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 == 0) goto L1f6
            long r14 = java.lang.Long.parseLong(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putLong(r2, r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L205
        L1f6:
            java.lang.String r15 = "s."
            boolean r15 = r1.startsWith(r15, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r15 == 0) goto L20a
            short r14 = java.lang.Short.parseShort(r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7.putShort(r2, r14)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
        L205:
            int r4 = r8 + 1
            r2 = r13
            goto L7b
        L20a:
            java.net.URISyntaxException r0 = new java.net.URISyntaxException     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r2 = "unknown EXTRA type"
            r0.<init>(r1, r2, r4)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            throw r0     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
        L212:
            r9.putExtras(r7)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r10 == 0) goto L227
            java.lang.String r2 = r3.getPackage()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 != 0) goto L228
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r7 = 15
            if (r2 < r7) goto L228
            r3.setSelector(r9)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L228
        L227:
            r3 = r9
        L228:
            if (r6 == 0) goto L2f9
            boolean r2 = r6.startsWith(r5)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r2 == 0) goto L24d
            r0 = 7
            java.lang.String r6 = r6.substring(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r11 == 0) goto L2e0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.append(r11)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2 = 58
            r0.append(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.append(r6)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r6 = r0.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L2e0
        L24d:
            boolean r0 = r6.startsWith(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r0 == 0) goto L2e0
            r0 = 12
            char r0 = r6.charAt(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2 = 47
            if (r0 != r2) goto L2df
            r0 = 13
            char r0 = r6.charAt(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r0 != r2) goto L2df
            r0 = 14
            int r5 = r6.indexOf(r2, r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r7 = "android.intent.action.MAIN"
            if (r5 >= 0) goto L27c
            java.lang.String r0 = r6.substring(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r3.setPackage(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r12 != 0) goto L2df
        L278:
            r3.setAction(r7)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L2df
        L27c:
            java.lang.String r0 = r6.substring(r0, r5)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r3.setPackage(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            int r0 = r5 + 1
            int r8 = r6.length()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r0 >= r8) goto L2ae
            int r8 = r6.indexOf(r2, r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r8 < 0) goto L2aa
            java.lang.String r11 = r6.substring(r0, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            int r0 = r6.length()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r8 >= r0) goto L2a8
            int r0 = r8 + 1
            int r5 = r6.indexOf(r2, r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r5 < 0) goto L2a8
            java.lang.String r8 = r6.substring(r0, r5)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L2af
        L2a8:
            r5 = r8
            goto L2ae
        L2aa:
            java.lang.String r11 = r6.substring(r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
        L2ae:
            r8 = 0
        L2af:
            if (r11 != 0) goto L2b4
            if (r12 != 0) goto L2df
            goto L278
        L2b4:
            if (r8 != 0) goto L2c7
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.append(r11)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.append(r13)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
        L2c1:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r6 = r0
            goto L2e0
        L2c7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.<init>()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.append(r11)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r2 = "://"
            r0.append(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.append(r8)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r2 = r6.substring(r5)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r0.append(r2)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            goto L2c1
        L2df:
            r6 = r14
        L2e0:
            int r0 = r6.length()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            if (r0 <= 0) goto L2f9
            android.net.Uri r0 = android.net.Uri.parse(r6)     // Catch: java.lang.IllegalArgumentException -> L2ee java.lang.IndexOutOfBoundsException -> L2fa
            r3.setData(r0)     // Catch: java.lang.IllegalArgumentException -> L2ee java.lang.IndexOutOfBoundsException -> L2fa
            goto L2f9
        L2ee:
            r0 = move-exception
            java.net.URISyntaxException r2 = new java.net.URISyntaxException     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            r2.<init>(r1, r0)     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
            throw r2     // Catch: java.lang.IndexOutOfBoundsException -> L2fa
        L2f9:
            return r3
        L2fa:
            r2 = r4
            goto L2fd
        L2fc:
            r13 = r2
        L2fd:
            java.net.URISyntaxException r0 = new java.net.URISyntaxException
            java.lang.String r3 = "illegal Intent URI format"
            r0.<init>(r1, r3, r2)
            throw r0
    }

    public static android.util.Pair<android.content.pm.ServiceInfo, java.lang.Class> a(android.content.Context r5, java.lang.Class r6) {
            android.content.pm.PackageManager r0 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L32
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L32
            r1 = 4
            android.content.pm.PackageInfo r5 = r0.getPackageInfo(r5, r1)     // Catch: java.lang.Throwable -> L32
            android.content.pm.ServiceInfo[] r5 = r5.services     // Catch: java.lang.Throwable -> L32
            if (r5 == 0) goto L4f
            int r0 = r5.length     // Catch: java.lang.Throwable -> L32
            if (r0 <= 0) goto L4f
            int r0 = r5.length     // Catch: java.lang.Throwable -> L32
            r1 = 0
        L16:
            if (r1 >= r0) goto L4f
            r2 = r5[r1]     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = r2.name     // Catch: java.lang.Throwable -> L2f
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L2f
            if (r3 != r6) goto L23
            goto L2f
        L23:
            r4 = 5
            boolean r4 = com.igexin.push.util.i.a(r3, r6, r4)     // Catch: java.lang.Throwable -> L2f
            if (r4 == 0) goto L2f
            android.util.Pair r5 = android.util.Pair.create(r2, r3)     // Catch: java.lang.Throwable -> L2f
            return r5
        L2f:
            int r1 = r1 + 1
            goto L16
        L32:
            r5 = move-exception
            com.igexin.b.a.c.a.c r6 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " findGtImplClassInManifest error = "
            r0.append(r1)
            java.lang.String r5 = r5.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r6.a(r5)
        L4f:
            r5 = 0
            android.util.Pair r5 = android.util.Pair.create(r5, r5)
            return r5
    }

    private static java.lang.String a(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = r2.getPackageName()     // Catch: java.lang.Throwable -> L28
            android.content.Intent r0 = r0.getLaunchIntentForPackage(r1)     // Catch: java.lang.Throwable -> L28
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L28
            r1 = 0
            java.util.List r2 = r2.queryIntentActivities(r0, r1)     // Catch: java.lang.Throwable -> L28
            if (r2 == 0) goto L28
            int r0 = r2.size()     // Catch: java.lang.Throwable -> L28
            if (r0 <= 0) goto L28
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L28
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2     // Catch: java.lang.Throwable -> L28
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = r2.name     // Catch: java.lang.Throwable -> L28
            return r2
        L28:
            java.lang.String r2 = ""
            return r2
    }

    private static java.lang.String a(java.lang.String r6) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "get"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L1f
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L1f
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L1f
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L1f
            r2[r5] = r6     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r6 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L1f
            goto L24
        L1f:
            r6 = move-exception
            r6.printStackTrace()
            r6 = 0
        L24:
            return r6
    }

    public static boolean a() {
            r0 = 0
            java.lang.Boolean r1 = com.igexin.push.util.b.a     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto Lc
            java.lang.Boolean r1 = com.igexin.push.util.b.a     // Catch: java.lang.Throwable -> L40
            boolean r0 = r1.booleanValue()     // Catch: java.lang.Throwable -> L40
            return r0
        Lc:
            java.lang.String r1 = "ro.miui.ui.version.name"
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L40
            java.lang.String r2 = "ro.miui.ui.version.code"
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> L40
            java.lang.String r3 = com.igexin.push.util.j.a()     // Catch: java.lang.Throwable -> L40
            java.lang.String r4 = "Xiaomi"
            boolean r3 = r4.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L40
            if (r3 != 0) goto L33
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L33
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L40
            if (r1 != 0) goto L31
            goto L33
        L31:
            r1 = r0
            goto L34
        L33:
            r1 = 1
        L34:
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L40
            com.igexin.push.util.b.a = r1     // Catch: java.lang.Throwable -> L40
            java.lang.Boolean r1 = com.igexin.push.util.b.a     // Catch: java.lang.Throwable -> L40
            boolean r0 = r1.booleanValue()     // Catch: java.lang.Throwable -> L40
        L40:
            return r0
    }

    public static synchronized boolean a(int r7, android.app.Notification r8) {
            java.lang.Class<com.igexin.push.util.b> r0 = com.igexin.push.util.b.class
            monitor-enter(r0)
            r1 = 0
            boolean r2 = a()     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto L36
            java.lang.Class r2 = r8.getClass()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "extraNotification"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.Object r8 = r2.get(r8)     // Catch: java.lang.Throwable -> L36
            java.lang.Class r2 = r8.getClass()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "setMessageCount"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L36
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L36
            r5[r1] = r6     // Catch: java.lang.Throwable -> L36
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L36
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L36
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L36
            r3[r1] = r7     // Catch: java.lang.Throwable -> L36
            r2.invoke(r8, r3)     // Catch: java.lang.Throwable -> L36
            monitor-exit(r0)
            return r4
        L36:
            monitor-exit(r0)
            return r1
    }

    public static synchronized boolean a(int r6, boolean r7) {
            java.lang.Class<com.igexin.push.util.b> r0 = com.igexin.push.util.b.class
            monitor-enter(r0)
            r1 = 0
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            if (r2 != 0) goto La
            monitor-exit(r0)
            return r1
        La:
            java.lang.String r2 = com.igexin.push.util.j.a()     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "huawei"
            boolean r3 = r3.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L74
            if (r3 != 0) goto L1e
            java.lang.String r3 = "honor"
            boolean r2 = r3.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L74
        L1e:
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "hwBadgeNum"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String[] r5 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L74
            java.lang.Object r2 = com.igexin.push.util.k.c(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L74
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L74
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L74
            if (r7 == 0) goto L35
            goto L36
        L35:
            int r6 = r6 + r2
        L36:
            android.content.Context r7 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "hwBadgeNum"
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L74
            java.lang.String[] r4 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L74
            com.igexin.push.util.k.b(r7, r2, r3, r4)     // Catch: java.lang.Throwable -> L74
            android.os.Bundle r7 = new android.os.Bundle     // Catch: java.lang.Throwable -> L74
            r7.<init>()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "package"
            java.lang.String r3 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> L74
            r7.putString(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "class"
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = a(r3)     // Catch: java.lang.Throwable -> L74
            r7.putString(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "badgenumber"
            r7.putInt(r2, r6)     // Catch: java.lang.Throwable -> L74
            android.content.Context r6 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            android.content.ContentResolver r6 = r6.getContentResolver()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "content://com.huawei.android.launcher.settings/badge/"
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "change_badge"
            r4 = 0
            r6.call(r2, r3, r4, r7)     // Catch: java.lang.Throwable -> L74
            r6 = 1
            monitor-exit(r0)
            return r6
        L74:
            monitor-exit(r0)
            return r1
    }

    private static android.content.Intent b(java.lang.String r17, int r18) {
            r0 = r17
            r1 = 35
            int r1 = r0.lastIndexOf(r1)
            java.lang.String r2 = "android.intent.action.VIEW"
            if (r1 < 0) goto L1f1
            r3 = 0
            int r4 = r1 + 1
            r5 = 7
            r6 = 0
            java.lang.String r7 = "action("
            boolean r7 = r0.regionMatches(r4, r7, r6, r5)
            r8 = 41
            r9 = 1
            if (r7 == 0) goto L2e
            int r4 = r4 + 7
            int r3 = r0.indexOf(r8, r4)
            java.lang.String r4 = r0.substring(r4, r3)
            int r3 = r3 + r9
            r7 = r9
            r16 = r4
            r4 = r3
            r3 = r16
            goto L2f
        L2e:
            r7 = r6
        L2f:
            android.content.Intent r10 = new android.content.Intent
            r10.<init>(r3)
            r3 = 11
            java.lang.String r11 = "categories("
            boolean r3 = r0.regionMatches(r4, r11, r6, r3)
            r11 = 33
            if (r3 == 0) goto L60
            int r4 = r4 + 11
            int r3 = r0.indexOf(r8, r4)
        L46:
            if (r4 >= r3) goto L5d
            int r7 = r0.indexOf(r11, r4)
            if (r7 < 0) goto L50
            if (r7 <= r3) goto L51
        L50:
            r7 = r3
        L51:
            if (r4 >= r7) goto L5a
            java.lang.String r4 = r0.substring(r4, r7)
            r10.addCategory(r4)
        L5a:
            int r4 = r7 + 1
            goto L46
        L5d:
            int r4 = r3 + 1
            r7 = r9
        L60:
            r3 = 5
            java.lang.String r12 = "type("
            boolean r3 = r0.regionMatches(r4, r12, r6, r3)
            if (r3 == 0) goto L79
            int r4 = r4 + 5
            int r3 = r0.indexOf(r8, r4)
            java.lang.String r4 = r0.substring(r4, r3)
            r10.setType(r4)
            int r4 = r3 + 1
            r7 = r9
        L79:
            r3 = 12
            java.lang.String r12 = "launchFlags("
            boolean r3 = r0.regionMatches(r4, r12, r6, r3)
            if (r3 == 0) goto Lb9
            int r4 = r4 + 12
            int r3 = r0.indexOf(r8, r4)
            java.lang.String r4 = r0.substring(r4, r3)
            java.lang.Integer r4 = java.lang.Integer.decode(r4)
            int r4 = r4.intValue()
            r10.setFlags(r4)
            r4 = r18 & 4
            if (r4 != 0) goto Lb6
            r4 = 3
            int r7 = android.os.Build.VERSION.SDK_INT
            r12 = 19
            if (r7 < r12) goto La5
            r4 = 67
        La5:
            int r7 = android.os.Build.VERSION.SDK_INT
            r12 = 21
            if (r7 < r12) goto Lad
            r4 = r4 | 128(0x80, float:1.8E-43)
        Lad:
            int r7 = r10.getFlags()
            int r4 = ~r4
            r4 = r4 & r7
            r10.setFlags(r4)
        Lb6:
            int r4 = r3 + 1
            r7 = r9
        Lb9:
            r3 = 10
            java.lang.String r12 = "component("
            boolean r3 = r0.regionMatches(r4, r12, r6, r3)
            if (r3 == 0) goto Le5
            int r4 = r4 + 10
            int r3 = r0.indexOf(r8, r4)
            int r7 = r0.indexOf(r11, r4)
            if (r7 < 0) goto Le2
            if (r7 >= r3) goto Le2
            java.lang.String r4 = r0.substring(r4, r7)
            int r7 = r7 + r9
            java.lang.String r7 = r0.substring(r7, r3)
            android.content.ComponentName r12 = new android.content.ComponentName
            r12.<init>(r4, r7)
            r10.setComponent(r12)
        Le2:
            int r4 = r3 + 1
            r7 = r9
        Le5:
            java.lang.String r3 = "extras("
            boolean r3 = r0.regionMatches(r4, r3, r6, r5)
            if (r3 == 0) goto L1d4
            int r4 = r4 + r5
            int r3 = r0.indexOf(r8, r4)
            r5 = -1
            if (r3 == r5) goto L1cc
            android.os.Bundle r7 = r10.getExtras()
            if (r7 != 0) goto L103
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            r10.putExtras(r7)
        L103:
            android.os.Bundle r7 = r10.getExtras()
        L107:
            if (r4 >= r3) goto L1c8
            r12 = 61
            int r12 = r0.indexOf(r12, r4)
            int r13 = r4 + 1
            if (r12 <= r13) goto L1c0
            if (r4 >= r3) goto L1c0
            char r4 = r0.charAt(r4)
            java.lang.String r13 = r0.substring(r13, r12)
            int r12 = r12 + 1
            int r14 = r0.indexOf(r11, r12)
            if (r14 == r5) goto L127
            if (r14 < r3) goto L128
        L127:
            r14 = r3
        L128:
            java.lang.String r15 = "EXTRA missing '!'"
            if (r12 >= r14) goto L1ba
            java.lang.String r12 = r0.substring(r12, r14)
            r5 = 66
            if (r4 == r5) goto L197
            r5 = 83
            if (r4 == r5) goto L18f
            r5 = 102(0x66, float:1.43E-43)
            if (r4 == r5) goto L187
            r5 = 105(0x69, float:1.47E-43)
            if (r4 == r5) goto L17f
            r5 = 108(0x6c, float:1.51E-43)
            if (r4 == r5) goto L177
            r5 = 115(0x73, float:1.61E-43)
            if (r4 == r5) goto L16f
            switch(r4) {
                case 98: goto L167;
                case 99: goto L15b;
                case 100: goto L153;
                default: goto L14b;
            }
        L14b:
            java.net.URISyntaxException r1 = new java.net.URISyntaxException     // Catch: java.lang.NumberFormatException -> L1b2
            java.lang.String r2 = "EXTRA has unknown type"
            r1.<init>(r0, r2, r14)     // Catch: java.lang.NumberFormatException -> L1b2
            throw r1     // Catch: java.lang.NumberFormatException -> L1b2
        L153:
            double r4 = java.lang.Double.parseDouble(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putDouble(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L15b:
            java.lang.String r4 = android.net.Uri.decode(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            char r4 = r4.charAt(r6)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putChar(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L167:
            byte r4 = java.lang.Byte.parseByte(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putByte(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L16f:
            short r4 = java.lang.Short.parseShort(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putShort(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L177:
            long r4 = java.lang.Long.parseLong(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putLong(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L17f:
            int r4 = java.lang.Integer.parseInt(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putInt(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L187:
            float r4 = java.lang.Float.parseFloat(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putFloat(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L18f:
            java.lang.String r4 = android.net.Uri.decode(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putString(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
            goto L19e
        L197:
            boolean r4 = java.lang.Boolean.parseBoolean(r12)     // Catch: java.lang.NumberFormatException -> L1b2
            r7.putBoolean(r13, r4)     // Catch: java.lang.NumberFormatException -> L1b2
        L19e:
            char r4 = r0.charAt(r14)
            if (r4 != r8) goto L1a5
            goto L1c8
        L1a5:
            if (r4 != r11) goto L1ac
            int r4 = r14 + 1
            r5 = -1
            goto L107
        L1ac:
            java.net.URISyntaxException r1 = new java.net.URISyntaxException
            r1.<init>(r0, r15, r14)
            throw r1
        L1b2:
            java.net.URISyntaxException r1 = new java.net.URISyntaxException
            java.lang.String r2 = "EXTRA value can't be parsed"
            r1.<init>(r0, r2, r14)
            throw r1
        L1ba:
            java.net.URISyntaxException r1 = new java.net.URISyntaxException
            r1.<init>(r0, r15, r12)
            throw r1
        L1c0:
            java.net.URISyntaxException r1 = new java.net.URISyntaxException
            java.lang.String r2 = "EXTRA missing '='"
            r1.<init>(r0, r2, r4)
            throw r1
        L1c8:
            r10.putExtras(r7)
            goto L1d5
        L1cc:
            java.net.URISyntaxException r1 = new java.net.URISyntaxException
            java.lang.String r2 = "EXTRA missing trailing ')'"
            r1.<init>(r0, r2, r4)
            throw r1
        L1d4:
            r9 = r7
        L1d5:
            if (r9 == 0) goto L1e0
            java.lang.String r0 = r0.substring(r6, r1)
            android.net.Uri r0 = android.net.Uri.parse(r0)
            goto L1e4
        L1e0:
            android.net.Uri r0 = android.net.Uri.parse(r17)
        L1e4:
            r10.setData(r0)
            java.lang.String r0 = r10.getAction()
            if (r0 != 0) goto L1fa
            r10.setAction(r2)
            goto L1fa
        L1f1:
            android.content.Intent r10 = new android.content.Intent
            android.net.Uri r0 = android.net.Uri.parse(r17)
            r10.<init>(r2, r0)
        L1fa:
            return r10
    }
}
