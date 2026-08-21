package org.apache.commons.codec1.language.bm;

public class PhoneticEngine {
    private static int[] $SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType = null;
    private static final int DEFAULT_MAX_PHONEMES = 20;
    private static final java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Set<java.lang.String>> NAME_PREFIXES = null;
    private final boolean concat;
    private final org.apache.commons.codec1.language.bm.Lang lang;
    private final int maxPhonemes;
    private final org.apache.commons.codec1.language.bm.NameType nameType;
    private final org.apache.commons.codec1.language.bm.RuleType ruleType;

    static final class PhonemeBuilder {
        private final java.util.Set<org.apache.commons.codec1.language.bm.Rule.Phoneme> phonemes;

        private PhonemeBuilder(java.util.Set<org.apache.commons.codec1.language.bm.Rule.Phoneme> r1) {
                r0 = this;
                r0.<init>()
                r0.phonemes = r1
                return
        }

        PhonemeBuilder(java.util.Set r1, org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private PhonemeBuilder(org.apache.commons.codec1.language.bm.Rule.Phoneme r2) {
                r1 = this;
                r1.<init>()
                java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
                r0.<init>()
                r1.phonemes = r0
                r0.add(r2)
                return
        }

        public static org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder empty(org.apache.commons.codec1.language.bm.Languages.LanguageSet r3) {
                org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r0 = new org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder
                org.apache.commons.codec1.language.bm.Rule$Phoneme r1 = new org.apache.commons.codec1.language.bm.Rule$Phoneme
                java.lang.String r2 = ""
                r1.<init>(r2, r3)
                r0.<init>(r1)
                return r0
        }

        public void append(java.lang.CharSequence r3) {
                r2 = this;
                java.util.Set<org.apache.commons.codec1.language.bm.Rule$Phoneme> r0 = r2.phonemes
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 != 0) goto Ld
                return
            Ld:
                java.lang.Object r1 = r0.next()
                org.apache.commons.codec1.language.bm.Rule$Phoneme r1 = (org.apache.commons.codec1.language.bm.Rule.Phoneme) r1
                r1.append(r3)
                goto L6
        }

        public void apply(org.apache.commons.codec1.language.bm.Rule.PhonemeExpr r8, int r9) {
                r7 = this;
                java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
                r0.<init>(r9)
                java.util.Set<org.apache.commons.codec1.language.bm.Rule$Phoneme> r1 = r7.phonemes
                java.util.Iterator r1 = r1.iterator()
            Lb:
                boolean r2 = r1.hasNext()
                if (r2 != 0) goto L12
                goto L53
            L12:
                java.lang.Object r2 = r1.next()
                org.apache.commons.codec1.language.bm.Rule$Phoneme r2 = (org.apache.commons.codec1.language.bm.Rule.Phoneme) r2
                java.lang.Iterable r3 = r8.getPhonemes()
                java.util.Iterator r3 = r3.iterator()
            L20:
                boolean r4 = r3.hasNext()
                if (r4 != 0) goto L27
                goto Lb
            L27:
                java.lang.Object r4 = r3.next()
                org.apache.commons.codec1.language.bm.Rule$Phoneme r4 = (org.apache.commons.codec1.language.bm.Rule.Phoneme) r4
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r5 = r2.getLanguages()
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r6 = r4.getLanguages()
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r5 = r5.restrictTo(r6)
                boolean r6 = r5.isEmpty()
                if (r6 != 0) goto L20
                org.apache.commons.codec1.language.bm.Rule$Phoneme r6 = new org.apache.commons.codec1.language.bm.Rule$Phoneme
                r6.<init>(r2, r4, r5)
                int r4 = r0.size()
                if (r4 >= r9) goto L20
                r0.add(r6)
                int r4 = r0.size()
                if (r4 < r9) goto L20
            L53:
                java.util.Set<org.apache.commons.codec1.language.bm.Rule$Phoneme> r8 = r7.phonemes
                r8.clear()
                java.util.Set<org.apache.commons.codec1.language.bm.Rule$Phoneme> r8 = r7.phonemes
                r8.addAll(r0)
                return
        }

        public java.util.Set<org.apache.commons.codec1.language.bm.Rule.Phoneme> getPhonemes() {
                r1 = this;
                java.util.Set<org.apache.commons.codec1.language.bm.Rule$Phoneme> r0 = r1.phonemes
                return r0
        }

        public java.lang.String makeString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.util.Set<org.apache.commons.codec1.language.bm.Rule$Phoneme> r1 = r4.phonemes
                java.util.Iterator r1 = r1.iterator()
            Lb:
                boolean r2 = r1.hasNext()
                if (r2 != 0) goto L16
                java.lang.String r0 = r0.toString()
                return r0
            L16:
                java.lang.Object r2 = r1.next()
                org.apache.commons.codec1.language.bm.Rule$Phoneme r2 = (org.apache.commons.codec1.language.bm.Rule.Phoneme) r2
                int r3 = r0.length()
                if (r3 <= 0) goto L27
                java.lang.String r3 = "|"
                r0.append(r3)
            L27:
                java.lang.CharSequence r2 = r2.getPhonemeText()
                r0.append(r2)
                goto Lb
        }
    }

    private static final class RulesApplication {
        private final java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>> finalRules;
        private boolean found;
        private int i;
        private final java.lang.CharSequence input;
        private final int maxPhonemes;
        private org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder phonemeBuilder;

        public RulesApplication(java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>> r1, java.lang.CharSequence r2, org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder r3, int r4, int r5) {
                r0 = this;
                r0.<init>()
                if (r1 == 0) goto L10
                r0.finalRules = r1
                r0.phonemeBuilder = r3
                r0.input = r2
                r0.i = r4
                r0.maxPhonemes = r5
                return
            L10:
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

        public org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder getPhonemeBuilder() {
                r1 = this;
                org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r0 = r1.phonemeBuilder
                return r0
        }

        public org.apache.commons.codec1.language.bm.PhoneticEngine.RulesApplication invoke() {
                r6 = this;
                r0 = 0
                r6.found = r0
                java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>> r0 = r6.finalRules
                java.lang.CharSequence r1 = r6.input
                int r2 = r6.i
                int r3 = r2 + 1
                java.lang.CharSequence r1 = r1.subSequence(r2, r3)
                java.lang.Object r0 = r0.get(r1)
                java.util.List r0 = (java.util.List) r0
                r1 = 1
                if (r0 == 0) goto L4d
                java.util.Iterator r0 = r0.iterator()
                r2 = r1
            L1d:
                boolean r3 = r0.hasNext()
                if (r3 != 0) goto L24
                goto L4e
            L24:
                java.lang.Object r2 = r0.next()
                org.apache.commons.codec1.language.bm.Rule r2 = (org.apache.commons.codec1.language.bm.Rule) r2
                java.lang.String r3 = r2.getPattern()
                int r3 = r3.length()
                java.lang.CharSequence r4 = r6.input
                int r5 = r6.i
                boolean r4 = r2.patternAndContextMatches(r4, r5)
                if (r4 == 0) goto L4b
                org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r0 = r6.phonemeBuilder
                org.apache.commons.codec1.language.bm.Rule$PhonemeExpr r2 = r2.getPhoneme()
                int r4 = r6.maxPhonemes
                r0.apply(r2, r4)
                r6.found = r1
                r2 = r3
                goto L4e
            L4b:
                r2 = r3
                goto L1d
            L4d:
                r2 = r1
            L4e:
                boolean r0 = r6.found
                if (r0 != 0) goto L53
                goto L54
            L53:
                r1 = r2
            L54:
                int r0 = r6.i
                int r0 = r0 + r1
                r6.i = r0
                return r6
        }

        public boolean isFound() {
                r1 = this;
                boolean r0 = r1.found
                return r0
        }
    }

    static int[] $SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType() {
            int[] r0 = org.apache.commons.codec1.language.bm.PhoneticEngine.$SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType
            if (r0 == 0) goto L5
            return r0
        L5:
            org.apache.commons.codec1.language.bm.NameType[] r0 = org.apache.commons.codec1.language.bm.NameType.values()
            int r0 = r0.length
            int[] r0 = new int[r0]
            org.apache.commons.codec1.language.bm.NameType r1 = org.apache.commons.codec1.language.bm.NameType.ASHKENAZI     // Catch: java.lang.NoSuchFieldError -> L15
            int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L15
            r2 = 1
            r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L15
        L15:
            org.apache.commons.codec1.language.bm.NameType r1 = org.apache.commons.codec1.language.bm.NameType.GENERIC     // Catch: java.lang.NoSuchFieldError -> L1e
            int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1e
            r2 = 2
            r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1e
        L1e:
            org.apache.commons.codec1.language.bm.NameType r1 = org.apache.commons.codec1.language.bm.NameType.SEPHARDIC     // Catch: java.lang.NoSuchFieldError -> L27
            int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L27
            r2 = 3
            r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L27
        L27:
            org.apache.commons.codec1.language.bm.PhoneticEngine.$SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType = r0
            return r0
    }

    static {
            java.util.EnumMap r0 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec1.language.bm.NameType> r1 = org.apache.commons.codec1.language.bm.NameType.class
            r0.<init>(r1)
            org.apache.commons.codec1.language.bm.PhoneticEngine.NAME_PREFIXES = r0
            org.apache.commons.codec1.language.bm.NameType r1 = org.apache.commons.codec1.language.bm.NameType.ASHKENAZI
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
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Set<java.lang.String>> r0 = org.apache.commons.codec1.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec1.language.bm.NameType r1 = org.apache.commons.codec1.language.bm.NameType.SEPHARDIC
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
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Set<java.lang.String>> r0 = org.apache.commons.codec1.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec1.language.bm.NameType r1 = org.apache.commons.codec1.language.bm.NameType.GENERIC
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

    public PhoneticEngine(org.apache.commons.codec1.language.bm.NameType r2, org.apache.commons.codec1.language.bm.RuleType r3, boolean r4) {
            r1 = this;
            r0 = 20
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public PhoneticEngine(org.apache.commons.codec1.language.bm.NameType r2, org.apache.commons.codec1.language.bm.RuleType r3, boolean r4, int r5) {
            r1 = this;
            r1.<init>()
            org.apache.commons.codec1.language.bm.RuleType r0 = org.apache.commons.codec1.language.bm.RuleType.RULES
            if (r3 == r0) goto L16
            r1.nameType = r2
            r1.ruleType = r3
            r1.concat = r4
            org.apache.commons.codec1.language.bm.Lang r2 = org.apache.commons.codec1.language.bm.Lang.instance(r2)
            r1.lang = r2
            r1.maxPhonemes = r5
            return
        L16:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "ruleType must not be "
            r3.<init>(r4)
            org.apache.commons.codec1.language.bm.RuleType r4 = org.apache.commons.codec1.language.bm.RuleType.RULES
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    private org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder applyFinalRules(org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder r11, java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>> r12) {
            r10 = this;
            if (r12 == 0) goto La0
            boolean r0 = r12.isEmpty()
            if (r0 == 0) goto L9
            return r11
        L9:
            java.util.TreeMap r0 = new java.util.TreeMap
            java.util.Comparator<org.apache.commons.codec1.language.bm.Rule$Phoneme> r1 = org.apache.commons.codec1.language.bm.Rule.Phoneme.COMPARATOR
            r0.<init>(r1)
            java.util.Set r11 = r11.getPhonemes()
            java.util.Iterator r11 = r11.iterator()
        L18:
            boolean r1 = r11.hasNext()
            if (r1 != 0) goto L29
            org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r11 = new org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder
            java.util.Set r12 = r0.keySet()
            r0 = 0
            r11.<init>(r12, r0)
            return r11
        L29:
            java.lang.Object r1 = r11.next()
            org.apache.commons.codec1.language.bm.Rule$Phoneme r1 = (org.apache.commons.codec1.language.bm.Rule.Phoneme) r1
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r2 = r1.getLanguages()
            org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r2 = org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder.empty(r2)
            java.lang.CharSequence r1 = r1.getPhonemeText()
            java.lang.String r1 = r1.toString()
            r3 = 0
            r6 = r2
            r2 = r3
        L42:
            int r3 = r1.length()
            if (r2 < r3) goto L79
            java.util.Set r1 = r6.getPhonemes()
            java.util.Iterator r3 = r1.iterator()
        L50:
            boolean r1 = r3.hasNext()
            if (r1 != 0) goto L57
            goto L18
        L57:
            java.lang.Object r1 = r3.next()
            org.apache.commons.codec1.language.bm.Rule$Phoneme r1 = (org.apache.commons.codec1.language.bm.Rule.Phoneme) r1
            boolean r2 = r0.containsKey(r1)
            if (r2 == 0) goto L75
            java.lang.Object r2 = r0.remove(r1)
            org.apache.commons.codec1.language.bm.Rule$Phoneme r2 = (org.apache.commons.codec1.language.bm.Rule.Phoneme) r2
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r1 = r1.getLanguages()
            org.apache.commons.codec1.language.bm.Rule$Phoneme r1 = r2.mergeWithLanguage(r1)
            r0.put(r1, r1)
            goto L50
        L75:
            r0.put(r1, r1)
            goto L50
        L79:
            org.apache.commons.codec1.language.bm.PhoneticEngine$RulesApplication r9 = new org.apache.commons.codec1.language.bm.PhoneticEngine$RulesApplication
            int r8 = r10.maxPhonemes
            r3 = r9
            r4 = r12
            r5 = r1
            r7 = r2
            r3.<init>(r4, r5, r6, r7, r8)
            org.apache.commons.codec1.language.bm.PhoneticEngine$RulesApplication r3 = r9.invoke()
            boolean r4 = r3.isFound()
            org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r6 = r3.getPhonemeBuilder()
            if (r4 != 0) goto L9b
            int r4 = r2 + 1
            java.lang.CharSequence r2 = r1.subSequence(r2, r4)
            r6.append(r2)
        L9b:
            int r2 = r3.getI()
            goto L42
        La0:
            java.lang.NullPointerException r11 = new java.lang.NullPointerException
            java.lang.String r12 = "finalRules can not be null"
            r11.<init>(r12)
            throw r11
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
            if (r1 != 0) goto L23
            java.lang.String r2 = r0.toString()
            return r2
        L23:
            r0.append(r3)
            java.lang.Object r1 = r2.next()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            goto L18
    }

    public java.lang.String encode(java.lang.String r2) {
            r1 = this;
            org.apache.commons.codec1.language.bm.Lang r0 = r1.lang
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = r0.guessLanguages(r2)
            java.lang.String r2 = r1.encode(r2, r0)
            return r2
    }

    public java.lang.String encode(java.lang.String r17, org.apache.commons.codec1.language.bm.Languages.LanguageSet r18) {
            r16 = this;
            r0 = r16
            r1 = r18
            org.apache.commons.codec1.language.bm.NameType r2 = r0.nameType
            org.apache.commons.codec1.language.bm.RuleType r3 = org.apache.commons.codec1.language.bm.RuleType.RULES
            java.util.Map r2 = org.apache.commons.codec1.language.bm.Rule.getInstanceMap(r2, r3, r1)
            org.apache.commons.codec1.language.bm.NameType r3 = r0.nameType
            org.apache.commons.codec1.language.bm.RuleType r4 = r0.ruleType
            java.lang.String r5 = "common"
            java.util.Map r3 = org.apache.commons.codec1.language.bm.Rule.getInstanceMap(r3, r4, r5)
            org.apache.commons.codec1.language.bm.NameType r4 = r0.nameType
            org.apache.commons.codec1.language.bm.RuleType r5 = r0.ruleType
            java.util.Map r10 = org.apache.commons.codec1.language.bm.Rule.getInstanceMap(r4, r5, r1)
            java.util.Locale r4 = java.util.Locale.ENGLISH
            r5 = r17
            java.lang.String r4 = r5.toLowerCase(r4)
            r5 = 45
            r6 = 32
            java.lang.String r4 = r4.replace(r5, r6)
            java.lang.String r4 = r4.trim()
            org.apache.commons.codec1.language.bm.NameType r5 = r0.nameType
            org.apache.commons.codec1.language.bm.NameType r6 = org.apache.commons.codec1.language.bm.NameType.GENERIC
            java.lang.String r7 = " "
            r8 = 0
            r9 = 2
            r11 = 1
            if (r5 != r6) goto Lef
            int r5 = r4.length()
            java.lang.String r6 = ")"
            java.lang.String r12 = ")-("
            java.lang.String r13 = "("
            if (r5 < r9) goto L85
            java.lang.String r5 = r4.substring(r8, r9)
            java.lang.String r14 = "d'"
            boolean r5 = r5.equals(r14)
            if (r5 == 0) goto L85
            java.lang.String r1 = r4.substring(r9)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "d"
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r13)
            java.lang.String r1 = r0.encode(r1)
            r3.append(r1)
            r3.append(r12)
            java.lang.String r1 = r0.encode(r2)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r1 = r3.toString()
            return r1
        L85:
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Set<java.lang.String>> r5 = org.apache.commons.codec1.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec1.language.bm.NameType r14 = r0.nameType
            java.lang.Object r5 = r5.get(r14)
            java.util.Set r5 = (java.util.Set) r5
            java.util.Iterator r5 = r5.iterator()
        L93:
            boolean r14 = r5.hasNext()
            if (r14 != 0) goto L9a
            goto Lef
        L9a:
            java.lang.Object r14 = r5.next()
            java.lang.String r14 = (java.lang.String) r14
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            java.lang.String r8 = java.lang.String.valueOf(r14)
            r15.<init>(r8)
            r15.append(r7)
            java.lang.String r8 = r15.toString()
            boolean r8 = r4.startsWith(r8)
            if (r8 == 0) goto Led
            int r1 = r14.length()
            int r1 = r1 + r11
            java.lang.String r1 = r4.substring(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = java.lang.String.valueOf(r14)
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r13)
            java.lang.String r1 = r0.encode(r1)
            r3.append(r1)
            r3.append(r12)
            java.lang.String r1 = r0.encode(r2)
            r3.append(r1)
            r3.append(r6)
            java.lang.String r1 = r3.toString()
            return r1
        Led:
            r8 = 0
            goto L93
        Lef:
            java.lang.String r5 = "\\s+"
            java.lang.String[] r4 = r4.split(r5)
            java.util.List r4 = java.util.Arrays.asList(r4)
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            int[] r6 = $SWITCH_TABLE$org$apache$commons$codec1$language$bm$NameType()
            org.apache.commons.codec1.language.bm.NameType r8 = r0.nameType
            int r8 = r8.ordinal()
            r6 = r6[r8]
            if (r6 == r11) goto L157
            if (r6 == r9) goto L153
            r8 = 3
            if (r6 != r8) goto L13d
            java.util.Iterator r6 = r4.iterator()
        L115:
            boolean r8 = r6.hasNext()
            if (r8 != 0) goto L129
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Set<java.lang.String>> r6 = org.apache.commons.codec1.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec1.language.bm.NameType r8 = r0.nameType
            java.lang.Object r6 = r6.get(r8)
            java.util.Collection r6 = (java.util.Collection) r6
            r5.removeAll(r6)
            goto L167
        L129:
            java.lang.Object r8 = r6.next()
            java.lang.String r8 = (java.lang.String) r8
            java.lang.String r9 = "'"
            java.lang.String[] r8 = r8.split(r9)
            int r9 = r8.length
            int r9 = r9 - r11
            r8 = r8[r9]
            r5.add(r8)
            goto L115
        L13d:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Unreachable case: "
            r2.<init>(r3)
            org.apache.commons.codec1.language.bm.NameType r3 = r0.nameType
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L153:
            r5.addAll(r4)
            goto L167
        L157:
            r5.addAll(r4)
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Set<java.lang.String>> r6 = org.apache.commons.codec1.language.bm.PhoneticEngine.NAME_PREFIXES
            org.apache.commons.codec1.language.bm.NameType r8 = r0.nameType
            java.lang.Object r6 = r6.get(r8)
            java.util.Collection r6 = (java.util.Collection) r6
            r5.removeAll(r6)
        L167:
            boolean r6 = r0.concat
            if (r6 == 0) goto L171
            java.lang.String r4 = join(r5, r7)
        L16f:
            r12 = r4
            goto L182
        L171:
            int r6 = r5.size()
            if (r6 != r11) goto L1b2
            java.util.Iterator r4 = r4.iterator()
            java.lang.Object r4 = r4.next()
            java.lang.String r4 = (java.lang.String) r4
            goto L16f
        L182:
            org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r1 = org.apache.commons.codec1.language.bm.PhoneticEngine.PhonemeBuilder.empty(r18)
            r7 = r1
            r8 = 0
        L188:
            int r1 = r12.length()
            if (r8 < r1) goto L19b
            org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r1 = r0.applyFinalRules(r7, r3)
            org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r1 = r0.applyFinalRules(r1, r10)
            java.lang.String r1 = r1.makeString()
            return r1
        L19b:
            org.apache.commons.codec1.language.bm.PhoneticEngine$RulesApplication r1 = new org.apache.commons.codec1.language.bm.PhoneticEngine$RulesApplication
            int r9 = r0.maxPhonemes
            r4 = r1
            r5 = r2
            r6 = r12
            r4.<init>(r5, r6, r7, r8, r9)
            org.apache.commons.codec1.language.bm.PhoneticEngine$RulesApplication r1 = r1.invoke()
            int r8 = r1.getI()
            org.apache.commons.codec1.language.bm.PhoneticEngine$PhonemeBuilder r7 = r1.getPhonemeBuilder()
            goto L188
        L1b2:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Iterator r2 = r5.iterator()
        L1bb:
            boolean r3 = r2.hasNext()
            if (r3 != 0) goto L1c6
            java.lang.String r1 = r1.substring(r11)
            return r1
        L1c6:
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = "-"
            r1.append(r4)
            java.lang.String r3 = r0.encode(r3)
            r1.append(r3)
            goto L1bb
    }

    public org.apache.commons.codec1.language.bm.Lang getLang() {
            r1 = this;
            org.apache.commons.codec1.language.bm.Lang r0 = r1.lang
            return r0
    }

    public int getMaxPhonemes() {
            r1 = this;
            int r0 = r1.maxPhonemes
            return r0
    }

    public org.apache.commons.codec1.language.bm.NameType getNameType() {
            r1 = this;
            org.apache.commons.codec1.language.bm.NameType r0 = r1.nameType
            return r0
    }

    public org.apache.commons.codec1.language.bm.RuleType getRuleType() {
            r1 = this;
            org.apache.commons.codec1.language.bm.RuleType r0 = r1.ruleType
            return r0
    }

    public boolean isConcat() {
            r1 = this;
            boolean r0 = r1.concat
            return r0
    }
}
