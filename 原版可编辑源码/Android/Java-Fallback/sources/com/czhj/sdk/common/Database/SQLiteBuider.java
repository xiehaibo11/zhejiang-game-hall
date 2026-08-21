package com.czhj.sdk.common.Database;

public class SQLiteBuider {
    private static final java.lang.String a = "SQLiteBuider";
    private static java.util.Map<java.lang.String, java.lang.String> b;

    public static class CreateTable {
        java.lang.String a;
        java.lang.String b;

        public static class Builder {
            private java.lang.String a;
            private java.util.Map<java.lang.String, java.lang.String> b;
            private java.util.Map<java.lang.String, java.lang.String> c;
            private boolean d;

            public Builder() {
                    r1 = this;
                    r1.<init>()
                    r0 = 0
                    r1.a = r0
                    r1.b = r0
                    r1.c = r0
                    return
            }

            public com.czhj.sdk.common.Database.SQLiteBuider.CreateTable.Builder autoincrement(boolean r1) {
                    r0 = this;
                    r0.d = r1
                    return r0
            }

            public com.czhj.sdk.common.Database.SQLiteBuider.CreateTable build() {
                    r6 = this;
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    java.lang.String r1 = "create table if not exists "
                    r0.<init>(r1)
                    java.lang.String r1 = r6.a
                    r0.append(r1)
                    java.lang.String r1 = " ( "
                    r0.append(r1)
                    java.util.Map<java.lang.String, java.lang.String> r1 = r6.b
                    java.util.List r1 = com.czhj.sdk.common.Database.SQLiteBuider.a(r1)
                    int r2 = r1.size()
                    r3 = 1
                    java.lang.String r4 = " ,"
                    if (r2 <= r3) goto L6b
                    java.util.Map<java.lang.String, java.lang.String> r1 = r6.c
                    java.util.List r1 = com.czhj.sdk.common.Database.SQLiteBuider.a(r1)
                    java.util.Iterator r1 = r1.iterator()
                L2a:
                    boolean r2 = r1.hasNext()
                    if (r2 == 0) goto L3d
                    java.lang.Object r2 = r1.next()
                    java.lang.String r2 = (java.lang.String) r2
                    r0.append(r2)
                    r0.append(r4)
                    goto L2a
                L3d:
                    java.lang.String r1 = " primary key ( "
                    r0.append(r1)
                    java.util.Map<java.lang.String, java.lang.String> r1 = r6.b
                    java.util.Set r1 = r1.keySet()
                    java.util.Iterator r1 = r1.iterator()
                L4c:
                    boolean r2 = r1.hasNext()
                    if (r2 == 0) goto Lbf
                    java.lang.Object r2 = r1.next()
                    java.lang.String r2 = (java.lang.String) r2
                    r0.append(r2)
                    boolean r2 = r1.hasNext()
                    if (r2 == 0) goto L65
                    r0.append(r4)
                    goto L4c
                L65:
                    java.lang.String r2 = " )"
                    r0.append(r2)
                    goto L4c
                L6b:
                    boolean r2 = r6.d
                    r5 = 0
                    if (r2 == 0) goto L79
                    java.lang.Object[] r1 = new java.lang.Object[r5]
                    java.lang.String r2 = "id integer primary key AUTOINCREMENT"
                    java.lang.String r1 = java.lang.String.format(r2, r1)
                    goto L87
                L79:
                    java.lang.Object[] r2 = new java.lang.Object[r3]
                    java.lang.Object r1 = r1.get(r5)
                    r2[r5] = r1
                    java.lang.String r1 = "%s primary key "
                    java.lang.String r1 = java.lang.String.format(r1, r2)
                L87:
                    r0.append(r1)
                    java.util.Map<java.lang.String, java.lang.String> r1 = r6.c
                    java.util.Map<java.lang.String, java.lang.String> r2 = r6.b
                    java.util.Set r2 = r2.keySet()
                    java.util.Iterator r2 = r2.iterator()
                    java.lang.Object r2 = r2.next()
                    r1.remove(r2)
                    java.util.Map<java.lang.String, java.lang.String> r1 = r6.c
                    java.util.List r1 = com.czhj.sdk.common.Database.SQLiteBuider.a(r1)
                    java.util.Iterator r1 = r1.iterator()
                La7:
                    boolean r2 = r1.hasNext()
                    if (r2 == 0) goto Lbf
                    java.lang.Object r2 = r1.next()
                    java.lang.String r2 = (java.lang.String) r2
                    r0.append(r4)
                    r0.append(r2)
                    java.lang.String r2 = " "
                    r0.append(r2)
                    goto La7
                Lbf:
                    java.lang.String r1 = " ); "
                    r0.append(r1)
                    com.czhj.sdk.common.Database.SQLiteBuider$CreateTable r1 = new com.czhj.sdk.common.Database.SQLiteBuider$CreateTable
                    r1.<init>()
                    java.lang.String r0 = r0.toString()
                    r1.b = r0
                    java.lang.String r0 = r6.a
                    r1.a = r0
                    return r1
            }

            public com.czhj.sdk.common.Database.SQLiteBuider.CreateTable.Builder setColumns(java.util.Map<java.lang.String, java.lang.String> r1) {
                    r0 = this;
                    r0.c = r1
                    return r0
            }

            public com.czhj.sdk.common.Database.SQLiteBuider.CreateTable.Builder setPrimaryKey(java.lang.String r2, java.lang.String r3) {
                    r1 = this;
                    java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
                    if (r0 != 0) goto Lb
                    java.util.HashMap r0 = new java.util.HashMap
                    r0.<init>()
                    r1.b = r0
                Lb:
                    java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
                    r0.put(r2, r3)
                    return r1
            }

            public com.czhj.sdk.common.Database.SQLiteBuider.CreateTable.Builder setTableName(java.lang.String r1) {
                    r0 = this;
                    r0.a = r1
                    return r0
            }
        }

        public CreateTable() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class CreateTriggerBuilder {
        private java.lang.String a;
        private java.lang.String b;
        private java.lang.String c;
        private java.lang.String d;

        public CreateTriggerBuilder() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.b = r0
                r1.c = r0
                r1.d = r0
                return
        }

        public java.lang.String build() {
                r3 = this;
                r0 = 4
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = r3.a
                r2 = 0
                r0[r2] = r1
                java.lang.String r1 = r3.b
                r2 = 1
                r0[r2] = r1
                java.lang.String r1 = r3.c
                r2 = 2
                r0[r2] = r1
                java.lang.String r1 = r3.d
                r2 = 3
                r0[r2] = r1
                java.lang.String r1 = "create trigger if not exists %s after %s on %s begin %s end;"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                return r0
        }

        public com.czhj.sdk.common.Database.SQLiteBuider.CreateTriggerBuilder setExecSql(java.lang.String r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        public com.czhj.sdk.common.Database.SQLiteBuider.CreateTriggerBuilder setOnAction(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public com.czhj.sdk.common.Database.SQLiteBuider.CreateTriggerBuilder setOnTableName(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.czhj.sdk.common.Database.SQLiteBuider.CreateTriggerBuilder setTriggerName(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return r0
        }
    }

    public static class Insert {
        java.lang.String a;
        java.lang.String b;
        java.util.Map<java.lang.String, java.lang.Object> c;
        java.util.List<java.lang.Object> d;

        public static class Builder {
            private java.lang.String a;
            private java.util.Map<java.lang.String, java.lang.Object> b;

            public Builder() {
                    r1 = this;
                    r1.<init>()
                    r0 = 0
                    r1.a = r0
                    r1.b = r0
                    return
            }

            public com.czhj.sdk.common.Database.SQLiteBuider.Insert build() {
                    r6 = this;
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r6.b
                    java.util.Set r0 = r0.keySet()
                    java.lang.Object[] r0 = r0.toArray()
                    java.util.List r0 = java.util.Arrays.asList(r0)
                    java.lang.StringBuilder r1 = new java.lang.StringBuilder
                    java.lang.String r2 = "insert or replace into "
                    r1.<init>(r2)
                    java.lang.String r2 = r6.a
                    r1.append(r2)
                    java.lang.StringBuilder r2 = new java.lang.StringBuilder
                    java.lang.String r3 = "("
                    r2.<init>(r3)
                    java.lang.StringBuilder r4 = new java.lang.StringBuilder
                    r4.<init>(r3)
                    r3 = 0
                L27:
                    int r5 = r0.size()
                    if (r3 >= r5) goto L4a
                    java.lang.Object r5 = r0.get(r3)
                    r2.append(r5)
                    java.lang.String r5 = "?"
                    r4.append(r5)
                    int r3 = r3 + 1
                    int r5 = r0.size()
                    if (r3 >= r5) goto L27
                    java.lang.String r5 = ", "
                    r2.append(r5)
                    r4.append(r5)
                    goto L27
                L4a:
                    java.lang.String r3 = ")"
                    r2.append(r3)
                    r4.append(r3)
                    r1.append(r2)
                    java.lang.String r2 = " values "
                    r1.append(r2)
                    r1.append(r4)
                    com.czhj.sdk.common.Database.SQLiteBuider$Insert r2 = new com.czhj.sdk.common.Database.SQLiteBuider$Insert
                    r2.<init>()
                    java.lang.String r3 = r6.a
                    r2.a = r3
                    r2.d = r0
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r6.b
                    r2.c = r0
                    java.lang.String r0 = r1.toString()
                    r2.b = r0
                    return r2
            }

            public void setColumnValues(java.util.Map<java.lang.String, java.lang.Object> r1) {
                    r0 = this;
                    r0.b = r1
                    return
            }

            public void setTableName(java.lang.String r1) {
                    r0 = this;
                    r0.a = r1
                    return
            }
        }

        public Insert() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.util.List<java.lang.Object> getColumns() {
                r1 = this;
                java.util.List<java.lang.Object> r0 = r1.d
                return r0
        }

        public java.lang.String getSql() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public java.lang.String getTableName() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public java.util.Map<java.lang.String, java.lang.Object> getValues() {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.Object> r0 = r1.c
                return r0
        }
    }

    public static class Update {
        java.lang.String a;
        java.lang.String b;
        java.util.Map<java.lang.String, java.lang.Object> c;
        java.lang.String d;

        public static class Builder {
            private java.lang.String a;
            private java.util.Map<java.lang.String, java.lang.Object> b;
            private java.lang.String c;

            public Builder() {
                    r1 = this;
                    r1.<init>()
                    r0 = 0
                    r1.a = r0
                    r1.b = r0
                    r1.c = r0
                    return
            }

            public com.czhj.sdk.common.Database.SQLiteBuider.Update build() {
                    r5 = this;
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    java.lang.String r1 = "update "
                    r0.<init>(r1)
                    java.lang.String r1 = r5.a
                    r0.append(r1)
                    java.lang.String r1 = " set "
                    r0.append(r1)
                    java.util.Map<java.lang.String, java.lang.Object> r1 = r5.b
                    java.util.Set r1 = r1.keySet()
                    java.util.Iterator r1 = r1.iterator()
                L1b:
                    boolean r2 = r1.hasNext()
                    if (r2 == 0) goto L50
                    java.lang.Object r2 = r1.next()
                    java.lang.String r2 = (java.lang.String) r2
                    java.lang.StringBuilder r3 = new java.lang.StringBuilder
                    r3.<init>()
                    r3.append(r2)
                    java.lang.String r4 = " = "
                    r3.append(r4)
                    java.util.Map<java.lang.String, java.lang.Object> r4 = r5.b
                    java.lang.Object r2 = r4.get(r2)
                    r3.append(r2)
                    java.lang.String r2 = r3.toString()
                    r0.append(r2)
                    boolean r2 = r1.hasNext()
                    if (r2 == 0) goto L1b
                    java.lang.String r2 = ", "
                    r0.append(r2)
                    goto L1b
                L50:
                    java.lang.String r1 = r5.c
                    boolean r1 = android.text.TextUtils.isEmpty(r1)
                    if (r1 != 0) goto L6e
                    java.lang.StringBuilder r1 = new java.lang.StringBuilder
                    r1.<init>()
                    java.lang.String r2 = " "
                    r1.append(r2)
                    java.lang.String r2 = r5.c
                    r1.append(r2)
                    java.lang.String r1 = r1.toString()
                    r0.append(r1)
                L6e:
                    com.czhj.sdk.common.Database.SQLiteBuider$Update r1 = new com.czhj.sdk.common.Database.SQLiteBuider$Update
                    r1.<init>()
                    java.lang.String r2 = r5.a
                    r1.a = r2
                    java.util.Map<java.lang.String, java.lang.Object> r2 = r5.b
                    r1.c = r2
                    java.lang.String r2 = r5.c
                    r1.d = r2
                    java.lang.String r0 = r0.toString()
                    r1.b = r0
                    return r1
            }

            public void setColumnValues(java.util.Map<java.lang.String, java.lang.Object> r1) {
                    r0 = this;
                    r0.b = r1
                    return
            }

            public void setTableName(java.lang.String r1) {
                    r0 = this;
                    r0.a = r1
                    return
            }

            public void setWhere(java.lang.String r1) {
                    r0 = this;
                    r0.c = r1
                    return
            }
        }

        public Update() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.lang.String getSql() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }
    }

    static {
            return
    }

    public SQLiteBuider() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.List a(java.util.Map r0) {
            java.util.List r0 = b(r0)
            return r0
    }

    private static java.util.List<java.lang.String> b(java.util.Map<java.lang.String, java.lang.String> r11) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r11.size()
            r0.<init>(r1)
            java.util.Set r1 = r11.keySet()
            java.util.Iterator r1 = r1.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L78
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r11.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r3 = r3.toLowerCase()
            r4 = -1
            int r5 = r3.hashCode()
            r6 = 0
            java.lang.String r7 = "text"
            r8 = 3
            r9 = 2
            r10 = 1
            switch(r5) {
                case 104431: goto L52;
                case 3327612: goto L48;
                case 3556653: goto L40;
                case 2111392325: goto L36;
                default: goto L35;
            }
        L35:
            goto L5b
        L36:
            java.lang.String r5 = "java.lang.string"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L5b
            r4 = r9
            goto L5b
        L40:
            boolean r3 = r3.equals(r7)
            if (r3 == 0) goto L5b
            r4 = r8
            goto L5b
        L48:
            java.lang.String r5 = "long"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L5b
            r4 = r10
            goto L5b
        L52:
            java.lang.String r5 = "int"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L5b
            r4 = r6
        L5b:
            if (r4 == 0) goto L66
            if (r4 == r10) goto L66
            if (r4 == r9) goto L68
            if (r4 == r8) goto L68
            java.lang.String r7 = "blob"
            goto L68
        L66:
            java.lang.String r7 = "integer"
        L68:
            java.lang.Object[] r3 = new java.lang.Object[r9]
            r3[r6] = r2
            r3[r10] = r7
            java.lang.String r2 = "%s %s "
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r0.add(r2)
            goto L11
        L78:
            return r0
    }
}
