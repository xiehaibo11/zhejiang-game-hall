.class final Lcom/kwad/components/ad/f/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/d;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mF:Lcom/kwad/components/ad/f/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/d$1;->mF:Lcom/kwad/components/ad/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleDownloadDialog(Landroid/content/DialogInterface$OnClickListener;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$1;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->a(Lcom/kwad/components/ad/f/d;)Lcom/kwad/components/ad/f/d$a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/components/ad/f/d$a;->handleDownloadDialog(Landroid/content/DialogInterface$OnClickListener;)Z

    move-result p1

    return p1
.end method
