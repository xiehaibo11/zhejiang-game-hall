package com.bytedance.pangle.res.a;

import java.io.DataInput;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public abstract class f implements DataInput {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final i f1585a;

    public f(i iVar) {
        this.f1585a = iVar;
    }

    @Override // java.io.DataInput
    public int skipBytes(int i) {
        return this.f1585a.skipBytes(i);
    }

    @Override // java.io.DataInput
    public int readUnsignedShort() {
        return this.f1585a.readUnsignedShort();
    }

    @Override // java.io.DataInput
    public int readUnsignedByte() {
        return this.f1585a.readUnsignedByte();
    }

    @Override // java.io.DataInput
    public String readUTF() {
        return this.f1585a.readUTF();
    }

    @Override // java.io.DataInput
    public short readShort() {
        return this.f1585a.readShort();
    }

    @Override // java.io.DataInput
    public long readLong() {
        return this.f1585a.readLong();
    }

    @Override // java.io.DataInput
    public String readLine() {
        return this.f1585a.readLine();
    }

    @Override // java.io.DataInput
    public int readInt() {
        return this.f1585a.readInt();
    }

    @Override // java.io.DataInput
    public void readFully(byte[] bArr, int i, int i2) throws IOException {
        this.f1585a.readFully(bArr, i, i2);
    }

    @Override // java.io.DataInput
    public void readFully(byte[] bArr) throws IOException {
        this.f1585a.readFully(bArr);
    }

    @Override // java.io.DataInput
    public float readFloat() {
        return this.f1585a.readFloat();
    }

    @Override // java.io.DataInput
    public double readDouble() {
        return this.f1585a.readDouble();
    }

    @Override // java.io.DataInput
    public char readChar() {
        return this.f1585a.readChar();
    }

    @Override // java.io.DataInput
    public byte readByte() {
        return this.f1585a.readByte();
    }

    @Override // java.io.DataInput
    public boolean readBoolean() {
        return this.f1585a.readBoolean();
    }
}
