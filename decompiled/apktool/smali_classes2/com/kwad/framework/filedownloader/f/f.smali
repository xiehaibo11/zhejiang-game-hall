.class public Lcom/kwad/framework/filedownloader/f/f;
.super Ljava/lang/Object;


# static fields
.field private static aeR:I = 0x10000

.field private static aeS:J = 0x7d0L

.field private static aeT:Ljava/lang/String;

.field private static aeU:Ljava/lang/Boolean;

.field private static aeV:Ljava/lang/Boolean;

.field private static final aeW:Ljava/util/regex/Pattern;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "attachment;\\s*filename\\s*=\\s*\"([^\"]*)\""

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/framework/filedownloader/f/f;->aeW:Ljava/util/regex/Pattern;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static O(J)V
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->aq(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    sput-wide p0, Lcom/kwad/framework/filedownloader/f/f;->aeS:J

    return-void

    :cond_0
    new-instance p0, Ljava/lang/IllegalAccessException;

    const-string p1, "This value is used in the :filedownloader process, so set this value in your process is without effect. You can add \'process.non-separate=true\' in \'filedownloader.properties\' to share the main process to FileDownloadService. Or you can configure this value in \'filedownloader.properties\' by \'download.min-progress-time\'."

    invoke-direct {p0, p1}, Ljava/lang/IllegalAccessException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static a(ILcom/kwad/framework/filedownloader/a/b;)Ljava/lang/String;
    .locals 3

    if-eqz p1, :cond_1

    const-string v0, "Etag"

    invoke-interface {p1, v0}, Lcom/kwad/framework/filedownloader/a/b;->aY(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const-class v0, Lcom/kwad/framework/filedownloader/f/f;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 v2, 0x1

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v1, v2

    const-string p0, "etag find %s for task(%d)"

    invoke-static {v0, p0, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-object p1

    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "connection is null when findEtag"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static a(Lcom/kwad/framework/filedownloader/a/b;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "Content-Disposition"

    invoke-interface {p0, v0}, Lcom/kwad/framework/filedownloader/a/b;->aY(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/framework/filedownloader/f/f;->bq(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/kwad/framework/filedownloader/f/f;->bn(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :cond_0
    const-string p1, "\\/"

    const-string v0, "_"

    invoke-virtual {p0, p1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;ZLjava/lang/String;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    if-eqz p1, :cond_2

    if-nez p2, :cond_1

    return-object v0

    :cond_1
    invoke-static {p0, p2}, Lcom/kwad/framework/filedownloader/f/f;->q(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :cond_2
    return-object p0
.end method

.method private static a(ILcom/kwad/framework/filedownloader/d/c;Ljava/lang/Boolean;)Z
    .locals 3

    const-class p2, Lcom/kwad/framework/filedownloader/f/f;

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-nez p1, :cond_1

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_0

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v1

    const-string p0, "can\'t continue %d model == null"

    invoke-static {p2, p0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return v1

    :cond_1
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object v2

    if-nez v2, :cond_3

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_2

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v1

    const-string p0, "can\'t continue %d temp path == null"

    invoke-static {p2, p0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    return v1

    :cond_3
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->uE()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {p0, p1, p2, v0}, Lcom/kwad/framework/filedownloader/f/f;->a(ILcom/kwad/framework/filedownloader/d/c;Ljava/lang/String;Ljava/lang/Boolean;)Z

    move-result p0

    return p0
.end method

.method public static a(ILcom/kwad/framework/filedownloader/d/c;Ljava/lang/String;Ljava/lang/Boolean;)Z
    .locals 11

    const-class v0, Lcom/kwad/framework/filedownloader/f/f;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez p2, :cond_0

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_7

    new-array p1, v2, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v1

    const-string p0, "can\'t continue %d path = null"

    invoke-static {v0, p0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_2

    :cond_0
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result p2

    invoke-virtual {v3}, Ljava/io/File;->isDirectory()Z

    move-result v4

    const/4 v5, 0x2

    const/4 v6, 0x3

    if-eqz p2, :cond_6

    if-eqz v4, :cond_1

    goto/16 :goto_1

    :cond_1
    invoke-virtual {v3}, Ljava/io/File;->length()J

    move-result-wide v3

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v7

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result p2

    if-gt p2, v2, :cond_2

    const-wide/16 v9, 0x0

    cmp-long p2, v7, v9

    if-nez p2, :cond_2

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_7

    new-array p1, v2, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v1

    const-string p0, "can\'t continue %d the downloaded-record is zero."

    invoke-static {v0, p0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_2

    :cond_2
    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide p1

    cmp-long v9, v3, v7

    if-ltz v9, :cond_5

    const-wide/16 v9, -0x1

    cmp-long v9, p1, v9

    if-eqz v9, :cond_3

    cmp-long v9, v3, p1

    if-gtz v9, :cond_5

    cmp-long v9, v7, p1

    if-ltz v9, :cond_3

    goto :goto_0

    :cond_3
    if-eqz p3, :cond_4

    invoke-virtual {p3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p3

    if-nez p3, :cond_4

    cmp-long p1, p1, v3

    if-nez p1, :cond_4

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_7

    new-array p1, v2, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v1

    const-string p0, "can\'t continue %d, because of the output stream doesn\'t support seek, but the task has already pre-allocated, so we only can download it from the very beginning."

    invoke-static {v0, p0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_2

    :cond_4
    move v1, v2

    goto :goto_2

    :cond_5
    :goto_0
    sget-boolean p3, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p3, :cond_7

    const/4 p3, 0x4

    new-array p3, p3, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p3, v1

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    aput-object p0, p3, v2

    invoke-static {v7, v8}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    aput-object p0, p3, v5

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    aput-object p0, p3, v6

    const-string p0, "can\'t continue %d dirty data fileLength[%d] sofar[%d] total[%d]"

    invoke-static {v0, p0, p3}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_2

    :cond_6
    :goto_1
    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_7

    new-array p1, v6, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v1

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    aput-object p0, p1, v2

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    aput-object p0, p1, v5

    const-string p0, "can\'t continue %d file not suit, exists[%B], directory[%B]"

    invoke-static {v0, p0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_7
    :goto_2
    return v1
.end method

.method public static aq(Landroid/content/Context;)Z
    .locals 3

    sget-object v0, Lcom/kwad/framework/filedownloader/f/f;->aeU:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0

    :cond_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/f/e;->vO()Lcom/kwad/framework/filedownloader/f/e;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/framework/filedownloader/f/e;->aeM:Z

    if-eqz v0, :cond_1

    const/4 p0, 0x1

    goto :goto_0

    :cond_1
    const-string v0, "activity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    if-nez v0, :cond_2

    const-class p0, Lcom/kwad/framework/filedownloader/f/f;

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "fail to get the activity manager!"

    invoke-static {p0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v0

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/utils/ap;->getProcessName(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    const-string v0, ":filedownloader"

    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p0

    :goto_0
    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    sput-object p0, Lcom/kwad/framework/filedownloader/f/f;->aeU:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0
.end method

.method public static ar(Landroid/content/Context;)V
    .locals 1

    invoke-static {p0}, Lcom/kwad/framework/filedownloader/f/f;->as(Landroid/content/Context;)Ljava/io/File;

    move-result-object p0

    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    invoke-virtual {p0}, Ljava/io/File;->createNewFile()Z
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    return-void
.end method

.method private static as(Landroid/content/Context;)Ljava/io/File;
    .locals 2

    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "filedownloader"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, ".old_file_converted"

    invoke-direct {v0, p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public static b(ILcom/kwad/framework/filedownloader/a/b;)J
    .locals 5

    const-string v0, "Content-Length"

    invoke-interface {p1, v0}, Lcom/kwad/framework/filedownloader/a/b;->aY(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->bu(Ljava/lang/String;)J

    move-result-wide v0

    const-string v2, "Transfer-Encoding"

    invoke-interface {p1, v2}, Lcom/kwad/framework/filedownloader/a/b;->aY(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    const-wide/16 v3, -0x1

    if-gez v2, :cond_3

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_0

    const-string v2, "chunked"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    move p1, v1

    :goto_0
    if-nez p1, :cond_2

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/e;->vO()Lcom/kwad/framework/filedownloader/f/e;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/framework/filedownloader/f/e;->aeL:Z

    if-eqz p1, :cond_1

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_2

    const-class p1, Lcom/kwad/framework/filedownloader/f/f;

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v0, v1

    const-string p0, "%d response header is not legal but HTTP lenient is true, so handle as the case of transfer encoding chunk"

    invoke-static {p1, p0, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_1

    :cond_1
    new-instance p0, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;

    const-string p1, "can\'t know the size of the download file, and its Transfer-Encoding is not Chunked either.\nyou can ignore such exception by add http.lenient=true to the filedownloader.properties"

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/exception/FileDownloadGiveUpRetryException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_2
    :goto_1
    move-wide v0, v3

    :cond_3
    return-wide v0
.end method

.method public static varargs b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
    .locals 1

    sget-object v0, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    invoke-static {v0, p0, p1}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b(ILcom/kwad/framework/filedownloader/d/c;)Z
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/f;->a(ILcom/kwad/framework/filedownloader/d/c;Ljava/lang/Boolean;)Z

    move-result p0

    return p0
.end method

.method public static bH(I)V
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->aq(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    sput p0, Lcom/kwad/framework/filedownloader/f/f;->aeR:I

    return-void

    :cond_0
    new-instance p0, Ljava/lang/IllegalAccessException;

    const-string v0, "This value is used in the :filedownloader process, so set this value in your process is without effect. You can add \'process.non-separate=true\' in \'filedownloader.properties\' to share the main process to FileDownloadService. Or you can configure this value in \'filedownloader.properties\' by \'download.min-progress-step\'."

    invoke-direct {p0, v0}, Ljava/lang/IllegalAccessException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static bm(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/f;->vS()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/framework/filedownloader/f/f;->bn(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/framework/filedownloader/f/f;->q(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static bn(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/framework/filedownloader/f/f;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static bo(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string p0, "%s.temp"

    invoke-static {p0, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static bp(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    :try_start_0
    const-string v0, "MD5"

    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    const-string v1, "UTF-8"

    invoke-virtual {p0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    new-instance v0, Ljava/lang/StringBuilder;

    array-length v1, p0

    mul-int/lit8 v1, v1, 0x2

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(I)V

    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-byte v3, p0, v2

    and-int/lit16 v3, v3, 0xff

    const/16 v4, 0x10

    if-ge v3, v4, :cond_0

    const-string v4, "0"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    invoke-static {v3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :catch_0
    move-exception p0

    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Huh, UTF-8 should be supported?"

    invoke-direct {v0, v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0

    :catch_1
    move-exception p0

    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Huh, MD5 should be supported?"

    invoke-direct {v0, v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0
.end method

.method public static bq(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    sget-object v1, Lcom/kwad/framework/filedownloader/f/f;->aeW:Ljava/util/regex/Pattern;

    invoke-virtual {v1, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    invoke-virtual {p0}, Ljava/util/regex/Matcher;->find()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x1

    invoke-virtual {p0, v1}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :cond_1
    return-object v0
.end method

.method public static br(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    sget-char v1, Ljava/io/File;->separatorChar:C

    const/4 v2, 0x1

    const/4 v3, 0x2

    const/4 v4, 0x0

    const/16 v5, 0x5c

    if-ne v1, v5, :cond_0

    if-le v0, v3, :cond_0

    invoke-virtual {p0, v2}, Ljava/lang/String;->charAt(I)C

    move-result v1

    const/16 v5, 0x3a

    if-ne v1, v5, :cond_0

    move v1, v3

    goto :goto_0

    :cond_0
    move v1, v4

    :goto_0
    sget-char v5, Ljava/io/File;->separatorChar:C

    invoke-virtual {p0, v5}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v5

    const/4 v6, -0x1

    if-ne v5, v6, :cond_1

    if-lez v1, :cond_1

    goto :goto_1

    :cond_1
    move v3, v5

    :goto_1
    if-eq v3, v6, :cond_4

    sub-int/2addr v0, v2

    invoke-virtual {p0, v0}, Ljava/lang/String;->charAt(I)C

    move-result v0

    sget-char v5, Ljava/io/File;->separatorChar:C

    if-ne v0, v5, :cond_2

    goto :goto_2

    :cond_2
    sget-char v0, Ljava/io/File;->separatorChar:C

    invoke-virtual {p0, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    if-ne v0, v3, :cond_3

    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v0

    sget-char v1, Ljava/io/File;->separatorChar:C

    if-ne v0, v1, :cond_3

    add-int/2addr v3, v2

    invoke-virtual {p0, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    invoke-virtual {p0, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    :goto_2
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bs(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "FileDownloader-"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static bt(Ljava/lang/String;)Z
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0, p0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static bu(Ljava/lang/String;)J
    .locals 2

    const-wide/16 v0, -0x1

    if-nez p0, :cond_0

    return-wide v0

    :cond_0
    :try_start_0
    invoke-static {p0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-wide v0
.end method

.method public static bv(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/e/a;
    .locals 5

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    invoke-virtual {v0}, Ljava/io/File;->createNewFile()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v1, Ljava/lang/RuntimeException;

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p0

    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    aput-object p0, v4, v3

    const-string p0, "found invalid internal destination path[%s], & path is directory[%B]"

    invoke-static {p0, v4}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v1

    :cond_1
    :goto_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-nez p0, :cond_3

    invoke-virtual {v0}, Ljava/io/File;->createNewFile()Z

    move-result p0

    if-eqz p0, :cond_2

    goto :goto_1

    :cond_2
    new-instance p0, Ljava/io/IOException;

    new-array v1, v3, [Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v1, v2

    const-string v0, "create new file error  %s"

    invoke-static {v0, v1}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_3
    :goto_1
    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/kwad/framework/filedownloader/download/b;->b(Ljava/io/File;)Lcom/kwad/framework/filedownloader/e/a;

    move-result-object p0

    return-object p0

    :cond_4
    new-instance p0, Ljava/lang/RuntimeException;

    const-string v0, "found invalid internal destination path, empty"

    invoke-direct {p0, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private static bw(Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_0

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :cond_0
    return-void
.end method

.method public static bx(Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_0

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :cond_0
    return-void
.end method

.method public static g(Ljava/lang/String;Ljava/lang/String;Z)I
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/b;->uq()Lcom/kwad/framework/filedownloader/f/c$d;

    move-result-object v0

    invoke-interface {v0, p0, p1, p2}, Lcom/kwad/framework/filedownloader/f/c$d;->g(Ljava/lang/String;Ljava/lang/String;Z)I

    move-result p0

    return p0
.end method

.method public static g(JJ)Z
    .locals 2

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/f;->vQ()I

    move-result v0

    int-to-long v0, v0

    cmp-long p0, p0, v0

    if-lez p0, :cond_0

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/f;->vR()J

    move-result-wide p0

    cmp-long p0, p2, p0

    if-lez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static q(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    if-eqz p1, :cond_1

    if-eqz p0, :cond_0

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const/4 p0, 0x1

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    aput-object v1, v0, p0

    const/4 p0, 0x2

    aput-object p1, v0, p0

    const-string p0, "%s%s%s"

    invoke-static {p0, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    new-instance p0, Ljava/lang/IllegalStateException;

    const-string p1, "can\'t generate real path, the directory is null"

    invoke-direct {p0, p1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_1
    new-instance p0, Ljava/lang/IllegalStateException;

    const-string p1, "can\'t generate real path, the file name is null"

    invoke-direct {p0, p1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static r(Ljava/lang/String;Ljava/lang/String;)I
    .locals 2

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/download/b;->uq()Lcom/kwad/framework/filedownloader/f/c$d;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, p0, p1, v1}, Lcom/kwad/framework/filedownloader/f/c$d;->g(Ljava/lang/String;Ljava/lang/String;Z)I

    move-result p0

    return p0
.end method

.method public static s(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/framework/filedownloader/f/f;->bw(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/kwad/framework/filedownloader/f/f;->bx(Ljava/lang/String;)V

    return-void
.end method

.method private static vQ()I
    .locals 1

    sget v0, Lcom/kwad/framework/filedownloader/f/f;->aeR:I

    return v0
.end method

.method private static vR()J
    .locals 2

    sget-wide v0, Lcom/kwad/framework/filedownloader/f/f;->aeS:J

    return-wide v0
.end method

.method private static vS()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/framework/filedownloader/f/f;->aeT:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/framework/filedownloader/f/f;->aeT:Ljava/lang/String;

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_1

    invoke-static {}, Landroid/os/Environment;->getDownloadCacheDirectory()Ljava/io/File;

    move-result-object v0

    :goto_0
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v0

    goto :goto_0
.end method

.method public static vT()Z
    .locals 4

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/c;->vM()Landroid/content/Context;

    move-result-object v0

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez v0, :cond_0

    const-class v0, Lcom/kwad/framework/filedownloader/f/f;

    new-array v1, v1, [Ljava/lang/Object;

    const-string v3, "failed to get connectivity manager!"

    invoke-static {v0, v3, v1}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v2

    :cond_0
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getType()I

    move-result v0

    if-eq v0, v2, :cond_1

    goto :goto_0

    :cond_1
    return v1

    :cond_2
    :goto_0
    return v2
.end method

.method public static vU()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    const-string v2, "3.3.42"

    aput-object v2, v0, v1

    const-string v1, "FileDownloader/%s"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
