.class final Lcom/kwad/components/ad/splashscreen/c/b/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic EE:Lcom/kwad/components/ad/splashscreen/c/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/b/a$2;->EE:Lcom/kwad/components/ad/splashscreen/c/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final kz()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a$2;->EE:Lcom/kwad/components/ad/splashscreen/c/b/a;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/b/a;->c(Lcom/kwad/components/ad/splashscreen/c/b/a;)Landroid/widget/FrameLayout;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method
