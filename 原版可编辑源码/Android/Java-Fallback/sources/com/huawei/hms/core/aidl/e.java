package com.huawei.hms.core.aidl;

public class e {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private android.os.Bundle a(java.lang.String r2, android.os.Bundle r3, java.lang.Object r4) {
            r1 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a(r2, r4, r0)
            java.lang.String r2 = "_next_item_"
            r3.putBundle(r2, r0)
            return r0
    }

    private java.lang.Object a(java.lang.reflect.Field r5, android.os.Bundle r6) {
            r4 = this;
            java.lang.String r0 = r5.getName()
            java.lang.Object r6 = r6.get(r0)
            boolean r1 = r6 instanceof android.os.Bundle
            if (r1 == 0) goto L4d
            r1 = r6
            android.os.Bundle r1 = (android.os.Bundle) r1     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = "_val_type_"
            r3 = -1
            int r2 = r1.getInt(r2, r3)     // Catch: java.lang.Exception -> L35
            r3 = 1
            if (r2 != r3) goto L22
            java.lang.reflect.Type r5 = r5.getGenericType()     // Catch: java.lang.Exception -> L35
            java.util.List r5 = r4.a(r5, r1)     // Catch: java.lang.Exception -> L35
            return r5
        L22:
            if (r2 != 0) goto L4d
            java.lang.Class r5 = r5.getType()     // Catch: java.lang.Exception -> L35
            java.lang.Object r5 = r5.newInstance()     // Catch: java.lang.Exception -> L35
            com.huawei.hms.core.aidl.IMessageEntity r5 = (com.huawei.hms.core.aidl.IMessageEntity) r5     // Catch: java.lang.Exception -> L35
            android.os.Bundle r6 = (android.os.Bundle) r6     // Catch: java.lang.Exception -> L35
            com.huawei.hms.core.aidl.IMessageEntity r5 = r4.a(r6, r5)     // Catch: java.lang.Exception -> L35
            return r5
        L35:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "decode, read value of the field exception, field name: "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "MessageCodec"
            android.util.Log.e(r6, r5)
            r5 = 0
            return r5
        L4d:
            return r6
    }

    private void a(com.huawei.hms.core.aidl.IMessageEntity r3, java.lang.reflect.Field r4, android.os.Bundle r5) throws java.lang.IllegalAccessException {
            r2 = this;
            java.lang.Object r5 = r2.a(r4, r5)
            if (r5 == 0) goto L14
            boolean r0 = r4.isAccessible()
            r1 = 1
            r4.setAccessible(r1)
            r4.set(r3, r5)
            r4.setAccessible(r0)
        L14:
            return
    }

    private void b(com.huawei.hms.core.aidl.IMessageEntity r3, java.lang.reflect.Field r4, android.os.Bundle r5) throws java.lang.IllegalAccessException {
            r2 = this;
            boolean r0 = r4.isAccessible()
            r1 = 1
            r4.setAccessible(r1)
            java.lang.String r1 = r4.getName()
            java.lang.Object r3 = r4.get(r3)
            r2.a(r1, r3, r5)
            r4.setAccessible(r0)
            return
    }

    private boolean b(java.lang.String r3, java.lang.Object r4, android.os.Bundle r5) {
            r2 = this;
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto La
            java.lang.String r4 = (java.lang.String) r4
            r5.putString(r3, r4)
            goto L5d
        La:
            boolean r0 = r4 instanceof java.lang.Integer
            if (r0 == 0) goto L18
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            r5.putInt(r3, r4)
            goto L5d
        L18:
            boolean r0 = r4 instanceof java.lang.Short
            if (r0 == 0) goto L26
            java.lang.Short r4 = (java.lang.Short) r4
            short r4 = r4.shortValue()
            r5.putShort(r3, r4)
            goto L5d
        L26:
            boolean r0 = r4 instanceof java.lang.Long
            if (r0 == 0) goto L34
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            r5.putLong(r3, r0)
            goto L5d
        L34:
            boolean r0 = r4 instanceof java.lang.Float
            if (r0 == 0) goto L42
            java.lang.Float r4 = (java.lang.Float) r4
            float r4 = r4.floatValue()
            r5.putFloat(r3, r4)
            goto L5d
        L42:
            boolean r0 = r4 instanceof java.lang.Double
            if (r0 == 0) goto L50
            java.lang.Double r4 = (java.lang.Double) r4
            double r0 = r4.doubleValue()
            r5.putDouble(r3, r0)
            goto L5d
        L50:
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 == 0) goto L5f
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            r5.putBoolean(r3, r4)
        L5d:
            r3 = 1
            return r3
        L5f:
            r3 = 0
            return r3
    }

    public android.os.Bundle a(com.huawei.hms.core.aidl.IMessageEntity r8, android.os.Bundle r9) {
            r7 = this;
            java.lang.Class r0 = r8.getClass()
        L4:
            if (r0 == 0) goto L3e
            java.lang.reflect.Field[] r1 = r0.getDeclaredFields()
            int r2 = r1.length
            r3 = 0
        Lc:
            if (r3 >= r2) goto L39
            r4 = r1[r3]
            java.lang.Class<com.huawei.hms.core.aidl.annotation.Packed> r5 = com.huawei.hms.core.aidl.annotation.Packed.class
            boolean r5 = r4.isAnnotationPresent(r5)
            if (r5 == 0) goto L36
            r7.b(r8, r4, r9)     // Catch: java.lang.Throwable -> L1c
            goto L36
        L1c:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "encode, get value of the field exception, field name: "
            r5.append(r6)
            java.lang.String r4 = r4.getName()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "MessageCodec"
            android.util.Log.e(r5, r4)
        L36:
            int r3 = r3 + 1
            goto Lc
        L39:
            java.lang.Class r0 = r0.getSuperclass()
            goto L4
        L3e:
            return r9
    }

    public com.huawei.hms.core.aidl.IMessageEntity a(android.os.Bundle r8, com.huawei.hms.core.aidl.IMessageEntity r9) {
            r7 = this;
            if (r8 != 0) goto L3
            return r9
        L3:
            java.lang.Class r0 = r7.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r8.setClassLoader(r0)
            java.lang.Class r0 = r9.getClass()
        L12:
            if (r0 == 0) goto L4c
            java.lang.reflect.Field[] r1 = r0.getDeclaredFields()
            int r2 = r1.length
            r3 = 0
        L1a:
            if (r3 >= r2) goto L47
            r4 = r1[r3]
            java.lang.Class<com.huawei.hms.core.aidl.annotation.Packed> r5 = com.huawei.hms.core.aidl.annotation.Packed.class
            boolean r5 = r4.isAnnotationPresent(r5)
            if (r5 == 0) goto L44
            r7.a(r9, r4, r8)     // Catch: java.lang.Throwable -> L2a
            goto L44
        L2a:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "decode, set value of the field exception, field name:"
            r5.append(r6)
            java.lang.String r4 = r4.getName()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "MessageCodec"
            android.util.Log.e(r5, r4)
        L44:
            int r3 = r3 + 1
            goto L1a
        L47:
            java.lang.Class r0 = r0.getSuperclass()
            goto L12
        L4c:
            return r9
    }

    protected java.util.List<java.lang.Object> a(java.lang.reflect.Type r6, android.os.Bundle r7) throws java.lang.InstantiationException, java.lang.IllegalAccessException {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "_next_item_"
            android.os.Bundle r7 = r7.getBundle(r1)
        Lb:
            if (r7 == 0) goto L6a
            java.lang.String r2 = "_value_"
            java.lang.Object r2 = r7.get(r2)
            java.lang.Class r3 = r2.getClass()
            boolean r3 = r3.isPrimitive()
            if (r3 != 0) goto L62
            boolean r3 = r2 instanceof java.lang.String
            if (r3 != 0) goto L62
            boolean r3 = r2 instanceof java.io.Serializable
            if (r3 == 0) goto L26
            goto L62
        L26:
            boolean r3 = r2 instanceof android.os.Bundle
            if (r3 == 0) goto L65
            android.os.Bundle r2 = (android.os.Bundle) r2
            r3 = -1
            java.lang.String r4 = "_val_type_"
            int r3 = r2.getInt(r4, r3)
            r4 = 1
            if (r3 == r4) goto L5a
            if (r3 != 0) goto L52
            r3 = r6
            java.lang.reflect.ParameterizedType r3 = (java.lang.reflect.ParameterizedType) r3
            java.lang.reflect.Type[] r3 = r3.getActualTypeArguments()
            r4 = 0
            r3 = r3[r4]
            java.lang.Class r3 = (java.lang.Class) r3
            java.lang.Object r3 = r3.newInstance()
            com.huawei.hms.core.aidl.IMessageEntity r3 = (com.huawei.hms.core.aidl.IMessageEntity) r3
            com.huawei.hms.core.aidl.IMessageEntity r2 = r5.a(r2, r3)
            r0.add(r2)
            goto L65
        L52:
            java.lang.InstantiationException r6 = new java.lang.InstantiationException
            java.lang.String r7 = "Unknown type can not be supported"
            r6.<init>(r7)
            throw r6
        L5a:
            java.lang.InstantiationException r6 = new java.lang.InstantiationException
            java.lang.String r7 = "Nested List can not be supported"
            r6.<init>(r7)
            throw r6
        L62:
            r0.add(r2)
        L65:
            android.os.Bundle r7 = r7.getBundle(r1)
            goto Lb
        L6a:
            return r0
    }

    protected void a(java.lang.String r3, java.lang.Object r4, android.os.Bundle r5) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            boolean r0 = r2.b(r3, r4, r5)
            if (r0 == 0) goto La
            return
        La:
            boolean r0 = r4 instanceof java.lang.CharSequence
            if (r0 == 0) goto L14
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            r5.putCharSequence(r3, r4)
            goto L6b
        L14:
            boolean r0 = r4 instanceof android.os.Parcelable
            if (r0 == 0) goto L1e
            android.os.Parcelable r4 = (android.os.Parcelable) r4
            r5.putParcelable(r3, r4)
            goto L6b
        L1e:
            boolean r0 = r4 instanceof byte[]
            if (r0 == 0) goto L28
            byte[] r4 = (byte[]) r4
            r5.putByteArray(r3, r4)
            goto L6b
        L28:
            boolean r0 = r4 instanceof java.util.List
            if (r0 == 0) goto L32
            java.util.List r4 = (java.util.List) r4
            r2.a(r3, r4, r5)
            goto L6b
        L32:
            boolean r0 = r4 instanceof java.io.Serializable
            if (r0 == 0) goto L3c
            java.io.Serializable r4 = (java.io.Serializable) r4
            r5.putSerializable(r3, r4)
            goto L6b
        L3c:
            boolean r0 = r4 instanceof com.huawei.hms.core.aidl.IMessageEntity
            if (r0 == 0) goto L55
            com.huawei.hms.core.aidl.IMessageEntity r4 = (com.huawei.hms.core.aidl.IMessageEntity) r4
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            android.os.Bundle r4 = r2.a(r4, r0)
            r0 = 0
            java.lang.String r1 = "_val_type_"
            r4.putInt(r1, r0)
            r5.putBundle(r3, r4)
            goto L6b
        L55:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "cannot support type, "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "MessageCodec"
            android.util.Log.e(r4, r3)
        L6b:
            return
    }

    protected void a(java.lang.String r5, java.util.List r6, android.os.Bundle r7) {
            r4 = this;
            java.util.Iterator r6 = r6.iterator()
            r0 = 0
        L5:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r6.next()
            if (r0 != 0) goto L1f
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r7.putBundle(r5, r0)
            r2 = 1
            java.lang.String r3 = "_val_type_"
            r0.putInt(r3, r2)
        L1f:
            java.lang.String r2 = "_value_"
            android.os.Bundle r0 = r4.a(r2, r0, r1)
            goto L5
        L26:
            return
    }
}
