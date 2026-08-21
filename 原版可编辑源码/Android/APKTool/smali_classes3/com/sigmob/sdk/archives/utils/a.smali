.class public Lcom/sigmob/sdk/archives/utils/a;
.super Ljava/lang/Object;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/archives/a;)Ljava/lang/String;
    .locals 5

    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    invoke-interface {p0}, Lcom/sigmob/sdk/archives/a;->c()Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x64

    goto :goto_0

    :cond_0
    const/16 v1, 0x2d

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    invoke-interface {p0}, Lcom/sigmob/sdk/archives/a;->b()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x20

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    const/4 v3, 0x7

    :goto_1
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v4

    if-le v3, v4, :cond_1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    add-int/lit8 v3, v3, -0x1

    goto :goto_1

    :cond_1
    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    invoke-interface {p0}, Lcom/sigmob/sdk/archives/a;->a()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a([B)Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Ljava/lang/String;

    const-string v1, "ASCII"

    invoke-direct {v0, p0, v1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public static a([BII)Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Ljava/lang/String;

    const-string v1, "ASCII"

    invoke-direct {v0, p0, p1, p2, v1}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static a(Ljava/lang/String;[B)Z
    .locals 2

    array-length v0, p1

    const/4 v1, 0x0

    invoke-static {p0, p1, v1, v0}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result p0

    return p0
.end method

.method public static a(Ljava/lang/String;[BII)Z
    .locals 8

    :try_start_0
    const-string v0, "ASCII"

    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v1
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v2, 0x0

    array-length v3, v1

    const/4 v7, 0x0

    move-object v4, p1

    move v5, p2

    move v6, p3

    invoke-static/range {v1 .. v7}, Lcom/sigmob/sdk/archives/utils/a;->a([BII[BIIZ)Z

    move-result p0

    return p0

    :catch_0
    move-exception p0

    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static a([BII[BII)Z
    .locals 7

    const/4 v6, 0x0

    move-object v0, p0

    move v1, p1

    move v2, p2

    move-object v3, p3

    move v4, p4

    move v5, p5

    invoke-static/range {v0 .. v6}, Lcom/sigmob/sdk/archives/utils/a;->a([BII[BIIZ)Z

    move-result p0

    return p0
.end method

.method public static a([BII[BIIZ)Z
    .locals 5

    if-ge p2, p5, :cond_0

    move v0, p2

    goto :goto_0

    :cond_0
    move v0, p5

    :goto_0
    const/4 v1, 0x0

    move v2, v1

    :goto_1
    if-ge v2, v0, :cond_2

    add-int v3, p1, v2

    aget-byte v3, p0, v3

    add-int v4, p4, v2

    aget-byte v4, p3, v4

    if-eq v3, v4, :cond_1

    return v1

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_2
    const/4 v0, 0x1

    if-ne p2, p5, :cond_3

    return v0

    :cond_3
    if-eqz p6, :cond_8

    if-le p2, p5, :cond_5

    :goto_2
    if-ge p5, p2, :cond_7

    add-int p3, p1, p5

    aget-byte p3, p0, p3

    if-eqz p3, :cond_4

    return v1

    :cond_4
    add-int/lit8 p5, p5, 0x1

    goto :goto_2

    :cond_5
    :goto_3
    if-ge p2, p5, :cond_7

    add-int p0, p4, p2

    aget-byte p0, p3, p0

    if-eqz p0, :cond_6

    return v1

    :cond_6
    add-int/lit8 p2, p2, 0x1

    goto :goto_3

    :cond_7
    return v0

    :cond_8
    return v1
.end method

.method public static a([B[B)Z
    .locals 7

    array-length v2, p0

    array-length v5, p1

    const/4 v1, 0x0

    const/4 v4, 0x0

    const/4 v6, 0x0

    move-object v0, p0

    move-object v3, p1

    invoke-static/range {v0 .. v6}, Lcom/sigmob/sdk/archives/utils/a;->a([BII[BIIZ)Z

    move-result p0

    return p0
.end method

.method public static a([B[BZ)Z
    .locals 7

    array-length v2, p0

    array-length v5, p1

    const/4 v1, 0x0

    const/4 v4, 0x0

    move-object v0, p0

    move-object v3, p1

    move v6, p2

    invoke-static/range {v0 .. v6}, Lcom/sigmob/sdk/archives/utils/a;->a([BII[BIIZ)Z

    move-result p0

    return p0
.end method

.method public static a(Ljava/lang/String;)[B
    .locals 1

    :try_start_0
    const-string v0, "ASCII"

    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public static b([BII[BII)Z
    .locals 7

    const/4 v6, 0x1

    move-object v0, p0

    move v1, p1

    move v2, p2

    move-object v3, p3

    move v4, p4

    move v5, p5

    invoke-static/range {v0 .. v6}, Lcom/sigmob/sdk/archives/utils/a;->a([BII[BIIZ)Z

    move-result p0

    return p0
.end method
