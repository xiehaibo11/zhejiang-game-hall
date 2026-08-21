package com.bianfeng.ymnsdk.gongxiang;

class g {
    private final java.util.List<com.bianfeng.ymnsdk.gongxiang.h> a;

    g() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    public long a(java.io.DataOutput r12) throws java.io.IOException {
            r11 = this;
            r0 = 0
            r1 = 24
            r2 = r1
            r1 = 0
        L5:
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r4 = r11.a
            int r4 = r4.size()
            if (r1 >= r4) goto L21
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r4 = r11.a
            java.lang.Object r4 = r4.get(r1)
            com.bianfeng.ymnsdk.gongxiang.h r4 = (com.bianfeng.ymnsdk.gongxiang.h) r4
            byte[] r4 = r4.a()
            int r4 = r4.length
            int r4 = r4 + 12
            long r4 = (long) r4
            long r2 = r2 + r4
            int r1 = r1 + 1
            goto L5
        L21:
            r1 = 8
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteOrder r5 = java.nio.ByteOrder.LITTLE_ENDIAN
            r4.order(r5)
            r4.putLong(r2)
            r4.flip()
            byte[] r4 = r4.array()
            r12.write(r4)
        L39:
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r4 = r11.a
            int r4 = r4.size()
            if (r0 >= r4) goto L87
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r4 = r11.a
            java.lang.Object r4 = r4.get(r0)
            com.bianfeng.ymnsdk.gongxiang.h r4 = (com.bianfeng.ymnsdk.gongxiang.h) r4
            byte[] r5 = r4.a()
            java.nio.ByteBuffer r6 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteOrder r7 = java.nio.ByteOrder.LITTLE_ENDIAN
            r6.order(r7)
            int r7 = r5.length
            r8 = 4
            int r7 = r7 + r8
            long r9 = (long) r7
            r6.putLong(r9)
            r6.flip()
            byte[] r6 = r6.array()
            r12.write(r6)
            java.nio.ByteBuffer r6 = java.nio.ByteBuffer.allocate(r8)
            java.nio.ByteOrder r7 = java.nio.ByteOrder.LITTLE_ENDIAN
            r6.order(r7)
            int r4 = r4.b()
            r6.putInt(r4)
            r6.flip()
            byte[] r4 = r6.array()
            r12.write(r4)
            r12.write(r5)
            int r0 = r0 + 1
            goto L39
        L87:
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r4)
            r0.putLong(r2)
            r0.flip()
            byte[] r0 = r0.array()
            r12.write(r0)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r4)
            r4 = 2334950737559900225(0x20676953204b5041, double:1.3968830566012645E-152)
            r0.putLong(r4)
            r0.flip()
            byte[] r0 = r0.array()
            r12.write(r0)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            r4 = 3617552046287187010(0x3234206b636f6c42, double:7.465385175170059E-67)
            r0.putLong(r4)
            r0.flip()
            byte[] r0 = r0.array()
            r12.write(r0)
            return r2
    }

    public void a(com.bianfeng.ymnsdk.gongxiang.h r2) {
            r1 = this;
            java.util.List<com.bianfeng.ymnsdk.gongxiang.h> r0 = r1.a
            r0.add(r2)
            return
    }
}
