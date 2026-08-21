.class final Lcom/tkay/core/basead/ui/web/WebLandPageActivity$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;


# direct methods
.method constructor <init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V
    .locals 0

    .line 377
    iput-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$4;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 379
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$4;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p1}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->d(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/WebView;->reload()V

    return-void
.end method
