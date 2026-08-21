package com.bianfeng.ymnsdk.feature;

public class YmnProperties extends java.util.Properties {
    private static final java.lang.String[][] NAMES = null;
    private static org.json.JSONObject jsoncfgs = null;
    private static com.bianfeng.ymnsdk.feature.YmnProperties properties = null;
    private static final long serialVersionUID = 1;
    private final java.util.List<?>[] namesArray;

    static {
            r0 = 8
            java.lang.String[][] r0 = new java.lang.String[r0][]
            java.lang.String r1 = "appid"
            java.lang.String r2 = "appId"
            java.lang.String r3 = "appID"
            java.lang.String r4 = "AppId"
            java.lang.String r5 = "Appid"
            java.lang.String r6 = "app_id"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4, r5, r6}
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "appkey"
            java.lang.String r2 = "appKey"
            java.lang.String r3 = "AppKey"
            java.lang.String r4 = "Appkey"
            java.lang.String r5 = "app_key"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4, r5}
            r2 = 1
            r0[r2] = r1
            java.lang.String r3 = "secretkey"
            java.lang.String r4 = "secretKey"
            java.lang.String r5 = "Secretkey"
            java.lang.String r6 = "SecretKey"
            java.lang.String r7 = "secret_key"
            java.lang.String r8 = "appsecret"
            java.lang.String r9 = "appSecret"
            java.lang.String r10 = "Appsecret"
            java.lang.String r11 = "AppSecret"
            java.lang.String r12 = "app_secret"
            java.lang.String[] r1 = new java.lang.String[]{r3, r4, r5, r6, r7, r8, r9, r10, r11, r12}
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = "platPublicKey"
            java.lang.String r2 = "publicRsaKey"
            java.lang.String r3 = "publickey"
            java.lang.String r4 = "publicKey"
            java.lang.String r5 = "public_key"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4, r5}
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = "privateKey"
            java.lang.String r2 = "privatekey"
            java.lang.String r3 = "appPrivateKey"
            java.lang.String r4 = "private_key"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4}
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = "payid"
            java.lang.String r2 = "payId"
            java.lang.String r3 = "pay_id"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}
            r2 = 5
            r0[r2] = r1
            java.lang.String r1 = "cpid"
            java.lang.String r2 = "cpId"
            java.lang.String r3 = "cp_id"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}
            r2 = 6
            r0[r2] = r1
            java.lang.String r1 = "gameid"
            java.lang.String r2 = "gameId"
            java.lang.String r3 = "game_id"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}
            r2 = 7
            r0[r2] = r1
            com.bianfeng.ymnsdk.feature.YmnProperties.NAMES = r0
            return
    }

    private YmnProperties() {
            r3 = this;
            r3.<init>()
            java.lang.String[][] r0 = com.bianfeng.ymnsdk.feature.YmnProperties.NAMES
            int r0 = r0.length
            java.util.List[] r0 = new java.util.List[r0]
            r3.namesArray = r0
            r0 = 0
        Lb:
            java.lang.String[][] r1 = com.bianfeng.ymnsdk.feature.YmnProperties.NAMES
            int r2 = r1.length
            if (r0 >= r2) goto L1d
            java.util.List<?>[] r2 = r3.namesArray
            r1 = r1[r0]
            java.util.List r1 = java.util.Arrays.asList(r1)
            r2[r0] = r1
            int r0 = r0 + 1
            goto Lb
        L1d:
            return
    }

    public static java.lang.String getPluginValue(com.bianfeng.ymnsdk.feature.protocol.IPlugin r2, java.lang.String r3) {
            org.json.JSONObject r0 = com.bianfeng.ymnsdk.feature.YmnProperties.jsoncfgs
            r1 = 0
            if (r0 == 0) goto L19
            java.lang.String r2 = r2.getPluginName()     // Catch: java.lang.Exception -> L14
            org.json.JSONObject r2 = r0.optJSONObject(r2)     // Catch: java.lang.Exception -> L14
            if (r2 == 0) goto L19
            java.lang.String r2 = r2.optString(r3)     // Catch: java.lang.Exception -> L14
            return r2
        L14:
            r2 = move-exception
            r2.printStackTrace()
            return r1
        L19:
            com.bianfeng.ymnsdk.feature.YmnProperties r2 = com.bianfeng.ymnsdk.feature.YmnProperties.properties
            if (r2 == 0) goto L22
            java.lang.String r2 = r2.getProperty(r3)
            return r2
        L22:
            return r1
    }

    public static java.lang.String getValue(java.lang.String r1) {
            org.json.JSONObject r0 = com.bianfeng.ymnsdk.feature.YmnProperties.jsoncfgs
            if (r0 == 0) goto L9
            java.lang.String r1 = r0.optString(r1)
            return r1
        L9:
            com.bianfeng.ymnsdk.feature.YmnProperties r0 = com.bianfeng.ymnsdk.feature.YmnProperties.properties
            if (r0 == 0) goto L12
            java.lang.String r1 = r0.getProperty(r1)
            return r1
        L12:
            r1 = 0
            return r1
    }

    private java.lang.String getValue(java.util.List<?> r3) {
            r2 = this;
            java.util.Iterator r3 = r3.iterator()
        L4:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1d
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r0 = super.getProperty(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4
            return r0
        L1d:
            r3 = 0
            return r3
    }

    public static void init(android.content.Context r4) {
            java.lang.String r0 = "usdk.cfg"
            java.lang.String r1 = "ymn.cfg"
            android.content.res.AssetManager r2 = r4.getAssets()     // Catch: java.lang.Exception -> L4b
            boolean r3 = com.bianfeng.ymnsdk.util.ResourceUtil.assetFileExist(r4, r1)     // Catch: java.lang.Exception -> L4b
            if (r3 == 0) goto L1f
            java.io.InputStream r1 = r2.open(r1)     // Catch: java.lang.Exception -> L4b
            byte[] r1 = com.bianfeng.ymnsdk.util.ResourceUtil.InputStreamToByte(r1)     // Catch: java.lang.Exception -> L4b
            com.bianfeng.ymnsdk.util.security.SecurityUtil r3 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: java.lang.Exception -> L4b
            byte[] r1 = r3.decode(r1)     // Catch: java.lang.Exception -> L4b
            goto L20
        L1f:
            r1 = 0
        L20:
            boolean r4 = com.bianfeng.ymnsdk.util.ResourceUtil.assetFileExist(r4, r0)     // Catch: java.lang.Exception -> L4b
            if (r4 == 0) goto L2e
            java.io.InputStream r4 = r2.open(r0)     // Catch: java.lang.Exception -> L4b
            byte[] r1 = com.bianfeng.ymnsdk.util.ResourceUtil.InputStreamToByte(r4)     // Catch: java.lang.Exception -> L4b
        L2e:
            r4 = 1
            if (r1 == 0) goto L33
            r0 = 1
            goto L34
        L33:
            r0 = 0
        L34:
            if (r0 == 0) goto L40
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L4b
            r0.<init>(r1)     // Catch: java.lang.Exception -> L4b
            boolean r0 = readAsJson(r0)     // Catch: java.lang.Exception -> L4b
            r0 = r0 ^ r4
        L40:
            if (r0 == 0) goto L4f
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L4b
            r4.<init>(r1)     // Catch: java.lang.Exception -> L4b
            readAsProperties(r4)     // Catch: java.lang.Exception -> L4b
            goto L4f
        L4b:
            r4 = move-exception
            r4.printStackTrace()
        L4f:
            return
    }

    private static boolean readAsJson(java.lang.String r1) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L9
            r0.<init>(r1)     // Catch: org.json.JSONException -> L9
            com.bianfeng.ymnsdk.feature.YmnProperties.jsoncfgs = r0     // Catch: org.json.JSONException -> L9
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    private static boolean readAsProperties(java.lang.String r2) {
            com.bianfeng.ymnsdk.feature.YmnProperties r0 = new com.bianfeng.ymnsdk.feature.YmnProperties     // Catch: java.io.IOException -> L13
            r0.<init>()     // Catch: java.io.IOException -> L13
            com.bianfeng.ymnsdk.feature.YmnProperties.properties = r0     // Catch: java.io.IOException -> L13
            com.bianfeng.ymnsdk.feature.YmnProperties r0 = com.bianfeng.ymnsdk.feature.YmnProperties.properties     // Catch: java.io.IOException -> L13
            java.io.StringReader r1 = new java.io.StringReader     // Catch: java.io.IOException -> L13
            r1.<init>(r2)     // Catch: java.io.IOException -> L13
            r0.load(r1)     // Catch: java.io.IOException -> L13
            r2 = 1
            return r2
        L13:
            r2 = 0
            return r2
    }

    @Override
    public java.lang.String getProperty(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = super.getProperty(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lf
            java.lang.String r4 = r0.trim()
            return r4
        Lf:
            r1 = 0
        L10:
            java.lang.String[][] r2 = com.bianfeng.ymnsdk.feature.YmnProperties.NAMES
            int r2 = r2.length
            if (r1 >= r2) goto L2b
            java.util.List<?>[] r2 = r3.namesArray
            r2 = r2[r1]
            boolean r2 = r2.contains(r4)
            if (r2 == 0) goto L28
            java.util.List<?>[] r4 = r3.namesArray
            r4 = r4[r1]
            java.lang.String r4 = r3.getValue(r4)
            return r4
        L28:
            int r1 = r1 + 1
            goto L10
        L2b:
            return r0
    }
}
