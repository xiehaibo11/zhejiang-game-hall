.class public final Lcom/kwad/sdk/core/videocache/f$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/videocache/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field private awh:Ljava/io/File;

.field private awi:Lcom/kwad/sdk/core/videocache/a/c;

.field private awj:Lcom/kwad/sdk/core/videocache/a/a;

.field private awk:Lcom/kwad/sdk/core/videocache/d/b;

.field private awl:Lcom/kwad/sdk/core/videocache/b/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/core/videocache/d/c;->bl(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/d/b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/videocache/f$a;->awk:Lcom/kwad/sdk/core/videocache/d/b;

    invoke-static {p1}, Lcom/kwad/sdk/core/videocache/n;->bi(Landroid/content/Context;)Ljava/io/File;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/f$a;->awh:Ljava/io/File;

    new-instance p1, Lcom/kwad/sdk/core/videocache/a/g;

    const-wide/32 v0, 0x20000000

    invoke-direct {p1, v0, v1}, Lcom/kwad/sdk/core/videocache/a/g;-><init>(J)V

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/f$a;->awj:Lcom/kwad/sdk/core/videocache/a/a;

    new-instance p1, Lcom/kwad/sdk/core/videocache/a/f;

    invoke-direct {p1}, Lcom/kwad/sdk/core/videocache/a/f;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/f$a;->awi:Lcom/kwad/sdk/core/videocache/a/c;

    new-instance p1, Lcom/kwad/sdk/core/videocache/b/a;

    invoke-direct {p1}, Lcom/kwad/sdk/core/videocache/b/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/f$a;->awl:Lcom/kwad/sdk/core/videocache/b/b;

    return-void
.end method

.method private DF()Lcom/kwad/sdk/core/videocache/c;
    .locals 7

    new-instance v6, Lcom/kwad/sdk/core/videocache/c;

    iget-object v1, p0, Lcom/kwad/sdk/core/videocache/f$a;->awh:Ljava/io/File;

    iget-object v2, p0, Lcom/kwad/sdk/core/videocache/f$a;->awi:Lcom/kwad/sdk/core/videocache/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/videocache/f$a;->awj:Lcom/kwad/sdk/core/videocache/a/a;

    iget-object v4, p0, Lcom/kwad/sdk/core/videocache/f$a;->awk:Lcom/kwad/sdk/core/videocache/d/b;

    iget-object v5, p0, Lcom/kwad/sdk/core/videocache/f$a;->awl:Lcom/kwad/sdk/core/videocache/b/b;

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/kwad/sdk/core/videocache/c;-><init>(Ljava/io/File;Lcom/kwad/sdk/core/videocache/a/c;Lcom/kwad/sdk/core/videocache/a/a;Lcom/kwad/sdk/core/videocache/d/b;Lcom/kwad/sdk/core/videocache/b/b;)V

    return-object v6
.end method


# virtual methods
.method public final DE()Lcom/kwad/sdk/core/videocache/f;
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/core/videocache/f$a;->DF()Lcom/kwad/sdk/core/videocache/c;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/videocache/f;

    const/4 v2, 0x0

    invoke-direct {v1, v0, v2}, Lcom/kwad/sdk/core/videocache/f;-><init>(Lcom/kwad/sdk/core/videocache/c;B)V

    return-object v1
.end method

.method public final ah(J)Lcom/kwad/sdk/core/videocache/f$a;
    .locals 2

    new-instance p1, Lcom/kwad/sdk/core/videocache/a/g;

    const-wide/32 v0, 0x6400000

    invoke-direct {p1, v0, v1}, Lcom/kwad/sdk/core/videocache/a/g;-><init>(J)V

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/f$a;->awj:Lcom/kwad/sdk/core/videocache/a/a;

    return-object p0
.end method
