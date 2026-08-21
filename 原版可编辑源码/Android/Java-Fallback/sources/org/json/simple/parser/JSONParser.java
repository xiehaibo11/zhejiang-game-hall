package org.json.simple.parser;

public class JSONParser {
    public static final int S_END = 6;
    public static final int S_INIT = 0;
    public static final int S_IN_ARRAY = 3;
    public static final int S_IN_ERROR = -1;
    public static final int S_IN_FINISHED_VALUE = 1;
    public static final int S_IN_OBJECT = 2;
    public static final int S_IN_PAIR_VALUE = 5;
    public static final int S_PASSED_PAIR_KEY = 4;
    private java.util.LinkedList handlerStatusStack;
    private org.json.simple.parser.Yylex lexer;
    private int status;
    private org.json.simple.parser.Yytoken token;

    public JSONParser() {
            r3 = this;
            r3.<init>()
            org.json.simple.parser.Yylex r0 = new org.json.simple.parser.Yylex
            r1 = 0
            r2 = r1
            java.io.Reader r2 = (java.io.Reader) r2
            r0.<init>(r2)
            r3.lexer = r0
            r3.token = r1
            r0 = 0
            r3.status = r0
            return
    }

    private java.util.List createArrayContainer(org.json.simple.parser.ContainerFactory r1) {
            r0 = this;
            if (r1 != 0) goto L8
            org.json.simple.JSONArray r1 = new org.json.simple.JSONArray
            r1.<init>()
            return r1
        L8:
            java.util.List r1 = r1.creatArrayContainer()
            if (r1 != 0) goto L13
            org.json.simple.JSONArray r1 = new org.json.simple.JSONArray
            r1.<init>()
        L13:
            return r1
    }

    private java.util.Map createObjectContainer(org.json.simple.parser.ContainerFactory r1) {
            r0 = this;
            if (r1 != 0) goto L8
            org.json.simple.JSONObject r1 = new org.json.simple.JSONObject
            r1.<init>()
            return r1
        L8:
            java.util.Map r1 = r1.createObjectContainer()
            if (r1 != 0) goto L13
            org.json.simple.JSONObject r1 = new org.json.simple.JSONObject
            r1.<init>()
        L13:
            return r1
    }

    private void nextToken() throws org.json.simple.parser.ParseException, java.io.IOException {
            r3 = this;
            org.json.simple.parser.Yylex r0 = r3.lexer
            org.json.simple.parser.Yytoken r0 = r0.yylex()
            r3.token = r0
            if (r0 != 0) goto L13
            org.json.simple.parser.Yytoken r0 = new org.json.simple.parser.Yytoken
            r1 = -1
            r2 = 0
            r0.<init>(r1, r2)
            r3.token = r0
        L13:
            return
    }

    private int peekStatus(java.util.LinkedList r2) {
            r1 = this;
            int r0 = r2.size()
            if (r0 != 0) goto L8
            r2 = -1
            return r2
        L8:
            java.lang.Object r2 = r2.getFirst()
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            return r2
    }

    public int getPosition() {
            r1 = this;
            org.json.simple.parser.Yylex r0 = r1.lexer
            int r0 = r0.getPosition()
            return r0
    }

    public java.lang.Object parse(java.io.Reader r2) throws java.io.IOException, org.json.simple.parser.ParseException {
            r1 = this;
            r0 = 0
            org.json.simple.parser.ContainerFactory r0 = (org.json.simple.parser.ContainerFactory) r0
            java.lang.Object r2 = r1.parse(r2, r0)
            return r2
    }

    public java.lang.Object parse(java.io.Reader r9, org.json.simple.parser.ContainerFactory r10) throws java.io.IOException, org.json.simple.parser.ParseException {
            r8 = this;
            r8.reset(r9)
            java.util.LinkedList r9 = new java.util.LinkedList
            r9.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
        Ld:
            r8.nextToken()     // Catch: java.io.IOException -> L1d3
            int r1 = r8.status     // Catch: java.io.IOException -> L1d3
            r2 = -1
            r3 = 1
            if (r1 == r2) goto L1c7
            r4 = 2
            r5 = 3
            if (r1 == 0) goto L161
            if (r1 == r3) goto L14a
            r6 = 5
            r7 = 4
            if (r1 == r4) goto L10e
            if (r1 == r5) goto L9f
            if (r1 == r7) goto L26
            goto L1a3
        L26:
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            int r1 = r1.type     // Catch: java.io.IOException -> L1d3
            if (r1 == 0) goto L81
            if (r1 == r3) goto L5e
            if (r1 == r5) goto L37
            r4 = 6
            if (r1 == r4) goto L1a3
        L33:
            r8.status = r2     // Catch: java.io.IOException -> L1d3
            goto L1a3
        L37:
            r9.removeFirst()     // Catch: java.io.IOException -> L1d3
            java.lang.Object r1 = r0.removeFirst()     // Catch: java.io.IOException -> L1d3
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.io.IOException -> L1d3
            java.lang.Object r4 = r0.getFirst()     // Catch: java.io.IOException -> L1d3
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.io.IOException -> L1d3
            java.util.List r6 = r8.createArrayContainer(r10)     // Catch: java.io.IOException -> L1d3
            r4.put(r1, r6)     // Catch: java.io.IOException -> L1d3
            r8.status = r5     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r4 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r4)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
        L59:
            r0.addFirst(r6)     // Catch: java.io.IOException -> L1d3
            goto L1a3
        L5e:
            r9.removeFirst()     // Catch: java.io.IOException -> L1d3
            java.lang.Object r1 = r0.removeFirst()     // Catch: java.io.IOException -> L1d3
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.io.IOException -> L1d3
            java.lang.Object r5 = r0.getFirst()     // Catch: java.io.IOException -> L1d3
            java.util.Map r5 = (java.util.Map) r5     // Catch: java.io.IOException -> L1d3
            java.util.Map r6 = r8.createObjectContainer(r10)     // Catch: java.io.IOException -> L1d3
            r5.put(r1, r6)     // Catch: java.io.IOException -> L1d3
            r8.status = r4     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r4 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r4)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            goto L59
        L81:
            r9.removeFirst()     // Catch: java.io.IOException -> L1d3
            java.lang.Object r1 = r0.removeFirst()     // Catch: java.io.IOException -> L1d3
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.io.IOException -> L1d3
            java.lang.Object r4 = r0.getFirst()     // Catch: java.io.IOException -> L1d3
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.io.IOException -> L1d3
            org.json.simple.parser.Yytoken r5 = r8.token     // Catch: java.io.IOException -> L1d3
            java.lang.Object r5 = r5.value     // Catch: java.io.IOException -> L1d3
            r4.put(r1, r5)     // Catch: java.io.IOException -> L1d3
            int r1 = r8.peekStatus(r9)     // Catch: java.io.IOException -> L1d3
        L9b:
            r8.status = r1     // Catch: java.io.IOException -> L1d3
            goto L1a3
        L9f:
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            int r1 = r1.type     // Catch: java.io.IOException -> L1d3
            if (r1 == 0) goto Lff
            if (r1 == r3) goto Le1
            if (r1 == r5) goto Lc3
            if (r1 == r7) goto Lae
            if (r1 == r6) goto L1a3
            goto L33
        Lae:
            int r1 = r0.size()     // Catch: java.io.IOException -> L1d3
            if (r1 <= r3) goto Lbf
            r9.removeFirst()     // Catch: java.io.IOException -> L1d3
            r0.removeFirst()     // Catch: java.io.IOException -> L1d3
            int r1 = r8.peekStatus(r9)     // Catch: java.io.IOException -> L1d3
            goto L9b
        Lbf:
            r8.status = r3     // Catch: java.io.IOException -> L1d3
            goto L1a3
        Lc3:
            java.lang.Object r1 = r0.getFirst()     // Catch: java.io.IOException -> L1d3
            java.util.List r1 = (java.util.List) r1     // Catch: java.io.IOException -> L1d3
            java.util.List r4 = r8.createArrayContainer(r10)     // Catch: java.io.IOException -> L1d3
            r1.add(r4)     // Catch: java.io.IOException -> L1d3
            r8.status = r5     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r5 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r5)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            r0.addFirst(r4)     // Catch: java.io.IOException -> L1d3
            goto L1a3
        Le1:
            java.lang.Object r1 = r0.getFirst()     // Catch: java.io.IOException -> L1d3
            java.util.List r1 = (java.util.List) r1     // Catch: java.io.IOException -> L1d3
            java.util.Map r5 = r8.createObjectContainer(r10)     // Catch: java.io.IOException -> L1d3
            r1.add(r5)     // Catch: java.io.IOException -> L1d3
            r8.status = r4     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r4 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r4)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            r0.addFirst(r5)     // Catch: java.io.IOException -> L1d3
            goto L1a3
        Lff:
            java.lang.Object r1 = r0.getFirst()     // Catch: java.io.IOException -> L1d3
            java.util.List r1 = (java.util.List) r1     // Catch: java.io.IOException -> L1d3
            org.json.simple.parser.Yytoken r4 = r8.token     // Catch: java.io.IOException -> L1d3
            java.lang.Object r4 = r4.value     // Catch: java.io.IOException -> L1d3
            r1.add(r4)     // Catch: java.io.IOException -> L1d3
            goto L1a3
        L10e:
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            int r1 = r1.type     // Catch: java.io.IOException -> L1d3
            if (r1 == 0) goto L12c
            if (r1 == r4) goto L11a
            if (r1 == r6) goto L1a3
            goto L33
        L11a:
            int r1 = r0.size()     // Catch: java.io.IOException -> L1d3
            if (r1 <= r3) goto Lbf
            r9.removeFirst()     // Catch: java.io.IOException -> L1d3
            r0.removeFirst()     // Catch: java.io.IOException -> L1d3
            int r1 = r8.peekStatus(r9)     // Catch: java.io.IOException -> L1d3
            goto L9b
        L12c:
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            java.lang.Object r1 = r1.value     // Catch: java.io.IOException -> L1d3
            boolean r1 = r1 instanceof java.lang.String     // Catch: java.io.IOException -> L1d3
            if (r1 == 0) goto L33
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            java.lang.Object r1 = r1.value     // Catch: java.io.IOException -> L1d3
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.io.IOException -> L1d3
            r0.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            r8.status = r7     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r4 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r4)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            goto L1a3
        L14a:
            org.json.simple.parser.Yytoken r9 = r8.token     // Catch: java.io.IOException -> L1d3
            int r9 = r9.type     // Catch: java.io.IOException -> L1d3
            if (r9 != r2) goto L155
            java.lang.Object r9 = r0.removeFirst()     // Catch: java.io.IOException -> L1d3
            return r9
        L155:
            org.json.simple.parser.ParseException r9 = new org.json.simple.parser.ParseException     // Catch: java.io.IOException -> L1d3
            int r10 = r8.getPosition()     // Catch: java.io.IOException -> L1d3
            org.json.simple.parser.Yytoken r0 = r8.token     // Catch: java.io.IOException -> L1d3
            r9.<init>(r10, r3, r0)     // Catch: java.io.IOException -> L1d3
            throw r9     // Catch: java.io.IOException -> L1d3
        L161:
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            int r1 = r1.type     // Catch: java.io.IOException -> L1d3
            if (r1 == 0) goto L192
            if (r1 == r3) goto L181
            if (r1 == r5) goto L16d
            goto L33
        L16d:
            r8.status = r5     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r4 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r4)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            java.util.List r1 = r8.createArrayContainer(r10)     // Catch: java.io.IOException -> L1d3
        L17d:
            r0.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            goto L1a3
        L181:
            r8.status = r4     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r4 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r4)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            java.util.Map r1 = r8.createObjectContainer(r10)     // Catch: java.io.IOException -> L1d3
            goto L17d
        L192:
            r8.status = r3     // Catch: java.io.IOException -> L1d3
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.io.IOException -> L1d3
            int r4 = r8.status     // Catch: java.io.IOException -> L1d3
            r1.<init>(r4)     // Catch: java.io.IOException -> L1d3
            r9.addFirst(r1)     // Catch: java.io.IOException -> L1d3
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            java.lang.Object r1 = r1.value     // Catch: java.io.IOException -> L1d3
            goto L17d
        L1a3:
            int r1 = r8.status     // Catch: java.io.IOException -> L1d3
            if (r1 == r2) goto L1bb
            org.json.simple.parser.Yytoken r1 = r8.token     // Catch: java.io.IOException -> L1d3
            int r1 = r1.type     // Catch: java.io.IOException -> L1d3
            if (r1 == r2) goto L1af
            goto Ld
        L1af:
            org.json.simple.parser.ParseException r9 = new org.json.simple.parser.ParseException
            int r10 = r8.getPosition()
            org.json.simple.parser.Yytoken r0 = r8.token
            r9.<init>(r10, r3, r0)
            throw r9
        L1bb:
            org.json.simple.parser.ParseException r9 = new org.json.simple.parser.ParseException     // Catch: java.io.IOException -> L1d3
            int r10 = r8.getPosition()     // Catch: java.io.IOException -> L1d3
            org.json.simple.parser.Yytoken r0 = r8.token     // Catch: java.io.IOException -> L1d3
            r9.<init>(r10, r3, r0)     // Catch: java.io.IOException -> L1d3
            throw r9     // Catch: java.io.IOException -> L1d3
        L1c7:
            org.json.simple.parser.ParseException r9 = new org.json.simple.parser.ParseException     // Catch: java.io.IOException -> L1d3
            int r10 = r8.getPosition()     // Catch: java.io.IOException -> L1d3
            org.json.simple.parser.Yytoken r0 = r8.token     // Catch: java.io.IOException -> L1d3
            r9.<init>(r10, r3, r0)     // Catch: java.io.IOException -> L1d3
            throw r9     // Catch: java.io.IOException -> L1d3
        L1d3:
            r9 = move-exception
            throw r9
    }

    public java.lang.Object parse(java.lang.String r2) throws org.json.simple.parser.ParseException {
            r1 = this;
            r0 = 0
            org.json.simple.parser.ContainerFactory r0 = (org.json.simple.parser.ContainerFactory) r0
            java.lang.Object r2 = r1.parse(r2, r0)
            return r2
    }

    public java.lang.Object parse(java.lang.String r3, org.json.simple.parser.ContainerFactory r4) throws org.json.simple.parser.ParseException {
            r2 = this;
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r3)
            java.lang.Object r3 = r2.parse(r0, r4)     // Catch: java.io.IOException -> La
            return r3
        La:
            r3 = move-exception
            org.json.simple.parser.ParseException r4 = new org.json.simple.parser.ParseException
            r0 = -1
            r1 = 2
            r4.<init>(r0, r1, r3)
            throw r4
    }

    public void parse(java.io.Reader r2, org.json.simple.parser.ContentHandler r3) throws java.io.IOException, org.json.simple.parser.ParseException {
            r1 = this;
            r0 = 0
            r1.parse(r2, r3, r0)
            return
    }

    public void parse(java.io.Reader r8, org.json.simple.parser.ContentHandler r9, boolean r10) throws java.io.IOException, org.json.simple.parser.ParseException {
            r7 = this;
            if (r10 != 0) goto Ld
            r7.reset(r8)
            java.util.LinkedList r8 = new java.util.LinkedList
            r8.<init>()
        La:
            r7.handlerStatusStack = r8
            goto L1a
        Ld:
            java.util.LinkedList r10 = r7.handlerStatusStack
            if (r10 != 0) goto L1a
            r7.reset(r8)
            java.util.LinkedList r8 = new java.util.LinkedList
            r8.<init>()
            goto La
        L1a:
            java.util.LinkedList r8 = r7.handlerStatusStack
        L1c:
            r10 = -1
            int r0 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r1 = 6
            r2 = 4
            r3 = 5
            r4 = 2
            r5 = 3
            r6 = 1
            switch(r0) {
                case -1: goto L1b6;
                case 0: goto L167;
                case 1: goto L14a;
                case 2: goto L101;
                case 3: goto La5;
                case 4: goto L3b;
                case 5: goto L2b;
                case 6: goto L2a;
                default: goto L28;
            }     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
        L28:
            goto L1c2
        L2a:
            return
        L2b:
            r8.removeFirst()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r7.peekStatus(r8)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r0     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.endObjectEntry()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L3b:
            r7.nextToken()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r0.type     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 == 0) goto L8a
            if (r0 == r6) goto L6c
            if (r0 == r5) goto L4e
            if (r0 == r1) goto L1c2
        L4a:
            r7.status = r10     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            goto L1c2
        L4e:
            r8.removeFirst()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r3)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r5     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r1 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.startArray()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L6c:
            r8.removeFirst()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r3)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r4     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r1 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.startObject()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L8a:
            r8.removeFirst()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r7.peekStatus(r8)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r0     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Object r0 = r0.value     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.primitive(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L9e
            return
        L9e:
            boolean r0 = r9.endObjectEntry()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        La5:
            r7.nextToken()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r0.type     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 == 0) goto Lf6
            if (r0 == r6) goto Le3
            if (r0 == r5) goto Ld0
            if (r0 == r2) goto Lb7
            if (r0 == r3) goto L1c2
            goto L4a
        Lb7:
            int r0 = r8.size()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 <= r6) goto Lc7
            r8.removeFirst()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r7.peekStatus(r8)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r0     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            goto Lc9
        Lc7:
            r7.status = r6     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
        Lc9:
            boolean r0 = r9.endArray()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        Ld0:
            r7.status = r5     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r1 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.startArray()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        Le3:
            r7.status = r4     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r1 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.startObject()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        Lf6:
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Object r0 = r0.value     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.primitive(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L101:
            r7.nextToken()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r0.type     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 == 0) goto L129
            if (r0 == r4) goto L110
            if (r0 == r3) goto L1c2
            goto L4a
        L110:
            int r0 = r8.size()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 <= r6) goto L120
            r8.removeFirst()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r7.peekStatus(r8)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r0     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            goto L122
        L120:
            r7.status = r6     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
        L122:
            boolean r0 = r9.endObject()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L129:
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Object r0 = r0.value     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r0 instanceof java.lang.String     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 == 0) goto L4a
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Object r0 = r0.value     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r2     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r1 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r2 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r1.<init>(r2)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.startObjectEntry(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L14a:
            r7.nextToken()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r8 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r8 = r8.type     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r8 != r10) goto L159
            r9.endJSON()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.status = r1     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            return
        L159:
            r7.status = r10     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.ParseException r8 = new org.json.simple.parser.ParseException     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r9 = r7.getPosition()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.<init>(r9, r6, r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            throw r8     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
        L167:
            r9.startJSON()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r7.nextToken()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r0.type     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 == 0) goto L19f
            if (r0 == r6) goto L18c
            if (r0 == r5) goto L179
            goto L4a
        L179:
            r7.status = r5     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r1 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.startArray()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L18c:
            r7.status = r4     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r1 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.startObject()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L19f:
            r7.status = r6     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r1 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r0.<init>(r1)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.addFirst(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            java.lang.Object r0 = r0.value     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            boolean r0 = r9.primitive(r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 != 0) goto L1c2
            return
        L1b6:
            org.json.simple.parser.ParseException r8 = new org.json.simple.parser.ParseException     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r9 = r7.getPosition()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.<init>(r9, r6, r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            throw r8     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
        L1c2:
            int r0 = r7.status     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 == r10) goto L1dc
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r0 = r0.type     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            if (r0 == r10) goto L1ce
            goto L1c
        L1ce:
            r7.status = r10
            org.json.simple.parser.ParseException r8 = new org.json.simple.parser.ParseException
            int r9 = r7.getPosition()
            org.json.simple.parser.Yytoken r10 = r7.token
            r8.<init>(r9, r6, r10)
            throw r8
        L1dc:
            org.json.simple.parser.ParseException r8 = new org.json.simple.parser.ParseException     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            int r9 = r7.getPosition()     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            org.json.simple.parser.Yytoken r0 = r7.token     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            r8.<init>(r9, r6, r0)     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
            throw r8     // Catch: java.lang.Error -> L1e8 java.lang.RuntimeException -> L1ec org.json.simple.parser.ParseException -> L1f0 java.io.IOException -> L1f4
        L1e8:
            r8 = move-exception
            r7.status = r10
            throw r8
        L1ec:
            r8 = move-exception
            r7.status = r10
            throw r8
        L1f0:
            r8 = move-exception
            r7.status = r10
            throw r8
        L1f4:
            r8 = move-exception
            r7.status = r10
            throw r8
    }

    public void parse(java.lang.String r2, org.json.simple.parser.ContentHandler r3) throws org.json.simple.parser.ParseException {
            r1 = this;
            r0 = 0
            r1.parse(r2, r3, r0)
            return
    }

    public void parse(java.lang.String r2, org.json.simple.parser.ContentHandler r3, boolean r4) throws org.json.simple.parser.ParseException {
            r1 = this;
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r2)
            r1.parse(r0, r3, r4)     // Catch: java.io.IOException -> L9
            return
        L9:
            r2 = move-exception
            org.json.simple.parser.ParseException r3 = new org.json.simple.parser.ParseException
            r4 = -1
            r0 = 2
            r3.<init>(r4, r0, r2)
            throw r3
    }

    public void reset() {
            r2 = this;
            r0 = 0
            r2.token = r0
            r1 = 0
            r2.status = r1
            r2.handlerStatusStack = r0
            return
    }

    public void reset(java.io.Reader r2) {
            r1 = this;
            org.json.simple.parser.Yylex r0 = r1.lexer
            r0.yyreset(r2)
            r1.reset()
            return
    }
}
