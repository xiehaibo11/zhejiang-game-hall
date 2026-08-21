.class final Lcom/kwad/sdk/j$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/service/a/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/j;->xo()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/diskcache/b/a;->cD(Ljava/lang/String;)V

    return-void
.end method

.method public final bR(Ljava/lang/String;)Ljava/io/File;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    return-object p1
.end method
