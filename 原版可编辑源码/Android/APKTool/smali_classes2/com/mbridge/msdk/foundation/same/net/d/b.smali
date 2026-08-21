.class public final Lcom/mbridge/msdk/foundation/same/net/d/b;
.super Ljava/lang/Object;
.source "FileDownloader.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/same/net/d/b$a;
    }
.end annotation


# instance fields
.field private a:Lcom/mbridge/msdk/foundation/same/net/j;

.field private b:I

.field private c:Ljava/util/LinkedList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedList<",
            "Lcom/mbridge/msdk/foundation/same/net/d/b$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/foundation/same/net/j;I)V
    .locals 1

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->c:Ljava/util/LinkedList;

    .line 33
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->a:Lcom/mbridge/msdk/foundation/same/net/j;

    .line 34
    iput p2, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->b:I

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/same/net/d/b;)Lcom/mbridge/msdk/foundation/same/net/j;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->a:Lcom/mbridge/msdk/foundation/same/net/j;

    return-object p0
.end method

.method private a()V
    .locals 3

    .line 65
    monitor-enter p0

    const/4 v0, 0x0

    .line 68
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->c:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/same/net/d/b$a;

    .line 69
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/same/net/d/b$a;->a()Z

    move-result v2

    if-eqz v2, :cond_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 71
    :cond_1
    iget v1, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->b:I

    if-lt v0, v1, :cond_2

    monitor-exit p0

    return-void

    .line 74
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->c:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/same/net/d/b$a;

    .line 75
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/net/d/b$a;->a(Lcom/mbridge/msdk/foundation/same/net/d/b$a;)Z

    move-result v2

    if-eqz v2, :cond_3

    add-int/lit8 v0, v0, 0x1

    iget v2, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->b:I

    if-ne v0, v2, :cond_3

    monitor-exit p0

    return-void

    .line 77
    :cond_4
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/same/net/d/b;Lcom/mbridge/msdk/foundation/same/net/d/b$a;)V
    .locals 1

    .line 1086
    monitor-enter p0

    .line 1087
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->c:Ljava/util/LinkedList;

    invoke-virtual {v0, p1}, Ljava/util/LinkedList;->remove(Ljava/lang/Object;)Z

    .line 1088
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1089
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/d/b;->a()V

    return-void

    :catchall_0
    move-exception p1

    .line 1088
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method


# virtual methods
.method public final a(Ljava/io/File;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/e;)Lcom/mbridge/msdk/foundation/same/net/d/b$a;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/same/net/e<",
            "Ljava/lang/Void;",
            ">;)",
            "Lcom/mbridge/msdk/foundation/same/net/d/b$a;"
        }
    .end annotation

    .line 46
    new-instance v6, Lcom/mbridge/msdk/foundation/same/net/d/b$a;

    const/4 v5, 0x0

    move-object v0, v6

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/same/net/d/b$a;-><init>(Lcom/mbridge/msdk/foundation/same/net/d/b;Ljava/io/File;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/net/e;Lcom/mbridge/msdk/foundation/same/net/d/b$1;)V

    .line 47
    monitor-enter p0

    .line 48
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/d/b;->c:Ljava/util/LinkedList;

    invoke-virtual {p1, v6}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    .line 49
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 50
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/d/b;->a()V

    return-object v6

    :catchall_0
    move-exception p1

    .line 49
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method
