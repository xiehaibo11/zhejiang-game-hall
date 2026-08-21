.class public Lcom/igexin/push/extension/distribution/basic/g/c;
.super Ljava/lang/Object;


# direct methods
.method public static a(Ljava/lang/String;Ljava/lang/String;)I
    .locals 17

    const-string v0, ""

    const-string v1, "\\."

    const/4 v2, -0x1

    :try_start_0
    const-string v3, "([a-zA-Z_-])*"

    invoke-static {v3}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v3

    move-object/from16 v4, p0

    invoke-virtual {v4, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    move-object/from16 v5, p1

    invoke-virtual {v5, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    array-length v5, v4

    const/4 v6, 0x4

    if-lt v5, v6, :cond_5

    array-length v5, v1

    if-lt v5, v6, :cond_5

    const/4 v5, 0x3

    aget-object v7, v4, v5

    invoke-virtual {v3, v7}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v7

    invoke-virtual {v7, v0}, Ljava/util/regex/Matcher;->replaceAll(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v4, v5

    aget-object v7, v1, v5

    invoke-virtual {v3, v7}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v3

    invoke-virtual {v3, v0}, Ljava/util/regex/Matcher;->replaceAll(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    aput-object v0, v1, v5

    const-wide/16 v7, 0x0

    move-wide v9, v7

    const/4 v3, 0x0

    :goto_0
    const-wide/16 v11, 0x64

    const-wide/16 v13, 0x1

    if-ge v3, v6, :cond_1

    const/4 v15, 0x0

    :goto_1
    rsub-int/lit8 v0, v3, 0x3

    if-ge v15, v0, :cond_0

    mul-long/2addr v13, v11

    add-int/lit8 v15, v15, 0x1

    goto :goto_1

    :cond_0
    aget-object v0, v4, v3

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v11

    mul-long/2addr v11, v13

    add-long/2addr v9, v11

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_2
    if-ge v0, v6, :cond_3

    move-wide v15, v13

    const/4 v3, 0x0

    :goto_3
    rsub-int/lit8 v4, v0, 0x3

    if-ge v3, v4, :cond_2

    mul-long/2addr v15, v11

    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    :cond_2
    aget-object v3, v1, v0

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    mul-long/2addr v3, v15

    add-long/2addr v7, v3

    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    :cond_3
    cmp-long v0, v9, v7

    if-lez v0, :cond_4

    const/4 v2, 0x1

    goto :goto_4

    :cond_4
    if-nez v0, :cond_5

    const/4 v2, 0x0

    :catch_0
    :cond_5
    :goto_4
    return v2
.end method
