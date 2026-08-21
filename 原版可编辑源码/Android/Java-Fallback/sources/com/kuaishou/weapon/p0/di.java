package com.kuaishou.weapon.p0;

public class di {
    public di() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            int r0 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = " lsof -p %1$s "
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L19
            r3 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L19
            r2[r3] = r0     // Catch: java.lang.Exception -> L19
            java.lang.String r0 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L19
            java.lang.String r0 = b(r0)     // Catch: java.lang.Exception -> L19
            return r0
        L19:
            r0 = 0
            return r0
    }

    public static java.lang.String a(java.lang.String r4) {
            java.lang.String r0 = ""
            r1 = 0
            java.lang.Runtime r2 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3e
            java.lang.Process r4 = r2.exec(r4)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3e
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3e
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3e
            java.io.InputStream r4 = r4.getInputStream()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3e
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3e
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L3e
            java.lang.String r4 = r2.readLine()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            if (r4 == 0) goto L2e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            r1.<init>()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            r1.append(r0)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            r1.append(r4)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
        L2e:
            r2.close()     // Catch: java.lang.Exception -> L31
        L31:
            return r0
        L32:
            r4 = move-exception
            r1 = r2
            goto L38
        L35:
            r1 = r2
            goto L3e
        L37:
            r4 = move-exception
        L38:
            if (r1 == 0) goto L3d
            r1.close()     // Catch: java.lang.Exception -> L3d
        L3d:
            throw r4
        L3e:
            if (r1 == 0) goto L43
            r1.close()     // Catch: java.lang.Exception -> L43
        L43:
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = " pidof adbd "
            java.lang.String r0 = a(r0)     // Catch: java.lang.Exception -> L1a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L1a
            if (r1 != 0) goto L1a
            int r1 = r0.length()     // Catch: java.lang.Exception -> L1a
            r2 = 10
            if (r1 <= r2) goto L19
            r1 = 0
            java.lang.String r0 = r0.substring(r1, r2)     // Catch: java.lang.Exception -> L1a
        L19:
            return r0
        L1a:
            r0 = 0
            return r0
    }

    private static java.lang.String b(java.lang.String r3) {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Exception -> L49
            java.lang.Process r3 = r0.exec(r3)     // Catch: java.lang.Exception -> L49
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L49
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L49
            java.io.InputStream r3 = r3.getInputStream()     // Catch: java.lang.Exception -> L49
            r1.<init>(r3)     // Catch: java.lang.Exception -> L49
            r0.<init>(r1)     // Catch: java.lang.Exception -> L49
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> L49
            r3.<init>()     // Catch: java.lang.Exception -> L49
        L1b:
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Exception -> L49
            if (r1 == 0) goto L3b
            java.lang.String r2 = "TCP"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L49
            if (r2 == 0) goto L34
            java.lang.String r2 = ":443"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L49
            if (r2 != 0) goto L34
            r3.add(r1)     // Catch: java.lang.Exception -> L49
        L34:
            int r1 = r3.size()     // Catch: java.lang.Exception -> L49
            r2 = 5
            if (r1 <= r2) goto L1b
        L3b:
            r0.close()     // Catch: java.lang.Exception -> L49
            int r0 = r3.size()     // Catch: java.lang.Exception -> L49
            if (r0 <= 0) goto L49
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L49
            return r3
        L49:
            r3 = 0
            return r3
    }

    public static java.util.Set c() {
            r0 = 0
            java.util.HashSet r1 = new java.util.HashSet     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            r1.<init>()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            java.lang.String r2 = " netstat -nap "
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            java.lang.Process r2 = r3.exec(r2)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L59
        L1e:
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L5a
            if (r2 == 0) goto L40
            java.lang.String r4 = "tcp"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L5a
            if (r4 == 0) goto L1e
            java.lang.String r4 = "ESTABLISHED"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L5a
            if (r4 == 0) goto L1e
            java.lang.String r4 = ":5555 "
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L5a
            if (r4 == 0) goto L1e
            r1.add(r2)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L5a
            goto L1e
        L40:
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L5a
            if (r2 <= 0) goto L4a
            r3.close()     // Catch: java.lang.Exception -> L49
        L49:
            return r1
        L4a:
            r3.close()     // Catch: java.lang.Exception -> L5d
            goto L5d
        L4e:
            r0 = move-exception
            goto L53
        L50:
            r1 = move-exception
            r3 = r0
            r0 = r1
        L53:
            if (r3 == 0) goto L58
            r3.close()     // Catch: java.lang.Exception -> L58
        L58:
            throw r0
        L59:
            r3 = r0
        L5a:
            if (r3 == 0) goto L5d
            goto L4a
        L5d:
            return r0
    }

    public static int d() {
            r0 = 0
            r1 = 0
            java.lang.String r2 = " netstat -apn | grep scrcpy "
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L3d
            java.lang.Process r2 = r3.exec(r2)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L3d
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L3d
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L3d
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L3d
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L3d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L3d
        L1a:
            java.lang.String r1 = r3.readLine()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L34
            if (r1 == 0) goto L2d
            java.lang.String r2 = "scrcpy"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L34
            if (r1 == 0) goto L1a
            r3.close()     // Catch: java.lang.Exception -> L2b
        L2b:
            r0 = 1
            return r0
        L2d:
            r3.close()     // Catch: java.lang.Exception -> L30
        L30:
            return r0
        L31:
            r0 = move-exception
            r1 = r3
            goto L37
        L34:
            r1 = r3
            goto L3d
        L36:
            r0 = move-exception
        L37:
            if (r1 == 0) goto L3c
            r1.close()     // Catch: java.lang.Exception -> L3c
        L3c:
            throw r0
        L3d:
            if (r1 == 0) goto L42
            r1.close()     // Catch: java.lang.Exception -> L42
        L42:
            return r0
    }

    public static org.json.JSONObject e() {
            java.lang.String r0 = "/"
            r1 = 0
            java.lang.String r2 = " netstat -an "
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L95
            java.lang.Process r2 = r3.exec(r2)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L95
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L95
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L95
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L95
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L95
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L95
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            r2.<init>()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
        L20:
            java.lang.String r4 = r3.readLine()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r4 == 0) goto L7d
            boolean r5 = r4.contains(r0)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            java.lang.String r6 = "@"
            if (r5 != 0) goto L34
            boolean r5 = r4.contains(r6)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r5 == 0) goto L20
        L34:
            boolean r5 = r4.contains(r0)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r5 == 0) goto L43
            int r5 = r4.indexOf(r0)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
        L3e:
            java.lang.String r4 = r4.substring(r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            goto L4e
        L43:
            boolean r5 = r4.contains(r6)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r5 == 0) goto L4e
            int r5 = r4.indexOf(r6)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            goto L3e
        L4e:
            java.lang.String r5 = "/ddy"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r5 == 0) goto L5c
            java.lang.String r5 = "0"
        L58:
            r2.put(r5, r4)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            goto L20
        L5c:
            java.lang.String r5 = "scrcpy"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r5 == 0) goto L67
            java.lang.String r5 = "1"
            goto L58
        L67:
            java.lang.String r5 = "supersu"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r5 == 0) goto L72
            java.lang.String r5 = "2"
            goto L58
        L72:
            java.lang.String r5 = "/adbd"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r5 == 0) goto L20
            java.lang.String r5 = "3"
            goto L58
        L7d:
            int r0 = r2.length()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L96
            if (r0 <= 0) goto L87
            r3.close()     // Catch: java.lang.Exception -> L86
        L86:
            return r2
        L87:
            r3.close()     // Catch: java.lang.Exception -> L8a
        L8a:
            return r1
        L8b:
            r0 = move-exception
            r1 = r3
            goto L8f
        L8e:
            r0 = move-exception
        L8f:
            if (r1 == 0) goto L94
            r1.close()     // Catch: java.lang.Exception -> L94
        L94:
            throw r0
        L95:
            r3 = r1
        L96:
            if (r3 == 0) goto L9b
            r3.close()     // Catch: java.lang.Exception -> L9b
        L9b:
            return r1
    }
}
