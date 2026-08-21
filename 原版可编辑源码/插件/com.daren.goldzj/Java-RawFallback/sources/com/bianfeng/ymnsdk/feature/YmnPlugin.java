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

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 != 0) goto L8
                return r1
            L8:
                java.lang.Class r2 = r5.getClass()
                java.lang.Class<com.bianfeng.ymnsdk.feature.YmnPlugin$a> r3 = com.bianfeng.ymnsdk.feature.YmnPlugin.a.class
                if (r3 == r2) goto L11
                return r1
            L11:
                com.bianfeng.ymnsdk.feature.YmnPlugin$a r5 = (com.bianfeng.ymnsdk.feature.YmnPlugin.a) r5
                java.lang.String r2 = r4.a
                if (r2 != 0) goto L1c
                java.lang.String r2 = r5.a
                if (r2 == 0) goto L25
                return r1
            L1c:
                java.lang.String r3 = r5.a
                boolean r2 = r2.equals(r3)
                if (r2 != 0) goto L25
                return r1
            L25:
                java.lang.Class<?>[] r2 = r4.b
                java.lang.Class<?>[] r5 = r5.b
                boolean r5 = java.util.Arrays.equals(r2, r5)
                if (r5 != 0) goto L30
                return r1
            L30:
                return r0
        }

        public int hashCode() {
                r5 = this;
                java.lang.String r0 = r5.a
                r1 = 0
                if (r0 != 0) goto L7
                r0 = 0
                goto Lb
            L7:
                int r0 = r0.hashCode()
            Lb:
                int r0 = r0 + 31
                java.lang.Class<?>[] r2 = r5.b
                if (r2 != 0) goto L12
                return r0
            L12:
                int r3 = r2.length
            L13:
                if (r1 >= r3) goto L25
                r4 = r2[r1]
                int r0 = r0 * 31
                java.lang.String r4 = r4.getName()
                int r4 = r4.hashCode()
                int r0 = r0 + r4
                int r1 = r1 + 1
                goto L13
            L25:
                return r0
        }
    }

    public static class b {
        public static java.lang.String a(com.bianfeng.ymnsdk.feature.protocol.IPlugin r7) {
                java.lang.Class r0 = r7.getClass()
                java.lang.Class[] r0 = r0.getInterfaces()
                if (r0 == 0) goto L3b
                int r1 = r0.length
                if (r1 != 0) goto Le
                goto L3b
            Le:
                int r1 = r0.length
                r2 = 0
                r3 = 1
                r4 = 0
                r5 = 1
            L13:
                if (r4 >= r1) goto L25
                r6 = r0[r4]
                int r5 = r5 * 31
                java.lang.String r6 = r6.getName()
                int r6 = r6.hashCode()
                int r5 = r5 + r6
                int r4 = r4 + 1
                goto L13
            L25:
                r0 = 2
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r7 = r7.getPluginId()
                r0[r2] = r7
                java.lang.Integer r7 = java.lang.Integer.valueOf(r5)
                r0[r3] = r7
                java.lang.String r7 = "%s_%d"
                java.lang.String r7 = java.lang.String.format(r7, r0)
                return r7
            L3b:
                java.lang.String r7 = r7.getPluginName()
                return r7
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

    private android.util.Pair<java.lang.Class<?>[], java.lang.String[]> fixGameFrameworkTypes(java.lang.String r8, java.lang.String... r9) {
            r7 = this;
            int r0 = r9.length
            java.lang.Class[] r1 = new java.lang.Class[r0]
            r2 = 0
            r3 = 0
        L5:
            if (r3 >= r0) goto Le
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r1[r3] = r4
            int r3 = r3 + 1
            goto L5
        Le:
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r3 = r7.getFunctionKey(r8, r1)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r4 = r7.functions
            boolean r3 = r4.containsKey(r3)
            r4 = 3
            r5 = 2
            r6 = 1
            if (r3 == 0) goto L3c
            java.lang.Object[] r3 = new java.lang.Object[r4]
            java.lang.String r4 = r7.getPluginName()
            r3[r2] = r4
            r3[r6] = r8
            java.lang.Integer r8 = java.lang.Integer.valueOf(r0)
            r3[r5] = r8
            java.lang.String r8 = "%s(%s) found match types, args lenth is %d"
            java.lang.String r8 = java.lang.String.format(r8, r3)
            com.bianfeng.ymnsdk.util.Logger.i(r8)
            android.util.Pair r8 = new android.util.Pair
            r8.<init>(r1, r9)
            return r8
        L3c:
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r3 = r7.getPluginName()
            r1[r2] = r3
            r1[r6] = r8
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
            r1[r5] = r3
            int r3 = r0 + (-1)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r3)
            r1[r4] = r5
            java.lang.String r4 = "%s(%s) can't find match types, reset args lenth(%d -> %d)"
            java.lang.String r1 = java.lang.String.format(r4, r1)
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            if (r0 != r6) goto L62
            r8 = 0
            return r8
        L62:
            java.lang.String[] r0 = new java.lang.String[r3]
        L64:
            if (r2 >= r3) goto L6d
            r1 = r9[r2]
            r0[r2] = r1
            int r2 = r2 + 1
            goto L64
        L6d:
            android.util.Pair r8 = r7.fixGameFrameworkTypes(r8, r0)
            return r8
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

    private com.bianfeng.ymnsdk.feature.YmnPlugin.a getFunctionKey(java.lang.String r2, java.lang.Class<?>... r3) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r0 = new com.bianfeng.ymnsdk.feature.YmnPlugin$a
            java.lang.String r2 = r1.formatFunctionName(r2)
            r0.<init>(r2, r3)
            return r0
    }

    private int getFunctionNameValue(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r1.functionNames
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r1.functionNames
            java.lang.Object r2 = r0.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            goto L16
        L15:
            r2 = 0
        L16:
            int r2 = r2 + 1
            return r2
    }

    private android.util.Pair<java.lang.Boolean, java.lang.Object> invokeFunction(java.lang.String r5) throws java.lang.Exception {
            r4 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r1 = r4.getPluginId()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r3 = r4.getPluginVersion()
            r2.append(r3)
            java.lang.String r3 = ""
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = r4.getSdkVersion()
            r0.pluginStart(r5, r1, r2, r3)
            r0 = 0
            java.lang.Class[] r1 = new java.lang.Class[r0]
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r5 = r4.getFunctionKey(r5, r1)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r1 = r4.functions
            boolean r1 = r1.containsKey(r5)
            if (r1 == 0) goto L4c
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r1 = r4.functions
            java.lang.Object r5 = r1.get(r5)
            java.lang.reflect.Method r5 = (java.lang.reflect.Method) r5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Object r5 = r5.invoke(r4, r0)
            android.util.Pair r0 = new android.util.Pair
            r1 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.<init>(r1, r5)
            return r0
        L4c:
            android.util.Pair r5 = new android.util.Pair
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r1 = 0
            r5.<init>(r0, r1)
            return r5
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
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r7 = r6.getFunctionKey(r7, r9)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r9 = r6.functions
            boolean r9 = r9.containsKey(r7)
            if (r9 == 0) goto L49
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r9 = r6.functions
            java.lang.Object r7 = r9.get(r7)
            java.lang.reflect.Method r7 = (java.lang.reflect.Method) r7
            java.lang.Object r7 = r7.invoke(r6, r8)
            android.util.Pair r8 = new android.util.Pair
            r9 = 1
            java.lang.Boolean r9 = java.lang.Boolean.valueOf(r9)
            r8.<init>(r9, r7)
            return r8
        L49:
            android.util.Pair r7 = new android.util.Pair
            r8 = 0
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)
            r9 = 0
            r7.<init>(r8, r9)
            return r7
    }

    private void loadYmnTagFunction(java.lang.reflect.Method r4, com.bianfeng.ymnsdk.feature.protocol.YFunction r5) {
            r3 = this;
            java.lang.String r0 = r5.name()
            java.lang.String r5 = r5.alias()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L13
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.functionAliasNames
            r1.put(r5, r0)
        L13:
            java.lang.String r5 = r3.formatFunctionName(r0)
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r3.functionNames
            int r2 = r3.getFunctionNameValue(r0)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r5, r2)
            java.lang.Class[] r5 = r4.getParameterTypes()
            com.bianfeng.ymnsdk.feature.YmnPlugin$a r5 = r3.getFunctionKey(r0, r5)
            java.util.Map<com.bianfeng.ymnsdk.feature.YmnPlugin$a, java.lang.reflect.Method> r0 = r3.functions
            r0.put(r5, r4)
            return
    }

    @Override
    public void callFunction(java.lang.String r3, java.util.LinkedHashMap<java.lang.String, java.lang.String> r4) {
            r2 = this;
            boolean r0 = r2.isSupportFunction(r3)
            if (r0 == 0) goto La
            r2.callFunctionWithResult(r3, r4)
            goto L20
        La:
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r0 = r2.getPluginName()
            r1 = 0
            r4[r1] = r0
            r0 = 1
            r4[r0] = r3
            java.lang.String r3 = "%s not found function %s"
            java.lang.String r3 = java.lang.String.format(r3, r4)
            com.bianfeng.ymnsdk.util.Logger.d(r3)
        L20:
            return
    }

    @Override
    public void callFunction(java.lang.String r3, java.lang.String... r4) {
            r2 = this;
            boolean r0 = r2.isSupportFunction(r3)
            if (r0 == 0) goto La
            r2.callFunctionWithResult(r3, r4)
            goto L20
        La:
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r0 = r2.getPluginName()
            r1 = 0
            r4[r1] = r0
            r0 = 1
            r4[r0] = r3
            java.lang.String r3 = "%s not found function %s"
            java.lang.String r3 = java.lang.String.format(r3, r4)
            com.bianfeng.ymnsdk.util.Logger.d(r3)
        L20:
            return
    }

    @Override
    public java.lang.String callFunctionWithResult(java.lang.String r8, java.util.LinkedHashMap<java.lang.String, java.lang.String> r9) {
            r7 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L4c
            r2 = 0
            r1[r2] = r9     // Catch: java.lang.Exception -> L4c
            java.lang.Class[] r9 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L4c
            java.lang.Class<java.util.LinkedHashMap> r0 = java.util.LinkedHashMap.class
            r9[r2] = r0     // Catch: java.lang.Exception -> L4c
            android.util.Pair r9 = r7.invokeFunction(r8, r1, r9)     // Catch: java.lang.Exception -> L4c
            java.lang.Object r0 = r9.first     // Catch: java.lang.Exception -> L4c
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> L4c
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> L4c
            if (r0 == 0) goto L50
            java.lang.Object r0 = r9.second     // Catch: java.lang.Exception -> L4c
            if (r0 == 0) goto L50
            java.lang.Object r9 = r9.second     // Catch: java.lang.Exception -> L4c
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = r7.getPluginId()     // Catch: java.lang.Exception -> L4c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4c
            r1.<init>()     // Catch: java.lang.Exception -> L4c
            int r3 = r7.getPluginVersion()     // Catch: java.lang.Exception -> L4c
            r1.append(r3)     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = ""
            r1.append(r3)     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L4c
            java.lang.String r4 = r7.getSdkVersion()     // Catch: java.lang.Exception -> L4c
            r5 = 0
            r1 = r8
            r6 = r9
            r0.pluginFinish(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L4c
            return r9
        L4c:
            r8 = move-exception
            r8.printStackTrace()
        L50:
            r8 = 0
            return r8
    }

    @Override
    public java.lang.String callFunctionWithResult(java.lang.String r8, java.lang.String... r9) {
            r7 = this;
            if (r9 == 0) goto L38
            int r0 = r9.length     // Catch: java.lang.Exception -> L79
            if (r0 != 0) goto L6
            goto L38
        L6:
            android.util.Pair r0 = r7.fixGameFrameworkTypes(r8, r9)     // Catch: java.lang.Exception -> L79
            if (r0 != 0) goto L11
            android.util.Pair r0 = r7.invokeFunction(r8)     // Catch: java.lang.Exception -> L79
            goto L1d
        L11:
            java.lang.Object r1 = r0.second     // Catch: java.lang.Exception -> L79
            java.lang.Object[] r1 = (java.lang.Object[]) r1     // Catch: java.lang.Exception -> L79
            java.lang.Object r0 = r0.first     // Catch: java.lang.Exception -> L79
            java.lang.Class[] r0 = (java.lang.Class[]) r0     // Catch: java.lang.Exception -> L79
            android.util.Pair r0 = r7.invokeFunction(r8, r1, r0)     // Catch: java.lang.Exception -> L79
        L1d:
            java.lang.Object r1 = r0.first     // Catch: java.lang.Exception -> L79
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Exception -> L79
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Exception -> L79
            if (r1 != 0) goto L3d
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L79
            r2 = 0
            r1[r2] = r9     // Catch: java.lang.Exception -> L79
            java.lang.Class[] r9 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L79
            java.lang.Class<java.lang.String[]> r0 = java.lang.String[].class
            r9[r2] = r0     // Catch: java.lang.Exception -> L79
            android.util.Pair r9 = r7.invokeFunction(r8, r1, r9)     // Catch: java.lang.Exception -> L79
            goto L3c
        L38:
            android.util.Pair r9 = r7.invokeFunction(r8)     // Catch: java.lang.Exception -> L79
        L3c:
            r0 = r9
        L3d:
            java.lang.Object r9 = r0.first     // Catch: java.lang.Exception -> L79
            java.lang.Boolean r9 = (java.lang.Boolean) r9     // Catch: java.lang.Exception -> L79
            boolean r9 = r9.booleanValue()     // Catch: java.lang.Exception -> L79
            if (r9 == 0) goto L7d
            java.lang.Object r9 = r0.second     // Catch: java.lang.Exception -> L79
            if (r9 == 0) goto L7d
            java.lang.Object r9 = r0.second     // Catch: java.lang.Exception -> L79
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L79
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L79
            java.lang.String r2 = r7.getPluginId()     // Catch: java.lang.Exception -> L79
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L79
            r1.<init>()     // Catch: java.lang.Exception -> L79
            int r3 = r7.getPluginVersion()     // Catch: java.lang.Exception -> L79
            r1.append(r3)     // Catch: java.lang.Exception -> L79
            java.lang.String r3 = ""
            r1.append(r3)     // Catch: java.lang.Exception -> L79
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L79
            java.lang.String r4 = r7.getSdkVersion()     // Catch: java.lang.Exception -> L79
            r5 = 0
            r1 = r8
            r6 = r9
            r0.pluginFinish(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L79
            return r9
        L79:
            r8 = move-exception
            r8.printStackTrace()
        L7d:
            r8 = 0
            return r8
    }

    public java.lang.String formatFunctionName(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.functionAliasNames
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L10
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.functionAliasNames
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
        L10:
            java.lang.String r2 = r1.functionNameWithPluginPrefix(r2)
            return r2
    }

    public com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance getEntrance() {
            r2 = this;
            java.lang.Class r0 = r2.getClass()
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YPlugin> r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.class
            java.lang.annotation.Annotation r0 = r0.getAnnotation(r1)
            com.bianfeng.ymnsdk.feature.protocol.YPlugin r0 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin) r0
            if (r0 == 0) goto L13
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = r0.entrance()
            return r0
        L13:
            r0 = 0
            return r0
    }

    public com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy getPolicy() {
            r2 = this;
            java.lang.Class r0 = r2.getClass()
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.YPlugin> r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.class
            java.lang.annotation.Annotation r0 = r0.getAnnotation(r1)
            com.bianfeng.ymnsdk.feature.protocol.YPlugin r0 = (com.bianfeng.ymnsdk.feature.protocol.YPlugin) r0
            if (r0 == 0) goto L13
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r0 = r0.strategy()
            return r0
        L13:
            r0 = 0
            return r0
    }

    public boolean isAcitityEntrance() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = r2.getEntrance()
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public boolean isSupportFunction(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r1.functionNames
            java.lang.String r2 = r1.formatFunctionName(r2)
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public boolean matchAcitityEntrance(android.content.Context r1) {
            r0 = this;
            boolean r1 = r1 instanceof android.app.Activity
            if (r1 == 0) goto L9
            boolean r1 = r0.isAcitityEntrance()
            return r1
        L9:
            r1 = 0
            return r1
    }

    public boolean matchApplicationEntrance(android.content.Context r2) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r2 = r1.getEntrance()
            if (r2 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.APPLICATION
            if (r2 != r0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public boolean matchContextEntrance(android.content.Context r2) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r2 = r1.getEntrance()
            if (r2 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Entrance r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.CONTEXT
            if (r2 != r0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public boolean matchEntrance(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.matchAcitityEntrance(r2)
            if (r0 != 0) goto L15
            boolean r0 = r1.matchContextEntrance(r2)
            if (r0 != 0) goto L15
            boolean r2 = r1.matchApplicationEntrance(r2)
            if (r2 == 0) goto L13
            goto L15
        L13:
            r2 = 0
            goto L16
        L15:
            r2 = 1
        L16:
            return r2
    }
}
