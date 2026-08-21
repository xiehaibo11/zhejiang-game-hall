.class public Lcom/sigmob/sdk/archives/d;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "ar"

.field public static final b:Ljava/lang/String; = "cpio"

.field public static final c:Ljava/lang/String; = "dump"

.field public static final d:Ljava/lang/String; = "jar"

.field public static final e:Ljava/lang/String; = "zip"

.field private static final f:Ljava/lang/String; = "tar"


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/io/InputStream;)Lcom/sigmob/sdk/archives/c;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/archives/b;
        }
    .end annotation

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Ljava/io/InputStream;->markSupported()Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v0, 0xc

    new-array v1, v0, [B

    invoke-virtual {p1, v0}, Ljava/io/InputStream;->mark(I)V

    :try_start_0
    invoke-virtual {p1, v1}, Ljava/io/InputStream;->read([B)I

    invoke-virtual {p1}, Ljava/io/InputStream;->reset()V

    const/16 v0, 0x20

    new-array v1, v0, [B

    invoke-virtual {p1, v0}, Ljava/io/InputStream;->mark(I)V

    invoke-virtual {p1, v1}, Ljava/io/InputStream;->read([B)I

    invoke-virtual {p1}, Ljava/io/InputStream;->reset()V

    const/16 v0, 0x200

    new-array v1, v0, [B

    invoke-virtual {p1, v0}, Ljava/io/InputStream;->mark(I)V

    invoke-virtual {p1, v1}, Ljava/io/InputStream;->read([B)I

    move-result v0

    invoke-virtual {p1}, Ljava/io/InputStream;->reset()V

    invoke-static {v1, v0}, Lcom/sigmob/sdk/archives/tar/b;->a([BI)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/archives/tar/b;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/archives/tar/b;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :cond_0
    :try_start_1
    new-instance v0, Lcom/sigmob/sdk/archives/tar/b;

    new-instance v2, Ljava/io/ByteArrayInputStream;

    invoke-direct {v2, v1}, Ljava/io/ByteArrayInputStream;-><init>([B)V

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/archives/tar/b;-><init>(Ljava/io/InputStream;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/b;->a()Lcom/sigmob/sdk/archives/a;

    new-instance v0, Lcom/sigmob/sdk/archives/tar/b;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/archives/tar/b;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v0

    :catchall_0
    new-instance p1, Lcom/sigmob/sdk/archives/b;

    const-string v0, "No Archiver found for the stream signature"

    invoke-direct {p1, v0}, Lcom/sigmob/sdk/archives/b;-><init>(Ljava/lang/String;)V

    throw p1

    :catch_0
    move-exception p1

    new-instance v0, Lcom/sigmob/sdk/archives/b;

    const-string v1, "Could not use reset and mark operations."

    invoke-direct {v0, v1, p1}, Lcom/sigmob/sdk/archives/b;-><init>(Ljava/lang/String;Ljava/lang/Exception;)V

    throw v0

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Mark is not supported."

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_2
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Stream must not be null."

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public a(Ljava/lang/String;Ljava/io/InputStream;)Lcom/sigmob/sdk/archives/c;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/archives/b;
        }
    .end annotation

    if-eqz p1, :cond_2

    if-eqz p2, :cond_1

    const-string v0, "tar"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance p1, Lcom/sigmob/sdk/archives/tar/b;

    invoke-direct {p1, p2}, Lcom/sigmob/sdk/archives/tar/b;-><init>(Ljava/io/InputStream;)V

    return-object p1

    :cond_0
    new-instance p2, Lcom/sigmob/sdk/archives/b;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Archiver: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " not found."

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Lcom/sigmob/sdk/archives/b;-><init>(Ljava/lang/String;)V

    throw p2

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "InputStream must not be null."

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_2
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "Archivername must not be null."

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
