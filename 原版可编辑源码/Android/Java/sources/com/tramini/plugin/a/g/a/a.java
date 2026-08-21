package com.tramini.plugin.a.g.a;

public final class a implements CharSequence {
    CharSequence a;

    public a(CharSequence charSequence) {
        this.a = charSequence;
    }

    @Override
    public final char charAt(int i) {
        if (Thread.currentThread().isInterrupted()) {
            throw new RuntimeException("Interrupted!");
        }
        return this.a.charAt(i);
    }

    @Override
    public final int length() {
        return this.a.length();
    }

    @Override
    public final CharSequence subSequence(int i, int i2) {
        return new a(this.a.subSequence(i, i2));
    }

    @Override
    public final String toString() {
        return this.a.toString();
    }
}
