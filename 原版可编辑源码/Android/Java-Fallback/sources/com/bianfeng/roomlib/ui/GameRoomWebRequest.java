package com.bianfeng.roomlib.ui;

public class GameRoomWebRequest {



    public GameRoomWebRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void startRequestWeb(android.app.Activity r5, java.util.TreeMap<java.lang.String, java.lang.String> r6, com.bianfeng.roomlib.ui.WebCallBack r7) {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "GameRoomWebRequest startRequestWeb=="
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "params"
            java.lang.Object r2 = r6.get(r2)     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L48
            r1.<init>(r2)     // Catch: java.lang.Exception -> L48
            java.util.Iterator r2 = r1.keys()     // Catch: java.lang.Exception -> L48
        L2e:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L48
            if (r3 == 0) goto L4c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L48
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L48
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L48
            goto L2e
        L48:
            r1 = move-exception
            r1.printStackTrace()
        L4c:
            java.lang.String r1 = "secret"
            java.lang.Object r1 = r6.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "true"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L69
            com.bianfeng.utilslib.SignMd5Utils r1 = com.bianfeng.utilslib.UtilsSdk.getSignMd5()
            java.lang.String r1 = r1.getMd5(r0)
            java.lang.String r2 = "sign"
            r0.put(r2, r1)
        L69:
            com.bianfeng.roomlib.action.GameRoomAction r1 = new com.bianfeng.roomlib.action.GameRoomAction
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r1.<init>(r0, r2)
            java.lang.String r0 = "method"
            java.lang.Object r6 = r6.get(r0)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r0 = "get"
            boolean r6 = r6.equalsIgnoreCase(r0)
            if (r6 == 0) goto L89
            com.bianfeng.roomlib.ui.GameRoomWebRequest$1 r6 = new com.bianfeng.roomlib.ui.GameRoomWebRequest$1
            r6.<init>(r5, r7)
            r1.startActionGet(r6)
            goto L91
        L89:
            com.bianfeng.roomlib.ui.GameRoomWebRequest$2 r6 = new com.bianfeng.roomlib.ui.GameRoomWebRequest$2
            r6.<init>(r5, r7)
            r1.startActionPost(r6)
        L91:
            return
    }
}
