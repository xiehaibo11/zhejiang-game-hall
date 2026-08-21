package com.qihoo360.replugin.utils;

import java.io.Serializable;
import java.io.Writer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class StringBuilderWriter extends Writer implements Serializable {
    private static final long serialVersionUID = -146927496096066153L;
    private final StringBuilder builder;

    @Override
    public void close() {
    }

    @Override
    public void flush() {
    }

    public StringBuilderWriter() {
        this.builder = new StringBuilder();
    }

    public StringBuilderWriter(int i) {
        this.builder = new StringBuilder(i);
    }

    public StringBuilderWriter(StringBuilder sb) {
        this.builder = sb == null ? new StringBuilder() : sb;
    }

    @Override
    public Writer append(char c) {
        this.builder.append(c);
        return this;
    }

    @Override
    public Writer append(CharSequence charSequence) {
        this.builder.append(charSequence);
        return this;
    }

    @Override
    public Writer append(CharSequence charSequence, int i, int i2) {
        this.builder.append(charSequence, i, i2);
        return this;
    }

    @Override
    public void write(String str) {
        if (str != null) {
            this.builder.append(str);
        }
    }

    @Override
    public void write(char[] cArr, int i, int i2) {
        if (cArr != null) {
            this.builder.append(cArr, i, i2);
        }
    }

    public StringBuilder getBuilder() {
        return this.builder;
    }

    public String toString() {
        return this.builder.toString();
    }
}
