package com.czhj.wire.okio;

import java.util.AbstractList;
import java.util.RandomAccess;

/* JADX INFO: loaded from: classes.dex */
public final class Options extends AbstractList<ByteString> implements RandomAccess {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final ByteString[] f1898a;

    private Options(ByteString[] byteStringArr) {
        this.f1898a = byteStringArr;
    }

    public static Options of(ByteString... byteStringArr) {
        return new Options((ByteString[]) byteStringArr.clone());
    }

    @Override // java.util.AbstractList, java.util.List
    public ByteString get(int i) {
        return this.f1898a[i];
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public int size() {
        return this.f1898a.length;
    }
}
