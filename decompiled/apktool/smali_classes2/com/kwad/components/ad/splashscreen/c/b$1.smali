.class final Lcom/kwad/components/ad/splashscreen/c/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/b;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic CD:Lcom/kwad/components/ad/splashscreen/c/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/b$1;->CD:Lcom/kwad/components/ad/splashscreen/c/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b$1;->CD:Lcom/kwad/components/ad/splashscreen/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/b;->a(Lcom/kwad/components/ad/splashscreen/c/b;)Lcom/kwad/components/core/widget/KsLogoView;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/splashscreen/c/b;->a(Lcom/kwad/components/ad/splashscreen/c/b;Landroid/view/ViewGroup;)V

    return-void
.end method
