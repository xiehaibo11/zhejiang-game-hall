.class final Lcom/kwad/components/ad/splashscreen/c/a/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/a/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ez:Lcom/kwad/components/ad/splashscreen/c/a/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/a/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/f$1;->Ez:Lcom/kwad/components/ad/splashscreen/c/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final kz()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/f$1;->Ez:Lcom/kwad/components/ad/splashscreen/c/a/f;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/a/e;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/a/e;-><init>()V

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/c/a/f;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/f$1;->Ez:Lcom/kwad/components/ad/splashscreen/c/a/f;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/a/g;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/a/g;-><init>()V

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/c/a/f;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    return-void
.end method
