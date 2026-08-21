package com.igexin.push.extension.distribution.basic.f;

import android.content.ContentValues;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.igexin.push.core.bean.BaseAction;
import com.tkay.expressad.foundation.d.c;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class c extends d {
    private String g;
    private BaseAction h;
    private int i;
    private e j;
    private String k;

    public c(String str, String str2, String str3, BaseAction baseAction, int i, e eVar) {
        super(str);
        this.h = baseAction;
        this.g = str3;
        this.i = i;
        this.j = eVar;
        this.k = str2;
    }

    private void a(String str) {
        File file = new File(com.igexin.push.extension.distribution.basic.c.e.k);
        if (!file.exists()) {
            file.mkdirs();
        }
        File file2 = new File(com.igexin.push.extension.distribution.basic.c.e.k + str + "/");
        if (file2.exists()) {
            return;
        }
        file2.mkdirs();
    }

    private void b(String str) {
        int i = this.i;
        if (i == 2) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.h).k(str);
        } else {
            if (i != 8) {
                return;
            }
            ((com.igexin.push.extension.distribution.basic.b.a) this.h).e(str);
        }
    }

    @Override // com.igexin.push.extension.distribution.basic.f.d
    public void a(Exception exc) {
        e eVar = this.j;
        if (eVar != null) {
            eVar.a(exc);
        }
    }

    @Override // com.igexin.push.extension.distribution.basic.f.d
    public void a(byte[] bArr) throws IOException {
        this.f = false;
        int i = Integer.parseInt(this.h.getActionId());
        a(this.g);
        String str = com.igexin.push.extension.distribution.basic.c.e.k + this.g + "/" + i + "_" + this.i + ".bin";
        FileOutputStream fileOutputStream = new FileOutputStream(str);
        Bitmap.CompressFormat compressFormat = Bitmap.CompressFormat.PNG;
        Bitmap bitmapDecodeByteArray = BitmapFactory.decodeByteArray(bArr, 0, bArr.length);
        if (bitmapDecodeByteArray != null) {
            bitmapDecodeByteArray.compress(compressFormat, 100, fileOutputStream);
            fileOutputStream.close();
            bitmapDecodeByteArray.recycle();
            b(str);
            this.f = true;
            ContentValues contentValues = new ContentValues();
            contentValues.put("imageurl", this.k);
            contentValues.put("imagesrc", str);
            contentValues.put("taskid", this.g);
            contentValues.put("createtime", Long.valueOf(System.currentTimeMillis()));
            com.igexin.push.extension.distribution.basic.c.c.a().b().a(c.C0460c.e, contentValues);
        } else {
            fileOutputStream.close();
            this.f = false;
        }
        if (this.j != null) {
            if (this.f) {
                this.j.a(this.h);
            } else {
                this.j.a(new Exception("no target existed or downloading bitmap failed!"));
            }
        }
    }

    @Override // com.igexin.b.a.d.a.e
    public final int b_() {
        return 65557;
    }
}
