package com.meizu.cloud.pushsdk.b;

class e {
    private final java.text.SimpleDateFormat a;
    private final com.meizu.cloud.pushsdk.b.d b;
    private java.io.BufferedWriter c;


    class a implements java.util.Comparator<java.io.File> {
        final com.meizu.cloud.pushsdk.b.e a;

        a(com.meizu.cloud.pushsdk.b.e r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public int a(java.io.File r3, java.io.File r4) {
                r2 = this;
                long r0 = r3.lastModified()
                long r3 = r4.lastModified()
                long r0 = r0 - r3
                r3 = 0
                int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
                if (r3 <= 0) goto L11
                r3 = -1
                return r3
            L11:
                if (r3 != 0) goto L15
                r3 = 0
                return r3
            L15:
                r3 = 1
                return r3
        }

        @Override
        public int compare(java.io.File r1, java.io.File r2) {
                r0 = this;
                java.io.File r1 = (java.io.File) r1
                java.io.File r2 = (java.io.File) r2
                int r1 = r0.a(r1, r2)
                return r1
        }
    }

    public e() {
            r2 = this;
            r2.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd"
            r0.<init>(r1)
            r2.a = r0
            com.meizu.cloud.pushsdk.b.d r0 = new com.meizu.cloud.pushsdk.b.d
            java.lang.String r1 = "lo"
            r0.<init>(r1)
            r2.b = r0
            return
    }

    public void a() {
            r1 = this;
            java.io.BufferedWriter r0 = r1.c
            if (r0 == 0) goto Lf
            r0.flush()
            java.io.BufferedWriter r0 = r1.c
            r0.close()
            r0 = 0
            r1.c = r0
        Lf:
            return
    }

    void a(java.io.File r3) {
            r2 = this;
            com.meizu.cloud.pushsdk.b.e$1 r0 = new com.meizu.cloud.pushsdk.b.e$1
            r0.<init>(r2)
            java.io.File[] r3 = r3.listFiles(r0)
            if (r3 == 0) goto L22
            int r0 = r3.length
            r1 = 7
            if (r0 <= r1) goto L22
            com.meizu.cloud.pushsdk.b.e$a r0 = new com.meizu.cloud.pushsdk.b.e$a
            r0.<init>(r2)
            java.util.Arrays.sort(r3, r0)
        L17:
            int r0 = r3.length
            if (r1 >= r0) goto L22
            r0 = r3[r1]
            r0.delete()
            int r1 = r1 + 1
            goto L17
        L22:
            return
    }

    public void a(java.lang.String r6) {
            r5 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L2e
            boolean r1 = r0.mkdirs()
            if (r1 == 0) goto L12
            goto L2e
        L12:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "create "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = " dir failed!!!"
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L2e:
            java.text.SimpleDateFormat r1 = r5.a
            java.util.Date r2 = new java.util.Date
            r2.<init>()
            java.lang.String r1 = r1.format(r2)
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r4 = ".log.txt"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r6, r3)
            boolean r6 = r2.exists()
            if (r6 != 0) goto L7a
            boolean r6 = r2.createNewFile()
            if (r6 != 0) goto L77
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "create new file "
            r6.append(r0)
            r6.append(r1)
            java.lang.String r0 = " failed !!!"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = "EncryptionWriter"
            android.util.Log.e(r0, r6)
            goto L7a
        L77:
            r5.a(r0)
        L7a:
            java.io.BufferedWriter r6 = new java.io.BufferedWriter
            java.io.FileWriter r0 = new java.io.FileWriter
            r1 = 1
            r0.<init>(r2, r1)
            r6.<init>(r0)
            r5.c = r6
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.io.BufferedWriter r0 = r1.c
            if (r0 == 0) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
            java.io.BufferedWriter r3 = r1.c
            com.meizu.cloud.pushsdk.b.d r4 = r1.b
            byte[] r2 = r2.getBytes()
            java.lang.String r2 = r4.a(r2)
            r3.write(r2)
            java.io.BufferedWriter r2 = r1.c
            java.lang.String r3 = "\r\n"
            r2.write(r3)
        L31:
            return
    }
}
