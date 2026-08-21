.class final Lcom/tkay/expressad/mbbanner/a/d/c$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/mbbanner/a/d/c;->e()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 0

    .line 381
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p2}, Lcom/tkay/expressad/mbbanner/a/d/c;->k(Lcom/tkay/expressad/mbbanner/a/d/c;)Landroid/widget/ImageView;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 382
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p2}, Lcom/tkay/expressad/mbbanner/a/d/c;->k(Lcom/tkay/expressad/mbbanner/a/d/c;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 384
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->l(Lcom/tkay/expressad/mbbanner/a/d/c;)Z

    .line 385
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->m(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    .line 386
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->d(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    .line 387
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->e(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 392
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$9;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    const-string p2, "banner show failed because banner default view is exception"

    invoke-static {p1, p2}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/mbbanner/a/d/c;Ljava/lang/String;)V

    return-void
.end method
