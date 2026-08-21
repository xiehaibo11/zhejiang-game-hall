package org.apache.commons.codec1.language;

public class DaitchMokotoffSoundex implements org.apache.commons.codec1.StringEncoder {
    private static final java.lang.String COMMENT = "//";
    private static final java.lang.String DOUBLE_QUOTE = "\"";
    private static final java.util.Map<java.lang.Character, java.lang.Character> FOLDINGS = null;
    private static final int MAX_LENGTH = 6;
    private static final java.lang.String MULTILINE_COMMENT_END = "*/";
    private static final java.lang.String MULTILINE_COMMENT_START = "/*";
    private static final java.lang.String RESOURCE_FILE = "org/apache/commons/codec/language/dmrules.txt";
    private static final java.util.Map<java.lang.Character, java.util.List<org.apache.commons.codec1.language.DaitchMokotoffSoundex.Rule>> RULES = null;
    private final boolean folding;


    private static final class Branch {
        private final java.lang.StringBuilder builder;
        private java.lang.String cachedString;
        private java.lang.String lastReplacement;

        private Branch() {
                r1 = this;
                r1.<init>()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r1.builder = r0
                r0 = 0
                r1.lastReplacement = r0
                r1.cachedString = r0
                return
        }

        Branch(org.apache.commons.codec1.language.DaitchMokotoffSoundex.Branch r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public org.apache.commons.codec1.language.DaitchMokotoffSoundex.Branch createBranch() {
                r3 = this;
                org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch r0 = new org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch
                r0.<init>()
                java.lang.StringBuilder r1 = r0.builder
                java.lang.String r2 = r3.toString()
                r1.append(r2)
                java.lang.String r1 = r3.lastReplacement
                r0.lastReplacement = r1
                return r0
        }

        public boolean equals(java.lang.Object r2) {
                r1 = this;
                if (r1 != r2) goto L4
                r2 = 1
                return r2
            L4:
                boolean r0 = r2 instanceof org.apache.commons.codec1.language.DaitchMokotoffSoundex.Branch
                if (r0 != 0) goto La
                r2 = 0
                return r2
            La:
                java.lang.String r0 = r1.toString()
                org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch r2 = (org.apache.commons.codec1.language.DaitchMokotoffSoundex.Branch) r2
                java.lang.String r2 = r2.toString()
                boolean r2 = r0.equals(r2)
                return r2
        }

        public void finish() {
                r2 = this;
            L0:
                java.lang.StringBuilder r0 = r2.builder
                int r0 = r0.length()
                r1 = 6
                if (r0 < r1) goto La
                return
            La:
                java.lang.StringBuilder r0 = r2.builder
                r1 = 48
                r0.append(r1)
                r0 = 0
                r2.cachedString = r0
                goto L0
        }

        public int hashCode() {
                r1 = this;
                java.lang.String r0 = r1.toString()
                int r0 = r0.hashCode()
                return r0
        }

        public void processNextReplacement(java.lang.String r3, boolean r4) {
                r2 = this;
                java.lang.String r0 = r2.lastReplacement
                if (r0 == 0) goto Le
                boolean r0 = r0.endsWith(r3)
                if (r0 == 0) goto Le
                if (r4 != 0) goto Le
                r4 = 0
                goto Lf
            Le:
                r4 = 1
            Lf:
                if (r4 == 0) goto L33
                java.lang.StringBuilder r4 = r2.builder
                int r4 = r4.length()
                r0 = 6
                if (r4 >= r0) goto L33
                java.lang.StringBuilder r4 = r2.builder
                r4.append(r3)
                java.lang.StringBuilder r4 = r2.builder
                int r4 = r4.length()
                if (r4 <= r0) goto L30
                java.lang.StringBuilder r4 = r2.builder
                int r1 = r4.length()
                r4.delete(r0, r1)
            L30:
                r4 = 0
                r2.cachedString = r4
            L33:
                r2.lastReplacement = r3
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = r1.cachedString
                if (r0 != 0) goto Lc
                java.lang.StringBuilder r0 = r1.builder
                java.lang.String r0 = r0.toString()
                r1.cachedString = r0
            Lc:
                java.lang.String r0 = r1.cachedString
                return r0
        }
    }

    private static final class Rule {
        private final java.lang.String pattern;
        private final java.lang.String[] replacementAtStart;
        private final java.lang.String[] replacementBeforeVowel;
        private final java.lang.String[] replacementDefault;

        protected Rule(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.<init>()
                r0.pattern = r1
                java.lang.String r1 = "\\|"
                java.lang.String[] r2 = r2.split(r1)
                r0.replacementAtStart = r2
                java.lang.String[] r2 = r3.split(r1)
                r0.replacementBeforeVowel = r2
                java.lang.String[] r1 = r4.split(r1)
                r0.replacementDefault = r1
                return
        }

        static java.lang.String access$0(org.apache.commons.codec1.language.DaitchMokotoffSoundex.Rule r0) {
                java.lang.String r0 = r0.pattern
                return r0
        }

        private boolean isVowel(char r2) {
                r1 = this;
                r0 = 97
                if (r2 == r0) goto L16
                r0 = 101(0x65, float:1.42E-43)
                if (r2 == r0) goto L16
                r0 = 105(0x69, float:1.47E-43)
                if (r2 == r0) goto L16
                r0 = 111(0x6f, float:1.56E-43)
                if (r2 == r0) goto L16
                r0 = 117(0x75, float:1.64E-43)
                if (r2 == r0) goto L16
                r2 = 0
                return r2
            L16:
                r2 = 1
                return r2
        }

        public int getPatternLength() {
                r1 = this;
                java.lang.String r0 = r1.pattern
                int r0 = r0.length()
                return r0
        }

        public java.lang.String[] getReplacements(java.lang.String r2, boolean r3) {
                r1 = this;
                if (r3 == 0) goto L5
                java.lang.String[] r2 = r1.replacementAtStart
                return r2
            L5:
                int r3 = r1.getPatternLength()
                int r0 = r2.length()
                if (r3 >= r0) goto L18
                char r2 = r2.charAt(r3)
                boolean r2 = r1.isVowel(r2)
                goto L19
            L18:
                r2 = 0
            L19:
                if (r2 == 0) goto L1e
                java.lang.String[] r2 = r1.replacementBeforeVowel
                return r2
            L1e:
                java.lang.String[] r2 = r1.replacementDefault
                return r2
        }

        public boolean matches(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = r1.pattern
                boolean r2 = r2.startsWith(r0)
                return r2
        }

        public java.lang.String toString() {
                r3 = this;
                r0 = 4
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = r3.pattern
                r2 = 0
                r0[r2] = r1
                java.lang.String[] r1 = r3.replacementAtStart
                java.util.List r1 = java.util.Arrays.asList(r1)
                r2 = 1
                r0[r2] = r1
                java.lang.String[] r1 = r3.replacementBeforeVowel
                java.util.List r1 = java.util.Arrays.asList(r1)
                r2 = 2
                r0[r2] = r1
                java.lang.String[] r1 = r3.replacementDefault
                java.util.List r1 = java.util.Arrays.asList(r1)
                r2 = 3
                r0[r2] = r1
                java.lang.String r1 = "%s=(%s,%s,%s)"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                return r0
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.apache.commons.codec1.language.DaitchMokotoffSoundex.RULES = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.apache.commons.codec1.language.DaitchMokotoffSoundex.FOLDINGS = r0
            java.lang.Class<org.apache.commons.codec1.language.DaitchMokotoffSoundex> r0 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.lang.String r1 = "org/apache/commons/codec/language/dmrules.txt"
            java.io.InputStream r0 = r0.getResourceAsStream(r1)
            if (r0 == 0) goto L53
            java.util.Scanner r2 = new java.util.Scanner
            java.lang.String r3 = "UTF-8"
            r2.<init>(r0, r3)
            java.util.Map<java.lang.Character, java.util.List<org.apache.commons.codec1.language.DaitchMokotoffSoundex$Rule>> r0 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.RULES
            java.util.Map<java.lang.Character, java.lang.Character> r3 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.FOLDINGS
            parseRules(r2, r1, r0, r3)
            r2.close()
            java.util.Map<java.lang.Character, java.util.List<org.apache.commons.codec1.language.DaitchMokotoffSoundex$Rule>> r0 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.RULES
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L37:
            boolean r1 = r0.hasNext()
            if (r1 != 0) goto L3e
            return
        L3e:
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            java.util.List r1 = (java.util.List) r1
            org.apache.commons.codec1.language.DaitchMokotoffSoundex$1 r2 = new org.apache.commons.codec1.language.DaitchMokotoffSoundex$1
            r2.<init>()
            java.util.Collections.sort(r1, r2)
            goto L37
        L53:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Unable to load resource: org/apache/commons/codec/language/dmrules.txt"
            r0.<init>(r1)
            throw r0
    }

    public DaitchMokotoffSoundex() {
            r1 = this;
            r0 = 1
            r1.<init>(r0)
            return
    }

    public DaitchMokotoffSoundex(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.folding = r1
            return
    }

    private java.lang.String cleanup(java.lang.String r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            char[] r7 = r7.toCharArray()
            int r1 = r7.length
            r2 = 0
        Lb:
            if (r2 < r1) goto L12
            java.lang.String r7 = r0.toString()
            return r7
        L12:
            char r3 = r7[r2]
            boolean r4 = java.lang.Character.isWhitespace(r3)
            if (r4 == 0) goto L1b
            goto L42
        L1b:
            char r3 = java.lang.Character.toLowerCase(r3)
            boolean r4 = r6.folding
            if (r4 == 0) goto L3f
            java.util.Map<java.lang.Character, java.lang.Character> r4 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.FOLDINGS
            java.lang.Character r5 = java.lang.Character.valueOf(r3)
            boolean r4 = r4.containsKey(r5)
            if (r4 == 0) goto L3f
            java.util.Map<java.lang.Character, java.lang.Character> r4 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.FOLDINGS
            java.lang.Character r3 = java.lang.Character.valueOf(r3)
            java.lang.Object r3 = r4.get(r3)
            java.lang.Character r3 = (java.lang.Character) r3
            char r3 = r3.charValue()
        L3f:
            r0.append(r3)
        L42:
            int r2 = r2 + 1
            goto Lb
    }

    private static void parseRules(java.util.Scanner r11, java.lang.String r12, java.util.Map<java.lang.Character, java.util.List<org.apache.commons.codec1.language.DaitchMokotoffSoundex.Rule>> r13, java.util.Map<java.lang.Character, java.lang.Character> r14) {
            r0 = 1
            r1 = 0
            r2 = r1
            r3 = r2
        L4:
            boolean r4 = r11.hasNextLine()
            if (r4 != 0) goto Lb
            return
        Lb:
            int r2 = r2 + r0
            java.lang.String r4 = r11.nextLine()
            if (r3 == 0) goto L1c
            java.lang.String r5 = "*/"
            boolean r4 = r4.endsWith(r5)
            if (r4 == 0) goto L4
            r3 = r1
            goto L4
        L1c:
            java.lang.String r5 = "/*"
            boolean r5 = r4.startsWith(r5)
            if (r5 == 0) goto L26
            r3 = r0
            goto L4
        L26:
            java.lang.String r5 = "//"
            int r5 = r4.indexOf(r5)
            if (r5 < 0) goto L33
            java.lang.String r5 = r4.substring(r1, r5)
            goto L34
        L33:
            r5 = r4
        L34:
            java.lang.String r5 = r5.trim()
            int r6 = r5.length()
            if (r6 != 0) goto L3f
            goto L4
        L3f:
            java.lang.String r6 = "="
            boolean r7 = r5.contains(r6)
            java.lang.String r8 = " parts: "
            r9 = 2
            java.lang.String r10 = " in "
            if (r7 == 0) goto Lb2
            java.lang.String[] r5 = r5.split(r6)
            int r6 = r5.length
            if (r6 != r9) goto L91
            r6 = r5[r1]
            r5 = r5[r0]
            int r7 = r6.length()
            if (r7 != r0) goto L77
            int r7 = r5.length()
            if (r7 != r0) goto L77
            char r4 = r6.charAt(r1)
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            char r5 = r5.charAt(r1)
            java.lang.Character r5 = java.lang.Character.valueOf(r5)
            r14.put(r4, r5)
            goto L4
        L77:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r14 = "Malformed folding statement - patterns are not single characters: "
            r13.<init>(r14)
            r13.append(r4)
            r13.append(r10)
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            r11.<init>(r12)
            throw r11
        L91:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r14 = "Malformed folding statement split into "
            r13.<init>(r14)
            int r14 = r5.length
            r13.append(r14)
            r13.append(r8)
            r13.append(r4)
            r13.append(r10)
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            r11.<init>(r12)
            throw r11
        Lb2:
            java.lang.String r6 = "\\s+"
            java.lang.String[] r5 = r5.split(r6)
            int r6 = r5.length
            r7 = 4
            if (r6 != r7) goto L11c
            r4 = r5[r1]     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.String r4 = stripQuotes(r4)     // Catch: java.lang.IllegalArgumentException -> Lff
            r6 = r5[r0]     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.String r6 = stripQuotes(r6)     // Catch: java.lang.IllegalArgumentException -> Lff
            r7 = r5[r9]     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.String r7 = stripQuotes(r7)     // Catch: java.lang.IllegalArgumentException -> Lff
            r8 = 3
            r5 = r5[r8]     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.String r5 = stripQuotes(r5)     // Catch: java.lang.IllegalArgumentException -> Lff
            org.apache.commons.codec1.language.DaitchMokotoffSoundex$Rule r8 = new org.apache.commons.codec1.language.DaitchMokotoffSoundex$Rule     // Catch: java.lang.IllegalArgumentException -> Lff
            r8.<init>(r4, r6, r7, r5)     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.String r4 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.Rule.access$0(r8)     // Catch: java.lang.IllegalArgumentException -> Lff
            char r4 = r4.charAt(r1)     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.Character r5 = java.lang.Character.valueOf(r4)     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.Object r5 = r13.get(r5)     // Catch: java.lang.IllegalArgumentException -> Lff
            java.util.List r5 = (java.util.List) r5     // Catch: java.lang.IllegalArgumentException -> Lff
            if (r5 != 0) goto Lfa
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.IllegalArgumentException -> Lff
            r5.<init>()     // Catch: java.lang.IllegalArgumentException -> Lff
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.IllegalArgumentException -> Lff
            r13.put(r4, r5)     // Catch: java.lang.IllegalArgumentException -> Lff
        Lfa:
            r5.add(r8)     // Catch: java.lang.IllegalArgumentException -> Lff
            goto L4
        Lff:
            r11 = move-exception
            java.lang.IllegalStateException r13 = new java.lang.IllegalStateException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            java.lang.String r0 = "Problem parsing line '"
            r14.<init>(r0)
            r14.append(r2)
            java.lang.String r0 = "' in "
            r14.append(r0)
            r14.append(r12)
            java.lang.String r12 = r14.toString()
            r13.<init>(r12, r11)
            throw r13
        L11c:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r14 = "Malformed rule statement split into "
            r13.<init>(r14)
            int r14 = r5.length
            r13.append(r14)
            r13.append(r8)
            r13.append(r4)
            r13.append(r10)
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            r11.<init>(r12)
            throw r11
    }

    private java.lang.String[] soundex(java.lang.String r19, boolean r20) {
            r18 = this;
            r0 = 0
            if (r19 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r18.cleanup(r19)
            java.util.LinkedHashSet r2 = new java.util.LinkedHashSet
            r2.<init>()
            org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch r3 = new org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch
            r3.<init>(r0)
            r2.add(r3)
            r3 = 0
            r4 = 0
        L17:
            int r5 = r1.length()
            if (r3 < r5) goto L42
            int r1 = r2.size()
            java.lang.String[] r5 = new java.lang.String[r1]
            java.util.Iterator r6 = r2.iterator()
            r0 = 0
        L28:
            boolean r1 = r6.hasNext()
            if (r1 != 0) goto L2f
            return r5
        L2f:
            java.lang.Object r1 = r6.next()
            org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch r1 = (org.apache.commons.codec1.language.DaitchMokotoffSoundex.Branch) r1
            r1.finish()
            int r2 = r0 + 1
            java.lang.String r1 = r1.toString()
            r5[r0] = r1
            r0 = r2
            goto L28
        L42:
            char r5 = r1.charAt(r3)
            boolean r6 = java.lang.Character.isWhitespace(r5)
            r7 = 1
            if (r6 == 0) goto L4f
            goto Lb2
        L4f:
            java.lang.String r6 = r1.substring(r3)
            java.util.Map<java.lang.Character, java.util.List<org.apache.commons.codec1.language.DaitchMokotoffSoundex$Rule>> r8 = org.apache.commons.codec1.language.DaitchMokotoffSoundex.RULES
            java.lang.Character r9 = java.lang.Character.valueOf(r5)
            java.lang.Object r8 = r8.get(r9)
            java.util.List r8 = (java.util.List) r8
            if (r8 != 0) goto L62
            goto Lb2
        L62:
            if (r20 == 0) goto L6a
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            goto L6c
        L6a:
            java.util.List r9 = java.util.Collections.EMPTY_LIST
        L6c:
            java.util.Iterator r8 = r8.iterator()
        L70:
            boolean r10 = r8.hasNext()
            if (r10 != 0) goto L77
            goto Lb1
        L77:
            java.lang.Object r10 = r8.next()
            org.apache.commons.codec1.language.DaitchMokotoffSoundex$Rule r10 = (org.apache.commons.codec1.language.DaitchMokotoffSoundex.Rule) r10
            boolean r11 = r10.matches(r6)
            if (r11 == 0) goto L70
            if (r20 == 0) goto L88
            r9.clear()
        L88:
            if (r4 != 0) goto L8c
            r8 = r7
            goto L8d
        L8c:
            r8 = 0
        L8d:
            java.lang.String[] r11 = r10.getReplacements(r6, r8)
            int r6 = r11.length
            if (r6 <= r7) goto L98
            if (r20 == 0) goto L98
            r12 = r7
            goto L99
        L98:
            r12 = 0
        L99:
            java.util.Iterator r13 = r2.iterator()
        L9d:
            boolean r6 = r13.hasNext()
            if (r6 != 0) goto Lb5
            if (r20 == 0) goto Lab
            r2.clear()
            r2.addAll(r9)
        Lab:
            int r4 = r10.getPatternLength()
            int r4 = r4 - r7
            int r3 = r3 + r4
        Lb1:
            r4 = r5
        Lb2:
            int r3 = r3 + r7
            goto L17
        Lb5:
            java.lang.Object r6 = r13.next()
            org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch r6 = (org.apache.commons.codec1.language.DaitchMokotoffSoundex.Branch) r6
            int r8 = r11.length
            r14 = 0
        Lbd:
            if (r14 < r8) goto Lc0
            goto L9d
        Lc0:
            r15 = r11[r14]
            if (r12 == 0) goto Lcb
            org.apache.commons.codec1.language.DaitchMokotoffSoundex$Branch r16 = r6.createBranch()
            r0 = r16
            goto Lcc
        Lcb:
            r0 = r6
        Lcc:
            r7 = 110(0x6e, float:1.54E-43)
            r17 = r1
            r1 = 109(0x6d, float:1.53E-43)
            if (r4 != r1) goto Ld6
            if (r5 == r7) goto Ldb
        Ld6:
            if (r4 != r7) goto Ldd
            if (r5 == r1) goto Ldb
            goto Ldd
        Ldb:
            r1 = 1
            goto Lde
        Ldd:
            r1 = 0
        Lde:
            r0.processNextReplacement(r15, r1)
            if (r20 == 0) goto Lec
            r9.add(r0)
            int r14 = r14 + 1
            r1 = r17
            r7 = 1
            goto Lbd
        Lec:
            r1 = r17
            r7 = 1
            goto L9d
    }

    private static java.lang.String stripQuotes(java.lang.String r3) {
            java.lang.String r0 = "\""
            boolean r1 = r3.startsWith(r0)
            r2 = 1
            if (r1 == 0) goto Ld
            java.lang.String r3 = r3.substring(r2)
        Ld:
            boolean r0 = r3.endsWith(r0)
            if (r0 == 0) goto L1d
            r0 = 0
            int r1 = r3.length()
            int r1 = r1 - r2
            java.lang.String r3 = r3.substring(r0, r1)
        L1d:
            return r3
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto Lb
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r1.encode(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "Parameter supplied to DaitchMokotoffSoundex encode is not of type java.lang.String"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String encode(java.lang.String r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            r0 = 0
            java.lang.String[] r2 = r1.soundex(r2, r0)
            r2 = r2[r0]
            return r2
    }

    public java.lang.String soundex(java.lang.String r7) {
            r6 = this;
            r0 = 1
            java.lang.String[] r7 = r6.soundex(r7, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r7.length
            r3 = 0
            r4 = r3
        Ld:
            if (r3 < r2) goto L14
            java.lang.String r7 = r1.toString()
            return r7
        L14:
            r5 = r7[r3]
            r1.append(r5)
            int r4 = r4 + r0
            int r5 = r7.length
            if (r4 >= r5) goto L22
            r5 = 124(0x7c, float:1.74E-43)
            r1.append(r5)
        L22:
            int r3 = r3 + 1
            goto Ld
    }
}
