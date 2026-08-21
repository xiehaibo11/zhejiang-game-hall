package com.bianfeng.ymnsdk.action;

public interface ActionAttachment {

    public static class a implements com.bianfeng.ymnsdk.action.ActionAttachment {
        android.app.ProgressDialog a;

        class a implements java.lang.Runnable {
            final android.content.Context a;
            final com.bianfeng.ymnsdk.action.ActionAttachment.a b;

            a(com.bianfeng.ymnsdk.action.ActionAttachment.a r1, android.content.Context r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    android.content.Context r0 = r2.a
                    android.app.Activity r0 = (android.app.Activity) r0
                    boolean r0 = r0.isFinishing()
                    if (r0 != 0) goto L11
                    com.bianfeng.ymnsdk.action.ActionAttachment$a r0 = r2.b
                    android.content.Context r1 = r2.a
                    r0.a(r1)
                L11:
                    return
            }
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        protected void a() {
                r1 = this;
                android.app.ProgressDialog r0 = r1.a
                if (r0 == 0) goto L12
                boolean r0 = r0.isShowing()
                if (r0 == 0) goto L12
                android.app.ProgressDialog r0 = r1.a
                r0.dismiss()
                r0 = 0
                r1.a = r0
            L12:
                return
        }

        protected void a(android.content.Context r3) {
                r2 = this;
                r2.a()
                java.util.Locale r0 = java.util.Locale.getDefault()
                java.lang.String r0 = r0.toString()
                java.lang.String r0 = r0.toUpperCase()
                java.lang.String r1 = "ZH_TW"
                boolean r1 = r0.contains(r1)
                if (r1 != 0) goto L4d
                java.lang.String r1 = "ZH_HK"
                boolean r1 = r0.contains(r1)
                if (r1 == 0) goto L20
                goto L4d
            L20:
                java.lang.String r1 = "ZH"
                boolean r1 = r0.contains(r1)
                if (r1 != 0) goto L4a
                java.lang.String r1 = "zh"
                boolean r1 = r0.contains(r1)
                if (r1 == 0) goto L31
                goto L4a
            L31:
                java.lang.String r1 = "VN"
                boolean r1 = r0.contains(r1)
                if (r1 == 0) goto L3c
                java.lang.String r0 = " Đang tải ... "
                goto L4f
            L3c:
                java.lang.String r1 = "TH"
                boolean r0 = r0.contains(r1)
                if (r0 == 0) goto L47
                java.lang.String r0 = " กำลังโหลด ... "
                goto L4f
            L47:
                java.lang.String r0 = " Loading... "
                goto L4f
            L4a:
                java.lang.String r0 = " 加载中... "
                goto L4f
            L4d:
                java.lang.String r0 = " 加載中... "
            L4f:
                r1 = 0
                android.app.ProgressDialog r3 = android.app.ProgressDialog.show(r3, r1, r0)
                r2.a = r3
                return
        }

        @Override
        public void onEnd(android.content.Context r2) {
                r1 = this;
                r1.a()
                boolean r0 = r2 instanceof android.app.Activity
                if (r0 == 0) goto Lc
                android.app.Activity r2 = (android.app.Activity) r2
                com.bianfeng.ymnsdk.util.SystemUtil.hideVirtualKey(r2)
            Lc:
                return
        }

        @Override
        public void onStart(android.content.Context r3) {
                r2 = this;
                boolean r0 = r3 instanceof android.app.Activity
                if (r0 == 0) goto L10
                r0 = r3
                android.app.Activity r0 = (android.app.Activity) r0
                com.bianfeng.ymnsdk.action.ActionAttachment$a$a r1 = new com.bianfeng.ymnsdk.action.ActionAttachment$a$a
                r1.<init>(r2, r3)
                r0.runOnUiThread(r1)
                goto L13
            L10:
                r2.a(r3)
            L13:
                return
        }
    }

    void onEnd(android.content.Context r1);

    void onStart(android.content.Context r1);
}
