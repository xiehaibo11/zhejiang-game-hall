package com.igexin.a;

import java.io.File;
import java.io.FilenameFilter;

/* JADX INFO: loaded from: classes2.dex */
class j implements FilenameFilter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f2410a;
    final /* synthetic */ i b;

    j(i iVar, String str) {
        this.b = iVar;
        this.f2410a = str;
    }

    @Override // java.io.FilenameFilter
    public boolean accept(File file, String str) {
        return str.startsWith(this.f2410a);
    }
}
