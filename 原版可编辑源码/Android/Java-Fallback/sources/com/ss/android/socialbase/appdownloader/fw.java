package com.ss.android.socialbase.appdownloader;

public final class fw {

    public static class rg {
        private int c;
        private java.lang.String df;
        private boolean fw;
        private java.lang.String pp;
        private java.lang.String pt;
        private android.graphics.drawable.Drawable q;
        private java.lang.String rg;

        public rg(java.lang.String r1, java.lang.String r2, android.graphics.drawable.Drawable r3, java.lang.String r4, java.lang.String r5, int r6, boolean r7) {
                r0 = this;
                r0.<init>()
                r0.df(r2)
                r0.rg(r3)
                r0.rg(r1)
                r0.q(r4)
                r0.pt(r5)
                r0.rg(r6)
                r0.rg(r7)
                return
        }

        public int c() {
                r1 = this;
                int r0 = r1.c
                return r0
        }

        public void df(java.lang.String r1) {
                r0 = this;
                r0.df = r1
                return
        }

        public boolean df() {
                r1 = this;
                boolean r0 = r1.fw
                return r0
        }

        public java.lang.String fw() {
                r1 = this;
                java.lang.String r0 = r1.pp
                return r0
        }

        public java.lang.String pp() {
                r1 = this;
                java.lang.String r0 = r1.pt
                return r0
        }

        public java.lang.String pt() {
                r1 = this;
                java.lang.String r0 = r1.df
                return r0
        }

        public void pt(java.lang.String r1) {
                r0 = this;
                r0.pp = r1
                return
        }

        public java.lang.String q() {
                r1 = this;
                java.lang.String r0 = r1.rg
                return r0
        }

        public void q(java.lang.String r1) {
                r0 = this;
                r0.pt = r1
                return
        }

        public android.graphics.drawable.Drawable rg() {
                r1 = this;
                android.graphics.drawable.Drawable r0 = r1.q
                return r0
        }

        public void rg(int r1) {
                r0 = this;
                r0.c = r1
                return
        }

        public void rg(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.q = r1
                return
        }

        public void rg(java.lang.String r1) {
                r0 = this;
                r0.rg = r1
                return
        }

        public void rg(boolean r1) {
                r0 = this;
                r0.fw = r1
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "{\n  pkg name: "
                r0.append(r1)
                java.lang.String r1 = r2.q()
                r0.append(r1)
                java.lang.String r1 = "\n  app icon: "
                r0.append(r1)
                android.graphics.drawable.Drawable r1 = r2.rg()
                r0.append(r1)
                java.lang.String r1 = "\n  app name: "
                r0.append(r1)
                java.lang.String r1 = r2.pt()
                r0.append(r1)
                java.lang.String r1 = "\n  app path: "
                r0.append(r1)
                java.lang.String r1 = r2.pp()
                r0.append(r1)
                java.lang.String r1 = "\n  app v name: "
                r0.append(r1)
                java.lang.String r1 = r2.fw()
                r0.append(r1)
                java.lang.String r1 = "\n  app v code: "
                r0.append(r1)
                int r1 = r2.c()
                r0.append(r1)
                java.lang.String r1 = "\n  is system: "
                r0.append(r1)
                boolean r1 = r2.df()
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public static com.ss.android.socialbase.appdownloader.fw.rg df(java.lang.String r3) {
            r0 = 0
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            if (r1 != 0) goto Lc
            return r0
        Lc:
            r2 = 0
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            com.ss.android.socialbase.appdownloader.fw$rg r3 = rg(r1, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            return r3
        L16:
            r3 = move-exception
            r3.printStackTrace()
            return r0
    }

    private static boolean q(java.lang.String r5) {
            r0 = 1
            if (r5 != 0) goto L4
            return r0
        L4:
            int r1 = r5.length()
            r2 = 0
            r3 = r2
        La:
            if (r3 >= r1) goto L1a
            char r4 = r5.charAt(r3)
            boolean r4 = java.lang.Character.isWhitespace(r4)
            if (r4 != 0) goto L17
            return r2
        L17:
            int r3 = r3 + 1
            goto La
        L1a:
            return r0
    }

    public static int rg(java.lang.String r3) {
            boolean r0 = q(r3)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            r2 = 0
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
            if (r3 != 0) goto L18
            goto L1a
        L18:
            int r1 = r3.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1b
        L1a:
            return r1
        L1b:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    private static com.ss.android.socialbase.appdownloader.fw.rg rg(android.content.pm.PackageManager r10, android.content.pm.PackageInfo r11) {
            r0 = 0
            if (r11 != 0) goto L4
            return r0
        L4:
            android.content.pm.ApplicationInfo r1 = r11.applicationInfo
            java.lang.String r3 = r11.packageName
            if (r1 == 0) goto L19
            java.lang.CharSequence r2 = r1.loadLabel(r10)
            if (r2 == 0) goto L19
            java.lang.CharSequence r2 = r1.loadLabel(r10)
            java.lang.String r2 = r2.toString()
            goto L1b
        L19:
            java.lang.String r2 = ""
        L1b:
            r4 = r2
            android.graphics.drawable.Drawable r0 = r1.loadIcon(r10)     // Catch: java.lang.Exception -> L20
        L20:
            r5 = r0
            java.lang.String r6 = r1.sourceDir
            java.lang.String r7 = r11.versionName
            int r8 = r11.versionCode
            int r10 = r1.flags
            r11 = 1
            r10 = r10 & r11
            if (r10 == 0) goto L2f
            r9 = r11
            goto L31
        L2f:
            r10 = 0
            r9 = r10
        L31:
            com.ss.android.socialbase.appdownloader.fw$rg r10 = new com.ss.android.socialbase.appdownloader.fw$rg
            r2 = r10
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            return r10
    }
}
