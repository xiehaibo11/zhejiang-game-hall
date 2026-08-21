package com.tramini.plugin.a.g.a;

/* JADX INFO: loaded from: classes4.dex */
public final class a implements CharSequence {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    CharSequence f7860a;

    public a(CharSequence charSequence) {
        this.f7860a = charSequence;
    }

    @Override // java.lang.CharSequence
    public final char charAt(int i) {
        if (Thread.currentThread().isInterrupted()) {
            throw new RuntimeException("Interrupted!");
        }
        return this.f7860a.charAt(i);
    }

    @Override // java.lang.CharSequence
    public final int length() {
        return this.f7860a.length();
    }

    @Override // java.lang.CharSequence
    public final CharSequence subSequence(int i, int i2) {
        return new a(this.f7860a.subSequence(i, i2));
    }

    @Override // java.lang.CharSequence
    public final String toString() {
        return this.f7860a.toString();
    }
}
