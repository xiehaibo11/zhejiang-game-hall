package com.bianfeng.ymnsdk.hostaction;

public class YmnURLManagerV2 {
    public static boolean config_has_get_fail = false;
    public static int get_url_times = 0;
    public static java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> hostMap = null;
    public static java.lang.String isGain = "false";
    public static boolean login_has_get_fail = false;
    static android.content.Context mContext = null;
    public static java.lang.String nowType = "sdk_config|a";
    public static boolean trade_has_get_fail = false;
    public static boolean ymn_has_get_fail = false;

    class a implements com.bianfeng.ymnsdk.action.HttpListener {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onComplete(java.lang.String r7) {
                r6 = this;
                java.lang.String r0 = "ymn"
                java.lang.String r1 = "sdk_config"
                java.lang.String r2 = "trade"
                java.lang.String r3 = "login"
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = "获取到的："
                r4.append(r5)
                r4.append(r7)
                java.lang.String r4 = r4.toString()
                com.bianfeng.ymnsdk.util.Logger.i(r4)
                org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9c
                r4.<init>(r7)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = "data"
                java.lang.String r7 = r4.optString(r7)     // Catch: java.lang.Exception -> L9c
                org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9c
                r4.<init>(r7)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r4.optString(r3)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r5 = r5.get(r3)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r5)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r4.optString(r2)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r5)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r4.optString(r1)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r5 = r5.get(r1)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r5)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r4.optString(r0)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r4)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = "true"
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain = r7     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHostType()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r7 = r7.get(r3)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L9c
                r7.resetUseable()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r7 = r7.get(r2)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L9c
                r7.resetUseable()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L9c
                r7.resetUseable()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r7 = r7.get(r0)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L9c
                r7.resetUseable()     // Catch: java.lang.Exception -> L9c
                goto La0
            L9c:
                r7 = move-exception
                r7.printStackTrace()
            La0:
                return
        }

        @Override
        public void onError(int r5, java.lang.String r6) {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "获取host失败|"
                r0.append(r1)
                r0.append(r5)
                java.lang.String r5 = "|"
                r0.append(r5)
                r0.append(r6)
                java.lang.String r5 = r0.toString()
                com.bianfeng.ymnsdk.util.Logger.i(r5)
                java.lang.String r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
                int r6 = r5.hashCode()
                r0 = 2
                r1 = 3
                r2 = 1
                r3 = 0
                switch(r6) {
                    case -1683595124: goto L48;
                    case -1683595123: goto L3e;
                    case -1683595122: goto L34;
                    case -1683595121: goto L2a;
                    default: goto L29;
                }
            L29:
                goto L52
            L2a:
                java.lang.String r6 = "sdk_config|d"
                boolean r5 = r5.equals(r6)
                if (r5 == 0) goto L52
                r5 = 3
                goto L53
            L34:
                java.lang.String r6 = "sdk_config|c"
                boolean r5 = r5.equals(r6)
                if (r5 == 0) goto L52
                r5 = 2
                goto L53
            L3e:
                java.lang.String r6 = "sdk_config|b"
                boolean r5 = r5.equals(r6)
                if (r5 == 0) goto L52
                r5 = 1
                goto L53
            L48:
                java.lang.String r6 = "sdk_config|a"
                boolean r5 = r5.equals(r6)
                if (r5 == 0) goto L52
                r5 = 0
                goto L53
            L52:
                r5 = -1
            L53:
                java.lang.String r6 = "sdk_config"
                if (r5 == 0) goto La0
                if (r5 == r2) goto L8a
                if (r5 == r0) goto L74
                if (r5 == r1) goto L5e
                goto Lb5
            L5e:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
                java.lang.Object r5 = r5.get(r6)
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
                java.util.List r5 = r5.getRequestEntityList()
                java.lang.Object r5 = r5.get(r1)
                com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
                r5.setCan_useful(r3)
                goto Lb5
            L74:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
                java.lang.Object r5 = r5.get(r6)
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
                java.util.List r5 = r5.getRequestEntityList()
                java.lang.Object r5 = r5.get(r0)
                com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
                r5.setCan_useful(r3)
                goto Lb5
            L8a:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
                java.lang.Object r5 = r5.get(r6)
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
                java.util.List r5 = r5.getRequestEntityList()
                java.lang.Object r5 = r5.get(r2)
                com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
                r5.setCan_useful(r3)
                goto Lb5
            La0:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
                java.lang.Object r5 = r5.get(r6)
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
                java.util.List r5 = r5.getRequestEntityList()
                java.lang.Object r5 = r5.get(r3)
                com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
                r5.setCan_useful(r3)
            Lb5:
                r5 = 0
            Lb6:
                r0 = 4
                if (r3 >= r0) goto Ld4
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
                java.lang.Object r0 = r0.get(r6)
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
                java.util.List r0 = r0.getRequestEntityList()
                java.lang.Object r0 = r0.get(r3)
                com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
                boolean r0 = r0.can_useful
                if (r0 != 0) goto Ld1
                int r5 = r5 + 1
            Ld1:
                int r3 = r3 + 1
                goto Lb6
            Ld4:
                if (r5 <= r1) goto Ldb
                android.content.Context r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.gainHost(r5)
            Ldb:
                return
        }
    }

    static {
            return
    }

    public YmnURLManagerV2() {
            r0 = this;
            r0.<init>()
            return
    }

    static void changeLoaclUrl(org.json.JSONObject r13) {
            java.lang.String r0 = "server_b_weight"
            java.lang.String r1 = "server_b"
            java.lang.String r2 = "server_a_weight"
            java.lang.String r3 = "server_a"
            java.lang.String r4 = "ymn"
            java.lang.String r5 = "sdk_config"
            java.lang.String r6 = "trade"
            java.lang.String r7 = "login"
            java.lang.String r8 = r13.optString(r7)     // Catch: java.lang.Exception -> L1b7
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b7
            r9.<init>(r8)     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r8 = r8.get(r7)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L1b7
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            r10 = 0
            java.lang.Object r8 = r8.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Exception -> L1b7
            java.lang.String r11 = r9.optString(r3)     // Catch: java.lang.Exception -> L1b7
            r8.url = r11     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r8 = r8.get(r7)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L1b7
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r8 = r8.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Exception -> L1b7
            int r11 = r9.optInt(r2)     // Catch: java.lang.Exception -> L1b7
            r8.weight = r11     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r8 = r8.get(r7)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L1b7
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            r11 = 1
            java.lang.Object r8 = r8.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Exception -> L1b7
            java.lang.String r12 = r9.optString(r1)     // Catch: java.lang.Exception -> L1b7
            r8.url = r12     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r8.get(r7)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L1b7
            java.util.List r7 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r7.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7     // Catch: java.lang.Exception -> L1b7
            int r8 = r9.optInt(r0)     // Catch: java.lang.Exception -> L1b7
            r7.weight = r8     // Catch: java.lang.Exception -> L1b7
            java.lang.String r7 = r13.optString(r6)     // Catch: java.lang.Exception -> L1b7
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b7
            r8.<init>(r7)     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L1b7
            java.util.List r7 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r7.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7     // Catch: java.lang.Exception -> L1b7
            java.lang.String r9 = r8.optString(r3)     // Catch: java.lang.Exception -> L1b7
            r7.url = r9     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L1b7
            java.util.List r7 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r7.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7     // Catch: java.lang.Exception -> L1b7
            int r9 = r8.optInt(r2)     // Catch: java.lang.Exception -> L1b7
            r7.weight = r9     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L1b7
            java.util.List r7 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r7 = r7.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7     // Catch: java.lang.Exception -> L1b7
            java.lang.String r9 = r8.optString(r1)     // Catch: java.lang.Exception -> L1b7
            r7.url = r9     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r7.get(r6)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6     // Catch: java.lang.Exception -> L1b7
            java.util.List r6 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r6.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6     // Catch: java.lang.Exception -> L1b7
            int r7 = r8.optInt(r0)     // Catch: java.lang.Exception -> L1b7
            r6.weight = r7     // Catch: java.lang.Exception -> L1b7
            java.lang.String r6 = r13.optString(r5)     // Catch: java.lang.Exception -> L1b7
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b7
            r7.<init>(r6)     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6     // Catch: java.lang.Exception -> L1b7
            java.util.List r6 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r6.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6     // Catch: java.lang.Exception -> L1b7
            java.lang.String r8 = r7.optString(r3)     // Catch: java.lang.Exception -> L1b7
            r6.url = r8     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6     // Catch: java.lang.Exception -> L1b7
            java.util.List r6 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r6.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6     // Catch: java.lang.Exception -> L1b7
            int r8 = r7.optInt(r2)     // Catch: java.lang.Exception -> L1b7
            r6.weight = r8     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6     // Catch: java.lang.Exception -> L1b7
            java.util.List r6 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r6 = r6.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6     // Catch: java.lang.Exception -> L1b7
            java.lang.String r8 = r7.optString(r1)     // Catch: java.lang.Exception -> L1b7
            r6.url = r8     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r5 = r6.get(r5)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5     // Catch: java.lang.Exception -> L1b7
            java.util.List r5 = r5.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r5 = r5.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5     // Catch: java.lang.Exception -> L1b7
            int r6 = r7.optInt(r0)     // Catch: java.lang.Exception -> L1b7
            r5.weight = r6     // Catch: java.lang.Exception -> L1b7
            java.lang.String r13 = r13.optString(r4)     // Catch: java.lang.Exception -> L1b7
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b7
            r5.<init>(r13)     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r13 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r4)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r13     // Catch: java.lang.Exception -> L1b7
            java.util.List r13 = r13.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r13     // Catch: java.lang.Exception -> L1b7
            java.lang.String r3 = r5.optString(r3)     // Catch: java.lang.Exception -> L1b7
            r13.url = r3     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r13 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r4)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r13     // Catch: java.lang.Exception -> L1b7
            java.util.List r13 = r13.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r10)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r13     // Catch: java.lang.Exception -> L1b7
            int r2 = r5.optInt(r2)     // Catch: java.lang.Exception -> L1b7
            r13.weight = r2     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r13 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r4)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r13     // Catch: java.lang.Exception -> L1b7
            java.util.List r13 = r13.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r13     // Catch: java.lang.Exception -> L1b7
            java.lang.String r1 = r5.optString(r1)     // Catch: java.lang.Exception -> L1b7
            r13.url = r1     // Catch: java.lang.Exception -> L1b7
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r13 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r4)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r13     // Catch: java.lang.Exception -> L1b7
            java.util.List r13 = r13.getRequestEntityList()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r13 = r13.get(r11)     // Catch: java.lang.Exception -> L1b7
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r13     // Catch: java.lang.Exception -> L1b7
            int r0 = r5.optInt(r0)     // Catch: java.lang.Exception -> L1b7
            r13.weight = r0     // Catch: java.lang.Exception -> L1b7
            goto L1bb
        L1b7:
            r13 = move-exception
            r13.printStackTrace()
        L1bb:
            return
    }

    public static void gainHost(android.content.Context r3) {
            java.lang.String r0 = "服务请求"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext = r3
            java.lang.String r0 = getHostUrl()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "failed"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L14
            return
        L14:
            com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1 = new com.bianfeng.ymnsdk.hostaction.HostHttpHelper
            r1.<init>(r3)
            r3 = 1
            r1.setMethod(r3)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2$a r3 = new com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2$a
            r3.<init>()
            java.lang.String r2 = ""
            r1.request(r0, r2, r3)
        L27:
            return
    }

    public static synchronized java.lang.String getHost(java.lang.String r8) {
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.class
            monitor-enter(r0)
            java.lang.String r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain     // Catch: java.lang.Throwable -> L139
            java.lang.String r2 = "true"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L139
            r2 = 3
            r3 = 0
            if (r1 == 0) goto L15
            int r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times     // Catch: java.lang.Throwable -> L139
            if (r1 < r2) goto L15
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r3     // Catch: java.lang.Throwable -> L139
        L15:
            java.lang.String r1 = getLoaclHost(r8)     // Catch: java.lang.Throwable -> L139
            java.lang.String r4 = "failed"
            boolean r4 = r1.equals(r4)     // Catch: java.lang.Throwable -> L139
            if (r4 != 0) goto L32
            boolean r4 = r1.isEmpty()     // Catch: java.lang.Throwable -> L139
            if (r4 == 0) goto L28
            goto L32
        L28:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.login_has_get_fail = r3     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.trade_has_get_fail = r3     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.ymn_has_get_fail = r3     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.config_has_get_fail = r3     // Catch: java.lang.Throwable -> L139
            goto Lf7
        L32:
            r1 = -1
            int r4 = r8.hashCode()     // Catch: java.lang.Throwable -> L139
            r5 = 119770(0x1d3da, float:1.67834E-40)
            r6 = 2
            r7 = 1
            if (r4 == r5) goto L6c
            r5 = 103149417(0x625ef69, float:3.1208942E-35)
            if (r4 == r5) goto L62
            r5 = 110621028(0x697f164, float:5.715458E-35)
            if (r4 == r5) goto L58
            r5 = 1669754599(0x63866ee7, float:4.95971E21)
            if (r4 == r5) goto L4e
            goto L75
        L4e:
            java.lang.String r4 = "sdk_config"
            boolean r8 = r8.equals(r4)     // Catch: java.lang.Throwable -> L139
            if (r8 == 0) goto L75
            r1 = 3
            goto L75
        L58:
            java.lang.String r4 = "trade"
            boolean r8 = r8.equals(r4)     // Catch: java.lang.Throwable -> L139
            if (r8 == 0) goto L75
            r1 = 1
            goto L75
        L62:
            java.lang.String r4 = "login"
            boolean r8 = r8.equals(r4)     // Catch: java.lang.Throwable -> L139
            if (r8 == 0) goto L75
            r1 = 0
            goto L75
        L6c:
            java.lang.String r4 = "ymn"
            boolean r8 = r8.equals(r4)     // Catch: java.lang.Throwable -> L139
            if (r8 == 0) goto L75
            r1 = 2
        L75:
            if (r1 == 0) goto Ldf
            if (r1 == r7) goto Lc6
            if (r1 == r6) goto Lad
            if (r1 == r2) goto L94
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = "sdk_config"
            java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Throwable -> L139
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Throwable -> L139
            java.lang.Object r8 = r8.get(r3)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = r8.url     // Catch: java.lang.Throwable -> L139
            goto Lf7
        L94:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.config_has_get_fail = r7     // Catch: java.lang.Throwable -> L139
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = "sdk_config"
            java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Throwable -> L139
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Throwable -> L139
            java.lang.Object r8 = r8.get(r3)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = r8.url     // Catch: java.lang.Throwable -> L139
            goto Lf7
        Lad:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.ymn_has_get_fail = r7     // Catch: java.lang.Throwable -> L139
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = "ymn"
            java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Throwable -> L139
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Throwable -> L139
            java.lang.Object r8 = r8.get(r3)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = r8.url     // Catch: java.lang.Throwable -> L139
            goto Lf7
        Lc6:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.trade_has_get_fail = r7     // Catch: java.lang.Throwable -> L139
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = "trade"
            java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Throwable -> L139
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Throwable -> L139
            java.lang.Object r8 = r8.get(r3)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = r8.url     // Catch: java.lang.Throwable -> L139
            goto Lf7
        Ldf:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.login_has_get_fail = r7     // Catch: java.lang.Throwable -> L139
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = "login"
            java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Throwable -> L139
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Throwable -> L139
            java.lang.Object r8 = r8.get(r3)     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = r8.url     // Catch: java.lang.Throwable -> L139
        Lf7:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L139
            r8.<init>()     // Catch: java.lang.Throwable -> L139
            java.lang.String r2 = "require host is1"
            r8.append(r2)     // Catch: java.lang.Throwable -> L139
            r8.append(r1)     // Catch: java.lang.Throwable -> L139
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.util.Logger.i(r8)     // Catch: java.lang.Throwable -> L139
            android.content.Context r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext     // Catch: java.lang.Throwable -> L139
            java.lang.String r2 = "SP_YMN_CHANGE_HOST"
            android.content.SharedPreferences r8 = r8.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L139
            java.lang.String r2 = "SP_YMN_CHANGE_HOST"
            java.lang.String r3 = ""
            java.lang.String r8 = r8.getString(r2, r3)     // Catch: java.lang.Throwable -> L139
            boolean r2 = r8.isEmpty()     // Catch: java.lang.Throwable -> L139
            if (r2 != 0) goto L122
            goto L123
        L122:
            r8 = r1
        L123:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L139
            r1.<init>()     // Catch: java.lang.Throwable -> L139
            java.lang.String r2 = "require host is2 "
            r1.append(r2)     // Catch: java.lang.Throwable -> L139
            r1.append(r8)     // Catch: java.lang.Throwable -> L139
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L139
            com.bianfeng.ymnsdk.util.Logger.i(r1)     // Catch: java.lang.Throwable -> L139
            monitor-exit(r0)
            return r8
        L139:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    private static java.lang.String getHostUrl() throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r1 = "sdk_config"
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            r2 = 0
            java.lang.Object r0 = r0.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            boolean r0 = r0.can_useful
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r3 = r3.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
            java.util.List r3 = r3.getRequestEntityList()
            r4 = 1
            java.lang.Object r3 = r3.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            boolean r3 = r3.can_useful
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r5 = r5.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
            java.util.List r5 = r5.getRequestEntityList()
            r6 = 2
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            boolean r5 = r5.can_useful
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r7 = r7.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7
            java.util.List r7 = r7.getRequestEntityList()
            r8 = 3
            java.lang.Object r7 = r7.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7
            boolean r7 = r7.can_useful
            if (r0 == 0) goto L5b
            if (r3 == 0) goto L5b
            goto La5
        L5b:
            if (r0 == 0) goto L69
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.setFormal_index(r2)
            goto La5
        L69:
            if (r3 == 0) goto L77
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.setFormal_index(r4)
            goto La5
        L77:
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain
            java.lang.String r3 = "true"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto La5
            if (r5 == 0) goto L86
            if (r7 == 0) goto L86
            goto La6
        L86:
            if (r5 == 0) goto L94
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.setFormal_index(r6)
            goto La6
        L94:
            if (r7 == 0) goto La2
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.setFormal_index(r8)
            goto La6
        La2:
            java.lang.String r0 = "failed"
            return r0
        La5:
            r2 = 1
        La6:
            java.lang.String r0 = "|"
            if (r2 == 0) goto L11f
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r2 = r2.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2
            java.util.List r2 = r2.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r3 = r3.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
            int r3 = r3.getFormal_index()
            java.lang.Object r2 = r2.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2
            java.lang.String r2 = r2.url
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            java.util.List r4 = r4.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r5 = r5.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
            int r5 = r5.getFormal_index()
            java.lang.Object r4 = r4.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.type
            r3.append(r4)
            r3.append(r0)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r4.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            int r1 = r1.getFormal_index()
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType = r0
            goto L193
        L11f:
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r2 = r2.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2
            java.util.List r2 = r2.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r3 = r3.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
            int r3 = r3.getSpare_index()
            java.lang.Object r2 = r2.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2
            java.lang.String r2 = r2.url
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            java.util.List r4 = r4.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r5 = r5.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
            int r5 = r5.getSpare_index()
            java.lang.Object r4 = r4.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.type
            r3.append(r4)
            r3.append(r0)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r4.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            int r1 = r1.getSpare_index()
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType = r0
        L193:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            java.lang.String r3 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r4 = com.bianfeng.ymnsdk.util.YmnAppContext.getChannelId()
            java.lang.String r5 = "unknow"
            java.lang.String r6 = "0"
            if (r0 == 0) goto L1b9
            java.lang.String r7 = r0.toLowerCase()
            boolean r7 = r7.equals(r5)
            if (r7 != 0) goto L1b9
            boolean r7 = r0.isEmpty()
            if (r7 == 0) goto L1ba
        L1b9:
            r0 = r6
        L1ba:
            if (r1 == 0) goto L1cc
            java.lang.String r7 = r1.toLowerCase()
            boolean r7 = r7.equals(r5)
            if (r7 != 0) goto L1cc
            boolean r7 = r1.isEmpty()
            if (r7 == 0) goto L1cd
        L1cc:
            r1 = r6
        L1cd:
            if (r3 == 0) goto L1df
            java.lang.String r7 = r3.toLowerCase()
            boolean r7 = r7.equals(r5)
            if (r7 != 0) goto L1df
            boolean r7 = r3.isEmpty()
            if (r7 == 0) goto L1e0
        L1df:
            r3 = r6
        L1e0:
            if (r4 == 0) goto L1f2
            java.lang.String r7 = r4.toLowerCase()
            boolean r5 = r7.equals(r5)
            if (r5 != 0) goto L1f2
            boolean r5 = r4.isEmpty()
            if (r5 == 0) goto L1f3
        L1f2:
            r4 = r6
        L1f3:
            java.lang.String r5 = com.bianfeng.ymnsdk.hostaction.HostUtils.getSign(r0, r1, r3, r4)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r2)
            java.lang.String r2 = "/server_list/"
            r6.append(r2)
            r6.append(r0)
            java.lang.String r0 = "/"
            r6.append(r0)
            r6.append(r1)
            r6.append(r0)
            r6.append(r3)
            r6.append(r0)
            r6.append(r4)
            r6.append(r0)
            r6.append(r5)
            java.lang.String r0 = ".json"
            r6.append(r0)
            java.lang.String r0 = r6.toString()
            return r0
    }

    private static java.lang.String getLoaclHost(java.lang.String r8) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            boolean r8 = com.bianfeng.ymnsdk.hostaction.HostUtils.judgeHost(r1, r8)
            java.lang.String r1 = "failed"
            java.lang.String r2 = "|"
            r3 = 0
            java.lang.String r4 = ""
            if (r8 == 0) goto L138
            java.lang.String r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain
            java.lang.String r5 = "true"
            boolean r8 = r8.equals(r5)
            if (r8 == 0) goto L138
            java.util.List r8 = r0.getRequestEntityList()
            r5 = 2
            java.lang.Object r8 = r8.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            boolean r8 = r8.can_useful
            java.util.List r6 = r0.getRequestEntityList()
            r7 = 3
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            boolean r6 = r6.can_useful
            if (r8 == 0) goto L97
            if (r6 == 0) goto L97
            java.util.List r8 = r0.getRequestEntityList()
            int r1 = r0.getSpare_index()
            java.lang.Object r8 = r8.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r1 = r8.url
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.util.List r3 = r0.getRequestEntityList()
            int r4 = r0.getSpare_index()
            java.lang.Object r3 = r3.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            java.lang.String r3 = r3.type
            r8.append(r3)
            r8.append(r2)
            java.util.List r2 = r0.getRequestEntityList()
            int r0 = r0.getSpare_index()
            java.lang.Object r0 = r2.get(r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r8.append(r0)
            java.lang.String r4 = r8.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "require host is3"
            r8.append(r0)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r8)
            goto L24a
        L97:
            if (r8 == 0) goto Le5
            java.util.List r8 = r0.getRequestEntityList()
            java.lang.Object r8 = r8.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r1 = r8.url
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.util.List r3 = r0.getRequestEntityList()
            java.lang.Object r3 = r3.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            java.lang.String r3 = r3.type
            r8.append(r3)
            r8.append(r2)
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r8.append(r0)
            java.lang.String r4 = r8.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "require host is4"
            r8.append(r0)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r8)
            goto L24a
        Le5:
            if (r6 == 0) goto L133
            java.util.List r8 = r0.getRequestEntityList()
            java.lang.Object r8 = r8.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r1 = r8.url
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.util.List r3 = r0.getRequestEntityList()
            java.lang.Object r3 = r3.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            java.lang.String r3 = r3.type
            r8.append(r3)
            r8.append(r2)
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r8.append(r0)
            java.lang.String r4 = r8.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "require host is5"
            r8.append(r0)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r8)
            goto L24a
        L133:
            r0.setSpare_can_useful(r3)
            goto L24a
        L138:
            java.util.List r8 = r0.getRequestEntityList()
            java.lang.Object r8 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            boolean r8 = r8.can_useful
            java.util.List r5 = r0.getRequestEntityList()
            r6 = 1
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            boolean r5 = r5.can_useful
            if (r8 == 0) goto L1ad
            if (r5 == 0) goto L1ad
            java.util.List r8 = r0.getRequestEntityList()
            int r1 = r0.getFormal_index()
            java.lang.Object r8 = r8.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r1 = r8.url
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.util.List r3 = r0.getRequestEntityList()
            int r4 = r0.getFormal_index()
            java.lang.Object r3 = r3.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            java.lang.String r3 = r3.type
            r8.append(r3)
            r8.append(r2)
            java.util.List r2 = r0.getRequestEntityList()
            int r0 = r0.getFormal_index()
            java.lang.Object r0 = r2.get(r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r8.append(r0)
            java.lang.String r4 = r8.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "require host is6"
            r8.append(r0)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r8)
            goto L24a
        L1ad:
            if (r8 == 0) goto L1fa
            java.util.List r8 = r0.getRequestEntityList()
            java.lang.Object r8 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r1 = r8.url
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.util.List r4 = r0.getRequestEntityList()
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.type
            r8.append(r4)
            r8.append(r2)
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r8.append(r0)
            java.lang.String r4 = r8.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "require host is7"
            r8.append(r0)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r8)
            goto L24a
        L1fa:
            if (r5 == 0) goto L247
            java.util.List r8 = r0.getRequestEntityList()
            java.lang.Object r8 = r8.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r1 = r8.url
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.util.List r3 = r0.getRequestEntityList()
            java.lang.Object r3 = r3.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            java.lang.String r3 = r3.type
            r8.append(r3)
            r8.append(r2)
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            java.lang.String r0 = r0.port
            r8.append(r0)
            java.lang.String r4 = r8.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "require host is8"
            r8.append(r0)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r8)
            goto L24a
        L247:
            r0.setFormal_can_useful(r3)
        L24a:
            boolean r8 = r4.isEmpty()
            if (r8 != 0) goto L252
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType = r4
        L252:
            return r1
    }

    public static void init(android.content.Context r0) {
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext = r0
            initEntity()
            readDefaultHost(r0)
            pullData(r0)
            return
    }

    public static void initEntity() {
            r0 = 0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r0
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            android.content.Context r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r1 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r1)
            java.lang.String r2 = "loginEntityList"
            java.lang.String r1 = r1.readData(r2)
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L7d
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r1.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r9 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r3 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_A
            int r6 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_A_WERIGHT
            r7 = 0
            r8 = 1
            java.lang.String r4 = "login"
            java.lang.String r5 = "a"
            r2 = r9
            r2.<init>(r3, r4, r5, r6, r7, r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r11 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_B
            int r14 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_B_WERIGHT
            r15 = 0
            r16 = 1
            java.lang.String r12 = "login"
            java.lang.String r13 = "b"
            r10 = r2
            r10.<init>(r11, r12, r13, r14, r15, r16)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r21 = 1
            r22 = 0
            r23 = 1
            java.lang.String r18 = ""
            java.lang.String r19 = "login"
            java.lang.String r20 = "c"
            r17 = r3
            r17.<init>(r18, r19, r20, r21, r22, r23)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r14 = 1
            java.lang.String r11 = ""
            java.lang.String r12 = "login"
            java.lang.String r13 = "d"
            r10 = r4
            r10.<init>(r11, r12, r13, r14, r15, r16)
            java.util.List r5 = r1.getRequestEntityList()
            r5.add(r9)
            java.util.List r5 = r1.getRequestEntityList()
            r5.add(r2)
            java.util.List r2 = r1.getRequestEntityList()
            r2.add(r3)
            java.util.List r2 = r1.getRequestEntityList()
            r2.add(r4)
            goto L8f
        L7d:
            android.content.Context r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r1 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r1)
            java.lang.String r1 = r1.readData(r2)
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.RequestEntityList.class
            java.lang.Object r1 = r0.fromJson(r1, r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
        L8f:
            android.content.Context r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r2 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r2)
            java.lang.String r3 = "tradeEntityList"
            java.lang.String r2 = r2.readData(r3)
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L105
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r2.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r10 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r4 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_A
            int r7 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_A_WERIGHT
            r8 = 0
            r9 = 1
            java.lang.String r5 = "trade"
            java.lang.String r6 = "a"
            r3 = r10
            r3.<init>(r4, r5, r6, r7, r8, r9)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r12 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_B
            int r15 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_B_WERIGHT
            r16 = 0
            r17 = 1
            java.lang.String r13 = "trade"
            java.lang.String r14 = "b"
            r11 = r3
            r11.<init>(r12, r13, r14, r15, r16, r17)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r22 = 1
            r23 = 0
            r24 = 1
            java.lang.String r19 = ""
            java.lang.String r20 = "trade"
            java.lang.String r21 = "c"
            r18 = r4
            r18.<init>(r19, r20, r21, r22, r23, r24)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r15 = 1
            java.lang.String r12 = ""
            java.lang.String r13 = "trade"
            java.lang.String r14 = "d"
            r11 = r5
            r11.<init>(r12, r13, r14, r15, r16, r17)
            java.util.List r6 = r2.getRequestEntityList()
            r6.add(r10)
            java.util.List r6 = r2.getRequestEntityList()
            r6.add(r3)
            java.util.List r3 = r2.getRequestEntityList()
            r3.add(r4)
            java.util.List r3 = r2.getRequestEntityList()
            r3.add(r5)
            goto L117
        L105:
            android.content.Context r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r2 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r2)
            java.lang.String r2 = r2.readData(r3)
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.RequestEntityList.class
            java.lang.Object r2 = r0.fromJson(r2, r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2
        L117:
            android.content.Context r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r3 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r3)
            java.lang.String r4 = "configEntityList"
            java.lang.String r3 = r3.readData(r4)
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L18e
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r3.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r11 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r5 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_A
            int r8 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT
            r9 = 0
            r10 = 1
            java.lang.String r6 = "sdk_config"
            java.lang.String r7 = "a"
            r4 = r11
            r4.<init>(r5, r6, r7, r8, r9, r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r13 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_B
            int r16 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT
            r17 = 0
            r18 = 1
            java.lang.String r14 = "sdk_config"
            java.lang.String r15 = "b"
            r12 = r4
            r12.<init>(r13, r14, r15, r16, r17, r18)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r23 = 1
            r24 = 0
            r25 = 1
            java.lang.String r20 = ""
            java.lang.String r21 = "sdk_config"
            java.lang.String r22 = "c"
            r19 = r5
            r19.<init>(r20, r21, r22, r23, r24, r25)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r16 = 1
            java.lang.String r13 = ""
            java.lang.String r14 = "sdk_config"
            java.lang.String r15 = "d"
            r12 = r6
            r12.<init>(r13, r14, r15, r16, r17, r18)
            java.util.List r7 = r3.getRequestEntityList()
            r7.add(r11)
            java.util.List r7 = r3.getRequestEntityList()
            r7.add(r4)
            java.util.List r4 = r3.getRequestEntityList()
            r4.add(r5)
            java.util.List r4 = r3.getRequestEntityList()
            r4.add(r6)
            goto L1a0
        L18e:
            android.content.Context r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r3 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r3)
            java.lang.String r3 = r3.readData(r4)
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.RequestEntityList.class
            java.lang.Object r3 = r0.fromJson(r3, r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
        L1a0:
            android.content.Context r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r4 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r4)
            java.lang.String r5 = "sdkEntityList"
            java.lang.String r4 = r4.readData(r5)
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L217
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r0.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r11 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r5 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_A
            int r8 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_A_WERIGHT
            r9 = 0
            r10 = 1
            java.lang.String r6 = "ymn"
            java.lang.String r7 = "a"
            r4 = r11
            r4.<init>(r5, r6, r7, r8, r9, r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r13 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_B
            int r16 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_B_WERIGHT
            r17 = 0
            r18 = 1
            java.lang.String r14 = "ymn"
            java.lang.String r15 = "b"
            r12 = r4
            r12.<init>(r13, r14, r15, r16, r17, r18)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r23 = 1
            r24 = 0
            r25 = 1
            java.lang.String r20 = ""
            java.lang.String r21 = "ymn"
            java.lang.String r22 = "c"
            r19 = r5
            r19.<init>(r20, r21, r22, r23, r24, r25)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r16 = 1
            java.lang.String r13 = ""
            java.lang.String r14 = "ymn"
            java.lang.String r15 = "d"
            r12 = r6
            r12.<init>(r13, r14, r15, r16, r17, r18)
            java.util.List r7 = r0.getRequestEntityList()
            r7.add(r11)
            java.util.List r7 = r0.getRequestEntityList()
            r7.add(r4)
            java.util.List r4 = r0.getRequestEntityList()
            r4.add(r5)
            java.util.List r4 = r0.getRequestEntityList()
            r4.add(r6)
            goto L229
        L217:
            android.content.Context r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r4 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r4)
            java.lang.String r4 = r4.readData(r5)
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.RequestEntityList.class
            java.lang.Object r0 = r0.fromJson(r4, r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
        L229:
            java.util.LinkedHashMap r4 = new java.util.LinkedHashMap
            r4.<init>()
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap = r4
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r5 = "login"
            r4.put(r5, r1)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r4 = "trade"
            r1.put(r4, r2)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r2 = "sdk_config"
            r1.put(r2, r3)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r2 = "ymn"
            r1.put(r2, r0)
            return
    }

    public static void notifyRequestFailure() {
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12e
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            java.lang.String r1 = "\\|"
            java.lang.String[] r0 = r0.split(r1)
            r1 = 0
            r2 = r0[r1]
            r3 = 1
            r0 = r0[r3]
            char r0 = r0.charAt(r1)
            int r0 = r0 + (-97)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            int r5 = r4.getRequested_fail_times()
            if (r5 >= 0) goto L33
            int r0 = r4.getRequested_fail_times()
            int r0 = r0 + r3
            r4.setRequested_fail_times(r0)
            goto L4e
        L33:
            java.util.List r5 = r4.getRequestEntityList()
            java.lang.Object r5 = r5.get(r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            r5.can_useful = r1
            java.util.List r5 = r4.getRequestEntityList()
            java.lang.Object r5 = r5.get(r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            r5.can_useful = r1
            r4.setRequested_fail_times(r0)
        L4e:
            java.util.List r0 = r4.getRequestEntityList()
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            boolean r0 = r0.can_useful
            if (r0 != 0) goto L6d
            java.util.List r0 = r4.getRequestEntityList()
            java.lang.Object r0 = r0.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            boolean r0 = r0.can_useful
            if (r0 != 0) goto L6d
            r4.setFormal_can_useful(r1)
        L6d:
            java.util.List r0 = r4.getRequestEntityList()
            r5 = 2
            java.lang.Object r0 = r0.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            boolean r0 = r0.can_useful
            r6 = 3
            if (r0 != 0) goto L8e
            java.util.List r0 = r4.getRequestEntityList()
            java.lang.Object r0 = r0.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            boolean r0 = r0.can_useful
            if (r0 != 0) goto L8e
            r4.setSpare_can_useful(r1)
        L8e:
            boolean r0 = r4.isFormal_can_useful()
            if (r0 != 0) goto L12e
            boolean r0 = r4.isSpare_can_useful()
            if (r0 != 0) goto L12e
            java.lang.String r0 = "false"
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain = r0
            android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            gainHost(r0)
            int r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times
            int r0 = r0 + r3
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r0
            int r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times
            java.lang.String r4 = "ymn"
            java.lang.String r7 = "sdk_config"
            java.lang.String r8 = "trade"
            java.lang.String r9 = "login"
            if (r0 >= r6) goto Le1
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r9)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.resetUseable()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.resetUseable()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.resetUseable()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.resetUseable()
            goto L12e
        Le1:
            r0 = -1
            int r10 = r2.hashCode()
            r11 = 119770(0x1d3da, float:1.67834E-40)
            if (r10 == r11) goto L113
            r4 = 103149417(0x625ef69, float:3.1208942E-35)
            if (r10 == r4) goto L10b
            r1 = 110621028(0x697f164, float:5.715458E-35)
            if (r10 == r1) goto L103
            r1 = 1669754599(0x63866ee7, float:4.95971E21)
            if (r10 == r1) goto Lfb
            goto L11a
        Lfb:
            boolean r1 = r2.equals(r7)
            if (r1 == 0) goto L11a
            r0 = 3
            goto L11a
        L103:
            boolean r1 = r2.equals(r8)
            if (r1 == 0) goto L11a
            r0 = 1
            goto L11a
        L10b:
            boolean r2 = r2.equals(r9)
            if (r2 == 0) goto L11a
            r0 = 0
            goto L11a
        L113:
            boolean r1 = r2.equals(r4)
            if (r1 == 0) goto L11a
            r0 = 2
        L11a:
            if (r0 == 0) goto L12c
            if (r0 == r3) goto L129
            if (r0 == r5) goto L126
            if (r0 == r6) goto L123
            goto L12e
        L123:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.config_has_get_fail = r3
            goto L12e
        L126:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.ymn_has_get_fail = r3
            goto L12e
        L129:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.trade_has_get_fail = r3
            goto L12e
        L12c:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.login_has_get_fail = r3
        L12e:
            return
    }

    public static void notifyRequestSuccess() {
            r0 = 0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r0
            java.lang.String r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L26
            java.lang.String r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            java.lang.String r2 = "\\|"
            java.lang.String[] r1 = r1.split(r2)
            r0 = r1[r0]
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r1.get(r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            int r1 = r0.getRequested_success_times()
            int r1 = r1 + 1
            r0.setRequested_success_times(r1)
        L26:
            return
    }

    private static void pullData(android.content.Context r6) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r1 = "sdk_config"
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            r2 = 0
            java.lang.Object r0 = r0.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            int r0 = r0.weight
            int r0 = r0 * 10000
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r3 = r3.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
            java.util.List r3 = r3.getRequestEntityList()
            java.lang.Object r3 = r3.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            int r3 = r3.weight
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            java.util.List r4 = r4.getRequestEntityList()
            r5 = 1
            java.lang.Object r4 = r4.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            int r4 = r4.weight
            int r3 = r3 + r4
            int r0 = r0 / r3
            boolean r0 = com.bianfeng.ymnsdk.hostaction.HostUtils.getChance(r0)
            if (r0 == 0) goto L56
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.setFormal_index(r2)
            goto L61
        L56:
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            r0.setFormal_index(r5)
        L61:
            gainHost(r6)
            return
    }

    private static void readDefaultHost(android.content.Context r8) {
            java.lang.String r0 = "default_login"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r0)
            java.lang.String r1 = "default_trade"
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r1)
            java.lang.String r2 = "default_config"
            java.lang.String r2 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r2)
            java.lang.String r3 = com.bianfeng.ymnsdk.util.YmnAppContext.getHostUrl()
            r4 = 1
            r5 = 0
            if (r0 == 0) goto L4a
            boolean r6 = r0.isEmpty()
            if (r6 != 0) goto L4a
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r7 = "login"
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.lang.Object r6 = r6.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            r6.url = r0
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.lang.Object r6 = r6.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            r6.url = r0
        L4a:
            if (r1 == 0) goto L7c
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L7c
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r6 = "trade"
            java.lang.Object r0 = r0.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.url = r1
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.url = r1
        L7c:
            if (r2 == 0) goto Lae
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto Lae
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r1 = "sdk_config"
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.url = r2
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.url = r2
        Lae:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto Lde
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r1 = "ymn"
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.url = r3
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            java.util.List r0 = r0.getRequestEntityList()
            java.lang.Object r0 = r0.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.url = r3
        Lde:
            java.lang.String r8 = urlOnSdCard4Public(r8)     // Catch: java.lang.Exception -> L116
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L116
            r0.<init>()     // Catch: java.lang.Exception -> L116
            java.lang.String r1 = "这是本地debug文件："
            r0.append(r1)     // Catch: java.lang.Exception -> L116
            r0.append(r8)     // Catch: java.lang.Exception -> L116
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L116
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L116
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L116
            if (r0 != 0) goto L11a
            boolean r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonObject(r8)     // Catch: java.lang.Exception -> L116
            if (r0 == 0) goto L11a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L116
            r0.<init>(r8)     // Catch: java.lang.Exception -> L116
            java.lang.String r8 = "data"
            java.lang.String r8 = r0.optString(r8)     // Catch: java.lang.Exception -> L116
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L116
            r0.<init>(r8)     // Catch: java.lang.Exception -> L116
            changeLoaclUrl(r0)     // Catch: java.lang.Exception -> L116
            goto L11a
        L116:
            r8 = move-exception
            r8.printStackTrace()
        L11a:
            return
    }

    public static void saveHostList() {
            android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r0)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r2 = "login"
            java.lang.Object r1 = r1.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "loginEntityList"
            r0.putData(r2, r1)
            android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r0)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r2 = "trade"
            java.lang.Object r1 = r1.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "tradeEntityList"
            r0.putData(r2, r1)
            android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r0)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r2 = "sdk_config"
            java.lang.Object r1 = r1.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "configEntityList"
            r0.putData(r2, r1)
            android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r0)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r2 = "ymn"
            java.lang.Object r1 = r1.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ymnEntityList"
            r0.putData(r2, r1)
            android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r0)
            java.lang.String r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            java.lang.String r2 = "nowType"
            r0.putData(r2, r1)
            android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r0 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r0)
            java.lang.String r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain
            java.lang.String r2 = "isGain"
            r0.putData(r2, r1)
            return
    }

    static void setHost(java.lang.String r5, com.bianfeng.ymnsdk.hostaction.RequestEntityList r6) {
            java.lang.String r0 = "request_times"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L7b
            r1.<init>(r5)     // Catch: java.lang.Exception -> L7b
            java.util.List r5 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            r2 = 2
            java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5     // Catch: java.lang.Exception -> L7b
            java.lang.String r3 = "server_a"
            java.lang.String r3 = r1.optString(r3)     // Catch: java.lang.Exception -> L7b
            r5.url = r3     // Catch: java.lang.Exception -> L7b
            java.util.List r5 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            r3 = 3
            java.lang.Object r5 = r5.get(r3)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5     // Catch: java.lang.Exception -> L7b
            java.lang.String r4 = "server_b"
            java.lang.String r4 = r1.optString(r4)     // Catch: java.lang.Exception -> L7b
            r5.url = r4     // Catch: java.lang.Exception -> L7b
            java.util.List r5 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5     // Catch: java.lang.Exception -> L7b
            java.lang.String r4 = "server_a_weight"
            int r4 = r1.optInt(r4)     // Catch: java.lang.Exception -> L7b
            r5.weight = r4     // Catch: java.lang.Exception -> L7b
            java.util.List r5 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r5 = r5.get(r3)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5     // Catch: java.lang.Exception -> L7b
            java.lang.String r4 = "server_b_weight"
            int r4 = r1.optInt(r4)     // Catch: java.lang.Exception -> L7b
            r5.weight = r4     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = "is_mandatory"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Exception -> L7b
            r6.setIs_mandatory(r5)     // Catch: java.lang.Exception -> L7b
            java.util.List r5 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5     // Catch: java.lang.Exception -> L7b
            int r2 = r1.optInt(r0)     // Catch: java.lang.Exception -> L7b
            r5.Request_times = r2     // Catch: java.lang.Exception -> L7b
            java.util.List r5 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r5 = r5.get(r3)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5     // Catch: java.lang.Exception -> L7b
            int r6 = r1.optInt(r0)     // Catch: java.lang.Exception -> L7b
            r5.Request_times = r6     // Catch: java.lang.Exception -> L7b
            goto L7f
        L7b:
            r5 = move-exception
            r5.printStackTrace()
        L7f:
            return
    }

    static void setHostType() {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L8c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            java.util.List r2 = r1.getRequestEntityList()
            r3 = 0
            java.lang.Object r2 = r2.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2
            int r2 = r2.weight
            int r2 = r2 * 10000
            java.util.List r4 = r1.getRequestEntityList()
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            int r4 = r4.weight
            java.util.List r5 = r1.getRequestEntityList()
            r6 = 1
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            int r5 = r5.weight
            int r4 = r4 + r5
            int r2 = r2 / r4
            boolean r2 = com.bianfeng.ymnsdk.hostaction.HostUtils.getChance(r2)
            if (r2 == 0) goto L50
            r1.setFormal_index(r3)
            goto L53
        L50:
            r1.setFormal_index(r6)
        L53:
            java.util.List r2 = r1.getRequestEntityList()
            r3 = 2
            java.lang.Object r2 = r2.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2
            int r2 = r2.weight
            int r2 = r2 * 10000
            java.util.List r4 = r1.getRequestEntityList()
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            int r4 = r4.weight
            java.util.List r5 = r1.getRequestEntityList()
            r6 = 3
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            int r5 = r5.weight
            int r4 = r4 + r5
            int r2 = r2 / r4
            boolean r2 = com.bianfeng.ymnsdk.hostaction.HostUtils.getChance(r2)
            if (r2 == 0) goto L87
            r1.setSpare_index(r3)
            goto La
        L87:
            r1.setSpare_index(r6)
            goto La
        L8c:
            return
    }

    private static java.lang.String urlOnSdCard4Public(android.content.Context r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            boolean r3 = com.bianfeng.ymnsdk.util.ResourceUtil.isSdcardReady()     // Catch: java.lang.Exception -> L3e
            java.lang.String r0 = ""
            if (r3 != 0) goto L9
            return r0
        L9:
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L3e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3e
            r1.<init>()     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = com.bianfeng.ymnsdk.util.ResourceUtil.getSdcardPath()     // Catch: java.lang.Exception -> L3e
            r1.append(r2)     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = ".bftj/sdk/ymnDebug"
            r1.append(r2)     // Catch: java.lang.Exception -> L3e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3e
            r3.<init>(r1)     // Catch: java.lang.Exception -> L3e
            boolean r1 = r3.exists()     // Catch: java.lang.Exception -> L3e
            if (r1 != 0) goto L2a
            return r0
        L2a:
            java.util.Properties r0 = new java.util.Properties     // Catch: java.lang.Exception -> L3e
            r0.<init>()     // Catch: java.lang.Exception -> L3e
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L3e
            r1.<init>(r3)     // Catch: java.lang.Exception -> L3e
            r0.load(r1)     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = "url_host_ymnsdk"
            java.lang.String r3 = r0.getProperty(r3)     // Catch: java.lang.Exception -> L3e
            return r3
        L3e:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r3)
            throw r0
    }
}
