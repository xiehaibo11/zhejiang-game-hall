.class final Lcom/tkay/expressad/out/LoadingActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/out/LoadingActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/out/LoadingActivity;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/out/LoadingActivity;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity$1;->a:Lcom/tkay/expressad/out/LoadingActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity$1;->a:Lcom/tkay/expressad/out/LoadingActivity;

    invoke-static {v0}, Lcom/tkay/expressad/out/LoadingActivity;->a(Lcom/tkay/expressad/out/LoadingActivity;)Landroid/widget/ImageView;

    move-result-object v0

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 37
    iget-object v0, p0, Lcom/tkay/expressad/out/LoadingActivity$1;->a:Lcom/tkay/expressad/out/LoadingActivity;

    invoke-static {v0}, Lcom/tkay/expressad/out/LoadingActivity;->a(Lcom/tkay/expressad/out/LoadingActivity;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getTag()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 38
    iget-object p2, p0, Lcom/tkay/expressad/out/LoadingActivity$1;->a:Lcom/tkay/expressad/out/LoadingActivity;

    invoke-static {p2}, Lcom/tkay/expressad/out/LoadingActivity;->a(Lcom/tkay/expressad/out/LoadingActivity;)Landroid/widget/ImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 39
    iget-object p2, p0, Lcom/tkay/expressad/out/LoadingActivity$1;->a:Lcom/tkay/expressad/out/LoadingActivity;

    invoke-static {p2, p1}, Lcom/tkay/expressad/out/LoadingActivity;->a(Lcom/tkay/expressad/out/LoadingActivity;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
