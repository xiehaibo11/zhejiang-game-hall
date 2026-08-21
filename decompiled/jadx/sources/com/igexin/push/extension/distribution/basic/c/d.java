package com.igexin.push.extension.distribution.basic.c;

import java.io.File;
import java.io.FileFilter;

/* JADX INFO: loaded from: classes2.dex */
class d implements FileFilter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    long f2628a = System.currentTimeMillis();
    long b = 604800000;
    final /* synthetic */ c c;

    d(c cVar) {
        this.c = cVar;
    }

    @Override // java.io.FileFilter
    public boolean accept(File file) {
        return this.f2628a - file.lastModified() >= this.b;
    }
}
