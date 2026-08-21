package com.huawei.hms.hatool;

public class t0 {
    public static final java.lang.String[] a = null;

    static {
            java.lang.String r0 = "e2f856b9f9a4fd4cb2795aeaf83268e4bff189aaec05d691ffde76e075b82648"
            java.lang.String r1 = "173cf86fe9894a0f70dadd09d4fd88c380836099d4939f8c3754361bdc16a32b"
            java.lang.String r2 = "b368b110e3b565fe97c91f786e11bc48754cc8e4e6f21d8a94a68ac6ad67aaaf"
            java.lang.String r3 = "db48223fd9e143f7e133c57f5d08a4e38549ce3ebd921fe3b4003c26e5e35bed"
            java.lang.String r4 = "4bdecdf772491e35c4e8b48f88aee22bae1311984f2e1da4dfad0b78ee7f5163"
            java.lang.String r5 = "3081a0adab3018d57165e6dd24074bdbac640f6dbe21a9e24d3474a87ebf38b8"
            java.lang.String r6 = "db53fcdc9ab71e9bdd4eab257fe1aba7989ad2b24fbe3a85dfef72ea1dd6bae2"
            java.lang.String r7 = "d80f18e8081b624cc64985f87f70118f1702985d2e10dbc985ee7be334fd3c7d"
            java.lang.String r8 = "5fed96c85bd58c58aadbd465c172a4c9a794d8eb2f86cbc7bcee6caf4c7a2c5f"
            java.lang.String r9 = "07ff9b7aeeff969173c45b285fe0fecdbaae244576ff7a2796a36f1c0c11adb4"
            java.lang.String r10 = "92974c6802419e4d18b5ec536cbfa167b8e8eff09ec4c8510a5b95750b1e0c82"
            java.lang.String r11 = "403f14ad2f0e5eb3c4f3a0bcd5c1592cc4492662ad53191c92905255d4990656"
            java.lang.String r12 = "4230baa077b401374d0fc012375047e79ea0790d58d095ef18d97d95470c738d"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12}
            com.huawei.hms.hatool.t0.a = r0
            return
    }

    public static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = "hmsSdk"
            if (r0 == 0) goto Le
            java.lang.String r0 = "url is null"
            com.huawei.hms.hatool.y.c(r1, r0)
            return r4
        Le:
            r0 = 0
            boolean r2 = android.webkit.URLUtil.isNetworkUrl(r4)     // Catch: java.net.URISyntaxException -> L34
            if (r2 == 0) goto L2e
            java.util.Locale r2 = java.util.Locale.US     // Catch: java.net.URISyntaxException -> L34
            java.lang.String r2 = r4.toLowerCase(r2)     // Catch: java.net.URISyntaxException -> L34
            java.lang.String r3 = "http:"
            boolean r2 = r2.startsWith(r3)     // Catch: java.net.URISyntaxException -> L34
            if (r2 == 0) goto L24
            goto L2e
        L24:
            java.net.URI r2 = new java.net.URI     // Catch: java.net.URISyntaxException -> L34
            r2.<init>(r4)     // Catch: java.net.URISyntaxException -> L34
            java.lang.String r4 = r2.getHost()     // Catch: java.net.URISyntaxException -> L34
            return r4
        L2e:
            java.lang.String r4 = "url don't starts with https"
            com.huawei.hms.hatool.y.b(r1, r4)     // Catch: java.net.URISyntaxException -> L34
            return r0
        L34:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getHostByURI error : "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.hms.hatool.y.b(r1, r4)
            return r0
    }

    public static java.lang.String a(java.lang.String r3, int r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L39
            if (r4 > 0) goto L9
            goto L39
        L9:
            java.lang.String r0 = "\\."
            java.lang.String[] r3 = r3.split(r0)
            int r0 = r3.length
            if (r0 >= r4) goto L15
            java.lang.String r3 = ""
            return r3
        L15:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r3.length
            int r1 = r1 - r4
            r1 = r3[r1]
            r0.append(r1)
            r1 = 1
        L22:
            if (r1 >= r4) goto L34
            java.lang.String r2 = "."
            r0.append(r2)
            int r2 = r3.length
            int r2 = r2 - r4
            int r2 = r2 + r1
            r2 = r3[r2]
            r0.append(r2)
            int r1 = r1 + 1
            goto L22
        L34:
            java.lang.String r3 = r0.toString()
            return r3
        L39:
            java.lang.String r4 = "hmsSdk"
            java.lang.String r0 = "url is null"
            com.huawei.hms.hatool.y.c(r4, r0)
            return r3
    }

    public static boolean a(java.lang.String r3, java.lang.String r4, int r5) {
            java.lang.String r3 = a(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = "hmsSdk"
            r2 = 0
            if (r0 != 0) goto L7f
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L14
            goto L7f
        L14:
            java.lang.String r5 = a(r3, r5)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L24
            java.lang.String r3 = "get urlLastNStr is null"
        L20:
            com.huawei.hms.hatool.y.b(r1, r3)
            return r2
        L24:
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.hash.SHA.sha256Encrypt(r3)
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L30
            r3 = 1
            return r3
        L30:
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.hash.SHA.sha256Encrypt(r5)
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L7e
            int r4 = r3.length()     // Catch: java.lang.Exception -> L57 java.lang.IndexOutOfBoundsException -> L6e
            int r5 = r5.length()     // Catch: java.lang.Exception -> L57 java.lang.IndexOutOfBoundsException -> L6e
            int r4 = r4 - r5
            java.lang.String r3 = r3.substring(r2, r4)     // Catch: java.lang.Exception -> L57 java.lang.IndexOutOfBoundsException -> L6e
            java.lang.String r4 = "."
            boolean r4 = r3.endsWith(r4)     // Catch: java.lang.Exception -> L57 java.lang.IndexOutOfBoundsException -> L6e
            if (r4 != 0) goto L50
            return r2
        L50:
            java.lang.String r4 = "^[A-Za-z0-9.-]+$"
            boolean r3 = r3.matches(r4)     // Catch: java.lang.Exception -> L57 java.lang.IndexOutOfBoundsException -> L6e
            return r3
        L57:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Exception : "
            r4.append(r5)
            java.lang.String r3 = r3.getMessage()
        L66:
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            goto L20
        L6e:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "IndexOutOfBoundsException"
            r4.append(r5)
            java.lang.String r3 = r3.getMessage()
            goto L66
        L7e:
            return r2
        L7f:
            java.lang.String r3 = "url or whitelistHash is null"
            goto L20
    }

    public static boolean b(java.lang.String r7) {
            java.lang.Boolean r0 = com.huawei.hms.hatool.i1.a
            boolean r0 = r0.booleanValue()
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            java.lang.String[] r0 = com.huawei.hms.hatool.t0.a
            int r2 = r0.length
            r3 = 0
            r4 = r3
        Lf:
            if (r4 >= r2) goto L1e
            r5 = r0[r4]
            r6 = 2
            boolean r5 = a(r7, r5, r6)
            if (r5 == 0) goto L1b
            return r1
        L1b:
            int r4 = r4 + 1
            goto Lf
        L1e:
            return r3
    }
}
