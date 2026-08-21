package com.tencent.bugly.crashreport.crash.anr;

public class TraceFileHelper {



    public static class a {
        public long a;
        public java.lang.String b;
        public long c;
        public java.util.Map<java.lang.String, java.lang.String[]> d;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public interface b {
        boolean a(long r1);

        boolean a(long r1, long r3, java.lang.String r5);

        boolean a(java.lang.String r1, int r2, java.lang.String r3, java.lang.String r4);
    }

    public TraceFileHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.io.BufferedReader r4) throws java.io.IOException {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
        L6:
            r2 = 3
            if (r1 >= r2) goto L28
            java.lang.String r2 = r4.readLine()
            if (r2 != 0) goto L11
            r4 = 0
            return r4
        L11:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.lang.String r2 = "\n"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
        L28:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private static java.lang.Object[] a(java.io.BufferedReader r6, java.util.regex.Pattern... r7) throws java.io.IOException {
        L0:
            java.lang.String r0 = r6.readLine()
            if (r0 == 0) goto L23
            int r1 = r7.length
            r2 = 0
            r3 = 0
        L9:
            if (r3 >= r1) goto L0
            r4 = r7[r3]
            java.util.regex.Matcher r5 = r4.matcher(r0)
            boolean r5 = r5.matches()
            if (r5 == 0) goto L20
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r6[r2] = r4
            r7 = 1
            r6[r7] = r0
            return r6
        L20:
            int r3 = r3 + 1
            goto L9
        L23:
            r6 = 0
            return r6
    }

    private static java.lang.String b(java.io.BufferedReader r3) throws java.io.IOException {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
        L5:
            java.lang.String r1 = r3.readLine()
            if (r1 == 0) goto L2a
            java.lang.String r2 = r1.trim()
            int r2 = r2.length()
            if (r2 <= 0) goto L2a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "\n"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            goto L5
        L2a:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static com.tencent.bugly.crashreport.crash.anr.TraceFileHelper.a readFirstDumpInfo(java.lang.String r7, boolean r8) {
            r0 = 0
            r1 = 0
            r2 = 1
            if (r7 != 0) goto Lf
            java.lang.Object[] r8 = new java.lang.Object[r2]
            r8[r1] = r7
            java.lang.String r7 = "path:%s"
            com.tencent.bugly.proguard.al.e(r7, r8)
            return r0
        Lf:
            com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$a r3 = new com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$a
            r3.<init>()
            com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$2 r4 = new com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$2
            r4.<init>(r3, r8)
            readTraceFile(r7, r4)
            long r7 = r3.a
            r4 = 0
            int r6 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r6 <= 0) goto L2f
            long r7 = r3.c
            int r6 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r6 <= 0) goto L2f
            java.lang.String r7 = r3.b
            if (r7 == 0) goto L2f
            return r3
        L2f:
            java.lang.Object[] r7 = new java.lang.Object[r2]
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            long r4 = r3.a
            r8.append(r4)
            java.lang.String r2 = " "
            r8.append(r2)
            long r4 = r3.c
            r8.append(r4)
            r8.append(r2)
            java.lang.String r2 = r3.b
            r8.append(r2)
            java.lang.String r8 = r8.toString()
            r7[r1] = r8
            java.lang.String r8 = "first dump error %s"
            com.tencent.bugly.proguard.al.e(r8, r7)
            return r0
    }

    public static com.tencent.bugly.crashreport.crash.anr.TraceFileHelper.a readTargetDumpInfo(java.lang.String r4, java.lang.String r5, boolean r6) {
            r0 = 0
            if (r4 == 0) goto L26
            if (r5 != 0) goto L6
            goto L26
        L6:
            com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$a r1 = new com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$a
            r1.<init>()
            com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$1 r2 = new com.tencent.bugly.crashreport.crash.anr.TraceFileHelper$1
            r2.<init>(r1, r4, r6)
            readTraceFile(r5, r2)
            long r4 = r1.a
            r2 = 0
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 <= 0) goto L26
            long r4 = r1.c
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 <= 0) goto L26
            java.lang.String r4 = r1.b
            if (r4 == 0) goto L26
            return r1
        L26:
            return r0
    }

    public static void readTraceFile(java.lang.String r18, com.tencent.bugly.crashreport.crash.anr.TraceFileHelper.b r19) {
            r0 = r18
            r6 = r19
            java.lang.String r7 = "\\s"
            if (r0 == 0) goto L1d6
            if (r6 != 0) goto Lc
            goto L1d6
        Lc:
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r0 = r1.exists()
            if (r0 != 0) goto L18
            return
        L18:
            r1.lastModified()
            r1.length()
            r2 = 0
            r8 = 2
            r9 = 0
            r10 = 1
            java.io.BufferedReader r11 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L180 java.lang.Exception -> L184
            java.io.FileReader r0 = new java.io.FileReader     // Catch: java.lang.Throwable -> L180 java.lang.Exception -> L184
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L180 java.lang.Exception -> L184
            r11.<init>(r0)     // Catch: java.lang.Throwable -> L180 java.lang.Exception -> L184
            java.lang.String r0 = "-{5}\\spid\\s\\d+\\sat\\s\\d+-\\d+-\\d+\\s\\d{2}:\\d{2}:\\d{2}\\s-{5}"
            java.util.regex.Pattern r12 = java.util.regex.Pattern.compile(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = "-{5}\\send\\s\\d+\\s-{5}"
            java.util.regex.Pattern r13 = java.util.regex.Pattern.compile(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = "Cmd\\sline:\\s(\\S+)"
            java.util.regex.Pattern r14 = java.util.regex.Pattern.compile(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = "\".+\"\\s(daemon\\s){0,1}prio=\\d+\\stid=\\d+\\s.*"
            java.util.regex.Pattern r15 = java.util.regex.Pattern.compile(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.text.SimpleDateFormat r5 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = "yyyy-MM-dd HH:mm:ss"
            java.util.Locale r1 = java.util.Locale.US     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r5.<init>(r0, r1)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
        L4d:
            java.util.regex.Pattern[] r0 = new java.util.regex.Pattern[r10]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0[r9] = r12     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.Object[] r0 = a(r11, r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            if (r0 == 0) goto L16a
            java.util.regex.Pattern[] r1 = new java.util.regex.Pattern[r10]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r1[r9] = r14     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.Object[] r1 = a(r11, r1)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            if (r1 != 0) goto L78
            java.lang.String r0 = "Failed to find process name."
            java.lang.Object[] r1 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r11.close()     // Catch: java.io.IOException -> L6c
            return
        L6c:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r1)
            if (r0 != 0) goto L77
            r1.printStackTrace()
        L77:
            return
        L78:
            r0 = r0[r10]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String[] r0 = r0.split(r7)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r2 = r0[r8]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r4.<init>()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r16 = 4
            r9 = r0[r16]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r4.append(r9)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r9 = " "
            r4.append(r9)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r9 = 5
            r0 = r0[r9]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r4.append(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.util.Date r0 = r5.parse(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            long r16 = r0.getTime()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0 = r1[r10]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.util.regex.Matcher r0 = r14.matcher(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0.find()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0.group(r10)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r9 = r0.group(r10)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0 = r19
            r1 = r2
            r3 = r16
            r16 = r5
            r5 = r9
            boolean r0 = r0.a(r1, r3, r5)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            if (r0 != 0) goto Ldd
            r11.close()     // Catch: java.io.IOException -> Ld1
            return
        Ld1:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r1)
            if (r0 != 0) goto Ldc
            r1.printStackTrace()
        Ldc:
            return
        Ldd:
            java.util.regex.Pattern[] r0 = new java.util.regex.Pattern[r8]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r1 = 0
            r0[r1] = r15     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0[r10] = r13     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.Object[] r0 = a(r11, r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            if (r0 == 0) goto L165
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            if (r2 != r15) goto L13f
            r0 = r0[r10]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r1 = "\".+\""
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.util.regex.Matcher r1 = r1.matcher(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r1.find()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r1 = r1.group()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            int r2 = r2 - r10
            java.lang.String r1 = r1.substring(r10, r2)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r2 = "NATIVE"
            r0.contains(r2)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r2 = "tid=\\d+"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.util.regex.Matcher r0 = r2.matcher(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0.find()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = r0.group()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r2 = "="
            int r2 = r0.indexOf(r2)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            int r2 = r2 + r10
            java.lang.String r0 = r0.substring(r2)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r2 = a(r11)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r3 = b(r11)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r6.a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            goto Ldd
        L13f:
            r0 = r0[r10]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            java.lang.String[] r0 = r0.split(r7)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            r0 = r0[r8]     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            long r0 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            boolean r0 = r6.a(r0)     // Catch: java.lang.Throwable -> L17a java.lang.Exception -> L17d
            if (r0 != 0) goto L165
            r11.close()     // Catch: java.io.IOException -> L159
            return
        L159:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r1)
            if (r0 != 0) goto L164
            r1.printStackTrace()
        L164:
            return
        L165:
            r5 = r16
            r9 = 0
            goto L4d
        L16a:
            r11.close()     // Catch: java.io.IOException -> L16e
            return
        L16e:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r1)
            if (r0 != 0) goto L179
            r1.printStackTrace()
        L179:
            return
        L17a:
            r0 = move-exception
            r1 = r0
            goto L1c4
        L17d:
            r0 = move-exception
            r2 = r11
            goto L185
        L180:
            r0 = move-exception
            r1 = r0
            r11 = r2
            goto L1c4
        L184:
            r0 = move-exception
        L185:
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> L180
            if (r1 != 0) goto L18e
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L180
        L18e:
            java.lang.String r1 = "trace open fail:%s : %s"
            java.lang.Object[] r3 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L180
            java.lang.Class r4 = r0.getClass()     // Catch: java.lang.Throwable -> L180
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L180
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L180
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L180
            r4.<init>()     // Catch: java.lang.Throwable -> L180
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L180
            r4.append(r0)     // Catch: java.lang.Throwable -> L180
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L180
            r3[r10] = r0     // Catch: java.lang.Throwable -> L180
            com.tencent.bugly.proguard.al.d(r1, r3)     // Catch: java.lang.Throwable -> L180
            if (r2 == 0) goto L1c3
            r2.close()     // Catch: java.io.IOException -> L1b8
            return
        L1b8:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r1)
            if (r0 != 0) goto L1c3
            r1.printStackTrace()
        L1c3:
            return
        L1c4:
            if (r11 == 0) goto L1d5
            r11.close()     // Catch: java.io.IOException -> L1ca
            goto L1d5
        L1ca:
            r0 = move-exception
            r2 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r2)
            if (r0 != 0) goto L1d5
            r2.printStackTrace()
        L1d5:
            throw r1
        L1d6:
            return
    }
}
