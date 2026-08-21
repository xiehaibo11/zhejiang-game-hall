.class public final Lcom/tencent/bugly/proguard/am;
.super Ljava/lang/Object;
.source "BUGLY"


# direct methods
.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
    .locals 3

    const-wide/16 v0, -0x1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    .line 208
    new-array p0, p0, [Ljava/lang/Object;

    const-string p1, "File name is null."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-wide v0

    .line 212
    :cond_0
    :try_start_0
    invoke-virtual {p0, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {p0, p2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 213
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    .line 214
    invoke-virtual {p0, p2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result p2

    .line 216
    invoke-virtual {p0, p1, p2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide p0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-wide p0

    :catch_0
    move-exception p0

    .line 219
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_1
    return-wide v0
.end method

.method private static a([Ljava/io/File;Ljava/lang/String;Ljava/lang/String;J)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/io/File;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "J)",
            "Ljava/util/List<",
            "Ljava/io/File;",
            ">;"
        }
    .end annotation

    .line 184
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 185
    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, p0, v2

    .line 186
    invoke-virtual {v3}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v4

    .line 187
    invoke-static {v4, p1, p2}, Lcom/tencent/bugly/proguard/am;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v8, v4, v6

    if-ltz v8, :cond_0

    cmp-long v8, v6, v4

    if-gtz v8, :cond_0

    cmp-long v6, v4, p3

    if-gtz v6, :cond_0

    .line 192
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 2

    .line 98
    invoke-static {p0, p1, p2, p3, p4}, Lcom/tencent/bugly/proguard/am;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)Ljava/util/List;

    move-result-object p0

    .line 102
    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    const/4 p1, 0x0

    const/4 p2, 0x0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/io/File;

    const-string p4, "File %s is to be deleted."

    const/4 v0, 0x1

    .line 104
    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p3}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, p1

    invoke-static {p4, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 105
    invoke-virtual {p3}, Ljava/io/File;->delete()Z

    move-result p3

    if-eqz p3, :cond_0

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_1
    const-string p0, "Number of overdue trace files that has deleted: "

    .line 109
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 111
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    return-void
.end method

.method public static a(Ljava/io/File;Ljava/lang/String;JZ)Z
    .locals 8

    .line 35
    :try_start_0
    new-instance v7, Ljava/io/BufferedWriter;

    new-instance v0, Ljava/io/FileWriter;

    invoke-direct {v0, p0, p4}, Ljava/io/FileWriter;-><init>(Ljava/io/File;Z)V

    invoke-direct {v7, v0}, Ljava/io/BufferedWriter;-><init>(Ljava/io/Writer;)V

    .line 36
    invoke-virtual {p0}, Ljava/io/File;->length()J

    move-result-wide v3

    .line 1054
    invoke-virtual {p1}, Ljava/lang/String;->toCharArray()[C

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    move-object v0, v7

    move-wide v5, p2

    invoke-static/range {v0 .. v6}, Lcom/tencent/bugly/proguard/am;->a(Ljava/io/Writer;[CIJJ)Z

    move-result p0

    .line 37
    invoke-virtual {v7}, Ljava/io/BufferedWriter;->close()V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 40
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    const/4 p0, 0x0

    return p0
.end method

.method private static a(Ljava/io/Writer;[CIJJ)Z
    .locals 4

    const/4 v0, 0x0

    cmp-long v1, p3, p5

    if-ltz v1, :cond_0

    return v0

    :cond_0
    mul-int/lit8 v1, p2, 0x2

    int-to-long v1, v1

    add-long/2addr v1, p3

    cmp-long v3, v1, p5

    if-gtz v3, :cond_1

    .line 74
    :try_start_0
    invoke-virtual {p0, p1, v0, p2}, Ljava/io/Writer;->write([CII)V

    goto :goto_0

    :cond_1
    sub-long/2addr p5, p3

    const-wide/16 p2, 0x2

    .line 77
    div-long/2addr p5, p2

    long-to-int p2, p5

    .line 78
    invoke-virtual {p0, p1, v0, p2}, Ljava/io/Writer;->write([CII)V

    .line 80
    :goto_0
    invoke-virtual {p0}, Ljava/io/Writer;->flush()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 83
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    return v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;I)Z
    .locals 7

    const/4 v0, 0x1

    .line 232
    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const-string v3, "rqdp{  sv sd start} %s"

    invoke-static {v3, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-eqz p1, :cond_4

    .line 233
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    if-gtz v1, :cond_0

    goto :goto_1

    .line 236
    :cond_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 238
    :try_start_0
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    if-nez p0, :cond_2

    .line 239
    invoke-virtual {v1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 240
    invoke-virtual {v1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->mkdirs()Z

    .line 242
    :cond_1
    invoke-virtual {v1}, Ljava/io/File;->createNewFile()Z

    :cond_2
    int-to-long v3, p2

    .line 244
    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v5

    cmp-long p0, v5, v3

    if-gez p0, :cond_3

    goto :goto_0

    :cond_3
    const/4 v0, 0x0

    :goto_0
    invoke-static {v1, p1, v3, v4, v0}, Lcom/tencent/bugly/proguard/am;->a(Ljava/io/File;Ljava/lang/String;JZ)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 246
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p1

    if-nez p1, :cond_4

    .line 247
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    :goto_1
    return v2
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "J)",
            "Ljava/util/List<",
            "Ljava/io/File;",
            ">;"
        }
    .end annotation

    .line 128
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_4

    if-nez p2, :cond_0

    goto :goto_2

    .line 135
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 136
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 138
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_3

    invoke-virtual {v3}, Ljava/io/File;->isDirectory()Z

    move-result p0

    if-eqz p0, :cond_3

    .line 140
    :try_start_0
    new-instance p0, Lcom/tencent/bugly/proguard/am$1;

    invoke-direct {p0, p1, p2}, Lcom/tencent/bugly/proguard/am$1;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3, p0}, Ljava/io/File;->listFiles(Ljava/io/FilenameFilter;)[Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 150
    array-length v3, p0

    if-nez v3, :cond_1

    goto :goto_0

    :cond_1
    sub-long/2addr v1, p3

    .line 160
    invoke-static {p0, p1, p2, v1, v2}, Lcom/tencent/bugly/proguard/am;->a([Ljava/io/File;Ljava/lang/String;Ljava/lang/String;J)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_2
    :goto_0
    return-object v0

    :catch_0
    move-exception p0

    .line 164
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    :cond_3
    :goto_1
    return-object v0

    :cond_4
    :goto_2
    const/4 p0, 0x2

    .line 131
    new-array p0, p0, [Ljava/lang/Object;

    const/4 p3, 0x0

    aput-object p1, p0, p3

    const/4 p1, 0x1

    aput-object p2, p0, p1

    const-string p1, "prefix %s and/or postfix %s is null."

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-object v0
.end method
