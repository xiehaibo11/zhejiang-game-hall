.class public Lcom/ss/android/socialbase/downloader/logger/Logger;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;
    }
.end annotation


# static fields
.field public static final DEBUG:Z = false

.field private static final DOWNLOAD_TAG_PREFIX:Ljava/lang/String; = "Downloader-"

.field private static final TAG:Ljava/lang/String; = "DownloaderLogger"

.field private static mLevel:I = 0x4

.field private static sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static alertErrorInfo(Ljava/lang/String;)V
    .locals 1

    .line 227
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 228
    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0, p0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static d(Ljava/lang/String;)V
    .locals 1

    const-string v0, "DownloaderLogger"

    .line 68
    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 82
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_1

    .line 83
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 84
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 85
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logD(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    if-nez p1, :cond_0

    if-nez p2, :cond_0

    return-void

    .line 93
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_1

    .line 94
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 95
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 96
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logD(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static debug()Z
    .locals 2

    .line 38
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static downloaderTag(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 72
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 73
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Downloader-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string p0, "DownloaderLogger"

    return-object p0
.end method

.method public static e(Ljava/lang/String;)V
    .locals 1

    const-string v0, "DownloaderLogger"

    .line 153
    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 160
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x6

    if-gt v0, v1, :cond_1

    .line 161
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 162
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 163
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logE(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    if-nez p1, :cond_0

    if-nez p2, :cond_0

    return-void

    .line 171
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x6

    if-gt v0, v1, :cond_1

    .line 172
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 173
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 174
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logE(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    return-void
.end method

.method public static getLogLevel()I
    .locals 1

    .line 34
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    return v0
.end method

.method private static getSimpleClassName(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const/16 v0, 0x2e

    .line 209
    invoke-virtual {p0, v0}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v0

    if-gez v0, :cond_0

    return-object p0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    .line 213
    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static i(Ljava/lang/String;)V
    .locals 1

    const-string v0, "DownloaderLogger"

    .line 101
    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 108
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x4

    if-gt v0, v1, :cond_1

    .line 109
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 110
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 111
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logI(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    if-nez p1, :cond_0

    if-nez p2, :cond_0

    return-void

    .line 119
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x4

    if-gt v0, v1, :cond_1

    .line 120
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 121
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 122
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logI(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    return-void
.end method

.method public static k(Ljava/lang/String;)V
    .locals 1

    const-string v0, "DownloaderLogger"

    .line 179
    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->k(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static k(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 183
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x3

    if-gt v0, v1, :cond_0

    .line 184
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 185
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_1

    .line 186
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logK(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public static registerLogHandler(Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;)V
    .locals 0

    .line 235
    sput-object p0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    return-void
.end method

.method public static setLogLevel(I)V
    .locals 0

    .line 24
    sput p0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    return-void
.end method

.method public static setLogLevelInDownloaderProcess(I)V
    .locals 1

    const/4 v0, 0x1

    .line 28
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/impls/DownloadProxy;->get(Z)Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 30
    sput p0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    :cond_0
    return-void
.end method

.method public static st(Ljava/lang/String;I)V
    .locals 5

    .line 192
    :try_start_0
    new-instance v0, Ljava/lang/Exception;

    invoke-direct {v0}, Ljava/lang/Exception;-><init>()V

    throw v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    move-exception v0

    .line 194
    invoke-virtual {v0}, Ljava/lang/Exception;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    .line 195
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v2, 0x1

    move v3, v2

    .line 196
    :goto_0
    array-length v4, v0

    invoke-static {p1, v4}, Ljava/lang/Math;->min(II)I

    move-result v4

    if-ge v3, v4, :cond_1

    if-le v3, v2, :cond_0

    const-string v4, "\n"

    .line 198
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 200
    :cond_0
    aget-object v4, v0, v3

    invoke-virtual {v4}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/ss/android/socialbase/downloader/logger/Logger;->getSimpleClassName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "."

    .line 201
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 202
    aget-object v4, v0, v3

    invoke-virtual {v4}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 204
    :cond_1
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->v(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static throwException(Ljava/lang/Throwable;)V
    .locals 2

    if-nez p0, :cond_0

    return-void

    .line 220
    :cond_0
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 221
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 222
    :cond_1
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Error! Now in debug, we alert to you to correct it !"

    invoke-direct {v0, v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0
.end method

.method public static v(Ljava/lang/String;)V
    .locals 1

    const-string v0, "DownloaderLogger"

    .line 42
    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->v(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 49
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x2

    if-gt v0, v1, :cond_1

    .line 50
    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 51
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 52
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logV(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    if-nez p1, :cond_0

    if-nez p2, :cond_0

    return-void

    .line 60
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x2

    if-gt v0, v1, :cond_1

    .line 61
    invoke-static {p0, p1, p2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 62
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 63
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logV(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static w(Ljava/lang/String;)V
    .locals 1

    const-string v0, "DownloaderLogger"

    .line 127
    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 134
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x5

    if-gt v0, v1, :cond_1

    .line 135
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 136
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 137
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logW(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    if-nez p1, :cond_0

    if-nez p2, :cond_0

    return-void

    .line 145
    :cond_0
    sget v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->mLevel:I

    const/4 v1, 0x5

    if-gt v0, v1, :cond_1

    .line 146
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 147
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/logger/Logger;->sLogWritter:Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;

    if-eqz v0, :cond_2

    .line 148
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->downloaderTag(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/logger/Logger$ILogWritter;->logW(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    return-void
.end method
