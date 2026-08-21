package com.mbridge.msdk.click;

public final class CommonJumpLoader extends com.mbridge.msdk.click.d {
    com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult a;
    private int b;
    private java.lang.String c;
    private int d;
    private com.mbridge.msdk.click.e e;
    private boolean f;
    private com.mbridge.msdk.foundation.same.e.b g;
    private com.mbridge.msdk.click.j h;
    private android.os.Handler i;

    public static class JumpLoaderResult implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
        public static final int CODE_DOWNLOAD = 3;
        public static final int CODE_LINK = 2;
        public static final int CODE_MARKET = 1;
        public static final int CODE_NULL = 4;
        private static final long serialVersionUID = 1;
        private int code;
        private java.lang.String content;
        private java.lang.String exceptionMsg;
        private java.lang.String header;
        private boolean is302Jump;
        private boolean jumpDone;
        private java.lang.String msg;
        private java.lang.String noticeurl;
        private int statusCode;
        private boolean success;
        private int type;
        private java.lang.String url;

        public JumpLoaderResult() {
                r0 = this;
                r0.<init>()
                return
        }

        public int getCode() {
                r1 = this;
                int r0 = r1.code
                return r0
        }

        public java.lang.String getContent() {
                r1 = this;
                java.lang.String r0 = r1.content
                return r0
        }

        public java.lang.String getExceptionMsg() {
                r1 = this;
                java.lang.String r0 = r1.exceptionMsg
                return r0
        }

        public java.lang.String getHeader() {
                r1 = this;
                java.lang.String r0 = r1.header
                return r0
        }

        public java.lang.String getMsg() {
                r1 = this;
                java.lang.String r0 = r1.msg
                return r0
        }

        public java.lang.String getNoticeurl() {
                r1 = this;
                java.lang.String r0 = r1.noticeurl
                return r0
        }

        public int getStatusCode() {
                r1 = this;
                int r0 = r1.statusCode
                return r0
        }

        public int getType() {
                r1 = this;
                int r0 = r1.type
                return r0
        }

        public java.lang.String getUrl() {
                r1 = this;
                java.lang.String r0 = r1.url
                return r0
        }

        public boolean isIs302Jump() {
                r1 = this;
                boolean r0 = r1.is302Jump
                return r0
        }

        public boolean isSuccess() {
                r1 = this;
                boolean r0 = r1.success
                return r0
        }

        public boolean isjumpDone() {
                r1 = this;
                boolean r0 = r1.jumpDone
                return r0
        }

        public void setCode(int r1) {
                r0 = this;
                r0.code = r1
                return
        }

        public void setContent(java.lang.String r1) {
                r0 = this;
                r0.content = r1
                return
        }

        public void setExceptionMsg(java.lang.String r1) {
                r0 = this;
                r0.exceptionMsg = r1
                return
        }

        public void setHeader(java.lang.String r1) {
                r0 = this;
                r0.header = r1
                return
        }

        public void setIs302Jump(boolean r1) {
                r0 = this;
                r0.is302Jump = r1
                return
        }

        public void setMsg(java.lang.String r1) {
                r0 = this;
                r0.msg = r1
                return
        }

        public void setNoticeurl(java.lang.String r1) {
                r0 = this;
                r0.noticeurl = r1
                return
        }

        public void setStatusCode(int r1) {
                r0 = this;
                r0.statusCode = r1
                return
        }

        public void setSuccess(boolean r1) {
                r0 = this;
                r0.success = r1
                return
        }

        public void setType(int r1) {
                r0 = this;
                r0.type = r1
                return
        }

        public void setUrl(java.lang.String r1) {
                r0 = this;
                r0.url = r1
                return
        }

        public void setjumpDone(boolean r1) {
                r0 = this;
                r0.jumpDone = r1
                return
        }
    }

    public CommonJumpLoader(android.content.Context r3, boolean r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r0 = 0
            r2.c = r0
            r2.a = r0
            r2.e = r0
            r0 = 1
            r2.f = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.i = r0
            if (r4 == 0) goto L26
            com.mbridge.msdk.foundation.same.e.b r0 = new com.mbridge.msdk.foundation.same.e.b
            r1 = 2
            r0.<init>(r3, r1)
            r2.g = r0
            goto L2d
        L26:
            com.mbridge.msdk.foundation.same.e.b r0 = new com.mbridge.msdk.foundation.same.e.b
            r0.<init>(r3)
            r2.g = r0
        L2d:
            com.mbridge.msdk.click.j r0 = new com.mbridge.msdk.click.j
            r0.<init>(r3, r4)
            r2.h = r0
            return
    }

    @Override
    public final void a() {
            r1 = this;
            r0 = 0
            r1.f = r0
            return
    }

    public final void a(java.lang.String r7, java.lang.String r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, com.mbridge.msdk.click.e r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public final void a(java.lang.String r16, java.lang.String r17, com.mbridge.msdk.foundation.entity.CampaignEx r18, com.mbridge.msdk.click.e r19, com.mbridge.msdk.rover.d r20) {
            r15 = this;
            r0 = r15
            java.lang.String r1 = new java.lang.String
            java.lang.String r2 = r18.getClickURL()
            r1.<init>(r2)
            r0.c = r1
            r1 = r19
            r0.e = r1
            r2 = 0
            r0.a = r2
            java.lang.String r2 = r18.getClick_mode()
            java.lang.String r3 = "5"
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L2e
            java.lang.String r2 = r18.getClick_mode()
            java.lang.String r3 = "6"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L2c
            goto L2e
        L2c:
            r2 = 0
            goto L2f
        L2e:
            r2 = 1
        L2f:
            r6 = r2
            com.mbridge.msdk.click.j r3 = r0.h
            java.lang.String r4 = r18.getClickURL()
            java.lang.String r8 = r18.getId()
            r12 = 1
            r13 = 0
            int r14 = com.mbridge.msdk.click.a.a.j
            r5 = r19
            r7 = r16
            r9 = r17
            r10 = r20
            r11 = r18
            r3.a(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return
    }

    public final void a(java.lang.String r14, java.lang.String r15, com.mbridge.msdk.foundation.entity.CampaignEx r16, com.mbridge.msdk.click.e r17, java.lang.String r18, boolean r19, boolean r20, int r21) {
            r13 = this;
            r0 = r13
            r2 = r18
            r0.c = r2
            r3 = r17
            r0.e = r3
            r1 = 0
            r0.a = r1
            r12 = r21
            r0.d = r12
            r1 = 0
            if (r16 == 0) goto L31
            java.lang.String r4 = r16.getClick_mode()
            java.lang.String r5 = "5"
            boolean r4 = r5.equals(r4)
            if (r4 != 0) goto L2b
            java.lang.String r4 = r16.getClick_mode()
            java.lang.String r5 = "6"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L2c
        L2b:
            r1 = 1
        L2c:
            java.lang.String r4 = r16.getId()
            goto L33
        L31:
            java.lang.String r4 = ""
        L33:
            r6 = r4
            r4 = r1
            com.mbridge.msdk.click.j r1 = r0.h
            r8 = 0
            r2 = r18
            r3 = r17
            r5 = r14
            r7 = r15
            r9 = r16
            r10 = r19
            r11 = r20
            r12 = r21
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return
    }
}
