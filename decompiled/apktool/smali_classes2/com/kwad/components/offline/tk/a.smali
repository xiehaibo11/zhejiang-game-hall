.class public final Lcom/kwad/components/offline/tk/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/offline/api/b/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/offline/api/b/a;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/offline/tk/b;->sL()Lcom/kwad/components/offline/tk/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/offline/tk/b;->a(Lcom/kwad/components/core/offline/api/b/a;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/offline/api/b/a;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/offline/tk/b;->sL()Lcom/kwad/components/offline/tk/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/offline/tk/b;->b(Lcom/kwad/components/core/offline/api/b/a;)V

    return-void
.end method

.method public final getComponentsType()Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    const-class v0, Lcom/kwad/components/core/offline/api/b/b;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public final priority()I
    .locals 1

    const/16 v0, 0x64

    return v0
.end method
