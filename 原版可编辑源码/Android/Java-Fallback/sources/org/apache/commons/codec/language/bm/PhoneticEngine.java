package org.apache.commons.codec.language.bm;

public class PhoneticEngine {
    private static final java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Set<java.lang.String>> NAME_PREFIXES = null;
    private final boolean concat;
    private final org.apache.commons.codec.language.bm.Lang lang;
    private final org.apache.commons.codec.language.bm.NameType nameType;
    private final org.apache.commons.codec.language.bm.RuleType ruleType;


    static class 2 {
        static final int[] $SwitchMap$org$apache$commons$codec$language$bm$NameType = null;

        static {
                org.apache.commons.codec.language.bm.NameType[] r0 = org.apache.commons.codec.language.bm.NameType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                org.apache.commons.codec.language.bm.PhoneticEngine.2.$SwitchMap$org$apache$commons$codec$language$bm$NameType = r0
                org.apache.commons.codec.language.bm.NameType r1 = org.apache.commons.codec.language.bm.NameType.SEPHARDIC     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = org.apache.commons.codec.language.bm.PhoneticEngine.2.$SwitchMap$org$apache$commons$codec$language$bm$NameType     // Catch: java.lang.NoSuchFieldError -> L1d
                org.apache.commons.codec.language.bm.NameType r1 = org.apache.commons.codec.language.bm.NameType.ASHKENAZI     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = org.apache.commons.codec.language.bm.PhoneticEngine.2.$SwitchMap$org$apache$commons$codec$language$bm$NameType     // Catch: java.lang.NoSuchFieldError -> L28
                org.apache.commons.codec.language.bm.NameType r1 = org.apache.commons.codec.language.bm.NameType.GENERIC     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    static final class PhonemeBuilder {
        private final java.util.Set<org.apache.commons.codec.language.bm.Rule.Phoneme> phonemes;

        private PhonemeBuilder(java.util.Set<org.apache.commons.codec.language.bm.Rule.Phoneme> r1) {
                r0 = this;
                r0.<init>()
                r0.phonemes = r1
                return
        }

        PhonemeBuilder(java.util.Set r1, org.apache.commons.codec.language.bm.PhoneticEngine.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public static org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder empty(org.apache.commons.codec.language.bm.Languages.LanguageSet r3) {
                org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r0 = new org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder
                org.apache.commons.codec.language.bm.Rule$Phoneme r1 = new org.apache.commons.codec.language.bm.Rule$Phoneme
                java.lang.String r2 = ""
                r1.<init>(r2, r3)
                java.util.Set r3 = java.util.Collections.singleton(r1)
                r0.<init>(r3)
                return r0
        }

        public org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder append(java.lang.CharSequence r4) {
                r3 = this;
                java.util.HashSet r0 = new java.util.HashSet
                r0.<init>()
                java.util.Set<org.apache.commons.codec.language.bm.Rule$Phoneme> r1 = r3.phonemes
                java.util.Iterator r1 = r1.iterator()
            Lb:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L1f
                java.lang.Object r2 = r1.next()
                org.apache.commons.codec.language.bm.Rule$Phoneme r2 = (org.apache.commons.codec.language.bm.Rule.Phoneme) r2
                org.apache.commons.codec.language.bm.Rule$Phoneme r2 = r2.append(r4)
                r0.add(r2)
                goto Lb
            L1f:
                org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r4 = new org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder
                r4.<init>(r0)
                return r4
        }

        public org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder apply(org.apache.commons.codec.language.bm.Rule.PhonemeExpr r7) {
                r6 = this;
                java.util.HashSet r0 = new java.util.HashSet
                r0.<init>()
                java.util.Set<org.apache.commons.codec.language.bm.Rule$Phoneme> r1 = r6.phonemes
                java.util.Iterator r1 = r1.iterator()
            Lb:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L3d
                java.lang.Object r2 = r1.next()
                org.apache.commons.codec.language.bm.Rule$Phoneme r2 = (org.apache.commons.codec.language.bm.Rule.Phoneme) r2
                java.lang.Iterable r3 = r7.getPhonemes()
                java.util.Iterator r3 = r3.iterator()
            L1f:
                boolean r4 = r3.hasNext()
                if (r4 == 0) goto Lb
                java.lang.Object r4 = r3.next()
                org.apache.commons.codec.language.bm.Rule$Phoneme r4 = (org.apache.commons.codec.language.bm.Rule.Phoneme) r4
                org.apache.commons.codec.language.bm.Rule$Phoneme r4 = r2.join(r4)
                org.apache.commons.codec.language.bm.Languages$LanguageSet r5 = r4.getLanguages()
                boolean r5 = r5.isEmpty()
                if (r5 != 0) goto L1f
                r0.add(r4)
                goto L1f
            L3d:
                org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r7 = new org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder
                r7.<init>(r0)
                return r7
        }

        public java.util.Set<org.apache.commons.codec.language.bm.Rule.Phoneme> getPhonemes() {
                r1 = this;
                java.util.Set<org.apache.commons.codec.language.bm.Rule$Phoneme> r0 = r1.phonemes
                return r0
        }

        public java.lang.String makeString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.util.Set<org.apache.commons.codec.language.bm.Rule$Phoneme> r1 = r4.phonemes
                java.util.Iterator r1 = r1.iterator()
            Lb:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L2a
                java.lang.Object r2 = r1.next()
                org.apache.commons.codec.language.bm.Rule$Phoneme r2 = (org.apache.commons.codec.language.bm.Rule.Phoneme) r2
                int r3 = r0.length()
                if (r3 <= 0) goto L22
                java.lang.String r3 = "|"
                r0.append(r3)
            L22:
                java.lang.CharSequence r2 = r2.getPhonemeText()
                r0.append(r2)
                goto Lb
            L2a:
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static final class RulesApplication {
        private final java.util.List<org.apache.commons.codec.language.bm.Rule> finalRules;
        private boolean found;
        private int i;
        private final java.lang.CharSequence input;
        private org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder phonemeBuilder;

        public RulesApplication(java.util.List<org.apache.commons.codec.language.bm.Rule> r1, java.lang.CharSequence r2, org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder r3, int r4) {
                r0 = this;
                r0.<init>()
                if (r1 == 0) goto Le
                r0.finalRules = r1
                r0.phonemeBuilder = r3
                r0.input = r2
                r0.i = r4
                return
            Le:
                java.lang.NullPointerException r1 = new java.lang.NullPointerException
                java.lang.String r2 = "The finalRules argument must not be null"
                r1.<init>(r2)
                throw r1
        }

        public int getI() {
                r1 = this;
                int r0 = r1.i
                return r0
        }

        public org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder getPhonemeBuilder() {
                r1 = this;
                org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r0 = r1.phonemeBuilder
                return r0
        }

        public org.apache.commons.codec.language.bm.PhoneticEngine.RulesApplication invoke() {
                r6 = this;
                r0 = 0
                r6.found = r0
                java.util.List<org.apache.commons.codec.language.bm.Rule> r1 = r6.finalRules
                java.util.Iterator r1 = r1.iterator()
            L9:
                boolean r2 = r1.hasNext()
                r3 = 1
                if (r2 == 0) goto L39
                java.lang.Object r0 = r1.next()
                org.apache.commons.codec.language.bm.Rule r0 = (org.apache.commons.codec.language.bm.Rule) r0
                java.lang.String r2 = r0.getPattern()
                int r2 = r2.length()
                java.lang.CharSequence r4 = r6.input
                int r5 = r6.i
                boolean r4 = r0.patternAndContextMatches(r4, r5)
                if (r4 != 0) goto L2a
                r0 = r2
                goto L9
            L2a:
                org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r1 = r6.phonemeBuilder
                org.apache.commons.codec.language.bm.Rule$PhonemeExpr r0 = r0.getPhoneme()
                org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r0 = r1.apply(r0)
                r6.phonemeBuilder = r0
                r6.found = r3
                r0 = r2
            L39:
                boolean r1 = r6.found
                if (r1 != 0) goto L3e
                goto L3f
            L3e:
                r3 = r0
            L3f:
                int r0 = r6.i
                int r0 = r0 + r3
                r6.i = r0
                return r6
        }

        public boolean isFound() {
                r1 = this;
                boolean r0 = r1.found
                return r0
        }
    }

    static {
            java.util.EnumMap r0 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec.language.bm.NameType> r1 = org.apache.commons.codec.language.bm.NameType.class
            r0.<init>(r1)
            org.apache.commons.codec.language.bm.PhoneticEngine.NAME_PREFIXES = r0
            org.apache.commons.codec.language.bm.NameType r1 = org.apache.commons.codec.language.bm.NameType.ASHKENAZI
            java.util.HashSet r2 = new java.util.HashSet
            java.lang.String r3 = "bar"
            java.lang.String r4 = "ben"
            java.lang.String r5 = "da"
            java.lang.String r6 = "de"
            java.lang.String r7 = "van"
            java.lang.String r8 = "von"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4, r5, r6, r7, r8}
            java.util.List r3 = java.util.Arrays.asList(r3)
            r2.<init>(r3)
            java.util.Set r2 = java.util.Collections.unmodifiableSet(r2)
            r0.put(r1, r2)
            java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Set<java.lang.String>> r0 = org.apache.commons.codec.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec.language.bm.NameType r1 = org.apache.commons.codec.language.bm.NameType.SEPHARDIC
            java.util.HashSet r2 = new java.util.HashSet
            java.lang.String r3 = "al"
            java.lang.String r4 = "el"
            java.lang.String r5 = "da"
            java.lang.String r6 = "dal"
            java.lang.String r7 = "de"
            java.lang.String r8 = "del"
            java.lang.String r9 = "dela"
            java.lang.String r10 = "de la"
            java.lang.String r11 = "della"
            java.lang.String r12 = "des"
            java.lang.String r13 = "di"
            java.lang.String r14 = "do"
            java.lang.String r15 = "dos"
            java.lang.String r16 = "du"
            java.lang.String r17 = "van"
            java.lang.String r18 = "von"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18}
            java.util.List r3 = java.util.Arrays.asList(r3)
            r2.<init>(r3)
            java.util.Set r2 = java.util.Collections.unmodifiableSet(r2)
            r0.put(r1, r2)
            java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Set<java.lang.String>> r0 = org.apache.commons.codec.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec.language.bm.NameType r1 = org.apache.commons.codec.language.bm.NameType.GENERIC
            java.util.HashSet r2 = new java.util.HashSet
            java.lang.String r3 = "da"
            java.lang.String r4 = "dal"
            java.lang.String r5 = "de"
            java.lang.String r6 = "del"
            java.lang.String r7 = "dela"
            java.lang.String r8 = "de la"
            java.lang.String r9 = "della"
            java.lang.String r10 = "des"
            java.lang.String r11 = "di"
            java.lang.String r12 = "do"
            java.lang.String r13 = "dos"
            java.lang.String r14 = "du"
            java.lang.String r15 = "van"
            java.lang.String r16 = "von"
            java.lang.String[] r3 = new java.lang.String[]{r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16}
            java.util.List r3 = java.util.Arrays.asList(r3)
            r2.<init>(r3)
            java.util.Set r2 = java.util.Collections.unmodifiableSet(r2)
            r0.put(r1, r2)
            return
    }

    public PhoneticEngine(org.apache.commons.codec.language.bm.NameType r2, org.apache.commons.codec.language.bm.RuleType r3, boolean r4) {
            r1 = this;
            r1.<init>()
            org.apache.commons.codec.language.bm.RuleType r0 = org.apache.commons.codec.language.bm.RuleType.RULES
            if (r3 == r0) goto L14
            r1.nameType = r2
            r1.ruleType = r3
            r1.concat = r4
            org.apache.commons.codec.language.bm.Lang r2 = org.apache.commons.codec.language.bm.Lang.instance(r2)
            r1.lang = r2
            return
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "ruleType must not be "
            r3.append(r4)
            org.apache.commons.codec.language.bm.RuleType r4 = org.apache.commons.codec.language.bm.RuleType.RULES
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    private org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder applyFinalRules(org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder r8, java.util.List<org.apache.commons.codec.language.bm.Rule> r9) {
            r7 = this;
            if (r9 == 0) goto L71
            boolean r0 = r9.isEmpty()
            if (r0 == 0) goto L9
            return r8
        L9:
            java.util.TreeSet r0 = new java.util.TreeSet
            java.util.Comparator<org.apache.commons.codec.language.bm.Rule$Phoneme> r1 = org.apache.commons.codec.language.bm.Rule.Phoneme.COMPARATOR
            r0.<init>(r1)
            java.util.Set r8 = r8.getPhonemes()
            java.util.Iterator r8 = r8.iterator()
        L18:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L6a
            java.lang.Object r1 = r8.next()
            org.apache.commons.codec.language.bm.Rule$Phoneme r1 = (org.apache.commons.codec.language.bm.Rule.Phoneme) r1
            org.apache.commons.codec.language.bm.Languages$LanguageSet r2 = r1.getLanguages()
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r2 = org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder.empty(r2)
            java.lang.CharSequence r1 = r1.getPhonemeText()
            java.lang.CharSequence r1 = cacheSubSequence(r1)
            r3 = 0
        L35:
            int r4 = r1.length()
            if (r3 >= r4) goto L62
            org.apache.commons.codec.language.bm.PhoneticEngine$RulesApplication r4 = new org.apache.commons.codec.language.bm.PhoneticEngine$RulesApplication
            r4.<init>(r9, r1, r2, r3)
            org.apache.commons.codec.language.bm.PhoneticEngine$RulesApplication r2 = r4.invoke()
            boolean r4 = r2.isFound()
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r5 = r2.getPhonemeBuilder()
            if (r4 != 0) goto L59
            int r4 = r3 + 1
            java.lang.CharSequence r3 = r1.subSequence(r3, r4)
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r3 = r5.append(r3)
            goto L5a
        L59:
            r3 = r5
        L5a:
            int r2 = r2.getI()
            r6 = r3
            r3 = r2
            r2 = r6
            goto L35
        L62:
            java.util.Set r1 = r2.getPhonemes()
            r0.addAll(r1)
            goto L18
        L6a:
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r8 = new org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder
            r9 = 0
            r8.<init>(r0, r9)
            return r8
        L71:
            java.lang.NullPointerException r8 = new java.lang.NullPointerException
            java.lang.String r9 = "finalRules can not be null"
            r8.<init>(r9)
            throw r8
    }

    private static java.lang.CharSequence cacheSubSequence(java.lang.CharSequence r4) {
            int r0 = r4.length()
            int r1 = r4.length()
            r2 = 2
            int[] r2 = new int[r2]
            r3 = 1
            r2[r3] = r1
            r1 = 0
            r2[r1] = r0
            java.lang.Class<java.lang.CharSequence> r0 = java.lang.CharSequence.class
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r2)
            java.lang.CharSequence[][] r0 = (java.lang.CharSequence[][]) r0
            org.apache.commons.codec.language.bm.PhoneticEngine$1 r1 = new org.apache.commons.codec.language.bm.PhoneticEngine$1
            r1.<init>(r4, r0)
            return r1
    }

    private static java.lang.String join(java.lang.Iterable<java.lang.String> r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r2.next()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
        L18:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L2b
            r0.append(r3)
            java.lang.Object r1 = r2.next()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            goto L18
        L2b:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public java.lang.String encode(java.lang.String r2) {
            r1 = this;
            org.apache.commons.codec.language.bm.Lang r0 = r1.lang
            org.apache.commons.codec.language.bm.Languages$LanguageSet r0 = r0.guessLanguages(r2)
            java.lang.String r2 = r1.encode(r2, r0)
            return r2
    }

    public java.lang.String encode(java.lang.String r14, org.apache.commons.codec.language.bm.Languages.LanguageSet r15) {
            r13 = this;
            org.apache.commons.codec.language.bm.NameType r0 = r13.nameType
            org.apache.commons.codec.language.bm.RuleType r1 = org.apache.commons.codec.language.bm.RuleType.RULES
            java.util.List r0 = org.apache.commons.codec.language.bm.Rule.getInstance(r0, r1, r15)
            org.apache.commons.codec.language.bm.NameType r1 = r13.nameType
            org.apache.commons.codec.language.bm.RuleType r2 = r13.ruleType
            java.lang.String r3 = "common"
            java.util.List r1 = org.apache.commons.codec.language.bm.Rule.getInstance(r1, r2, r3)
            org.apache.commons.codec.language.bm.NameType r2 = r13.nameType
            org.apache.commons.codec.language.bm.RuleType r3 = r13.ruleType
            java.util.List r2 = org.apache.commons.codec.language.bm.Rule.getInstance(r2, r3, r15)
            java.util.Locale r3 = java.util.Locale.ENGLISH
            java.lang.String r14 = r14.toLowerCase(r3)
            r3 = 45
            r4 = 32
            java.lang.String r14 = r14.replace(r3, r4)
            java.lang.String r14 = r14.trim()
            org.apache.commons.codec.language.bm.NameType r3 = r13.nameType
            org.apache.commons.codec.language.bm.NameType r4 = org.apache.commons.codec.language.bm.NameType.GENERIC
            java.lang.String r5 = " "
            r6 = 0
            r7 = 2
            r8 = 1
            if (r3 != r4) goto Led
            int r3 = r14.length()
            java.lang.String r4 = ")"
            java.lang.String r9 = ")-("
            java.lang.String r10 = "("
            if (r3 < r7) goto L85
            java.lang.String r3 = r14.substring(r6, r7)
            java.lang.String r11 = "d'"
            boolean r3 = r3.equals(r11)
            if (r3 == 0) goto L85
            java.lang.String r14 = r14.substring(r7)
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "d"
            r15.append(r0)
            r15.append(r14)
            java.lang.String r15 = r15.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r10)
            java.lang.String r14 = r13.encode(r14)
            r0.append(r14)
            r0.append(r9)
            java.lang.String r14 = r13.encode(r15)
            r0.append(r14)
            r0.append(r4)
            java.lang.String r14 = r0.toString()
            return r14
        L85:
            java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Set<java.lang.String>> r3 = org.apache.commons.codec.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec.language.bm.NameType r11 = r13.nameType
            java.lang.Object r3 = r3.get(r11)
            java.util.Set r3 = (java.util.Set) r3
            java.util.Iterator r3 = r3.iterator()
        L93:
            boolean r11 = r3.hasNext()
            if (r11 == 0) goto Led
            java.lang.Object r11 = r3.next()
            java.lang.String r11 = (java.lang.String) r11
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r11)
            r12.append(r5)
            java.lang.String r12 = r12.toString()
            boolean r12 = r14.startsWith(r12)
            if (r12 == 0) goto L93
            int r15 = r11.length()
            int r15 = r15 + r8
            java.lang.String r14 = r14.substring(r15)
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            r15.append(r11)
            r15.append(r14)
            java.lang.String r15 = r15.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r10)
            java.lang.String r14 = r13.encode(r14)
            r0.append(r14)
            r0.append(r9)
            java.lang.String r14 = r13.encode(r15)
            r0.append(r14)
            r0.append(r4)
            java.lang.String r14 = r0.toString()
            return r14
        Led:
            java.lang.String r3 = "\\s+"
            java.lang.String[] r14 = r14.split(r3)
            java.util.List r14 = java.util.Arrays.asList(r14)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            int[] r4 = org.apache.commons.codec.language.bm.PhoneticEngine.2.$SwitchMap$org$apache$commons$codec$language$bm$NameType
            org.apache.commons.codec.language.bm.NameType r9 = r13.nameType
            int r9 = r9.ordinal()
            r4 = r4[r9]
            if (r4 == r8) goto L13b
            if (r4 == r7) goto L12a
            r7 = 3
            if (r4 != r7) goto L111
            r3.addAll(r14)
            goto L166
        L111:
            java.lang.IllegalStateException r14 = new java.lang.IllegalStateException
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "Unreachable case: "
            r15.append(r0)
            org.apache.commons.codec.language.bm.NameType r0 = r13.nameType
            r15.append(r0)
            java.lang.String r15 = r15.toString()
            r14.<init>(r15)
            throw r14
        L12a:
            r3.addAll(r14)
            java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Set<java.lang.String>> r4 = org.apache.commons.codec.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec.language.bm.NameType r7 = r13.nameType
            java.lang.Object r4 = r4.get(r7)
            java.util.Collection r4 = (java.util.Collection) r4
            r3.removeAll(r4)
            goto L166
        L13b:
            java.util.Iterator r4 = r14.iterator()
        L13f:
            boolean r7 = r4.hasNext()
            if (r7 == 0) goto L159
            java.lang.Object r7 = r4.next()
            java.lang.String r7 = (java.lang.String) r7
            java.lang.String r9 = "'"
            java.lang.String[] r7 = r7.split(r9)
            int r9 = r7.length
            int r9 = r9 - r8
            r7 = r7[r9]
            r3.add(r7)
            goto L13f
        L159:
            java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Set<java.lang.String>> r4 = org.apache.commons.codec.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec.language.bm.NameType r7 = r13.nameType
            java.lang.Object r4 = r4.get(r7)
            java.util.Collection r4 = (java.util.Collection) r4
            r3.removeAll(r4)
        L166:
            boolean r4 = r13.concat
            if (r4 == 0) goto L16f
            java.lang.String r14 = join(r3, r5)
            goto L17f
        L16f:
            int r4 = r3.size()
            if (r4 != r8) goto L1ac
            java.util.Iterator r14 = r14.iterator()
            java.lang.Object r14 = r14.next()
            java.lang.String r14 = (java.lang.String) r14
        L17f:
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r15 = org.apache.commons.codec.language.bm.PhoneticEngine.PhonemeBuilder.empty(r15)
            java.lang.CharSequence r14 = cacheSubSequence(r14)
        L187:
            int r3 = r14.length()
            if (r6 >= r3) goto L19f
            org.apache.commons.codec.language.bm.PhoneticEngine$RulesApplication r3 = new org.apache.commons.codec.language.bm.PhoneticEngine$RulesApplication
            r3.<init>(r0, r14, r15, r6)
            org.apache.commons.codec.language.bm.PhoneticEngine$RulesApplication r15 = r3.invoke()
            int r6 = r15.getI()
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r15 = r15.getPhonemeBuilder()
            goto L187
        L19f:
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r14 = r13.applyFinalRules(r15, r1)
            org.apache.commons.codec.language.bm.PhoneticEngine$PhonemeBuilder r14 = r13.applyFinalRules(r14, r2)
            java.lang.String r14 = r14.makeString()
            return r14
        L1ac:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.util.Iterator r15 = r3.iterator()
        L1b5:
            boolean r0 = r15.hasNext()
            if (r0 == 0) goto L1ce
            java.lang.Object r0 = r15.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "-"
            r14.append(r1)
            java.lang.String r0 = r13.encode(r0)
            r14.append(r0)
            goto L1b5
        L1ce:
            java.lang.String r14 = r14.substring(r8)
            return r14
    }

    public org.apache.commons.codec.language.bm.Lang getLang() {
            r1 = this;
            org.apache.commons.codec.language.bm.Lang r0 = r1.lang
            return r0
    }

    public org.apache.commons.codec.language.bm.NameType getNameType() {
            r1 = this;
            org.apache.commons.codec.language.bm.NameType r0 = r1.nameType
            return r0
    }

    public org.apache.commons.codec.language.bm.RuleType getRuleType() {
            r1 = this;
            org.apache.commons.codec.language.bm.RuleType r0 = r1.ruleType
            return r0
    }

    public boolean isConcat() {
            r1 = this;
            boolean r0 = r1.concat
            return r0
    }
}
