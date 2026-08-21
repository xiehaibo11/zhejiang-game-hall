.class final Lcom/tkay/basead/ui/EndCardView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/EndCardView;->a(Lcom/tkay/core/common/f/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/h;

.field final synthetic b:Lcom/tkay/basead/ui/EndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/EndCardView;Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/tkay/basead/ui/EndCardView$2;->b:Lcom/tkay/basead/ui/EndCardView;

    iput-object p2, p0, Lcom/tkay/basead/ui/EndCardView$2;->a:Lcom/tkay/core/common/f/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 118
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$2;->b:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->a(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/basead/ui/EndCardView$a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 119
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$2;->b:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->a(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/basead/ui/EndCardView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/EndCardView$a;->b()V

    :cond_0
    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView$2;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 85
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$2;->b:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->c(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/ImageView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 87
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$2;->b:Lcom/tkay/basead/ui/EndCardView;

    new-instance v0, Lcom/tkay/basead/ui/EndCardView$2$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/basead/ui/EndCardView$2$1;-><init>(Lcom/tkay/basead/ui/EndCardView$2;Landroid/graphics/Bitmap;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/EndCardView;->post(Ljava/lang/Runnable;)Z

    .line 111
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$2;->b:Lcom/tkay/basead/ui/EndCardView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/b;->a(Landroid/content/Context;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 112
    iget-object p2, p0, Lcom/tkay/basead/ui/EndCardView$2;->b:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p2}, Lcom/tkay/basead/ui/EndCardView;->d(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/core/common/ui/component/RoundImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
