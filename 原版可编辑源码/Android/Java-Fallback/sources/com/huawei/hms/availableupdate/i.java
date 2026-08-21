package com.huawei.hms.availableupdate;

public final class i {
    public static java.lang.String a(int r2) {
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r2 == r0) goto L46
            r0 = 2000(0x7d0, float:2.803E-42)
            if (r2 == r0) goto L43
            r0 = 2100(0x834, float:2.943E-42)
            if (r2 == r0) goto L40
            r0 = 2101(0x835, float:2.944E-42)
            if (r2 == r0) goto L3d
            switch(r2) {
                case 1201: goto L3a;
                case 1202: goto L37;
                case 1203: goto L34;
                default: goto L13;
            }
        L13:
            switch(r2) {
                case 2201: goto L31;
                case 2202: goto L2e;
                case 2203: goto L2b;
                case 2204: goto L28;
                default: goto L16;
            }
        L16:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UNKNOWN - "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L28:
            java.lang.String r2 = "DOWNLOAD_NO_STORAGE"
            return r2
        L2b:
            java.lang.String r2 = "DOWNLOAD_NO_SPACE"
            return r2
        L2e:
            java.lang.String r2 = "DOWNLOAD_HASH_ERROR"
            return r2
        L31:
            java.lang.String r2 = "DOWNLOAD_FAILURE"
            return r2
        L34:
            java.lang.String r2 = "CHECK_NO_SUPPORTED"
            return r2
        L37:
            java.lang.String r2 = "CHECK_NO_UPDATE"
            return r2
        L3a:
            java.lang.String r2 = "CHECK_FAILURE"
            return r2
        L3d:
            java.lang.String r2 = "DOWNLOAD_CANCELED"
            return r2
        L40:
            java.lang.String r2 = "DOWNLOADING"
            return r2
        L43:
            java.lang.String r2 = "DOWNLOAD_SUCCESS"
            return r2
        L46:
            java.lang.String r2 = "CHECK_OK"
            return r2
    }
}
