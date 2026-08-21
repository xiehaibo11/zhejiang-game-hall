package com.xiaomi.push;

import android.text.TextUtils;
import java.io.File;
import java.io.FilenameFilter;

final class bv implements FilenameFilter {
    bv() {
    }

    @Override
    public boolean accept(File file, String str) {
        return (TextUtils.isEmpty(str) || str.toLowerCase().endsWith(".lock")) ? false : true;
    }
}
