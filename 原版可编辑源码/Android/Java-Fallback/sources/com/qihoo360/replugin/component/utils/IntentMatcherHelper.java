package com.qihoo360.replugin.component.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class IntentMatcherHelper {
    public IntentMatcherHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String doMatchIntent(android.content.Context r13, android.content.Intent r14, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> r15) {
            if (r15 != 0) goto L4
            r13 = 0
            return r13
        L4:
            java.lang.String r7 = r14.getAction()
            android.content.ContentResolver r13 = r13.getContentResolver()
            java.lang.String r13 = r14.resolveTypeIfNeeded(r13)
            android.net.Uri r8 = r14.getData()
            java.lang.String r9 = r14.getScheme()
            java.util.Set r14 = r14.getCategories()
            java.util.Set r15 = r15.entrySet()
            java.util.Iterator r15 = r15.iterator()
        L24:
            boolean r0 = r15.hasNext()
            if (r0 == 0) goto Lb2
            java.lang.Object r0 = r15.next()
            r10 = r0
            java.util.Map$Entry r10 = (java.util.Map.Entry) r10
            java.lang.Object r0 = r10.getKey()
            r11 = r0
            java.lang.String r11 = (java.lang.String) r11
            java.lang.Object r0 = r10.getValue()
            java.util.List r0 = (java.util.List) r0
            if (r0 != 0) goto L41
            goto L24
        L41:
            java.util.Iterator r12 = r0.iterator()
        L45:
            boolean r0 = r12.hasNext()
            if (r0 == 0) goto L24
            java.lang.Object r0 = r12.next()
            android.content.IntentFilter r0 = (android.content.IntentFilter) r0
            java.lang.String r6 = "ComponentList"
            r1 = r7
            r2 = r13
            r3 = r9
            r4 = r8
            r5 = r14
            int r0 = r0.match(r1, r2, r3, r4, r5, r6)
            java.lang.String r1 = "ms-parser"
            if (r0 < 0) goto L7f
            boolean r13 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r13 == 0) goto L7e
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r14 = "IntentFilter 匹配成功: "
            r13.append(r14)
            java.lang.Object r14 = r10.getKey()
            java.lang.String r14 = (java.lang.String) r14
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r13)
        L7e:
            return r11
        L7f:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L45
            r2 = -4
            if (r0 == r2) goto L9b
            r2 = -3
            if (r0 == r2) goto L98
            r2 = -2
            if (r0 == r2) goto L95
            r2 = -1
            if (r0 == r2) goto L92
            java.lang.String r0 = "unknown reason"
            goto L9d
        L92:
            java.lang.String r0 = "type"
            goto L9d
        L95:
            java.lang.String r0 = "data"
            goto L9d
        L98:
            java.lang.String r0 = "action"
            goto L9d
        L9b:
            java.lang.String r0 = "category"
        L9d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "  Filter did not match: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
            goto L45
        Lb2:
            java.lang.String r13 = ""
            return r13
    }

    public static android.content.pm.ActivityInfo getActivityInfo(android.content.Context r1, java.lang.String r2, android.content.Intent r3) {
            if (r2 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser r0 = com.qihoo360.mobilesafe.parser.manifest.ManifestParser.INS
            java.util.Map r0 = r0.getActivityFilterMap(r2)
            java.lang.String r1 = doMatchIntent(r1, r3, r0)
            android.content.pm.ActivityInfo r1 = com.qihoo360.i.Factory.queryActivityInfo(r2, r1)
            return r1
    }
}
