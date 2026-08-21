package com.tkay.expressad.exoplayer;

public final class f implements com.tkay.expressad.exoplayer.ab {
    public static final long a = 5000;
    public static final int b = 0;
    public static final int c = 1;
    public static final int d = 2;
    protected static final int e = 50;
    private static final java.lang.String f = "DefaultRenderersFactory";
    private final android.content.Context g;
    private final com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> h;
    private final int i;
    private final long j;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    public f(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public f(android.content.Context r7, int r8) {
            r6 = this;
            r2 = 0
            r4 = 5000(0x1388, double:2.4703E-320)
            r0 = r6
            r1 = r7
            r3 = r8
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public f(android.content.Context r7, int r8, long r9) {
            r6 = this;
            r2 = 0
            r0 = r6
            r1 = r7
            r3 = r8
            r4 = r9
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @java.lang.Deprecated
    private f(android.content.Context r2, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    @java.lang.Deprecated
    private f(android.content.Context r7, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r8, byte r9) {
            r6 = this;
            r3 = 0
            r4 = 5000(0x1388, double:2.4703E-320)
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @java.lang.Deprecated
    private f(android.content.Context r1, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r2, int r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.g = r1
            r0.i = r3
            r0.j = r4
            r0.h = r2
            return
    }

    private static void a() {
            return
    }

    private static void a(android.content.Context r12, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r13, long r14, android.os.Handler r16, com.tkay.expressad.exoplayer.l.h r17, int r18, java.util.ArrayList<com.tkay.expressad.exoplayer.y> r19) {
            r0 = r18
            r1 = r19
            com.tkay.expressad.exoplayer.l.e r11 = new com.tkay.expressad.exoplayer.l.e
            com.tkay.expressad.exoplayer.f.c r4 = com.tkay.expressad.exoplayer.f.c.a
            r10 = 50
            r2 = r11
            r3 = r12
            r5 = r14
            r7 = r13
            r8 = r16
            r9 = r17
            r2.<init>(r3, r4, r5, r7, r8, r9, r10)
            r1.add(r11)
            if (r0 != 0) goto L1b
            return
        L1b:
            int r2 = r19.size()
            r3 = 2
            if (r0 != r3) goto L24
            int r2 = r2 + (-1)
        L24:
            java.lang.String r0 = "com.tkay.expressad.exoplayer.ext.vp9.LibvpxVideoRenderer"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r4 = 5
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Class r6 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Class<android.os.Handler> r6 = android.os.Handler.class
            r5[r3] = r6     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Class<com.tkay.expressad.exoplayer.l.h> r6 = com.tkay.expressad.exoplayer.l.h.class
            r9 = 3
            r5[r9] = r6     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r10 = 4
            r5[r10] = r6     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.reflect.Constructor r0 = r0.getConstructor(r5)     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Boolean r5 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r4[r7] = r5     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Long r5 = java.lang.Long.valueOf(r14)     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r4[r8] = r5     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r4[r3] = r16     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r4[r9] = r17     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r3 = 50
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r4[r10] = r3     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.Object r0 = r0.newInstance(r4)     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            com.tkay.expressad.exoplayer.y r0 = (com.tkay.expressad.exoplayer.y) r0     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            r1.add(r2, r0)     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            java.lang.String r0 = "DefaultRenderersFactory"
            java.lang.String r1 = "Loaded LibvpxVideoRenderer."
            android.util.Log.i(r0, r1)     // Catch: java.lang.Exception -> L72 java.lang.ClassNotFoundException -> L7b
            return
        L72:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating VP9 extension"
            r1.<init>(r2, r0)
            throw r1
        L7b:
            return
    }

    private static void a(android.content.Context r12, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r13, com.tkay.expressad.exoplayer.b.f[] r14, android.os.Handler r15, com.tkay.expressad.exoplayer.b.g r16, int r17, java.util.ArrayList<com.tkay.expressad.exoplayer.y> r18) {
            r0 = r17
            r9 = r18
            java.lang.String r10 = "DefaultRenderersFactory"
            com.tkay.expressad.exoplayer.b.o r11 = new com.tkay.expressad.exoplayer.b.o
            com.tkay.expressad.exoplayer.f.c r3 = com.tkay.expressad.exoplayer.f.c.a
            com.tkay.expressad.exoplayer.b.c r7 = com.tkay.expressad.exoplayer.b.c.a(r12)
            r1 = r11
            r2 = r12
            r4 = r13
            r5 = r15
            r6 = r16
            r8 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r9.add(r11)
            if (r0 != 0) goto L1e
            return
        L1e:
            int r1 = r18.size()
            r2 = 2
            if (r0 != r2) goto L27
            int r1 = r1 + (-1)
        L27:
            r0 = 0
            r3 = 3
            r4 = 1
            java.lang.String r5 = "com.tkay.expressad.exoplayer.ext.opus.LibopusAudioRenderer"
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            java.lang.Class<android.os.Handler> r7 = android.os.Handler.class
            r6[r0] = r7     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            java.lang.Class<com.tkay.expressad.exoplayer.b.g> r7 = com.tkay.expressad.exoplayer.b.g.class
            r6[r4] = r7     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            java.lang.Class<com.tkay.expressad.exoplayer.b.f[]> r7 = com.tkay.expressad.exoplayer.b.f[].class
            r6[r2] = r7     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            java.lang.reflect.Constructor r5 = r5.getConstructor(r6)     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            java.lang.Object[] r6 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            r6[r0] = r15     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            r6[r4] = r16     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            r6[r2] = r14     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            java.lang.Object r5 = r5.newInstance(r6)     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            com.tkay.expressad.exoplayer.y r5 = (com.tkay.expressad.exoplayer.y) r5     // Catch: java.lang.Exception -> L5d java.lang.ClassNotFoundException -> L66
            int r6 = r1 + 1
            r9.add(r1, r5)     // Catch: java.lang.ClassNotFoundException -> L5b java.lang.Exception -> L5d
            java.lang.String r1 = "Loaded LibopusAudioRenderer."
            android.util.Log.i(r10, r1)     // Catch: java.lang.ClassNotFoundException -> L5b java.lang.Exception -> L5d
            goto L67
        L5b:
            r1 = r6
            goto L66
        L5d:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating Opus extension"
            r1.<init>(r2, r0)
            throw r1
        L66:
            r6 = r1
        L67:
            java.lang.String r1 = "com.tkay.expressad.exoplayer.ext.flac.LibflacAudioRenderer"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            java.lang.Class<android.os.Handler> r7 = android.os.Handler.class
            r5[r0] = r7     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            java.lang.Class<com.tkay.expressad.exoplayer.b.g> r7 = com.tkay.expressad.exoplayer.b.g.class
            r5[r4] = r7     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            java.lang.Class<com.tkay.expressad.exoplayer.b.f[]> r7 = com.tkay.expressad.exoplayer.b.f[].class
            r5[r2] = r7     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            java.lang.reflect.Constructor r1 = r1.getConstructor(r5)     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            r5[r0] = r15     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            r5[r4] = r16     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            r5[r2] = r14     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            java.lang.Object r1 = r1.newInstance(r5)     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            com.tkay.expressad.exoplayer.y r1 = (com.tkay.expressad.exoplayer.y) r1     // Catch: java.lang.Exception -> L9a java.lang.ClassNotFoundException -> La3
            int r5 = r6 + 1
            r9.add(r6, r1)     // Catch: java.lang.ClassNotFoundException -> L98 java.lang.Exception -> L9a
            java.lang.String r1 = "Loaded LibflacAudioRenderer."
            android.util.Log.i(r10, r1)     // Catch: java.lang.ClassNotFoundException -> L98 java.lang.Exception -> L9a
            goto La4
        L98:
            r6 = r5
            goto La3
        L9a:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating FLAC extension"
            r1.<init>(r2, r0)
            throw r1
        La3:
            r5 = r6
        La4:
            java.lang.String r1 = "com.tkay.expressad.exoplayer.ext.ffmpeg.FfmpegAudioRenderer"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.Class<android.os.Handler> r7 = android.os.Handler.class
            r6[r0] = r7     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.Class<com.tkay.expressad.exoplayer.b.g> r7 = com.tkay.expressad.exoplayer.b.g.class
            r6[r4] = r7     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.Class<com.tkay.expressad.exoplayer.b.f[]> r7 = com.tkay.expressad.exoplayer.b.f[].class
            r6[r2] = r7     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.reflect.Constructor r1 = r1.getConstructor(r6)     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            r3[r0] = r15     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            r3[r4] = r16     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            r3[r2] = r14     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.Object r0 = r1.newInstance(r3)     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            com.tkay.expressad.exoplayer.y r0 = (com.tkay.expressad.exoplayer.y) r0     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            r9.add(r5, r0)     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            java.lang.String r0 = "Loaded FfmpegAudioRenderer."
            android.util.Log.i(r10, r0)     // Catch: java.lang.Exception -> Ld3 java.lang.ClassNotFoundException -> Ldc
            return
        Ld3:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating FFmpeg extension"
            r1.<init>(r2, r0)
            throw r1
        Ldc:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.g.f r1, android.os.Looper r2, java.util.ArrayList<com.tkay.expressad.exoplayer.y> r3) {
            com.tkay.expressad.exoplayer.g.g r0 = new com.tkay.expressad.exoplayer.g.g
            r0.<init>(r1, r2)
            r3.add(r0)
            return
    }

    private static com.tkay.expressad.exoplayer.b.f[] b() {
            r0 = 0
            com.tkay.expressad.exoplayer.b.f[] r0 = new com.tkay.expressad.exoplayer.b.f[r0]
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.y[] a(android.os.Handler r19, com.tkay.expressad.exoplayer.l.h r20, com.tkay.expressad.exoplayer.b.g r21, com.tkay.expressad.exoplayer.g.f r22, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r23) {
            r18 = this;
            r1 = r18
            if (r23 != 0) goto L7
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r0 = r1.h
            goto L9
        L7:
            r0 = r23
        L9:
            java.util.ArrayList r11 = new java.util.ArrayList
            r11.<init>()
            android.content.Context r3 = r1.g
            long r12 = r1.j
            int r14 = r1.i
            com.tkay.expressad.exoplayer.l.e r15 = new com.tkay.expressad.exoplayer.l.e
            com.tkay.expressad.exoplayer.f.c r4 = com.tkay.expressad.exoplayer.f.c.a
            r10 = 50
            r2 = r15
            r5 = r12
            r7 = r0
            r8 = r19
            r9 = r20
            r2.<init>(r3, r4, r5, r7, r8, r9, r10)
            r11.add(r15)
            java.lang.String r10 = "DefaultRenderersFactory"
            r15 = 3
            r9 = 0
            r16 = 1
            r8 = 2
            if (r14 == 0) goto L8a
            int r2 = r11.size()
            if (r14 != r8) goto L38
            int r2 = r2 + (-1)
        L38:
            java.lang.String r3 = "com.tkay.expressad.exoplayer.ext.vp9.LibvpxVideoRenderer"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r4 = 5
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r5[r9] = r6     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Class r6 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r5[r16] = r6     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Class<android.os.Handler> r6 = android.os.Handler.class
            r5[r8] = r6     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Class<com.tkay.expressad.exoplayer.l.h> r6 = com.tkay.expressad.exoplayer.l.h.class
            r5[r15] = r6     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r7 = 4
            r5[r7] = r6     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.reflect.Constructor r3 = r3.getConstructor(r5)     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Boolean r5 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r4[r9] = r5     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Long r5 = java.lang.Long.valueOf(r12)     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r4[r16] = r5     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r4[r8] = r19     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r4[r15] = r20     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r5 = 50
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r4[r7] = r5     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.Object r3 = r3.newInstance(r4)     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            com.tkay.expressad.exoplayer.y r3 = (com.tkay.expressad.exoplayer.y) r3     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            r11.add(r2, r3)     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            java.lang.String r2 = "Loaded LibvpxVideoRenderer."
            android.util.Log.i(r10, r2)     // Catch: java.lang.Exception -> L81 java.lang.ClassNotFoundException -> L8a
            goto L8a
        L81:
            r0 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Error instantiating VP9 extension"
            r2.<init>(r3, r0)
            throw r2
        L8a:
            android.content.Context r3 = r1.g
            com.tkay.expressad.exoplayer.b.f[] r12 = new com.tkay.expressad.exoplayer.b.f[r9]
            int r13 = r1.i
            com.tkay.expressad.exoplayer.b.o r14 = new com.tkay.expressad.exoplayer.b.o
            com.tkay.expressad.exoplayer.f.c r4 = com.tkay.expressad.exoplayer.f.c.a
            com.tkay.expressad.exoplayer.b.c r17 = com.tkay.expressad.exoplayer.b.c.a(r3)
            r2 = r14
            r5 = r0
            r6 = r19
            r7 = r21
            r0 = r8
            r8 = r17
            r17 = r9
            r9 = r12
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            r11.add(r14)
            if (r13 == 0) goto L166
            int r2 = r11.size()
            if (r13 != r0) goto Lb4
            int r2 = r2 + (-1)
        Lb4:
            java.lang.String r3 = "com.tkay.expressad.exoplayer.ext.opus.LibopusAudioRenderer"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            java.lang.Class[] r4 = new java.lang.Class[r15]     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            java.lang.Class<android.os.Handler> r5 = android.os.Handler.class
            r4[r17] = r5     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            java.lang.Class<com.tkay.expressad.exoplayer.b.g> r5 = com.tkay.expressad.exoplayer.b.g.class
            r4[r16] = r5     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            java.lang.Class<com.tkay.expressad.exoplayer.b.f[]> r5 = com.tkay.expressad.exoplayer.b.f[].class
            r4[r0] = r5     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            java.lang.reflect.Constructor r3 = r3.getConstructor(r4)     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            java.lang.Object[] r4 = new java.lang.Object[r15]     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            r4[r17] = r19     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            r4[r16] = r21     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            r4[r0] = r12     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            java.lang.Object r3 = r3.newInstance(r4)     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            com.tkay.expressad.exoplayer.y r3 = (com.tkay.expressad.exoplayer.y) r3     // Catch: java.lang.Exception -> Le7 java.lang.ClassNotFoundException -> Lf0
            int r4 = r2 + 1
            r11.add(r2, r3)     // Catch: java.lang.ClassNotFoundException -> Le5 java.lang.Exception -> Le7
            java.lang.String r2 = "Loaded LibopusAudioRenderer."
            android.util.Log.i(r10, r2)     // Catch: java.lang.ClassNotFoundException -> Le5 java.lang.Exception -> Le7
            goto Lf1
        Le5:
            r2 = r4
            goto Lf0
        Le7:
            r0 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Error instantiating Opus extension"
            r2.<init>(r3, r0)
            throw r2
        Lf0:
            r4 = r2
        Lf1:
            java.lang.String r2 = "com.tkay.expressad.exoplayer.ext.flac.LibflacAudioRenderer"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            java.lang.Class[] r3 = new java.lang.Class[r15]     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            java.lang.Class<android.os.Handler> r5 = android.os.Handler.class
            r3[r17] = r5     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            java.lang.Class<com.tkay.expressad.exoplayer.b.g> r5 = com.tkay.expressad.exoplayer.b.g.class
            r3[r16] = r5     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            java.lang.Class<com.tkay.expressad.exoplayer.b.f[]> r5 = com.tkay.expressad.exoplayer.b.f[].class
            r3[r0] = r5     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            java.lang.reflect.Constructor r2 = r2.getConstructor(r3)     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            r3[r17] = r19     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            r3[r16] = r21     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            r3[r0] = r12     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            com.tkay.expressad.exoplayer.y r2 = (com.tkay.expressad.exoplayer.y) r2     // Catch: java.lang.Exception -> L124 java.lang.ClassNotFoundException -> L12d
            int r3 = r4 + 1
            r11.add(r4, r2)     // Catch: java.lang.ClassNotFoundException -> L122 java.lang.Exception -> L124
            java.lang.String r2 = "Loaded LibflacAudioRenderer."
            android.util.Log.i(r10, r2)     // Catch: java.lang.ClassNotFoundException -> L122 java.lang.Exception -> L124
            goto L12e
        L122:
            r4 = r3
            goto L12d
        L124:
            r0 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Error instantiating FLAC extension"
            r2.<init>(r3, r0)
            throw r2
        L12d:
            r3 = r4
        L12e:
            java.lang.String r2 = "com.tkay.expressad.exoplayer.ext.ffmpeg.FfmpegAudioRenderer"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.Class[] r4 = new java.lang.Class[r15]     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.Class<android.os.Handler> r5 = android.os.Handler.class
            r4[r17] = r5     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.Class<com.tkay.expressad.exoplayer.b.g> r5 = com.tkay.expressad.exoplayer.b.g.class
            r4[r16] = r5     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.Class<com.tkay.expressad.exoplayer.b.f[]> r5 = com.tkay.expressad.exoplayer.b.f[].class
            r4[r0] = r5     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.reflect.Constructor r2 = r2.getConstructor(r4)     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.Object[] r4 = new java.lang.Object[r15]     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            r4[r17] = r19     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            r4[r16] = r21     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            r4[r0] = r12     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.Object r0 = r2.newInstance(r4)     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            com.tkay.expressad.exoplayer.y r0 = (com.tkay.expressad.exoplayer.y) r0     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            r11.add(r3, r0)     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            java.lang.String r0 = "Loaded FfmpegAudioRenderer."
            android.util.Log.i(r10, r0)     // Catch: java.lang.Exception -> L15d java.lang.ClassNotFoundException -> L166
            goto L166
        L15d:
            r0 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "Error instantiating FFmpeg extension"
            r2.<init>(r3, r0)
            throw r2
        L166:
            android.os.Looper r0 = r19.getLooper()
            com.tkay.expressad.exoplayer.g.g r2 = new com.tkay.expressad.exoplayer.g.g
            r3 = r22
            r2.<init>(r3, r0)
            r11.add(r2)
            int r0 = r11.size()
            com.tkay.expressad.exoplayer.y[] r0 = new com.tkay.expressad.exoplayer.y[r0]
            java.lang.Object[] r0 = r11.toArray(r0)
            com.tkay.expressad.exoplayer.y[] r0 = (com.tkay.expressad.exoplayer.y[]) r0
            return r0
    }
}
