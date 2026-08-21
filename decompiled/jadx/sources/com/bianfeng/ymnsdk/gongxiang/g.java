package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.afext.read.ApkUtil;
import java.io.DataOutput;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: ApkSigningBlock.java */
/* JADX INFO: loaded from: classes.dex */
class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final List<h> f1470a = new ArrayList();

    g() {
    }

    public void a(h payload) {
        this.f1470a.add(payload);
    }

    public long a(DataOutput dataOutput) throws IOException {
        long length = 24;
        for (int index = 0; index < this.f1470a.size(); index++) {
            length += (long) (this.f1470a.get(index).a().length + 12);
        }
        ByteBuffer byteBuffer = ByteBuffer.allocate(8);
        byteBuffer.order(ByteOrder.LITTLE_ENDIAN);
        byteBuffer.putLong(length);
        byteBuffer.flip();
        dataOutput.write(byteBuffer.array());
        for (int index2 = 0; index2 < this.f1470a.size(); index2++) {
            h payload = this.f1470a.get(index2);
            byte[] bytes = payload.a();
            ByteBuffer byteBuffer2 = ByteBuffer.allocate(8);
            byteBuffer2.order(ByteOrder.LITTLE_ENDIAN);
            byteBuffer2.putLong(bytes.length + 4);
            byteBuffer2.flip();
            dataOutput.write(byteBuffer2.array());
            ByteBuffer byteBuffer3 = ByteBuffer.allocate(4);
            byteBuffer3.order(ByteOrder.LITTLE_ENDIAN);
            byteBuffer3.putInt(payload.b());
            byteBuffer3.flip();
            dataOutput.write(byteBuffer3.array());
            dataOutput.write(bytes);
        }
        ByteBuffer byteBuffer4 = ByteBuffer.allocate(8);
        byteBuffer4.order(ByteOrder.LITTLE_ENDIAN);
        byteBuffer4.putLong(length);
        byteBuffer4.flip();
        dataOutput.write(byteBuffer4.array());
        ByteBuffer byteBuffer5 = ByteBuffer.allocate(8);
        byteBuffer5.order(ByteOrder.LITTLE_ENDIAN);
        byteBuffer5.putLong(ApkUtil.APK_SIG_BLOCK_MAGIC_LO);
        byteBuffer5.flip();
        dataOutput.write(byteBuffer5.array());
        ByteBuffer byteBuffer6 = ByteBuffer.allocate(8);
        byteBuffer6.order(ByteOrder.LITTLE_ENDIAN);
        byteBuffer6.putLong(ApkUtil.APK_SIG_BLOCK_MAGIC_HI);
        byteBuffer6.flip();
        dataOutput.write(byteBuffer6.array());
        return length;
    }
}
