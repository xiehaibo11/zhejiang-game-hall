.class final Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;->onProgressChanged(Landroid/webkit/WebView;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;


# direct methods
.method constructor <init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;)V
    .locals 0

    .line 454
    iput-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 457
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;

    iget-object v0, v0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {v0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->e(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;->setVisibility(I)V

    return-void
.end method
