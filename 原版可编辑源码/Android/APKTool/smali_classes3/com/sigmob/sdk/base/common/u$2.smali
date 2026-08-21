.class Lcom/sigmob/sdk/base/common/u$2;
.super Landroid/webkit/WebChromeClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/u;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u$2;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceivedTitle(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$2;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->c(Lcom/sigmob/sdk/base/common/u;)Landroid/widget/TextView;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$2;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->c(Lcom/sigmob/sdk/base/common/u;)Landroid/widget/TextView;

    move-result-object p1

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_0
    return-void

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$2;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->c(Lcom/sigmob/sdk/base/common/u;)Landroid/widget/TextView;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$2;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->c(Lcom/sigmob/sdk/base/common/u;)Landroid/widget/TextView;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$2;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->c(Lcom/sigmob/sdk/base/common/u;)Landroid/widget/TextView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_2
    return-void
.end method
