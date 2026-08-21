package com.bianfeng.ymnsdk.feature;

public abstract class YmnPlugin implements com.bianfeng.ymnsdk.feature.protocol.IPlugin {
    private java.util.Map<java.lang.String, java.lang.String> functionAliasNames;
    private java.util.Map<java.lang.String, java.lang.Integer> functionNames;
    private java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin.a, java.lang.reflect.Method> functions;

    public static class a {
        public final java.lang.String a;
        public final java.lang.Class<?>[] b;

        public a(java.lang.String r1, java.lang.Class<?>[] r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public boolean equals(java.lang.Object r6) {
                r5 = this;
                r0 = 1
                if (r5 != r6) goto L4
                return r0
            L4:
                r1 = 0
                if (r6 != 0) goto L8
                return r1
            L8:
                java.lang.Class r2 = r5.getClass()
                java.lang.Class r3 = r6.getClass()
                if (r2 == r3) goto L13
                return r1
            L13:
                r2 = r6
                com.bianfeng.ymnsdk.feature.YmnPlugin$a r2 = (com.bianfeng.ymnsdk.feature.YmnPlugin.a) r2
                java.lang.String r3 = r5.a
                if (r3 != 0) goto L1f
                java.lang.String r3 = r2.a
                if (r3 == 0) goto L28
                return r1
            L1f:
                java.lang.String r4 = r2.a
                boolean r3 = r3.equals(r4)
                if (r3 != 0) goto L28
                return r1
            L28:
                java.lang.Class<?>[] r3 = r5.b
                java.lang.Class<?>[] r4 = r2.b
                boolean r3 = java.util.Arrays.equals(r3, r4)
                if (r3 != 0) goto L33
                return r1
            L33:
                return r0
        }

        public int hashCode() {
                r8 = this;
                r0 = 31
                r1 = 1
                int r2 = r1 * 31
                java.lang.String r3 = r8.a
                r4 = 0
                if (r3 != 0) goto Lc
                r3 = 0
                goto L10
            Lc:
                int r3 = r3.hashCode()
            L10:
                int r2 = r2 + r3
                java.lang.Class<?>[] r1 = r8.b
                if (r1 != 0) goto L16
                return r2
            L16:
                int r3 = r1.length
            L17:
                if (r4 >= r3) goto L2a
                r5 = r1[r4]
                int r6 = r2 * 31
                java.lang.String r7 = r5.getName()
                int r7 = r7.hashCode()
                int r2 = r6 + r7
                int r4 = r4 + 1
                goto L17
            L2a:
                return r2
        }
    }

    public static class b {
        public static java.lang.String a(com.bianfeng.ymnsdk.feature.protocol.IPlugin r9) {
                java.lang.Class r0 = r9.getClass()
                java.lang.Class[] r0 = r0.getInterfaces()
                if (r0 == 0) goto L3f
                int r1 = r0.length
                if (r1 != 0) goto Le
                goto L3f
            Le:
                r1 = 31
                r2 = 1
                int r3 = r0.length
                r4 = 0
                r5 = r2
                r2 = 0
            L15:
                if (r2 >= r3) goto L28
                r6 = r0[r2]
                int r7 = r5 * 31
                java.lang.String r8 = r6.getName()
                int r8 = r8.hashCode()
                int r5 = r7 + r8
                int r2 = r2 + 1
                goto L15
            L28:
                r2 = 2
                java.lang.Object[] r2 = new java.lang.Object[r2]
                java.lang.String r3 = r9.getPluginId()
                r2[r4] = r3
                java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
                r4 = 1
                r2[r4] = r3
                java.lang.String r3 = "%s_%d"
                java.lang.String r2 = java.lang.String.format(r3, r2)
                return r2
            L3f:
                java.lang.String r1 = r9.getPluginName()
                return r1
        }
    }

    public YmnPlugin() {
            r5 = this;
            r5.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r5.functions = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r5.functionNames = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r5.functionAliasNames = r0
            java.lang.Class r0 = r5.getClass()
            java.lang.reflect.Method[] r0 = r0.getDeclaredMethods()
            int r1 = r0.length
            r2 = 0
        L22:
            if (r2 >= r1) goto L3a
            r3 = r0[r2]
            r4 = 1
            r3.setAccessible(r4)
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YFunction> r4 = com.bianfeng.ymnsdk.feature.protocol.YFunction.class
            java.lang.annotation.Annotation r4 = r3.getAnnotation(r4)
            com.bianfeng.ymnsdk.feature.protocol.YFunction r4 = (com.bianfeng.ymnsdk.feature.protocol.YFunction) r4
            if (r4 == 0) goto L37
            r5.loadYmnTagFunction(r3, r4)
        L37:
            int r2 = r2 + 1
            goto L22
        L3a:
            return
    }

    private android.util.Pair<java.lang.Class<?>[], java.lang.String[]> fixGameFrameworkTypes(java.lang.String r10, java.lang.String... r11) {
            r9 = this;
            int r0 = r11.length
            java.lang.Class[] r1 = new java.lang.Class[r0]
            r2 = 0
        L4:
            if (r2 >= r0) goto Ld
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r1[r2] = r3
            int r2 = r2 + 1
            goto L4
        Ld:
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r2 = r9.getFunctionKey(r10, r1)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r3 = r9.functions
            boolean r3 = r3.containsKey(r2)
            r4 = 3
            r5 = 2
            r6 = 0
            r7 = 1
            if (r3 == 0) goto L3c
            java.lang.Object[] r3 = new java.lang.Object[r4]
            java.lang.String r4 = r9.getPluginName()
            r3[r6] = r4
            r3[r7] = r10
            java.lang.Integer r4 = java.lang.Integer.valueOf(r0)
            r3[r5] = r4
            java.lang.String r4 = "%s(%s) found match types, args lenth is %d"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            android.util.Pair r3 = new android.util.Pair
            r3.<init>(r1, r11)
            return r3
        L3c:
            r3 = 4
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r8 = r9.getPluginName()
            r3[r6] = r8
            r3[r7] = r10
            java.lang.Integer r6 = java.lang.Integer.valueOf(r0)
            r3[r5] = r6
            int r5 = r0 + (-1)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r3[r4] = r5
            java.lang.String r4 = "%s(%s) can't find match types, reset args lenth(%d -> %d)"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            com.bianfeng.ymnsdk.util.Logger.e(r3)
            if (r0 != r7) goto L62
            r3 = 0
            return r3
        L62:
            int r3 = r0 + (-1)
            java.lang.String[] r3 = new java.lang.String[r3]
            r4 = 0
        L67:
            int r5 = r0 + (-1)
            if (r4 >= r5) goto L72
            r5 = r11[r4]
            r3[r4] = r5
            int r4 = r4 + 1
            goto L67
        L72:
            android.util.Pair r4 = r9.fixGameFrameworkTypes(r10, r3)
            return r4
    }

    private java.lang.String functionNameWithPluginPrefix(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.getPluginName()
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getPluginName()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
        L22:
            return r3
    }

    private com.bianfeng.ymnsdk.feature.YmnPlugin.a getFunctionKey(java.lang.String r3, java.lang.Class<?>... r4) {
            r2 = this;
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r0 = new com.bianfeng.ymnsdk.feature.YmnPlugin$a
            java.lang.String r1 = r2.formatFunctionName(r3)
            r0.<init>(r1, r4)
            return r0
    }

    private int getFunctionNameValue(java.lang.String r3) {
            r2 = this;
            r0 = 0
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r2.functionNames
            boolean r1 = r1.containsKey(r3)
            if (r1 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r2.functionNames
            java.lang.Object r1 = r1.get(r3)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r0 = r1.intValue()
        L15:
            int r0 = r0 + 1
            return r0
    }

    private android.util.Pair<java.lang.Boolean, java.lang.Object> invokeFunction(java.lang.String r6) throws java.lang.Exception {
            r5 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r1 = r5.getPluginId()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r3 = r5.getPluginVersion()
            r2.append(r3)
            java.lang.String r3 = ""
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = r5.getSdkVersion()
            r0.pluginStart(r6, r1, r2, r3)
            r0 = 0
            java.lang.Class[] r1 = new java.lang.Class[r0]
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r1 = r5.getFunctionKey(r6, r1)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r2 = r5.functions
            boolean r2 = r2.containsKey(r1)
            if (r2 == 0) goto L4c
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r2 = r5.functions
            java.lang.Object r2 = r2.get(r1)
            java.lang.reflect.Method r2 = (java.lang.reflect.Method) r2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Object r0 = r2.invoke(r5, r0)
            android.util.Pair r3 = new android.util.Pair
            r4 = 1
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            r3.<init>(r4, r0)
            return r3
        L4c:
            android.util.Pair r2 = new android.util.Pair
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r3 = 0
            r2.<init>(r0, r3)
            return r2
    }

    private android.util.Pair<java.lang.Boolean, java.lang.Object> invokeFunction(java.lang.String r7, java.lang.Object[] r8, java.lang.Class<?>... r9) throws java.lang.Exception {
            r6 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r2 = r6.getPluginId()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r6.getPluginVersion()
            r1.append(r3)
            java.lang.String r3 = ""
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = r6.getSdkVersion()
            r1 = r7
            r5 = r8
            r0.pluginStart(r1, r2, r3, r4, r5)
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r0 = r6.getFunctionKey(r7, r9)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r1 = r6.functions
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L49
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r1 = r6.functions
            java.lang.Object r1 = r1.get(r0)
            java.lang.reflect.Method r1 = (java.lang.reflect.Method) r1
            java.lang.Object r2 = r1.invoke(r6, r8)
            android.util.Pair r3 = new android.util.Pair
            r4 = 1
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            r3.<init>(r4, r2)
            return r3
        L49:
            android.util.Pair r1 = new android.util.Pair
            r2 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r3 = 0
            r1.<init>(r2, r3)
            return r1
    }

    private void loadYmnTagFunction(java.lang.reflect.Method r7, com.bianfeng.ymnsdk.feature.protocol.YFunction r8) {
            r6 = this;
            java.lang.String r0 = r8.name()
            java.lang.String r1 = r8.alias()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L13
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.functionAliasNames
            r2.put(r1, r0)
        L13:
            java.lang.String r2 = r6.formatFunctionName(r0)
            java.util.Map<java.lang.String, java.lang.Integer> r3 = r6.functionNames
            int r4 = r6.getFunctionNameValue(r0)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3.put(r2, r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.getPluginName()
            r3.append(r4)
            java.lang.String r4 = "_plugin_init"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.util.Map<java.lang.String, java.lang.Integer> r4 = r6.functionNames
            int r5 = r6.getFunctionNameValue(r3)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4.put(r3, r5)
            java.lang.Class[] r4 = r7.getParameterTypes()
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r4 = r6.getFunctionKey(r0, r4)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r5 = r6.functions
            r5.put(r4, r7)
            return
    }

    @Override
    public void callFunction(java.lang.String r4, java.util.LinkedHashMap<java.lang.String, java.lang.String> r5) {
            r3 = this;
            boolean r0 = r3.isSupportFunction(r4)
            if (r0 == 0) goto La
            r3.callFunctionWithResult(r4, r5)
            goto L20
        La:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = r3.getPluginName()
            r0[r1] = r2
            r1 = 1
            r0[r1] = r4
            java.lang.String r1 = "%s not found function %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.util.Logger.d(r0)
        L20:
            return
    }

    @Override
    public void callFunction(java.lang.String r4, java.lang.String... r5) {
            r3 = this;
            boolean r0 = r3.isSupportFunction(r4)
            if (r0 == 0) goto La
            r3.callFunctionWithResult(r4, r5)
            goto L20
        La:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = r3.getPluginName()
            r0[r1] = r2
            r1 = 1
            r0[r1] = r4
            java.lang.String r1 = "%s not found function %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.bianfeng.ymnsdk.util.Logger.d(r0)
        L20:
            return
    }

    @Override
    public java.lang.String callFunctionWithResult(java.lang.String r10, java.util.LinkedHashMap<java.lang.String, java.lang.String> r11) {
            r9 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L4d
            r2 = 0
            r1[r2] = r11     // Catch: java.lang.Exception -> L4d
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L4d
            java.lang.Class<java.util.LinkedHashMap> r3 = java.util.LinkedHashMap.class
            r0[r2] = r3     // Catch: java.lang.Exception -> L4d
            android.util.Pair r0 = r9.invokeFunction(r10, r1, r0)     // Catch: java.lang.Exception -> L4d
            java.lang.Object r1 = r0.first     // Catch: java.lang.Exception -> L4d
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Exception -> L4d
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Exception -> L4d
            if (r1 == 0) goto L4c
            java.lang.Object r1 = r0.second     // Catch: java.lang.Exception -> L4d
            if (r1 == 0) goto L4c
            java.lang.Object r1 = r0.second     // Catch: java.lang.Exception -> L4d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L4d
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L4d
            java.lang.String r4 = r9.getPluginId()     // Catch: java.lang.Exception -> L4d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4d
            r3.<init>()     // Catch: java.lang.Exception -> L4d
            int r5 = r9.getPluginVersion()     // Catch: java.lang.Exception -> L4d
            r3.append(r5)     // Catch: java.lang.Exception -> L4d
            java.lang.String r5 = ""
            r3.append(r5)     // Catch: java.lang.Exception -> L4d
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Exception -> L4d
            java.lang.String r6 = r9.getSdkVersion()     // Catch: java.lang.Exception -> L4d
            r7 = 0
            r3 = r10
            r8 = r1
            r2.pluginFinish(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L4d
            return r1
        L4c:
            goto L51
        L4d:
            r0 = move-exception
            r0.printStackTrace()
        L51:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String callFunctionWithResult(java.lang.String r10, java.lang.String... r11) {
            r9 = this;
            r0 = 0
            if (r11 == 0) goto L3c
            int r1 = r11.length     // Catch: java.lang.Exception -> L7e
            if (r1 != 0) goto L7
            goto L3c
        L7:
            android.util.Pair r1 = r9.fixGameFrameworkTypes(r10, r11)     // Catch: java.lang.Exception -> L7e
            if (r1 != 0) goto L13
            android.util.Pair r2 = r9.invokeFunction(r10)     // Catch: java.lang.Exception -> L7e
            r0 = r2
            goto L20
        L13:
            java.lang.Object r2 = r1.second     // Catch: java.lang.Exception -> L7e
            java.lang.Object[] r2 = (java.lang.Object[]) r2     // Catch: java.lang.Exception -> L7e
            java.lang.Object r3 = r1.first     // Catch: java.lang.Exception -> L7e
            java.lang.Class[] r3 = (java.lang.Class[]) r3     // Catch: java.lang.Exception -> L7e
            android.util.Pair r2 = r9.invokeFunction(r10, r2, r3)     // Catch: java.lang.Exception -> L7e
            r0 = r2
        L20:
            java.lang.Object r2 = r0.first     // Catch: java.lang.Exception -> L7e
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Exception -> L7e
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> L7e
            if (r2 != 0) goto L41
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L7e
            r4 = 0
            r3[r4] = r11     // Catch: java.lang.Exception -> L7e
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L7e
            java.lang.Class<java.lang.String[]> r5 = java.lang.String[].class
            r2[r4] = r5     // Catch: java.lang.Exception -> L7e
            android.util.Pair r2 = r9.invokeFunction(r10, r3, r2)     // Catch: java.lang.Exception -> L7e
            r0 = r2
            goto L41
        L3c:
            android.util.Pair r1 = r9.invokeFunction(r10)     // Catch: java.lang.Exception -> L7e
            r0 = r1
        L41:
            java.lang.Object r1 = r0.first     // Catch: java.lang.Exception -> L7e
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Exception -> L7e
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Exception -> L7e
            if (r1 == 0) goto L7d
            java.lang.Object r1 = r0.second     // Catch: java.lang.Exception -> L7e
            if (r1 == 0) goto L7d
            java.lang.Object r1 = r0.second     // Catch: java.lang.Exception -> L7e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L7e
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L7e
            java.lang.String r4 = r9.getPluginId()     // Catch: java.lang.Exception -> L7e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7e
            r3.<init>()     // Catch: java.lang.Exception -> L7e
            int r5 = r9.getPluginVersion()     // Catch: java.lang.Exception -> L7e
            r3.append(r5)     // Catch: java.lang.Exception -> L7e
            java.lang.String r5 = ""
            r3.append(r5)     // Catch: java.lang.Exception -> L7e
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = r9.getSdkVersion()     // Catch: java.lang.Exception -> L7e
            r7 = 0
            r3 = r10
            r8 = r1
            r2.pluginFinish(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L7e
            return r1
        L7d:
            goto L82
        L7e:
            r0 = move-exception
            r0.printStackTrace()
        L82:
            r0 = 0
            return r0
    }

    public java.lang.String formatFunctionName(java.lang.String r3) {
            r2 = this;
            r0 = r3
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.functionAliasNames
            boolean r1 = r1.containsKey(r3)
            if (r1 == 0) goto L12
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.functionAliasNames
            java.lang.Object r1 = r1.get(r3)
            r0 = r1
            java.lang.String r0 = (java.lang.String) r0
        L12:
            java.lang.String r1 = r2.functionNameWithPluginPrefix(r0)
            return r1
    }

    public com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance getEntrance() {
            r2 = this;
            java.lang.Class r0 = r2.getClass()
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YPlugin> r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.class
            java.lang.annotation.Annotation r0 = r0.getAnnotation(r1)
            com.bianfeng.ymnsdk.feature.protocol.YPlugin r0 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin) r0
            if (r0 == 0) goto L13
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = r0.entrance()
            return r1
        L13:
            r1 = 0
            return r1
    }

    public com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy getPolicy() {
            r2 = this;
            java.lang.Class r0 = r2.getClass()
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YPlugin> r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.class
            java.lang.annotation.Annotation r0 = r0.getAnnotation(r1)
            com.bianfeng.ymnsdk.feature.protocol.YPlugin r0 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin) r0
            if (r0 == 0) goto L13
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = r0.strategy()
            return r1
        L13:
            r1 = 0
            return r1
    }

    public boolean isAcitityEntrance() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = r2.getEntrance()
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY
            if (r0 != r1) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    @Override
    public boolean isSupportFunction(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r2.functionNames
            java.lang.String r1 = r2.formatFunctionName(r3)
            boolean r0 = r0.containsKey(r1)
            return r0
    }

    public boolean matchAcitityEntrance(android.content.Context r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L9
            boolean r0 = r1.isAcitityEntrance()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public boolean matchApplicationEntrance(android.content.Context r3) {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = r2.getEntrance()
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.APPLICATION
            if (r0 != r1) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public boolean matchContextEntrance(android.content.Context r3) {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = r2.getEntrance()
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.CONTEXT
            if (r0 != r1) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public boolean matchEntrance(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.matchAcitityEntrance(r2)
            if (r0 != 0) goto L15
            boolean r0 = r1.matchContextEntrance(r2)
            if (r0 != 0) goto L15
            boolean r0 = r1.matchApplicationEntrance(r2)
            if (r0 == 0) goto L13
            goto L15
        L13:
            r0 = 0
            goto L16
        L15:
            r0 = 1
        L16:
            return r0
    }
}
