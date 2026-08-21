.class final Lcom/tkay/expressad/widget/TYImageView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/widget/TYImageView;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/widget/TYImageView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/widget/TYImageView;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYImageView$1;->a:Lcom/tkay/expressad/widget/TYImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 0

    .line 54
    iget-object p2, p0, Lcom/tkay/expressad/widget/TYImageView$1;->a:Lcom/tkay/expressad/widget/TYImageView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/widget/TYImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
