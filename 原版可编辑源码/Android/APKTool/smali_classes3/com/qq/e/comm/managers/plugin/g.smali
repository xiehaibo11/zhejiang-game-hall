.class Lcom/qq/e/comm/managers/plugin/g;
.super Ljava/lang/Object;
.source ""


# instance fields
.field private final a:Ljava/io/File;

.field private final b:Ljava/io/File;

.field private c:Ljava/lang/String;

.field private d:I

.field private e:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/io/File;Ljava/io/File;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/qq/e/comm/managers/plugin/g;->a:Ljava/io/File;

    iput-object p2, p0, Lcom/qq/e/comm/managers/plugin/g;->b:Ljava/io/File;

    return-void
.end method

.method private a(Ljava/io/File;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "Exception while close bufferreader"

    const/4 v1, 0x0

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    goto :goto_5

    :cond_0
    :try_start_0
    new-instance v2, Ljava/io/InputStreamReader;

    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, p1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    const-string p1, "UTF-8"

    invoke-direct {v2, v3, p1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V

    new-instance p1, Ljava/io/BufferedReader;

    invoke-direct {p1, v2}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    :goto_0
    invoke-virtual {p1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_1
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-virtual {p1}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    invoke-static {v0}, Lcom/qq/e/comm/util/GDTLogger;->d(Ljava/lang/String;)V

    :goto_1
    return-object v1

    :catch_1
    move-exception v1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_3

    :catch_2
    move-exception p1

    move-object v4, v1

    move-object v1, p1

    move-object p1, v4

    :goto_2
    :try_start_3
    throw v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception v1

    move-object v4, v1

    move-object v1, p1

    move-object p1, v4

    :goto_3
    if-eqz v1, :cond_2

    :try_start_4
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_4

    :catch_3
    invoke-static {v0}, Lcom/qq/e/comm/util/GDTLogger;->d(Ljava/lang/String;)V

    :cond_2
    :goto_4
    throw p1

    :cond_3
    :goto_5
    return-object v1
.end method


# virtual methods
.method a()Z
    .locals 6

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/qq/e/comm/managers/plugin/g;->b:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/qq/e/comm/managers/plugin/g;->a:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/qq/e/comm/managers/plugin/g;->b:Ljava/io/File;

    invoke-direct {p0, v1}, Lcom/qq/e/comm/managers/plugin/g;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/qq/e/comm/managers/plugin/g;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    :cond_0
    iget-object v1, p0, Lcom/qq/e/comm/managers/plugin/g;->e:Ljava/lang/String;

    const-string v2, "#####"

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x2

    if-ne v2, v3, :cond_1

    const/4 v2, 0x1

    aget-object v3, v1, v2

    aget-object v1, v1, v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1
    :try_start_1
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move v1, v0

    .line 2
    :goto_0
    :try_start_2
    sget-object v4, Lcom/qq/e/comm/managers/plugin/c$b;->a:Lcom/qq/e/comm/managers/plugin/c;

    .line 3
    iget-object v5, p0, Lcom/qq/e/comm/managers/plugin/g;->a:Ljava/io/File;

    invoke-virtual {v4, v3, v5}, Lcom/qq/e/comm/managers/plugin/c;->a(Ljava/lang/String;Ljava/io/File;)Z

    move-result v4

    if-eqz v4, :cond_1

    iput-object v3, p0, Lcom/qq/e/comm/managers/plugin/g;->c:Ljava/lang/String;

    iput v1, p0, Lcom/qq/e/comm/managers/plugin/g;->d:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return v2

    :cond_1
    return v0

    :catchall_1
    const-string v1, "Exception while checking plugin"

    invoke-static {v1}, Lcom/qq/e/comm/util/GDTLogger;->d(Ljava/lang/String;)V

    return v0
.end method

.method a(Ljava/io/File;Ljava/io/File;)Z
    .locals 1

    iget-object v0, p0, Lcom/qq/e/comm/managers/plugin/g;->a:Ljava/io/File;

    invoke-virtual {p1, v0}, Ljava/io/File;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/qq/e/comm/managers/plugin/g;->a:Ljava/io/File;

    invoke-static {v0, p1}, Lcom/qq/e/comm/managers/plugin/h;->a(Ljava/io/File;Ljava/io/File;)Z

    move-result p1

    if-eqz p1, :cond_1

    :cond_0
    iget-object p1, p0, Lcom/qq/e/comm/managers/plugin/g;->b:Ljava/io/File;

    invoke-virtual {p2, p1}, Ljava/io/File;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/qq/e/comm/managers/plugin/g;->b:Ljava/io/File;

    invoke-static {p1, p2}, Lcom/qq/e/comm/managers/plugin/h;->a(Ljava/io/File;Ljava/io/File;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    goto :goto_1

    :cond_2
    :goto_0
    const/4 p1, 0x1

    :goto_1
    return p1
.end method

.method b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/qq/e/comm/managers/plugin/g;->c:Ljava/lang/String;

    return-object v0
.end method

.method c()I
    .locals 1

    iget v0, p0, Lcom/qq/e/comm/managers/plugin/g;->d:I

    return v0
.end method

.method public d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/qq/e/comm/managers/plugin/g;->e:Ljava/lang/String;

    return-object v0
.end method
