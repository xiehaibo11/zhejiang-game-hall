package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000n\n\u0002\u0018\u0002\n\u0002\u0010\u000f\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u0006\n\u0002\b-\n\u0002\u0018\u0002\n\u0002\b\u0017\n\u0002\u0010\u000b\n\u0002\u0010\u0000\n\u0002\b\u001b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000e\n\u0002\b\u0010\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\b\b\u0087@\u0018\u0000 ¤\u00012\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0002¤\u0001B\u0014\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003ø\u0001\u0000¢\u0006\u0004\b\u0004\u0010\u0005J%\u0010D\u001a\u00020\u00002\u0006\u0010E\u001a\u00020\u00032\u0006\u0010F\u001a\u00020\u0003H\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bG\u0010HJ\u001b\u0010I\u001a\u00020\t2\u0006\u0010J\u001a\u00020\u0000H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\bK\u0010LJ\u001e\u0010M\u001a\u00020\u00002\u0006\u0010N\u001a\u00020\u000fH\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bO\u0010PJ\u001e\u0010M\u001a\u00020\u00002\u0006\u0010N\u001a\u00020\tH\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bO\u0010QJ\u001b\u0010M\u001a\u00020\u000f2\u0006\u0010J\u001a\u00020\u0000H\u0086\u0002ø\u0001\u0000¢\u0006\u0004\bR\u0010SJ\u001a\u0010T\u001a\u00020U2\b\u0010J\u001a\u0004\u0018\u00010VHÖ\u0003¢\u0006\u0004\bW\u0010XJ\u0010\u0010Y\u001a\u00020\tHÖ\u0001¢\u0006\u0004\bZ\u0010\rJ\r\u0010[\u001a\u00020U¢\u0006\u0004\b\\\u0010]J\u000f\u0010^\u001a\u00020UH\u0002¢\u0006\u0004\b_\u0010]J\u000f\u0010`\u001a\u00020UH\u0002¢\u0006\u0004\ba\u0010]J\r\u0010b\u001a\u00020U¢\u0006\u0004\bc\u0010]J\r\u0010d\u001a\u00020U¢\u0006\u0004\be\u0010]J\r\u0010f\u001a\u00020U¢\u0006\u0004\bg\u0010]J\u001b\u0010h\u001a\u00020\u00002\u0006\u0010J\u001a\u00020\u0000H\u0086\u0002ø\u0001\u0000¢\u0006\u0004\bi\u0010jJ\u001b\u0010k\u001a\u00020\u00002\u0006\u0010J\u001a\u00020\u0000H\u0086\u0002ø\u0001\u0000¢\u0006\u0004\bl\u0010jJ\u001e\u0010m\u001a\u00020\u00002\u0006\u0010N\u001a\u00020\u000fH\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bn\u0010PJ\u001e\u0010m\u001a\u00020\u00002\u0006\u0010N\u001a\u00020\tH\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bn\u0010QJ\u009d\u0001\u0010o\u001a\u0002Hp\"\u0004\b\u0000\u0010p2u\u0010q\u001aq\u0012\u0013\u0012\u00110\u0003¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(u\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(v\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(w\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(x\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(y\u0012\u0004\u0012\u0002Hp0rH\u0086\bø\u0001\u0002\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0004\bz\u0010{J\u0088\u0001\u0010o\u001a\u0002Hp\"\u0004\b\u0000\u0010p2`\u0010q\u001a\\\u0012\u0013\u0012\u00110\u0003¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(v\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(w\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(x\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(y\u0012\u0004\u0012\u0002Hp0|H\u0086\bø\u0001\u0002\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0004\bz\u0010}Js\u0010o\u001a\u0002Hp\"\u0004\b\u0000\u0010p2K\u0010q\u001aG\u0012\u0013\u0012\u00110\u0003¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(w\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(x\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(y\u0012\u0004\u0012\u0002Hp0~H\u0086\bø\u0001\u0002\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0004\bz\u0010\u007fJ`\u0010o\u001a\u0002Hp\"\u0004\b\u0000\u0010p27\u0010q\u001a3\u0012\u0013\u0012\u00110\u0003¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(x\u0012\u0013\u0012\u00110\t¢\u0006\f\bs\u0012\b\bt\u0012\u0004\b\b(y\u0012\u0004\u0012\u0002Hp0\u0080\u0001H\u0086\bø\u0001\u0002\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0005\bz\u0010\u0081\u0001J\u0019\u0010\u0082\u0001\u001a\u00020\u000f2\u0007\u0010\u0083\u0001\u001a\u00020=¢\u0006\u0006\b\u0084\u0001\u0010\u0085\u0001J\u0019\u0010\u0086\u0001\u001a\u00020\t2\u0007\u0010\u0083\u0001\u001a\u00020=¢\u0006\u0006\b\u0087\u0001\u0010\u0088\u0001J\u0011\u0010\u0089\u0001\u001a\u00030\u008a\u0001¢\u0006\u0006\b\u008b\u0001\u0010\u008c\u0001J\u0019\u0010\u008d\u0001\u001a\u00020\u00032\u0007\u0010\u0083\u0001\u001a\u00020=¢\u0006\u0006\b\u008e\u0001\u0010\u008f\u0001J\u0011\u0010\u0090\u0001\u001a\u00020\u0003H\u0007¢\u0006\u0005\b\u0091\u0001\u0010\u0005J\u0011\u0010\u0092\u0001\u001a\u00020\u0003H\u0007¢\u0006\u0005\b\u0093\u0001\u0010\u0005J\u0013\u0010\u0094\u0001\u001a\u00030\u008a\u0001H\u0016¢\u0006\u0006\b\u0095\u0001\u0010\u008c\u0001J%\u0010\u0094\u0001\u001a\u00030\u008a\u00012\u0007\u0010\u0083\u0001\u001a\u00020=2\t\b\u0002\u0010\u0096\u0001\u001a\u00020\t¢\u0006\u0006\b\u0095\u0001\u0010\u0097\u0001J\u0018\u0010\u0098\u0001\u001a\u00020\u0000H\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0005\b\u0099\u0001\u0010\u0005JK\u0010\u009a\u0001\u001a\u00030\u009b\u0001*\b0\u009c\u0001j\u0003`\u009d\u00012\u0007\u0010\u009e\u0001\u001a\u00020\t2\u0007\u0010\u009f\u0001\u001a\u00020\t2\u0007\u0010 \u0001\u001a\u00020\t2\b\u0010\u0083\u0001\u001a\u00030\u008a\u00012\u0007\u0010¡\u0001\u001a\u00020UH\u0002¢\u0006\u0006\b¢\u0001\u0010£\u0001R\u0017\u0010\u0006\u001a\u00020\u00008Fø\u0001\u0000ø\u0001\u0001¢\u0006\u0006\u001a\u0004\b\u0007\u0010\u0005R\u001a\u0010\b\u001a\u00020\t8@X\u0081\u0004¢\u0006\f\u0012\u0004\b\n\u0010\u000b\u001a\u0004\b\f\u0010\rR\u001a\u0010\u000e\u001a\u00020\u000f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u0010\u0010\u000b\u001a\u0004\b\u0011\u0010\u0012R\u001a\u0010\u0013\u001a\u00020\u000f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u0014\u0010\u000b\u001a\u0004\b\u0015\u0010\u0012R\u001a\u0010\u0016\u001a\u00020\u000f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u0017\u0010\u000b\u001a\u0004\b\u0018\u0010\u0012R\u001a\u0010\u0019\u001a\u00020\u000f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u001a\u0010\u000b\u001a\u0004\b\u001b\u0010\u0012R\u001a\u0010\u001c\u001a\u00020\u000f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u001d\u0010\u000b\u001a\u0004\b\u001e\u0010\u0012R\u001a\u0010\u001f\u001a\u00020\u000f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b \u0010\u000b\u001a\u0004\b!\u0010\u0012R\u001a\u0010\"\u001a\u00020\u000f8FX\u0087\u0004¢\u0006\f\u0012\u0004\b#\u0010\u000b\u001a\u0004\b$\u0010\u0012R\u0011\u0010%\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b&\u0010\u0005R\u0011\u0010'\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b(\u0010\u0005R\u0011\u0010)\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b*\u0010\u0005R\u0011\u0010+\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b,\u0010\u0005R\u0011\u0010-\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b.\u0010\u0005R\u0011\u0010/\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b0\u0010\u0005R\u0011\u00101\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b2\u0010\u0005R\u001a\u00103\u001a\u00020\t8@X\u0081\u0004¢\u0006\f\u0012\u0004\b4\u0010\u000b\u001a\u0004\b5\u0010\rR\u001a\u00106\u001a\u00020\t8@X\u0081\u0004¢\u0006\f\u0012\u0004\b7\u0010\u000b\u001a\u0004\b8\u0010\rR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u00109\u001a\u00020\t8@X\u0081\u0004¢\u0006\f\u0012\u0004\b:\u0010\u000b\u001a\u0004\b;\u0010\rR\u0014\u0010<\u001a\u00020=8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b>\u0010?R\u0015\u0010@\u001a\u00020\t8Â\u0002X\u0082\u0004¢\u0006\u0006\u001a\u0004\bA\u0010\rR\u0014\u0010B\u001a\u00020\u00038BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bC\u0010\u0005\u0088\u0001\u0002\u0092\u0001\u00020\u0003ø\u0001\u0000\u0082\u0002\u000f\n\u0002\b\u0019\n\u0002\b!\n\u0005\b\u009920\u0001¨\u0006¥\u0001"}, d2 = {"Lkotlin/time/Duration;", "", "rawValue", "", "constructor-impl", "(J)J", "absoluteValue", "getAbsoluteValue-UwyO8pc", "hoursComponent", "", "getHoursComponent$annotations", "()V", "getHoursComponent-impl", "(J)I", "inDays", "", "getInDays$annotations", "getInDays-impl", "(J)D", "inHours", "getInHours$annotations", "getInHours-impl", "inMicroseconds", "getInMicroseconds$annotations", "getInMicroseconds-impl", "inMilliseconds", "getInMilliseconds$annotations", "getInMilliseconds-impl", "inMinutes", "getInMinutes$annotations", "getInMinutes-impl", "inNanoseconds", "getInNanoseconds$annotations", "getInNanoseconds-impl", "inSeconds", "getInSeconds$annotations", "getInSeconds-impl", "inWholeDays", "getInWholeDays-impl", "inWholeHours", "getInWholeHours-impl", "inWholeMicroseconds", "getInWholeMicroseconds-impl", "inWholeMilliseconds", "getInWholeMilliseconds-impl", "inWholeMinutes", "getInWholeMinutes-impl", "inWholeNanoseconds", "getInWholeNanoseconds-impl", "inWholeSeconds", "getInWholeSeconds-impl", "minutesComponent", "getMinutesComponent$annotations", "getMinutesComponent-impl", "nanosecondsComponent", "getNanosecondsComponent$annotations", "getNanosecondsComponent-impl", "secondsComponent", "getSecondsComponent$annotations", "getSecondsComponent-impl", "storageUnit", "Lkotlin/time/DurationUnit;", "getStorageUnit-impl", "(J)Lkotlin/time/DurationUnit;", "unitDiscriminator", "getUnitDiscriminator-impl", "value", "getValue-impl", "addValuesMixedRanges", "thisMillis", "otherNanos", "addValuesMixedRanges-UwyO8pc", "(JJJ)J", "compareTo", "other", "compareTo-LRDsOJo", "(JJ)I", "div", "scale", "div-UwyO8pc", "(JD)J", "(JI)J", "div-LRDsOJo", "(JJ)D", "equals", "", "", "equals-impl", "(JLjava/lang/Object;)Z", "hashCode", "hashCode-impl", "isFinite", "isFinite-impl", "(J)Z", "isInMillis", "isInMillis-impl", "isInNanos", "isInNanos-impl", "isInfinite", "isInfinite-impl", "isNegative", "isNegative-impl", "isPositive", "isPositive-impl", "minus", "minus-LRDsOJo", "(JJ)J", "plus", "plus-LRDsOJo", "times", "times-UwyO8pc", "toComponents", "T", "action", "Lkotlin/Function5;", "Lkotlin/ParameterName;", "name", "days", "hours", "minutes", "seconds", "nanoseconds", "toComponents-impl", "(JLkotlin/jvm/functions/Function5;)Ljava/lang/Object;", "Lkotlin/Function4;", "(JLkotlin/jvm/functions/Function4;)Ljava/lang/Object;", "Lkotlin/Function3;", "(JLkotlin/jvm/functions/Function3;)Ljava/lang/Object;", "Lkotlin/Function2;", "(JLkotlin/jvm/functions/Function2;)Ljava/lang/Object;", "toDouble", "unit", "toDouble-impl", "(JLkotlin/time/DurationUnit;)D", "toInt", "toInt-impl", "(JLkotlin/time/DurationUnit;)I", "toIsoString", "", "toIsoString-impl", "(J)Ljava/lang/String;", "toLong", "toLong-impl", "(JLkotlin/time/DurationUnit;)J", "toLongMilliseconds", "toLongMilliseconds-impl", "toLongNanoseconds", "toLongNanoseconds-impl", "toString", "toString-impl", "decimals", "(JLkotlin/time/DurationUnit;I)Ljava/lang/String;", "unaryMinus", "unaryMinus-UwyO8pc", "appendFractional", "", "Ljava/lang/StringBuilder;", "Lkotlin/text/StringBuilder;", "whole", "fractional", "fractionalSize", "isoZeroes", "appendFractional-impl", "(JLjava/lang/StringBuilder;IIILjava/lang/String;Z)V", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
@kotlin.jvm.JvmInline
public final class Duration implements java.lang.Comparable<kotlin.time.Duration> {
    public static final kotlin.time.Duration.Companion Companion = null;
    private static final long INFINITE = 0;
    private static final long NEG_INFINITE = 0;
    private static final long ZERO = 0;
    private final long rawValue;

    @kotlin.Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u0006\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0017\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u000e\n\u0002\b\n\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J \u0010*\u001a\u00020\r2\u0006\u0010+\u001a\u00020\r2\u0006\u0010,\u001a\u00020-2\u0006\u0010.\u001a\u00020-H\u0007J\u001d\u0010\f\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\rH\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b/\u0010\u0011J\u001d\u0010\f\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0012H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b/\u0010\u0014J\u001d\u0010\f\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0015H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b/\u0010\u0017J\u001d\u0010\u0018\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\rH\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b0\u0010\u0011J\u001d\u0010\u0018\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0012H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b0\u0010\u0014J\u001d\u0010\u0018\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0015H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b0\u0010\u0017J\u001d\u0010\u001b\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\rH\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b1\u0010\u0011J\u001d\u0010\u001b\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0012H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b1\u0010\u0014J\u001d\u0010\u001b\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0015H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b1\u0010\u0017J\u001d\u0010\u001e\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\rH\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b2\u0010\u0011J\u001d\u0010\u001e\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0012H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b2\u0010\u0014J\u001d\u0010\u001e\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0015H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b2\u0010\u0017J\u001d\u0010!\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\rH\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b3\u0010\u0011J\u001d\u0010!\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0012H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b3\u0010\u0014J\u001d\u0010!\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0015H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b3\u0010\u0017J\u001d\u0010$\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\rH\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b4\u0010\u0011J\u001d\u0010$\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0012H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b4\u0010\u0014J\u001d\u0010$\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0015H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b4\u0010\u0017J\u001b\u00105\u001a\u00020\u00042\u0006\u0010+\u001a\u000206ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b7\u00108J\u001b\u00109\u001a\u00020\u00042\u0006\u0010+\u001a\u000206ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b:\u00108J\u001b\u0010;\u001a\u0004\u0018\u00010\u00042\u0006\u0010+\u001a\u000206ø\u0001\u0000ø\u0001\u0001¢\u0006\u0002\b<J\u001b\u0010=\u001a\u0004\u0018\u00010\u00042\u0006\u0010+\u001a\u000206ø\u0001\u0000ø\u0001\u0001¢\u0006\u0002\b>J\u001d\u0010'\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\rH\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b?\u0010\u0011J\u001d\u0010'\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0012H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b?\u0010\u0014J\u001d\u0010'\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0015H\u0007ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b?\u0010\u0017R\u0019\u0010\u0003\u001a\u00020\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u0007\u001a\u0004\b\u0005\u0010\u0006R\u001c\u0010\b\u001a\u00020\u0004X\u0080\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u0007\u001a\u0004\b\t\u0010\u0006R\u0019\u0010\n\u001a\u00020\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u0007\u001a\u0004\b\u000b\u0010\u0006R%\u0010\f\u001a\u00020\u0004*\u00020\r8Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u000e\u0010\u000f\u001a\u0004\b\u0010\u0010\u0011R%\u0010\f\u001a\u00020\u0004*\u00020\u00128Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u000e\u0010\u0013\u001a\u0004\b\u0010\u0010\u0014R%\u0010\f\u001a\u00020\u0004*\u00020\u00158Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u000e\u0010\u0016\u001a\u0004\b\u0010\u0010\u0017R%\u0010\u0018\u001a\u00020\u0004*\u00020\r8Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u0019\u0010\u000f\u001a\u0004\b\u001a\u0010\u0011R%\u0010\u0018\u001a\u00020\u0004*\u00020\u00128Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u0019\u0010\u0013\u001a\u0004\b\u001a\u0010\u0014R%\u0010\u0018\u001a\u00020\u0004*\u00020\u00158Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u0019\u0010\u0016\u001a\u0004\b\u001a\u0010\u0017R%\u0010\u001b\u001a\u00020\u0004*\u00020\r8Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u001c\u0010\u000f\u001a\u0004\b\u001d\u0010\u0011R%\u0010\u001b\u001a\u00020\u0004*\u00020\u00128Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u001c\u0010\u0013\u001a\u0004\b\u001d\u0010\u0014R%\u0010\u001b\u001a\u00020\u0004*\u00020\u00158Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u001c\u0010\u0016\u001a\u0004\b\u001d\u0010\u0017R%\u0010\u001e\u001a\u00020\u0004*\u00020\r8Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u001f\u0010\u000f\u001a\u0004\b \u0010\u0011R%\u0010\u001e\u001a\u00020\u0004*\u00020\u00128Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u001f\u0010\u0013\u001a\u0004\b \u0010\u0014R%\u0010\u001e\u001a\u00020\u0004*\u00020\u00158Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\u001f\u0010\u0016\u001a\u0004\b \u0010\u0017R%\u0010!\u001a\u00020\u0004*\u00020\r8Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\"\u0010\u000f\u001a\u0004\b#\u0010\u0011R%\u0010!\u001a\u00020\u0004*\u00020\u00128Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\"\u0010\u0013\u001a\u0004\b#\u0010\u0014R%\u0010!\u001a\u00020\u0004*\u00020\u00158Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b\"\u0010\u0016\u001a\u0004\b#\u0010\u0017R%\u0010$\u001a\u00020\u0004*\u00020\r8Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b%\u0010\u000f\u001a\u0004\b&\u0010\u0011R%\u0010$\u001a\u00020\u0004*\u00020\u00128Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b%\u0010\u0013\u001a\u0004\b&\u0010\u0014R%\u0010$\u001a\u00020\u0004*\u00020\u00158Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b%\u0010\u0016\u001a\u0004\b&\u0010\u0017R%\u0010'\u001a\u00020\u0004*\u00020\r8Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b(\u0010\u000f\u001a\u0004\b)\u0010\u0011R%\u0010'\u001a\u00020\u0004*\u00020\u00128Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b(\u0010\u0013\u001a\u0004\b)\u0010\u0014R%\u0010'\u001a\u00020\u0004*\u00020\u00158Æ\u0002X\u0087\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\f\u0012\u0004\b(\u0010\u0016\u001a\u0004\b)\u0010\u0017\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006@"}, d2 = {"Lkotlin/time/Duration$Companion;", "", "()V", "INFINITE", "Lkotlin/time/Duration;", "getINFINITE-UwyO8pc", "()J", "J", "NEG_INFINITE", "getNEG_INFINITE-UwyO8pc$kotlin_stdlib", "ZERO", "getZERO-UwyO8pc", "days", "", "getDays-UwyO8pc$annotations", "(D)V", "getDays-UwyO8pc", "(D)J", "", "(I)V", "(I)J", "", "(J)V", "(J)J", "hours", "getHours-UwyO8pc$annotations", "getHours-UwyO8pc", "microseconds", "getMicroseconds-UwyO8pc$annotations", "getMicroseconds-UwyO8pc", "milliseconds", "getMilliseconds-UwyO8pc$annotations", "getMilliseconds-UwyO8pc", "minutes", "getMinutes-UwyO8pc$annotations", "getMinutes-UwyO8pc", "nanoseconds", "getNanoseconds-UwyO8pc$annotations", "getNanoseconds-UwyO8pc", "seconds", "getSeconds-UwyO8pc$annotations", "getSeconds-UwyO8pc", "convert", "value", "sourceUnit", "Lkotlin/time/DurationUnit;", "targetUnit", "days-UwyO8pc", "hours-UwyO8pc", "microseconds-UwyO8pc", "milliseconds-UwyO8pc", "minutes-UwyO8pc", "nanoseconds-UwyO8pc", "parse", "", "parse-UwyO8pc", "(Ljava/lang/String;)J", "parseIsoString", "parseIsoString-UwyO8pc", "parseIsoStringOrNull", "parseIsoStringOrNull-FghU774", "parseOrNull", "parseOrNull-FghU774", "seconds-UwyO8pc", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private final long getDays-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        private final long getDays-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        private final long getDays-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public static void getDays-UwyO8pc$annotations(double r0) {
                return
        }

        public static void getDays-UwyO8pc$annotations(int r0) {
                return
        }

        public static void getDays-UwyO8pc$annotations(long r0) {
                return
        }

        private final long getHours-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        private final long getHours-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        private final long getHours-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public static void getHours-UwyO8pc$annotations(double r0) {
                return
        }

        public static void getHours-UwyO8pc$annotations(int r0) {
                return
        }

        public static void getHours-UwyO8pc$annotations(long r0) {
                return
        }

        private final long getMicroseconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        private final long getMicroseconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        private final long getMicroseconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public static void getMicroseconds-UwyO8pc$annotations(double r0) {
                return
        }

        public static void getMicroseconds-UwyO8pc$annotations(int r0) {
                return
        }

        public static void getMicroseconds-UwyO8pc$annotations(long r0) {
                return
        }

        private final long getMilliseconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        private final long getMilliseconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        private final long getMilliseconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public static void getMilliseconds-UwyO8pc$annotations(double r0) {
                return
        }

        public static void getMilliseconds-UwyO8pc$annotations(int r0) {
                return
        }

        public static void getMilliseconds-UwyO8pc$annotations(long r0) {
                return
        }

        private final long getMinutes-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        private final long getMinutes-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        private final long getMinutes-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public static void getMinutes-UwyO8pc$annotations(double r0) {
                return
        }

        public static void getMinutes-UwyO8pc$annotations(int r0) {
                return
        }

        public static void getMinutes-UwyO8pc$annotations(long r0) {
                return
        }

        private final long getNanoseconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        private final long getNanoseconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        private final long getNanoseconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public static void getNanoseconds-UwyO8pc$annotations(double r0) {
                return
        }

        public static void getNanoseconds-UwyO8pc$annotations(int r0) {
                return
        }

        public static void getNanoseconds-UwyO8pc$annotations(long r0) {
                return
        }

        private final long getSeconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        private final long getSeconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        private final long getSeconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public static void getSeconds-UwyO8pc$annotations(double r0) {
                return
        }

        public static void getSeconds-UwyO8pc$annotations(int r0) {
                return
        }

        public static void getSeconds-UwyO8pc$annotations(long r0) {
                return
        }

        public final double convert(double r2, kotlin.time.DurationUnit r4, kotlin.time.DurationUnit r5) {
                r1 = this;
                java.lang.String r0 = "sourceUnit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                java.lang.String r0 = "targetUnit"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                double r2 = kotlin.time.DurationUnitKt.convertDurationUnit(r2, r4, r5)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Double.days' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.days", imports = {"kotlin.time.Duration.Companion.days"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long days-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Int.days' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.days", imports = {"kotlin.time.Duration.Companion.days"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long days-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Long.days' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.days", imports = {"kotlin.time.Duration.Companion.days"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long days-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public final long getINFINITE-UwyO8pc() {
                r2 = this;
                long r0 = kotlin.time.Duration.access$getINFINITE$cp()
                return r0
        }

        public final long getNEG_INFINITE-UwyO8pc$kotlin_stdlib() {
                r2 = this;
                long r0 = kotlin.time.Duration.access$getNEG_INFINITE$cp()
                return r0
        }

        public final long getZERO-UwyO8pc() {
                r2 = this;
                long r0 = kotlin.time.Duration.access$getZERO$cp()
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Double.hours' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.hours", imports = {"kotlin.time.Duration.Companion.hours"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long hours-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Int.hours' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.hours", imports = {"kotlin.time.Duration.Companion.hours"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long hours-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Long.hours' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.hours", imports = {"kotlin.time.Duration.Companion.hours"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long hours-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Double.microseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.microseconds", imports = {"kotlin.time.Duration.Companion.microseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long microseconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Int.microseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.microseconds", imports = {"kotlin.time.Duration.Companion.microseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long microseconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Long.microseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.microseconds", imports = {"kotlin.time.Duration.Companion.microseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long microseconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Double.milliseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.milliseconds", imports = {"kotlin.time.Duration.Companion.milliseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long milliseconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Int.milliseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.milliseconds", imports = {"kotlin.time.Duration.Companion.milliseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long milliseconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Long.milliseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.milliseconds", imports = {"kotlin.time.Duration.Companion.milliseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long milliseconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Double.minutes' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.minutes", imports = {"kotlin.time.Duration.Companion.minutes"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long minutes-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Int.minutes' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.minutes", imports = {"kotlin.time.Duration.Companion.minutes"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long minutes-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Long.minutes' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.minutes", imports = {"kotlin.time.Duration.Companion.minutes"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long minutes-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Double.nanoseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.nanoseconds", imports = {"kotlin.time.Duration.Companion.nanoseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long nanoseconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Int.nanoseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.nanoseconds", imports = {"kotlin.time.Duration.Companion.nanoseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long nanoseconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Long.nanoseconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.nanoseconds", imports = {"kotlin.time.Duration.Companion.nanoseconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long nanoseconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        public final long parse-UwyO8pc(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = 0
                long r0 = kotlin.time.DurationKt.access$parseDuration(r5, r0)     // Catch: java.lang.IllegalArgumentException -> Lb
                return r0
            Lb:
                r0 = move-exception
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Invalid duration string format: '"
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = "'."
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                r1.<init>(r5, r0)
                throw r1
        }

        public final long parseIsoString-UwyO8pc(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = 1
                long r0 = kotlin.time.DurationKt.access$parseDuration(r5, r0)     // Catch: java.lang.IllegalArgumentException -> Lb
                return r0
            Lb:
                r0 = move-exception
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Invalid ISO duration string format: '"
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = "'."
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                r1.<init>(r5, r0)
                throw r1
        }

        public final kotlin.time.Duration parseIsoStringOrNull-FghU774(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = 1
                long r0 = kotlin.time.DurationKt.access$parseDuration(r3, r0)     // Catch: java.lang.IllegalArgumentException -> Lf
                kotlin.time.Duration r3 = kotlin.time.Duration.box-impl(r0)     // Catch: java.lang.IllegalArgumentException -> Lf
                goto L12
            Lf:
                r3 = 0
                kotlin.time.Duration r3 = (kotlin.time.Duration) r3
            L12:
                return r3
        }

        public final kotlin.time.Duration parseOrNull-FghU774(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = 0
                long r0 = kotlin.time.DurationKt.access$parseDuration(r3, r0)     // Catch: java.lang.IllegalArgumentException -> Lf
                kotlin.time.Duration r3 = kotlin.time.Duration.box-impl(r0)     // Catch: java.lang.IllegalArgumentException -> Lf
                goto L12
            Lf:
                r3 = 0
                kotlin.time.Duration r3 = (kotlin.time.Duration) r3
            L12:
                return r3
        }

        @kotlin.Deprecated(message = "Use 'Double.seconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.seconds", imports = {"kotlin.time.Duration.Companion.seconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long seconds-UwyO8pc(double r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }

        @kotlin.Deprecated(message = "Use 'Int.seconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.seconds", imports = {"kotlin.time.Duration.Companion.seconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long seconds-UwyO8pc(int r3) {
                r2 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
                long r0 = kotlin.time.DurationKt.toDuration(r3, r0)
                return r0
        }

        @kotlin.Deprecated(message = "Use 'Long.seconds' extension property from Duration.Companion instead.", replaceWith = @kotlin.ReplaceWith(expression = "value.seconds", imports = {"kotlin.time.Duration.Companion.seconds"}))
        @kotlin.DeprecatedSinceKotlin(warningSince = "1.6")
        public final long seconds-UwyO8pc(long r2) {
                r1 = this;
                kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
                long r2 = kotlin.time.DurationKt.toDuration(r2, r0)
                return r2
        }
    }

    static {
            kotlin.time.Duration$Companion r0 = new kotlin.time.Duration$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.time.Duration.Companion = r0
            r0 = 0
            long r0 = constructor-impl(r0)
            kotlin.time.Duration.ZERO = r0
            r0 = 4611686018427387903(0x3fffffffffffffff, double:1.9999999999999998)
            long r0 = kotlin.time.DurationKt.access$durationOfMillis(r0)
            kotlin.time.Duration.INFINITE = r0
            r0 = -4611686018427387903(0xc000000000000001, double:-2.0000000000000004)
            long r0 = kotlin.time.DurationKt.access$durationOfMillis(r0)
            kotlin.time.Duration.NEG_INFINITE = r0
            return
    }

    private Duration(long r1) {
            r0 = this;
            r0.<init>()
            r0.rawValue = r1
            return
    }

    public static final long access$getINFINITE$cp() {
            long r0 = kotlin.time.Duration.INFINITE
            return r0
    }

    public static final long access$getNEG_INFINITE$cp() {
            long r0 = kotlin.time.Duration.NEG_INFINITE
            return r0
    }

    public static final long access$getZERO$cp() {
            long r0 = kotlin.time.Duration.ZERO
            return r0
    }

    private static final long addValuesMixedRanges-UwyO8pc(long r6, long r8, long r10) {
            long r6 = kotlin.time.DurationKt.access$nanosToMillis(r10)
            long r0 = r8 + r6
            r8 = -4611686018426(0xfffffbce4217d286, double:NaN)
            int r8 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r9 = 0
            if (r8 > 0) goto L1a
            r2 = 4611686018427(0x431bde82d7b, double:2.278475631111E-311)
            int r8 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r8 >= 0) goto L1a
            r9 = 1
        L1a:
            if (r9 == 0) goto L2b
            long r6 = kotlin.time.DurationKt.access$millisToNanos(r6)
            long r10 = r10 - r6
            long r6 = kotlin.time.DurationKt.access$millisToNanos(r0)
            long r6 = r6 + r10
            long r6 = kotlin.time.DurationKt.access$durationOfNanos(r6)
            goto L3d
        L2b:
            r2 = -4611686018427387903(0xc000000000000001, double:-2.0000000000000004)
            r4 = 4611686018427387903(0x3fffffffffffffff, double:1.9999999999999998)
            long r6 = kotlin.ranges.RangesKt.coerceIn(r0, r2, r4)
            long r6 = kotlin.time.DurationKt.access$durationOfMillis(r6)
        L3d:
            return r6
    }

    private static final void appendFractional-impl(long r3, java.lang.StringBuilder r5, int r6, int r7, int r8, java.lang.String r9, boolean r10) {
            r5.append(r6)
            if (r7 == 0) goto L4d
            r3 = 46
            r5.append(r3)
            java.lang.String r3 = java.lang.String.valueOf(r7)
            r4 = 48
            java.lang.String r3 = kotlin.text.StringsKt.padStart(r3, r8, r4)
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            int r6 = r3.length()
            r7 = -1
            int r6 = r6 + r7
            r8 = 1
            r0 = 0
            if (r6 < 0) goto L34
        L20:
            int r1 = r6 + (-1)
            char r2 = r3.charAt(r6)
            if (r2 == r4) goto L2a
            r2 = r8
            goto L2b
        L2a:
            r2 = r0
        L2b:
            if (r2 == 0) goto L2f
            r7 = r6
            goto L34
        L2f:
            if (r1 >= 0) goto L32
            goto L34
        L32:
            r6 = r1
            goto L20
        L34:
            int r7 = r7 + r8
            java.lang.String r4 = "this.append(value, startIndex, endIndex)"
            r6 = 3
            if (r10 != 0) goto L43
            if (r7 >= r6) goto L43
            r5.append(r3, r0, r7)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r4)
            goto L4d
        L43:
            int r7 = r7 + 2
            int r7 = r7 / r6
            int r7 = r7 * r6
            r5.append(r3, r0, r7)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r4)
        L4d:
            r5.append(r9)
            return
    }

    public static final kotlin.time.Duration box-impl(long r1) {
            kotlin.time.Duration r0 = new kotlin.time.Duration
            r0.<init>(r1)
            return r0
    }

    public static int compareTo-LRDsOJo(long r4, long r6) {
            long r0 = r4 ^ r6
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L1d
            int r0 = (int) r0
            r0 = r0 & 1
            if (r0 != 0) goto Le
            goto L1d
        Le:
            int r0 = (int) r4
            r0 = r0 & 1
            int r6 = (int) r6
            r6 = r6 & 1
            int r0 = r0 - r6
            boolean r4 = isNegative-impl(r4)
            if (r4 == 0) goto L1c
            int r0 = -r0
        L1c:
            return r0
        L1d:
            int r4 = kotlin.jvm.internal.Intrinsics.compare(r4, r6)
            return r4
    }

    public static long constructor-impl(long r7) {
            boolean r0 = kotlin.time.DurationJvmKt.getDurationAssertionsEnabled()
            if (r0 == 0) goto Lae
            boolean r0 = isInNanos-impl(r7)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L45
            long r3 = getValue-impl(r7)
            r5 = -4611686018426999999(0xc00000000005eb41, double:-2.0000000001722644)
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 > 0) goto L25
            r5 = 4611686018427000000(0x3ffffffffffa14c0, double:1.999999999913868)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 >= 0) goto L25
            goto L26
        L25:
            r1 = r2
        L26:
            if (r1 == 0) goto L2a
            goto Lae
        L2a:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r7 = getValue-impl(r7)
            r1.append(r7)
            java.lang.String r7 = " ns is out of nanoseconds range"
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
        L45:
            long r3 = getValue-impl(r7)
            r5 = -4611686018427387903(0xc000000000000001, double:-2.0000000000000004)
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 > 0) goto L5a
            r5 = 4611686018427387904(0x4000000000000000, double:2.0)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 >= 0) goto L5a
            r0 = r1
            goto L5b
        L5a:
            r0 = r2
        L5b:
            if (r0 == 0) goto L93
            long r3 = getValue-impl(r7)
            r5 = -4611686018426(0xfffffbce4217d286, double:NaN)
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 > 0) goto L74
            r5 = 4611686018427(0x431bde82d7b, double:2.278475631111E-311)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 >= 0) goto L74
            goto L75
        L74:
            r1 = r2
        L75:
            if (r1 != 0) goto L78
            goto Lae
        L78:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r7 = getValue-impl(r7)
            r1.append(r7)
            java.lang.String r7 = " ms is denormalized"
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
        L93:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r7 = getValue-impl(r7)
            r1.append(r7)
            java.lang.String r7 = " ms is out of milliseconds range"
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
        Lae:
            return r7
    }

    public static final double div-LRDsOJo(long r2, long r4) {
            kotlin.time.DurationUnit r0 = getStorageUnit-impl(r2)
            java.lang.Comparable r0 = (java.lang.Comparable) r0
            kotlin.time.DurationUnit r1 = getStorageUnit-impl(r4)
            java.lang.Comparable r1 = (java.lang.Comparable) r1
            java.lang.Comparable r0 = kotlin.comparisons.ComparisonsKt.maxOf(r0, r1)
            kotlin.time.DurationUnit r0 = (kotlin.time.DurationUnit) r0
            double r2 = toDouble-impl(r2, r0)
            double r4 = toDouble-impl(r4, r0)
            double r2 = r2 / r4
            return r2
    }

    public static final long div-UwyO8pc(long r3, double r5) {
            int r0 = kotlin.math.MathKt.roundToInt(r5)
            double r1 = (double) r0
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 != 0) goto Lb
            r1 = 1
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 == 0) goto L15
            if (r0 == 0) goto L15
            long r3 = div-UwyO8pc(r3, r0)
            return r3
        L15:
            kotlin.time.DurationUnit r0 = getStorageUnit-impl(r3)
            double r3 = toDouble-impl(r3, r0)
            double r3 = r3 / r5
            long r3 = kotlin.time.DurationKt.toDuration(r3, r0)
            return r3
    }

    public static final long div-UwyO8pc(long r7, int r9) {
            if (r9 != 0) goto L1c
            boolean r9 = isPositive-impl(r7)
            if (r9 == 0) goto Lb
            long r7 = kotlin.time.Duration.INFINITE
            goto L13
        Lb:
            boolean r7 = isNegative-impl(r7)
            if (r7 == 0) goto L14
            long r7 = kotlin.time.Duration.NEG_INFINITE
        L13:
            return r7
        L14:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Dividing zero duration by zero yields an undefined result."
            r7.<init>(r8)
            throw r7
        L1c:
            boolean r0 = isInNanos-impl(r7)
            if (r0 == 0) goto L2d
            long r7 = getValue-impl(r7)
            long r0 = (long) r9
            long r7 = r7 / r0
            long r7 = kotlin.time.DurationKt.access$durationOfNanos(r7)
            return r7
        L2d:
            boolean r0 = isInfinite-impl(r7)
            if (r0 == 0) goto L3c
            int r9 = kotlin.math.MathKt.getSign(r9)
            long r7 = times-UwyO8pc(r7, r9)
            return r7
        L3c:
            long r0 = getValue-impl(r7)
            long r2 = (long) r9
            long r0 = r0 / r2
            r4 = -4611686018426(0xfffffbce4217d286, double:NaN)
            int r9 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r4 = 0
            if (r9 > 0) goto L56
            r5 = 4611686018427(0x431bde82d7b, double:2.278475631111E-311)
            int r9 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r9 >= 0) goto L56
            r4 = 1
        L56:
            if (r4 == 0) goto L6e
            long r7 = getValue-impl(r7)
            long r4 = r0 * r2
            long r7 = r7 - r4
            long r7 = kotlin.time.DurationKt.access$millisToNanos(r7)
            long r7 = r7 / r2
            long r0 = kotlin.time.DurationKt.access$millisToNanos(r0)
            long r0 = r0 + r7
            long r7 = kotlin.time.DurationKt.access$durationOfNanos(r0)
            return r7
        L6e:
            long r7 = kotlin.time.DurationKt.access$durationOfMillis(r0)
            return r7
    }

    public static boolean equals-impl(long r4, java.lang.Object r6) {
            boolean r0 = r6 instanceof kotlin.time.Duration
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            kotlin.time.Duration r6 = (kotlin.time.Duration) r6
            long r2 = r6.unbox-impl()
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 == 0) goto L11
            return r1
        L11:
            r4 = 1
            return r4
    }

    public static final boolean equals-impl0(long r0, long r2) {
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public static final long getAbsoluteValue-UwyO8pc(long r1) {
            boolean r0 = isNegative-impl(r1)
            if (r0 == 0) goto La
            long r1 = unaryMinus-UwyO8pc(r1)
        La:
            return r1
    }

    public static void getHoursComponent$annotations() {
            return
    }

    public static final int getHoursComponent-impl(long r2) {
            boolean r0 = isInfinite-impl(r2)
            if (r0 == 0) goto L8
            r2 = 0
            goto L11
        L8:
            long r2 = getInWholeHours-impl(r2)
            r0 = 24
            long r0 = (long) r0
            long r2 = r2 % r0
            int r2 = (int) r2
        L11:
            return r2
    }

    @kotlin.Deprecated(message = "Use inWholeDays property instead or convert toDouble(DAYS) if a double value is required.", replaceWith = @kotlin.ReplaceWith(expression = "toDouble(DurationUnit.DAYS)", imports = {}))
    public static void getInDays$annotations() {
            return
    }

    public static final double getInDays-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
            double r1 = toDouble-impl(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use inWholeHours property instead or convert toDouble(HOURS) if a double value is required.", replaceWith = @kotlin.ReplaceWith(expression = "toDouble(DurationUnit.HOURS)", imports = {}))
    public static void getInHours$annotations() {
            return
    }

    public static final double getInHours-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
            double r1 = toDouble-impl(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use inWholeMicroseconds property instead or convert toDouble(MICROSECONDS) if a double value is required.", replaceWith = @kotlin.ReplaceWith(expression = "toDouble(DurationUnit.MICROSECONDS)", imports = {}))
    public static void getInMicroseconds$annotations() {
            return
    }

    public static final double getInMicroseconds-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
            double r1 = toDouble-impl(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use inWholeMilliseconds property instead or convert toDouble(MILLISECONDS) if a double value is required.", replaceWith = @kotlin.ReplaceWith(expression = "toDouble(DurationUnit.MILLISECONDS)", imports = {}))
    public static void getInMilliseconds$annotations() {
            return
    }

    public static final double getInMilliseconds-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
            double r1 = toDouble-impl(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use inWholeMinutes property instead or convert toDouble(MINUTES) if a double value is required.", replaceWith = @kotlin.ReplaceWith(expression = "toDouble(DurationUnit.MINUTES)", imports = {}))
    public static void getInMinutes$annotations() {
            return
    }

    public static final double getInMinutes-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
            double r1 = toDouble-impl(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use inWholeNanoseconds property instead or convert toDouble(NANOSECONDS) if a double value is required.", replaceWith = @kotlin.ReplaceWith(expression = "toDouble(DurationUnit.NANOSECONDS)", imports = {}))
    public static void getInNanoseconds$annotations() {
            return
    }

    public static final double getInNanoseconds-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            double r1 = toDouble-impl(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use inWholeSeconds property instead or convert toDouble(SECONDS) if a double value is required.", replaceWith = @kotlin.ReplaceWith(expression = "toDouble(DurationUnit.SECONDS)", imports = {}))
    public static void getInSeconds$annotations() {
            return
    }

    public static final double getInSeconds-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
            double r1 = toDouble-impl(r1, r0)
            return r1
    }

    public static final long getInWholeDays-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.DAYS
            long r1 = toLong-impl(r1, r0)
            return r1
    }

    public static final long getInWholeHours-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.HOURS
            long r1 = toLong-impl(r1, r0)
            return r1
    }

    public static final long getInWholeMicroseconds-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MICROSECONDS
            long r1 = toLong-impl(r1, r0)
            return r1
    }

    public static final long getInWholeMilliseconds-impl(long r1) {
            boolean r0 = isInMillis-impl(r1)
            if (r0 == 0) goto L11
            boolean r0 = isFinite-impl(r1)
            if (r0 == 0) goto L11
            long r1 = getValue-impl(r1)
            goto L17
        L11:
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
            long r1 = toLong-impl(r1, r0)
        L17:
            return r1
    }

    public static final long getInWholeMinutes-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MINUTES
            long r1 = toLong-impl(r1, r0)
            return r1
    }

    public static final long getInWholeNanoseconds-impl(long r2) {
            long r0 = getValue-impl(r2)
            boolean r2 = isInNanos-impl(r2)
            if (r2 == 0) goto Lb
            goto L2a
        Lb:
            r2 = 9223372036854(0x8637bd05af6, double:4.5569512622224E-311)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1a
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            goto L2a
        L1a:
            r2 = -9223372036854(0xfffff79c842fa50a, double:NaN)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L26
            r0 = -9223372036854775808
            goto L2a
        L26:
            long r0 = kotlin.time.DurationKt.access$millisToNanos(r0)
        L2a:
            return r0
    }

    public static final long getInWholeSeconds-impl(long r1) {
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.SECONDS
            long r1 = toLong-impl(r1, r0)
            return r1
    }

    public static void getMinutesComponent$annotations() {
            return
    }

    public static final int getMinutesComponent-impl(long r2) {
            boolean r0 = isInfinite-impl(r2)
            if (r0 == 0) goto L8
            r2 = 0
            goto L11
        L8:
            long r2 = getInWholeMinutes-impl(r2)
            r0 = 60
            long r0 = (long) r0
            long r2 = r2 % r0
            int r2 = (int) r2
        L11:
            return r2
    }

    public static void getNanosecondsComponent$annotations() {
            return
    }

    public static final int getNanosecondsComponent-impl(long r2) {
            boolean r0 = isInfinite-impl(r2)
            if (r0 == 0) goto L8
            r2 = 0
            goto L25
        L8:
            boolean r0 = isInMillis-impl(r2)
            if (r0 == 0) goto L1b
            long r2 = getValue-impl(r2)
            r0 = 1000(0x3e8, float:1.401E-42)
            long r0 = (long) r0
            long r2 = r2 % r0
            long r2 = kotlin.time.DurationKt.access$millisToNanos(r2)
            goto L24
        L1b:
            long r2 = getValue-impl(r2)
            r0 = 1000000000(0x3b9aca00, float:0.0047237873)
            long r0 = (long) r0
            long r2 = r2 % r0
        L24:
            int r2 = (int) r2
        L25:
            return r2
    }

    public static void getSecondsComponent$annotations() {
            return
    }

    public static final int getSecondsComponent-impl(long r2) {
            boolean r0 = isInfinite-impl(r2)
            if (r0 == 0) goto L8
            r2 = 0
            goto L11
        L8:
            long r2 = getInWholeSeconds-impl(r2)
            r0 = 60
            long r0 = (long) r0
            long r2 = r2 % r0
            int r2 = (int) r2
        L11:
            return r2
    }

    private static final kotlin.time.DurationUnit getStorageUnit-impl(long r0) {
            boolean r0 = isInNanos-impl(r0)
            if (r0 == 0) goto L9
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            goto Lb
        L9:
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.MILLISECONDS
        Lb:
            return r0
    }

    private static final int getUnitDiscriminator-impl(long r0) {
            int r0 = (int) r0
            r0 = r0 & 1
            return r0
    }

    private static final long getValue-impl(long r1) {
            r0 = 1
            long r1 = r1 >> r0
            return r1
    }

    public static int hashCode-impl(long r2) {
            r0 = 32
            long r0 = r2 >>> r0
            long r2 = r2 ^ r0
            int r2 = (int) r2
            return r2
    }

    public static final boolean isFinite-impl(long r0) {
            boolean r0 = isInfinite-impl(r0)
            r0 = r0 ^ 1
            return r0
    }

    private static final boolean isInMillis-impl(long r0) {
            int r0 = (int) r0
            r1 = 1
            r0 = r0 & r1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    private static final boolean isInNanos-impl(long r0) {
            int r0 = (int) r0
            r1 = 1
            r0 = r0 & r1
            if (r0 != 0) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public static final boolean isInfinite-impl(long r2) {
            long r0 = kotlin.time.Duration.INFINITE
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto Lf
            long r0 = kotlin.time.Duration.NEG_INFINITE
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 != 0) goto Ld
            goto Lf
        Ld:
            r2 = 0
            goto L10
        Lf:
            r2 = 1
        L10:
            return r2
    }

    public static final boolean isNegative-impl(long r2) {
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    public static final boolean isPositive-impl(long r2) {
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    public static final long minus-LRDsOJo(long r0, long r2) {
            long r2 = unaryMinus-UwyO8pc(r2)
            long r0 = plus-LRDsOJo(r0, r2)
            return r0
    }

    public static final long plus-LRDsOJo(long r7, long r9) {
            boolean r0 = isInfinite-impl(r7)
            if (r0 == 0) goto L1d
            boolean r0 = isFinite-impl(r9)
            if (r0 != 0) goto L1c
            long r9 = r9 ^ r7
            r0 = 0
            int r9 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r9 < 0) goto L14
            goto L1c
        L14:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Summing infinite durations of different signs yields an undefined result."
            r7.<init>(r8)
            throw r7
        L1c:
            return r7
        L1d:
            boolean r0 = isInfinite-impl(r9)
            if (r0 == 0) goto L24
            return r9
        L24:
            int r0 = (int) r7
            r0 = r0 & 1
            int r1 = (int) r9
            r1 = r1 & 1
            if (r0 != r1) goto L45
            long r0 = getValue-impl(r7)
            long r9 = getValue-impl(r9)
            long r0 = r0 + r9
            boolean r7 = isInNanos-impl(r7)
            if (r7 == 0) goto L40
            long r7 = kotlin.time.DurationKt.access$durationOfNanosNormalized(r0)
            goto L66
        L40:
            long r7 = kotlin.time.DurationKt.access$durationOfMillisNormalized(r0)
            goto L66
        L45:
            boolean r0 = isInMillis-impl(r7)
            if (r0 == 0) goto L59
            long r3 = getValue-impl(r7)
            long r5 = getValue-impl(r9)
            r1 = r7
            long r7 = addValuesMixedRanges-UwyO8pc(r1, r3, r5)
            goto L66
        L59:
            long r2 = getValue-impl(r9)
            long r4 = getValue-impl(r7)
            r0 = r7
            long r7 = addValuesMixedRanges-UwyO8pc(r0, r2, r4)
        L66:
            return r7
    }

    public static final long times-UwyO8pc(long r3, double r5) {
            int r0 = kotlin.math.MathKt.roundToInt(r5)
            double r1 = (double) r0
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 != 0) goto Lb
            r1 = 1
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 == 0) goto L13
            long r3 = times-UwyO8pc(r3, r0)
            return r3
        L13:
            kotlin.time.DurationUnit r0 = getStorageUnit-impl(r3)
            double r3 = toDouble-impl(r3, r0)
            double r3 = r3 * r5
            long r3 = kotlin.time.DurationKt.toDuration(r3, r0)
            return r3
    }

    public static final long times-UwyO8pc(long r12, int r14) {
            boolean r0 = isInfinite-impl(r12)
            if (r0 == 0) goto L18
            if (r14 == 0) goto L10
            if (r14 <= 0) goto Lb
            goto Lf
        Lb:
            long r12 = unaryMinus-UwyO8pc(r12)
        Lf:
            return r12
        L10:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r13 = "Multiplying infinite duration by zero yields an undefined result."
            r12.<init>(r13)
            throw r12
        L18:
            if (r14 != 0) goto L1d
            long r12 = kotlin.time.Duration.ZERO
            return r12
        L1d:
            long r0 = getValue-impl(r12)
            long r2 = (long) r14
            long r4 = r0 * r2
            boolean r12 = isInNanos-impl(r12)
            r6 = 4611686018427387903(0x3fffffffffffffff, double:1.9999999999999998)
            r8 = -4611686018427387903(0xc000000000000001, double:-2.0000000000000004)
            if (r12 == 0) goto L98
            r12 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r12 = (r0 > r12 ? 1 : (r0 == r12 ? 0 : -1))
            r13 = 0
            if (r12 > 0) goto L44
            r10 = -2147483647(0xffffffff80000001, double:NaN)
            int r12 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r12 > 0) goto L44
            r13 = 1
        L44:
            if (r13 == 0) goto L4c
            long r12 = kotlin.time.DurationKt.access$durationOfNanos(r4)
            goto Lbe
        L4c:
            long r12 = r4 / r2
            int r12 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r12 != 0) goto L57
            long r12 = kotlin.time.DurationKt.access$durationOfNanosNormalized(r4)
            goto Lbe
        L57:
            long r12 = kotlin.time.DurationKt.access$nanosToMillis(r0)
            long r4 = kotlin.time.DurationKt.access$millisToNanos(r12)
            long r4 = r0 - r4
            long r10 = r12 * r2
            long r4 = r4 * r2
            long r4 = kotlin.time.DurationKt.access$nanosToMillis(r4)
            long r4 = r4 + r10
            long r2 = r10 / r2
            int r12 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            if (r12 != 0) goto L87
            long r12 = r4 ^ r10
            r2 = 0
            int r12 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
            if (r12 < 0) goto L87
            kotlin.ranges.LongRange r12 = new kotlin.ranges.LongRange
            r12.<init>(r8, r6)
            kotlin.ranges.ClosedRange r12 = (kotlin.ranges.ClosedRange) r12
            long r12 = kotlin.ranges.RangesKt.coerceIn(r4, r12)
            long r12 = kotlin.time.DurationKt.access$durationOfMillis(r12)
            goto Lbe
        L87:
            int r12 = kotlin.math.MathKt.getSign(r0)
            int r13 = kotlin.math.MathKt.getSign(r14)
            int r12 = r12 * r13
            if (r12 <= 0) goto L95
            long r12 = kotlin.time.Duration.INFINITE
            goto Lbe
        L95:
            long r12 = kotlin.time.Duration.NEG_INFINITE
            goto Lbe
        L98:
            long r12 = r4 / r2
            int r12 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r12 != 0) goto Lae
            kotlin.ranges.LongRange r12 = new kotlin.ranges.LongRange
            r12.<init>(r8, r6)
            kotlin.ranges.ClosedRange r12 = (kotlin.ranges.ClosedRange) r12
            long r12 = kotlin.ranges.RangesKt.coerceIn(r4, r12)
            long r12 = kotlin.time.DurationKt.access$durationOfMillis(r12)
            goto Lbe
        Lae:
            int r12 = kotlin.math.MathKt.getSign(r0)
            int r13 = kotlin.math.MathKt.getSign(r14)
            int r12 = r12 * r13
            if (r12 <= 0) goto Lbc
            long r12 = kotlin.time.Duration.INFINITE
            goto Lbe
        Lbc:
            long r12 = kotlin.time.Duration.NEG_INFINITE
        Lbe:
            return r12
    }

    public static final <T> T toComponents-impl(long r2, kotlin.jvm.functions.Function2<? super java.lang.Long, ? super java.lang.Integer, ? extends T> r4) {
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            long r0 = getInWholeSeconds-impl(r2)
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            int r2 = getNanosecondsComponent-impl(r2)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r4.invoke(r0, r2)
            return r2
    }

    public static final <T> T toComponents-impl(long r2, kotlin.jvm.functions.Function3<? super java.lang.Long, ? super java.lang.Integer, ? super java.lang.Integer, ? extends T> r4) {
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            long r0 = getInWholeMinutes-impl(r2)
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            int r1 = getSecondsComponent-impl(r2)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            int r2 = getNanosecondsComponent-impl(r2)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r4.invoke(r0, r1, r2)
            return r2
    }

    public static final <T> T toComponents-impl(long r3, kotlin.jvm.functions.Function4<? super java.lang.Long, ? super java.lang.Integer, ? super java.lang.Integer, ? super java.lang.Integer, ? extends T> r5) {
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            long r0 = getInWholeHours-impl(r3)
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            int r1 = getMinutesComponent-impl(r3)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            int r2 = getSecondsComponent-impl(r3)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r3 = getNanosecondsComponent-impl(r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Object r3 = r5.invoke(r0, r1, r2, r3)
            return r3
    }

    public static final <T> T toComponents-impl(long r8, kotlin.jvm.functions.Function5<? super java.lang.Long, ? super java.lang.Integer, ? super java.lang.Integer, ? super java.lang.Integer, ? super java.lang.Integer, ? extends T> r10) {
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            long r0 = getInWholeDays-impl(r8)
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            int r0 = getHoursComponent-impl(r8)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r0)
            int r0 = getMinutesComponent-impl(r8)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r0)
            int r0 = getSecondsComponent-impl(r8)
            java.lang.Integer r6 = java.lang.Integer.valueOf(r0)
            int r8 = getNanosecondsComponent-impl(r8)
            java.lang.Integer r7 = java.lang.Integer.valueOf(r8)
            r2 = r10
            java.lang.Object r8 = r2.invoke(r3, r4, r5, r6, r7)
            return r8
    }

    public static final double toDouble-impl(long r2, kotlin.time.DurationUnit r4) {
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            long r0 = kotlin.time.Duration.INFINITE
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto Le
            r2 = 9218868437227405312(0x7ff0000000000000, double:Infinity)
            goto L24
        Le:
            long r0 = kotlin.time.Duration.NEG_INFINITE
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L17
            r2 = -4503599627370496(0xfff0000000000000, double:-Infinity)
            goto L24
        L17:
            long r0 = getValue-impl(r2)
            double r0 = (double) r0
            kotlin.time.DurationUnit r2 = getStorageUnit-impl(r2)
            double r2 = kotlin.time.DurationUnitKt.convertDurationUnit(r0, r2, r4)
        L24:
            return r2
    }

    public static final int toInt-impl(long r7, kotlin.time.DurationUnit r9) {
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            long r1 = toLong-impl(r7, r9)
            r3 = -2147483648(0xffffffff80000000, double:NaN)
            r5 = 2147483647(0x7fffffff, double:1.060997895E-314)
            long r7 = kotlin.ranges.RangesKt.coerceIn(r1, r3, r5)
            int r7 = (int) r7
            return r7
    }

    public static final java.lang.String toIsoString-impl(long r11) {
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            boolean r0 = isNegative-impl(r11)
            if (r0 == 0) goto L10
            r0 = 45
            r8.append(r0)
        L10:
            java.lang.String r0 = "PT"
            r8.append(r0)
            long r0 = getAbsoluteValue-UwyO8pc(r11)
            long r2 = getInWholeHours-impl(r0)
            int r4 = getMinutesComponent-impl(r0)
            int r5 = getSecondsComponent-impl(r0)
            int r6 = getNanosecondsComponent-impl(r0)
            boolean r0 = isInfinite-impl(r11)
            if (r0 == 0) goto L34
            r2 = 9999999999999(0x9184e729fff, double:4.940656458412E-311)
        L34:
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r1 = 1
            r7 = 0
            if (r0 == 0) goto L3e
            r0 = r1
            goto L3f
        L3e:
            r0 = r7
        L3f:
            if (r5 != 0) goto L46
            if (r6 == 0) goto L44
            goto L46
        L44:
            r9 = r7
            goto L47
        L46:
            r9 = r1
        L47:
            if (r4 != 0) goto L4f
            if (r9 == 0) goto L4e
            if (r0 == 0) goto L4e
            goto L4f
        L4e:
            r1 = r7
        L4f:
            if (r0 == 0) goto L59
            r8.append(r2)
            r2 = 72
            r8.append(r2)
        L59:
            if (r1 == 0) goto L63
            r8.append(r4)
            r2 = 77
            r8.append(r2)
        L63:
            if (r9 != 0) goto L69
            if (r0 != 0) goto L78
            if (r1 != 0) goto L78
        L69:
            r7 = 9
            r9 = 1
            java.lang.String r10 = "S"
            r0 = r11
            r2 = r8
            r3 = r5
            r4 = r6
            r5 = r7
            r6 = r10
            r7 = r9
            appendFractional-impl(r0, r2, r3, r4, r5, r6, r7)
        L78:
            java.lang.String r11 = r8.toString()
            java.lang.String r12 = "StringBuilder().apply(builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r11, r12)
            return r11
    }

    public static final long toLong-impl(long r2, kotlin.time.DurationUnit r4) {
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            long r0 = kotlin.time.Duration.INFINITE
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L11
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            goto L26
        L11:
            long r0 = kotlin.time.Duration.NEG_INFINITE
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L1a
            r2 = -9223372036854775808
            goto L26
        L1a:
            long r0 = getValue-impl(r2)
            kotlin.time.DurationUnit r2 = getStorageUnit-impl(r2)
            long r2 = kotlin.time.DurationUnitKt.convertDurationUnit(r0, r2, r4)
        L26:
            return r2
    }

    @kotlin.Deprecated(message = "Use inWholeMilliseconds property instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.inWholeMilliseconds", imports = {}))
    public static final long toLongMilliseconds-impl(long r0) {
            long r0 = getInWholeMilliseconds-impl(r0)
            return r0
    }

    @kotlin.Deprecated(message = "Use inWholeNanoseconds property instead.", replaceWith = @kotlin.ReplaceWith(expression = "this.inWholeNanoseconds", imports = {}))
    public static final long toLongNanoseconds-impl(long r0) {
            long r0 = getInWholeNanoseconds-impl(r0)
            return r0
    }

    public static java.lang.String toString-impl(long r14) {
            r0 = 0
            int r2 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            java.lang.String r14 = "0s"
            goto L105
        La:
            long r2 = kotlin.time.Duration.INFINITE
            int r2 = (r14 > r2 ? 1 : (r14 == r2 ? 0 : -1))
            if (r2 != 0) goto L14
            java.lang.String r14 = "Infinity"
            goto L105
        L14:
            long r2 = kotlin.time.Duration.NEG_INFINITE
            int r2 = (r14 > r2 ? 1 : (r14 == r2 ? 0 : -1))
            if (r2 != 0) goto L1e
            java.lang.String r14 = "-Infinity"
            goto L105
        L1e:
            boolean r2 = isNegative-impl(r14)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            if (r2 == 0) goto L2e
            r3 = 45
            r11.append(r3)
        L2e:
            long r3 = getAbsoluteValue-UwyO8pc(r14)
            long r5 = getInWholeDays-impl(r3)
            int r7 = getHoursComponent-impl(r3)
            int r8 = getMinutesComponent-impl(r3)
            int r9 = getSecondsComponent-impl(r3)
            int r10 = getNanosecondsComponent-impl(r3)
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r1 = 0
            r12 = 1
            if (r0 == 0) goto L4e
            r0 = r12
            goto L4f
        L4e:
            r0 = r1
        L4f:
            if (r7 == 0) goto L53
            r3 = r12
            goto L54
        L53:
            r3 = r1
        L54:
            if (r8 == 0) goto L58
            r4 = r12
            goto L59
        L58:
            r4 = r1
        L59:
            if (r9 != 0) goto L60
            if (r10 == 0) goto L5e
            goto L60
        L5e:
            r13 = r1
            goto L61
        L60:
            r13 = r12
        L61:
            if (r0 == 0) goto L6c
            r11.append(r5)
            r1 = 100
            r11.append(r1)
            r1 = r12
        L6c:
            r5 = 32
            if (r3 != 0) goto L76
            if (r0 == 0) goto L86
            if (r4 != 0) goto L76
            if (r13 == 0) goto L86
        L76:
            int r6 = r1 + 1
            if (r1 <= 0) goto L7d
            r11.append(r5)
        L7d:
            r11.append(r7)
            r1 = 104(0x68, float:1.46E-43)
            r11.append(r1)
            r1 = r6
        L86:
            if (r4 != 0) goto L8e
            if (r13 == 0) goto L9e
            if (r3 != 0) goto L8e
            if (r0 == 0) goto L9e
        L8e:
            int r6 = r1 + 1
            if (r1 <= 0) goto L95
            r11.append(r5)
        L95:
            r11.append(r8)
            r1 = 109(0x6d, float:1.53E-43)
            r11.append(r1)
            r1 = r6
        L9e:
            if (r13 == 0) goto Led
            int r13 = r1 + 1
            if (r1 <= 0) goto La7
            r11.append(r5)
        La7:
            if (r9 != 0) goto Lde
            if (r0 != 0) goto Lde
            if (r3 != 0) goto Lde
            if (r4 == 0) goto Lb0
            goto Lde
        Lb0:
            r0 = 1000000(0xf4240, float:1.401298E-39)
            if (r10 < r0) goto Lc3
            int r6 = r10 / r0
            int r7 = r10 % r0
            r8 = 6
            r10 = 0
            java.lang.String r9 = "ms"
            r3 = r14
            r5 = r11
            appendFractional-impl(r3, r5, r6, r7, r8, r9, r10)
            goto Lec
        Lc3:
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r10 < r0) goto Ld5
            int r6 = r10 / 1000
            int r7 = r10 % 1000
            r8 = 3
            r10 = 0
            java.lang.String r9 = "us"
            r3 = r14
            r5 = r11
            appendFractional-impl(r3, r5, r6, r7, r8, r9, r10)
            goto Lec
        Ld5:
            r11.append(r10)
            java.lang.String r14 = "ns"
            r11.append(r14)
            goto Lec
        Lde:
            r8 = 9
            r0 = 0
            java.lang.String r1 = "s"
            r3 = r14
            r5 = r11
            r6 = r9
            r7 = r10
            r9 = r1
            r10 = r0
            appendFractional-impl(r3, r5, r6, r7, r8, r9, r10)
        Lec:
            r1 = r13
        Led:
            if (r2 == 0) goto Lfc
            if (r1 <= r12) goto Lfc
            r14 = 40
            java.lang.StringBuilder r14 = r11.insert(r12, r14)
            r15 = 41
            r14.append(r15)
        Lfc:
            java.lang.String r14 = r11.toString()
            java.lang.String r15 = "StringBuilder().apply(builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r14, r15)
        L105:
            return r14
    }

    public static final java.lang.String toString-impl(long r2, kotlin.time.DurationUnit r4, int r5) {
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            if (r5 < 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            if (r0 == 0) goto L39
            double r2 = toDouble-impl(r2, r4)
            boolean r0 = java.lang.Double.isInfinite(r2)
            if (r0 == 0) goto L1b
            java.lang.String r2 = java.lang.String.valueOf(r2)
            return r2
        L1b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 12
            int r5 = kotlin.ranges.RangesKt.coerceAtMost(r5, r1)
            java.lang.String r2 = kotlin.time.DurationJvmKt.formatToExactDecimals(r2, r5)
            r0.append(r2)
            java.lang.String r2 = kotlin.time.DurationUnitKt.shortName(r4)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L39:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "decimals must be not negative, but was "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.toString()
            r3.<init>(r2)
            throw r3
    }

    public static java.lang.String toString-impl$default(long r0, kotlin.time.DurationUnit r2, int r3, int r4, java.lang.Object r5) {
            r4 = r4 & 2
            if (r4 == 0) goto L5
            r3 = 0
        L5:
            java.lang.String r0 = toString-impl(r0, r2, r3)
            return r0
    }

    public static final long unaryMinus-UwyO8pc(long r2) {
            long r0 = getValue-impl(r2)
            long r0 = -r0
            int r2 = (int) r2
            r2 = r2 & 1
            long r2 = kotlin.time.DurationKt.access$durationOf(r0, r2)
            return r2
    }

    @Override
    public int compareTo(kotlin.time.Duration r3) {
            r2 = this;
            kotlin.time.Duration r3 = (kotlin.time.Duration) r3
            long r0 = r3.unbox-impl()
            int r3 = r2.compareTo-LRDsOJo(r0)
            return r3
    }

    public int compareTo-LRDsOJo(long r3) {
            r2 = this;
            long r0 = r2.rawValue
            int r3 = compareTo-LRDsOJo(r0, r3)
            return r3
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            long r0 = r2.rawValue
            boolean r3 = equals-impl(r0, r3)
            return r3
    }

    public int hashCode() {
            r2 = this;
            long r0 = r2.rawValue
            int r0 = hashCode-impl(r0)
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            long r0 = r2.rawValue
            java.lang.String r0 = toString-impl(r0)
            return r0
    }

    public final long unbox-impl() {
            r2 = this;
            long r0 = r2.rawValue
            return r0
    }
}
