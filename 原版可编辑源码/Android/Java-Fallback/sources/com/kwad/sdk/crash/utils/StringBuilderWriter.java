package com.kwad.sdk.crash.utils;

public class StringBuilderWriter extends java.io.Writer implements java.io.Serializable {
    private static final long serialVersionUID = 4424285024471074820L;
    private final java.lang.StringBuilder builder;

    public StringBuilderWriter() {
            r1 = this;
            r1.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.builder = r0
            return
    }

    public StringBuilderWriter(int r2) {
            r1 = this;
            r1.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            r1.builder = r0
            return
    }

    public StringBuilderWriter(java.lang.StringBuilder r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto Lb
        L6:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
        Lb:
            r0.builder = r1
            return
    }

    @Override
    public java.io.Writer append(char r2) {
            r1 = this;
            java.lang.StringBuilder r0 = r1.builder
            r0.append(r2)
            return r1
    }

    @Override
    public java.io.Writer append(java.lang.CharSequence r2) {
            r1 = this;
            java.lang.StringBuilder r0 = r1.builder
            r0.append(r2)
            return r1
    }

    @Override
    public java.io.Writer append(java.lang.CharSequence r2, int r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r0 = r1.builder
            r0.append(r2, r3, r4)
            return r1
    }

    @Override
    public java.lang.Appendable append(char r1) {
            r0 = this;
            java.io.Writer r1 = r0.append(r1)
            return r1
    }

    @Override
    public java.lang.Appendable append(java.lang.CharSequence r1) {
            r0 = this;
            java.io.Writer r1 = r0.append(r1)
            return r1
    }

    @Override
    public java.lang.Appendable append(java.lang.CharSequence r1, int r2, int r3) {
            r0 = this;
            java.io.Writer r1 = r0.append(r1, r2, r3)
            return r1
    }

    @Override
    public void close() {
            r0 = this;
            return
    }

    @Override
    public void flush() {
            r0 = this;
            return
    }

    public java.lang.StringBuilder getBuilder() {
            r1 = this;
            java.lang.StringBuilder r0 = r1.builder
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.StringBuilder r0 = r1.builder
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void write(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.lang.StringBuilder r0 = r1.builder
            r0.append(r2)
        L7:
            return
    }

    @Override
    public void write(char[] r2, int r3, int r4) {
            r1 = this;
            if (r2 == 0) goto L7
            java.lang.StringBuilder r0 = r1.builder
            r0.append(r2, r3, r4)
        L7:
            return
    }
}
