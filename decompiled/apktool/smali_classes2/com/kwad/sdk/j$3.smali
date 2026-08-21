.class final Lcom/kwad/sdk/j$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/service/a/h;


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
.method public final pM()Z
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/q/b;->pL()Lcom/kwad/components/core/q/b;

    invoke-static {}, Lcom/kwad/components/core/q/b;->pM()Z

    move-result v0

    return v0
.end method

.method public final pN()I
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/q/b;->pL()Lcom/kwad/components/core/q/b;

    invoke-static {}, Lcom/kwad/components/core/q/b;->pN()I

    move-result v0

    return v0
.end method

.method public final pO()I
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/q/b;->pL()Lcom/kwad/components/core/q/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/q/b;->pO()I

    move-result v0

    return v0
.end method

.method public final wrapInputStream(Ljava/io/InputStream;)Ljava/io/InputStream;
    .locals 0

    invoke-static {}, Lcom/kwad/components/core/q/b;->pL()Lcom/kwad/components/core/q/b;

    invoke-static {p1}, Lcom/kwad/components/core/q/b;->wrapInputStream(Ljava/io/InputStream;)Ljava/io/InputStream;

    move-result-object p1

    return-object p1
.end method
