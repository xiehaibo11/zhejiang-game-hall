package com.kuaishou.weapon.p0;

public class dl {
    public dl() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a() {
            r0 = 0
            r1 = 0
            java.lang.String r2 = "/sys/class/power_supply/usb/online"
            java.lang.String r3 = "java.io.FileInputStream"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L4d
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L4d
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r0] = r6     // Catch: java.lang.Throwable -> L4d
            java.lang.reflect.Constructor r3 = r3.getConstructor(r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L4d
            r5[r0] = r2     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r2 = r3.newInstance(r5)     // Catch: java.lang.Throwable -> L4d
            java.io.FileInputStream r2 = (java.io.FileInputStream) r2     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L47
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L4d
            java.io.InputStreamReader r5 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L4d
            r5.<init>(r2)     // Catch: java.lang.Throwable -> L4d
            r2 = 1000(0x3e8, float:1.401E-42)
            r3.<init>(r5, r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r1 = r3.readLine()     // Catch: java.lang.Throwable -> L45
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L45
            if (r2 != 0) goto L43
            java.lang.String r2 = "1"
            boolean r1 = android.text.TextUtils.equals(r1, r2)     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L43
            r3.close()     // Catch: java.lang.Throwable -> L42
        L42:
            return r4
        L43:
            r1 = r3
            goto L47
        L45:
            r1 = r3
            goto L4d
        L47:
            if (r1 == 0) goto L4c
            r1.close()     // Catch: java.lang.Throwable -> L4c
        L4c:
            return r0
        L4d:
            if (r1 == 0) goto L52
            r1.close()     // Catch: java.lang.Throwable -> L52
        L52:
            return r0
    }

    private static int a(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> La
            int r1 = android.provider.Settings.System.getInt(r1, r2, r0)     // Catch: java.lang.Exception -> La
            return r1
        La:
            return r0
    }

    public static java.lang.String a(long r2) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L10
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r0.format(r2)     // Catch: java.lang.Exception -> L10
            return r2
        L10:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = "http"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L16
            java.lang.String r0 = ""
            java.lang.String r1 = "https://"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "http://"
            java.lang.String r2 = r2.replace(r1, r0)
        L16:
            java.lang.String r0 = "/"
            boolean r1 = r2.contains(r0)
            if (r1 == 0) goto L27
            int r0 = r2.indexOf(r0)
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
        L27:
            return r2
    }

    public static java.util.Set a(android.content.Context r3) {
            java.lang.String r0 = "accessibility"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L3c
            android.view.accessibility.AccessibilityManager r3 = (android.view.accessibility.AccessibilityManager) r3     // Catch: java.lang.Exception -> L3c
            java.util.List r3 = r3.getInstalledAccessibilityServiceList()     // Catch: java.lang.Exception -> L3c
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> L3c
            r0.<init>()     // Catch: java.lang.Exception -> L3c
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L3c
        L15:
            boolean r1 = r3.hasNext()     // Catch: java.lang.Exception -> L3c
            if (r1 == 0) goto L35
            java.lang.Object r1 = r3.next()     // Catch: java.lang.Exception -> L3c
            android.accessibilityservice.AccessibilityServiceInfo r1 = (android.accessibilityservice.AccessibilityServiceInfo) r1     // Catch: java.lang.Exception -> L3c
            if (r1 == 0) goto L15
            java.lang.String r2 = r1.getId()     // Catch: java.lang.Exception -> L3c
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L3c
            if (r2 != 0) goto L15
            java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> L3c
            r0.add(r1)     // Catch: java.lang.Exception -> L3c
            goto L15
        L35:
            int r3 = r0.size()     // Catch: java.lang.Exception -> L3c
            if (r3 <= 0) goto L3c
            return r0
        L3c:
            r3 = 0
            return r3
    }

    public static java.util.Set a(org.json.JSONArray r3) {
            if (r3 == 0) goto L1f
            int r0 = r3.length()     // Catch: java.lang.Exception -> L1f
            if (r0 <= 0) goto L1f
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> L1f
            r0.<init>()     // Catch: java.lang.Exception -> L1f
            r1 = 0
        Le:
            int r2 = r3.length()     // Catch: java.lang.Exception -> L1f
            if (r1 >= r2) goto L1e
            java.lang.Object r2 = r3.get(r1)     // Catch: java.lang.Exception -> L1f
            r0.add(r2)     // Catch: java.lang.Exception -> L1f
            int r1 = r1 + 1
            goto Le
        L1e:
            return r0
        L1f:
            r3 = 0
            return r3
    }

    public static java.util.Set b(android.content.Context r4) {
            r0 = 0
            java.lang.String r1 = "input_method"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L3b
            android.view.inputmethod.InputMethodManager r4 = (android.view.inputmethod.InputMethodManager) r4     // Catch: java.lang.Exception -> L3b
            java.util.List r4 = r4.getInputMethodList()     // Catch: java.lang.Exception -> L3b
            java.util.HashSet r1 = new java.util.HashSet     // Catch: java.lang.Exception -> L3b
            r1.<init>()     // Catch: java.lang.Exception -> L3b
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L3b
        L16:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Exception -> L3b
            if (r2 == 0) goto L33
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Exception -> L3b
            android.view.inputmethod.InputMethodInfo r2 = (android.view.inputmethod.InputMethodInfo) r2     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = "/"
            java.lang.String[] r2 = r2.split(r3)     // Catch: java.lang.Exception -> L3b
            r3 = 0
            r2 = r2[r3]     // Catch: java.lang.Exception -> L3b
            r1.add(r2)     // Catch: java.lang.Exception -> L3b
            goto L16
        L33:
            int r4 = r1.size()     // Catch: java.lang.Exception -> L3b
            if (r4 > 0) goto L3a
            return r0
        L3a:
            return r1
        L3b:
            return r0
    }

    public static int c(android.content.Context r1) {
            java.lang.String r0 = "show_touches"
            int r1 = a(r1, r0)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = 0
            return r1
    }

    public static int d(android.content.Context r1) {
            java.lang.String r0 = "pointer_location"
            int r1 = a(r1, r0)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = 0
            return r1
    }

    public static int e(android.content.Context r3) {
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Throwable -> L1b
            android.content.res.Configuration r3 = r3.getConfiguration()     // Catch: java.lang.Throwable -> L1b
            int r0 = r3.keyboard     // Catch: java.lang.Throwable -> L1b
            r1 = 0
            r2 = 1
            if (r0 == r2) goto L16
            int r3 = r3.hardKeyboardHidden     // Catch: java.lang.Throwable -> L1b
            r0 = 2
            if (r3 != r0) goto L14
            goto L16
        L14:
            r3 = r1
            goto L17
        L16:
            r3 = r2
        L17:
            if (r3 == 0) goto L1a
            return r1
        L1a:
            return r2
        L1b:
            r3 = -1
            return r3
    }
}
