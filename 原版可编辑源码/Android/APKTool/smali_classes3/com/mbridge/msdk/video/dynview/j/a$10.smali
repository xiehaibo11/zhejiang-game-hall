.class final Lcom/mbridge/msdk/video/dynview/j/a$10;
.super Ljava/lang/Object;
.source "DataEnergizeWrapper.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/dynview/j/a;->a(Landroid/widget/ImageView;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Landroid/widget/ImageView;

.field final synthetic c:Lcom/mbridge/msdk/video/dynview/j/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/dynview/j/a;ILandroid/widget/ImageView;)V
    .locals 0

    .line 597
    iput-object p1, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->c:Lcom/mbridge/msdk/video/dynview/j/a;

    iput p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->a:I

    iput-object p3, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 619
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "mbridge_icon_play_bg"

    const-string v0, "drawable"

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 620
    iget-object p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->c:Lcom/mbridge/msdk/video/dynview/j/a;

    invoke-static {v0}, Lcom/mbridge/msdk/video/dynview/j/a;->g(Lcom/mbridge/msdk/video/dynview/j/a;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    .line 621
    iget-object p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 622
    iget-object p1, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    sget-object p2, Landroid/widget/ImageView$ScaleType;->CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 624
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DataEnergizeWrapper"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_1

    .line 600
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_1

    .line 601
    iget p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->a:I

    const/16 v0, 0x1f5

    if-eq p2, v0, :cond_0

    const/16 v0, 0x322

    if-eq p2, v0, :cond_0

    .line 607
    iget-object p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_0

    .line 604
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/video/dynview/i/a;->a()Lcom/mbridge/msdk/video/dynview/i/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/dynview/i/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_0

    .line 610
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "mbridge_icon_play_bg"

    const-string v0, "drawable"

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 611
    iget-object p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->c:Lcom/mbridge/msdk/video/dynview/j/a;

    invoke-static {v0}, Lcom/mbridge/msdk/video/dynview/j/a;->g(Lcom/mbridge/msdk/video/dynview/j/a;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    .line 612
    iget-object p2, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 613
    iget-object p1, p0, Lcom/mbridge/msdk/video/dynview/j/a$10;->b:Landroid/widget/ImageView;

    sget-object p2, Landroid/widget/ImageView$ScaleType;->CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    :goto_0
    return-void
.end method
