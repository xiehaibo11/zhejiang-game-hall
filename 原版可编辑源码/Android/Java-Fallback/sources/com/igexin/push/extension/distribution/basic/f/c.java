package com.igexin.push.extension.distribution.basic.f;

public class c extends com.igexin.push.extension.distribution.basic.f.d {
    private java.lang.String g;
    private com.igexin.push.core.bean.BaseAction h;
    private int i;
    private com.igexin.push.extension.distribution.basic.f.e j;
    private java.lang.String k;

    public c(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.igexin.push.core.bean.BaseAction r4, int r5, com.igexin.push.extension.distribution.basic.f.e r6) {
            r0 = this;
            r0.<init>(r1)
            r0.h = r4
            r0.g = r3
            r0.i = r5
            r0.j = r6
            r0.k = r2
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.c.e.k
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L10
            r0.mkdirs()
        L10:
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.c.e.k
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "/"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            boolean r4 = r0.exists()
            if (r4 != 0) goto L34
            r0.mkdirs()
        L34:
            return
    }

    private void b(java.lang.String r3) {
            r2 = this;
            int r0 = r2.i
            r1 = 2
            if (r0 == r1) goto L12
            r1 = 8
            if (r0 == r1) goto La
            goto L19
        La:
            com.igexin.push.core.bean.BaseAction r0 = r2.h
            com.igexin.push.extension.distribution.basic.b.a r0 = (com.igexin.push.extension.distribution.basic.b.a) r0
            r0.e(r3)
            goto L19
        L12:
            com.igexin.push.core.bean.BaseAction r0 = r2.h
            com.igexin.push.extension.distribution.basic.b.a r0 = (com.igexin.push.extension.distribution.basic.b.a) r0
            r0.k(r3)
        L19:
            return
    }

    @Override
    public void a(java.lang.Exception r2) {
            r1 = this;
            com.igexin.push.extension.distribution.basic.f.e r0 = r1.j
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public void a(byte[] r6) {
            r5 = this;
            r0 = 0
            r5.f = r0
            com.igexin.push.core.bean.BaseAction r1 = r5.h
            java.lang.String r1 = r1.getActionId()
            int r1 = java.lang.Integer.parseInt(r1)
            java.lang.String r2 = r5.g
            r5.a(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.igexin.push.extension.distribution.basic.c.e.k
            r2.append(r3)
            java.lang.String r3 = r5.g
            r2.append(r3)
            java.lang.String r3 = "/"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = "_"
            r2.append(r1)
            int r1 = r5.i
            r2.append(r1)
            java.lang.String r1 = ".bin"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.io.FileOutputStream r2 = new java.io.FileOutputStream
            r2.<init>(r1)
            android.graphics.Bitmap$CompressFormat r3 = android.graphics.Bitmap.CompressFormat.PNG
            int r4 = r6.length
            android.graphics.Bitmap r6 = android.graphics.BitmapFactory.decodeByteArray(r6, r0, r4)
            if (r6 == 0) goto L8e
            r0 = 100
            r6.compress(r3, r0, r2)
            r2.close()
            r6.recycle()
            r5.b(r1)
            r6 = 1
            r5.f = r6
            android.content.ContentValues r6 = new android.content.ContentValues
            r6.<init>()
            java.lang.String r0 = r5.k
            java.lang.String r2 = "imageurl"
            r6.put(r2, r0)
            java.lang.String r0 = "imagesrc"
            r6.put(r0, r1)
            java.lang.String r0 = r5.g
            java.lang.String r1 = "taskid"
            r6.put(r1, r0)
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.String r1 = "createtime"
            r6.put(r1, r0)
            com.igexin.push.extension.distribution.basic.c.c r0 = com.igexin.push.extension.distribution.basic.c.c.a()
            com.igexin.push.extension.distribution.basic.e.a r0 = r0.b()
            java.lang.String r1 = "image"
            r0.a(r1, r6)
            goto L93
        L8e:
            r2.close()
            r5.f = r0
        L93:
            com.igexin.push.extension.distribution.basic.f.e r6 = r5.j
            if (r6 == 0) goto Laf
            boolean r6 = r5.f
            if (r6 == 0) goto La3
            com.igexin.push.extension.distribution.basic.f.e r6 = r5.j
            com.igexin.push.core.bean.BaseAction r0 = r5.h
            r6.a(r0)
            goto Laf
        La3:
            com.igexin.push.extension.distribution.basic.f.e r6 = r5.j
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "no target existed or downloading bitmap failed!"
            r0.<init>(r1)
            r6.a(r0)
        Laf:
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = 65557(0x10015, float:9.1865E-41)
            return r0
    }
}
