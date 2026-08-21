package com.sigmob.sdk.base.network;

public class c {
    public static final java.lang.String a = "localhost";
    public static final int b = 80;
    public static final java.lang.String c = "\r\n\r\n";
    public static final java.lang.String d = "HTTP/1.1";
    public static final java.lang.String e = "GET";
    public static final java.lang.String f = " HTTP/";
    public static final int g = 3145728;
    public static final java.lang.String h = "HttpParser";
    private static final java.lang.String i = "Range: bytes=";
    private static final java.lang.String j = "Range: bytes=0-";
    private static final int k = 10240;

    public static class a {
        public static final java.lang.String a = "HttpGetProxy";
        private java.net.Socket b;
        private java.net.SocketAddress c;

        public a(java.net.Socket r2, java.net.SocketAddress r3) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.b = r0
                r1.b = r2
                r1.c = r3
                return
        }

        public int a(java.lang.String r6, long r7) throws java.lang.Exception {
                r5 = this;
                r0 = 8192(0x2000, float:1.148E-41)
                byte[] r0 = new byte[r0]
                java.lang.System.currentTimeMillis()
                java.io.File r1 = new java.io.File
                r1.<init>(r6)
                long r2 = r1.length()
                int r6 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
                r2 = 0
                if (r6 <= 0) goto L16
                return r2
            L16:
                java.io.RandomAccessFile r6 = new java.io.RandomAccessFile
                java.lang.String r3 = "rw"
                r6.<init>(r1, r3)
                r3 = 0
                int r1 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
                if (r1 <= 0) goto L26
                r6.seek(r7)
            L26:
                r7 = r2
            L27:
                int r8 = r6.read(r0)     // Catch: java.lang.Exception -> L6e
                r1 = -1
                if (r8 == r1) goto L61
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6e
                r1.<init>()     // Catch: java.lang.Exception -> L6e
                java.lang.String r3 = "tmpFileRaf read size"
                r1.append(r3)     // Catch: java.lang.Exception -> L6e
                r1.append(r8)     // Catch: java.lang.Exception -> L6e
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L6e
                com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Exception -> L6e
                int r7 = r7 + r8
                java.net.Socket r1 = r5.b     // Catch: java.lang.Exception -> L6e
                java.io.OutputStream r1 = r1.getOutputStream()     // Catch: java.lang.Exception -> L6e
                r1.write(r0, r2, r8)     // Catch: java.lang.Exception -> L6e
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6e
                r1.<init>()     // Catch: java.lang.Exception -> L6e
                java.lang.String r3 = "mSckPlayer write size"
                r1.append(r3)     // Catch: java.lang.Exception -> L6e
                r1.append(r8)     // Catch: java.lang.Exception -> L6e
                java.lang.String r8 = r1.toString()     // Catch: java.lang.Exception -> L6e
                com.czhj.sdk.logger.SigmobLog.d(r8)     // Catch: java.lang.Exception -> L6e
                goto L27
            L61:
                java.net.Socket r8 = r5.b     // Catch: java.lang.Exception -> L6e
                java.io.OutputStream r8 = r8.getOutputStream()     // Catch: java.lang.Exception -> L6e
                r8.flush()     // Catch: java.lang.Exception -> L6e
                r6.close()     // Catch: java.lang.Exception -> L6e
                return r7
            L6e:
                r7 = move-exception
                java.lang.String r8 = "sendPrebufferToMP"
                com.czhj.sdk.logger.SigmobLog.e(r8, r7)
                r6.close()
                throw r7
        }

        public void a(byte[] r2) throws java.io.IOException {
                r1 = this;
                int r0 = r2.length
                if (r0 != 0) goto L4
                return
            L4:
                java.net.Socket r0 = r1.b
                java.io.OutputStream r0 = r0.getOutputStream()
                r0.write(r2)
                java.net.Socket r2 = r1.b
                java.io.OutputStream r2 = r2.getOutputStream()
                r2.flush()
                return
        }

        public void a(byte[] r3, int r4) throws java.io.IOException {
                r2 = this;
                java.net.Socket r0 = r2.b
                java.io.OutputStream r0 = r0.getOutputStream()
                r1 = 0
                r0.write(r3, r1, r4)
                java.net.Socket r3 = r2.b
                java.io.OutputStream r3 = r3.getOutputStream()
                r3.flush()
                return
        }
    }

    public static class b {
        private int a;
        private java.lang.String b;
        private int c;
        private java.lang.String d;
        private byte[] e;
        private int f;

        public class a {
            public java.lang.String a;
            public long b;
            final com.sigmob.sdk.base.network.c.b c;

            public a(com.sigmob.sdk.base.network.c.b r1) {
                    r0 = this;
                    r0.c = r1
                    r0.<init>()
                    return
            }
        }

        public b(java.lang.String r2, int r3, java.lang.String r4, int r5) {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.a = r0
                r0 = 10240(0x2800, float:1.4349E-41)
                byte[] r0 = new byte[r0]
                r1.e = r0
                r0 = 0
                r1.f = r0
                r1.b = r2
                r1.a = r3
                r1.d = r4
                r1.c = r5
                return
        }

        private java.util.List<byte[]> a(java.lang.String r5, java.lang.String r6, byte[] r7, int r8) {
                r4 = this;
                int r0 = r4.f
                int r0 = r0 + r8
                byte[] r1 = r4.e
                int r1 = r1.length
                if (r0 < r1) goto Lb
                r4.b()
            Lb:
                byte[] r0 = r4.e
                int r1 = r4.f
                r2 = 0
                java.lang.System.arraycopy(r7, r2, r0, r1, r8)
                int r7 = r4.f
                int r7 = r7 + r8
                r4.f = r7
                java.util.ArrayList r7 = new java.util.ArrayList
                r7.<init>()
                r8 = 0
                java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L29
                byte[] r1 = r4.e     // Catch: java.io.UnsupportedEncodingException -> L29
                java.lang.String r3 = "utf-8"
                r0.<init>(r1, r3)     // Catch: java.io.UnsupportedEncodingException -> L29
                r8 = r0
                goto L2d
            L29:
                r0 = move-exception
                r0.printStackTrace()
            L2d:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "headerBuffer "
                r0.append(r1)
                r0.append(r8)
                java.lang.String r0 = r0.toString()
                com.czhj.sdk.logger.SigmobLog.e(r0)
                boolean r0 = r8.contains(r5)
                if (r0 == 0) goto L97
                boolean r0 = r8.contains(r6)
                if (r0 == 0) goto L97
                int r5 = r8.indexOf(r5, r2)
                int r8 = r8.indexOf(r6, r5)
                int r6 = r6.length()
                int r8 = r8 + r6
                int r8 = r8 - r5
                byte[] r6 = new byte[r8]
                byte[] r0 = r4.e
                java.lang.System.arraycopy(r0, r5, r6, r2, r8)
                r7.add(r6)
                int r5 = r4.f
                if (r5 <= r8) goto L74
                int r5 = r5 - r8
                byte[] r6 = new byte[r5]
                byte[] r0 = r4.e
                java.lang.System.arraycopy(r0, r8, r6, r2, r5)
                r7.add(r6)
            L74:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r6 = "total:"
                r5.append(r6)
                int r6 = r4.f
                r5.append(r6)
                java.lang.String r6 = ",header.length:"
                r5.append(r6)
                r5.append(r8)
                java.lang.String r5 = r5.toString()
                java.lang.String r6 = "----------------"
                android.util.Log.e(r6, r5)
                r4.b()
            L97:
                return r7
        }

        public com.sigmob.sdk.base.network.c.b.a a(byte[] r5) {
                r4 = this;
                com.sigmob.sdk.base.network.c$b$a r0 = new com.sigmob.sdk.base.network.c$b$a
                r0.<init>(r4)
                java.lang.String r1 = new java.lang.String
                r1.<init>(r5)
                r0.a = r1
                java.lang.String r5 = r0.a
                java.lang.String r1 = r4.d
                java.lang.String r2 = r4.b
                java.lang.String r5 = r5.replace(r1, r2)
                r0.a = r5
                int r5 = r4.a
                java.lang.String r1 = ":"
                r2 = -1
                if (r5 != r2) goto L39
                java.lang.String r5 = r0.a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r1)
                int r1 = r4.c
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                java.lang.String r2 = ""
                java.lang.String r5 = r5.replace(r1, r2)
                goto L61
            L39:
                java.lang.String r5 = r0.a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r1)
                int r3 = r4.c
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r1)
                int r1 = r4.a
                r3.append(r1)
                java.lang.String r1 = r3.toString()
                java.lang.String r5 = r5.replace(r2, r1)
            L61:
                r0.a = r5
                java.lang.String r5 = r0.a
                java.lang.String r1 = "Range: bytes="
                boolean r5 = r5.contains(r1)
                if (r5 != 0) goto L79
                java.lang.String r5 = r0.a
                java.lang.String r2 = "\r\n\r\n"
                java.lang.String r3 = "\r\nRange: bytes=0-\r\n\r\n"
                java.lang.String r5 = r5.replace(r2, r3)
                r0.a = r5
            L79:
                java.lang.String r5 = r0.a
                java.lang.String r2 = "HttpParser"
                android.util.Log.e(r2, r5)
                java.lang.String r5 = r0.a
                int r5 = r5.indexOf(r1)
                int r5 = r5 + 13
                java.lang.String r1 = r0.a
                java.lang.String r3 = "-"
                int r1 = r1.indexOf(r3, r5)
                java.lang.String r3 = r0.a
                java.lang.String r5 = r3.substring(r5, r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r3 = "------->rangePosition:"
                r1.append(r3)
                r1.append(r5)
                java.lang.String r1 = r1.toString()
                android.util.Log.e(r2, r1)
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
                int r5 = r5.intValue()
                long r1 = (long) r5
                r0.b = r1
                return r0
        }

        public java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "HTTP/1.1 206 Ok\r\nConnection: keep-alive\r\n"
                r0.append(r1)
                java.lang.String r1 = "Content-Type: video/mp4\r\n"
                r0.append(r1)
                java.lang.String r1 = "\r\n"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        public java.lang.String a(java.lang.String r4, int r5) {
                r3 = this;
                java.lang.String r0 = "Range: bytes="
                int r1 = r4.indexOf(r0)
                java.lang.String r2 = "\r\n"
                int r2 = r4.indexOf(r2, r1)
                java.lang.String r1 = r4.substring(r1, r2)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r0)
                r2.append(r5)
                java.lang.String r5 = "-"
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                java.lang.String r4 = r4.replaceAll(r1, r5)
                return r4
        }

        public byte[] a(byte[] r3, int r4) {
                r2 = this;
                java.lang.String r0 = "GET"
                java.lang.String r1 = "\r\n\r\n"
                java.util.List r3 = r2.a(r0, r1, r3, r4)
                int r4 = r3.size()
                if (r4 <= 0) goto L16
                r4 = 0
                java.lang.Object r3 = r3.get(r4)
                byte[] r3 = (byte[]) r3
                return r3
            L16:
                r3 = 0
                return r3
        }

        public java.util.List<byte[]> b(byte[] r3, int r4) {
                r2 = this;
                java.lang.String r0 = "HTTP/1.1"
                java.lang.String r1 = "\r\n\r\n"
                java.util.List r3 = r2.a(r0, r1, r3, r4)
                return r3
        }

        public void b() {
                r1 = this;
                r0 = 10240(0x2800, float:1.4349E-41)
                byte[] r0 = new byte[r0]
                r1.e = r0
                r0 = 0
                r1.f = r0
                return
        }
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r1 = "/ProxyBuffer/files"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String a(java.lang.Exception r3) {
            java.lang.StackTraceElement[] r3 = r3.getStackTrace()
            java.lang.String r0 = ""
            r1 = 0
        L7:
            int r2 = r3.length
            if (r1 >= r2) goto L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r0 = r3[r1]
            java.lang.String r0 = r0.getClassName()
            r2.append(r0)
            java.lang.String r0 = "."
            r2.append(r0)
            r0 = r3[r1]
            java.lang.String r0 = r0.getMethodName()
            r2.append(r0)
            java.lang.String r0 = "  "
            r2.append(r0)
            r0 = r3[r1]
            int r0 = r0.getLineNumber()
            r2.append(r0)
            java.lang.String r0 = "line\r\n"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L7
        L43:
            return r0
    }

    public static java.lang.String a(java.lang.String r4) {
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L2b
            r0.<init>(r4)     // Catch: java.lang.Exception -> L2b
            java.net.URLConnection r0 = r0.openConnection()     // Catch: java.lang.Exception -> L2b
            java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Exception -> L2b
            r1 = 0
            r0.setInstanceFollowRedirects(r1)     // Catch: java.lang.Exception -> L2b
            int r1 = r0.getResponseCode()     // Catch: java.lang.Exception -> L2b
            r2 = 301(0x12d, float:4.22E-43)
            java.lang.String r3 = "Location"
            if (r1 != r2) goto L1e
            java.lang.String r4 = r0.getHeaderField(r3)     // Catch: java.lang.Exception -> L2b
            return r4
        L1e:
            int r1 = r0.getResponseCode()     // Catch: java.lang.Exception -> L2b
            r2 = 302(0x12e, float:4.23E-43)
            if (r1 != r2) goto L2f
            java.lang.String r4 = r0.getHeaderField(r3)     // Catch: java.lang.Exception -> L2b
            return r4
        L2b:
            r0 = move-exception
            r0.printStackTrace()
        L2f:
            return r4
    }

    public static void b(java.lang.String r3) {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            if (r3 != 0) goto Lc
            return
        Lc:
            java.io.File[] r3 = r0.listFiles()
            int r1 = r3.length
            if (r1 == 0) goto L1f
            r1 = 0
        L14:
            int r2 = r3.length
            if (r1 >= r2) goto L1f
            r2 = r3[r1]
            r2.delete()
            int r1 = r1 + 1
            goto L14
        L1f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "--------共有"
            r3.append(r1)
            java.io.File[] r0 = r0.listFiles()
            int r0 = r0.length
            r3.append(r0)
            java.lang.String r0 = "个缓存文件"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            return
    }

    public static java.lang.String c(java.lang.String r2) {
            java.lang.String r0 = ""
            java.lang.String r1 = "\\"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "/"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = ":"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "*"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "?"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "\""
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "<"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = ">"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "|"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = " "
            java.lang.String r2 = r2.replace(r1, r0)
            return r2
    }
}
