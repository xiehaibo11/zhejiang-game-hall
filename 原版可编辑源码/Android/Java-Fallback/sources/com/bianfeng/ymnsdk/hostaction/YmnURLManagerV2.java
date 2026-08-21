package com.bianfeng.ymnsdk.hostaction;

public class YmnURLManagerV2 {
    public static boolean config_has_get_fail;
    public static int get_url_times;
    public static java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> hostMap;
    public static java.lang.String isGain;
    public static boolean login_has_get_fail;
    static android.content.Context mContext;
    public static java.lang.String nowType;
    public static boolean trade_has_get_fail;
    public static boolean ymn_has_get_fail;

    static class a implements com.bianfeng.ymnsdk.action.HttpListener {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onComplete(java.lang.String r10) {
                r9 = this;
                java.lang.String r0 = "ymn"
                java.lang.String r1 = "sdk_config"
                java.lang.String r2 = "trade"
                java.lang.String r3 = "login"
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = "获取到的："
                r4.append(r5)
                r4.append(r10)
                java.lang.String r4 = r4.toString()
                com.bianfeng.ymnsdk.util.Logger.i(r4)
                org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9c
                r4.<init>(r10)     // Catch: java.lang.Exception -> L9c
                java.lang.String r5 = "data"
                java.lang.String r5 = r4.optString(r5)     // Catch: java.lang.Exception -> L9c
                org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9c
                r6.<init>(r5)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r6.optString(r3)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r8 = r8.get(r3)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r8)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r6.optString(r2)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r8)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r6.optString(r1)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r8 = r8.get(r1)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r8)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = r6.optString(r0)     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r8 = r8.get(r0)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHost(r7, r8)     // Catch: java.lang.Exception -> L9c
                java.lang.String r7 = "true"
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain = r7     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.setHostType()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r3 = r7.get(r3)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3     // Catch: java.lang.Exception -> L9c
                r3.resetUseable()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2     // Catch: java.lang.Exception -> L9c
                r2.resetUseable()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1     // Catch: java.lang.Exception -> L9c
                r1.resetUseable()     // Catch: java.lang.Exception -> L9c
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L9c
                java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L9c
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0     // Catch: java.lang.Exception -> L9c
                r0.resetUseable()     // Catch: java.lang.Exception -> L9c
                goto La0
            L9c:
                r0 = move-exception
                r0.printStackTrace()
            La0:
                return
        }

        @Override
        public void onError(int r11, java.lang.String r12) {
                r10 = this;
                java.lang.String r0 = "sdk_config"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "获取host失败|"
                r1.append(r2)
                r1.append(r11)
                java.lang.String r3 = "|"
                r1.append(r3)
                r1.append(r12)
                java.lang.String r1 = r1.toString()
                com.bianfeng.ymnsdk.util.Logger.i(r1)
                r1 = 3
                java.lang.String r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType     // Catch: java.lang.Exception -> Lb6
                r5 = -1
                int r6 = r4.hashCode()     // Catch: java.lang.Exception -> Lb6
                r7 = 2
                r8 = 1
                r9 = 0
                switch(r6) {
                    case -1683595124: goto L4b;
                    case -1683595123: goto L41;
                    case -1683595122: goto L37;
                    case -1683595121: goto L2d;
                    default: goto L2c;
                }     // Catch: java.lang.Exception -> Lb6
            L2c:
                goto L54
            L2d:
                java.lang.String r6 = "sdk_config|d"
                boolean r4 = r4.equals(r6)     // Catch: java.lang.Exception -> Lb6
                if (r4 == 0) goto L2c
                r5 = 3
                goto L54
            L37:
                java.lang.String r6 = "sdk_config|c"
                boolean r4 = r4.equals(r6)     // Catch: java.lang.Exception -> Lb6
                if (r4 == 0) goto L2c
                r5 = 2
                goto L54
            L41:
                java.lang.String r6 = "sdk_config|b"
                boolean r4 = r4.equals(r6)     // Catch: java.lang.Exception -> Lb6
                if (r4 == 0) goto L2c
                r5 = 1
                goto L54
            L4b:
                java.lang.String r6 = "sdk_config|a"
                boolean r4 = r4.equals(r6)     // Catch: java.lang.Exception -> Lb6
                if (r4 == 0) goto L2c
                r5 = 0
            L54:
                if (r5 == 0) goto L9f
                if (r5 == r8) goto L89
                if (r5 == r7) goto L73
                if (r5 == r1) goto L5d
                goto Lb5
            L5d:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4     // Catch: java.lang.Exception -> Lb6
                java.util.List r4 = r4.getRequestEntityList()     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4     // Catch: java.lang.Exception -> Lb6
                r4.setCan_useful(r9)     // Catch: java.lang.Exception -> Lb6
                goto Lb5
            L73:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4     // Catch: java.lang.Exception -> Lb6
                java.util.List r4 = r4.getRequestEntityList()     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4     // Catch: java.lang.Exception -> Lb6
                r4.setCan_useful(r9)     // Catch: java.lang.Exception -> Lb6
                goto Lb5
            L89:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4     // Catch: java.lang.Exception -> Lb6
                java.util.List r4 = r4.getRequestEntityList()     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r8)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4     // Catch: java.lang.Exception -> Lb6
                r4.setCan_useful(r9)     // Catch: java.lang.Exception -> Lb6
                goto Lb5
            L9f:
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4     // Catch: java.lang.Exception -> Lb6
                java.util.List r4 = r4.getRequestEntityList()     // Catch: java.lang.Exception -> Lb6
                java.lang.Object r4 = r4.get(r9)     // Catch: java.lang.Exception -> Lb6
                com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4     // Catch: java.lang.Exception -> Lb6
                r4.setCan_useful(r9)     // Catch: java.lang.Exception -> Lb6
            Lb5:
                goto Ld2
            Lb6:
                r4 = move-exception
                r4.printStackTrace()
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                r5.append(r2)
                r5.append(r11)
                r5.append(r3)
                r5.append(r12)
                java.lang.String r2 = r5.toString()
                com.bianfeng.ymnsdk.util.Logger.i(r2)
            Ld2:
                r2 = 0
                r3 = 0
            Ld4:
                r4 = 4
                if (r3 >= r4) goto Lf2
                java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
                java.lang.Object r4 = r4.get(r0)
                com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
                java.util.List r4 = r4.getRequestEntityList()
                java.lang.Object r4 = r4.get(r3)
                com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
                boolean r4 = r4.can_useful
                if (r4 != 0) goto Lef
                int r2 = r2 + 1
            Lef:
                int r3 = r3 + 1
                goto Ld4
            Lf2:
                if (r2 <= r1) goto Lf9
                android.content.Context r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
                com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.gainHost(r0)
            Lf9:
                return
        }
    }

    static {
            r0 = 0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.login_has_get_fail = r0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.trade_has_get_fail = r0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.ymn_has_get_fail = r0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.config_has_get_fail = r0
            java.lang.String r0 = "sdk_config|a"
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType = r0
            java.lang.String r0 = "false"
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain = r0
            return
    }

    public YmnURLManagerV2() {
            r0 = this;
            r0.<init>()
            return
    }

    static void changeLoaclUrl(org.json.JSONObject r16) {
            r1 = r16
            java.lang.String r0 = "server_b_weight"
            java.lang.String r2 = "server_b"
            java.lang.String r3 = "server_a_weight"
            java.lang.String r4 = "server_a"
            java.lang.String r5 = "ymn"
            java.lang.String r6 = "sdk_config"
            java.lang.String r7 = "trade"
            java.lang.String r8 = "login"
            java.lang.String r9 = r1.optString(r8)     // Catch: java.lang.Exception -> L1bd
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1bd
            r10.<init>(r9)     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r11 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r11 = r11.get(r8)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r11 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r11     // Catch: java.lang.Exception -> L1bd
            java.util.List r11 = r11.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            r12 = 0
            java.lang.Object r11 = r11.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r11 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r11     // Catch: java.lang.Exception -> L1bd
            java.lang.String r13 = r10.optString(r4)     // Catch: java.lang.Exception -> L1bd
            r11.url = r13     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r11 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r11 = r11.get(r8)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r11 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r11     // Catch: java.lang.Exception -> L1bd
            java.util.List r11 = r11.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r11 = r11.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r11 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r11     // Catch: java.lang.Exception -> L1bd
            int r13 = r10.optInt(r3)     // Catch: java.lang.Exception -> L1bd
            r11.weight = r13     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r11 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r11 = r11.get(r8)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r11 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r11     // Catch: java.lang.Exception -> L1bd
            java.util.List r11 = r11.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            r13 = 1
            java.lang.Object r11 = r11.get(r13)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r11 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r11     // Catch: java.lang.Exception -> L1bd
            java.lang.String r14 = r10.optString(r2)     // Catch: java.lang.Exception -> L1bd
            r11.url = r14     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r11 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r8 = r11.get(r8)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8     // Catch: java.lang.Exception -> L1bd
            java.util.List r8 = r8.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r8 = r8.get(r13)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8     // Catch: java.lang.Exception -> L1bd
            int r11 = r10.optInt(r0)     // Catch: java.lang.Exception -> L1bd
            r8.weight = r11     // Catch: java.lang.Exception -> L1bd
            java.lang.String r8 = r1.optString(r7)     // Catch: java.lang.Exception -> L1bd
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1bd
            r11.<init>(r8)     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r14 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r14 = r14.get(r7)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r14 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r14     // Catch: java.lang.Exception -> L1bd
            java.util.List r14 = r14.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r14 = r14.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r14 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r14     // Catch: java.lang.Exception -> L1bd
            java.lang.String r15 = r11.optString(r4)     // Catch: java.lang.Exception -> L1bd
            r14.url = r15     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r14 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r14 = r14.get(r7)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r14 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r14     // Catch: java.lang.Exception -> L1bd
            java.util.List r14 = r14.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r14 = r14.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r14 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r14     // Catch: java.lang.Exception -> L1bd
            int r15 = r11.optInt(r3)     // Catch: java.lang.Exception -> L1bd
            r14.weight = r15     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r14 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r14 = r14.get(r7)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r14 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r14     // Catch: java.lang.Exception -> L1bd
            java.util.List r14 = r14.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r14 = r14.get(r13)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r14 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r14     // Catch: java.lang.Exception -> L1bd
            java.lang.String r15 = r11.optString(r2)     // Catch: java.lang.Exception -> L1bd
            r14.url = r15     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r14 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r7 = r14.get(r7)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7     // Catch: java.lang.Exception -> L1bd
            java.util.List r7 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r7 = r7.get(r13)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7     // Catch: java.lang.Exception -> L1bd
            int r14 = r11.optInt(r0)     // Catch: java.lang.Exception -> L1bd
            r7.weight = r14     // Catch: java.lang.Exception -> L1bd
            java.lang.String r7 = r1.optString(r6)     // Catch: java.lang.Exception -> L1bd
            org.json.JSONObject r14 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1bd
            r14.<init>(r7)     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r15 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r15 = r15.get(r6)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r15 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r15     // Catch: java.lang.Exception -> L1bd
            java.util.List r15 = r15.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r15 = r15.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r15 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r15     // Catch: java.lang.Exception -> L1bd
            java.lang.String r13 = r14.optString(r4)     // Catch: java.lang.Exception -> L1bd
            r15.url = r13     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r13 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r13 = r13.get(r6)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r13     // Catch: java.lang.Exception -> L1bd
            java.util.List r13 = r13.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r13 = r13.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r13     // Catch: java.lang.Exception -> L1bd
            int r15 = r14.optInt(r3)     // Catch: java.lang.Exception -> L1bd
            r13.weight = r15     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r13 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r13 = r13.get(r6)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r13     // Catch: java.lang.Exception -> L1bd
            java.util.List r13 = r13.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            r15 = 1
            java.lang.Object r13 = r13.get(r15)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r13     // Catch: java.lang.Exception -> L1bd
            java.lang.String r15 = r14.optString(r2)     // Catch: java.lang.Exception -> L1bd
            r13.url = r15     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r13 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r6 = r13.get(r6)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6     // Catch: java.lang.Exception -> L1bd
            java.util.List r6 = r6.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            r13 = 1
            java.lang.Object r6 = r6.get(r13)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6     // Catch: java.lang.Exception -> L1bd
            int r13 = r14.optInt(r0)     // Catch: java.lang.Exception -> L1bd
            r6.weight = r13     // Catch: java.lang.Exception -> L1bd
            java.lang.String r6 = r1.optString(r5)     // Catch: java.lang.Exception -> L1bd
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1bd
            r13.<init>(r6)     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r15 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r15 = r15.get(r5)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r15 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r15     // Catch: java.lang.Exception -> L1bd
            java.util.List r15 = r15.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r15 = r15.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r15 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r15     // Catch: java.lang.Exception -> L1bd
            java.lang.String r4 = r13.optString(r4)     // Catch: java.lang.Exception -> L1bd
            r15.url = r4     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4     // Catch: java.lang.Exception -> L1bd
            java.util.List r4 = r4.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r4 = r4.get(r12)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4     // Catch: java.lang.Exception -> L1bd
            int r3 = r13.optInt(r3)     // Catch: java.lang.Exception -> L1bd
            r4.weight = r3     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r3 = r3.get(r5)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3     // Catch: java.lang.Exception -> L1bd
            java.util.List r3 = r3.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            r4 = 1
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3     // Catch: java.lang.Exception -> L1bd
            java.lang.String r2 = r13.optString(r2)     // Catch: java.lang.Exception -> L1bd
            r3.url = r2     // Catch: java.lang.Exception -> L1bd
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Exception -> L1bd
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2     // Catch: java.lang.Exception -> L1bd
            java.util.List r2 = r2.getRequestEntityList()     // Catch: java.lang.Exception -> L1bd
            r3 = 1
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L1bd
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Exception -> L1bd
            int r0 = r13.optInt(r0)     // Catch: java.lang.Exception -> L1bd
            r2.weight = r0     // Catch: java.lang.Exception -> L1bd
            goto L1c1
        L1bd:
            r0 = move-exception
            r0.printStackTrace()
        L1c1:
            return
    }

    public static void gainHost(android.content.Context r5) {
            java.lang.String r0 = "服务请求"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.String r0 = ""
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext = r5
            r1 = 0
            java.lang.String r2 = getHostUrl()     // Catch: java.lang.Exception -> L2d
            r1 = r2
            java.lang.String r2 = "failed"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L19
            return
        L19:
            com.bianfeng.ymnsdk.hostaction.HostHttpHelper r2 = new com.bianfeng.ymnsdk.hostaction.HostHttpHelper
            r2.<init>(r5)
            r3 = 1
            r2.setMethod(r3)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2$a r3 = new com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2$a
            r3.<init>()
            java.lang.String r4 = ""
            r2.request(r1, r4, r3)
            return
        L2d:
            r2 = move-exception
            return
    }

    public static synchronized java.lang.String getHost(java.lang.String r8) {
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2> r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.class
            monitor-enter(r0)
            java.lang.String r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = "true"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L12e
            r2 = 3
            r3 = 0
            if (r1 == 0) goto L15
            int r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times     // Catch: java.lang.Throwable -> L12e
            if (r1 < r2) goto L15
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r3     // Catch: java.lang.Throwable -> L12e
        L15:
            java.lang.String r1 = getLoaclHost(r8)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "failed"
            boolean r4 = r1.equals(r4)     // Catch: java.lang.Throwable -> L12e
            if (r4 != 0) goto L32
            boolean r4 = r1.isEmpty()     // Catch: java.lang.Throwable -> L12e
            if (r4 == 0) goto L28
            goto L32
        L28:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.login_has_get_fail = r3     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.trade_has_get_fail = r3     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.ymn_has_get_fail = r3     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.config_has_get_fail = r3     // Catch: java.lang.Throwable -> L12e
            goto Led
        L32:
            r4 = -1
            int r5 = r8.hashCode()     // Catch: java.lang.Throwable -> L12e
            r6 = 2
            r7 = 1
            switch(r5) {
                case 119770: goto L5b;
                case 103149417: goto L51;
                case 110621028: goto L47;
                case 1669754599: goto L3d;
                default: goto L3c;
            }     // Catch: java.lang.Throwable -> L12e
        L3c:
            goto L64
        L3d:
            java.lang.String r5 = "sdk_config"
            boolean r5 = r8.equals(r5)     // Catch: java.lang.Throwable -> L12e
            if (r5 == 0) goto L3c
            r4 = 3
            goto L64
        L47:
            java.lang.String r5 = "trade"
            boolean r5 = r8.equals(r5)     // Catch: java.lang.Throwable -> L12e
            if (r5 == 0) goto L3c
            r4 = 1
            goto L64
        L51:
            java.lang.String r5 = "login"
            boolean r5 = r8.equals(r5)     // Catch: java.lang.Throwable -> L12e
            if (r5 == 0) goto L3c
            r4 = 0
            goto L64
        L5b:
            java.lang.String r5 = "ymn"
            boolean r5 = r8.equals(r5)     // Catch: java.lang.Throwable -> L12e
            if (r5 == 0) goto L3c
            r4 = 2
        L64:
            if (r4 == 0) goto Ld2
            if (r4 == r7) goto Lb8
            if (r4 == r6) goto L9e
            if (r4 == r2) goto L84
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "sdk_config"
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2     // Catch: java.lang.Throwable -> L12e
            java.util.List r2 = r2.getRequestEntityList()     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r2.url     // Catch: java.lang.Throwable -> L12e
            r1 = r2
            goto Lec
        L84:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.config_has_get_fail = r7     // Catch: java.lang.Throwable -> L12e
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "sdk_config"
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2     // Catch: java.lang.Throwable -> L12e
            java.util.List r2 = r2.getRequestEntityList()     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r2.url     // Catch: java.lang.Throwable -> L12e
            r1 = r2
            goto Lec
        L9e:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.ymn_has_get_fail = r7     // Catch: java.lang.Throwable -> L12e
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "ymn"
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2     // Catch: java.lang.Throwable -> L12e
            java.util.List r2 = r2.getRequestEntityList()     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r2.url     // Catch: java.lang.Throwable -> L12e
            r1 = r2
            goto Lec
        Lb8:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.trade_has_get_fail = r7     // Catch: java.lang.Throwable -> L12e
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "trade"
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2     // Catch: java.lang.Throwable -> L12e
            java.util.List r2 = r2.getRequestEntityList()     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r2.url     // Catch: java.lang.Throwable -> L12e
            r1 = r2
            goto Lec
        Ld2:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.login_has_get_fail = r7     // Catch: java.lang.Throwable -> L12e
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "login"
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2     // Catch: java.lang.Throwable -> L12e
            java.util.List r2 = r2.getRequestEntityList()     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r2.url     // Catch: java.lang.Throwable -> L12e
            r1 = r2
        Lec:
        Led:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12e
            r2.<init>()     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "require host is1 "
            r2.append(r4)     // Catch: java.lang.Throwable -> L12e
            r2.append(r1)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.util.Logger.i(r2)     // Catch: java.lang.Throwable -> L12e
            android.content.Context r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "SP_YMN_CHANGE_HOST"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r4, r3)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r3 = "SP_YMN_CHANGE_HOST"
            java.lang.String r4 = ""
            java.lang.String r3 = r2.getString(r3, r4)     // Catch: java.lang.Throwable -> L12e
            boolean r4 = r3.isEmpty()     // Catch: java.lang.Throwable -> L12e
            if (r4 != 0) goto L118
            r1 = r3
        L118:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12e
            r4.<init>()     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "require host is2 "
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            r4.append(r1)     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L12e
            com.bianfeng.ymnsdk.util.Logger.i(r4)     // Catch: java.lang.Throwable -> L12e
            monitor-exit(r0)
            return r1
        L12e:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    private static java.lang.String getHostUrl() throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r0 = 1
            java.lang.String r1 = ""
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r3 = "sdk_config"
            java.lang.Object r2 = r2.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2
            java.util.List r2 = r2.getRequestEntityList()
            r4 = 0
            java.lang.Object r2 = r2.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2
            boolean r2 = r2.can_useful
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r5 = r5.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
            java.util.List r5 = r5.getRequestEntityList()
            r6 = 1
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            boolean r5 = r5.can_useful
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r7 = r7.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7
            java.util.List r7 = r7.getRequestEntityList()
            r8 = 2
            java.lang.Object r7 = r7.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7
            boolean r7 = r7.can_useful
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r9 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r9 = r9.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r9 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r9
            java.util.List r9 = r9.getRequestEntityList()
            r10 = 3
            java.lang.Object r9 = r9.get(r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r9 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r9
            boolean r9 = r9.can_useful
            if (r2 == 0) goto L5e
            if (r5 == 0) goto L5e
            goto Lab
        L5e:
            if (r2 == 0) goto L6c
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r6 = r6.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            r6.setFormal_index(r4)
            goto Lab
        L6c:
            if (r5 == 0) goto L7a
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            r4.setFormal_index(r6)
            goto Lab
        L7a:
            java.lang.String r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain
            java.lang.String r6 = "true"
            boolean r4 = r4.equals(r6)
            if (r4 == 0) goto Lab
            if (r7 == 0) goto L8a
            if (r9 == 0) goto L8a
            r0 = 0
            goto Lab
        L8a:
            if (r7 == 0) goto L99
            r0 = 0
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            r4.setFormal_index(r8)
            goto Lab
        L99:
            if (r9 == 0) goto La8
            r0 = 0
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            r4.setFormal_index(r10)
            goto Lab
        La8:
            java.lang.String r3 = "failed"
            return r3
        Lab:
            java.lang.String r4 = "|"
            if (r0 == 0) goto L124
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r6 = r6.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r8 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8
            int r8 = r8.getFormal_index()
            java.lang.Object r6 = r6.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            java.lang.String r1 = r6.url
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r8 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8
            java.util.List r8 = r8.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r10 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r10 = r10.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r10 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r10
            int r10 = r10.getFormal_index()
            java.lang.Object r8 = r8.get(r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r8 = r8.type
            r6.append(r8)
            r6.append(r4)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            java.util.List r4 = r4.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r3 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
            int r3 = r3.getFormal_index()
            java.lang.Object r3 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            java.lang.String r3 = r3.port
            r6.append(r3)
            java.lang.String r3 = r6.toString()
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType = r3
            goto L198
        L124:
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r6 = r6.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r8 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8
            int r8 = r8.getSpare_index()
            java.lang.Object r6 = r6.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            java.lang.String r1 = r6.url
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r8 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r8
            java.util.List r8 = r8.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r10 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r10 = r10.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r10 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r10
            int r10 = r10.getSpare_index()
            java.lang.Object r8 = r8.get(r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r8 = r8.type
            r6.append(r8)
            r6.append(r4)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r4 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r4
            java.util.List r4 = r4.getRequestEntityList()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r3 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
            int r3 = r3.getSpare_index()
            java.lang.Object r3 = r4.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            java.lang.String r3 = r3.port
            r6.append(r3)
            java.lang.String r3 = r6.toString()
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType = r3
        L198:
            java.lang.String r3 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            java.lang.String r4 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            java.lang.String r6 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r8 = com.bianfeng.ymnsdk.util.YmnAppContext.getChannelId()
            java.lang.String r10 = "unknow"
            if (r3 == 0) goto L1bc
            java.lang.String r11 = r3.toLowerCase()
            boolean r11 = r11.equals(r10)
            if (r11 != 0) goto L1bc
            boolean r11 = r3.isEmpty()
            if (r11 == 0) goto L1be
        L1bc:
            java.lang.String r3 = "0"
        L1be:
            if (r4 == 0) goto L1d0
            java.lang.String r11 = r4.toLowerCase()
            boolean r11 = r11.equals(r10)
            if (r11 != 0) goto L1d0
            boolean r11 = r4.isEmpty()
            if (r11 == 0) goto L1d2
        L1d0:
            java.lang.String r4 = "0"
        L1d2:
            if (r6 == 0) goto L1e4
            java.lang.String r11 = r6.toLowerCase()
            boolean r11 = r11.equals(r10)
            if (r11 != 0) goto L1e4
            boolean r11 = r6.isEmpty()
            if (r11 == 0) goto L1e6
        L1e4:
            java.lang.String r6 = "0"
        L1e6:
            if (r8 == 0) goto L1f8
            java.lang.String r11 = r8.toLowerCase()
            boolean r10 = r11.equals(r10)
            if (r10 != 0) goto L1f8
            boolean r10 = r8.isEmpty()
            if (r10 == 0) goto L1fa
        L1f8:
            java.lang.String r8 = "0"
        L1fa:
            java.lang.String r10 = com.bianfeng.ymnsdk.hostaction.HostUtils.getSign(r3, r4, r6, r8)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r1)
            java.lang.String r12 = "/server_list/"
            r11.append(r12)
            r11.append(r3)
            java.lang.String r12 = "/"
            r11.append(r12)
            r11.append(r4)
            r11.append(r12)
            r11.append(r6)
            r11.append(r12)
            r11.append(r8)
            r11.append(r12)
            r11.append(r10)
            java.lang.String r12 = ".json"
            r11.append(r12)
            java.lang.String r1 = r11.toString()
            return r1
    }

    private static java.lang.String getLoaclHost(java.lang.String r9) {
            java.lang.String r0 = ""
            java.lang.String r1 = ""
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r2 = r2.get(r9)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            boolean r3 = com.bianfeng.ymnsdk.hostaction.HostUtils.judgeHost(r3, r9)
            java.lang.String r4 = "|"
            r5 = 0
            if (r3 == 0) goto L138
            java.lang.String r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain
            java.lang.String r6 = "true"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L138
            java.util.List r3 = r2.getRequestEntityList()
            r6 = 2
            java.lang.Object r3 = r3.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            boolean r3 = r3.can_useful
            java.util.List r7 = r2.getRequestEntityList()
            r8 = 3
            java.lang.Object r7 = r7.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7
            boolean r7 = r7.can_useful
            if (r3 == 0) goto L97
            if (r7 == 0) goto L97
            java.util.List r5 = r2.getRequestEntityList()
            int r6 = r2.getSpare_index()
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            java.lang.String r0 = r5.url
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.util.List r6 = r2.getRequestEntityList()
            int r8 = r2.getSpare_index()
            java.lang.Object r6 = r6.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            java.lang.String r6 = r6.type
            r5.append(r6)
            r5.append(r4)
            java.util.List r4 = r2.getRequestEntityList()
            int r6 = r2.getSpare_index()
            java.lang.Object r4 = r4.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.port
            r5.append(r4)
            java.lang.String r1 = r5.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "require host is3 "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            goto L136
        L97:
            if (r3 == 0) goto Le4
            java.util.List r5 = r2.getRequestEntityList()
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            java.lang.String r0 = r5.url
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.util.List r8 = r2.getRequestEntityList()
            java.lang.Object r8 = r8.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r8 = r8.type
            r5.append(r8)
            r5.append(r4)
            java.util.List r4 = r2.getRequestEntityList()
            java.lang.Object r4 = r4.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.port
            r5.append(r4)
            java.lang.String r1 = r5.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "require host is4 "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            goto L136
        Le4:
            if (r7 == 0) goto L131
            java.util.List r5 = r2.getRequestEntityList()
            java.lang.Object r5 = r5.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            java.lang.String r0 = r5.url
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.util.List r6 = r2.getRequestEntityList()
            java.lang.Object r6 = r6.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            java.lang.String r6 = r6.type
            r5.append(r6)
            r5.append(r4)
            java.util.List r4 = r2.getRequestEntityList()
            java.lang.Object r4 = r4.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.port
            r5.append(r4)
            java.lang.String r1 = r5.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "require host is5 "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            goto L136
        L131:
            r2.setSpare_can_useful(r5)
            java.lang.String r0 = "failed"
        L136:
            goto L24c
        L138:
            java.util.List r3 = r2.getRequestEntityList()
            java.lang.Object r3 = r3.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            boolean r3 = r3.can_useful
            java.util.List r6 = r2.getRequestEntityList()
            r7 = 1
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            boolean r6 = r6.can_useful
            if (r3 == 0) goto L1ad
            if (r6 == 0) goto L1ad
            java.util.List r5 = r2.getRequestEntityList()
            int r7 = r2.getFormal_index()
            java.lang.Object r5 = r5.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            java.lang.String r0 = r5.url
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.util.List r7 = r2.getRequestEntityList()
            int r8 = r2.getFormal_index()
            java.lang.Object r7 = r7.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7
            java.lang.String r7 = r7.type
            r5.append(r7)
            r5.append(r4)
            java.util.List r4 = r2.getRequestEntityList()
            int r7 = r2.getFormal_index()
            java.lang.Object r4 = r4.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.port
            r5.append(r4)
            java.lang.String r1 = r5.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "require host is6 "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            goto L24c
        L1ad:
            if (r3 == 0) goto L1fa
            java.util.List r7 = r2.getRequestEntityList()
            java.lang.Object r7 = r7.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7
            java.lang.String r0 = r7.url
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.util.List r8 = r2.getRequestEntityList()
            java.lang.Object r8 = r8.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r8 = r8.type
            r7.append(r8)
            r7.append(r4)
            java.util.List r4 = r2.getRequestEntityList()
            java.lang.Object r4 = r4.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.port
            r7.append(r4)
            java.lang.String r1 = r7.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "require host is7 "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            goto L24c
        L1fa:
            if (r6 == 0) goto L247
            java.util.List r5 = r2.getRequestEntityList()
            java.lang.Object r5 = r5.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            java.lang.String r0 = r5.url
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.util.List r8 = r2.getRequestEntityList()
            java.lang.Object r8 = r8.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            java.lang.String r8 = r8.type
            r5.append(r8)
            r5.append(r4)
            java.util.List r4 = r2.getRequestEntityList()
            java.lang.Object r4 = r4.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            java.lang.String r4 = r4.port
            r5.append(r4)
            java.lang.String r1 = r5.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "require host is8 "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            goto L24c
        L247:
            r2.setFormal_can_useful(r5)
            java.lang.String r0 = "failed"
        L24c:
            boolean r3 = r1.isEmpty()
            if (r3 != 0) goto L254
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType = r1
        L254:
            return r0
    }

    public static void init(android.content.Context r0) {
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext = r0
            initEntity()
            readDefaultHost(r0)
            pullData(r0)
            return
    }

    public static void initEntity() {
            java.lang.Class<com.bianfeng.ymnsdk.hostaction.RequestEntityList> r0 = com.bianfeng.ymnsdk.hostaction.RequestEntityList.class
            r1 = 0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r1
            com.google.gson.Gson r1 = new com.google.gson.Gson
            r1.<init>()
            android.content.Context r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r2 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r2)
            java.lang.String r3 = "loginEntityList"
            java.lang.String r2 = r2.readData(r3)
            boolean r4 = r2.isEmpty()
            if (r4 == 0) goto L7c
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r3.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r11 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r5 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_A
            int r8 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_A_WERIGHT
            r9 = 0
            r10 = 1
            java.lang.String r6 = "login"
            java.lang.String r7 = "a"
            r4 = r11
            r4.<init>(r5, r6, r7, r8, r9, r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r12 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r6 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_B
            int r9 = com.bianfeng.ymnsdk.hostaction.HostConstant.LOGIN_URL_HOST_INPACKAGE_B_WERIGHT
            r10 = 0
            r11 = 1
            java.lang.String r7 = "login"
            java.lang.String r8 = "b"
            r5 = r12
            r5.<init>(r6, r7, r8, r9, r10, r11)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r10 = 1
            r11 = 0
            r12 = 1
            java.lang.String r7 = ""
            java.lang.String r8 = "login"
            java.lang.String r9 = "c"
            r6 = r13
            r6.<init>(r7, r8, r9, r10, r11, r12)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r14 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r11 = 1
            r12 = 0
            r13 = 1
            java.lang.String r8 = ""
            java.lang.String r9 = "login"
            java.lang.String r10 = "d"
            r7 = r14
            r7.<init>(r8, r9, r10, r11, r12, r13)
            java.util.List r8 = r3.getRequestEntityList()
            r8.add(r4)
            java.util.List r8 = r3.getRequestEntityList()
            r8.add(r5)
            java.util.List r8 = r3.getRequestEntityList()
            r8.add(r6)
            java.util.List r8 = r3.getRequestEntityList()
            r8.add(r7)
            goto L8c
        L7c:
            android.content.Context r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r4 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r4)
            java.lang.String r3 = r4.readData(r3)
            java.lang.Object r3 = r1.fromJson(r3, r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
        L8c:
            android.content.Context r4 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r4 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r4)
            java.lang.String r5 = "tradeEntityList"
            java.lang.String r4 = r4.readData(r5)
            boolean r6 = r4.isEmpty()
            if (r6 == 0) goto Lff
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r5.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r13 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r7 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_A
            int r10 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_A_WERIGHT
            r11 = 0
            r12 = 1
            java.lang.String r8 = "trade"
            java.lang.String r9 = "a"
            r6 = r13
            r6.<init>(r7, r8, r9, r10, r11, r12)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r14 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r8 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_B
            int r11 = com.bianfeng.ymnsdk.hostaction.HostConstant.TRADE_URL_HOST_INPACKAGE_B_WERIGHT
            r12 = 0
            r13 = 1
            java.lang.String r9 = "trade"
            java.lang.String r10 = "b"
            r7 = r14
            r7.<init>(r8, r9, r10, r11, r12, r13)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r15 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r12 = 1
            r13 = 0
            r14 = 1
            java.lang.String r9 = ""
            java.lang.String r10 = "trade"
            java.lang.String r11 = "c"
            r8 = r15
            r8.<init>(r9, r10, r11, r12, r13, r14)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r16 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r13 = 1
            r14 = 0
            r15 = 1
            java.lang.String r10 = ""
            java.lang.String r11 = "trade"
            java.lang.String r12 = "d"
            r9 = r16
            r9.<init>(r10, r11, r12, r13, r14, r15)
            java.util.List r10 = r5.getRequestEntityList()
            r10.add(r6)
            java.util.List r10 = r5.getRequestEntityList()
            r10.add(r7)
            java.util.List r10 = r5.getRequestEntityList()
            r10.add(r8)
            java.util.List r10 = r5.getRequestEntityList()
            r10.add(r9)
            goto L10f
        Lff:
            android.content.Context r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r6 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r6)
            java.lang.String r5 = r6.readData(r5)
            java.lang.Object r5 = r1.fromJson(r5, r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
        L10f:
            android.content.Context r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r6 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r6)
            java.lang.String r7 = "configEntityList"
            java.lang.String r6 = r6.readData(r7)
            boolean r8 = r6.isEmpty()
            if (r8 == 0) goto L187
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r7.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r15 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r9 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_A
            int r12 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT
            r13 = 0
            r14 = 1
            java.lang.String r10 = "sdk_config"
            java.lang.String r11 = "a"
            r8 = r15
            r8.<init>(r9, r10, r11, r12, r13, r14)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r16 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r10 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_B
            int r13 = com.bianfeng.ymnsdk.hostaction.HostConstant.SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT
            r14 = 0
            r15 = 1
            java.lang.String r11 = "sdk_config"
            java.lang.String r12 = "b"
            r9 = r16
            r9.<init>(r10, r11, r12, r13, r14, r15)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r17 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r14 = 1
            r15 = 0
            r16 = 1
            java.lang.String r11 = ""
            java.lang.String r12 = "sdk_config"
            java.lang.String r13 = "c"
            r10 = r17
            r10.<init>(r11, r12, r13, r14, r15, r16)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r18 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r15 = 1
            r16 = 0
            r17 = 1
            java.lang.String r12 = ""
            java.lang.String r13 = "sdk_config"
            java.lang.String r14 = "d"
            r11 = r18
            r11.<init>(r12, r13, r14, r15, r16, r17)
            java.util.List r12 = r7.getRequestEntityList()
            r12.add(r8)
            java.util.List r12 = r7.getRequestEntityList()
            r12.add(r9)
            java.util.List r12 = r7.getRequestEntityList()
            r12.add(r10)
            java.util.List r12 = r7.getRequestEntityList()
            r12.add(r11)
            goto L197
        L187:
            android.content.Context r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r8 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r8)
            java.lang.String r7 = r8.readData(r7)
            java.lang.Object r7 = r1.fromJson(r7, r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7
        L197:
            android.content.Context r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r8 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r8)
            java.lang.String r9 = "sdkEntityList"
            java.lang.String r8 = r8.readData(r9)
            boolean r10 = r8.isEmpty()
            if (r10 == 0) goto L213
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = new com.bianfeng.ymnsdk.hostaction.RequestEntityList
            r0.<init>()
            com.bianfeng.ymnsdk.hostaction.RequestEntity r16 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r10 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_A
            int r13 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_A_WERIGHT
            r14 = 0
            r15 = 1
            java.lang.String r11 = "ymn"
            java.lang.String r12 = "a"
            r9 = r16
            r9.<init>(r10, r11, r12, r13, r14, r15)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r17 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            java.lang.String r11 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_B
            int r14 = com.bianfeng.ymnsdk.hostaction.HostConstant.YMN_URL_HOST_INPACKAGE_B_WERIGHT
            r15 = 0
            r16 = 1
            java.lang.String r12 = "ymn"
            java.lang.String r13 = "b"
            r10 = r17
            r10.<init>(r11, r12, r13, r14, r15, r16)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r18 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r15 = 1
            r16 = 0
            r17 = 1
            java.lang.String r12 = ""
            java.lang.String r13 = "ymn"
            java.lang.String r14 = "c"
            r11 = r18
            r11.<init>(r12, r13, r14, r15, r16, r17)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r19 = new com.bianfeng.ymnsdk.hostaction.RequestEntity
            r16 = 1
            r17 = 0
            r18 = 1
            java.lang.String r13 = ""
            java.lang.String r14 = "ymn"
            java.lang.String r15 = "d"
            r12 = r19
            r12.<init>(r13, r14, r15, r16, r17, r18)
            java.util.List r13 = r0.getRequestEntityList()
            r13.add(r9)
            java.util.List r13 = r0.getRequestEntityList()
            r13.add(r10)
            java.util.List r13 = r0.getRequestEntityList()
            r13.add(r11)
            java.util.List r13 = r0.getRequestEntityList()
            r13.add(r12)
            goto L223
        L213:
            android.content.Context r10 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            com.bianfeng.ymnsdk.hostaction.HostSharedPreferences r10 = com.bianfeng.ymnsdk.hostaction.HostSharedPreferences.getInstance(r10)
            java.lang.String r9 = r10.readData(r9)
            java.lang.Object r0 = r1.fromJson(r9, r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
        L223:
            java.util.LinkedHashMap r9 = new java.util.LinkedHashMap
            r9.<init>()
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap = r9
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r9 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r10 = "login"
            r9.put(r10, r3)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r9 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r10 = "trade"
            r9.put(r10, r5)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r9 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r10 = "sdk_config"
            r9.put(r10, r7)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r9 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r10 = "ymn"
            r9.put(r10, r0)
            return
    }

    public static void notifyRequestFailure() {
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L11e
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            java.lang.String r1 = "\\|"
            java.lang.String[] r0 = r0.split(r1)
            r1 = 0
            r2 = r0[r1]
            r3 = 1
            r4 = r0[r3]
            char r5 = r4.charAt(r1)
            int r6 = r5 + (-97)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r7 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r7 = r7.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r7
            int r8 = r7.getRequested_fail_times()
            if (r8 >= 0) goto L33
            int r8 = r7.getRequested_fail_times()
            int r8 = r8 + r3
            r7.setRequested_fail_times(r8)
            goto L4e
        L33:
            java.util.List r8 = r7.getRequestEntityList()
            java.lang.Object r8 = r8.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            r8.can_useful = r1
            java.util.List r8 = r7.getRequestEntityList()
            java.lang.Object r8 = r8.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            r8.can_useful = r1
            r7.setRequested_fail_times(r6)
        L4e:
            java.util.List r8 = r7.getRequestEntityList()
            java.lang.Object r8 = r8.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            boolean r8 = r8.can_useful
            if (r8 != 0) goto L6d
            java.util.List r8 = r7.getRequestEntityList()
            java.lang.Object r8 = r8.get(r3)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            boolean r8 = r8.can_useful
            if (r8 != 0) goto L6d
            r7.setFormal_can_useful(r1)
        L6d:
            java.util.List r8 = r7.getRequestEntityList()
            r9 = 2
            java.lang.Object r8 = r8.get(r9)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            boolean r8 = r8.can_useful
            r10 = 3
            if (r8 != 0) goto L8e
            java.util.List r8 = r7.getRequestEntityList()
            java.lang.Object r8 = r8.get(r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            boolean r8 = r8.can_useful
            if (r8 != 0) goto L8e
            r7.setSpare_can_useful(r1)
        L8e:
            boolean r8 = r7.isFormal_can_useful()
            if (r8 != 0) goto L11e
            boolean r8 = r7.isSpare_can_useful()
            if (r8 != 0) goto L11e
            java.lang.String r8 = "false"
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.isGain = r8
            android.content.Context r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.mContext
            gainHost(r8)
            int r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times
            int r8 = r8 + r3
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r8
            int r8 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times
            java.lang.String r11 = "ymn"
            java.lang.String r12 = "sdk_config"
            java.lang.String r13 = "trade"
            java.lang.String r14 = "login"
            if (r8 >= r10) goto Le1
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r1.get(r14)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            r1.resetUseable()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r1.get(r13)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            r1.resetUseable()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r1.get(r12)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            r1.resetUseable()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r1 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r1.get(r11)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            r1.resetUseable()
            goto L11e
        Le1:
            r8 = -1
            int r15 = r2.hashCode()
            switch(r15) {
                case 119770: goto L101;
                case 103149417: goto Lfa;
                case 110621028: goto Lf2;
                case 1669754599: goto Lea;
                default: goto Le9;
            }
        Le9:
            goto L109
        Lea:
            boolean r1 = r2.equals(r12)
            if (r1 == 0) goto Le9
            r1 = 3
            goto L10a
        Lf2:
            boolean r1 = r2.equals(r13)
            if (r1 == 0) goto Le9
            r1 = 1
            goto L10a
        Lfa:
            boolean r11 = r2.equals(r14)
            if (r11 == 0) goto Le9
            goto L10a
        L101:
            boolean r1 = r2.equals(r11)
            if (r1 == 0) goto Le9
            r1 = 2
            goto L10a
        L109:
            r1 = -1
        L10a:
            if (r1 == 0) goto L11c
            if (r1 == r3) goto L119
            if (r1 == r9) goto L116
            if (r1 == r10) goto L113
            goto L11e
        L113:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.config_has_get_fail = r3
            goto L11e
        L116:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.ymn_has_get_fail = r3
            goto L11e
        L119:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.trade_has_get_fail = r3
            goto L11e
        L11c:
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.login_has_get_fail = r3
        L11e:
            return
    }

    public static void notifyRequestSuccess() {
            r0 = 0
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.get_url_times = r0
            java.lang.String r1 = ""
            java.lang.String r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L28
            java.lang.String r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.nowType
            java.lang.String r3 = "\\|"
            java.lang.String[] r2 = r2.split(r3)
            r0 = r2[r0]
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r3 = r3.get(r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r3
            int r4 = r3.getRequested_success_times()
            int r4 = r4 + 1
            r3.setRequested_success_times(r4)
        L28:
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
            boolean r3 = com.bianfeng.ymnsdk.hostaction.HostUtils.getChance(r0)
            if (r3 == 0) goto L56
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r3.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            r1.setFormal_index(r2)
            goto L61
        L56:
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r2 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r1 = r2.get(r1)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r1
            r1.setFormal_index(r5)
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
            boolean r6 = r1.isEmpty()
            if (r6 != 0) goto L7c
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r7 = "trade"
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.lang.Object r6 = r6.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            r6.url = r1
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.lang.Object r6 = r6.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            r6.url = r1
        L7c:
            if (r2 == 0) goto Lae
            boolean r6 = r2.isEmpty()
            if (r6 != 0) goto Lae
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r7 = "sdk_config"
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.lang.Object r6 = r6.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            r6.url = r2
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.lang.Object r6 = r6.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            r6.url = r2
        Lae:
            boolean r6 = android.text.TextUtils.isEmpty(r3)
            if (r6 != 0) goto Lde
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r6 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.String r7 = "ymn"
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r6
            java.util.List r6 = r6.getRequestEntityList()
            java.lang.Object r5 = r6.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            r5.url = r3
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.hostMap
            java.lang.Object r5 = r5.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
            java.util.List r5 = r5.getRequestEntityList()
            java.lang.Object r4 = r5.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            r4.url = r3
        Lde:
            java.lang.String r4 = ""
            java.lang.String r5 = urlOnSdCard4Public(r8)     // Catch: java.lang.Exception -> L119
            r4 = r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L119
            r5.<init>()     // Catch: java.lang.Exception -> L119
            java.lang.String r6 = "这是本地debug文件："
            r5.append(r6)     // Catch: java.lang.Exception -> L119
            r5.append(r4)     // Catch: java.lang.Exception -> L119
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L119
            com.bianfeng.ymnsdk.util.Logger.i(r5)     // Catch: java.lang.Exception -> L119
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L119
            if (r5 != 0) goto L118
            boolean r5 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonObject(r4)     // Catch: java.lang.Exception -> L119
            if (r5 == 0) goto L118
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L119
            r5.<init>(r4)     // Catch: java.lang.Exception -> L119
            java.lang.String r6 = "data"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Exception -> L119
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> L119
            r7.<init>(r6)     // Catch: java.lang.Exception -> L119
            changeLoaclUrl(r7)     // Catch: java.lang.Exception -> L119
        L118:
            goto L11d
        L119:
            r5 = move-exception
            r5.printStackTrace()
        L11d:
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

    static void setHost(java.lang.String r6, com.bianfeng.ymnsdk.hostaction.RequestEntityList r7) {
            java.lang.String r0 = "request_times"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L7b
            r1.<init>(r6)     // Catch: java.lang.Exception -> L7b
            java.util.List r2 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            r3 = 2
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Exception -> L7b
            java.lang.String r4 = "server_a"
            java.lang.String r4 = r1.optString(r4)     // Catch: java.lang.Exception -> L7b
            r2.url = r4     // Catch: java.lang.Exception -> L7b
            java.util.List r2 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            r4 = 3
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = "server_b"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Exception -> L7b
            r2.url = r5     // Catch: java.lang.Exception -> L7b
            java.util.List r2 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = "server_a_weight"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Exception -> L7b
            r2.weight = r5     // Catch: java.lang.Exception -> L7b
            java.util.List r2 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = "server_b_weight"
            int r5 = r1.optInt(r5)     // Catch: java.lang.Exception -> L7b
            r2.weight = r5     // Catch: java.lang.Exception -> L7b
            java.lang.String r2 = "is_mandatory"
            int r2 = r1.optInt(r2)     // Catch: java.lang.Exception -> L7b
            r7.setIs_mandatory(r2)     // Catch: java.lang.Exception -> L7b
            java.util.List r2 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Exception -> L7b
            int r3 = r1.optInt(r0)     // Catch: java.lang.Exception -> L7b
            r2.Request_times = r3     // Catch: java.lang.Exception -> L7b
            java.util.List r2 = r7.getRequestEntityList()     // Catch: java.lang.Exception -> L7b
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Exception -> L7b
            com.bianfeng.ymnsdk.hostaction.RequestEntity r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r2     // Catch: java.lang.Exception -> L7b
            int r0 = r1.optInt(r0)     // Catch: java.lang.Exception -> L7b
            r2.Request_times = r0     // Catch: java.lang.Exception -> L7b
            goto L7f
        L7b:
            r0 = move-exception
            r0.printStackTrace()
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
            java.lang.Object r2 = r1.getValue()
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r2 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r2
            java.util.List r3 = r2.getRequestEntityList()
            r4 = 0
            java.lang.Object r3 = r3.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            int r3 = r3.weight
            int r3 = r3 * 10000
            java.util.List r5 = r2.getRequestEntityList()
            java.lang.Object r5 = r5.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r5
            int r5 = r5.weight
            java.util.List r6 = r2.getRequestEntityList()
            r7 = 1
            java.lang.Object r6 = r6.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            int r6 = r6.weight
            int r5 = r5 + r6
            int r3 = r3 / r5
            boolean r5 = com.bianfeng.ymnsdk.hostaction.HostUtils.getChance(r3)
            if (r5 == 0) goto L50
            r2.setFormal_index(r4)
            goto L53
        L50:
            r2.setFormal_index(r7)
        L53:
            java.util.List r4 = r2.getRequestEntityList()
            r5 = 2
            java.lang.Object r4 = r4.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r4 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r4
            int r4 = r4.weight
            int r4 = r4 * 10000
            java.util.List r6 = r2.getRequestEntityList()
            java.lang.Object r6 = r6.get(r5)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r6 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r6
            int r6 = r6.weight
            java.util.List r7 = r2.getRequestEntityList()
            r8 = 3
            java.lang.Object r7 = r7.get(r8)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r7 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r7
            int r7 = r7.weight
            int r6 = r6 + r7
            int r4 = r4 / r6
            boolean r3 = com.bianfeng.ymnsdk.hostaction.HostUtils.getChance(r4)
            if (r3 == 0) goto L87
            r2.setSpare_index(r5)
            goto L8a
        L87:
            r2.setSpare_index(r8)
        L8a:
            goto La
        L8c:
            return
    }

    private static java.lang.String urlOnSdCard4Public(android.content.Context r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            boolean r0 = com.bianfeng.ymnsdk.util.ResourceUtil.isSdcardReady()     // Catch: java.lang.Exception -> L3e
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3e
            r2.<init>()     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = com.bianfeng.ymnsdk.util.ResourceUtil.getSdcardPath()     // Catch: java.lang.Exception -> L3e
            r2.append(r3)     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = ".bftj/sdk/ymnDebug"
            r2.append(r3)     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3e
            r0.<init>(r2)     // Catch: java.lang.Exception -> L3e
            boolean r2 = r0.exists()     // Catch: java.lang.Exception -> L3e
            if (r2 != 0) goto L2a
            return r1
        L2a:
            java.util.Properties r1 = new java.util.Properties     // Catch: java.lang.Exception -> L3e
            r1.<init>()     // Catch: java.lang.Exception -> L3e
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L3e
            r2.<init>(r0)     // Catch: java.lang.Exception -> L3e
            r1.load(r2)     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = "url_host_ymnsdk"
            java.lang.String r2 = r1.getProperty(r2)     // Catch: java.lang.Exception -> L3e
            return r2
        L3e:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }
}
