package com.xiaomi.push.service;

class au {
    private static com.xiaomi.push.service.au a;

    class a {
        final com.xiaomi.push.service.au a;
        java.util.List<com.xiaomi.push.service.au.b> a;
        java.util.List<com.xiaomi.push.service.au.b> b;

        private a(com.xiaomi.push.service.au r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.a = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.b = r1
                return
        }

        a(com.xiaomi.push.service.au r1, com.xiaomi.push.service.av r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    class b {
        int a;
        android.app.Notification a;
        final com.xiaomi.push.service.au a;

        public b(com.xiaomi.push.service.au r1, int r2, android.app.Notification r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.a = r2
                r0.a = r3
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "id:"
                r0.append(r1)
                int r1 = r2.a
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            com.xiaomi.push.service.au r0 = new com.xiaomi.push.service.au
            r0.<init>()
            com.xiaomi.push.service.au.a = r0
            return
    }

    private au() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "GroupSummary"
            r0.append(r1)
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            int r3 = r3.hashCode()
            return r3
    }

    public static com.xiaomi.push.service.au a() {
            com.xiaomi.push.service.au r0 = com.xiaomi.push.service.au.a
            return r0
    }

    private java.lang.String a(android.app.Notification r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            android.os.Bundle r0 = r2.extras
            if (r0 == 0) goto Lf
            android.os.Bundle r2 = r2.extras
            java.lang.String r0 = "push_src_group_name"
            java.lang.String r2 = r2.getString(r0)
            return r2
        Lf:
            r2 = 0
            return r2
    }

    private java.util.List<android.service.notification.StatusBarNotification> a(com.xiaomi.push.service.ax r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L8
            java.util.List r3 = r3.b()
            goto L9
        L8:
            r3 = r0
        L9:
            if (r3 == 0) goto L13
            int r1 = r3.size()
            if (r1 != 0) goto L12
            goto L13
        L12:
            return r3
        L13:
            return r0
    }

    private void a(android.content.Context r8, int r9, android.app.Notification r10, boolean r11) {
            r7 = this;
            java.lang.String r0 = com.xiaomi.push.service.ay.c(r10)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1f
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r10 = "group auto not extract pkg from notification:"
            r8.append(r10)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
        L1b:
            com.xiaomi.channel.commonutils.logger.b.a(r8)
            return
        L1f:
            com.xiaomi.push.service.ax r1 = com.xiaomi.push.service.ax.a(r8, r0)
            java.util.List r1 = r7.a(r1)
            if (r1 != 0) goto L2c
            java.lang.String r8 = "group auto not get notifications"
            goto L1b
        L2c:
            java.lang.String r2 = r7.b(r10)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            java.util.Iterator r1 = r1.iterator()
        L39:
            boolean r4 = r1.hasNext()
            if (r4 == 0) goto L56
            java.lang.Object r4 = r1.next()
            android.service.notification.StatusBarNotification r4 = (android.service.notification.StatusBarNotification) r4
            android.app.Notification r5 = r4.getNotification()
            if (r5 != 0) goto L4c
            goto L39
        L4c:
            int r5 = r4.getId()
            if (r5 == r9) goto L39
            r7.a(r3, r4)
            goto L39
        L56:
            java.util.Set r1 = r3.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L5e:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto Lc6
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            java.lang.String r4 = (java.lang.String) r4
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L77
            goto L5e
        L77:
            java.lang.Object r3 = r3.getValue()
            com.xiaomi.push.service.au$a r3 = (com.xiaomi.push.service.au.a) r3
            if (r11 == 0) goto L9e
            boolean r5 = r4.equals(r2)
            if (r5 == 0) goto L9e
            boolean r5 = r7.b(r10)
            if (r5 != 0) goto L9e
            com.xiaomi.push.service.au$b r5 = new com.xiaomi.push.service.au$b
            r5.<init>(r7, r9, r10)
            boolean r6 = r7.a(r10)
            if (r6 == 0) goto L99
            java.util.List<com.xiaomi.push.service.au$b> r6 = r3.b
            goto L9b
        L99:
            java.util.List<com.xiaomi.push.service.au$b> r6 = r3.a
        L9b:
            r6.add(r5)
        L9e:
            java.util.List<com.xiaomi.push.service.au$b> r5 = r3.a
            int r5 = r5.size()
            java.util.List<com.xiaomi.push.service.au$b> r6 = r3.b
            int r6 = r6.size()
            if (r6 > 0) goto Lc0
            if (r11 == 0) goto L5e
            r6 = 2
            if (r5 < r6) goto L5e
            java.util.List<com.xiaomi.push.service.au$b> r3 = r3.a
            r5 = 0
            java.lang.Object r3 = r3.get(r5)
            com.xiaomi.push.service.au$b r3 = (com.xiaomi.push.service.au.b) r3
            android.app.Notification r3 = r3.a
            r7.a(r8, r0, r4, r3)
            goto L5e
        Lc0:
            if (r5 > 0) goto L5e
            r7.a(r8, r0, r4)
            goto L5e
        Lc6:
            return
    }

    private void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "group cancel summary:"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r0)
            int r5 = r2.a(r4, r5)
            com.xiaomi.push.service.ax r3 = com.xiaomi.push.service.ax.a(r3, r4)
            r3.a(r5)
            return
    }

    private void a(android.content.Context r7, java.lang.String r8, java.lang.String r9, android.app.Notification r10) {
            r6 = this;
            java.lang.String r0 = "GroupSummary"
            java.lang.String r1 = "groupSummary"
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lbe
            if (r2 == 0) goto L10
            java.lang.String r7 = "group show summary group is null"
            com.xiaomi.channel.commonutils.logger.b.a(r7)     // Catch: java.lang.Exception -> Lbe
            return
        L10:
            int r2 = com.xiaomi.push.service.ay.a(r7, r8)     // Catch: java.lang.Exception -> Lbe
            if (r2 != 0) goto L2b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbe
            r7.<init>()     // Catch: java.lang.Exception -> Lbe
            java.lang.String r9 = "group show summary not get icon from "
            r7.append(r9)     // Catch: java.lang.Exception -> Lbe
            r7.append(r8)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> Lbe
            com.xiaomi.channel.commonutils.logger.b.a(r7)     // Catch: java.lang.Exception -> Lbe
            return
        L2b:
            com.xiaomi.push.service.ax r3 = com.xiaomi.push.service.ax.a(r7, r8)     // Catch: java.lang.Exception -> Lbe
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Lbe
            r5 = 26
            if (r4 < r5) goto L5a
            java.lang.String r10 = r10.getChannelId()     // Catch: java.lang.Exception -> Lbe
            java.lang.String r10 = r3.b(r10, r1)     // Catch: java.lang.Exception -> Lbe
            android.app.NotificationChannel r4 = r3.a(r10)     // Catch: java.lang.Exception -> Lbe
            boolean r1 = r1.equals(r10)     // Catch: java.lang.Exception -> Lbe
            if (r1 == 0) goto L54
            if (r4 != 0) goto L54
            android.app.NotificationChannel r1 = new android.app.NotificationChannel     // Catch: java.lang.Exception -> Lbe
            java.lang.String r4 = "group_summary"
            r5 = 3
            r1.<init>(r10, r4, r5)     // Catch: java.lang.Exception -> Lbe
            r3.a(r1)     // Catch: java.lang.Exception -> Lbe
        L54:
            android.app.Notification$Builder r1 = new android.app.Notification$Builder     // Catch: java.lang.Exception -> Lbe
            r1.<init>(r7, r10)     // Catch: java.lang.Exception -> Lbe
            goto L69
        L5a:
            android.app.Notification$Builder r10 = new android.app.Notification$Builder     // Catch: java.lang.Exception -> Lbe
            r10.<init>(r7)     // Catch: java.lang.Exception -> Lbe
            r1 = 0
            android.app.Notification$Builder r10 = r10.setPriority(r1)     // Catch: java.lang.Exception -> Lbe
            r1 = -1
            android.app.Notification$Builder r1 = r10.setDefaults(r1)     // Catch: java.lang.Exception -> Lbe
        L69:
            r10 = 1
            com.xiaomi.push.service.ay.a(r1, r10)     // Catch: java.lang.Exception -> Lbe
            android.app.Notification$Builder r1 = r1.setContentTitle(r0)     // Catch: java.lang.Exception -> Lbe
            android.app.Notification$Builder r0 = r1.setContentText(r0)     // Catch: java.lang.Exception -> Lbe
            android.graphics.drawable.Icon r1 = android.graphics.drawable.Icon.createWithResource(r8, r2)     // Catch: java.lang.Exception -> Lbe
            android.app.Notification$Builder r0 = r0.setSmallIcon(r1)     // Catch: java.lang.Exception -> Lbe
            android.app.Notification$Builder r0 = r0.setAutoCancel(r10)     // Catch: java.lang.Exception -> Lbe
            android.app.Notification$Builder r0 = r0.setGroup(r9)     // Catch: java.lang.Exception -> Lbe
            android.app.Notification$Builder r10 = r0.setGroupSummary(r10)     // Catch: java.lang.Exception -> Lbe
            android.app.Notification r10 = r10.build()     // Catch: java.lang.Exception -> Lbe
            boolean r0 = com.xiaomi.push.m.c()     // Catch: java.lang.Exception -> Lbe
            if (r0 != 0) goto La2
            java.lang.String r0 = "com.xiaomi.xmsf"
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Exception -> Lbe
            boolean r7 = r0.equals(r7)     // Catch: java.lang.Exception -> Lbe
            if (r7 == 0) goto La2
            com.xiaomi.push.service.ay.a(r10, r8)     // Catch: java.lang.Exception -> Lbe
        La2:
            int r7 = r6.a(r8, r9)     // Catch: java.lang.Exception -> Lbe
            r3.a(r7, r10)     // Catch: java.lang.Exception -> Lbe
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbe
            r8.<init>()     // Catch: java.lang.Exception -> Lbe
            java.lang.String r9 = "group show summary notify:"
            r8.append(r9)     // Catch: java.lang.Exception -> Lbe
            r8.append(r7)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Exception -> Lbe
            com.xiaomi.channel.commonutils.logger.b.b(r7)     // Catch: java.lang.Exception -> Lbe
            goto Ld3
        Lbe:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "group show summary error "
            r8.append(r9)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r7)
        Ld3:
            return
    }

    private void a(java.util.Map<java.lang.String, com.xiaomi.push.service.au.a> r4, android.service.notification.StatusBarNotification r5) {
            r3 = this;
            android.app.Notification r0 = r5.getNotification()
            java.lang.String r0 = r3.b(r0)
            java.lang.Object r1 = r4.get(r0)
            com.xiaomi.push.service.au$a r1 = (com.xiaomi.push.service.au.a) r1
            if (r1 != 0) goto L19
            com.xiaomi.push.service.au$a r1 = new com.xiaomi.push.service.au$a
            r2 = 0
            r1.<init>(r3, r2)
            r4.put(r0, r1)
        L19:
            com.xiaomi.push.service.au$b r4 = new com.xiaomi.push.service.au$b
            int r0 = r5.getId()
            android.app.Notification r2 = r5.getNotification()
            r4.<init>(r3, r0, r2)
            android.app.Notification r5 = r5.getNotification()
            boolean r5 = r3.a(r5)
            if (r5 == 0) goto L33
            java.util.List<com.xiaomi.push.service.au$b> r5 = r1.b
            goto L35
        L33:
            java.util.List<com.xiaomi.push.service.au$b> r5 = r1.a
        L35:
            r5.add(r4)
            return
    }

    private boolean a() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private boolean a(android.app.Notification r3) {
            r2 = this;
            if (r3 == 0) goto L16
            r0 = 0
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.String r1 = "isGroupSummary"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r1, r0)
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L16
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            return r3
        L16:
            r3 = 0
            return r3
    }

    private boolean a(android.content.Context r3) {
            r2 = this;
            boolean r0 = r2.b(r3)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r0 = com.xiaomi.push.service.ax.a(r3)
            if (r0 != 0) goto Lf
            return r1
        Lf:
            com.xiaomi.push.service.ba r3 = com.xiaomi.push.service.ba.a(r3)
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.aX
            int r0 = r0.a()
            boolean r3 = r3.a(r0, r1)
            return r3
    }

    private java.lang.String b(android.app.Notification r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r0 = r3.getGroup()
            boolean r1 = r2.b(r3)
            if (r1 == 0) goto L12
            java.lang.String r0 = r2.a(r3)
        L12:
            return r0
    }

    private void b(android.content.Context r6, int r7, android.app.Notification r8) {
            r5 = this;
            java.lang.String r8 = com.xiaomi.push.service.ay.c(r8)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L1f
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = "group restore not extract pkg from notification:"
            r6.append(r8)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
        L1b:
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            return
        L1f:
            com.xiaomi.push.service.ax r8 = com.xiaomi.push.service.ax.a(r6, r8)
            java.util.List r0 = r5.a(r8)
            if (r0 != 0) goto L2c
            java.lang.String r6 = "group restore not get notifications"
            goto L1b
        L2c:
            java.util.Iterator r0 = r0.iterator()
        L30:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L89
            java.lang.Object r1 = r0.next()
            android.service.notification.StatusBarNotification r1 = (android.service.notification.StatusBarNotification) r1
            android.app.Notification r2 = r1.getNotification()
            if (r2 != 0) goto L43
            goto L30
        L43:
            boolean r3 = r5.b(r2)
            if (r3 == 0) goto L30
            int r3 = r1.getId()
            if (r3 == r7) goto L30
            android.app.Notification r3 = r1.getNotification()
            android.app.Notification$Builder r3 = android.app.Notification.Builder.recoverBuilder(r6, r3)
            java.lang.String r4 = r5.a(r2)
            r3.setGroup(r4)
            boolean r2 = r5.a(r2)
            com.xiaomi.push.service.ay.a(r3, r2)
            int r2 = r1.getId()
            android.app.Notification r3 = r3.build()
            r8.a(r2, r3)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "group restore notification:"
            r2.append(r3)
            int r1 = r1.getId()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r1)
            goto L30
        L89:
            return
    }

    private boolean b(android.app.Notification r6) {
            r5 = this;
            r0 = 0
            if (r6 == 0) goto L35
            java.lang.String r1 = r6.getGroup()
            if (r1 == 0) goto L35
            android.os.Bundle r1 = r6.extras
            if (r1 != 0) goto Le
            goto L35
        Le:
            android.os.Bundle r1 = r6.extras
            java.lang.String r2 = "push_src_group_time"
            long r1 = r1.getLong(r2)
            java.lang.String r3 = r5.a(r6)
            java.lang.String r6 = r6.getGroup()
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r4[r0] = r1
            r0 = 1
            r4[r0] = r3
            java.lang.String r0 = "pushmask_%s_%s"
            java.lang.String r0 = java.lang.String.format(r0, r4)
            boolean r6 = r6.equals(r0)
            return r6
        L35:
            return r0
    }

    private boolean b(android.content.Context r3) {
            r2 = this;
            com.xiaomi.push.service.ba r3 = com.xiaomi.push.service.ba.a(r3)
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.aW
            int r0 = r0.a()
            r1 = 1
            boolean r3 = r3.a(r0, r1)
            return r3
    }

    public java.lang.String a(android.content.Context r3, android.app.Notification.Builder r4, java.lang.String r5) {
            r2 = this;
            boolean r0 = r2.a()
            if (r0 == 0) goto L32
            boolean r3 = r2.a(r3)
            if (r3 == 0) goto L32
            long r0 = java.lang.System.currentTimeMillis()
            android.os.Bundle r3 = r4.getExtras()
            java.lang.String r4 = "push_src_group_name"
            r3.putString(r4, r5)
            java.lang.String r4 = "push_src_group_time"
            r3.putLong(r4, r0)
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r3[r4] = r0
            r4 = 1
            r3[r4] = r5
            java.lang.String r4 = "pushmask_%s_%s"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            return r3
        L32:
            return r5
    }

    public void a(android.content.Context r4, int r5, android.app.Notification r6) {
            r3 = this;
            boolean r0 = r3.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r3.a(r4)
            if (r0 == 0) goto L26
            r3.b(r4, r5, r6)     // Catch: java.lang.Exception -> L11
            goto L26
        L11:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "group notify handle restore error "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L26:
            boolean r0 = r3.b(r4)
            if (r0 == 0) goto L46
            r0 = 1
            r3.a(r4, r5, r6, r0)     // Catch: java.lang.Exception -> L31
            goto L46
        L31:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "group notify handle auto error "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L46:
            return
    }
}
