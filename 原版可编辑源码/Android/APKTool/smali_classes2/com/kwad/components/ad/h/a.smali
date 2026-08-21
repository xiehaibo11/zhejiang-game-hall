.class public final Lcom/kwad/components/ad/h/a;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/components/ad/b/a/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final S()Z
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/h/e;->fn()Lcom/kwad/components/ad/h/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/h/e;->S()Z

    move-result v0

    return v0
.end method

.method public final a(Lcom/kwad/components/ad/b/a/b;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/h/e;->fn()Lcom/kwad/components/ad/h/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/h/e;->a(Lcom/kwad/components/ad/b/a/b;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/b/a/b;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/h/e;->fn()Lcom/kwad/components/ad/h/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/h/e;->b(Lcom/kwad/components/ad/b/a/b;)V

    return-void
.end method

.method public final getComponentsType()Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/Class<",
            "Lcom/kwad/components/ad/b/a/a;",
            ">;"
        }
    .end annotation

    const-class v0, Lcom/kwad/components/ad/b/a/a;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method
