package kotlin.text;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\bÂ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lkotlin/text/ScreenFloatValueRegEx;", "", "()V", "value", "Lkotlin/text/Regex;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class ScreenFloatValueRegEx {
    public static final kotlin.text.ScreenFloatValueRegEx INSTANCE = null;
    public static final kotlin.text.Regex value = null;

    static {
            kotlin.text.ScreenFloatValueRegEx r0 = new kotlin.text.ScreenFloatValueRegEx
            r0.<init>()
            kotlin.text.ScreenFloatValueRegEx.INSTANCE = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 40
            r0.append(r1)
            java.lang.String r1 = "(\\p{Digit}+)"
            r0.append(r1)
            java.lang.String r2 = "(\\.)?("
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "?)("
            r0.append(r2)
            java.lang.String r2 = "[eE][+-]?(\\p{Digit}+)"
            r0.append(r2)
            java.lang.String r3 = ")?)|(\\.("
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = ")("
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = ")?)|(("
            r0.append(r2)
            java.lang.String r2 = "(0[xX](\\p{XDigit}+)(\\.)?)|(0[xX](\\p{XDigit}+)?(\\.)(\\p{XDigit}+))"
            r0.append(r2)
            java.lang.String r2 = ")[pP][+-]?"
            r0.append(r2)
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[\\x00-\\x20]*[+-]?(NaN|Infinity|(("
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = ")[fFdD]?))[\\x00-\\x20]*"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            kotlin.text.Regex r1 = new kotlin.text.Regex
            r1.<init>(r0)
            kotlin.text.ScreenFloatValueRegEx.value = r1
            return
    }

    private ScreenFloatValueRegEx() {
            r0 = this;
            r0.<init>()
            return
    }
}
