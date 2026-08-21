.class final Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->init()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;I)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;->b:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 0

    .line 156
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_0

    .line 157
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;->b:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {p2}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 163
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;->b:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->a(Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;)Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    move-result-object p1

    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView$1;->a:I

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setImageResource(I)V

    return-void
.end method
