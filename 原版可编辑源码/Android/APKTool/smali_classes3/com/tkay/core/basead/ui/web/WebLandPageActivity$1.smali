.class final Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/webkit/DownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Ljava/lang/String;)V
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

    .line 315
    iput-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    .line 318
    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/common/f/h;

    move-result-object p2

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/common/f/i;

    move-result-object p2

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/common/f/h;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 323
    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/api/IOfferClickHandler;

    move-result-object p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/api/IOfferClickHandler;

    move-result-object p2

    instance-of p2, p2, Lcom/tkay/core/api/IOfferClickHandler;

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/api/IOfferClickHandler;

    move-result-object p2

    iget-object p3, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-virtual {p3}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    iget-object p4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p4}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/common/f/h;

    move-result-object p4

    iget-object p5, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p5}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/common/f/i;

    move-result-object p5

    invoke-virtual {p2, p3, p4, p5, p1}, Lcom/tkay/core/api/IOfferClickHandler;->startDownloadApp(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Ljava/lang/String;)Z

    move-result p2

    if-nez p2, :cond_0

    goto :goto_0

    .line 328
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    const/4 p2, 0x6

    iput p2, p1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    .line 329
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    const/4 p2, 0x1

    iput p2, p1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->d:I

    goto :goto_1

    .line 324
    :cond_1
    :goto_0
    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    const/4 p3, 0x2

    iput p3, p2, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->d:I

    .line 325
    invoke-static {p1}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    .line 326
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    const/4 p2, 0x7

    iput p2, p1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    goto :goto_1

    .line 339
    :cond_2
    iget-object p2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    const/16 p3, 0xb

    iput p3, p2, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    .line 340
    invoke-static {p1}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    .line 343
    :goto_1
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-virtual {p1}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->finish()V

    return-void
.end method
