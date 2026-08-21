package com.xiaomi.push;

import java.io.File;
import java.io.FileFilter;

/* JADX INFO: loaded from: classes4.dex */
final class ac implements FileFilter {
    ac() {
    }

    @Override // java.io.FileFilter
    public boolean accept(File file) {
        return file.isDirectory();
    }
}
