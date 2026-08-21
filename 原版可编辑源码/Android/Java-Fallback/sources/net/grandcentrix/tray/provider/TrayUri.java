package net.grandcentrix.tray.provider;

class TrayUri {
    private final android.net.Uri mContentUri;
    private final android.net.Uri mContentUriInternal;
    private android.content.Context mContext;

    public final class a {
        private boolean a;
        private java.lang.String b;
        private java.lang.String c;
        private net.grandcentrix.tray.core.TrayStorage.a d;
        final net.grandcentrix.tray.provider.TrayUri e;

        public a(net.grandcentrix.tray.provider.TrayUri r2, android.content.Context r3) {
                r1 = this;
                r1.e = r2
                r1.<init>()
                net.grandcentrix.tray.core.TrayStorage$a r0 = net.grandcentrix.tray.core.TrayStorage.a.a
                r1.d = r0
                android.content.Context r0 = r3.getApplicationContext()
                net.grandcentrix.tray.provider.TrayUri.access$002(r2, r0)
                return
        }

        public android.net.Uri a() {
                r4 = this;
                boolean r0 = r4.a
                if (r0 == 0) goto Lb
                net.grandcentrix.tray.provider.TrayUri r0 = r4.e
                android.net.Uri r0 = net.grandcentrix.tray.provider.TrayUri.access$100(r0)
                goto L11
            Lb:
                net.grandcentrix.tray.provider.TrayUri r0 = r4.e
                android.net.Uri r0 = net.grandcentrix.tray.provider.TrayUri.access$200(r0)
            L11:
                android.net.Uri$Builder r1 = r0.buildUpon()
                java.lang.String r2 = r4.c
                if (r2 == 0) goto L1c
                r1.appendPath(r2)
            L1c:
                java.lang.String r2 = r4.b
                if (r2 == 0) goto L23
                r1.appendPath(r2)
            L23:
                net.grandcentrix.tray.core.TrayStorage$a r2 = r4.d
                net.grandcentrix.tray.core.TrayStorage$a r3 = net.grandcentrix.tray.core.TrayStorage.a.a
                if (r2 == r3) goto L3c
            L2a:
                net.grandcentrix.tray.core.TrayStorage$a r3 = net.grandcentrix.tray.core.TrayStorage.a.b
                boolean r2 = r3.equals(r2)
                if (r2 == 0) goto L35
                java.lang.String r2 = "true"
                goto L37
            L35:
                java.lang.String r2 = "false"
            L37:
                java.lang.String r3 = "backup"
                r1.appendQueryParameter(r3, r2)
            L3c:
                android.net.Uri r2 = r1.build()
                return r2
        }

        public net.grandcentrix.tray.provider.TrayUri.a a(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public net.grandcentrix.tray.provider.TrayUri.a a(net.grandcentrix.tray.core.TrayStorage.a r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        public net.grandcentrix.tray.provider.TrayUri.a a(boolean r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public net.grandcentrix.tray.provider.TrayUri.a b(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return r0
        }
    }

    public TrayUri(@android.support.annotation.NonNull android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.mContext = r2
            android.net.Uri r0 = net.grandcentrix.tray.provider.TrayContract.generateContentUri(r2)
            r1.mContentUri = r0
            android.net.Uri r0 = net.grandcentrix.tray.provider.TrayContract.generateInternalContentUri(r2)
            r1.mContentUriInternal = r0
            return
    }

    static android.content.Context access$002(net.grandcentrix.tray.provider.TrayUri r0, android.content.Context r1) {
            r0.mContext = r1
            return r1
    }

    static android.net.Uri access$100(net.grandcentrix.tray.provider.TrayUri r1) {
            android.net.Uri r0 = r1.mContentUriInternal
            return r0
    }

    static android.net.Uri access$200(net.grandcentrix.tray.provider.TrayUri r1) {
            android.net.Uri r0 = r1.mContentUri
            return r0
    }

    public net.grandcentrix.tray.provider.TrayUri.a builder() {
            r2 = this;
            net.grandcentrix.tray.provider.TrayUri$a r0 = new net.grandcentrix.tray.provider.TrayUri$a
            android.content.Context r1 = r2.mContext
            r0.<init>(r2, r1)
            return r0
    }

    public android.net.Uri get() {
            r1 = this;
            android.net.Uri r0 = r1.mContentUri
            return r0
    }

    public android.net.Uri getInternal() {
            r1 = this;
            android.net.Uri r0 = r1.mContentUriInternal
            return r0
    }
}
