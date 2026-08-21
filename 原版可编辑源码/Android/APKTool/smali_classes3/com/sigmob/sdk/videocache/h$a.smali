.class public final Lcom/sigmob/sdk/videocache/h$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/videocache/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# static fields
.field private static final a:J = 0x20000000L


# instance fields
.field private b:Ljava/io/File;

.field private c:Lcom/sigmob/sdk/videocache/file/c;

.field private d:Lcom/sigmob/sdk/videocache/file/a;

.field private e:Lcom/sigmob/sdk/videocache/sourcestorage/c;

.field private f:Lcom/sigmob/sdk/videocache/headers/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/sourcestorage/d;->a(Landroid/content/Context;)Lcom/sigmob/sdk/videocache/sourcestorage/c;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/h$a;->e:Lcom/sigmob/sdk/videocache/sourcestorage/c;

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/u;->a(Landroid/content/Context;)Ljava/io/File;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->b:Ljava/io/File;

    new-instance p1, Lcom/sigmob/sdk/videocache/file/h;

    const-wide/32 v0, 0x20000000

    invoke-direct {p1, v0, v1}, Lcom/sigmob/sdk/videocache/file/h;-><init>(J)V

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->d:Lcom/sigmob/sdk/videocache/file/a;

    new-instance p1, Lcom/sigmob/sdk/videocache/file/f;

    invoke-direct {p1}, Lcom/sigmob/sdk/videocache/file/f;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->c:Lcom/sigmob/sdk/videocache/file/c;

    new-instance p1, Lcom/sigmob/sdk/videocache/headers/a;

    invoke-direct {p1}, Lcom/sigmob/sdk/videocache/headers/a;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->f:Lcom/sigmob/sdk/videocache/headers/b;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videocache/h$a;)Lcom/sigmob/sdk/videocache/e;
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/h$a;->b()Lcom/sigmob/sdk/videocache/e;

    move-result-object p0

    return-object p0
.end method

.method private b()Lcom/sigmob/sdk/videocache/e;
    .locals 7

    new-instance v6, Lcom/sigmob/sdk/videocache/e;

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/h$a;->b:Ljava/io/File;

    iget-object v2, p0, Lcom/sigmob/sdk/videocache/h$a;->c:Lcom/sigmob/sdk/videocache/file/c;

    iget-object v3, p0, Lcom/sigmob/sdk/videocache/h$a;->d:Lcom/sigmob/sdk/videocache/file/a;

    iget-object v4, p0, Lcom/sigmob/sdk/videocache/h$a;->e:Lcom/sigmob/sdk/videocache/sourcestorage/c;

    iget-object v5, p0, Lcom/sigmob/sdk/videocache/h$a;->f:Lcom/sigmob/sdk/videocache/headers/b;

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/videocache/e;-><init>(Ljava/io/File;Lcom/sigmob/sdk/videocache/file/c;Lcom/sigmob/sdk/videocache/file/a;Lcom/sigmob/sdk/videocache/sourcestorage/c;Lcom/sigmob/sdk/videocache/headers/b;)V

    return-object v6
.end method


# virtual methods
.method public a(I)Lcom/sigmob/sdk/videocache/h$a;
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/videocache/file/g;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/videocache/file/g;-><init>(I)V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/h$a;->d:Lcom/sigmob/sdk/videocache/file/a;

    return-object p0
.end method

.method public a(J)Lcom/sigmob/sdk/videocache/h$a;
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/videocache/file/h;

    invoke-direct {v0, p1, p2}, Lcom/sigmob/sdk/videocache/file/h;-><init>(J)V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/h$a;->d:Lcom/sigmob/sdk/videocache/file/a;

    return-object p0
.end method

.method public a(Lcom/sigmob/sdk/videocache/file/a;)Lcom/sigmob/sdk/videocache/h$a;
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/videocache/file/a;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->d:Lcom/sigmob/sdk/videocache/file/a;

    return-object p0
.end method

.method public a(Lcom/sigmob/sdk/videocache/file/c;)Lcom/sigmob/sdk/videocache/h$a;
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/videocache/file/c;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->c:Lcom/sigmob/sdk/videocache/file/c;

    return-object p0
.end method

.method public a(Lcom/sigmob/sdk/videocache/headers/b;)Lcom/sigmob/sdk/videocache/h$a;
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/videocache/headers/b;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->f:Lcom/sigmob/sdk/videocache/headers/b;

    return-object p0
.end method

.method public a(Ljava/io/File;)Lcom/sigmob/sdk/videocache/h$a;
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/io/File;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$a;->b:Ljava/io/File;

    return-object p0
.end method

.method public a()Lcom/sigmob/sdk/videocache/h;
    .locals 3

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/h$a;->b()Lcom/sigmob/sdk/videocache/e;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/videocache/h;

    const/4 v2, 0x0

    invoke-direct {v1, v0, v2}, Lcom/sigmob/sdk/videocache/h;-><init>(Lcom/sigmob/sdk/videocache/e;Lcom/sigmob/sdk/videocache/h$1;)V

    return-object v1
.end method
