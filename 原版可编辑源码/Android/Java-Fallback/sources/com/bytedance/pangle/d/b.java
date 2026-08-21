package com.bytedance.pangle.d;

public final class b {
    private static java.lang.String a;
    private static java.util.Map<java.lang.String, java.lang.Integer> b;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.d.b.b = r0
            r1 = 64
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "arm64-v8a"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.bytedance.pangle.d.b.b
            r2 = 32
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "armeabi-v7a"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.bytedance.pangle.d.b.b
            java.lang.String r3 = "armeabi"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.bytedance.pangle.d.b.b
            java.lang.String r3 = "x86_64"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.bytedance.pangle.d.b.b
            java.lang.String r3 = "x86"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.bytedance.pangle.d.b.b
            java.lang.String r3 = "mips64"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.bytedance.pangle.d.b.b
            java.lang.String r1 = "mips"
            r0.put(r1, r2)
            java.lang.String r0 = c()
            com.bytedance.pangle.d.b.a = r0
            return
    }

    public static com.bytedance.pangle.util.e<java.lang.Boolean, java.util.Map<java.lang.String, java.util.List<java.util.zip.ZipEntry>>> a(java.io.File r8) {
            java.lang.String r0 = "NativeLibHelper isPluginApkMatchHostAbi, close sourceApkZipFile error!"
            java.lang.String r1 = "Zeus/so_pangle"
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r3 = 0
            java.util.zip.ZipFile r4 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L79 java.io.IOException -> L7b
            r4.<init>(r8)     // Catch: java.lang.Throwable -> L79 java.io.IOException -> L7b
            java.util.Map r3 = a(r4)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r2.putAll(r3)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            boolean r3 = r2.isEmpty()     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            if (r3 == 0) goto L2b
            r3 = 1
            java.lang.String r5 = "NativeLibHelper isPluginApkMatchHostAbi [true] soEntries empty, "
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            java.lang.String r8 = r5.concat(r8)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            com.bytedance.pangle.log.ZeusLogger.i(r1, r8)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            goto L62
        L2b:
            java.lang.String r3 = com.bytedance.pangle.d.b.a     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            boolean r3 = a(r2, r3)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            java.lang.String r5 = "], "
            java.lang.String r6 = "NativeLibHelper isPluginApkMatchHostAbi ["
            if (r3 == 0) goto L4d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.append(r3)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.append(r5)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.append(r8)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            java.lang.String r8 = r7.toString()     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            com.bytedance.pangle.log.ZeusLogger.i(r1, r8)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            goto L62
        L4d:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.append(r3)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.append(r5)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r7.append(r8)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            java.lang.String r8 = r7.toString()     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            com.bytedance.pangle.log.ZeusLogger.w(r1, r8)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
        L62:
            com.bytedance.pangle.util.e r8 = new com.bytedance.pangle.util.e     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r8.<init>(r3, r2)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L76
            r4.close()     // Catch: java.io.IOException -> L6f
            goto L72
        L6f:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L72:
            return r8
        L73:
            r8 = move-exception
            r3 = r4
            goto L92
        L76:
            r8 = move-exception
            r3 = r4
            goto L7c
        L79:
            r8 = move-exception
            goto L92
        L7b:
            r8 = move-exception
        L7c:
            java.lang.String r4 = "NativeLibHelper isPluginApkMatchHostAbi, get sourceApk ZipFile failed!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r4, r8)     // Catch: java.lang.Throwable -> L79
            com.bytedance.pangle.util.e r8 = new com.bytedance.pangle.util.e     // Catch: java.lang.Throwable -> L79
            java.lang.Boolean r4 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L79
            r8.<init>(r4, r2)     // Catch: java.lang.Throwable -> L79
            if (r3 == 0) goto L91
            r3.close()     // Catch: java.io.IOException -> L8e
            goto L91
        L8e:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L91:
            return r8
        L92:
            if (r3 == 0) goto L9b
            r3.close()     // Catch: java.io.IOException -> L98
            goto L9b
        L98:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L9b:
            throw r8
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.bytedance.pangle.d.b.a
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.String r0 = c()
            com.bytedance.pangle.d.b.a = r0
            return r0
    }

    private static java.lang.String a(org.json.JSONObject r5) {
            java.lang.String r0 = "primaryCpuAbi"
            java.lang.String r1 = "Zeus/so_pangle"
            boolean r2 = com.bytedance.pangle.util.i.a()
            if (r2 == 0) goto La5
            android.app.Application r2 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L98
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()     // Catch: java.lang.Exception -> L98
            java.lang.Object r2 = com.bytedance.pangle.util.FieldUtils.readField(r2, r0)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = "NativeLibHelper inferHostAbiAuto, primaryCpuAbi="
            java.lang.String r4 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> L98
            com.bytedance.pangle.log.ZeusLogger.w(r1, r3)     // Catch: java.lang.Exception -> L98
            a(r5, r0, r2)     // Catch: java.lang.Exception -> L98
            if (r2 == 0) goto La5
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L98
            r3 = 23
            r4 = 0
            if (r0 < r3) goto L33
            r0 = 1
            goto L34
        L33:
            r0 = r4
        L34:
            if (r0 == 0) goto L5e
            boolean r0 = android.os.Process.is64Bit()     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L3f
            r0 = 64
            goto L41
        L3f:
            r0 = 32
        L41:
            r4 = r0
            java.lang.String r0 = "NativeLibHelper inferHostAbiAuto, processMode="
            java.lang.String r3 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L50
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Exception -> L50
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)     // Catch: java.lang.Exception -> L50
            goto L63
        L50:
            java.lang.String r0 = "NativeLibHelper inferHostAbiAuto, processMode exception default="
            java.lang.String r3 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Exception -> L98
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)     // Catch: java.lang.Exception -> L98
            goto L63
        L5e:
            java.lang.String r0 = "NativeLibHelper inferHostAbiAuto, processMode default=0"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)     // Catch: java.lang.Exception -> L98
        L63:
            java.lang.String r0 = "processMode"
            java.lang.String r3 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L98
            a(r5, r0, r3)     // Catch: java.lang.Exception -> L98
            if (r4 == 0) goto L8a
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.bytedance.pangle.d.b.b     // Catch: java.lang.Exception -> L98
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L98
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L98
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L98
            if (r0 != r4) goto La5
            java.lang.String r0 = "NativeLibHelper inferHostAbiAuto2, sHostAbi="
            java.lang.String r3 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Exception -> L98
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)     // Catch: java.lang.Exception -> L98
            return r2
        L8a:
            java.lang.String r0 = "NativeLibHelper inferHostAbiAuto1, sHostAbi="
            java.lang.String r3 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Exception -> L98
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)     // Catch: java.lang.Exception -> L98
            return r2
        L98:
            r0 = move-exception
            java.lang.String r2 = "NativeLibHelper inferHostAbiAuto failed!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r2, r0)
            java.lang.String r0 = "autoError"
            java.lang.String r1 = "1"
            a(r5, r0, r1)
        La5:
            r5 = 0
            return r5
    }

    private static java.util.Map<java.lang.String, java.util.List<java.util.zip.ZipEntry>> a(java.util.zip.ZipFile r7) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Enumeration r1 = r7.entries()
            java.lang.String r2 = "^lib/[^/]+/lib[^/]+.so$"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2)
        Lf:
            boolean r3 = r1.hasMoreElements()
            if (r3 == 0) goto L7b
            java.lang.Object r3 = r1.nextElement()
            java.util.zip.ZipEntry r3 = (java.util.zip.ZipEntry) r3
            boolean r4 = r3.isDirectory()
            if (r4 != 0) goto Lf
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "../"
            boolean r4 = r4.contains(r5)
            if (r4 != 0) goto Lf
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "lib/"
            boolean r4 = r4.startsWith(r5)
            if (r4 == 0) goto Lf
            java.lang.String r4 = r3.getName()
            java.util.regex.Matcher r4 = r2.matcher(r4)
            boolean r4 = r4.matches()
            if (r4 == 0) goto Lf
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = java.io.File.separator
            java.lang.String[] r4 = r4.split(r5)
            if (r4 == 0) goto Lf
            int r5 = r4.length
            r6 = 2
            if (r5 < r6) goto Lf
            int r5 = r4.length
            int r5 = r5 - r6
            r4 = r4[r5]
            java.util.Map<java.lang.String, java.lang.Integer> r5 = com.bytedance.pangle.d.b.b
            boolean r5 = r5.containsKey(r4)
            if (r5 == 0) goto Lf
            java.lang.Object r5 = r0.get(r4)
            if (r5 != 0) goto L71
            java.util.LinkedList r5 = new java.util.LinkedList
            r5.<init>()
            r0.put(r4, r5)
        L71:
            java.lang.Object r4 = r0.get(r4)
            java.util.List r4 = (java.util.List) r4
            r4.add(r3)
            goto Lf
        L7b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "NativeLibHelper getAllSoZipEntries, zipFile="
            r1.<init>(r2)
            java.lang.String r7 = r7.getName()
            r1.append(r7)
            java.lang.String r7 = ", soEntries="
            r1.append(r7)
            java.lang.String r7 = r0.toString()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            java.lang.String r1 = "Zeus/so_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r1, r7)
            return r0
    }

    public static void a(java.io.File r16, java.io.File r17, java.lang.String r18, java.util.Map<java.lang.String, java.util.List<java.util.zip.ZipEntry>> r19) {
            r0 = r17
            r1 = 0
            com.bytedance.pangle.plugin.Plugin r2 = com.bytedance.pangle.Zeus.getPlugin(r18)     // Catch: java.lang.Throwable -> L17f
            java.util.List<java.lang.String> r3 = r2.mSharedHostSos     // Catch: java.lang.Throwable -> L17f
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L17f
            java.lang.String r4 = "Zeus/install_pangle"
            if (r3 == 0) goto L82
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L17f
            java.util.List<java.lang.String> r6 = r2.mSharedHostSos     // Catch: java.lang.Throwable -> L17f
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L17f
            android.app.Application r6 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L17f
            android.content.pm.ApplicationInfo r6 = r6.getApplicationInfo()     // Catch: java.lang.Throwable -> L17f
            java.lang.String r6 = r6.nativeLibraryDir     // Catch: java.lang.Throwable -> L17f
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L17f
            if (r7 != 0) goto L82
            java.lang.String r7 = java.io.File.pathSeparator     // Catch: java.lang.Throwable -> L17f
            java.lang.String[] r6 = r6.split(r7)     // Catch: java.lang.Throwable -> L17f
            java.util.List<java.lang.String> r2 = r2.mSharedHostSos     // Catch: java.lang.Throwable -> L17f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L17f
        L34:
            boolean r7 = r2.hasNext()     // Catch: java.lang.Throwable -> L17f
            if (r7 == 0) goto L82
            java.lang.Object r7 = r2.next()     // Catch: java.lang.Throwable -> L17f
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L17f
            int r8 = r6.length     // Catch: java.lang.Throwable -> L17f
            r9 = 0
        L42:
            if (r9 >= r8) goto L34
            r10 = r6[r9]     // Catch: java.lang.Throwable -> L17f
            java.io.File r11 = new java.io.File     // Catch: java.lang.Throwable -> L17f
            r11.<init>(r10, r7)     // Catch: java.lang.Throwable -> L17f
            boolean r10 = r3.contains(r7)     // Catch: java.lang.Throwable -> L17f
            if (r10 == 0) goto L7f
            boolean r10 = r11.exists()     // Catch: java.lang.Throwable -> L17f
            if (r10 == 0) goto L7f
            java.lang.String r10 = r11.getAbsolutePath()     // Catch: java.lang.Throwable -> L17f
            java.io.File r12 = new java.io.File     // Catch: java.lang.Throwable -> L17f
            r12.<init>(r0, r7)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r12 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L17f
            com.bytedance.pangle.util.h.a(r10, r12)     // Catch: java.lang.Throwable -> L17f
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17f
            java.lang.String r12 = "NativeLibHelper copySoFromHost, hostSoPath="
            r10.<init>(r12)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r11 = r11.getAbsolutePath()     // Catch: java.lang.Throwable -> L17f
            r10.append(r11)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L17f
            com.bytedance.pangle.log.ZeusLogger.i(r4, r10)     // Catch: java.lang.Throwable -> L17f
            r3.remove(r7)     // Catch: java.lang.Throwable -> L17f
        L7f:
            int r9 = r9 + 1
            goto L42
        L82:
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L17f
            r3 = r16
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L17f
            if (r19 != 0) goto L90
            java.util.Map r3 = a(r2)     // Catch: java.lang.Throwable -> L17c
            goto L92
        L90:
            r3 = r19
        L92:
            java.lang.String r6 = com.bytedance.pangle.d.b.a     // Catch: java.lang.Throwable -> L17c
            boolean r6 = a(r3, r6)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r7 = "Zeus/so_pangle"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            java.lang.String r9 = "NativeLibHelper copyNativeLib pre-verify-matchHostAbi["
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L17c
            r8.append(r6)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r9 = "], pkg="
            r8.append(r9)     // Catch: java.lang.Throwable -> L17c
            r9 = r18
            r8.append(r9)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L17c
            com.bytedance.pangle.log.ZeusLogger.i(r7, r8)     // Catch: java.lang.Throwable -> L17c
            if (r6 == 0) goto L178
            if (r3 == 0) goto L141
            boolean r6 = r3.isEmpty()     // Catch: java.lang.Throwable -> L17c
            if (r6 == 0) goto Lc1
            goto L141
        Lc1:
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L17c
            r1.<init>()     // Catch: java.lang.Throwable -> L17c
            java.util.HashSet r6 = new java.util.HashSet     // Catch: java.lang.Throwable -> L17c
            r6.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r7 = com.bytedance.pangle.d.b.a     // Catch: java.lang.Throwable -> L17c
            int r10 = r7.hashCode()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r11 = "arm64-v8a"
            java.lang.String r12 = "mips"
            java.lang.String r13 = "x86"
            java.lang.String r14 = "x86_64"
            java.lang.String r15 = "mips64"
            java.lang.String r5 = "armeabi-v7a"
            java.lang.String r8 = "armeabi"
            switch(r10) {
                case -1073971299: goto L113;
                case -806050265: goto L10b;
                case -738963905: goto L103;
                case 117110: goto Lfb;
                case 3351711: goto Lf3;
                case 145444210: goto Leb;
                case 1431565292: goto Le3;
                default: goto Le2;
            }
        Le2:
            goto L11b
        Le3:
            boolean r7 = r7.equals(r11)     // Catch: java.lang.Throwable -> L17c
            if (r7 == 0) goto L11b
            r7 = 0
            goto L11c
        Leb:
            boolean r7 = r7.equals(r5)     // Catch: java.lang.Throwable -> L17c
            if (r7 == 0) goto L11b
            r7 = 1
            goto L11c
        Lf3:
            boolean r7 = r7.equals(r12)     // Catch: java.lang.Throwable -> L17c
            if (r7 == 0) goto L11b
            r7 = 6
            goto L11c
        Lfb:
            boolean r7 = r7.equals(r13)     // Catch: java.lang.Throwable -> L17c
            if (r7 == 0) goto L11b
            r7 = 4
            goto L11c
        L103:
            boolean r7 = r7.equals(r8)     // Catch: java.lang.Throwable -> L17c
            if (r7 == 0) goto L11b
            r7 = 2
            goto L11c
        L10b:
            boolean r7 = r7.equals(r14)     // Catch: java.lang.Throwable -> L17c
            if (r7 == 0) goto L11b
            r7 = 3
            goto L11c
        L113:
            boolean r7 = r7.equals(r15)     // Catch: java.lang.Throwable -> L17c
            if (r7 == 0) goto L11b
            r7 = 5
            goto L11c
        L11b:
            r7 = -1
        L11c:
            switch(r7) {
                case 0: goto L13e;
                case 1: goto L137;
                case 2: goto L130;
                case 3: goto L12c;
                case 4: goto L128;
                case 5: goto L124;
                case 6: goto L120;
                default: goto L11f;
            }     // Catch: java.lang.Throwable -> L17c
        L11f:
            goto L141
        L120:
            a(r3, r12, r1, r6)     // Catch: java.lang.Throwable -> L17c
            goto L141
        L124:
            a(r3, r15, r1, r6)     // Catch: java.lang.Throwable -> L17c
            goto L141
        L128:
            a(r3, r13, r1, r6)     // Catch: java.lang.Throwable -> L17c
            goto L141
        L12c:
            a(r3, r14, r1, r6)     // Catch: java.lang.Throwable -> L17c
            goto L141
        L130:
            a(r3, r8, r1, r6)     // Catch: java.lang.Throwable -> L17c
            a(r3, r5, r1, r6)     // Catch: java.lang.Throwable -> L17c
            goto L141
        L137:
            a(r3, r5, r1, r6)     // Catch: java.lang.Throwable -> L17c
            a(r3, r8, r1, r6)     // Catch: java.lang.Throwable -> L17c
            goto L141
        L13e:
            a(r3, r11, r1, r6)     // Catch: java.lang.Throwable -> L17c
        L141:
            if (r1 == 0) goto L167
            boolean r3 = r1.isEmpty()     // Catch: java.lang.Throwable -> L17c
            if (r3 == 0) goto L14a
            goto L167
        L14a:
            boolean r3 = r17.exists()     // Catch: java.lang.Throwable -> L17c
            if (r3 != 0) goto L153
            r17.mkdirs()     // Catch: java.lang.Throwable -> L17c
        L153:
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L17c
        L157:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L17c
            if (r3 == 0) goto L178
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L17c
            java.util.zip.ZipEntry r3 = (java.util.zip.ZipEntry) r3     // Catch: java.lang.Throwable -> L17c
            a(r2, r3, r0)     // Catch: java.lang.Throwable -> L17c
            goto L157
        L167:
            java.lang.String r0 = "NativeLibHelper copyNativeLib, supportedSoEntries empty, pkg="
            java.lang.String r1 = java.lang.String.valueOf(r18)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.concat(r1)     // Catch: java.lang.Throwable -> L17c
            com.bytedance.pangle.log.ZeusLogger.i(r4, r0)     // Catch: java.lang.Throwable -> L17c
            r2.close()
            return
        L178:
            r2.close()
            return
        L17c:
            r0 = move-exception
            r1 = r2
            goto L180
        L17f:
            r0 = move-exception
        L180:
            if (r1 == 0) goto L185
            r1.close()
        L185:
            throw r0
    }

    private static void a(java.util.Map<java.lang.String, java.util.List<java.util.zip.ZipEntry>> r3, java.lang.String r4, java.util.List<java.util.zip.ZipEntry> r5, java.util.Set<java.lang.String> r6) {
            java.lang.Object r3 = r3.get(r4)
            java.util.List r3 = (java.util.List) r3
            if (r3 == 0) goto L40
            int r4 = r3.size()
            if (r4 != 0) goto Lf
            goto L40
        Lf:
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L40
            java.lang.Object r4 = r3.next()
            java.util.zip.ZipEntry r4 = (java.util.zip.ZipEntry) r4
            java.lang.String r0 = r4.getName()
            java.lang.String r1 = r4.getName()
            java.lang.String r2 = java.io.File.separator
            int r1 = r1.lastIndexOf(r2)
            int r1 = r1 + 1
            java.lang.String r0 = r0.substring(r1)
            boolean r1 = r6.contains(r0)
            if (r1 != 0) goto L13
            r5.add(r4)
            r6.add(r0)
            goto L13
        L40:
            return
    }

    private static void a(java.util.zip.ZipFile r6, java.util.zip.ZipEntry r7, java.io.File r8) {
            java.lang.String r0 = r7.getName()
            java.lang.String r1 = ".."
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto Ld
            return
        Ld:
            java.lang.String r1 = java.io.File.separator
            int r1 = r0.lastIndexOf(r1)
            r2 = 1
            int r1 = r1 + r2
            java.lang.String r0 = r0.substring(r1)
            java.io.File r1 = new java.io.File
            r1.<init>(r8, r0)
            r8 = 0
            r0 = r8
        L20:
            boolean r3 = r1.exists()
            if (r3 == 0) goto L29
            r1.delete()
        L29:
            java.lang.String r3 = "Zeus/install_pangle"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L52
            java.lang.String r5 = "NativeLibHelper copySoZipEntry, soZipEntry="
            r4.<init>(r5)     // Catch: java.io.IOException -> L52
            r4.append(r7)     // Catch: java.io.IOException -> L52
            java.lang.String r5 = ", targetSoFile="
            r4.append(r5)     // Catch: java.io.IOException -> L52
            r4.append(r1)     // Catch: java.io.IOException -> L52
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> L52
            com.bytedance.pangle.log.ZeusLogger.i(r3, r4)     // Catch: java.io.IOException -> L52
            java.io.InputStream r3 = r6.getInputStream(r7)     // Catch: java.io.IOException -> L52
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L52
            r4.<init>(r1)     // Catch: java.io.IOException -> L52
            com.bytedance.pangle.util.g.a(r3, r4)     // Catch: java.io.IOException -> L52
            r0 = r2
            goto L58
        L52:
            r3 = move-exception
            r4 = 3
            if (r8 >= r4) goto L5b
            int r8 = r8 + 1
        L58:
            if (r0 == 0) goto L20
            return
        L5b:
            throw r3
    }

    private static void a(org.json.JSONObject r0, java.lang.String r1, java.lang.String r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4
            return
        L4:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private static boolean a(java.util.Map<java.lang.String, java.util.List<java.util.zip.ZipEntry>> r3, java.lang.String r4) {
            java.lang.String r0 = "armeabi"
            boolean r1 = android.text.TextUtils.equals(r4, r0)
            java.lang.String r2 = "armeabi-v7a"
            if (r1 != 0) goto L16
            boolean r1 = android.text.TextUtils.equals(r4, r2)
            if (r1 == 0) goto L11
            goto L16
        L11:
            boolean r3 = r3.containsKey(r4)
            return r3
        L16:
            boolean r4 = r3.containsKey(r0)
            if (r4 != 0) goto L25
            boolean r3 = r3.containsKey(r2)
            if (r3 == 0) goto L23
            goto L25
        L23:
            r3 = 0
            return r3
        L25:
            r3 = 1
            return r3
    }

    public static int b() {
            java.lang.String r0 = a()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.bytedance.pangle.d.b.b
            java.lang.Object r0 = r1.get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    private static java.lang.String b(org.json.JSONObject r8) {
            java.lang.String r0 = "Zeus/so_pangle"
            r1 = 0
            android.app.Application r2 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L95
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L95
            android.app.Application r3 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L95
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r1)     // Catch: java.lang.Throwable -> L95
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.sourceDir     // Catch: java.lang.Throwable -> L95
            java.util.zip.ZipFile r3 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L95
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L95
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L95
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L95
            java.util.Map r2 = a(r3)     // Catch: java.lang.Throwable -> L95
            java.util.HashSet r4 = new java.util.HashSet     // Catch: java.lang.Throwable -> L95
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L95
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L95
            r3.close()     // Catch: java.io.IOException -> L36 java.lang.Throwable -> L95
            goto L3b
        L36:
            java.lang.String r2 = "NativeLibHelper inferHostAbiManual, close sourceApkZipFile error!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r2)     // Catch: java.lang.Throwable -> L95
        L3b:
            boolean r2 = com.bytedance.pangle.util.i.a()     // Catch: java.lang.Throwable -> L95
            if (r2 == 0) goto L44
            java.lang.String[] r2 = android.os.Build.SUPPORTED_ABIS     // Catch: java.lang.Throwable -> L95
            goto L50
        L44:
            r2 = 2
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> L95
            r2[r1] = r3     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L95
            r5 = 1
            r2[r5] = r3     // Catch: java.lang.Throwable -> L95
        L50:
            boolean r3 = r4.isEmpty()     // Catch: java.lang.Throwable -> L95
            if (r3 == 0) goto L73
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L95
            java.lang.String r4 = "NativeLibHelper inferHostAbiManual, host source apk .so is empty, use supportedABIs[0]="
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L95
            r4 = r2[r1]     // Catch: java.lang.Throwable -> L95
            r3.append(r4)     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L95
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3)     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = "supportedABI0"
            r4 = r2[r1]     // Catch: java.lang.Throwable -> L95
            a(r8, r3, r4)     // Catch: java.lang.Throwable -> L95
            r8 = r2[r1]     // Catch: java.lang.Throwable -> L95
            return r8
        L73:
            int r3 = r2.length     // Catch: java.lang.Throwable -> L95
            r5 = r1
        L75:
            if (r5 >= r3) goto La2
            r6 = r2[r5]     // Catch: java.lang.Throwable -> L95
            boolean r7 = r4.contains(r6)     // Catch: java.lang.Throwable -> L95
            if (r7 == 0) goto L92
            java.lang.String r2 = "NativeLibHelper inferHostAbiManual, match cpuAbi="
            java.lang.String r3 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.concat(r3)     // Catch: java.lang.Throwable -> L95
            com.bytedance.pangle.log.ZeusLogger.w(r0, r2)     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = "matchCpuAbi"
            a(r8, r2, r6)     // Catch: java.lang.Throwable -> L95
            return r6
        L92:
            int r5 = r5 + 1
            goto L75
        L95:
            r2 = move-exception
            java.lang.String r3 = "NativeLibHelper inferHostAbiManual failed!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r3, r2)
            java.lang.String r0 = "manualError"
            java.lang.String r2 = "1"
            a(r8, r0, r2)
        La2:
            boolean r0 = com.bytedance.pangle.util.i.a()
            if (r0 == 0) goto Lb6
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            r0 = r0[r1]
            java.lang.String r2 = "defaultABI0"
            a(r8, r2, r0)
            java.lang.String[] r8 = android.os.Build.SUPPORTED_ABIS
            r8 = r8[r1]
            return r8
        Lb6:
            java.lang.String r0 = android.os.Build.CPU_ABI
            java.lang.String r1 = "defaultABI"
            a(r8, r1, r0)
            java.lang.String r8 = android.os.Build.CPU_ABI
            return r8
    }

    public static boolean b(java.io.File r7) {
            java.lang.String r0 = "NativeLibHelper hasNativeLib, close sourceApkZipFile error!"
            java.lang.String r1 = "Zeus/so_pangle"
            r2 = 0
            r3 = 0
            java.util.zip.ZipFile r4 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L4c java.io.IOException -> L4e
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L4c java.io.IOException -> L4e
            java.util.Enumeration r7 = r4.entries()     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            java.lang.String r3 = "^lib/[^/]+/lib[^/]+.so$"
            java.util.regex.Pattern r3 = java.util.regex.Pattern.compile(r3)     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
        L15:
            boolean r5 = r7.hasMoreElements()     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            if (r5 == 0) goto L3e
            java.lang.Object r5 = r7.nextElement()     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            java.util.zip.ZipEntry r5 = (java.util.zip.ZipEntry) r5     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            boolean r6 = r5.isDirectory()     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            if (r6 != 0) goto L15
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            java.util.regex.Matcher r5 = r3.matcher(r5)     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            boolean r5 = r5.matches()     // Catch: java.lang.Throwable -> L46 java.io.IOException -> L49
            if (r5 == 0) goto L15
            r4.close()     // Catch: java.io.IOException -> L39
            goto L3c
        L39:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L3c:
            r7 = 1
            return r7
        L3e:
            r4.close()     // Catch: java.io.IOException -> L42
            goto L45
        L42:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L45:
            return r2
        L46:
            r7 = move-exception
            r3 = r4
            goto L5e
        L49:
            r7 = move-exception
            r3 = r4
            goto L4f
        L4c:
            r7 = move-exception
            goto L5e
        L4e:
            r7 = move-exception
        L4f:
            java.lang.String r4 = "NativeLibHelper hasNativeLib, get sourceApk ZipFile failed!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r4, r7)     // Catch: java.lang.Throwable -> L4c
            if (r3 == 0) goto L5d
            r3.close()     // Catch: java.io.IOException -> L5a
            goto L5d
        L5a:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L5d:
            return r2
        L5e:
            if (r3 == 0) goto L67
            r3.close()     // Catch: java.io.IOException -> L64
            goto L67
        L64:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        L67:
            throw r7
    }

    private static java.lang.String c() {
            org.json.JSONObject r0 = d()
            java.lang.String r1 = a(r0)
            if (r1 != 0) goto Le
            java.lang.String r1 = b(r0)
        Le:
            return r1
    }

    private static org.json.JSONObject d() {
            java.lang.String r0 = "0"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "primaryCpuAbi"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            java.lang.String r2 = "processMode"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            java.lang.String r2 = "supportedABI0"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            java.lang.String r2 = "matchCpuAbi"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            java.lang.String r2 = "defaultABI0"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            java.lang.String r2 = "defaultABI"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            java.lang.String r2 = "autoError"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            java.lang.String r2 = "manualError"
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L30
            goto L34
        L30:
            r0 = move-exception
            r0.printStackTrace()
        L34:
            return r1
    }
}
