package com.xiaomi.push;

import java.io.File;
import java.io.FileFilter;

final class ac implements FileFilter {
    ac() {
    }

    @Override
    public boolean accept(File file) {
        return file.isDirectory();
    }
}
