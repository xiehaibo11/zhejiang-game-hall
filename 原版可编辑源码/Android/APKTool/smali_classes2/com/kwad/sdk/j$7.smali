.class final Lcom/kwad/sdk/j$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/f;


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
.method public final sD()Z
    .locals 1

    const-class v0, Lcom/kwad/components/a/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/a/a/a;

    invoke-interface {v0}, Lcom/kwad/components/a/a/a;->sD()Z

    move-result v0

    return v0
.end method

.method public final xs()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->xs()Z

    move-result v0

    return v0
.end method

.method public final xt()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->xt()Z

    move-result v0

    return v0
.end method
