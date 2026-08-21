package com.carlt.networklibs;

public class NetworkStateReceiver extends android.content.BroadcastReceiver {
    private com.carlt.networklibs.NetType netType;
    private java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> networkList;

    static class 1 {
        static final int[] $SwitchMap$com$carlt$networklibs$NetType = null;

        static {
                com.carlt.networklibs.NetType[] r0 = com.carlt.networklibs.NetType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.carlt.networklibs.NetworkStateReceiver.1.$SwitchMap$com$carlt$networklibs$NetType = r0
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.AUTO     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.carlt.networklibs.NetworkStateReceiver.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L1d
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.WIFI     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.carlt.networklibs.NetworkStateReceiver.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L28
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.CMWAP     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.carlt.networklibs.NetworkStateReceiver.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L33
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.CMNET     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.carlt.networklibs.NetworkStateReceiver.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L3e
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.NONE     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    public NetworkStateReceiver() {
            r1 = this;
            r1.<init>()
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.NONE
            r1.netType = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.networkList = r0
            return
    }

    private java.util.List<com.carlt.networklibs.MethodManager> findAnnotation(java.lang.Object r10) {
            r9 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.Class r10 = r10.getClass()
            java.lang.reflect.Method[] r10 = r10.getMethods()
            int r1 = r10.length
            r2 = 0
            r3 = r2
        L10:
            if (r3 >= r1) goto L7e
            r4 = r10[r3]
            java.lang.Class<com.carlt.networklibs.annotation.NetWork> r5 = com.carlt.networklibs.annotation.NetWork.class
            java.lang.annotation.Annotation r5 = r4.getAnnotation(r5)
            com.carlt.networklibs.annotation.NetWork r5 = (com.carlt.networklibs.annotation.NetWork) r5
            if (r5 != 0) goto L1f
            goto L45
        L1f:
            java.lang.reflect.Type r6 = r4.getGenericReturnType()
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "void"
            boolean r6 = r6.equals(r7)
            if (r6 == 0) goto L63
            java.lang.Class[] r6 = r4.getParameterTypes()
            int r7 = r6.length
            r8 = 1
            if (r7 != r8) goto L48
            com.carlt.networklibs.MethodManager r7 = new com.carlt.networklibs.MethodManager
            r6 = r6[r2]
            com.carlt.networklibs.NetType r5 = r5.netType()
            r7.<init>(r6, r5, r4)
            r0.add(r7)
        L45:
            int r3 = r3 + 1
            goto L10
        L48:
            java.lang.RuntimeException r10 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.getName()
            r0.append(r1)
            java.lang.String r1 = "Method can only have one parameter"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        L63:
            java.lang.RuntimeException r10 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.getName()
            r0.append(r1)
            java.lang.String r1 = "Method return must be void"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        L7e:
            return r0
    }

    private void invoke(com.carlt.networklibs.MethodManager r3, java.lang.Object r4, com.carlt.networklibs.NetType r5) {
            r2 = this;
            java.lang.reflect.Method r3 = r3.getMethod()
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.reflect.InvocationTargetException -> Le java.lang.IllegalAccessException -> L13
            r1 = 0
            r0[r1] = r5     // Catch: java.lang.reflect.InvocationTargetException -> Le java.lang.IllegalAccessException -> L13
            r3.invoke(r4, r0)     // Catch: java.lang.reflect.InvocationTargetException -> Le java.lang.IllegalAccessException -> L13
            goto L17
        Le:
            r3 = move-exception
            r3.printStackTrace()
            goto L17
        L13:
            r3 = move-exception
            r3.printStackTrace()
        L17:
            return
    }

    private void post(com.carlt.networklibs.NetType r7) {
            r6 = this;
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r0 = r6.networkList
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L7d
            java.lang.Object r1 = r0.next()
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r2 = r6.networkList
            java.lang.Object r2 = r2.get(r1)
            java.util.List r2 = (java.util.List) r2
            if (r2 == 0) goto La
            java.util.Iterator r2 = r2.iterator()
        L22:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto La
            java.lang.Object r3 = r2.next()
            com.carlt.networklibs.MethodManager r3 = (com.carlt.networklibs.MethodManager) r3
            java.lang.Class r4 = r3.getType()
            java.lang.Class r5 = r7.getClass()
            boolean r4 = r4.isAssignableFrom(r5)
            if (r4 == 0) goto L22
            int[] r4 = com.carlt.networklibs.NetworkStateReceiver.1.$SwitchMap$com$carlt$networklibs$NetType
            com.carlt.networklibs.NetType r5 = r3.getNetType()
            int r5 = r5.ordinal()
            r4 = r4[r5]
            r5 = 1
            if (r4 == r5) goto L79
            r5 = 2
            if (r4 == r5) goto L6d
            r5 = 3
            if (r4 == r5) goto L61
            r5 = 4
            if (r4 == r5) goto L55
            goto L22
        L55:
            com.carlt.networklibs.NetType r4 = com.carlt.networklibs.NetType.CMNET
            if (r7 == r4) goto L5d
            com.carlt.networklibs.NetType r4 = com.carlt.networklibs.NetType.NONE
            if (r7 != r4) goto L22
        L5d:
            r6.invoke(r3, r1, r7)
            goto L22
        L61:
            com.carlt.networklibs.NetType r4 = com.carlt.networklibs.NetType.CMWAP
            if (r7 == r4) goto L69
            com.carlt.networklibs.NetType r4 = com.carlt.networklibs.NetType.NONE
            if (r7 != r4) goto L22
        L69:
            r6.invoke(r3, r1, r7)
            goto L22
        L6d:
            com.carlt.networklibs.NetType r4 = com.carlt.networklibs.NetType.WIFI
            if (r7 == r4) goto L75
            com.carlt.networklibs.NetType r4 = com.carlt.networklibs.NetType.NONE
            if (r7 != r4) goto L22
        L75:
            r6.invoke(r3, r1, r7)
            goto L22
        L79:
            r6.invoke(r3, r1, r7)
            goto L22
        L7d:
            return
    }

    @Override
    public void onReceive(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            if (r2 == 0) goto L1f
            java.lang.String r1 = r2.getAction()
            if (r1 != 0) goto L9
            goto L1f
        L9:
            java.lang.String r1 = r2.getAction()
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L1e
            com.carlt.networklibs.NetType r1 = com.carlt.networklibs.utils.NetworkUtils.getNetType()
            r0.netType = r1
            r0.post(r1)
        L1e:
            return
        L1f:
            java.lang.String r1 = "network>>>"
            java.lang.String r2 = "intent or intent.getAction() is null"
            android.util.Log.e(r1, r2)
            return
    }

    public void registerObserver(java.lang.Object r3) {
            r2 = this;
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r0 = r2.networkList
            java.lang.Object r0 = r0.get(r3)
            java.util.List r0 = (java.util.List) r0
            if (r0 != 0) goto L13
            java.util.List r0 = r2.findAnnotation(r3)
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r1 = r2.networkList
            r1.put(r3, r0)
        L13:
            return
    }

    public void unRegisterAllObserver() {
            r1 = this;
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r0 = r1.networkList
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Ld
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r0 = r1.networkList
            r0.clear()
        Ld:
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.getInstance()
            android.app.Application r0 = r0.getApplication()
            r0.unregisterReceiver(r1)
            r0 = 0
            r1.networkList = r0
            return
    }

    public void unRegisterObserver(java.lang.Object r2) {
            r1 = this;
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r0 = r1.networkList
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Ld
            java.util.Map<java.lang.Object, java.util.List<com.carlt.networklibs.MethodManager>> r0 = r1.networkList
            r0.remove(r2)
        Ld:
            return
    }
}
