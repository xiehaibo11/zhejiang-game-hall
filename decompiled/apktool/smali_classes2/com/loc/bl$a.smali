.class public final Lcom/loc/bl$a;
.super Ljava/lang/Object;
.source "DiskLruCache.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/bl;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x11
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/bl$a$a;
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/bl;

.field private final b:Lcom/loc/bl$c;

.field private final c:[Z

.field private d:Z

.field private e:Z


# direct methods
.method private constructor <init>(Lcom/loc/bl;Lcom/loc/bl$c;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/loc/bl$a;->b:Lcom/loc/bl$c;

    invoke-static {p2}, Lcom/loc/bl$c;->e(Lcom/loc/bl$c;)Z

    move-result p2

    if-eqz p2, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/loc/bl;->f(Lcom/loc/bl;)I

    move-result p1

    new-array p1, p1, [Z

    :goto_0
    iput-object p1, p0, Lcom/loc/bl$a;->c:[Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/loc/bl;Lcom/loc/bl$c;B)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/loc/bl$a;-><init>(Lcom/loc/bl;Lcom/loc/bl$c;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/bl$a;)Lcom/loc/bl$c;
    .locals 0

    iget-object p0, p0, Lcom/loc/bl$a;->b:Lcom/loc/bl$c;

    return-object p0
.end method

.method static synthetic b(Lcom/loc/bl$a;)[Z
    .locals 0

    iget-object p0, p0, Lcom/loc/bl$a;->c:[Z

    return-object p0
.end method

.method static synthetic c(Lcom/loc/bl$a;)Z
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/loc/bl$a;->d:Z

    return v0
.end method


# virtual methods
.method public final a()Ljava/io/OutputStream;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    invoke-static {v0}, Lcom/loc/bl;->f(Lcom/loc/bl;)I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/loc/bl$a;->b:Lcom/loc/bl$c;

    invoke-static {v1}, Lcom/loc/bl$c;->b(Lcom/loc/bl$c;)Lcom/loc/bl$a;

    move-result-object v1

    if-ne v1, p0, :cond_1

    iget-object v1, p0, Lcom/loc/bl$a;->b:Lcom/loc/bl$c;

    invoke-static {v1}, Lcom/loc/bl$c;->e(Lcom/loc/bl$c;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/loc/bl$a;->c:[Z

    const/4 v3, 0x1

    aput-boolean v3, v1, v2

    :cond_0
    iget-object v1, p0, Lcom/loc/bl$a;->b:Lcom/loc/bl$c;

    invoke-virtual {v1, v2}, Lcom/loc/bl$c;->b(I)Ljava/io/File;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/io/FileNotFoundException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    :try_start_2
    iget-object v3, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    invoke-static {v3}, Lcom/loc/bl;->g(Lcom/loc/bl;)Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->mkdirs()Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_3
    .catch Ljava/io/FileNotFoundException; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :goto_0
    :try_start_4
    new-instance v1, Lcom/loc/bl$a$a;

    invoke-direct {v1, p0, v3, v2}, Lcom/loc/bl$a$a;-><init>(Lcom/loc/bl$a;Ljava/io/OutputStream;B)V

    monitor-exit v0

    return-object v1

    :catch_1
    invoke-static {}, Lcom/loc/bl;->e()Ljava/io/OutputStream;

    move-result-object v1

    monitor-exit v0

    return-object v1

    :cond_1
    new-instance v1, Ljava/lang/IllegalStateException;

    invoke-direct {v1}, Ljava/lang/IllegalStateException;-><init>()V

    throw v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    throw v1

    :cond_2
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Expected index 0 to be greater than 0 and less than the maximum value count of "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    invoke-static {v2}, Lcom/loc/bl;->f(Lcom/loc/bl;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final b()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/loc/bl$a;->d:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    const/4 v2, 0x0

    invoke-static {v0, p0, v2}, Lcom/loc/bl;->a(Lcom/loc/bl;Lcom/loc/bl$a;Z)V

    iget-object v0, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    iget-object v2, p0, Lcom/loc/bl$a;->b:Lcom/loc/bl$c;

    invoke-static {v2}, Lcom/loc/bl$c;->d(Lcom/loc/bl$c;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/bl;->c(Ljava/lang/String;)Z

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    invoke-static {v0, p0, v1}, Lcom/loc/bl;->a(Lcom/loc/bl;Lcom/loc/bl$a;Z)V

    :goto_0
    iput-boolean v1, p0, Lcom/loc/bl$a;->e:Z

    return-void
.end method

.method public final c()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/loc/bl$a;->a:Lcom/loc/bl;

    const/4 v1, 0x0

    invoke-static {v0, p0, v1}, Lcom/loc/bl;->a(Lcom/loc/bl;Lcom/loc/bl$a;Z)V

    return-void
.end method
