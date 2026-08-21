.class final Lcom/kwad/components/ad/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/a;->showInstallDialog(Landroid/app/Activity;Lcom/kwad/sdk/api/KsExitInstallListener;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic br:Lcom/kwad/sdk/api/KsExitInstallListener;

.field final synthetic bs:Lcom/kwad/components/ad/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/a;Lcom/kwad/sdk/api/KsExitInstallListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/a$1;->bs:Lcom/kwad/components/ad/a;

    iput-object p2, p0, Lcom/kwad/components/ad/a$1;->br:Lcom/kwad/sdk/api/KsExitInstallListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/a$1;->br:Lcom/kwad/sdk/api/KsExitInstallListener;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsExitInstallListener;->onDialogClose()V

    :cond_0
    return-void
.end method
