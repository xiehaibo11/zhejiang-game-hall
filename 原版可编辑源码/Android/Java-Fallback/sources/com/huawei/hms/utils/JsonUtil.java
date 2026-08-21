package com.huawei.hms.utils;

public class JsonUtil {
    private static final java.lang.String BYTE_BYTE = "_byte_";
    private static final java.lang.String LIST_FIELD_VALUE = "_value_";
    private static final java.lang.String LIST_ITEM_VALUE = "_list_item_";
    private static final java.lang.String LIST_SIZE = "_list_size_";
    private static final java.lang.String MAP_MAP = "_map_";
    private static final java.lang.String NEXT_ITEM = "_next_item_";
    private static final java.lang.String PRE_PKG = "com.huawei";
    private static final java.lang.String TAG = "JsonUtil";
    protected static final int VAL_BYTE = 2;
    protected static final int VAL_ENTITY = 0;
    protected static final int VAL_LIST = 1;
    protected static final int VAL_MAP = 3;
    protected static final int VAL_NULL = -1;
    protected static final java.lang.String VAL_TYPE = "_val_type_";


    public JsonUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String createInnerJsonString(com.huawei.hms.core.aidl.IMessageEntity r9) throws java.lang.IllegalAccessException, org.json.JSONException {
            java.lang.Class r0 = r9.getClass()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
        L9:
            if (r0 == 0) goto L3b
            java.lang.reflect.Field[] r2 = r0.getDeclaredFields()
            int r3 = r2.length
            r4 = 0
        L11:
            if (r4 >= r3) goto L36
            r5 = r2[r4]
            java.lang.Class<com.huawei.hms.core.aidl.annotation.Packed> r6 = com.huawei.hms.core.aidl.annotation.Packed.class
            boolean r6 = r5.isAnnotationPresent(r6)
            if (r6 == 0) goto L33
            boolean r6 = r5.isAccessible()
            r7 = 1
            setAccessible(r5, r7)
            java.lang.String r7 = r5.getName()
            java.lang.Object r8 = r5.get(r9)
            setAccessible(r5, r6)
            disposeType(r7, r8, r1)
        L33:
            int r4 = r4 + 1
            goto L11
        L36:
            java.lang.Class r0 = r0.getSuperclass()
            goto L9
        L3b:
            java.lang.String r9 = r1.toString()
            return r9
    }

    public static java.lang.String createJsonString(com.huawei.hms.core.aidl.IMessageEntity r4) {
            java.lang.String r0 = ""
            java.lang.String r1 = "JsonUtil"
            if (r4 != 0) goto Lc
            java.lang.String r4 = "createJsonString error, the input IMessageEntity is null"
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            return r0
        Lc:
            java.lang.String r4 = createInnerJsonString(r4)     // Catch: org.json.JSONException -> L11 java.lang.IllegalAccessException -> L2b
            return r4
        L11:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "catch JSONException "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            goto L44
        L2b:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "catch IllegalAccessException "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L44:
            return r0
    }

    private static boolean disposeType(java.lang.String r2, java.lang.Object r3, org.json.JSONObject r4) throws org.json.JSONException, java.lang.IllegalAccessException {
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r3 = (java.lang.String) r3
            r4.put(r2, r3)
            goto L82
        Lb:
            boolean r0 = r3 instanceof java.lang.Integer
            if (r0 == 0) goto L1a
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r4.put(r2, r3)
            goto L82
        L1a:
            boolean r0 = r3 instanceof java.lang.Short
            if (r0 == 0) goto L24
            java.lang.Short r3 = (java.lang.Short) r3
            r4.put(r2, r3)
            goto L82
        L24:
            boolean r0 = r3 instanceof java.lang.Long
            if (r0 == 0) goto L2e
            java.lang.Long r3 = (java.lang.Long) r3
            r4.put(r2, r3)
            goto L82
        L2e:
            boolean r0 = r3 instanceof java.lang.Float
            if (r0 == 0) goto L38
            java.lang.Float r3 = (java.lang.Float) r3
            r4.put(r2, r3)
            goto L82
        L38:
            boolean r0 = r3 instanceof java.lang.Double
            if (r0 == 0) goto L42
            java.lang.Double r3 = (java.lang.Double) r3
            r4.put(r2, r3)
            goto L82
        L42:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L4c
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            r4.put(r2, r3)
            goto L82
        L4c:
            boolean r0 = r3 instanceof org.json.JSONObject
            if (r0 == 0) goto L56
            org.json.JSONObject r3 = (org.json.JSONObject) r3
            r4.put(r2, r3)
            goto L82
        L56:
            boolean r0 = r3 instanceof byte[]
            if (r0 == 0) goto L60
            byte[] r3 = (byte[]) r3
            writeByte(r2, r3, r4)
            goto L82
        L60:
            boolean r0 = r3 instanceof java.util.List
            if (r0 == 0) goto L6a
            java.util.List r3 = (java.util.List) r3
            writeList(r2, r3, r4)
            goto L82
        L6a:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L74
            java.util.Map r3 = (java.util.Map) r3
            writeMap(r2, r3, r4)
            goto L82
        L74:
            boolean r0 = r3 instanceof com.huawei.hms.core.aidl.IMessageEntity
            r1 = 0
            if (r0 == 0) goto L9b
            com.huawei.hms.core.aidl.IMessageEntity r3 = (com.huawei.hms.core.aidl.IMessageEntity) r3     // Catch: java.lang.IllegalAccessException -> L84
            java.lang.String r3 = createInnerJsonString(r3)     // Catch: java.lang.IllegalAccessException -> L84
            r4.put(r2, r3)     // Catch: java.lang.IllegalAccessException -> L84
        L82:
            r2 = 1
            return r2
        L84:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "IllegalAccessException , "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.e(r3, r2)
        L9b:
            return r1
    }

    public static java.lang.Object getInfoFromJsonobject(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 != 0) goto L39
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Le
            goto L39
        Le:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L23
            r0.<init>(r2)     // Catch: org.json.JSONException -> L23
            boolean r2 = r0.has(r3)     // Catch: org.json.JSONException -> L23
            if (r2 != 0) goto L1a
            return r1
        L1a:
            java.lang.Object r2 = r0.get(r3)     // Catch: org.json.JSONException -> L23
            boolean r3 = r2 instanceof java.lang.String     // Catch: org.json.JSONException -> L23
            if (r3 == 0) goto L39
            return r2
        L23:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "getInfoFromJsonobject:parser json error :"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.e(r3, r2)
        L39:
            return r1
    }

    public static int getIntValue(org.json.JSONObject r1, java.lang.String r2) throws org.json.JSONException {
            if (r1 == 0) goto Ld
            boolean r0 = r1.has(r2)
            if (r0 == 0) goto Ld
            int r1 = r1.getInt(r2)
            goto Le
        Ld:
            r1 = -1
        Le:
            return r1
    }

    private static java.lang.Object getObjectValue(java.lang.String r2, org.json.JSONObject r3) throws org.json.JSONException {
            boolean r0 = r3.has(r2)
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r3.get(r2)
            return r2
        Lb:
            java.lang.String r0 = "header"
            boolean r1 = r3.has(r0)
            if (r1 == 0) goto L26
            org.json.JSONObject r1 = r3.getJSONObject(r0)
            boolean r1 = r1.has(r2)
            if (r1 == 0) goto L26
            org.json.JSONObject r3 = r3.getJSONObject(r0)
            java.lang.Object r2 = r3.get(r2)
            return r2
        L26:
            java.lang.String r0 = "body"
            boolean r1 = r3.has(r0)
            if (r1 == 0) goto L41
            org.json.JSONObject r1 = r3.getJSONObject(r0)
            boolean r1 = r1.has(r2)
            if (r1 == 0) goto L41
            org.json.JSONObject r3 = r3.getJSONObject(r0)
            java.lang.Object r2 = r3.get(r2)
            return r2
        L41:
            r2 = 0
            return r2
    }

    public static java.lang.String getStringValue(org.json.JSONObject r1, java.lang.String r2) throws org.json.JSONException {
            if (r1 == 0) goto Ld
            boolean r0 = r1.has(r2)
            if (r0 == 0) goto Ld
            java.lang.String r1 = r1.getString(r2)
            goto Le
        Ld:
            r1 = 0
        Le:
            return r1
    }

    public static com.huawei.hms.core.aidl.IMessageEntity jsonToEntity(java.lang.String r8, com.huawei.hms.core.aidl.IMessageEntity r9) {
            java.lang.String r0 = "JsonUtil"
            java.lang.Class r1 = r9.getClass()     // Catch: org.json.JSONException -> L43
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L43
            r2.<init>(r8)     // Catch: org.json.JSONException -> L43
        Lb:
            if (r1 == 0) goto L5c
            java.lang.reflect.Field[] r8 = r1.getDeclaredFields()     // Catch: org.json.JSONException -> L43
            int r3 = r8.length     // Catch: org.json.JSONException -> L43
            r4 = 0
        L13:
            if (r4 >= r3) goto L3e
            r5 = r8[r4]     // Catch: org.json.JSONException -> L43
            java.lang.Class<com.huawei.hms.core.aidl.annotation.Packed> r6 = com.huawei.hms.core.aidl.annotation.Packed.class
            boolean r6 = r5.isAnnotationPresent(r6)     // Catch: org.json.JSONException -> L43
            if (r6 == 0) goto L3b
            readFiled(r9, r5, r2)     // Catch: java.lang.IllegalAccessException -> L23 org.json.JSONException -> L43
            goto L3b
        L23:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L43
            r6.<init>()     // Catch: org.json.JSONException -> L43
            java.lang.String r7 = "jsonToEntity, set value of the field exception, field name:"
            r6.append(r7)     // Catch: org.json.JSONException -> L43
            java.lang.String r5 = r5.getName()     // Catch: org.json.JSONException -> L43
            r6.append(r5)     // Catch: org.json.JSONException -> L43
            java.lang.String r5 = r6.toString()     // Catch: org.json.JSONException -> L43
            com.huawei.hms.support.log.HMSLog.e(r0, r5)     // Catch: org.json.JSONException -> L43
        L3b:
            int r4 = r4 + 1
            goto L13
        L3e:
            java.lang.Class r1 = r1.getSuperclass()     // Catch: org.json.JSONException -> L43
            goto Lb
        L43:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "catch JSONException when parse jsonString"
            r1.append(r2)
            java.lang.String r8 = r8.getMessage()
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r8)
        L5c:
            return r9
    }

    private static byte[] readByte(org.json.JSONObject r2) throws org.json.JSONException {
            java.lang.String r0 = "_byte_"
            java.lang.String r2 = r2.getString(r0)     // Catch: java.lang.IllegalArgumentException -> Lb
            byte[] r2 = com.huawei.hms.support.log.common.Base64.decode(r2)     // Catch: java.lang.IllegalArgumentException -> Lb
            return r2
        Lb:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "readByte failed : "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
            r2 = 0
            return r2
    }

    private static void readFiled(com.huawei.hms.core.aidl.IMessageEntity r2, java.lang.reflect.Field r3, org.json.JSONObject r4) throws org.json.JSONException, java.lang.IllegalAccessException {
            java.lang.Object r4 = readJson(r2, r3, r4)
            if (r4 == 0) goto L14
            boolean r0 = r3.isAccessible()
            r1 = 1
            setAccessible(r3, r1)
            r3.set(r2, r4)
            setAccessible(r3, r0)
        L14:
            return
    }

    private static java.lang.Object readJson(com.huawei.hms.core.aidl.IMessageEntity r4, java.lang.reflect.Field r5, org.json.JSONObject r6) throws org.json.JSONException, java.lang.IllegalAccessException {
            java.lang.String r4 = "_val_type_"
            java.lang.String r0 = "JsonUtil"
            java.lang.String r1 = r5.getName()
            java.lang.Object r6 = getObjectValue(r1, r6)
            r1 = 0
            if (r6 == 0) goto L94
            java.lang.Class r2 = r5.getType()     // Catch: java.lang.InstantiationException -> L8f
            java.lang.String r2 = r2.getName()     // Catch: java.lang.InstantiationException -> L8f
            java.lang.String r3 = "com.huawei"
            boolean r2 = r2.startsWith(r3)     // Catch: java.lang.InstantiationException -> L8f
            if (r2 == 0) goto L3c
            java.lang.Class r2 = r5.getType()     // Catch: java.lang.InstantiationException -> L8f
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.InstantiationException -> L8f
            boolean r2 = r2 instanceof com.huawei.hms.core.aidl.IMessageEntity     // Catch: java.lang.InstantiationException -> L8f
            if (r2 == 0) goto L3c
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.InstantiationException -> L8f
            java.lang.Class r4 = r5.getType()     // Catch: java.lang.InstantiationException -> L8f
            java.lang.Object r4 = r4.newInstance()     // Catch: java.lang.InstantiationException -> L8f
            com.huawei.hms.core.aidl.IMessageEntity r4 = (com.huawei.hms.core.aidl.IMessageEntity) r4     // Catch: java.lang.InstantiationException -> L8f
            com.huawei.hms.core.aidl.IMessageEntity r4 = jsonToEntity(r6, r4)     // Catch: java.lang.InstantiationException -> L8f
            return r4
        L3c:
            boolean r2 = r6 instanceof org.json.JSONObject     // Catch: java.lang.InstantiationException -> L8f
            if (r2 == 0) goto L8e
            r2 = r6
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.InstantiationException -> L8f
            boolean r2 = r2.has(r4)     // Catch: java.lang.InstantiationException -> L8f
            if (r2 == 0) goto L8e
            r2 = r6
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.InstantiationException -> L8f
            int r4 = r2.getInt(r4)     // Catch: java.lang.InstantiationException -> L8f
            r2 = 1
            if (r4 == r2) goto L83
            if (r4 != 0) goto L56
            goto L83
        L56:
            r2 = 2
            if (r4 != r2) goto L60
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.InstantiationException -> L8f
            byte[] r4 = readByte(r6)     // Catch: java.lang.InstantiationException -> L8f
            return r4
        L60:
            r2 = 3
            if (r4 != r2) goto L6e
            java.lang.reflect.Type r4 = r5.getGenericType()     // Catch: java.lang.InstantiationException -> L8f
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.InstantiationException -> L8f
            java.util.Map r4 = readMap(r4, r6)     // Catch: java.lang.InstantiationException -> L8f
            return r4
        L6e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.InstantiationException -> L8f
            r5.<init>()     // Catch: java.lang.InstantiationException -> L8f
            java.lang.String r6 = "cannot support type : "
            r5.append(r6)     // Catch: java.lang.InstantiationException -> L8f
            r5.append(r4)     // Catch: java.lang.InstantiationException -> L8f
            java.lang.String r4 = r5.toString()     // Catch: java.lang.InstantiationException -> L8f
            com.huawei.hms.support.log.HMSLog.e(r0, r4)     // Catch: java.lang.InstantiationException -> L8f
            goto L94
        L83:
            java.lang.reflect.Type r4 = r5.getGenericType()     // Catch: java.lang.InstantiationException -> L8f
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.InstantiationException -> L8f
            java.util.List r4 = readList(r4, r6)     // Catch: java.lang.InstantiationException -> L8f
            return r4
        L8e:
            return r6
        L8f:
            java.lang.String r4 = "InstantiationException  "
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
        L94:
            return r1
    }

    private static java.util.List<java.lang.Object> readList(java.lang.reflect.Type r7, org.json.JSONObject r8) throws org.json.JSONException, java.lang.IllegalAccessException, java.lang.InstantiationException {
            java.lang.String r0 = "_list_size_"
            int r0 = r8.getInt(r0)
            java.lang.String r1 = "_val_type_"
            int r1 = r8.getInt(r1)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r0)
            r3 = 0
            r4 = r3
        L13:
            if (r4 >= r0) goto L50
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "_list_item_"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            java.lang.Object r5 = r8.get(r5)
            if (r1 != 0) goto L47
            r6 = r7
            java.lang.reflect.ParameterizedType r6 = (java.lang.reflect.ParameterizedType) r6
            java.lang.reflect.Type[] r6 = r6.getActualTypeArguments()
            r6 = r6[r3]
            java.lang.Class r6 = (java.lang.Class) r6
            java.lang.Object r6 = r6.newInstance()
            java.lang.String r5 = (java.lang.String) r5
            com.huawei.hms.core.aidl.IMessageEntity r6 = (com.huawei.hms.core.aidl.IMessageEntity) r6
            com.huawei.hms.core.aidl.IMessageEntity r5 = jsonToEntity(r5, r6)
            r2.add(r5)
            goto L4d
        L47:
            r6 = 1
            if (r1 != r6) goto L4d
            r2.add(r5)
        L4d:
            int r4 = r4 + 1
            goto L13
        L50:
            return r2
    }

    private static java.util.Map readMap(java.lang.reflect.Type r4, org.json.JSONObject r5) throws org.json.JSONException, java.lang.IllegalAccessException, java.lang.InstantiationException {
            java.lang.reflect.ParameterizedType r4 = (java.lang.reflect.ParameterizedType) r4
            java.lang.reflect.Type[] r4 = r4.getActualTypeArguments()
            r0 = 1
            r4 = r4[r0]
            java.lang.Class r4 = (java.lang.Class) r4
            java.lang.String r0 = "_map_"
            java.lang.String r5 = r5.getString(r0)
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r5)
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r1 = 0
        L1c:
            int r2 = r0.length()
            if (r1 >= r2) goto L52
            java.lang.Object r2 = r4.newInstance()
            boolean r2 = r2 instanceof com.huawei.hms.core.aidl.IMessageEntity
            if (r2 == 0) goto L42
            int r2 = r1 + 1
            java.lang.String r2 = r0.getString(r2)
            java.lang.Object r3 = r4.newInstance()
            com.huawei.hms.core.aidl.IMessageEntity r3 = (com.huawei.hms.core.aidl.IMessageEntity) r3
            com.huawei.hms.core.aidl.IMessageEntity r2 = jsonToEntity(r2, r3)
            java.lang.Object r3 = r0.get(r1)
            r5.put(r3, r2)
            goto L4f
        L42:
            java.lang.Object r2 = r0.get(r1)
            int r3 = r1 + 1
            java.lang.Object r3 = r0.get(r3)
            r5.put(r2, r3)
        L4f:
            int r1 = r1 + 2
            goto L1c
        L52:
            return r5
    }

    private static void setAccessible(java.lang.reflect.Field r1, boolean r2) {
            com.huawei.hms.utils.JsonUtil$1 r0 = new com.huawei.hms.utils.JsonUtil$1
            r0.<init>(r1, r2)
            java.security.AccessController.doPrivileged(r0)
            return
    }

    private static void writeByte(java.lang.String r3, byte[] r4, org.json.JSONObject r5) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "_val_type_"
            r2 = 2
            r0.put(r1, r2)
            java.lang.String r1 = "_byte_"
            java.lang.String r4 = com.huawei.hms.support.log.common.Base64.encode(r4)     // Catch: java.lang.IllegalArgumentException -> L15
            r0.put(r1, r4)     // Catch: java.lang.IllegalArgumentException -> L15
            goto L30
        L15:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "writeByte failed : "
            r1.append(r2)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "JsonUtil"
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L30:
            r5.put(r3, r0)
            return
    }

    private static void writeList(java.lang.String r6, java.util.List<?> r7, org.json.JSONObject r8) throws org.json.JSONException, java.lang.IllegalAccessException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1 = 1
            java.lang.String r2 = "_val_type_"
            r0.put(r2, r1)
            int r1 = r7.size()
            java.lang.String r3 = "_list_size_"
            r0.put(r3, r1)
            r1 = 0
            r3 = r1
        L16:
            int r4 = r7.size()
            if (r3 >= r4) goto L42
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "_list_item_"
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.Object r5 = r7.get(r3)
            disposeType(r4, r5, r0)
            java.lang.Object r4 = r7.get(r3)
            boolean r4 = r4 instanceof com.huawei.hms.core.aidl.IMessageEntity
            if (r4 == 0) goto L3f
            r0.put(r2, r1)
        L3f:
            int r3 = r3 + 1
            goto L16
        L42:
            r8.put(r6, r0)
            return
    }

    private static void writeMap(java.lang.String r4, java.util.Map r5, org.json.JSONObject r6) throws org.json.JSONException, java.lang.IllegalAccessException {
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
        Ld:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L44
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.Object r1 = r1.getValue()
            boolean r3 = r2 instanceof com.huawei.hms.core.aidl.IMessageEntity
            if (r3 == 0) goto L2f
            com.huawei.hms.core.aidl.IMessageEntity r2 = (com.huawei.hms.core.aidl.IMessageEntity) r2
            java.lang.String r2 = createInnerJsonString(r2)
            r0.put(r2)
            goto L32
        L2f:
            r0.put(r2)
        L32:
            boolean r2 = r1 instanceof com.huawei.hms.core.aidl.IMessageEntity
            if (r2 == 0) goto L40
            com.huawei.hms.core.aidl.IMessageEntity r1 = (com.huawei.hms.core.aidl.IMessageEntity) r1
            java.lang.String r1 = createInnerJsonString(r1)
            r0.put(r1)
            goto Ld
        L40:
            r0.put(r1)
            goto Ld
        L44:
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            r1 = 3
            java.lang.String r2 = "_val_type_"
            r5.put(r2, r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "_map_"
            r5.put(r1, r0)
            r6.put(r4, r5)
            return
    }
}
