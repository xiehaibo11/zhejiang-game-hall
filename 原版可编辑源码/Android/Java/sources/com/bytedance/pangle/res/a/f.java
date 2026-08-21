package com.bytedance.pangle.res.a;

import java.io.DataInput;
import java.io.IOException;

public abstract class f implements DataInput {
    public final i a;

    public f(i iVar) {
        this.a = iVar;
    }

    @Override
    public int skipBytes(int i) {
        return this.a.skipBytes(i);
    }

    @Override
    public int readUnsignedShort() {
        return this.a.readUnsignedShort();
    }

    @Override
    public int readUnsignedByte() {
        return this.a.readUnsignedByte();
    }

    @Override
    public String readUTF() {
        return this.a.readUTF();
    }

    @Override
    public short readShort() {
        return this.a.readShort();
    }

    @Override
    public long readLong() {
        return this.a.readLong();
    }

    @Override
    public String readLine() {
        return this.a.readLine();
    }

    @Override
    public int readInt() {
        return this.a.readInt();
    }

    @Override
    public void readFully(byte[] bArr, int i, int i2) throws IOException {
        this.a.readFully(bArr, i, i2);
    }

    @Override
    public void readFully(byte[] bArr) throws IOException {
        this.a.readFully(bArr);
    }

    @Override
    public float readFloat() {
        return this.a.readFloat();
    }

    @Override
    public double readDouble() {
        return this.a.readDouble();
    }

    @Override
    public char readChar() {
        return this.a.readChar();
    }

    @Override
    public byte readByte() {
        return this.a.readByte();
    }

    @Override
    public boolean readBoolean() {
        return this.a.readBoolean();
    }
}
