.class final Lcom/kwad/components/core/page/DownloadLandPageActivity$8;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/DownloadLandPageActivity;->handleCloseBtn()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MH:Lcom/kwad/components/core/page/DownloadLandPageActivity;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity$8;->MH:Lcom/kwad/components/core/page/DownloadLandPageActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    invoke-static {}, Lcom/kwad/components/core/t/c;->qk()Lcom/kwad/components/core/t/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/t/c;->ql()V

    iget-object p1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity$8;->MH:Lcom/kwad/components/core/page/DownloadLandPageActivity;

    invoke-virtual {p1}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->finish()V

    return-void
.end method
