.class public Lcom/qihoo360/replugin/utils/Dex2OatUtils;
.super Ljava/lang/Object;
.source "Dex2OatUtils.java"


# static fields
.field private static final FOR_DEV:Z

.field public static final TAG:Ljava/lang/String; = "Dex2Oat"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    sget-boolean v0, Lcom/qihoo360/replugin/RePluginInternal;->FOR_DEV:Z

    sput-boolean v0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static injectLoadDex(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 56
    invoke-static {}, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->isArtMode()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 57
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 59
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    const-string v2, "Dex2Oat"

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v1, v3, v5

    if-gtz v1, :cond_0

    goto :goto_0

    .line 73
    :cond_0
    sget-boolean p0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz p0, :cond_3

    .line 74
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " \u6587\u4ef6\u5b58\u5728, \u4e0d\u9700\u8981inject\uff0csize:"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide p1

    invoke-virtual {p0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 61
    :cond_1
    :goto_0
    sget-boolean v0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz v0, :cond_2

    .line 62
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " \u6587\u4ef6\u4e0d\u5b58\u5728"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 65
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 66
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->innerInjectLoadDex(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    .line 68
    sget-boolean p1, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz p1, :cond_3

    .line 69
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "injectLoadDex use:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v0

    invoke-virtual {p1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 70
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "injectLoadDex result:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    :goto_1
    return-void
.end method

.method private static injectLoadDex4Art(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 6

    .line 125
    sget-boolean v0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    const-string v1, "Dex2Oat"

    if-eqz v0, :cond_0

    const-string v0, "Andorid Art, try 2 interpretDex2Oat, interpret-only."

    .line 126
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 129
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 131
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 133
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/utils/InterpretDex2OatHelper;->interpretDex2Oat(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 142
    sget-boolean p0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz p0, :cond_1

    .line 143
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "interpretDex2Oat use:"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v2

    invoke-virtual {p0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 144
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "interpretDex2Oat odexSize:"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/qihoo360/replugin/utils/InterpretDex2OatHelper;->getOdexSize(Ljava/lang/String;)J

    move-result-wide p1

    invoke-virtual {p0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 135
    sget-boolean p1, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz p1, :cond_2

    .line 136
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    const-string p0, "interpretDex2Oat Error"

    .line 137
    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private static injectLoadDex4More()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method private static injectLoadDexBeforeN()Z
    .locals 6

    .line 94
    invoke-static {}, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->isArtMode()Z

    move-result v0

    const-string v1, "Dex2Oat"

    if-eqz v0, :cond_2

    .line 96
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 98
    sget-boolean v0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz v0, :cond_0

    const-string v0, "Art before Android N, try 2 hook."

    .line 99
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 111
    :cond_0
    sget-boolean v0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz v0, :cond_1

    .line 112
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "hook end, use\uff1a"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v2

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 v0, 0x1

    return v0

    .line 118
    :cond_2
    sget-boolean v0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz v0, :cond_3

    const-string v0, "not Art, do nothing."

    .line 119
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const/4 v0, 0x0

    return v0
.end method

.method private static innerInjectLoadDex(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 81
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_1

    .line 82
    sget-boolean p0, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->FOR_DEV:Z

    if-eqz p0, :cond_0

    const-string p0, "Dex2Oat"

    const-string p1, "before Android L, do nothing."

    .line 83
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 86
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x19

    if-gt v0, v1, :cond_2

    .line 87
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->injectLoadDex4Art(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0

    .line 89
    :cond_2
    invoke-static {}, Lcom/qihoo360/replugin/utils/Dex2OatUtils;->injectLoadDex4More()Z

    move-result p0

    return p0
.end method

.method public static isArtMode()Z
    .locals 2

    const-string v0, "java.vm.version"

    const-string v1, ""

    .line 44
    invoke-static {v0, v1}, Ljava/lang/System;->getProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method
