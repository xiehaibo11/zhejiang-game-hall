package org.intellij.lang.annotations;

class PrintFormatPattern {
    private static final java.lang.String ARG_INDEX = "(?:\\d+\\$)?";
    private static final java.lang.String CONVERSION = "(?:[tT])?(?:[a-zA-Z%])";
    private static final java.lang.String FLAGS = "(?:[-#+ 0,(<]*)?";
    private static final java.lang.String PRECISION = "(?:\\.\\d+)?";
    static final java.lang.String PRINT_FORMAT = "(?:[^%]|%%|(?:%(?:\\d+\\$)?(?:[-#+ 0,(<]*)?(?:\\d+)?(?:\\.\\d+)?(?:[tT])?(?:[a-zA-Z%])))*";
    private static final java.lang.String TEXT = "[^%]|%%";
    private static final java.lang.String WIDTH = "(?:\\d+)?";

    PrintFormatPattern() {
            r0 = this;
            r0.<init>()
            return
    }
}
