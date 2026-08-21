.class public Lcom/bytedance/android/openliveplugin/material/TTLogger;
.super Ljava/lang/Object;


# static fields
.field private static DEBUG:Z = false

.field private static final TAG:Ljava/lang/String; = "TTLiveLogger"

.field private static sLevel:I = 0x4


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static d(Ljava/lang/String;)V
    .locals 1

    .line 73
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v0, "TTLiveLogger"

    .line 76
    invoke-static {v0, p0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 80
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 86
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_2

    .line 87
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    .line 91
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    if-nez p2, :cond_1

    return-void

    .line 97
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_2

    .line 98
    invoke-static {p0, p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    return-void
.end method

.method public static varargs d(Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 2

    .line 102
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 108
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_2

    .line 109
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->formatMsgs([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static debug()Z
    .locals 2

    .line 22
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static e(Ljava/lang/String;)V
    .locals 1

    .line 207
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v0, "TTLiveLogger"

    .line 210
    invoke-static {v0, p0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 214
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 220
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x6

    if-gt v0, v1, :cond_2

    .line 221
    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    .line 225
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    if-nez p2, :cond_1

    return-void

    .line 231
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x6

    if-gt v0, v1, :cond_2

    .line 232
    invoke-static {p0, p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    return-void
.end method

.method public static varargs e(Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 2

    .line 237
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 243
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x6

    if-gt v0, v1, :cond_2

    .line 244
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->formatMsgs([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method private static varargs formatMsgs([Ljava/lang/Object;)Ljava/lang/String;
    .locals 4

    if-eqz p0, :cond_3

    .line 276
    array-length v0, p0

    if-nez v0, :cond_0

    goto :goto_2

    .line 279
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 280
    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    aget-object v3, p0, v2

    if-eqz v3, :cond_1

    .line 282
    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_1
    const-string v3, " null "

    .line 284
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    const-string v3, " "

    .line 286
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 288
    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    :goto_2
    const-string p0, ""

    return-object p0
.end method

.method public static getLogLevel()I
    .locals 1

    .line 18
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    return v0
.end method

.method private static getSimpleClassName(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const/16 v0, 0x2e

    .line 268
    invoke-virtual {p0, v0}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v0

    if-gez v0, :cond_0

    return-object p0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    .line 272
    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static i(Ljava/lang/String;)V
    .locals 1

    .line 114
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v0, "TTLiveLogger"

    .line 117
    invoke-static {v0, p0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 121
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 127
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x4

    if-gt v0, v1, :cond_2

    .line 128
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    .line 132
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    if-nez p2, :cond_1

    return-void

    .line 138
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x4

    if-gt v0, v1, :cond_2

    .line 139
    invoke-static {p0, p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    return-void
.end method

.method public static varargs i(Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 2

    .line 143
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 149
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x4

    if-gt v0, v1, :cond_2

    .line 150
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->formatMsgs([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static isDebug()Z
    .locals 1

    .line 31
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    return v0
.end method

.method public static logDirect(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    if-nez p0, :cond_1

    const-string p0, "TTLiveLogger"

    .line 203
    :cond_1
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static openDebugMode()V
    .locals 1

    const/4 v0, 0x1

    .line 26
    sput-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    const/4 v0, 0x3

    .line 27
    invoke-static {v0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->setLogLevel(I)V

    return-void
.end method

.method public static setLogLevel(I)V
    .locals 0

    .line 14
    sput p0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    return-void
.end method

.method public static st(Ljava/lang/String;I)V
    .locals 5

    .line 251
    :try_start_0
    new-instance v0, Ljava/lang/Exception;

    invoke-direct {v0}, Ljava/lang/Exception;-><init>()V

    throw v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    move-exception v0

    .line 253
    invoke-virtual {v0}, Ljava/lang/Exception;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    .line 254
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v2, 0x1

    move v3, v2

    .line 255
    :goto_0
    array-length v4, v0

    invoke-static {p1, v4}, Ljava/lang/Math;->min(II)I

    move-result v4

    if-ge v3, v4, :cond_1

    if-le v3, v2, :cond_0

    const-string v4, "\n"

    .line 257
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 259
    :cond_0
    aget-object v4, v0, v3

    invoke-virtual {v4}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->getSimpleClassName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "."

    .line 260
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 261
    aget-object v4, v0, v3

    invoke-virtual {v4}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 263
    :cond_1
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->v(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static v(Ljava/lang/String;)V
    .locals 1

    const-string v0, "TTLiveLogger"

    .line 35
    invoke-static {v0, p0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->v(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 39
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 45
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x2

    if-gt v0, v1, :cond_2

    .line 46
    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    .line 50
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    if-nez p2, :cond_1

    return-void

    .line 56
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x2

    if-gt v0, v1, :cond_2

    .line 57
    invoke-static {p0, p1, p2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    return-void
.end method

.method public static varargs v(Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 2

    .line 61
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 67
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x2

    if-gt v0, v1, :cond_2

    .line 68
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->formatMsgs([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static w(Ljava/lang/String;)V
    .locals 1

    .line 155
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v0, "TTLiveLogger"

    .line 158
    invoke-static {v0, p0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 162
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 168
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x5

    if-gt v0, v1, :cond_2

    .line 169
    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    .line 173
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    if-nez p2, :cond_1

    return-void

    .line 179
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x5

    if-gt v0, v1, :cond_2

    .line 180
    invoke-static {p0, p1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    return-void
.end method

.method public static varargs w(Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 2

    .line 185
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->DEBUG:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    return-void

    .line 191
    :cond_1
    sget v0, Lcom/bytedance/android/openliveplugin/material/TTLogger;->sLevel:I

    const/4 v1, 0x5

    if-gt v0, v1, :cond_2

    .line 192
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->formatMsgs([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method
