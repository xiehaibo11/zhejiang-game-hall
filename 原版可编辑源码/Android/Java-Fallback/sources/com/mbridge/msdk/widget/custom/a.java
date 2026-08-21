package com.mbridge.msdk.widget.custom;

public interface a {

    public enum a extends java.lang.Enum<com.mbridge.msdk.widget.custom.a.a> {
        public static final com.mbridge.msdk.widget.custom.a.a a = null;
        public static final com.mbridge.msdk.widget.custom.a.a b = null;
        public static final com.mbridge.msdk.widget.custom.a.a c = null;
        private static final com.mbridge.msdk.widget.custom.a.a[] d = null;

        static {
                com.mbridge.msdk.widget.custom.a$a r0 = new com.mbridge.msdk.widget.custom.a$a
                r1 = 0
                java.lang.String r2 = "CLICK_EVENT_OPEN_PRIVACY"
                r0.<init>(r2, r1)
                com.mbridge.msdk.widget.custom.a.a.a = r0
                com.mbridge.msdk.widget.custom.a$a r0 = new com.mbridge.msdk.widget.custom.a$a
                r2 = 1
                java.lang.String r3 = "CLICK_EVENT_DOWNLOAD"
                r0.<init>(r3, r2)
                com.mbridge.msdk.widget.custom.a.a.b = r0
                com.mbridge.msdk.widget.custom.a$a r0 = new com.mbridge.msdk.widget.custom.a$a
                r3 = 2
                java.lang.String r4 = "CLICK_EVENT_CLOSE"
                r0.<init>(r4, r3)
                com.mbridge.msdk.widget.custom.a.a.c = r0
                r4 = 3
                com.mbridge.msdk.widget.custom.a$a[] r4 = new com.mbridge.msdk.widget.custom.a.a[r4]
                com.mbridge.msdk.widget.custom.a$a r5 = com.mbridge.msdk.widget.custom.a.a.a
                r4[r1] = r5
                com.mbridge.msdk.widget.custom.a$a r1 = com.mbridge.msdk.widget.custom.a.a.b
                r4[r2] = r1
                r4[r3] = r0
                com.mbridge.msdk.widget.custom.a.a.d = r4
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.mbridge.msdk.widget.custom.a.a valueOf(java.lang.String r1) {
                java.lang.Class<com.mbridge.msdk.widget.custom.a$a> r0 = com.mbridge.msdk.widget.custom.a.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.mbridge.msdk.widget.custom.a$a r1 = (com.mbridge.msdk.widget.custom.a.a) r1
                return r1
        }

        public static com.mbridge.msdk.widget.custom.a.a[] values() {
                com.mbridge.msdk.widget.custom.a$a[] r0 = com.mbridge.msdk.widget.custom.a.a.d
                java.lang.Object r0 = r0.clone()
                com.mbridge.msdk.widget.custom.a$a[] r0 = (com.mbridge.msdk.widget.custom.a.a[]) r0
                return r0
        }
    }

    void a(com.mbridge.msdk.widget.custom.DownloadMessageDialog r1, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r2);

    void a(com.mbridge.msdk.widget.custom.DownloadMessageDialog r1, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r2, com.mbridge.msdk.widget.custom.a.a r3);

    void a(com.mbridge.msdk.widget.custom.DownloadMessageDialog r1, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r2, java.lang.Exception r3);

    void b(com.mbridge.msdk.widget.custom.DownloadMessageDialog r1, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r2);

    void c(com.mbridge.msdk.widget.custom.DownloadMessageDialog r1, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r2);
}
