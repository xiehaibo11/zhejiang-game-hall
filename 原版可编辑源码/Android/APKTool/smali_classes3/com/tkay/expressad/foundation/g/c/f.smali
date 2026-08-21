.class public final Lcom/tkay/expressad/foundation/g/c/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/g/c/f$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "TkayDirManager"

.field private static d:Lcom/tkay/expressad/foundation/g/c/f;


# instance fields
.field private b:Lcom/tkay/expressad/foundation/g/c/b;

.field private c:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/foundation/g/c/f$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/foundation/g/c/b;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/c/f;->b:Lcom/tkay/expressad/foundation/g/c/b;

    .line 24
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/c/f;->c:Ljava/util/ArrayList;

    return-void
.end method

.method public static declared-synchronized a()Lcom/tkay/expressad/foundation/g/c/f;
    .locals 3

    const-class v0, Lcom/tkay/expressad/foundation/g/c/f;

    monitor-enter v0

    .line 33
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/f;->d:Lcom/tkay/expressad/foundation/g/c/f;

    if-nez v1, :cond_0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 34
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/r;->a(Landroid/content/Context;)V

    .line 36
    :cond_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/f;->d:Lcom/tkay/expressad/foundation/g/c/f;

    if-nez v1, :cond_1

    const-string v1, "TkayDirManager"

    const-string v2, "mDirectoryManager == null"

    .line 37
    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 40
    :cond_1
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/f;->d:Lcom/tkay/expressad/foundation/g/c/f;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static a(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/io/File;
    .locals 3

    .line 45
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/g/c/f;->a()Lcom/tkay/expressad/foundation/g/c/f;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/tkay/expressad/foundation/g/c/f;->a()Lcom/tkay/expressad/foundation/g/c/f;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/c/f;->c:Ljava/util/ArrayList;

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/tkay/expressad/foundation/g/c/f;->a()Lcom/tkay/expressad/foundation/g/c/f;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/c/f;->c:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 46
    invoke-static {}, Lcom/tkay/expressad/foundation/g/c/f;->a()Lcom/tkay/expressad/foundation/g/c/f;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/c/f;->c:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/g/c/f$a;

    .line 47
    iget-object v2, v1, Lcom/tkay/expressad/foundation/g/c/f$a;->a:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-virtual {v2, p0}, Lcom/tkay/expressad/foundation/g/c/c;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 48
    iget-object p0, v1, Lcom/tkay/expressad/foundation/g/c/f$a;->b:Ljava/io/File;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 53
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static declared-synchronized a(Lcom/tkay/expressad/foundation/g/c/b;)V
    .locals 2

    const-class v0, Lcom/tkay/expressad/foundation/g/c/f;

    monitor-enter v0

    .line 28
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/f;->d:Lcom/tkay/expressad/foundation/g/c/f;

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/tkay/expressad/foundation/g/c/f;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/g/c/f;-><init>(Lcom/tkay/expressad/foundation/g/c/b;)V

    sput-object v1, Lcom/tkay/expressad/foundation/g/c/f;->d:Lcom/tkay/expressad/foundation/g/c/f;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 31
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private a(Lcom/tkay/expressad/foundation/g/c/a;)Z
    .locals 6

    .line 79
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/c/a;->c()Lcom/tkay/expressad/foundation/g/c/a;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 81
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/c/a;->b()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 83
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/c/a;->a()Lcom/tkay/expressad/foundation/g/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/c/f;->a(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_1

    return v1

    .line 87
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/c/a;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 90
    :goto_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 91
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    const/4 v3, 0x1

    if-nez v0, :cond_2

    .line 92
    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    move-result v0

    goto :goto_1

    :cond_2
    move v0, v3

    :goto_1
    if-nez v0, :cond_3

    return v1

    .line 99
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/c/f;->c:Ljava/util/ArrayList;

    new-instance v4, Lcom/tkay/expressad/foundation/g/c/f$a;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/c/a;->a()Lcom/tkay/expressad/foundation/g/c/c;

    move-result-object v5

    invoke-direct {v4, v5, v2}, Lcom/tkay/expressad/foundation/g/c/f$a;-><init>(Lcom/tkay/expressad/foundation/g/c/c;Ljava/io/File;)V

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 100
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/c/a;->d()Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 102
    invoke-interface {p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_4
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/g/c/a;

    .line 103
    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/c/f;->a(Lcom/tkay/expressad/foundation/g/c/a;)Z

    move-result v0

    if-nez v0, :cond_4

    return v1

    :cond_5
    return v3
.end method

.method public static b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;
    .locals 0

    .line 59
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/c/f;->a(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 61
    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public final b()Z
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/c/f;->b:Lcom/tkay/expressad/foundation/g/c/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/g/c/b;->a()Lcom/tkay/expressad/foundation/g/c/a;

    move-result-object v0

    .line 68
    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/c/f;->a(Lcom/tkay/expressad/foundation/g/c/a;)Z

    move-result v0

    return v0
.end method
