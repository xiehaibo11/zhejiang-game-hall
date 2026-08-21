package com.igexin.a;

import android.os.Build;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
final class k implements f {
    k() {
    }

    @Override // com.igexin.a.f
    public void a(String str) {
        System.loadLibrary(str);
    }

    @Override // com.igexin.a.f
    public String[] a() {
        return (Build.VERSION.SDK_INT < 21 || Build.SUPPORTED_ABIS.length <= 0) ? !TextUtils.isEmpty(Build.CPU_ABI2) ? new String[]{Build.CPU_ABI, Build.CPU_ABI2} : new String[]{Build.CPU_ABI} : Build.SUPPORTED_ABIS;
    }

    @Override // com.igexin.a.f
    public void b(String str) {
        System.load(str);
    }

    @Override // com.igexin.a.f
    public String c(String str) {
        return (str.startsWith("lib") && str.endsWith(".so")) ? str : System.mapLibraryName(str);
    }

    @Override // com.igexin.a.f
    public String d(String str) {
        return str.substring(3, str.length() - 3);
    }
}
