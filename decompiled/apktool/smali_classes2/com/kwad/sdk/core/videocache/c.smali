.class final Lcom/kwad/sdk/core/videocache/c;
.super Ljava/lang/Object;


# instance fields
.field public final awh:Ljava/io/File;

.field public final awi:Lcom/kwad/sdk/core/videocache/a/c;

.field public final awj:Lcom/kwad/sdk/core/videocache/a/a;

.field public final awk:Lcom/kwad/sdk/core/videocache/d/b;

.field public final awl:Lcom/kwad/sdk/core/videocache/b/b;


# direct methods
.method constructor <init>(Ljava/io/File;Lcom/kwad/sdk/core/videocache/a/c;Lcom/kwad/sdk/core/videocache/a/a;Lcom/kwad/sdk/core/videocache/d/b;Lcom/kwad/sdk/core/videocache/b/b;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/c;->awh:Ljava/io/File;

    iput-object p2, p0, Lcom/kwad/sdk/core/videocache/c;->awi:Lcom/kwad/sdk/core/videocache/a/c;

    iput-object p3, p0, Lcom/kwad/sdk/core/videocache/c;->awj:Lcom/kwad/sdk/core/videocache/a/a;

    iput-object p4, p0, Lcom/kwad/sdk/core/videocache/c;->awk:Lcom/kwad/sdk/core/videocache/d/b;

    iput-object p5, p0, Lcom/kwad/sdk/core/videocache/c;->awl:Lcom/kwad/sdk/core/videocache/b/b;

    return-void
.end method


# virtual methods
.method final dK(Ljava/lang/String;)Ljava/io/File;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/videocache/c;->awi:Lcom/kwad/sdk/core/videocache/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/videocache/a/c;->generate(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/kwad/sdk/core/videocache/c;->awh:Ljava/io/File;

    invoke-direct {v0, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method
