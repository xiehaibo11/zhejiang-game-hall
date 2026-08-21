.class public Lcom/sigmob/sdk/archives/tar/f;
.super Ljava/lang/Object;


# static fields
.field private static final a:I = 0xff


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/lang/String;[BII)I
    .locals 4

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    if-ge v1, p3, :cond_0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    add-int v2, p2, v1

    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v3

    int-to-byte v3, v3

    aput-byte v3, p1, v2

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    :goto_1
    if-ge v1, p3, :cond_1

    add-int p0, p2, v1

    aput-byte v0, p1, p0

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_1
    add-int/2addr p2, p3

    return p2
.end method

.method public static a([B)J
    .locals 5

    const-wide/16 v0, 0x0

    const/4 v2, 0x0

    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_0

    aget-byte v3, p0, v2

    and-int/lit16 v3, v3, 0xff

    int-to-long v3, v3

    add-long/2addr v0, v3

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-wide v0
.end method

.method public static a([BII)J
    .locals 7

    add-int v0, p1, p2

    const/4 v1, 0x2

    if-lt p2, v1, :cond_a

    move v1, p1

    :goto_0
    if-ge v1, v0, :cond_1

    aget-byte v2, p0, v1

    if-eqz v2, :cond_0

    const/4 v1, 0x0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x1

    :goto_1
    const-wide/16 v2, 0x0

    if-eqz v1, :cond_2

    return-wide v2

    :cond_2
    move v1, p1

    :goto_2
    const/16 v4, 0x20

    if-ge v1, v0, :cond_3

    aget-byte v5, p0, v1

    if-ne v5, v4, :cond_3

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :cond_3
    add-int/lit8 v5, v0, -0x1

    aget-byte v6, p0, v5

    if-eqz v6, :cond_5

    if-ne v6, v4, :cond_4

    goto :goto_3

    :cond_4
    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-static {p0, p1, p2, v5, v6}, Lcom/sigmob/sdk/archives/tar/f;->a([BIIIB)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_5
    :goto_3
    add-int/lit8 v0, v0, -0x1

    add-int/lit8 v5, v0, -0x1

    aget-byte v5, p0, v5

    if-eqz v5, :cond_6

    if-ne v5, v4, :cond_7

    :cond_6
    add-int/lit8 v0, v0, -0x1

    :cond_7
    :goto_4
    if-ge v1, v0, :cond_9

    aget-byte v4, p0, v1

    const/16 v5, 0x30

    if-lt v4, v5, :cond_8

    const/16 v5, 0x37

    if-gt v4, v5, :cond_8

    const/4 v5, 0x3

    shl-long/2addr v2, v5

    add-int/lit8 v4, v4, -0x30

    int-to-long v4, v4

    add-long/2addr v2, v4

    add-int/lit8 v1, v1, 0x1

    goto :goto_4

    :cond_8
    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-static {p0, p1, p2, v1, v4}, Lcom/sigmob/sdk/archives/tar/f;->a([BIIIB)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_9
    return-wide v2

    :cond_a
    new-instance p0, Ljava/lang/IllegalArgumentException;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Length "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " must be at least 2"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private static a([BIIIB)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p0, p1, p2}, Ljava/lang/String;-><init>([BII)V

    const-string p0, "\u0000"

    const-string v1, "{NUL}"

    invoke-virtual {v0, p0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Invalid byte "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p4, " at offset "

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sub-int/2addr p3, p1

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " in \'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "\' len="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(J[BII)V
    .locals 9

    add-int/lit8 v0, p4, -0x1

    const-wide/16 v1, 0x0

    cmp-long v3, p0, v1

    const/16 v4, 0x30

    if-nez v3, :cond_0

    add-int/lit8 p0, v0, -0x1

    add-int/2addr v0, p3

    aput-byte v4, p2, v0

    goto :goto_1

    :cond_0
    move-wide v5, p0

    :goto_0
    if-ltz v0, :cond_1

    cmp-long v3, v5, v1

    if-eqz v3, :cond_1

    add-int v3, p3, v0

    const-wide/16 v7, 0x7

    and-long/2addr v7, v5

    long-to-int v7, v7

    int-to-byte v7, v7

    add-int/2addr v7, v4

    int-to-byte v7, v7

    aput-byte v7, p2, v3

    const/4 v3, 0x3

    ushr-long/2addr v5, v3

    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_1
    cmp-long v1, v5, v1

    if-nez v1, :cond_3

    move p0, v0

    :goto_1
    if-ltz p0, :cond_2

    add-int p1, p3, p0

    aput-byte v4, p2, p1

    add-int/lit8 p0, p0, -0x1

    goto :goto_1

    :cond_2
    return-void

    :cond_3
    new-instance p2, Ljava/lang/IllegalArgumentException;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, "="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0, p1}, Ljava/lang/Long;->toOctalString(J)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " will not fit in octal number buffer of length "

    invoke-virtual {p3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {p2, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p2
.end method

.method public static a([BI)Z
    .locals 0

    aget-byte p0, p0, p1

    const/4 p1, 0x1

    if-ne p0, p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public static b(J[BII)I
    .locals 1

    add-int/lit8 v0, p4, -0x2

    invoke-static {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/archives/tar/f;->a(J[BII)V

    add-int/lit8 p0, v0, 0x1

    add-int/2addr v0, p3

    const/16 p1, 0x20

    aput-byte p1, p2, v0

    add-int/2addr p0, p3

    const/4 p1, 0x0

    aput-byte p1, p2, p0

    add-int/2addr p3, p4

    return p3
.end method

.method public static b([BII)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0, p2}, Ljava/lang/StringBuffer;-><init>(I)V

    add-int/2addr p2, p1

    :goto_0
    if-ge p1, p2, :cond_1

    aget-byte v1, p0, p1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    and-int/lit16 v1, v1, 0xff

    int-to-char v1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c(J[BII)I
    .locals 1

    add-int/lit8 v0, p4, -0x1

    invoke-static {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/archives/tar/f;->a(J[BII)V

    add-int/2addr v0, p3

    const/16 p0, 0x20

    aput-byte p0, p2, v0

    add-int/2addr p3, p4

    return p3
.end method

.method public static d(J[BII)I
    .locals 1

    add-int/lit8 v0, p4, -0x2

    invoke-static {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/archives/tar/f;->a(J[BII)V

    add-int/lit8 p0, v0, 0x1

    add-int/2addr v0, p3

    const/4 p1, 0x0

    aput-byte p1, p2, v0

    add-int/2addr p0, p3

    const/16 p1, 0x20

    aput-byte p1, p2, p0

    add-int/2addr p3, p4

    return p3
.end method
