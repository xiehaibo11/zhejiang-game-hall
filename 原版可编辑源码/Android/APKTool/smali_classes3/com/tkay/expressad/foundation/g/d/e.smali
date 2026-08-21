.class public final Lcom/tkay/expressad/foundation/g/d/e;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(J)Ljava/lang/String;
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p0, v0

    if-gtz v0, :cond_0

    const-string p0, "0M"

    return-object p0

    :cond_0
    long-to-float p0, p0

    const/high16 p1, 0x44800000    # 1024.0f

    div-float/2addr p0, p1

    div-float/2addr p0, p1

    .line 117
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    aput-object p0, v0, v1

    const-string p0, "%.1f"

    invoke-static {p0, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "M"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 45
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/e;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    array-length v0, v0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    if-eq v0, v1, :cond_0

    :try_start_0
    const-string v0, "UTF-8"

    .line 47
    invoke-static {p0, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    return-object p1

    :cond_0
    return-object p0
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 0

    if-eqz p0, :cond_1

    .line 12
    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private static b(Ljava/lang/String;)Z
    .locals 0

    if-eqz p0, :cond_1

    .line 16
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private static c(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    if-nez p0, :cond_0

    const-string p0, ""

    :cond_0
    return-object p0
.end method

.method private static d(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 24
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/e;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    const/4 v0, 0x0

    .line 28
    invoke-virtual {p0, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    .line 29
    invoke-static {v0}, Ljava/lang/Character;->isLetter(C)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {v0}, Ljava/lang/Character;->isUpperCase(C)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    .line 30
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(I)V

    invoke-static {v0}, Ljava/lang/Character;->toUpperCase(C)C

    move-result v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_2
    :goto_0
    return-object p0
.end method

.method private static e(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 34
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/e;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    array-length v0, v0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    if-eq v0, v1, :cond_0

    :try_start_0
    const-string v0, "UTF-8"

    .line 36
    invoke-static {p0, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 38
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "UnsupportedEncodingException occurred. "

    invoke-direct {v0, v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0

    :cond_0
    return-object p0
.end method

.method private static f(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 56
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/e;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const/4 v0, 0x2

    const-string v1, ".*<[\\s]*a[\\s]*.*>(.+?)<[\\s]*/a[\\s]*>.*"

    .line 61
    invoke-static {v1, v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;I)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 62
    invoke-virtual {v0, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    .line 63
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 p0, 0x1

    .line 64
    invoke-virtual {v0, p0}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p0

    :cond_1
    return-object p0
.end method

.method private static g(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 70
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/e;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    const-string v0, "&lt;"

    const-string v1, "<"

    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "&gt;"

    const-string v1, ">"

    .line 71
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "&amp;"

    const-string v1, "&"

    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "&quot;"

    const-string v1, "\""

    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static h(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 75
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/e;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    .line 79
    :cond_0
    invoke-virtual {p0}, Ljava/lang/String;->toCharArray()[C

    move-result-object p0

    const/4 v0, 0x0

    .line 80
    :goto_0
    array-length v1, p0

    if-ge v0, v1, :cond_3

    .line 81
    aget-char v1, p0, v0

    const/16 v2, 0x3000

    if-ne v1, v2, :cond_1

    const/16 v1, 0x20

    .line 82
    aput-char v1, p0, v0

    goto :goto_1

    .line 83
    :cond_1
    aget-char v1, p0, v0

    const v2, 0xff01

    if-lt v1, v2, :cond_2

    aget-char v1, p0, v0

    const v2, 0xff5e

    if-gt v1, v2, :cond_2

    .line 84
    aget-char v1, p0, v0

    const v2, 0xfee0

    sub-int/2addr v1, v2

    int-to-char v1, v1

    aput-char v1, p0, v0

    goto :goto_1

    .line 86
    :cond_2
    aget-char v1, p0, v0

    aput-char v1, p0, v0

    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 89
    :cond_3
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p0}, Ljava/lang/String;-><init>([C)V

    return-object v0
.end method

.method private static i(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 93
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/e;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    .line 97
    :cond_0
    invoke-virtual {p0}, Ljava/lang/String;->toCharArray()[C

    move-result-object p0

    const/4 v0, 0x0

    .line 98
    :goto_0
    array-length v1, p0

    if-ge v0, v1, :cond_3

    .line 99
    aget-char v1, p0, v0

    const/16 v2, 0x20

    if-ne v1, v2, :cond_1

    const/16 v1, 0x3000

    .line 100
    aput-char v1, p0, v0

    goto :goto_1

    .line 101
    :cond_1
    aget-char v1, p0, v0

    const/16 v2, 0x21

    if-lt v1, v2, :cond_2

    aget-char v1, p0, v0

    const/16 v2, 0x7e

    if-gt v1, v2, :cond_2

    .line 102
    aget-char v1, p0, v0

    const v2, 0xfee0

    add-int/2addr v1, v2

    int-to-char v1, v1

    aput-char v1, p0, v0

    goto :goto_1

    .line 104
    :cond_2
    aget-char v1, p0, v0

    aput-char v1, p0, v0

    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 107
    :cond_3
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p0}, Ljava/lang/String;-><init>([C)V

    return-object v0
.end method
