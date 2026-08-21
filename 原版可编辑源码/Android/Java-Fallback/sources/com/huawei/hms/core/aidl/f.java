package com.huawei.hms.core.aidl;

public class f extends com.huawei.hms.core.aidl.e {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected java.util.List<java.lang.Object> a(java.lang.reflect.Type r8, android.os.Bundle r9) throws java.lang.InstantiationException, java.lang.IllegalAccessException {
            r7 = this;
            java.lang.String r0 = "_list_size_"
            int r0 = r9.getInt(r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r2 = 0
            r3 = r2
        Ld:
            if (r3 >= r0) goto L78
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "_list_item_"
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.Object r4 = r9.get(r4)
            java.lang.Class r5 = r4.getClass()
            boolean r5 = r5.isPrimitive()
            if (r5 != 0) goto L72
            boolean r5 = r4 instanceof java.lang.String
            if (r5 != 0) goto L72
            boolean r5 = r4 instanceof java.io.Serializable
            if (r5 == 0) goto L37
            goto L72
        L37:
            boolean r5 = r4 instanceof android.os.Bundle
            if (r5 == 0) goto L75
            android.os.Bundle r4 = (android.os.Bundle) r4
            r5 = -1
            java.lang.String r6 = "_val_type_"
            int r5 = r4.getInt(r6, r5)
            r6 = 1
            if (r5 == r6) goto L6a
            if (r5 != 0) goto L62
            r5 = r8
            java.lang.reflect.ParameterizedType r5 = (java.lang.reflect.ParameterizedType) r5
            java.lang.reflect.Type[] r5 = r5.getActualTypeArguments()
            r5 = r5[r2]
            java.lang.Class r5 = (java.lang.Class) r5
            java.lang.Object r5 = r5.newInstance()
            com.huawei.hms.core.aidl.IMessageEntity r5 = (com.huawei.hms.core.aidl.IMessageEntity) r5
            com.huawei.hms.core.aidl.IMessageEntity r4 = r7.a(r4, r5)
            r1.add(r4)
            goto L75
        L62:
            java.lang.InstantiationException r8 = new java.lang.InstantiationException
            java.lang.String r9 = "Unknown type can not be supported"
            r8.<init>(r9)
            throw r8
        L6a:
            java.lang.InstantiationException r8 = new java.lang.InstantiationException
            java.lang.String r9 = "Nested List can not be supported"
            r8.<init>(r9)
            throw r8
        L72:
            r1.add(r4)
        L75:
            int r3 = r3 + 1
            goto Ld
        L78:
            return r1
    }

    @Override
    protected void a(java.lang.String r5, java.util.List r6, android.os.Bundle r7) {
            r4 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1 = 1
            java.lang.String r2 = "_val_type_"
            r0.putInt(r2, r1)
            int r1 = r6.size()
            java.lang.String r2 = "_list_size_"
            r0.putInt(r2, r1)
            r1 = 0
        L15:
            int r2 = r6.size()
            if (r1 >= r2) goto L36
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "_list_item_"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.Object r3 = r6.get(r1)
            r4.a(r2, r3, r0)
            int r1 = r1 + 1
            goto L15
        L36:
            r7.putBundle(r5, r0)
            return
    }
}
